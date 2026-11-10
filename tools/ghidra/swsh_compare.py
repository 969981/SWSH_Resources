#!/usr/bin/env python3
"""Compare evidence from Sword/Shield 1.3.2 Ghidra SQLite exports.

Identical-entry functions are *candidate correspondence*, not proved identity.
Function-body SHA256 uses exact Ghidra body address ranges, not a guessed span.
Identical raw bytes do not prove identical runtime behavior or semantics.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
import sqlite3
from collections import Counter, defaultdict
from pathlib import Path


def load(db_path: Path) -> tuple[dict, dict]:
    entries = {}
    fingerprints = defaultdict(list)
    with sqlite3.connect(db_path) as db:
        if db.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
            raise ValueError("SQLite is corrupt: " + str(db_path))
        for entry, name, body_size, digest, status, code in db.execute(
            """SELECT f.entry, f.name, f.body_bytes, f.body_sha256,
                      d.status, d.c
               FROM functions f LEFT JOIN decompilation d ON d.entry = f.entry
               ORDER BY f.entry"""
        ):
            data = {
                "name": name, "body_bytes": body_size, "body_sha256": digest,
                "decompile_status": status or "MISSING",
                "c_sha256": hashlib.sha256(code.encode("utf-8")).hexdigest()
                            if status == "OK" and code else None,
            }
            entries[entry] = data
            if digest:
                fingerprints[digest].append(entry)
    return entries, fingerprints


def compare(sword: Path, shield: Path, out: Path) -> dict:
    sword_entries, sw_hash = load(sword)
    shield_entries, sh_hash = load(shield)
    out.mkdir(parents=True, exist_ok=True)
    counts = Counter()
    comparison_path = out / "same_entry_function_comparison.csv"
    with comparison_path.open("w", encoding="utf-8", newline="") as fp:
        wr = csv.writer(fp)
        wr.writerow(("entry", "status", "sword_name", "shield_name",
                     "sword_body_bytes", "shield_body_bytes",
                     "sword_body_sha256", "shield_body_sha256",
                     "sword_decompile_status", "shield_decompile_status",
                     "sword_c_sha256", "shield_c_sha256", "c_comparison"))
        for entry in sorted(set(sword_entries) | set(shield_entries)):
            left = sword_entries.get(entry)
            right = shield_entries.get(entry)
            if left is None:
                state = "ONLY_SHIELD"
            elif right is None:
                state = "ONLY_SWORD"
            elif not left["body_sha256"] or not right["body_sha256"]:
                state = "BYTE_HASH_UNAVAILABLE"
            elif left["body_sha256"] == right["body_sha256"]:
                state = "SAME_ENTRY_MATCHED_MACHINE_BYTES"
            else:
                state = "SAME_ENTRY_DIFFERENT_MACHINE_BYTES"
            counts[state] += 1
            c_comparison = ("C_PSEUDOCODE_SHA_EQUAL" if left and right and
                            left["c_sha256"] and right["c_sha256"] and
                            left["c_sha256"] == right["c_sha256"]
                            else "C_PSEUDOCODE_SHA_DIFFERENT_OR_MISSING")
            wr.writerow([entry, state,
                         left["name"] if left else "", right["name"] if right else "",
                         left["body_bytes"] if left else "", right["body_bytes"] if right else "",
                         left["body_sha256"] if left else "", right["body_sha256"] if right else "",
                         left["decompile_status"] if left else "", right["decompile_status"] if right else "",
                         left["c_sha256"] if left else "", right["c_sha256"] if right else "",
                         c_comparison])
    relocated = []
    # Strict uniqueness: function body matching on raw bytes alone is still not proof
    # of semantic identity but can give a strong candidate across changing offsets.
    for digest in sorted(set(sw_hash) & set(sh_hash)):
        if len(sw_hash[digest]) == 1 and len(sh_hash[digest]) == 1:
            a = sw_hash[digest][0]
            b = sh_hash[digest][0]
            if a != b:
                relocated.append((a, b, digest, sword_entries[a]["name"],
                                  shield_entries[b]["name"]))
    with (out / "same_machine_bytes_different_entry_candidates.csv").open(
        "w", encoding="utf-8", newline=""
    ) as fp:
        wr = csv.writer(fp)
        wr.writerow(("sword_entry", "shield_entry", "body_sha256",
                     "sword_name", "shield_name"))
        wr.writerows(relocated)
    summary = {
        "status": "STATIC_GHIDRA_COMPARISON",
        "version": "1.3.2",
        "sword_functions": len(sword_entries),
        "shield_functions": len(shield_entries),
        "same_entry_comparison_counts": dict(counts),
        "uniquely_matching_body_sha256_at_different_entries": len(relocated),
        "caveat": (
            "Same-entry comparison is only a candidate function alignment. "
            "Hash refers to bytes in Ghidra-identified function-body ranges. "
            "Equal machine bytes do not imply equivalent external calls, data or runtime semantics. "
            "Different source pseudocode hashes may reflect analysis decisions."
        ),
    }
    (out / "summary.json").write_text(json.dumps(summary, indent=2) + "\n",
                                      encoding="utf-8")
    print(json.dumps(summary, indent=2), flush=True)
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
