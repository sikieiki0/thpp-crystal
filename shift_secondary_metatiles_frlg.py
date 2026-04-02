import struct, glob

MAPS_DIR          = "data/layouts"
OLD_PRIMARY_COUNT = 640
NEW_PRIMARY_COUNT = 1024
SECONDARY_COUNT   = 384  # vanilla secondary size (1024 - 640)

# New layout masks (from step 1)
METATILE_MASK  = 0x07FF  # bits 0-10
COLLISION_MASK = 0x0800  # bit 11
ELEVATION_MASK = 0xF000  # bits 12-15

total_files  = 0
total_blocks = 0

for path in glob.glob(f"{MAPS_DIR}/**/*_Frlg*/*.bin", recursive=True):
    with open(path, "rb") as f:
        data = bytearray(f.read())

    if len(data) % 2 != 0:
        print(f"  WARNING: odd byte count in {path}, skipping")
        continue

    changed = 0
    for i in range(0, len(data), 2):
        entry      = struct.unpack_from("<H", data, i)[0]
        metatile   = entry & METATILE_MASK
        flags      = entry & (COLLISION_MASK | ELEVATION_MASK)

        if OLD_PRIMARY_COUNT <= metatile < OLD_PRIMARY_COUNT + SECONDARY_COUNT:
            new_id = NEW_PRIMARY_COUNT + (metatile - OLD_PRIMARY_COUNT)
            if new_id > METATILE_MASK:
                print(f"  ERROR: remapped ID {new_id} exceeds 11-bit range at offset {i} in {path}")
                continue
            struct.pack_into("<H", data, i, flags | new_id)
            changed += 1

    if changed:
        with open(path, "wb") as f:
            f.write(data)
        print(f"  {path}: {changed} blocks remapped")

    total_files  += 1
    total_blocks += changed

print(f"\ndone — {total_files} files scanned, {total_blocks} total blocks remapped")