"""Synthetic and real-fixture validation for SWSH v1.3.2 special encounter data."""
from __future__ import annotations

import struct
import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from export_swsh_special_encounters import (  # noqa: E402
    decode_raid_record,
    read_original_tables,
    read_raids,
)


class RaidRecordTests(unittest.TestCase):
    def test_stock_nest_fields(self):
        data = struct.pack("<H8B", 888, 1, 255, 4, 1, 24, 0, 4, 3)
        row = decode_raid_record("nest", data)
        self.assertEqual(row["species"], 888)
        self.assertEqual(row["nest_index"], 24)
        self.assertEqual(row["min_star"], 1)
        self.assertEqual(row["max_star"], 5)
        self.assertEqual(row["min_level"], 15)
        self.assertEqual(row["max_level"], 60)
        self.assertTrue(row["can_gigantamax"])
        self.assertEqual(row["flawless_iv_count"], 3)

    def test_bad_nest_rank_rejected(self):
        data = struct.pack("<H8B", 888, 1, 255, 4, 0, 24, 4, 0, 3)
        with self.assertRaises(ValueError):
            decode_raid_record("nest", data)

    def test_dist_shiny_nibbles(self):
        for shiny_nibble, expected in ((0, "Random"), (1, "Never"), (2, "Always")):
            with self.subTest(shiny_nibble=shiny_nibble):
                data = struct.pack(
                    "<HBB4H4B", 25, 0, 255, 33, 1, 2, 3,
                    60, 0x85, (shiny_nibble << 4) | 3, 40,
                )
                row = decode_raid_record("dist", data)
                self.assertEqual(row["shiny_rule"], expected)
                self.assertEqual(row["flawless_iv_count"], 3)
                self.assertEqual(row["distribution_index"], 40)
                self.assertEqual(row["dynamax_level"], 5)
                self.assertTrue(row["can_gigantamax"])
                self.assertEqual(row["move_4"], 3)

    def test_invalid_dist_shiny_rejected(self):
        data = struct.pack("<HBB4H4B", 25, 0, 255, 33, 1, 2, 3, 60, 5, 0x31, 40)
        with self.assertRaises(ValueError):
            decode_raid_record("dist", data)

    def test_max_lair_fields(self):
        data = struct.pack("<HBB4HBB", 144, 0, 70, 33, 34, 35, 36, 4, 0)
        row = decode_raid_record("max_lair", data)
        self.assertEqual(row["species"], 144)
        self.assertEqual(row["level"], 70)
        self.assertEqual(row["location"], 244)
        self.assertEqual(row["dynamax_level"], 8)
        self.assertEqual(row["flawless_iv_count"], 4)
        self.assertEqual(row["shiny_rule"], "post_adventure_choice_roll")

    def test_bad_width_and_species_rejected(self):
        with self.assertRaises(ValueError):
            decode_raid_record("max_lair", bytes(10))
        with self.assertRaises(ValueError):
            decode_raid_record("max_lair", struct.pack("<HBB4HBB", 0, 0, 70, 1, 2, 3, 4, 4, 0))

    def test_unknown_kind_rejected(self):
        with self.assertRaises(ValueError):
            decode_raid_record("unknown", bytes(10))


class SourceIntegrationTests(unittest.TestCase):
    def test_reference_raid_all_five(self):
        rows = read_raids(ROOT, None)
        self.assertEqual(len(rows), 5)
        self.assertEqual(sum(x["records"] for x in rows), 6930)
        self.assertEqual([x["records"] for x in rows], [2156, 2151, 1171, 1179, 273])

    def test_original_static_gift_trade_catalogs(self):
        rows = read_original_tables(ROOT, None)
        self.assertEqual([x["records"] for x in rows], [647, 31, 23])


if __name__ == "__main__":
    unittest.main()
