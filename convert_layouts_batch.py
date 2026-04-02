import struct, glob

MAPS_DIR = "data/layouts"

# Vanilla layout (input)
OLD_METATILE_MASK   = 0x03FF  # bits 0-9
OLD_COLLISION_MASK  = 0x0C00  # bits 10-11
OLD_ELEVATION_MASK  = 0xF000  # bits 12-15
OLD_COLLISION_SHIFT = 10
OLD_ELEVATION_SHIFT = 12

# New layout (output)
NEW_METATILE_MASK   = 0x07FF  # bits 0-10
NEW_COLLISION_MASK  = 0x0800  # bit 11
NEW_ELEVATION_MASK  = 0xF000  # bits 12-15
NEW_COLLISION_SHIFT = 11
NEW_ELEVATION_SHIFT = 12

total_files   = 0
total_changed = 0

for path in glob.glob(f"{MAPS_DIR}/**/*.bin", recursive=True):
    with open(path, "rb") as f:
        data = bytearray(f.read())

    if len(data) % 2 != 0:
        print(f"  WARNING: odd byte count in {path}, skipping")
        continue

    changed = 0
    for i in range(0, len(data), 2):
        entry     = struct.unpack_from("<H", data, i)[0]
        metatile  = (entry & OLD_METATILE_MASK)
        collision = (entry >> OLD_COLLISION_SHIFT) & 0x1  # only keep 1 bit
        elevation = (entry >> OLD_ELEVATION_SHIFT) & 0xF

        new_entry = metatile | (collision << NEW_COLLISION_SHIFT) | (elevation << NEW_ELEVATION_SHIFT)

        if new_entry != entry:
            struct.pack_into("<H", data, i, new_entry)
            changed += 1

    if changed:
        with open(path, "wb") as f:
            f.write(data)
        print(f"  {path}: {changed} blocks updated")

    total_files += 1
    total_changed += changed

print(f"\ndone — {total_files} files scanned, {total_changed} total blocks updated")