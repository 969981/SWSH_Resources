#!/usr/bin/env python3
"""Version-aware Ghidra function map and direct-call delta audit for SWSH 1.3.2.

Inputs are the two *real* Ghidra 12.2 SQLite exports from Actions 42771375134.
A function-body hash identifies exact bytes, not semantic equivalence.
A callgraph difference is a static direct-call observation, not proof of a
gameplay logic difference (indirection, relocation and analysis may differ).
"""
from __future__ import annotations

import argparse
import bisect
import csv
import hashlib
import json
import sqlite3
from collections import Counter, defaultdict
from pathlib import Path

ELF_SHA = {
    "sword": "4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43",
    "shield": "a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a",
}
EXPECTED_FUNCTIONS = {"sword": 47983, "shield": 47984}


def load(path, game):
    database = sqlite3.connect("file:" + str(path.resolve()) + "?mode=ro", uri=True)
    database.row_factory = sqlite3.Row
    if database.execute("PRAGMA integrity_check").fetchone()[0] != "ok":
        raise ValueError(game + ": SQLite integrity check failed")
    metadata = dict(database.execute("SELECT key,value FROM metadata"))
    if metadata.get("original_elf_sha256") != ELF_SHA[game]:
        raise ValueError(game + ": original ELF SHA-256 does not match")
    functions = {}
    digests = defaultdict(list)
    intervals = []
    for r in database.execute(
        "SELECT entry,name,min_addr,max_addr,body_bytes,body_sha256,signature "
        "FROM functions ORDER BY min_addr"
    ):
        entry = r["entry"]
        if entry in functions:
            raise ValueError(game + ": repeated entry")
        fn = dict(r)
        functions[entry] = fn
        h = fn.get("body_sha256")
        if h and len(h) == 64 and fn.get("body_bytes", 0) > 0:
            digests[h].append(entry)
        lo, hi = fn.get("min_addr"), fn.get("max_addr")
        try:
            start = int(lo, 16)
            end = int(hi, 16)
        except (ValueError, TypeError):
            continue
        if (fn["body_bytes"] == end - start + 1 and start <= end):
            # Strict single contiguous function-body interval: avoids attaching
            # references from gaps in multi-range Ghidra function bodies.
            intervals.append((start, end, entry))
    if len(functions) != EXPECTED_FUNCTIONS[game]:
        raise ValueError(game + ": unexpected full-run function count")
    intervals.sort()
    starts = [v[0] for v in intervals]
    edges = defaultdict(set)
    call_refs = 0
    attributed = 0
    mapped_targets = 0
    ambiguous_intervals = 0
    # References have been classified as 'call' by actual Ghidra. Exclude any
    # source not attributable to an unambiguous contiguous function body.
    for src, dest in database.execute(
        "SELECT from_addr,to_addr FROM references_full "
        "WHERE is_call=1 ORDER BY from_addr"
    ):
        call_refs += 1
        try:
            addr = int(src, 16)
        except (ValueError, TypeError):
            continue
        idx = bisect.bisect_right(starts, addr) - 1
        if idx < 0 or addr > intervals[idx][1]:
            continue
        # If intervals overlap, source ownership cannot be proved by the
        # min/max export alone, so do not emit an inferred edge.
        if idx > 0 and intervals[idx - 1][1] >= addr:
            ambiguous_intervals += 1
            continue
        source_entry = intervals[idx][2]
        attributed += 1
        if dest in functions:
            edges[source_entry].add(dest)
            mapped_targets += 1
    database.close()
    coverage = {
        "function_count": len(functions),
        "contiguous_function_bodies": len(intervals),
        "all_ghidra_call_references": call_refs,
        "call_references_with_contiguous_caller": attributed,
        "call_references_with_known_direct_callee": mapped_targets,
        "ambiguous_interval_attributions_excluded": ambiguous_intervals,
        "original_elf_sha256": metadata["original_elf_sha256"],
    }
    return functions, digests, edges, coverage


def write_csv(path, header, records):
    count = 0
    with path.open("w", newline="", encoding="utf-8") as stream:
        writer = csv.writer(stream)
        writer.writerow(header)
        for record in records:
            writer.writerow(record)
            count += 1
    return count


