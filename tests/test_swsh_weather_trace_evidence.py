"""GDB weather evidence integrity tests; snapshots are never counted as verdicts."""
from __future__ import annotations

import csv
import json
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from swsh_weather_trace_evidence import audit, CASES, NSO  # noqa: E402


class WeatherGdbEvidenceTests(unittest.TestCase):
    def test_empty_trace_proves_zero_cases(self):
        with tempfile.TemporaryDirectory() as path:
            trace = Path(path) / "empty.jsonl"
            trace.write_bytes(b"")
            summary = audit(ROOT, trace)
        self.assertEqual(summary["status"], "NO_RUNTIME_GDB_SNAPSHOTS")
        self.assertEqual(summary["cases_with_snapshots"], 0)
        self.assertEqual(summary["runtime_verified_cases"], 0)

    def test_consistent_raw_hit_still_never_confirms_weather_verdict(self):
        with (ROOT / CASES).open(encoding="utf-8-sig", newline="") as f:
            case = next(csv.DictReader(f))
        with (ROOT / NSO).open(encoding="utf-8-sig", newline="") as f:
            seg = next(x for x in csv.DictReader(f)
                       if x["game"] == case["game"].lower() and
                          x["build_id"] == case["build_id"] and x["segment"] == "text")
        rva = int(seg["rva_start"])
        rva += (-rva) % 4
        base = 0x7100000000
        rec = {
            "case_id": case["case_id"], "scenario_id": case["scenario_id"],
            "capture_kind": "GDB_REGISTER_SNAPSHOT_ONLY",
            "game_claimed": case["game"], "expected_build_id": case["build_id"],
            "expected_main_sha256": case["original_main_sha256"],
            "is_runtime_decision_verified": False, "is_weather_branch_verified": False,
            "branch_outcome": "UNDETERMINED", "pc_absolute": hex(base + rva),
            "main_base_claimed": hex(base), "branch_rva_claimed": hex(rva),
            "pc_rva_if_main_base_is_correct": hex(rva),
            "registers": {"x0": "0x0"}, "instruction_bytes_at_pc": "abcd" * 8,
            "hit_sequence": 1,
        }
        with tempfile.TemporaryDirectory() as temp:
            p = Path(temp) / "trace.jsonl"
            p.write_text(json.dumps(rec) + "\n", encoding="utf-8")
            result = audit(ROOT, p)
            self.assertEqual(result["status"], "REVIEW_PENDING_RAW_GDB_SNAPSHOTS")
            self.assertEqual(result["cases_with_snapshots"], 1)
            self.assertEqual(result["runtime_verified_cases"], 0)
            rec["branch_outcome"] = "ALLOW"
            p.write_text(json.dumps(rec) + "\n", encoding="utf-8")
            reject = audit(ROOT, p)
            self.assertEqual(reject["status"], "INVALID_GDB_EVIDENCE")
            self.assertEqual(reject["invalid_records"], 1)


if __name__ == "__main__":
    unittest.main()
