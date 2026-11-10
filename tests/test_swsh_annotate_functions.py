import sqlite3
import sys
import tempfile
import unittest
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools" / "ghidra"))
import swsh_annotate_functions as mod


class AnnotationEvidenceTest(unittest.TestCase):
    def make_db(self, path, game, entries):
        db = sqlite3.connect(path)
        db.executescript("""
            CREATE TABLE metadata(key TEXT PRIMARY KEY,value TEXT NOT NULL);
            CREATE TABLE functions(
                entry TEXT PRIMARY KEY,name TEXT,namespace TEXT,min_addr TEXT,max_addr TEXT,
                body_bytes INTEGER,body_sha256 TEXT,signature TEXT,is_thunk INTEGER,
                is_external INTEGER,source TEXT);
            CREATE TABLE references_full(
                id INTEGER PRIMARY KEY,from_addr TEXT,to_addr TEXT,ref_type TEXT,
                op_index INTEGER,is_call INTEGER,is_jump INTEGER,is_data INTEGER,
                is_read INTEGER,is_write INTEGER,is_primary INTEGER);
            CREATE TABLE defined_data(
                addr TEXT PRIMARY KEY,byte_length INTEGER,datatype TEXT,preview TEXT,is_string INTEGER);
            CREATE TABLE symbols(
                id INTEGER PRIMARY KEY,addr TEXT,name TEXT,namespace TEXT,
                symbol_type TEXT,source TEXT,is_primary INTEGER);
        """)
        db.execute("INSERT INTO metadata VALUES(?,?)",
                   ("original_elf_sha256", mod.EXPECTED_ELF_SHA[game]))
        db.execute("INSERT INTO metadata VALUES(?,?)", ("analysis_completed", "True"))
        for i, entry in enumerate(entries):
            digest = format(i + 1, "064x")
            db.execute(
                "INSERT INTO functions VALUES(?,?,?,?,?,?,?,?,?,?,?)",
                (format(entry, "08x"), "FUN_" + format(entry, "08x"), "Global",
                 format(entry, "08x"), format(entry + 15, "08x"), 16,
                 digest, "void(void)", 0, 0, "ANALYSIS")
            )
        db.commit()
        return db

    def test_exact_body_mapping_and_static_call_string_evidence(self):
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            sword_path = root / "sword.sqlite"
            shield_path = root / "shield.sqlite"
            sword = self.make_db(sword_path, "sword", (0x1000, 0x1100, 0x1200))
            shield = self.make_db(shield_path, "shield", (0x2000, 0x2100, 0x2200))
            sword.execute(
                "INSERT INTO references_full(from_addr,to_addr,ref_type,is_call,is_data,is_read,is_write) "
                "VALUES(?,?,?,?,?,?,?)",
                ("00001004", "00001100", "UNCONDITIONAL_CALL", 1, 0, 0, 0)
            )
            sword.execute(
                "INSERT INTO references_full(from_addr,to_addr,ref_type,is_call,is_data,is_read,is_write) "
                "VALUES(?,?,?,?,?,?,?)",
                ("00001104", "00003000", "DATA", 0, 1, 1, 0)
            )
            sword.execute(
                "INSERT INTO defined_data VALUES(?,?,?,?,?)",
                ("00003000", 6, "string", "Hello world", 1)
            )
            sword.commit()

            old = mod.EXPECTED_FUNCTIONS.copy()
            try:
                mod.EXPECTED_FUNCTIONS.update(sword=3, shield=3)
                left = mod.load_functions(sword, "sword")
                right = mod.load_functions(shield, "shield")
            finally:
                mod.EXPECTED_FUNCTIONS.clear()
                mod.EXPECTED_FUNCTIONS.update(old)

            forward, reverse, ambiguous = mod.build_cross_map(left, right)
            self.assertEqual(3, len(forward))
            self.assertEqual(3, len(reverse))
            self.assertEqual(0, ambiguous)
            self.assertEqual(0x2000, forward[0x1000])
            self.assertEqual(0x1000, reverse[0x2000])

            functions, hashes, owner_for, contiguous, metadata = left
            rel = mod.collect_relationships(sword, functions, owner_for)
            call_targets, callers, strings, reads, writes, symbols = rel
            self.assertIn(0x1100, call_targets[0x1000])
            self.assertIn(0x1000, callers[0x1100])
            self.assertEqual("Hello world", strings[0x1100][0x3000])
            self.assertEqual(3, contiguous)

            item = functions[0x1000]
            other = right[0]
            cross = mod.counterpart_info(item, other, right[1], forward, "sword")
            self.assertEqual("UNIQUE_EXACT_BODY_MATCH", cross["status"])
            role, confidence = mod.infer_role(item, 0, ["memcpy"], [])
            self.assertIn("内存/缓冲区", role)
            self.assertEqual("低（启发式）", confidence)
            comment = mod.make_comment(
                "sword", item, cross, [], ["0x00001100 FUN_00001100"],
                [], [], [], role, confidence, True
            )
            self.assertIn("函数入口：0x00001000", comment)
            self.assertIn("shield 0x00002000", comment)

            sword.close()
            shield.close()

    def test_address_normalization_and_safe_comment_text(self):
        self.assertEqual(0x51B060, mod.address_key("ram:0051b060"))
        self.assertEqual("0051b060", mod.format_address(0x51B060))
        self.assertIn("* /", mod.clean("bad */ comment"))
        self.assertNotIn("\n", mod.clean("line1\nline2"))


if __name__ == "__main__":
    unittest.main()
