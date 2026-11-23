"""SWSH native fixed/gift/NPC trade source coverage (not a runtime verdict)."""
from __future__ import annotations

import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from swsh_fixed_runtime_casebook import build  # noqa: E402


class FixedRuntimeCasebookTests(unittest.TestCase):
    def test_all_701_original_cases_preserved(self):
        result = build(ROOT)
        self.assertEqual(result["case_count"], 701)
        self.assertEqual(result["grade"], "ORIGINAL_SCRIPT_SOURCE_CASEBOOK__NO_RUNTIME_CAPTURE")
        counts = result["counts"]
        self.assertEqual(counts["static"], 647)
        self.assertEqual(counts["gift"], 31)
        self.assertEqual(counts["trade"], 23)
        self.assertEqual(counts["static:SINGLE_STATIC_CANDIDATE"], 476)
        self.assertEqual(counts["static:AMBIGUOUS_STATIC_CANDIDATES"], 126)
        self.assertEqual(counts["static:NO_STATIC_CANDIDATE"], 45)
        self.assertEqual(counts["gift:SINGLE_STATIC_CANDIDATE"], 31)
        self.assertEqual(counts["trade:SINGLE_STRUCTURAL_CORRESPONDENCE"], 23)

    def test_export_never_claims_runtime_causality(self):
        with tempfile.TemporaryDirectory() as temp:
            out = Path(temp)
            build(ROOT, out)
            lines = (out / "fixed_runtime_cases.jsonl").read_text(encoding="utf-8").splitlines()
            self.assertEqual(len(lines), 701)
            import json
            records = [json.loads(line) for line in lines]
            self.assertEqual(len({r["case_id"] for r in records}), 701)
            self.assertTrue(all(r["runtime_encounter_reached"] is False for r in records))
            self.assertTrue(all(r["legality_validated"] is False for r in records))
            self.assertTrue(all(r["runtime_branch_rva"] == "UNIDENTIFIED" for r in records))


if __name__ == "__main__":
    unittest.main()
