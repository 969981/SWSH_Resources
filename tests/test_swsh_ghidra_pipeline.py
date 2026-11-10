#!/usr/bin/env python3
"""Synthetic tests: no Nintendo binaries, no unverifiable recovery claims."""
import csv
import gzip
import hashlib
import json
import sqlite3
import sys
import tempfile
import unittest
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "ghidra"))

import swsh_build_sqlite
import swsh_compare
import swsh_extract_c
import swsh_publish_split
import swsh_restore_split


class GhidraPipelineTest(unittest.TestCase):
    def make_source(self, directory, game, second_hash="hash_b"):
        elf = directory / (game + ".elf")
        elf.write_bytes(b"\x7fELF synthetic test data for database import")
        expected = hashlib.sha256(elf.read_bytes()).hexdigest()
        swsh_build_sqlite.EXPECTED_ELF_SHA256[game] = expected
        events = directory / (game + ".ndjson.gz")
        rows = [
            {"type": "meta", "program": game, "image_base": "00000000",
             "language": "AARCH64:LE:64:v8A", "decompile_requested": True},
            {"type": "memory", "name": "text", "start": "00001000",
             "end": "00001fff", "length": 4096, "execute": True,
             "read": True, "write": False, "initialized": True},
            {"type": "function", "entry": "00001000", "name": "FUN_1000",
             "namespace": "Global", "body_min": "00001000",
             "body_max": "00001003", "body_bytes": 4, "body_sha256": "hash_a",
             "signature": "void FUN_1000(void)", "thunk": False,
             "external": False, "source": "ANALYSIS"},
            {"type": "decompile", "entry": "00001000", "status": "OK", "c": "void a(void) {}"},
            {"type": "function", "entry": "00001010", "name": "FUN_1010",
             "namespace": "Global", "body_min": "00001010",
             "body_max": "00001013", "body_bytes": 4, "body_sha256": second_hash,
             "signature": "void FUN_1010(void)", "thunk": False,
             "external": False, "source": "ANALYSIS"},
            {"type": "decompile", "entry": "00001010", "status": "FAILED", "error": "timeout"},
            {"type": "instruction", "address": "00001000", "length": 4,
             "bytes_hex": "d503201f", "mnemonic": "nop", "display": "nop"},
            {"type": "instruction", "address": "00001010", "length": 4,
             "bytes_hex": "d503201f", "mnemonic": "nop", "display": "nop"},
            {"type": "summary", "functions": 2, "instructions": 2,
             "references": 0, "symbols": 0, "defined_data": 0,
             "decompiled_ok": 1, "decompiled_failed": 1,
             "decompile_requested": True, "complete": True},
        ]
        with gzip.open(events, "wt", encoding="utf-8") as out:
            for row in rows:
                out.write(json.dumps(row) + "\n")
        db = directory / (game + ".sqlite")
        status = swsh_build_sqlite.build(elf, events, db, game)
        self.assertEqual("COMPLETE", status["status"])
        return elf, events, db, expected

    def test_sqlite_c_and_compare_with_real_failure_status(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            sword = self.make_source(root, "sword")
            shield = self.make_source(root, "shield", "changed_hash")
            with sqlite3.connect(sword[2]) as db:
                self.assertEqual("ok", db.execute("PRAGMA integrity_check").fetchone()[0])
                self.assertEqual(2, db.execute("SELECT COUNT(*) FROM functions").fetchone()[0])
                self.assertEqual("hash_a", db.execute(
                    "SELECT body_sha256 FROM functions WHERE entry='00001000'").fetchone()[0])
            archive = root / "c.zip"
            index = root / "index.csv"
            report = root / "report.json"
            exported = swsh_extract_c.run(sword[1], archive, index, report, sword[3])
            self.assertEqual(2, exported["functions"])
            self.assertEqual(1, exported["c_success"])
            self.assertEqual(1, exported["c_fail_or_empty"])
            with zipfile.ZipFile(archive) as z:
                self.assertIn("decompiled/00001000.c", z.namelist())
            with index.open(newline="") as f:
                self.assertEqual(["OK", "FAILED"], [r["status"] for r in csv.DictReader(f)])
            uncompressed = root / "c"
            self.assertEqual(1, swsh_publish_split.unpack_code(archive, uncompressed, 1))
            self.assertTrue((uncompressed / "00" / "00001000.c").is_file())
            diff = swsh_compare.compare(sword[2], shield[2], root / "compare")
            self.assertEqual(1, diff["same_entry_comparison_counts"]["SAME_ENTRY_MATCHED_MACHINE_BYTES"])
            self.assertEqual(1, diff["same_entry_comparison_counts"]["SAME_ENTRY_DIFFERENT_MACHINE_BYTES"])

    def test_raw_sqlite_and_whole_line_ndjson_round_trip(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            src = root / "test.sqlite"
            src.write_bytes(b"SQLite byte exact\x00\xff" * 120)
            parts = swsh_publish_split.chunk_binary(src, root / "database", "test.sqlite")
            restored = root / "assembled.sqlite"
            swsh_restore_split.combine(root / "database", parts, restored)
            self.assertEqual(src.read_bytes(), restored.read_bytes())
            gz = root / "events.ndjson.gz"
            with gzip.open(gz, "wb") as f:
                f.write(b'{"type":"meta"}\n{"type":"summary","complete":true}\n')
            spec = swsh_publish_split.chunk_ndjson(gz, root / "ndjson")
            result = root / "assembled.ndjson"
            swsh_restore_split.combine(root / "ndjson", spec, result)
            self.assertEqual(2, spec["lines"])
            self.assertEqual(b'{"type":"meta"}\n{"type":"summary","complete":true}\n',
                             result.read_bytes())


if __name__ == "__main__":
    unittest.main()
