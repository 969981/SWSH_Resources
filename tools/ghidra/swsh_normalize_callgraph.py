#!/usr/bin/env python3
"""Resolve false callgraph mismatches induced by Sword/Shield address relocation.

For byte-identical function bodies located at different entries, direct-call
target displacement (callee address - caller entry) should be conserved if
calls are merely relocated. Compare those numeric displacements, not absolute
callees or incomplete exact-hash anchor coverage. These are Ghidra-observed
direct calls, not proofs of gameplay behavior.
"""
from __future__ import annotations

import argparse
import csv
import json
from collections import Counter, defaultdict
from pathlib import Path

import swsh_callgraph_map


def inspect(sword_file: Path, shield_file: Path, baseline_csv: Path, out: Path):
    sword, sword_hashes, sword_edges, ss = swsh_callgraph_map.load(sword_file, "sword")
    shield, shield_hashes, shield_edges, hs = swsh_callgraph_map.load(shield_file, "shield")
    unique = {}
    for h in set(sword_hashes) & set(shield_hashes):
        left, right = sword_hashes[h], shield_hashes[h]
        if len(left) == 1 and len(right) == 1:
            unique[left[0]] = right[0]
    original = []
    with baseline_csv.open(newline="", encoding="utf-8") as file:
        for r in csv.DictReader(file):
            if r["status"] != "DIFFERENT_IDENTIFIED_DIRECT_CALLEES":
                continue
            if unique.get(r["sword_entry"]) != r["shield_entry"]:
                raise ValueError("Baseline contains a mismatched/nonunique function body")
            original.append(r)
    if len(original) != 15:
        raise ValueError("Expected exactly 15 source-backed mapped-call deltas; found " + str(len(original)))

    out.mkdir(parents=True, exist_ok=True)
    detail = []
    status = Counter()
    for record in original:
        entry_s = record["sword_entry"]
        entry_h = record["shield_entry"]
        offset_s = int(entry_s, 16)
        offset_h = int(entry_h, 16)
        left = sword_edges.get(entry_s, set())
        right = shield_edges.get(entry_h, set())
        lrelative = {int(v, 16) - offset_s for v in left}
        rrelative = {int(v, 16) - offset_h for v in right}
        if not left and not right:
            state = "NO_COMPARABLE_DIRECT_CALLS"
        elif lrelative == rrelative:
            state = "CALL_TARGET_RELATIVE_OFFSETS_IDENTICAL"
        else:
            state = "DIRECT_CALL_TARGET_RELATIVE_OFFSETS_DIFFER"
        status[state] += 1
        left_only = sorted(lrelative - rrelative)
        right_only = sorted(rrelative - lrelative)
        detail.append({
            "sword_entry": entry_s,
            "shield_entry": entry_h,
            "entry_delta_hex": hex(offset_h - offset_s),
            "body_sha256": sword[entry_s]["body_sha256"],
            "sword_direct_target_count": len(left),
            "shield_direct_target_count": len(right),
            "common_relative_targets": len(lrelative & rrelative),
            "only_sword_relative_target_count": len(left_only),
            "only_shield_relative_target_count": len(right_only),
            "status": state,
            "only_sword_relative_offsets": ";".join(hex(x) for x in left_only[:30]),
            "only_shield_relative_offsets": ";".join(hex(x) for x in right_only[:30]),
            "important_note": (
                "Equal target offsets mean raw call graph matches after caller relocation, "
                "even if exact-byte target-function map is incomplete. Unequal target "
                "offsets are static evidence for manual CFG review, not gameplay proof."
            ),
        })
    columns = (
        "sword_entry", "shield_entry", "entry_delta_hex", "body_sha256",
        "sword_direct_target_count", "shield_direct_target_count",
        "common_relative_targets", "only_sword_relative_target_count",
        "only_shield_relative_target_count", "status",
        "only_sword_relative_offsets", "only_shield_relative_offsets",
        "important_note"
    )
    with (out / "normalized_15_call_differences.csv").open(
        "w", encoding="utf-8", newline=""
    ) as file:
        writer = csv.DictWriter(file, fieldnames=columns)
        writer.writeheader()
        writer.writerows(detail)

    # Independently audit all strong anchors to ensure other differences
    # are not hidden by the original mapped-target-only comparison.
    all_status = Counter()
    different_rows = []
    for sword_entry, shield_entry in sorted(unique.items()):
        a = {int(v, 16) - int(sword_entry, 16)
             for v in sword_edges.get(sword_entry, ())}
        b = {int(v, 16) - int(shield_entry, 16)
             for v in shield_edges.get(shield_entry, ())}
        if not a and not b:
            all_status["NO_KNOWN_DIRECT_CALLS"] += 1
        elif a == b:
            all_status["SAME_RELATIVE_DIRECT_CALLEE_OFFSETS"] += 1
        else:
            all_status["DIFFERENT_RELATIVE_DIRECT_CALLEE_OFFSETS"] += 1
            different_rows.append((
                sword_entry, shield_entry,
                sword[sword_entry]["body_bytes"],
                len(a), len(b), len(a - b), len(b - a),
                ";".join(hex(x) for x in sorted(a - b)[:30]),
                ";".join(hex(x) for x in sorted(b - a)[:30])
            ))
    with (out / "all_anchor_relative_call_delta_candidates.csv").open(
        "w", encoding="utf-8", newline=""
    ) as file:
        writer = csv.writer(file)
        writer.writerow((
            "sword_entry", "shield_entry", "body_bytes",
            "sword_known_direct_callees", "shield_known_direct_callees",
            "sword_only_relative_target_offsets", "shield_only_relative_target_offsets",
            "first_sword_only_offsets", "first_shield_only_offsets"
        ))
        writer.writerows(different_rows)

    report = {
        "status": "GHIDRA_STATIC_RELOCATION_NORMALIZED_CALLGRAPH_AUDIT",
        "source_run_id": 42771375134,
        "baseline_15_mapped_target_differences": len(original),
        "baseline_15_normalized_statuses": dict(status),
        "total_unique_byte_identity_pairs": len(unique),
        "all_exact_body_pairs_relative_call_statuses": dict(all_status),
        "sword_direct_calls_with_contiguous_caller": ss["call_references_with_known_direct_callee"],
        "shield_direct_calls_with_contiguous_caller": hs["call_references_with_known_direct_callee"],
        "limitations": (
            "Only Ghidra direct calls to known function entries within a single "
            "contiguous caller interval are included. Equal relative offsets prove "
            "this observed address-relative direct-call topology matches, not "
            "equivalent semantics or data. Differences require manual investigation "
            "for import/reconstruction artifacts versus actual logic."
        )
    }
    (out / "summary.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
    )
    (out / "README.md").write_text(
        "# SWSH 1.3.2: relocation-normalized direct-call comparison\n\n"
        "The original exact-body match mapped 22,520 pairs and flagged 15 "
        "differences among globally unique byte-identical callers. Every one "
        "of those 15 callers is relocated. Comparing absolute target addresses "
        "or the subset of target functions with unique byte hashes can therefore "
        "produce misleading call-difference labels.\n\n"
        "This audit compares **callee RVA minus caller entry RVA** across the two "
        "versions for all known direct-call targets in contiguous function bodies, "
        "not just targets with unique byte fingerprints. It checks both the "
        "15 earlier cases and every uniquely matched caller.\n\n"
        "## Artifacts\n\n"
        "- normalized_15_call_differences.csv: evidence classification for the 15 suspected changes\n"
        "- all_anchor_relative_call_delta_candidates.csv: every relocated-normalized direct-call mismatch found in all 22,520 strong matches\n"
        "- summary.json: aggregate counts and source-run evidence\n\n"
        "Identical relative call offsets are consistent with pure address "
        "relocation. Non-identical offsets are **static reverse-engineering "
        "candidates**, not yet verified gameplay differences. Continue with "
        "CFG/SSA, function prototypes, data references and real runtime evidence.\n",
        encoding="utf-8"
    )
    print(json.dumps(report, indent=2, ensure_ascii=False))
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--sword", type=Path, required=True)
    parser.add_argument("--shield", type=Path, required=True)
    parser.add_argument("--baseline", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    inspect(args.sword, args.shield, args.baseline, args.out)


if __name__ == "__main__":
    main()