def analyze(sword_path, shield_path, output):
    output.mkdir(parents=True, exist_ok=True)
    sword, sword_digest, sword_calls, sword_stats = load(sword_path, "sword")
    shield, shield_digest, shield_calls, shield_stats = load(shield_path, "shield")
    anchors = {}
    reverse_anchors = {}
    anchor_rows = []
    duplicated = 0
    for digest in sorted(set(sword_digest) & set(shield_digest)):
        a = sword_digest[digest]
        b = shield_digest[digest]
        if len(a) != 1 or len(b) != 1:
            duplicated += 1
            continue
        s, h = a[0], b[0]
        if sword[s]["body_bytes"] != shield[h]["body_bytes"]:
            raise ValueError("Digest match with contradictory function-body length")
        anchors[s] = h
        reverse_anchors[h] = s
        anchor_rows.append((
            s, h, "SAME_ENTRY" if s == h else "RELOCATED_ENTRY",
            digest, sword[s]["body_bytes"], sword[s]["name"], shield[h]["name"],
            "UNIQUE_EXACT_GHIDRA_FUNCTION_BODY_BYTES"
        ))
    write_csv(
        output / "unique_exact_body_function_map.csv",
        ("sword_entry", "shield_entry", "address_relation", "body_sha256",
         "body_bytes", "sword_name", "shield_name", "evidence"),
        anchor_rows
    )

    # The only positive claim: a mapped callee is a uniquely matched exact
    # machine-body in both binaries, and Ghidra identified a direct call.
    mapped_deltas = []
    stable = 0
    no_comparable = 0
    differing = 0
    total_unique_target_changes = 0
    for sword_entry in sorted(anchors):
        shield_entry = anchors[sword_entry]
        left_all = sword_calls.get(sword_entry, set())
        right_all = shield_calls.get(shield_entry, set())
        left = {anchors[v] for v in left_all if v in anchors}
        right = {v for v in right_all if v in reverse_anchors}
        left_only = sorted(left - right)
        right_only = sorted(right - left)
        common = left & right
        if not left and not right:
            no_comparable += 1
            status = "NO_DIRECT_CALLS_TO_MATCHED_TARGETS"
        elif left_only or right_only:
            differing += 1
            total_unique_target_changes += len(left_only) + len(right_only)
            status = "DIFFERENT_IDENTIFIED_DIRECT_CALLEES"
        else:
            stable += 1
            status = "SAME_IDENTIFIED_DIRECT_CALLEES"
        mapped_deltas.append((
            sword_entry, shield_entry,
            "SAME_ENTRY" if sword_entry == shield_entry else "RELOCATED_ENTRY",
            sword[sword_entry]["body_bytes"],
            len(left_all), len(right_all), len(left), len(right),
            len(common), len(left_only), len(right_only), status,
            ";".join(left_only[:30]), ";".join(right_only[:30]),
            "STATIC_DIRECT_CALLS_VIA_GHIDRA_CONTIGUOUS_BODY_AND_EXACT_BYTES_MAP"
        ))
    write_csv(
        output / "exact_body_anchor_direct_call_delta.csv",
        ("sword_entry", "shield_entry", "address_relation", "body_bytes",
         "sword_distinct_direct_callees", "shield_distinct_direct_callees",
         "sword_exact_mapped_callees", "shield_exact_mapped_callees",
         "common_exact_mapped_callees", "only_sword_mapped_callees",
         "only_shield_mapped_callees", "status",
         "missing_in_shield_callee_entries", "missing_in_sword_callee_entries",
         "evidence"),
        mapped_deltas
    )

    # Same-address byte differences are *only* review candidates.
    # Do not treat a common RVA as evidence of correspondence.
    same_addr_changed = []
    for entry in sorted(set(sword) & set(shield)):
        a, b = sword[entry], shield[entry]
        ah, bh = a.get("body_sha256"), b.get("body_sha256")
        if not ah or not bh or ah == bh:
            continue
        mapping = anchors.get(entry)
        reverse = reverse_anchors.get(entry)
        if mapping and mapping != entry:
            evidence = "SWORD_ENTRY_MAPPED_TO_DIFFERENT_SHIELD_ENTRY"
        elif reverse and reverse != entry:
            evidence = "SHIELD_ENTRY_MAPPED_TO_DIFFERENT_SWORD_ENTRY"
        else:
            evidence = "SAME_ENTRY_ONLY_NO_IDENTITY_PROOF"
        # This size-prioritized list can guide later CFG/type and caller study.
        same_addr_changed.append((
            entry, a["name"], b["name"], a["body_bytes"], b["body_bytes"],
            ah, bh, evidence
        ))
    same_addr_changed.sort(key=lambda r: (-max(r[3] or 0, r[4] or 0), r[0]))
    write_csv(
        output / "top_same_address_changed_bytes.csv",
        ("entry", "sword_name", "shield_name", "sword_body_bytes",
         "shield_body_bytes", "sword_body_sha256", "shield_body_sha256",
         "identity_evidence"),
        same_addr_changed[:1000]
    )
    # Convert differing calls into a separate, compact, priority-ranked file.
    important = sorted(
        [r for r in mapped_deltas if r[11] == "DIFFERENT_IDENTIFIED_DIRECT_CALLEES"],
        key=lambda r: (-(r[9] + r[10]), -r[3], r[0])
    )
    write_csv(
        output / "priority_direct_call_difference_candidates.csv",
        ("sword_entry", "shield_entry", "address_relation", "body_bytes",
         "sword_distinct_direct_callees", "shield_distinct_direct_callees",
         "sword_exact_mapped_callees", "shield_exact_mapped_callees",
         "common_exact_mapped_callees", "only_sword_mapped_callees",
         "only_shield_mapped_callees", "status",
         "missing_in_shield_callee_entries", "missing_in_sword_callee_entries",
         "evidence"),
        important[:1500]
    )

    report = {
        "status": "SOURCE_BACKED_GHIDRA_STATIC_CALLGRAPH_MAP",
        "source_run_id": 42771375134,
        "sword": sword_stats,
        "shield": shield_stats,
        "unique_exact_body_pairs": len(anchors),
        "unique_exact_body_relocated_pairs": sum(s != h for s, h in anchors.items()),
        "same_entry_changed_body_review_candidates": len(same_addr_changed),
        "ambiguous_repeated_byte_hashes_excluded": duplicated,
        "anchors_with_identical_identified_direct_callee_sets": stable,
        "anchors_with_changed_identified_direct_callee_sets": differing,
        "anchors_without_comparable_mapped_direct_calls": no_comparable,
        "total_unique_mapped_callee_deltas": total_unique_target_changes,
        "caution": (
            "This is a conservative Ghidra static direct-call graph comparison, not "
            "proof of gameplay semantic differences. A shared function entry may be "
            "a different function; equal body bytes can still call different absolute "
            "targets. Functions with non-contiguous Ghidra bodies are excluded from "
            "caller attribution. Duplicate fingerprints are excluded from anchors."
        ),
    }
    (output / "summary.json").write_text(
        json.dumps(report, ensure_ascii=False, indent=2) + "\n",
        encoding="utf-8"
    )
    (output / "README.md").write_text(
        "# Sword / Shield 1.3.2 function mapping and direct-call audit\n\n"
        "Source: [Ghidra full analysis #42771375134]"
        "(https://github.com/969981/SWSH_Resources/actions/runs/42771375134).\n\n"
        "This mapping uses **globally unique exact machine function-body SHA-256** "
        "in both editions; same-entry comparisons alone do not constitute matches. "
        "Mapped direct-call edges are derived from original Ghidra references and "
        "verified contiguous function-body address ranges.\n\n"
        "Results:\n\n"
        "- \`unique_exact_body_function_map.csv\`: unique binary-body pairs including relocations\n"
        "- \`exact_body_anchor_direct_call_delta.csv\`: mapped direct-callee agreement/disagreement for every anchor\n"
        "- \`priority_direct_call_difference_candidates.csv\`: top 1,500 candidates for manual callgraph/logic examination\n"
        "- \`top_same_address_changed_bytes.csv\`: 1,000 largest same-entry byte changes without assumed function identity\n"
        "- \`summary.json\`: provenance and count reconciliation\n\n"
        "This does not claim byte equality guarantees runtime equivalence or that "
        "direct-call graph changes prove gameplay logic changes. Further analysis "
        "should disassemble the compared caller/callee, examine relocations, "
        "recover function prototypes and cross-check gameplay behavior.\n",
        encoding="utf-8"
    )
    print(json.dumps(report, ensure_ascii=False, indent=2))
    return report


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--sword", type=Path, required=True)
    parser.add_argument("--shield", type=Path, required=True)
    parser.add_argument("--out", type=Path, required=True)
    args = parser.parse_args()
    analyze(args.sword, args.shield, args.out)


if __name__ == "__main__":
    main()
