#!/usr/bin/env python3
"""Recheck ROM trade rows against pinned PKHeX Gen8 C# trade templates.

This validates structural correspondence, not runtime availability or a PKL
serialization. It never edits original game files or assumes source version.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter, defaultdict
from pathlib import Path

MANIFEST = Path("manifests/swsh_trade_pkhex_v132.json")
EXPECTED_FIELDS = {
    "species": "Species", "form": "Form", "level": "Level",
    "trainer_id": "TrainerID", "memory": "Memory", "text_var": "TextVar",
    "feeling": "Feeling", "intensity": "Intensity",
    "dynamax_level": "DynamaxLevel", "ot_gender": "OTGender",
    "relearn_1": "Relearn1", "shiny_lock": "ShinyLock",
}
ABILITY_CANDIDATES = {
    # Audit-only code projection, not a native-engine behavior claim.
    "OnlyFirst": (1,), "OnlySecond": (2,), "OnlyHidden": (3,),
    "Any12": (0,), "Any12H": (0, 3),
}


def git_blob_sha1(data: bytes) -> str:
    header = b"blob " + str(len(data)).encode("ascii") + b"\x00"
    return hashlib.sha1(header + data).hexdigest()


def load_rows(raw: bytes) -> list[dict]:
    text = raw.decode("utf-8-sig")
    rows = list(csv.DictReader(text.splitlines()))
    if not rows or any("record_index" not in row for row in rows):
        raise ValueError("invalid trade CSV header or empty rows")
    if [int(row["record_index"]) for row in rows] != list(range(len(rows))):
        raise ValueError("trade source row indexes are not contiguous")
    return rows


def associate(rows: list[dict], templates: list[dict],
              expected: list[dict], fields: dict) -> tuple[list[dict], list[dict]]:
    if fields != EXPECTED_FIELDS:
        raise ValueError("unexpected manifest join field schema")
    template_ids = [t["id"] for t in templates]
    if len(set(template_ids)) != len(template_ids):
        raise ValueError("duplicated PKHeX template identifier")
    associations = []
    reverse = defaultdict(list)
    for row in rows:
        row_id = int(row["record_index"])
        candidates = [
            t for t in templates
            if all(int(row[csv_field]) == t[template_field]
                   for template_field, csv_field in fields.items())
        ]
        if len(candidates) != 1:
            raise ValueError(f"trade source row {row_id}: {len(candidates)} matching templates")
        match = candidates[0]
        ability = int(row["AbilityNumber"])
        if ability not in ABILITY_CANDIDATES.get(match["ability_permission"], ()):
            raise ValueError(f"trade source row {row_id}: ability projection mismatch")
        associations.append({"source_row": row_id, "pkhex_template_id": match["id"]})
        reverse[match["id"]].append(row_id)
    expected_pairs = [(x["source_row"], x["pkhex_template_id"]) for x in expected]
    observed_pairs = [(x["source_row"], x["pkhex_template_id"]) for x in associations]
    if observed_pairs != expected_pairs:
        raise ValueError("pinned C# trade crosswalk differs from ROM-derived CSV")
    if set(reverse) != set(template_ids):
        raise ValueError("at least one pinned PKHeX trade template is unmatched")
    collapsed = [
        {"pkhex_template_id": key, "source_rows": ids}
        for key, ids in sorted(reverse.items())
        if len(ids) > 1
    ]
    return associations, collapsed


def audit(repo: Path, pinned_cs: Path | None = None) -> dict:
    manifest = json.loads((repo / MANIFEST).read_text(encoding="utf-8"))
    csv_path = repo / manifest["original_source_csv"]
    raw = csv_path.read_bytes()
    if git_blob_sha1(raw) != manifest["original_source_csv_git_blob_sha1"]:
        raise ValueError("original trade CSV git-blob SHA-1 mismatch")
    original = repo / manifest["original_source_binary"]
    if hashlib.sha256(original.read_bytes()).hexdigest() != manifest["original_source_binary_sha256"]:
        raise ValueError("original trade FlatBuffers SHA-256 mismatch")
    if pinned_cs is not None:
        cs = pinned_cs.read_bytes()
        if git_blob_sha1(cs) != manifest["reference_git_blob_sha1"]:
            raise ValueError("PKHeX C# source does not match pinned commit blob")
    rows = load_rows(raw)
    templates = manifest["templates"]
    associations, collapsed = associate(
        rows, templates, manifest["associations"], manifest["field_map"]
    )
    counts = Counter(x["version"] for x in templates)
    if len(rows) != 23 or len(templates) != 22 or counts != {"SWSH": 14, "SW": 4, "SH": 4}:
        raise ValueError("pinned trade source/template counts changed")
    if collapsed != manifest["many_to_one"]:
        raise ValueError("many-to-one trade relation differs from manifest")
    if len(collapsed) != 1 or collapsed[0]["source_rows"] != [8, 9]:
        raise ValueError("expected native double-Weezing distinction not found")
    return {
        "status": "STRUCTURAL_12_FIELD_MATCH_NOT_RUNTIME_PROVEN",
        "original_source_sha256": manifest["original_source_binary_sha256"],
        "pkhex_reference": f'{manifest["reference_repo"]}@{manifest["reference_commit"]}',
        "pkhex_source_checked": pinned_cs is not None,
        "source_rows": len(rows),
        "reference_templates": len(templates),
        "matched_source_rows": len(associations),
        "matched_reference_templates": len({a["pkhex_template_id"] for a in associations}),
        "version_split_from_pkhex_only": dict(sorted(counts.items())),
        "many_to_one": collapsed,
        "runtime_reachability": "UNVERIFIED",
        "source_version_assignment": "UNVERIFIED",
        "shiny_runtime_semantics": "UNVERIFIED",
    }


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--repo", type=Path, default=Path("."))
    parser.add_argument("--pkhex-csharp", type=Path,
                        help="Optional local Encounters8.cs from the pinned PKHeX commit")
    parser.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-trade-crosswalk"))
    parser.add_argument("--validate-only", action="store_true")
    args = parser.parse_args()
    result = audit(args.repo.resolve(), args.pkhex_csharp)
    if not args.validate_only:
        out = args.out_dir.resolve()
        out.mkdir(parents=True, exist_ok=True)
        (out / "trade_crosswalk_verification.json").write_text(
            json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    print(json.dumps(result, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
