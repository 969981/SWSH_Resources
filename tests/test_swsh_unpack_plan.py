"""Synthetic tests for SWSH archive-aware sharding, no proprietary assets."""
import csv
import tempfile
import unittest
from pathlib import Path
from scripts.swsh_unpack_plan import SOURCE_NCA, generate, valid_subpath


class PlannerTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.root = Path(self.temp.name)
        inv = self.root / "inv.csv"
        arc = self.root / "archive.csv"
        with inv.open("w", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=["RelativePath", "SizeBytes", "SHA256", "Extension"])
            writer.writeheader()
            for name, size in [("a.dat", 100), ("b.bin", 200), ("c.big", 300000000)]:
                writer.writerow({"RelativePath": f"{SOURCE_NCA}/1/bin/{name}", "SizeBytes": size,
                                 "SHA256": "1" * 64, "Extension": Path(name).suffix})
        with arc.open("w", newline="") as f:
            writer = csv.DictWriter(f, fieldnames=[
                "source_subpath", "original_size", "original_sha256", "processing_mode",
                "output_relative_paths", "archive_part_count", "verification_status"])
            writer.writeheader()
            for name, size in [("a.dat", 100), ("b.bin", 200), ("c.big", 300000000)]:
                sub = f"bin/{name}"
                is_big = name == "c.big"
                paths = [f"v1.3.2/1/{sub}.7z.{i:03d}" for i in range(1, 3)] if is_big else [f"v1.3.2/1/{sub}"]
                writer.writerow({"source_subpath": sub, "original_size": size,
                                 "original_sha256": "1" * 64, "processing_mode": "7Z" if is_big else "COPY",
                                 "output_relative_paths": "|".join(paths),
                                 "archive_part_count": 2 if is_big else 0, "verification_status": "VERIFIED"})
        self.inv, self.arc = inv, arc

    def test_plan(self):
        out = self.root / "output"
        result = generate(self.inv, self.arc, out, 2, SOURCE_NCA, 3)
        self.assertEqual(result["source_count"], 3)
        self.assertEqual(result["archive_volumes"], 2)
        self.assertEqual(sum(x["files"] for x in result["shard_stats"]), 3)
        self.assertEqual(sum(x["checkout_paths"] for x in result["shard_stats"]), 4)
        self.assertTrue((out / "shard-000.sparse").is_file())

    def test_expected_count_mismatch(self):
        with self.assertRaises(ValueError):
            generate(self.inv, self.arc, self.root / "other", 2, SOURCE_NCA, 4)

    def test_unsafe_paths(self):
        for path in ("../x", "/etc/passwd", "c:/Windows", "x//y"):
            with self.subTest(path=path):
                with self.assertRaises(ValueError):
                    valid_subpath(path)


if __name__ == "__main__":
    unittest.main()
