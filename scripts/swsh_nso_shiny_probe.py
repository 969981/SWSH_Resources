#!/usr/bin/env python3
"""Read-only Sword / Shield NSO 1.3.2 shiny-reroll static code locator.

Searches the version-specific *decompressed* NSO TEXT, not raw file offsets.
The anchor comes from tools/pkNX/pkNX.Game/Editors/ShinyRate/ShinyRateSWSH.cs.
Candidate RVA != dynamically proven shiny-lock function address.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import struct
from pathlib import Path

PRELUDE = bytes.fromhex(
    "ff0306d1 fc6f12a9 fa6713a9 f85f14a9 f65715a9 "
    "f44f16a9 fd7b17a9 fdc30591 fac600f0"
)
CHECK_OFFSET = 0x2C8
BREAK_OFFSET = 0x2CC
CHECK_DEFAULT = bytes.fromhex("3f03176b")
BREAK_DEFAULT = bytes.fromhex("62000054")
BREAK_NOP = bytes.fromhex("1f2003d5")
SEARCH_START = 0x700000


def lz4_raw(src: bytes, expected_size: int) -> bytes:
    """LZ4 raw block decoder with strict bounds and maximum expansion."""
    if expected_size < 0 or expected_size > 512 * 1024 * 1024:
        raise ValueError("unexpected LZ4 output size")
    pos = 0
    out = bytearray()
    while pos < len(src):
        token = src[pos]
        pos += 1
        n = token >> 4
        if n == 15:
            while True:
                if pos >= len(src):
                    raise ValueError("truncated literal length")
                step = src[pos]
                pos += 1
                n += step
                if step != 255:
                    break
        if pos + n > len(src) or len(out) + n > expected_size:
            raise ValueError("literal out of bounds")
        out.extend(src[pos:pos + n])
        pos += n
        if pos == len(src):
            break
        if pos + 2 > len(src):
            raise ValueError("truncated match distance")
        distance = int.from_bytes(src[pos:pos + 2], "little")
        pos += 2
        if distance == 0 or distance > len(out):
            raise ValueError("invalid match distance")
        m = (token & 15) + 4
        if (token & 15) == 15:
            while True:
                if pos >= len(src):
                    raise ValueError("truncated match length")
                step = src[pos]
                pos += 1
                m += step
                if step != 255:
                    break
        if len(out) + m > expected_size:
            raise ValueError("match exceeds expected size")
        seed = bytes(out[-distance:])
        out.extend((seed * ((m + distance - 1) // distance))[:m])
    if len(out) != expected_size:
        raise ValueError(f"decoded {len(out)} bytes != {expected_size}")
    return bytes(out)


def locate(nso: bytes, game: str):
    if len(nso) < 0x100 or nso[:4] != b"NSO0":
        raise ValueError("invalid NSO0 input")
    flags = struct.unpack_from("<I", nso, 0x0C)[0]
    file_offset, text_rva, text_size = struct.unpack_from("<III", nso, 0x10)
    compressed = bool(flags & 1)
    stored_size = struct.unpack_from("<I", nso, 0x60)[0] if compressed else text_size
    if file_offset + stored_size > len(nso):
        raise ValueError("TEXT exceeds NSO source")
    stored = nso[file_offset:file_offset + stored_size]
    text = lz4_raw(stored, text_size) if compressed else stored
    actual_sha = hashlib.sha256(text).digest()
    expected_sha = nso[0xA0:0xC0]
    # Some NSO headers do not use valid hash fields; report instead of assuming.
    hash_ok = actual_sha == expected_sha
    build = nso[0x40:0x60].hex().upper()
    module_sha = hashlib.sha256(nso).hexdigest()
    positions = []
    off = text.find(PRELUDE, min(SEARCH_START, len(text)))
    while off >= 0:
        positions.append(off)
        off = text.find(PRELUDE, off + 1)
    rows = []
    for offset in positions:
        for suffix, delta, expected in (
            ("function_entry", 0, PRELUDE),
            ("reroll_cmp", CHECK_OFFSET, CHECK_DEFAULT),
            ("reroll_break", BREAK_OFFSET, BREAK_DEFAULT),
        ):
            loc = offset + delta
            observed = text[loc:loc + len(expected)]
            check = (
                "ANCHOR_MATCH" if delta == 0 else
                "EXPECTED_OPCODE" if observed == expected else
                "NOP_OVERRIDE" if delta == BREAK_OFFSET and observed == BREAK_NOP else
                "DIFFERENT_OPCODE"
            )
            rows.append({
                "game": game, "version": "1.3.2", "build_id": build,
                "main_sha256": module_sha, "text_sha256": actual_sha.hex(),
                "text_header_sha256_matches": hash_ok,
                "anchor_matches": len(positions),
                "feature": "pkNX.ShinyRateSWSH.reroll_logic",
                "point": suffix,
                "text_relative_offset_hex": f"0x{loc:X}",
                "rva_hex": f"0x{text_rva + loc:X}",
                "instruction_check": check,
                "bytes_hex": observed.hex(),
                "evidence_level": "STATIC_UNVERIFIED_RUNTIME",
            })
    metadata = {
        "game": game, "version": "1.3.2", "build_id": build,
        "main_sha256": module_sha, "text_sha256": actual_sha.hex(),
        "text_expected_sha256": expected_sha.hex(),
        "text_header_sha256_matches": hash_ok,
        "text_rva": text_rva, "text_size": text_size,
        "compressed": compressed, "anchor_matches": len(positions),
        "source_pattern": "tools/pkNX/pkNX.Game/Editors/ShinyRate/ShinyRateSWSH.cs",
        "status": "STATIC_CANDIDATE" if len(positions) == 1 else
                  ("NOT_FOUND" if not positions else "AMBIGUOUS"),
    }
    return metadata, rows


def run(repo: Path, out: Path):
    all_rows = []
    result = []
    for game in ("sword", "shield"):
        meta, rows = locate((repo / f"v1.3.2/0/{game}_main").read_bytes(), game)
        result.append(meta)
        all_rows.extend(rows)
    out.mkdir(parents=True, exist_ok=True)
    (out / "nso_shiny_probe.json").write_text(
        json.dumps({"results": result, "disclaimer": (
            "RVA from code pattern in decompressed TEXT, not an authenticated runtime function; "
            "do not confuse reroll logic with ShinyLock enforcement or PID generation."
        )}, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    with (out / "nso_shiny_candidates.csv").open("w", newline="", encoding="utf-8-sig") as f:
        fields = [
            "game","version","build_id","main_sha256","text_sha256",
            "text_header_sha256_matches","anchor_matches","feature","point",
            "text_relative_offset_hex","rva_hex","instruction_check",
            "bytes_hex","evidence_level",
        ]
        writer = csv.DictWriter(f, fieldnames=fields)
        writer.writeheader()
        writer.writerows(all_rows)
    print(json.dumps(result, ensure_ascii=False))
    return result


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--out", type=Path, default=Path("Unpack/v1.3.2/catalog"))
    args = parser.parse_args()
    run(args.repo, args.out)


if __name__ == "__main__":
    main()
