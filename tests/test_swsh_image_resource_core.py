import unittest,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from swsh_image_resource_core import select_ribbon,FB
class Tests(unittest.TestCase):
    def test_count(self):
        r=dict(ribbon_index=37,image_name="a",image_name2="b")
        self.assertEqual(select_ribbon(r)["status"],"COUNT_REQUIRED")
        self.assertEqual(select_ribbon(r,40)["images"],["b"])
        self.assertEqual(select_ribbon(r,39)["images"],["a"])
        r["ribbon_index"]=38
        self.assertEqual(select_ribbon(r,8)["images"],["b"])
    def test_bounds(self):
        with self.assertRaises(ValueError):FB(b"").n(0,"I")
if __name__=="__main__":unittest.main()
