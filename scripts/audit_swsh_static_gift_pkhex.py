#!/usr/bin/env python3
"""Audit SWSH original static/gift tables against pinned PKHeX static candidates.

The join is deliberately conservative: it reports unresolved/ambiguous rows
instead of converting scenario IDs into PKHeX locations or inventing legal PKL.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

from audit_swsh_trade_pkhex import git_blob_sha1

MANIFEST = Path("manifests/swsh_static_gift_pkhex_v132.json")


def candidate_templates(row: dict, templates: list[dict]) -> list[dict]:
    """Identity/explicit moves/G-Max *candidate* filter, never legality proof."""
    matches = []
    for template in templates:
        if (template["species"], template["form"], template["level"]) != (
            int(row["Species"]), int(row["Form"]), int(row["Level"])
        ):
            continue
        moves = template.get("moves")
        if moves is not None and any(
            move != int(row.get(f"Move{i}", "0")) for i, move in enumerate(moves)
        ):
            continue
        if template.get("must_gmax") and int(row["CanGigantamax"]) != 1:
            continue
        matches.append(template)
    return matches


def audit(repo: Path, out: Path | None = None, pinned_cs: Path | None = None) -> dict:
    manifest = json.loads((repo / MANIFEST).read_text(encoding="utf-8"))
    if pinned_cs is not None:
        if git_blob_sha1(pinned_cs.read_bytes()) != manifest["pkhex_source_blob_sha1"]:
            raise ValueError("PKHeX C# source differs from pinned reference")
    templates = manifest["templates"]
    if len(templates) != manifest["reference_template_count"]:
        raise ValueError("PKHeX template manifest count mismatch")
    if len({t["id"] for t in templates}) != len(templates):
        raise ValueError("duplicate PKHeX template IDs")
    reports, detailed = {}, {}
    for kind in ("static_encounters", "gift_encounters"):
        source = manifest["original_sources"][kind]
        raw = (repo / source["csv"]).read_bytes()
        if git_blob_sha1(raw) != source["csv_blob_sha1"]:
            raise ValueError(f"{kind} exported CSV hash differs from pinned data")
        if hashlib.sha256((repo / source["rom_binary"]).read_bytes()).hexdigest() != source["rom_sha256"]:
            raise ValueError(f"{kind} original ROM FlatBuffers hash mismatch")
        rows = list(csv.DictReader(raw.decode("utf-8-sig").splitlines()))
        if [int(r["record_index"]) for r in rows] != list(range(len(rows))):
            raise ValueError(f"{kind}: missing or unordered source indexes")
        hist: Counter[int] = Counter()
        cases = []
        for row in rows:
            candidates = candidate_templates(row, templates)
            n = len(candidates)
            hist[n] += 1
            cases.append({
                "source_row": int(row["record_index"]),
                "species": int(row["Species"]), "form": int(row["Form"]),
                "level": int(row["Level"]), "candidate_count": n,
                "candidate_pkhex_ids": [x["id"] for x in candidates],
                "pkhex_version_candidates": sorted({
                    x["group"].replace("Static", "") for x in candidates
                }),
                "status": ("NO_CANDIDATE" if n == 0 else
                           "SINGLE_CANDIDATE" if n == 1 else "AMBIGUOUS_CANDIDATES"),
                "legality": "UNVERIFIED",
                "runtime_reachability": "UNVERIFIED",
            })
        baseline = manifest["coverage_baseline"][kind]
        measured = {
            "rows": len(rows), "zero": hist[0], "single": hist[1],
            "multiple": len(rows) - hist[0] - hist[1],
            "candidate_count_histogram": {str(k): v for k, v in sorted(hist.items())},
        }
        if measured != baseline:
            raise ValueError(f"{kind}: derived candidate coverage changed from pinned baseline")
        reports[kind] = measured
        detailed[kind] = cases
        if out is not None:
            (out / f"{kind}_candidate_links.jsonl").write_text(
                "".join(json.dumps(case, ensure_ascii=False) + "\n" for case in cases),
                encoding="utf-8",
            )
    result = {
        "grade": "STATIC_CANDIDATE_JOIN_ONLY",
        "pkhex_reference": manifest["pkhex_repo"] + "@" + manifest["pkhex_commit"],
        "reference_templates": len(templates),
        "pkhex_source_blob_verified": pinned_cs is not None,
        "by_source_type": reports,
        "unverified": [
            "Runtime reachability, story triggers, Version flags in source script",
            "Full PKHeX legality including weather/crossover/location/OT/shiny IV semantics",
            "Historical BCAT event availability and distribution date ranges",
        ],
    }
    if out is not None:
        (out / "summary.json").write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    return result


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-static-gift-audit"))
    p.add_argument("--pkhex-csharp", type=Path, default=None)
    p.add_argument("--validate-only", action="store_true")
    args = p.parse_args()
    output = None if args.validate_only else args.out_dir.resolve()
    if output is not None:
        output.mkdir(parents=True, exist_ok=True)
    result = audit(args.repo.resolve(), output, args.pkhex_csharp)
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
