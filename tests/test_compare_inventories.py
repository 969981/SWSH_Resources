import csv
import json
import tempfile
import unittest
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from compare_inventories import compare, export_comparison, load_inventory, normalize_path


class InventoryCompareTests(unittest.TestCase):
    def test_normalize_distinct_nca_roots(self):
        self.assertEqual(normalize_path("a_NCA/1/bin/appli/icon_item/a.bntx"),
                         "1/bin/appli/icon_item/a.bntx")
        self.assertEqual(normalize_path(r"b_NCA\0\main"), "0/main")
        with self.assertRaises(ValueError):
            normalize_path("bin/a.txt")

    def test_statuses_and_missing_hash(self):
        sword = {
            "0/main": {"RelativePath": "a_NCA/0/main", "Region": "ExeFS",
                       "SizeBytes": "10", "SHA256": "AAAA"},
            "1/a": {"RelativePath": "a_NCA/1/a", "Region": "RomFS",
                    "SizeBytes": "4", "SHA256": "bbbb"},
            "1/empty": {"RelativePath": "a_NCA/1/empty", "Region": "RomFS",
                        "SizeBytes": "4", "SHA256": ""},
            "1/only-sword": {"RelativePath": "a_NCA/1/only-sword", "Region": "RomFS",
                             "SizeBytes": "1", "SHA256": "1111"},
        }
        shield = {
            "0/main": {"RelativePath": "b_NCA/0/main", "Region": "ExeFS",
                       "SizeBytes": "11", "SHA256": "CCCC"},
            "1/a": {"RelativePath": "b_NCA/1/a", "Region": "RomFS",
                    "SizeBytes": "4", "SHA256": "BBBB"},
            "1/empty": {"RelativePath": "b_NCA/1/empty", "Region": "RomFS",
                        "SizeBytes": "4", "SHA256": ""},
            "1/only-shield": {"RelativePath": "b_NCA/1/only-shield", "Region": "RomFS",
                             "SizeBytes": "1", "SHA256": "2222"},
        }
        rows = compare(sword, shield)
        statuses = {row["NormalizedPath"]: row["Status"] for row in rows}
        self.assertEqual(statuses, {
            "0/main": "CONTENT_DIFFERENT", "1/a": "IDENTICAL",
            "1/empty": "HASH_MISSING", "1/only-sword": "ONLY_SWORD",
            "1/only-shield": "ONLY_SHIELD",
        })

    def test_end_to_end_and_duplicate_rejection(self):
        with tempfile.TemporaryDirectory() as temp:
            tmp = Path(temp)
            fields = ["RelativePath", "Region", "SizeBytes", "SHA256"]
            for edition, root in [("sword", "a_NCA"), ("shield", "b_NCA")]:
                with (tmp / (edition + ".csv")).open("w", encoding="utf-8-sig",
                                                     newline="") as stream:
                    writer = csv.DictWriter(stream, fieldnames=fields)
                    writer.writeheader()
                    writer.writerow({"RelativePath": f"{root}/0/main",
                                     "Region": "ExeFS", "SizeBytes": "4",
                                     "SHA256": "AAAA" if edition == "sword" else "BBBB"})
                    writer.writerow({"RelativePath": f"{root}/1/data",
                                     "Region": "RomFS", "SizeBytes": "1",
                                     "SHA256": "CCCC"})
            result = export_comparison(tmp / "sword.csv", tmp / "shield.csv",
                                       tmp / "out")
            self.assertEqual(result["status_counts"],
                             {"CONTENT_DIFFERENT": 1, "IDENTICAL": 1})
            self.assertEqual(len(list(csv.DictReader(
                (tmp / "out/comparison_differences.csv").open(encoding="utf-8-sig")))), 1)
            self.assertEqual(json.loads(
                (tmp / "out/summary.json").read_text(encoding="utf-8"))["sword_rows"], 2)
            with (tmp / "sword.csv").open("a", encoding="utf-8") as stream:
                stream.write("a_NCA/0/main,ExeFS,4,AAAA\n")
            with self.assertRaises(ValueError):
                load_inventory(tmp / "sword.csv")


if __name__ == "__main__":
    unittest.main()
