import sys
import struct
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
import swsh_image_resource_audit as a

class ImageAuditTests(unittest.TestCase):
    def test_cap(self):
        data=struct.pack("<HHHBB",3,0,2,0,1)
        r=a.pokemon_map(data,{"poke_icon_0003_00f_n_g.bntx"})[0]
        self.assertTrue(r["filename_match"])
        self.assertIsNone(r["gigantamax"])
        with self.assertRaises(ValueError):
            a.pokemon_map(data+b"x",set())

    def test_item(self):
        r=a.item_map([dict(item_id="258",item_sprite="106",pouch="4",group_type="0",
          group_index="0",possible_placeholder="False")],{"item_0106.bntx","item_0258.bntx"})[0]
        self.assertEqual(r["sprite_filename"],"item_0106.bntx")
        self.assertEqual(r["id_filename"],"item_0258.bntx")
        self.assertIsNone(r["resolved_filename"])

    def test_bntx(self):
        b=bytearray(512)
        b[:4]=b"BNTX"; b[12:14]=b"\xff\xfe"; b[32:36]=b"NX  "
        for off,fmt,val in [(28,"I",512),(36,"I",1),(40,"Q",64),(64,"Q",128),
          (128+0x60,"Q",300),(128+0x24,"I",64),(128+0x28,"I",32),
          (128+0x2c,"I",1),(128+0x16,"H",1),(128+0x1c,"I",0x1a01)]:
            struct.pack_into("<"+fmt,b,off,val)
        b[128:132]=b"BRTI"; b[300:306]=b"\x03\x00abc\0"
        r=a.bntx(bytes(b))[0]
        self.assertEqual((r["texture_name"],r["width"],r["height"],r["format_raw"]),("abc",64,32,"0x00001a01"))
        b[128]=0
        with self.assertRaises(ValueError):
            a.bntx(bytes(b))

    def test_sarc(self):
        b=bytearray(80); b[:4]=b"SARC"; b[6:8]=b"\xff\xfe"
        struct.pack_into("<H",b,4,20); struct.pack_into("<II",b,8,80,64)
        b[20:24]=b"SFAT"; struct.pack_into("<HH",b,24,12,1)
        struct.pack_into("<IIII",b,32,123,0x01000000,0,4)
        b[48:52]=b"SFNT"; struct.pack_into("<H",b,52,8)
        b[56:60]=b"abc\0"; b[64:68]=b"FLYT"
        self.assertEqual(list(a.sarc(bytes(b))),[(0,"abc","0000007b",b"FLYT")])
        struct.pack_into("<I",b,44,999)
        with self.assertRaises(ValueError):
            list(a.sarc(bytes(b)))

if __name__=="__main__":
    unittest.main()
