"""Pinned SWSH 1.3.2 native nest vs PKHeX comparison regression tests."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from diagnose_swsh_nest_discrepancies import diagnose, projection  # noqa: E402
from audit_swsh_raw_nests import FIELDS  # noqa: E402


class NestDiscrepancyTests(unittest.TestCase):
    def test_projection_orders_named_fields(self):
        key = tuple(range(len(FIELDS)))
        self.assertEqual(projection(key, ("species", "nest_index", "flawless_iv_count")),
                         (0, 5, 8))

    def test_real_sword_shield_exact_nest_counts(self):
        result = diagnose(ROOT, None)
        self.assertEqual(result["status"],
            "SOURCE_TO_REFERENCE_DIFFERENCE_CLASSIFICATION_NOT_RUNTIME_CAUSAL_PROOF")
        for game, matched, refs, source_only in (
            ("Sword", 2114, 2156, 251),
            ("Shield", 2109, 2151, 256),
        ):
            with self.subTest(game=game):
                report = result["games"][game]
                self.assertEqual(report["source_candidates"], 2365)
                self.assertEqual(report["pkhex_reference_records"], refs)
                self.assertEqual(report["exact_matching_instances"], matched)
                self.assertEqual(report["source_only_instances"], source_only)
                self.assertEqual(report["reference_only_instances"], 42)
                self.assertEqual(sum(report["ref_only_diagnostic_counts"].values()), 42)


if __name__ == "__main__":
    unittest.main()
