"""Synthetic-only tests for the read-only SWSH trainer ID evidence extractor."""
from __future__ import annotations

import hashlib
import importlib.util
import sqlite3
import struct
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch


SCRIPT = Path(__file__).resolve().parents[1] / "tools" / "ghidra" / "swsh_trainer_id_extract.py"
SPEC = importlib.util.spec_from_file_location("swsh_trainer_id_extract", SCRIPT)
assert SPEC and SPEC.loader
module = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(module)


def synthetic_elf() -> bytes:
    raw = bytearray(0x300)
    raw[:6] = b"\x7fELF\x02\x01"
    struct.pack_into("<H", raw, 18, 183)  # AArch64
    struct.pack_into("<Q", raw, 32, 64)  # program headers offset
    struct.pack_into("<H", raw, 54, 56)  # PT header entry size
    struct.pack_into("<H", raw, 56, 1)  # single PT_LOAD
    struct.pack_into("<IIQQQQQQ", raw, 64, 1, 5, 0x100, 0x200, 0, 0x10, 0x10, 0x1000)
    raw[0x104:0x108] = b"\x20\x00\x80\xd2"  # mov x0,#1 (test bytes)
    return bytes(raw)


class TrainerIdExtractTests(unittest.TestCase):
    def test_elf_sha_and_vma_mapping(self):
        with tempfile.TemporaryDirectory() as td:
            path = Path(td) / "test.elf"
            raw = synthetic_elf()
            path.write_bytes(raw)
            digest = hashlib.sha256(raw).hexdigest()
            data, segments, actual = module.load_elf(path, digest)
            self.assertEqual(digest, actual)
            self.assertTrue(module.byte_match(data, segments, 0x100204, "200080d2"))
            self.assertFalse(module.byte_match(data, segments, 0x100204, "ffffffff"))
            self.assertFalse(module.byte_match(data, segments, 0x100204, ""))

    def test_wrong_hash_is_rejected(self):
        with tempfile.TemporaryDirectory() as td:
            path = Path(td) / "test.elf"
            path.write_bytes(synthetic_elf())
            with self.assertRaisesRegex(ValueError, "SHA-256 mismatch"):
                module.load_elf(path, "0" * 64)

    def test_instruction_comment_conservatism(self):
        self.assertIn("调用", module.note("BL"))
        self.assertIn("写入", module.note("STR"))
        self.assertIn("尚未恢复", module.note("NOP"))

    def test_synthetic_sqlite_report(self):
        with tempfile.TemporaryDirectory() as td:
            root = Path(td)
            elf = root / "v1.3.2" / "0" / "sword_main.elf"
            elf.parent.mkdir(parents=True)
            content = synthetic_elf()
            elf.write_bytes(content)
            sqlite_file = root / "sample.sqlite"
            with sqlite3.connect(sqlite_file) as db:
                db.executescript("""
                CREATE TABLE functions(
                    entry TEXT, min_addr TEXT, max_addr TEXT,
                    body_bytes INTEGER, body_sha256 TEXT
                );
                CREATE TABLE instructions(
                    addr TEXT, bytes_hex TEXT, mnemonic TEXT, display_text TEXT
                );
                CREATE TABLE decompilation(
                    entry TEXT, status TEXT, c TEXT, error TEXT
                );
                CREATE TABLE references_full(
                    from_addr TEXT, to_addr TEXT, ref_type TEXT, is_call INTEGER
                );
                """)
                db.execute(
                    "INSERT INTO functions VALUES(?,?,?,?,?)",
                    ("00100204", "00100204", "00100204", 4, "synthetic")
                )
                db.execute(
                    "INSERT INTO instructions VALUES(?,?,?,?)",
                    ("00100204", "200080d2", "mov", "mov x0, #1")
                )
                db.execute(
                    "INSERT INTO decompilation VALUES(?,?,?,?)",
                    ("00100204", "OK", "void synthetic(void) {}", "")
                )
            with patch.object(module, "SHA", {"sword": hashlib.sha256(content).hexdigest()}), \
                 patch.object(module, "FUNCTIONS", {"state_dispatch": (0x100204, 0x100204)}), \
                 patch.object(module, "CALLS", {"sword": (0x100204,)}):
                out = root / "out"
                report = module.export_game("sword", root, sqlite_file, out)
                self.assertEqual(
                    report["functions"]["state_dispatch"]["status"], "ELF_MATCH"
                )
                self.assertEqual(
                    report["functions"]["state_dispatch"]["elf_verified"], 1
                )
                self.assertEqual(
                    report["call_sites"]["00100204"]["classification"], "NOT_CALL"
                )
                self.assertIn("mov x0", (out / "sword-trainer-id-asm.md").read_text())


if __name__ == "__main__":
    unittest.main()
