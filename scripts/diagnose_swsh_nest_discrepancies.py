#!/usr/bin/env python3
"""Classify Sword/Shield 1.3.2 Nest PKL differences without inventing causes.

For every PKHeX-only record, show which original ROM candidate fields agree
and which do not, plus source TableID/EntryIndex evidence. A relaxed candidate
relationship is a research lead, never automatic authorization to patch PKL.
"""
from __future__ import annotations

import argparse
import json
from collections import Counter, defaultdict
from pathlib import Path

from audit_swsh_raw_nests import (
    FIELDS, RAID_NAMES, RAID_PATH, audit as baseline_audit, candidate_key,
    candidate_provenance, collect_source,
)
from export_swsh_special_encounters import decode_raid_record

KEY_SPECIES_FORM = ("species", "form")
KEY_IDENTITY = (
    "species", "form", "gender_code", "ability_permission",
    "can_gigantamax", "flawless_iv_count",
)
KEY_RANK = ("min_rank_zero_based", "max_rank_zero_based")
KEY_INDEX = ("nest_index",)


def projection(key: tuple, included: tuple[str, ...]) -> tuple:
    return tuple(key[FIELDS.index(f)] for f in included)


def projected_map(candidates: dict, included: tuple[str, ...]) -> dict[tuple, list[tuple]]:
    result = defaultdict(list)
    for key in candidates:
        result[projection(key, included)].append(key)
    return result


def diagnose(repo: Path, out: Path | None = None) -> dict:
    rows, candidates = collect_source(repo)
    baseline = baseline_audit(repo, None)
    reports = {}
    for version in (1, 2):
        game = "Sword" if version == 1 else "Shield"
        original = Counter(candidate_key(x) for x in candidates[version])
        ref_file = repo / RAID_PATH / RAID_NAMES[version]
        content = ref_file.read_bytes()
        if len(content) % 10:
            raise ValueError("invalid PKHeX 10-byte fixed record stride")
        reference = Counter(
            candidate_key(decode_raid_record("nest", content[i:i + 10]))
            for i in range(0, len(content), 10)
        )
        matched = sum((original & reference).values())
        source_only, reference_only = original - reference, reference - original
        if matched != baseline["comparisons"][version - 1]["matched_record_instances"]:
            raise ValueError("nest baseline disagreement")
        provenance = candidate_provenance(rows, version)
        idx_all = projected_map(original, KEY_IDENTITY)
        idx_except_rank = projected_map(original, (*KEY_IDENTITY, *KEY_INDEX))
        idx_except_nest = projected_map(original, (*KEY_IDENTITY, *KEY_RANK))
        idx_species = projected_map(original, KEY_SPECIES_FORM)
        classification = Counter()
        diagnostics = []
        for key, count in sorted(reference_only.items()):
            candidates_for_key = []
            identity = projection(key, KEY_IDENTITY)
            if projection(key, (*KEY_IDENTITY, *KEY_INDEX)) in idx_except_rank:
                label = "RANK_SPAN_DIFFERENCE_CANDIDATE"
                candidates_for_key = idx_except_rank[projection(key, (*KEY_IDENTITY, *KEY_INDEX))]
            elif projection(key, (*KEY_IDENTITY, *KEY_RANK)) in idx_except_nest:
                label = "NEST_INDEX_DIFFERENCE_CANDIDATE"
                candidates_for_key = idx_except_nest[projection(key, (*KEY_IDENTITY, *KEY_RANK))]
            elif identity in idx_all:
                label = "NEST_AND_RANK_DIFFERENCE_CANDIDATE"
                candidates_for_key = idx_all[identity]
            elif projection(key, KEY_SPECIES_FORM) in idx_species:
                label = "ABILITY_GENDER_GMAX_OR_IV_DIFFERENCE_CANDIDATE"
                candidates_for_key = idx_species[projection(key, KEY_SPECIES_FORM)]
            else:
                label = "NO_SOURCE_SPECIES_FORM_CANDIDATE"
            classification[label] += count
            diagnostics.append({
                "reference_key": list(key),
                "reference_multiplicity": count,
                "first_pass_classification": label,
                "original_candidates": [
                    {
                        "key": list(candidate),
                        "source_instances": original[candidate],
                        "original_table_evidence": provenance.get(candidate, []),
                    }
                    for candidate in candidates_for_key[:12]
                ],
                "candidate_result_is_not_proof_of_cause": True,
            })
        report = {
            "source_candidates": sum(original.values()),
            "pkhex_reference_records": sum(reference.values()),
            "exact_matching_instances": matched,
            "source_only_instances": sum(source_only.values()),
            "reference_only_instances": sum(reference_only.values()),
            "ref_only_diagnostic_counts": dict(sorted(classification.items())),
            "notes": [
                "Mutually exclusive first-pass labels use ordered relaxation; they are NOT causal explanations.",
                "Source rows may be curated/merged for runtime availability and PKHeX legality.",
                "Reference-only is not automatically an unsupported encounter.",
            ],
        }
        reports[game] = report
        if out is not None:
            (out / f"nest_reference_only_diagnosis_{game.lower()}.json").write_text(
                json.dumps(diagnostics, ensure_ascii=False, indent=2) + "\n",
                encoding="utf-8",
            )
    result = {
        "game_version": "1.3.2",
        "status": "SOURCE_TO_REFERENCE_DIFFERENCE_CLASSIFICATION_NOT_RUNTIME_CAUSAL_PROOF",
        "games": reports,
    }
    if out is not None:
        (out / "nest_discrepancy_summary.json").write_text(
            json.dumps(result, ensure_ascii=False, indent=2) + "\n",
            encoding="utf-8",
        )
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-nest-diagnosis"))
    p.add_argument("--validate-only", action="store_true")
    args = p.parse_args()
    out = None if args.validate_only else args.out_dir.resolve()
    if out is not None:
        out.mkdir(parents=True, exist_ok=True)
    print(json.dumps(diagnose(args.repo.resolve(), out), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
