import sys,struct,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from swsh_image_package import classify,rect,flyt
from swsh_texture_decoder import bc1_alpha_from_blocks,primary
import numpy as np
class PackageTests(unittest.TestCase):
    def test_bc1_alpha(self):
        b=struct.pack("<HHI",0,65535,0xffffffff)
        self.assertEqual(bc1_alpha_from_blocks(b,4,4).tolist(),[[0]*4]*4)
        self.assertTrue(np.array_equal(primary(b,4,4,0x1a01)[...,3],bc1_alpha_from_blocks(b,4,4)))
        b=struct.pack("<HHI",65535,0,0xffffffff)
        self.assertTrue(np.all(bc1_alpha_from_blocks(b,3,2)==255))
    def test_uv(self):
        self.assertEqual(rect([0,0,0.5,0,0,1,0.5,1],64,64),[0,0,32,64])
        self.assertIsNone(rect([1,0,0,0,1,1,0,1],64,64))
    def test_category(self):
        self.assertEqual(classify("icon_ribbon","ribbon_01"),"ribbons_marks")
        self.assertEqual(classify("pokebox","wallpaper_01"),"wallpapers_candidate")
    def test_flyt(self):
        s=b"pic1"+struct.pack("<I",136)+bytes(94)+bytes([1,0])+struct.pack("<8f",0,0,1,0,0,1,1,1)
        b=b"FLYT"+b"\xff\xfe"+struct.pack("<H",20)+bytes([0,0,0,9])+struct.pack("<IHH",20+len(s),1,0)+s
        self.assertEqual(flyt(b)["panes"][0]["uvs"][0],[0,0,1,0,0,1,1,1])
if __name__=="__main__":unittest.main()
