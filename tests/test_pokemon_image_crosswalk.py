import sys,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from pokemon_image_crosswalk import adapt,pixel_key,PROFILE
class CrosswalkTests(unittest.TestCase):
    def test_same_pixels(self):
        common=dict(width=4,height=4,rgba_sha256="a"*64)
        h=adapt("HOME",dict(**common,profile=PROFILE,asset_id="home:a",source_path="a.png",source_commit="x",evidence_status="PACKAGE_PNG_OBSERVED"),None)
        s=adapt("SWSH",dict(**common,asset_id="swsh:a",source_path="a.bntx",parity={"exact":True},coverage="mip0_layer0",color_space="UNORM_NO_TRANSFER_ASSUMED"),None)
        self.assertEqual(pixel_key(h),pixel_key(s))
        self.assertNotEqual(h["evidence_status"],s["evidence_status"])
    def test_za_unsupported(self):
        self.assertIsNone(adapt("ZA",{"decode_status":"UNSUPPORTED"},"x"))
    def test_dimensions_and_hash(self):
        with self.assertRaises(ValueError):pixel_key(dict(profile=PROFILE,width=0,height=1,rgba_sha256="a"*64))
        with self.assertRaises(ValueError):pixel_key(dict(profile=PROFILE,width=1,height=1,rgba_sha256="bad"))
if __name__=="__main__":unittest.main()
