import csv
import hashlib
import tempfile
import unittest
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "scripts"))
from export_inventory import FIELDS, export, inspect_file, region_for


class InventoryExportTests(unittest.TestCase):
    def test_regions(self):
        self.assertEqual(region_for("abc_NCA/0/main"), "ExeFS")
        self.assertEqual(region_for("abc_NCA/1/bin/file"), "RomFS")
        self.assertEqual(region_for("0/main"), "ExeFS")
        self.assertEqual(region_for("other/file"), "Other")

    def test_export_synthetic_nso_and_excluded_output(self):
        with tempfile.TemporaryDirectory() as temp:
            root = Path(temp)
            module = root / "example_NCA/0/main"
            module.parent.mkdir(parents=True)
            data = bytearray(128)
            data[:4] = b"NSO0"
            data[0x40:0x60] = bytes(range(32))
            module.write_bytes(data)
            other = root / "example_NCA/1/bin/file.bin"
            other.parent.mkdir(parents=True)
            other.write_bytes(b"Hello")
            dest = root / "inventory.csv"
            count, errors = export(root, dest)
            self.assertEqual((count, errors), (2, 0))
            with dest.open(encoding="utf-8-sig", newline="") as stream:
                reader = csv.DictReader(stream)
                self.assertEqual(reader.fieldnames, FIELDS)
                rows = {r["RelativePath"]: r for r in reader}
            nso = rows["example_NCA/0/main"]
            self.assertEqual(nso["Magic4ASCII"], "NSO0")
            self.assertEqual(nso["FileTypeByMagic"], "NSO")
            self.assertEqual(nso["NSO_ModuleId_0x40"], bytes(range(32)).hex().upper())
            self.assertEqual(nso["SHA256"], hashlib.sha256(data).hexdigest().upper())
            self.assertEqual(rows["example_NCA/1/bin/file.bin"]["Region"], "RomFS")
            count2, _ = export(root, dest, skip_hash=True)
            self.assertEqual(count2, 2)
            self.assertEqual(inspect_file(root, other, True)["SHA256"], "")


if __name__ == "__main__":
    unittest.main()
