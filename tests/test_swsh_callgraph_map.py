#!/usr/bin/env python3
"""Synthetic regression tests for conservative Sword/Shield callgraph mapping."""
import sqlite3
import sys
import tempfile
import unittest
from pathlib import Path

TOOLS = Path(__file__).resolve().parents[1] / "tools" / "ghidra"
sys.path.insert(0, str(TOOLS))
import swsh_callgraph_map as module


class CallgraphMappingTest(unittest.TestCase):
    def create(self, db_path, game, entries, target):
        db = sqlite3.connect(db_path)
        db.executescript(
            "CREATE TABLE metadata(key TEXT PRIMARY KEY,value TEXT);"
            "CREATE TABLE functions("
            "entry TEXT PRIMARY KEY,name TEXT,min_addr TEXT,max_addr TEXT,"
            "body_bytes INTEGER,body_sha256 TEXT,signature TEXT);"
            "CREATE TABLE references_full(from_addr TEXT,to_addr TEXT,is_call INTEGER);"
        )
        db.execute("INSERT INTO metadata VALUES(?,?)",
                   ("original_elf_sha256", module.ELF_SHA[game]))
        for i, entry in enumerate(entries):
            db.execute(
                "INSERT INTO functions VALUES(?,?,?,?,?,?,?)",
                (format(entry, "08x"), "f" + str(i), format(entry, "08x"),
                 format(entry + 15, "08x"), 16, format(i + 1, "064x"),
                 "void(void)")
            )
        db.execute("INSERT INTO references_full VALUES(?,?,1)",
                   (format(entries[0] + 4, "08x"), format(entries[target], "08x")))
        db.commit()
        db.close()

    def test_relocated_exact_body_with_real_call_delta(self):
        with tempfile.TemporaryDirectory() as t:
            d = Path(t)
            sword = d / "sword.sqlite"
            shield = d / "shield.sqlite"
            self.create(sword, "sword", (0x1000, 0x1100, 0x1200), 1)
            self.create(shield, "shield", (0x2000, 0x2100, 0x2200), 2)
            before = module.EXPECTED_FUNCTIONS.copy()
            try:
                module.EXPECTED_FUNCTIONS.update(sword=3, shield=3)
                result = module.analyze(sword, shield, d / "out")
            finally:
                module.EXPECTED_FUNCTIONS.clear()
                module.EXPECTED_FUNCTIONS.update(before)
            self.assertEqual(3, result["unique_exact_body_pairs"])
            self.assertEqual(3, result["unique_exact_body_relocated_pairs"])
            self.assertEqual(1, result["anchors_with_changed_identified_direct_callee_sets"])
            self.assertEqual(2, result["total_unique_mapped_callee_deltas"])
            self.assertEqual(1, result["sword"]["call_references_with_known_direct_callee"])
            self.assertTrue((d / "out" / "priority_direct_call_difference_candidates.csv").exists())


if __name__ == "__main__":
    unittest.main()
