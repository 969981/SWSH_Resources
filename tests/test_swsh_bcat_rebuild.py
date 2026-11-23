"""Provenance-sensitive BCAT -> Gen8 PKHeX 16-byte Dist projection tests."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from rebuild_swsh_bcat_dist import (  # noqa: E402
    ABILITY_TO_PKHEX, encode_distribution_row, parse_distribution_payload,
    read_reference,
)
from export_swsh_special_encounters import decode_raid_record  # noqa: E402


def native_row():
    # First Index 001 / Sword Butterfree slot, verified from the pinned
    # EventsGallery archive. Its PKHeX projection can be absent if curated out.
    return {
        "species": 12, "form": 0, "level": 17, "dynamax_level": 1,
        "ability_raw": 4, "can_gigantamax": 0, "flawless_iv_count": 1,
        "shiny_lock": 0, "moves": [405, 60, 16, 78],
    }


class DistProjectionTests(unittest.TestCase):
    def test_known_native_001_serializes_to_exact_pkhex_stride(self):
        record = encode_distribution_row(native_row(), 1)
        self.assertEqual(record.hex(), "0c0000ff95013c0010004e0011010101")
        decoded = decode_raid_record("dist", record)
        self.assertEqual(decoded["distribution_index"], 1)
        self.assertEqual(decoded["species"], 12)
        self.assertEqual(decoded["move_1"], 405)
        self.assertEqual(decoded["ability_permission"], 255)

    def test_ability_mapping_covers_every_pknx_code(self):
        self.assertEqual(ABILITY_TO_PKHEX, {0: 1, 1: 2, 2: 4, 3: 0, 4: 255})

    def test_gmax_high_bit_shiny_high_nibble_and_iv_low_nibble(self):
        row = native_row()
        row.update(can_gigantamax=1, dynamax_level=8, shiny_lock=2,
                   flawless_iv_count=4, ability_raw=2)
        result = encode_distribution_row(row, 42)
        self.assertEqual(result[3], 4)
        self.assertEqual(result[13], 0x88)
        self.assertEqual(result[14], 0x24)
        self.assertEqual(result[15], 42)
        decoded = decode_raid_record("dist", result)
        self.assertTrue(decoded["can_gigantamax"])
        self.assertEqual(decoded["shiny_rule"], "Always")

    def test_strict_bounds(self):
        for key, bad in (("ability_raw", 5), ("level", 101),
                         ("dynamax_level", 11), ("shiny_lock", 3),
                         ("flawless_iv_count", -1), ("species", 0),
                         ("form", 256), ("can_gigantamax", 2)):
            with self.subTest(key=key):
                r = native_row()
                r[key] = bad
                with self.assertRaises(ValueError):
                    encode_distribution_row(r, 1)
        with self.assertRaises(ValueError):
            encode_distribution_row(native_row(), 256)

    def test_incomplete_or_wrong_payload_is_rejected(self):
        with self.assertRaises((ValueError, IndexError)):
            parse_distribution_payload(b"\0\0\0\0", 1, "synthetic-bad")

    def test_pinned_dist_references_are_hash_verified(self):
        result = read_reference(ROOT)
        self.assertEqual(len(result[1]), 1171)
        self.assertEqual(len(result[2]), 1179)
        self.assertTrue(all(len(encoded) == 32 for x in result.values() for encoded in x))


if __name__ == "__main__":
    unittest.main()
