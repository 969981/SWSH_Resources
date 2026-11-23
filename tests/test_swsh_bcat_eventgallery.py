"""Safety and provenance tests for the pinned SWSH historical BCAT inventory."""
from __future__ import annotations

import json
import struct
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "scripts"))

from audit_swsh_bcat_eventgallery import (  # noqa: E402
    MANIFEST, audit, decode_bcat_envelope, relative_parts, select_groups,
    source_url, validate_inventory, verify_bytes,
)
from audit_swsh_trade_pkhex import git_blob_sha1  # noqa: E402


class BcatArchiveTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.manifest = json.loads((ROOT / MANIFEST).read_text(encoding="utf-8"))

    def test_pinned_117_indexes_639_source_entries(self):
        validate_inventory(self.manifest)
        self.assertEqual(len(self.manifest["index_groups"]), 118)
        self.assertEqual(sum(len(g["files"]) for g in self.manifest["index_groups"]), 639)

    def test_null_index_is_not_conflated_with_regular_index(self):
        normal = select_groups(self.manifest, "001", False)
        missing = select_groups(self.manifest, "001 (Null)", False)
        self.assertEqual(normal[0]["index_dir"], "Index 001")
        self.assertEqual(missing[0]["index_dir"], "Index 001 (Null)")
        self.assertNotEqual(normal[0]["tree_sha1"], missing[0]["tree_sha1"])

    def test_rejects_unsafe_paths(self):
        with self.assertRaises(ValueError):
            relative_parts({"index_dir": "../bad"}, {"name": "normal_encount"})
        with self.assertRaises(ValueError):
            relative_parts({"index_dir": "Index 002"}, {"name": "../../bad"})

    def test_url_is_pinned_and_encoded(self):
        group = select_groups(self.manifest, "001 (Null)", False)[0]
        file = group["files"][0]
        url = source_url(self.manifest, group, file)
        self.assertIn(self.manifest["source_commit"], url)
        self.assertIn("Index%20001%20%28Null%29", url)

    def test_flatbuffers_bcat_envelope_is_preserved_and_crc_unproven(self):
        payload = struct.pack("<I", 4) + b"flatbuffers"
        blob = bytearray(0x20 + len(payload) + 4)
        blob[0] = 42
        struct.pack_into("<I", blob, 8, 0x20)
        struct.pack_into("<I", blob, 0x10, len(blob) - 4)
        blob[0x20:0x20 + len(payload)] = payload
        header = decode_bcat_envelope(bytes(blob))
        self.assertEqual(header["header_distribution_index"], 42)
        self.assertEqual(header["payload_bytes"], len(payload))
        self.assertEqual(header["trailer_crc16_validation"], "UNVERIFIED")
        broken = bytearray(blob)
        struct.pack_into("<I", broken, 8, 0)
        with self.assertRaisesRegex(ValueError, "header length marker"):
            decode_bcat_envelope(bytes(broken))
        broken = bytearray(blob)
        struct.pack_into("<I", broken, 0x10, len(broken))
        with self.assertRaisesRegex(ValueError, "declared file length"):
            decode_bcat_envelope(bytes(broken))
        broken = bytearray(blob)
        struct.pack_into("<I", broken, 0x20, 0xFFFF)
        with self.assertRaisesRegex(ValueError, "root pointer"):
            decode_bcat_envelope(bytes(broken))

    def test_rejects_wrong_bytes(self):
        fake = {"name": "test", "bytes": 4, "git_blob_sha1": git_blob_sha1(b"abcd")}
        verify_bytes(b"abcd", fake)
        with self.assertRaises(ValueError):
            verify_bytes(b"abce", fake)

    def test_read_only_missing_files_are_not_claimed_verified(self):
        with tempfile.TemporaryDirectory() as temp:
            result = audit(ROOT, "117", False, Path(temp), download=False)
        self.assertEqual(result["files_verified"], 0)
        self.assertGreater(result["files_missing"], 0)
        self.assertEqual(result["event_time_windows"], "NOT_VERIFIED")


if __name__ == "__main__":
    unittest.main()
