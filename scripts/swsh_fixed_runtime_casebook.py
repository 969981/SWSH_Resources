#!/usr/bin/env python3
"""Build evidence-first SWSH 1.3.2 static/gift/NPC-trade runtime casebook.

References every source row, PKHeX candidate and pinned source hash.
It cannot and does not assert in-game reachability or legality from static data.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

from audit_swsh_static_gift_pkhex import candidate_templates, no_candidate_reason
from audit_swsh_trade_pkhex import EXPECTED_FIELDS, audit as audit_trades

CATALOG = Path("Unpack/v1.3.2/catalog")
REFERENCE = Path("manifests/swsh_static_gift_pkhex_v132.json")
TRADE_REFERENCE = Path("manifests/swsh_trade_pkhex_v132.json")
KINDS = {
    "static": ("static_encounters.csv", "static_encounters", "EncounterID"),
    "gift": ("gift_encounters.csv", "gift_encounters", "Hash1"),
    "trade": ("trade_encounters.csv", "trade_encounters", "Hash0"),
}


def load_csv(path: Path) -> list[dict]:
    with path.open(encoding="utf-8-sig", newline="") as f:
        rows = list(csv.DictReader(f))
    if [int(x["record_index"]) for x in rows] != list(range(len(rows))):
        raise ValueError(f"{path}: nonconsecutive native encounter source indexes")
    return rows


def build(repo: Path, out: Path | None = None) -> dict:
    reference = json.loads((repo / REFERENCE).read_text(encoding="utf-8"))
    trade_ref = json.loads((repo / TRADE_REFERENCE).read_text(encoding="utf-8"))
    semantic = json.loads((repo / CATALOG / "semantic-summary.json").read_text(encoding="utf-8"))
    audit_trades(repo)
    templates = reference["templates"]
    trade_templates = {t["id"]: t for t in trade_ref["templates"]}
    trade_lookup = {a["source_row"]: a for a in trade_ref["associations"]}
    assert len(trade_templates) == 22
    totals = Counter()
    all_cases = []
    for kind, (name, evidence_key, native_hash_field) in KINDS.items():
        rows = load_csv(repo / CATALOG / name)
        evidence = semantic["evidence"][evidence_key]
        original = (repo / evidence["source"]).read_bytes()
        if hashlib.sha256(original).hexdigest() != evidence["sha256"]:
            raise ValueError(f"{kind}: raw source SHA-256 mismatch")
        if len(rows) != evidence["records"]:
            raise ValueError(f"{kind}: raw table count disagreement")
        for raw in rows:
            source_idx = int(raw["record_index"])
            if kind == "trade":
                match = trade_lookup[source_idx]
                t = trade_templates[match["pkhex_template_id"]]
                candidates = [t]
                version_hint = t["template_group"].replace("Trade", "")
                category = "SINGLE_STRUCTURAL_CORRESPONDENCE"
                reason = None
            else:
                candidates = candidate_templates(raw, templates)
                version_hint = sorted({
                    c["group"].replace("Static", "") for c in candidates
                })
                category = ("NO_STATIC_CANDIDATE" if not candidates else
                            "SINGLE_STATIC_CANDIDATE" if len(candidates) == 1 else
                            "AMBIGUOUS_STATIC_CANDIDATES")
                reason = no_candidate_reason(raw, templates) if not candidates else None
            report = {
                "case_id": f"SWSH132-{kind.upper()}-{source_idx:04d}",
                "source_kind": kind, "source_row": source_idx,
                "source_native_file": evidence["source"],
                "source_native_sha256": evidence["sha256"],
                "source_record_hash_field": native_hash_field,
                "source_record_hash": raw[native_hash_field],
                "species": int(raw["Species"]), "form": int(raw["Form"]),
                "level": int(raw["Level"]), "shiny_lock_raw": int(raw["ShinyLock"]),
                "source_game_version": "UNPROVEN_BY_NATIVE_SCRIPT_TABLE",
                "pkhex_version_constraint_only": version_hint,
                "pkhex_candidate_ids": [c["id"] for c in candidates],
                "static_matching_status": category,
                "static_gap_reason": reason,
                "runtime_branch_rva": "UNIDENTIFIED",
                "runtime_story_trigger": "UNVERIFIED",
                "runtime_encounter_reached": False,
                "legality_validated": False,
            }
            if kind == "static":
                report["encounter_scenario_raw"] = int(raw["EncounterScenario"])
            elif kind == "gift":
                report["is_egg_raw"] = int(raw["IsEgg"])
            else:
                report["npc_required_species_raw"] = int(raw["RequiredSpecies"])
                report["npc_required_form_raw"] = int(raw["RequiredForm"])
                report["native_ability_number"] = int(raw["AbilityNumber"])
            all_cases.append(report)
            totals[kind] += 1
            totals[kind + ":" + category] += 1
    if tuple(totals[k] for k in KINDS) != (647, 31, 23) or len(all_cases) != 701:
        raise ValueError("source runtime casebook coverage changed")
    result = {
        "version": "Sword/Shield 1.3.2",
        "grade": "ORIGINAL_SCRIPT_SOURCE_CASEBOOK__NO_RUNTIME_CAPTURE",
        "case_count": len(all_cases), "counts": dict(sorted(totals.items())),
        "limitations": [
            "The GDB branch to script event encounter is unidentified. Do not use weather/overworld RVAs as fixed-event addresses without native xrefs.",
            "PKHeX version is a legality-template constraint, not a native runtime version mask.",
            "A source case can be a story battle phase, a noncatchable encounter or a reusable script configuration.",
            "No runtime captures were produced by this script.",
        ],
    }
    if out is not None:
        (out / "fixed_runtime_cases.jsonl").write_text(
            "".join(json.dumps(row, ensure_ascii=False) + "\n" for row in all_cases),
            encoding="utf-8",
        )
        (out / "fixed_runtime_summary.json").write_text(
            json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
        )
    return result


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--out-dir", type=Path, default=Path("artifacts/swsh-fixed-runtime"))
    p.add_argument("--validate-only", action="store_true")
    args = p.parse_args()
    out = None if args.validate_only else args.out_dir.resolve()
    if out is not None:
        out.mkdir(parents=True, exist_ok=True)
    print(json.dumps(build(args.repo.resolve(), out), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
