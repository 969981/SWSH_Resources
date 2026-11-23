"""Synthetic plus immutable-source checks for PKHeX static/gift candidate auditing."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from audit_swsh_static_gift_pkhex import audit, candidate_templates, no_candidate_reason  # noqa: E402


class StaticGiftCandidateTests(unittest.TestCase):
    def test_only_explicit_fields_constrain_candidates(self):
        row = {"Species": "25", "Form": "0", "Level": "10",
               "Move0": "33", "Move1": "44", "Move2": "0", "Move3": "0",
               "CanGigantamax": "0"}
        a = {"id": "a", "species": 25, "form": 0, "level": 10}
        b = {"id": "b", "species": 25, "form": 0, "level": 10, "moves": [33, 44]}
        c = {"id": "c", "species": 25, "form": 0, "level": 10, "moves": [33, 1]}
        d = {"id": "d", "species": 25, "form": 0, "level": 10, "must_gmax": True}
        matches = candidate_templates(row, [a, b, c, d])
        self.assertEqual([x["id"] for x in matches], ["a", "b"])

    def test_unknown_scenario_not_used_as_location(self):
        row = {"Species": "888", "Form": "0", "Level": "70",
               "CanGigantamax": "0", "EncounterScenario": "17"}
        template = {"id": "z", "species": 888, "form": 0, "level": 70,
                    "location": 66, "group": "StaticSW"}
        self.assertEqual(candidate_templates(row, [template]), [template])

    def test_gap_reason_is_a_filter_diagnostic_not_legality(self):
        row = {"Species": "889", "Form": "0", "Level": "70",
               "CanGigantamax": "0", "Move0": "33"}
        self.assertEqual(no_candidate_reason(row, []), "NO_SPECIES_FORM_LEVEL")
        t = {"id": "shield", "species": 889, "form": 0, "level": 70, "moves": [44]}
        self.assertEqual(no_candidate_reason(row, [t]), "PKHEX_EXPLICIT_MOVES_DIFFER")
        t["moves"] = [33]
        t["must_gmax"] = True
        self.assertEqual(no_candidate_reason(row, [t]), "PKHEX_EXPLICIT_GMAX_DIFFER")

    def test_real_catalog_candidate_counts(self):
        report = audit(ROOT)
        self.assertEqual(report["grade"], "STATIC_CANDIDATE_JOIN_ONLY")
        self.assertEqual(report["reference_templates"], 676)
        self.assertEqual(report["by_source_type"]["static_encounters"]["rows"], 647)
        self.assertEqual(report["by_source_type"]["static_encounters"]["zero"], 45)
        self.assertEqual(report["by_source_type"]["static_encounters"]["single"], 476)
        self.assertEqual(report["by_source_type"]["static_encounters"]["multiple"], 126)
        self.assertEqual(report["by_source_type"]["gift_encounters"]["single"], 31)
        self.assertEqual(report["by_source_type"]["static_encounters"]["no_candidate_reason_histogram"],
                         {"NO_SPECIES_FORM_LEVEL": 44, "PKHEX_EXPLICIT_MOVES_DIFFER": 1})


if __name__ == "__main__":
    unittest.main()
