import os
import argparse
import struct

# FireRed metatile_attributes.bin is 4 bytes (u32) per metatile:
#   bits  [8:0]  = behaviour
#   bit   [9]    = terrain type
#   bits [31:24] = encounter type etc.
# Unlike Emerald, there are NO layer_type bits in the FR attribute format,
# so every metatile gets the same fixed conversion:
#
#   layer_type 1 equivalent: [bottom 4 tiles][top→middle 4 tiles][empty 4 tiles]
#
# i.e. bottom stays bottom, old top becomes middle, new top layer is empty.
#
# Already-converted guard:
#   Pre-conversion:  metatiles.bin == 4 * attributes.bin  (16 B vs 4 B each)
#   Post-conversion: metatiles.bin == 6 * attributes.bin  (24 B vs 4 B each)

parser = argparse.ArgumentParser(
    description='Convert pokefirered metatiles to use the triple layer system.'
)
parser.add_argument('--tsroot', required=True,
                    help='Path to the tilesets directory in your pokefirered project, '
                         'e.g. /path/to/pokefirered/data/tilesets')

args = parser.parse_args()

if not os.path.exists(args.tsroot):
    print(f"Given tilesets root directory does not exist: {args.tsroot}")
    exit(1)

# FireRed tilesets live flat under tsroot/primary/ and tsroot/secondary/
primary_path   = os.path.join(args.tsroot, 'primary')
secondary_path = os.path.join(args.tsroot, 'secondary')

if not os.path.exists(primary_path):
    print(f"[ERR] Given tilesets root directory does not contain a primary folder, aborting.")
    exit(1)

if not os.path.exists(secondary_path):
    print(f"[ERR] Given tilesets root directory does not contain a secondary folder, aborting.")

tileset_dirs = []
_, dirs, _ = next(os.walk(primary_path))
tileset_dirs += map(lambda d: os.path.join(primary_path, d), dirs)
_, dirs, _ = next(os.walk(secondary_path))
tileset_dirs += map(lambda d: os.path.join(secondary_path, d), dirs)

for tileset_dir in tileset_dirs:
    tileset_name = os.path.basename(tileset_dir)
    metatiles_path           = os.path.join(tileset_dir, 'metatiles.bin')
    metatile_attributes_path = os.path.join(tileset_dir, 'metatile_attributes.bin')

    if not os.path.exists(metatiles_path):
        print(f"[SKIP] {tileset_name} skipped because metatiles.bin was not found.")
        continue
    if not os.path.exists(metatile_attributes_path):
        print(f"[SKIP] {tileset_name} skipped because metatile_attributes.bin was not found.")
        continue

    # FR attributes are 4 bytes each; pre-conversion metatiles are 16 bytes each -> ratio 4
    if os.path.getsize(metatiles_path) != 4 * os.path.getsize(metatile_attributes_path):
        print(f"[SKIP] {tileset_name} skipped because metatiles.bin is not four times the size "
              f"of metatile_attributes.bin (already converted?)")
        continue

    # Read attributes (u32 each) — copied as-is, no layer_type bits to strip
    meta_attributes = []
    with open(metatile_attributes_path, 'rb') as fileobj:
        for chunk in iter(lambda: fileobj.read(4), b''):
            meta_attributes.append(struct.unpack('<I', chunk)[0])

    # Read and expand metatiles
    # Each metatile: 8 u16 -> 12 u16
    #   [0:4]  bottom layer  -> [0:4]  bottom  (unchanged)
    #   [4:8]  top layer     -> [4:8]  middle  (was top)
    #   (new)                -> [8:12] top     (empty)
    new_metatile_data = []
    with open(metatiles_path, 'rb') as fileobj:
        for chunk in iter(lambda: fileobj.read(16), b''):
            metatile_data = struct.unpack('<HHHHHHHH', chunk)
            new_metatile_data += metatile_data[:4]   # bottom -> bottom
            new_metatile_data += metatile_data[4:]   # top    -> middle
            new_metatile_data += [0] * 4             # new empty top

    metatile_buffer           = struct.pack(f'<{len(new_metatile_data)}H', *new_metatile_data)
    metatile_attribute_buffer = struct.pack(f'<{len(meta_attributes)}I',  *meta_attributes)

    with open(metatiles_path, 'wb') as fileobj:
        fileobj.write(metatile_buffer)
    with open(metatile_attributes_path, 'wb') as fileobj:
        fileobj.write(metatile_attribute_buffer)

    print(f'[OK] Converted {tileset_name}')
