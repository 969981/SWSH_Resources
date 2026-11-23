#!/usr/bin/env python3
"""Link GDB weather snapshots to the 268 original Sword/Shield casebook entries.

This script establishes audit provenance of raw registers and code bytes ONLY.
It cannot verify the branch's gameplay semantics, real in-process BuildID or
weather/zone state without a trusted native tracing session and manual review.
"""
from __future__ import annotations

import argparse
import csv
import hashlib
import json
from collections import Counter
from pathlib import Path

CASES = Path("Unpack/v1.3.2/catalog/weather_bleed_268_cases.csv")
NSO = Path("Unpack/v1.3.2/catalog/nso_segments.csv")


def audit(repo: Path, trace_path: Path) -> dict:
    with (repo / CASES).open(encoding="utf-8-sig", newline="") as f:
        rows = list(csv.DictReader(f))
    cases = {row["case_id"]: row for row in rows}
    if len(rows) != 268 or len(cases) != 268:
        raise ValueError("original weather dispute case list changed")
    with (repo / NSO).open(encoding="utf-8-sig", newline="") as f:
        segments = {
            (row["game"].lower(), row["build_id"]): row
            for row in csv.DictReader(f) if row["segment"] == "text"
        }
    data = trace_path.read_bytes()
    if not data:
        return {
            "status": "NO_RUNTIME_GDB_SNAPSHOTS",
            "trace_sha256": hashlib.sha256(data).hexdigest(),
            "records": 0, "cases_with_snapshots": 0, "runtime_verified_cases": 0,
        }
    records = []
    errors = []
    for line_no, line in enumerate(data.decode("utf-8-sig").splitlines(), 1):
        if not line.strip():
            continue
        try:
            row = json.loads(line)
            case = cases[row["case_id"]]
            if row["capture_kind"] != "GDB_REGISTER_SNAPSHOT_ONLY":
                raise ValueError("not a recognized raw GDB capture")
            if str(row["scenario_id"]) != case["scenario_id"]:
                raise ValueError("scenario mismatch")
            if row["game_claimed"].lower() != case["game"].lower():
                raise ValueError("game mismatch")
            if row["expected_build_id"] != case["build_id"]:
                raise ValueError("BuildID claim does not match casebook")
            if row["expected_main_sha256"] != case["original_main_sha256"]:
                raise ValueError("source main SHA-256 claim mismatch")
            if row["is_runtime_decision_verified"] or row["is_weather_branch_verified"]:
                raise ValueError("raw GDB record improperly claims semantic verification")
            if row["branch_outcome"] != "UNDETERMINED":
                raise ValueError("raw GDB capture cannot assert ALLOW/DENY")
            key = (case["game"].lower(), case["build_id"])
            segment = segments[key]
            pc = int(row["pc_absolute"], 0)
            base = int(row["main_base_claimed"], 0)
            rva = int(row["branch_rva_claimed"], 0)
            if (pc != base + rva or rva % 4 or
                    not int(segment["rva_start"]) <= rva < int(segment["rva_end_exclusive"])):
                raise ValueError("claimed PC and matching verified NSO TEXT offset differ")
            if row["pc_rva_if_main_base_is_correct"].lower() != f"0x{rva:x}":
                raise ValueError("stored PC RVA disagrees with claimed address")
            if not isinstance(row["registers"], dict):
                raise ValueError("raw register snapshot is missing")
            instruction = row.get("instruction_bytes_at_pc", "")
            if (not instruction.startswith("UNAVAILABLE:")
                    and (len(instruction) != 32 or
                         any(c not in "0123456789abcdefABCDEF" for c in instruction))):
                raise ValueError("16-byte instruction snapshot is malformed")
            records.append({"case_id": row["case_id"], "line": line_no,
                            "pc_rva": rva, "hit_sequence": row.get("hit_sequence")})
        except (KeyError, TypeError, ValueError, json.JSONDecodeError) as exc:
            errors.append(f"line {line_no}: {type(exc).__name__}: {exc}")
    counts = Counter(item["case_id"] for item in records)
    return {
        "status": "REVIEW_PENDING_RAW_GDB_SNAPSHOTS" if not errors else "INVALID_GDB_EVIDENCE",
        "trace_sha256": hashlib.sha256(data).hexdigest(),
        "records": len(records), "cases_with_snapshots": len(counts),
        "runtime_verified_cases": 0,
        "cases_with_snapshots_detail": dict(sorted(counts.items())),
        "invalid_records": len(errors),
        "errors": errors,
        "reason": "Raw candidate PC/register hits cannot establish real weather branch or game decision without trace and disassembly review.",
    }


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo", type=Path, default=Path("."))
    p.add_argument("--trace", type=Path, required=True)
    p.add_argument("--output", type=Path,
                   default=Path("artifacts/swsh-weather-gdb/trace_evidence_review.json"))
    args = p.parse_args()
    report = audit(args.repo.resolve(), args.trace.resolve())
    output = args.output.resolve()
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({k: report[k] for k in
                      ("status", "records", "cases_with_snapshots", "runtime_verified_cases")},
                     ensure_ascii=False, indent=2))
    if report.get("invalid_records"):
        raise SystemExit(2)


if __name__ == "__main__":
    main()
