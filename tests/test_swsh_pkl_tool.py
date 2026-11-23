"""SWSH .pkl format codec round-trips and non-destructive edit guarantees."""
from __future__ import annotations

import json
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from swsh_pkl_tool import (
    KNOWN_FILES, decode, decode_wild, diff_documents, encode, encode_wild,
    load, repack, sha, summarize, write_export,
)


class PKLCodecTests(unittest.TestCase):
    def test_nine_pinned_1_3_2_pkls_have_lossless_round_trip(self):
        wild = ROOT / "Unpack/v1.3.2/pkl"
        raid = wild / "raid"
        expected = {
            "encounter_sw_hidden.pkl": (4720, 62, 863),
            "encounter_sw_symbol.pkl": (6476, 123, 1050),
            "encounter_sh_hidden.pkl": (4696, 62, 855),
            "encounter_sh_symbol.pkl": (6508, 123, 1057),
            "encounter_sw_nest.pkl": (21560, 10, 2156),
            "encounter_sh_nest.pkl": (21510, 10, 2151),
            "encounter_sw_dist.pkl": (18736, 16, 1171),
            "encounter_sh_dist.pkl": (18864, 16, 1179),
            "encounter_swsh_underground.pkl": (3822, 14, 273),
        }
        self.assertEqual(set(KNOWN_FILES), set(expected))
        for name, (bytes_expected, a, b) in expected.items():
            with self.subTest(file=name):
                path = (wild if KNOWN_FILES[name] == "wild" else raid) / name
                original, doc = load(path, None)
                self.assertEqual(len(original), bytes_expected)
                self.assertEqual(encode(doc), original)
                summary = summarize(doc, original)
                if doc["kind"] == "wild":
                    self.assertEqual(summary["areas"], a)
                    self.assertEqual(summary["slots"], b)
                else:
                    self.assertEqual(summary["stride"], a)
                    self.assertEqual(summary["records"], b)

    def test_synthetic_wild_slot_pack_and_auto_padding(self):
        doc = {
            "kind": "wild", "signature": "sw",
            "areas": [
                {"area_index": 0, "location_id": 12, "groups": [
                    {"weather_mask": 0x401, "level_min": 2, "level_max": 5,
                     "slot_type": 3, "slots": [{"species": 133, "form": 2}]},
                    {"weather_mask": 1, "level_min": 6, "level_max": 8,
                     "slot_type": 4, "slots": [{"species": 25, "form": 0},
                                             {"species": 150, "form": 1}]},
                ]},
            ],
        }
        blob = encode_wild(doc)
        self.assertEqual(blob[:2], b"sw")
        self.assertEqual(decode_wild(blob), doc)
        self.assertEqual(len(blob) % 4, 0)
        self.assertEqual(blob[-2:], b"\0\0")
        doc["areas"][0]["groups"][1]["slots"][0]["species"] = 26
        edited = encode_wild(doc)
        self.assertNotEqual(blob, edited)
        self.assertEqual(decode_wild(edited), doc)

    def test_edits_export_import_and_sha_guard(self):
        src = ROOT / "Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl"
        data, doc = load(src, None)
        with tempfile.TemporaryDirectory() as tmp:
            d = Path(tmp)
            edit_json, csv_path = d / "edit.json", d / "view.csv"
            write_export(src, data, doc, edit_json, csv_path)
            payload = json.loads(edit_json.read_text(encoding="utf-8"))
            self.assertEqual(payload["source_sha256"], sha(data))
            out = d / "changed.pkl"
            payload["data"]["records"][0]["level"] = (
                30 if payload["data"]["records"][0]["level"] != 30 else 31
            )
            edit_json.write_text(json.dumps(payload), encoding="utf-8")
            result = repack(src, data, edit_json, out)
            self.assertEqual(result["status"], "CUSTOM_EDITED_PKL_NOT_PKHEX_REFERENCE")
            self.assertEqual(len(out.read_bytes()), len(data))
            self.assertNotEqual(out.read_bytes(), data)
            edited = decode(out.read_bytes(), "dist")
            differences = diff_documents(doc, edited)
            self.assertEqual(differences["changed_indices_first_50"], [0])
            with self.assertRaises(ValueError):
                repack(src, data, edit_json, out)
            with self.assertRaises(ValueError):
                repack(src, data, edit_json, src)
            payload["source_sha256"] = "0" * 64
            edit_json.write_text(json.dumps(payload), encoding="utf-8")
            with self.assertRaises(ValueError):
                repack(src, data, edit_json, d / "bad.pkl")

    def test_wild_rejects_corrupt_offsets(self):
        file = ROOT / "Unpack/v1.3.2/pkl/encounter_sw_hidden.pkl"
        content = bytearray(file.read_bytes())
        content[4:8] = b"\0\0\0\0"
        with self.assertRaises(ValueError):
            decode_wild(bytes(content))

    def test_invalid_species_ability_ranks_and_gmax_are_rejected(self):
        d = {"kind": "nest", "records": [
            {"record_index": 0, "species": 133, "form": 0,
             "gender_code": 255, "ability_permission": 0,
             "can_gigantamax": False, "nest_index": 1,
             "min_rank_zero_based": 0, "max_rank_zero_based": 4,
             "flawless_iv_count": 4}
        ]}
        blob = encode(d)
        self.assertEqual(decode(blob, "nest"), d)
        for field, wrong in (("species", 0), ("ability_permission", 7),
                             ("min_rank_zero_based", 5),
                             ("can_gigantamax", 1), ("record_index", 6)):
            with self.subTest(field=field):
                replacement = json.loads(json.dumps(d))
                replacement["records"][0][field] = wrong
                with self.assertRaises(ValueError):
                    encode(replacement)


if __name__ == "__main__":
    unittest.main()
