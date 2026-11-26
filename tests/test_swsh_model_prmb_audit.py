import unittest,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from swsh_model_prmb_audit import fnv64,models
class Tests(unittest.TestCase):
    def test_hash(self):
        self.assertEqual(fnv64("ribbon_table"),0x2a939633d19cfb16)
        self.assertEqual(fnv64("imageName"),0x5302ac66647b5161)
    def test_bounds(self):
        with self.assertRaises(ValueError):models(b"","g")
if __name__=="__main__":unittest.main()
