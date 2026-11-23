"""Cross-source tests for Pokémon Sword/Shield NPC trades (pinned PKHeX)."""
from __future__ import annotations

import copy
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from audit_swsh_trade_pkhex import (  # noqa: E402
    ABILITY_CANDIDATES,
    EXPECTED_FIELDS,
    associate,
    audit,
    git_blob_sha1,
)


class TradeMatchingTests(unittest.TestCase):
    def test_git_blob_sha1_known_fixture(self):
        self.assertEqual(git_blob_sha1(b"test\n"), "9daeafb9864cf43055ae93beb0afd6c7d144bfa4")

    def test_identity_and_version_are_distinct(self):
        base = {key: 0 for key in EXPECTED_FIELDS}
        base.update(species=110, level=15, trainer_id=101141)
        base.update(id="t1", version="SWSH", ability_permission="Any12H")
        row = {col: str(base[key]) for key, col in EXPECTED_FIELDS.items()}
        row.update(record_index="0", AbilityNumber="3")
        expected = [{"source_row": 0, "pkhex_template_id": "t1"}]
        matched, collapsed = associate([row], [base], expected, EXPECTED_FIELDS)
        self.assertEqual(matched, expected)
        self.assertEqual(collapsed, [])
        row["Level"] = "16"
        with self.assertRaisesRegex(ValueError, "0 matching templates"):
            associate([row], [base], expected, EXPECTED_FIELDS)

    def test_rejects_ambiguous_candidates(self):
        base = {key: 0 for key in EXPECTED_FIELDS}
        base.update(id="t1", ability_permission="Any12H")
        second = copy.deepcopy(base)
        second["id"] = "t2"
        row = {col: "0" for col in EXPECTED_FIELDS.values()}
        row.update(record_index="0", AbilityNumber="3")
        with self.assertRaisesRegex(ValueError, "2 matching templates"):
            associate([row], [base, second], [], EXPECTED_FIELDS)

    def test_ability_projection_does_not_invent_new_codes(self):
        self.assertEqual(ABILITY_CANDIDATES["Any12H"], (0, 3))
        self.assertNotIn(4, ABILITY_CANDIDATES["OnlyHidden"])


class TradeRepositoryTests(unittest.TestCase):
    def test_pinned_real_sources_23_to_22(self):
        report = audit(ROOT)
        self.assertEqual(report["status"], "STRUCTURAL_12_FIELD_MATCH_NOT_RUNTIME_PROVEN")
        self.assertEqual(report["source_rows"], 23)
        self.assertEqual(report["reference_templates"], 22)
        self.assertEqual(report["matched_source_rows"], 23)
        self.assertEqual(report["matched_reference_templates"], 22)
        self.assertEqual(report["many_to_one"][0]["source_rows"], [8, 9])
        self.assertEqual(report["source_version_assignment"], "UNVERIFIED")


if __name__ == "__main__":
    unittest.main()
