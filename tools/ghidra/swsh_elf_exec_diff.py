#!/usr/bin/env python3
"""Evidence-only Sword vs Shield ELF64 executable PT_LOAD byte comparison.

No disassembler needed: a shared virtual address is an aligned comparison, not
a proven function correspondence. We never classify different VA segments as
equal or matching functions without direct machine-byte evidence.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import struct
from pathlib import Path

PT_LOAD = 1
PF_X = 1


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def load_elf(path: Path) -> dict:
    raw = path.read_bytes()
    if len(raw) < 64 or raw[:7] != b"\x7fELF\x02\x01\x01":
        raise ValueError("Not an ELF64 little-endian binary: " + str(path))
    (etype, machine, version, entry, phoff, shoff, flags,
     ehsize, phentsize, phnum, shentsize, shnum, shstrndx) = struct.unpack_from(
         "<HHIQQQIHHHHHH", raw, 16)
    if machine != 183 or etype not in (2, 3) or phentsize < 56:
        raise ValueError("Expected AArch64 ELF: " + str(path))
    regions = []
    for n in range(phnum):
        position = phoff + n * phentsize
        if position + 56 > len(raw):
            raise ValueError("Truncated ELF program headers")
        ptype, pflags, offset, vaddr, paddr, filesize, memsize, alignment = struct.unpack_from(
            "<IIQQQQQQ", raw, position)
        if ptype == PT_LOAD and pflags & PF_X and filesize:
            if offset + filesize > len(raw):
                raise ValueError("Executable ELF segment exceeds file")
            blob = raw[offset:offset + filesize]
            regions.append({
                "index": n, "vaddr": vaddr, "file_offset": offset,
                "size": filesize, "mem_size": memsize,
                "sha256": sha256(blob), "bytes": blob
            })
    if not regions:
        raise ValueError("No executable PT_LOAD segment")
    return {"path": str(path), "size": len(raw), "sha256": sha256(raw),
            "entrypoint": entry, "regions": regions}


def compare(left: Path, right: Path, output: Path) -> dict:
    sword = load_elf(left)
    shield = load_elf(right)
    by_va = {r["vaddr"]: r for r in shield["regions"]}
    compared = []
    unmatched_sword = []
    matched_shield = set()
    for a in sword["regions"]:
        b = by_va.get(a["vaddr"])
        if b is None:
            unmatched_sword.append(hex(a["vaddr"]))
            continue
        matched_shield.add(b["vaddr"])
        length = min(a["size"], b["size"])
        x, y = a["bytes"][:length], b["bytes"][:length]
        differences = sum(u != v for u, v in zip(x, y))
        # AArch64 fixed-width instruction delta by matching virtual address.
        aligned_len = length - (length % 4)
        changed_word_count = 0
        first_changed = []
        for i in range(0, aligned_len, 4):
            if x[i:i + 4] != y[i:i + 4]:
                changed_word_count += 1
                if len(first_changed) < 128:
                    first_changed.append(hex(a["vaddr"] + i))
        compared.append({
            "virtual_address_start": hex(a["vaddr"]),
            "sword_segment_index": a["index"],
            "shield_segment_index": b["index"],
            "sword_bytes": a["size"],
            "shield_bytes": b["size"],
            "shared_bytes": length,
            "unmatched_tail_sword_bytes": a["size"] - length,
            "unmatched_tail_shield_bytes": b["size"] - length,
            "shared_byte_differences": differences,
            "shared_4byte_word_differences": changed_word_count,
            "shared_4byte_word_count": aligned_len // 4,
            "first_128_changed_word_virtual_addresses": first_changed,
            "sword_sha256": a["sha256"],
            "shield_sha256": b["sha256"],
            "byte_equal_in_shared_span": differences == 0,
        })
    summary = {
        "status": "VERIFIED_EXECUTABLE_PROGRAM_SEGMENT_BYTES",
        "method": "Match executable ELF64 PT_LOAD segments by identical vaddr; count differing file bytes and AArch64 4-byte units",
        "sword": {"bytes": sword["size"], "elf_sha256": sword["sha256"],
                  "entrypoint": hex(sword["entrypoint"]),
                  "exec_segments": len(sword["regions"])},
        "shield": {"bytes": shield["size"], "elf_sha256": shield["sha256"],
                   "entrypoint": hex(shield["entrypoint"]),
                   "exec_segments": len(shield["regions"])},
        "aligned_executable_segments": compared,
        "unmatched_sword_segment_addresses": unmatched_sword,
        "unmatched_shield_segment_addresses": [
            hex(v["vaddr"]) for v in shield["regions"] if v["vaddr"] not in matched_shield
        ],
        "caveat": (
            "Only matching virtual addresses and raw bytes are compared; this is "
            "not proof of function identity, semantic equivalence, or successful Ghidra analysis. "
            "Full function-body comparison is performed separately after Ghidra finishes."
        )
    }
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(summary, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"status": summary["status"], "matched_segments": len(compared),
                      "changed_bytes": sum(c["shared_byte_differences"] for c in compared),
                      "changed_words": sum(c["shared_4byte_word_differences"] for c in compared)},
                     indent=2))
    return summary


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--sword", type=Path, required=True)
    parser.add_argument("--shield", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    compare(args.sword, args.shield, args.out)


if __name__ == "__main__":
    main()
