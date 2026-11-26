import sys,unittest,struct
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from swsh_native_image_mapping import ahtb,personal,match_pokemon
class NativeMapTests(unittest.TestCase):
    def test_ahtb(self):
        k=b"test\0";b=b"AHTB"+struct.pack("<I",1)+bytes(8)+struct.pack("<H",len(k))+k
        self.assertEqual(ahtb(b)["test"]["ordinal"],0)
        with self.assertRaises(ValueError):ahtb(b[:-1])
    def test_model_form(self):
        p=bytearray(1192*176);i=855*176;p[i+0x21]=64;p[i+0x20]=2
        struct.pack_into("<H",p,i+0x1e,1173);struct.pack_into("<H",p,i+0x4c,973)
        struct.pack_into("<H",p,1173*176+0x4c,973)
        r=match_pokemon(struct.pack("<HHHBB",973,1,3,0,0),personal(p),{"poke_icon_0973_01n_n.bntx"})[0]
        self.assertEqual((r["species_id"],r["form_id"],r["personal_index"]),(855,1,1173))
if __name__=="__main__":unittest.main()
