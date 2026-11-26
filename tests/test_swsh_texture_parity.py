import sys
import struct
import unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
import numpy as np
from swsh_texture_decoder import primary, select_channels, encode_png
from swsh_texture_parity_audit import secondary, parity

class TestPixels(unittest.TestCase):
    def test_bc1_red(self):
        data=struct.pack("<HHI",0xf800,0x0000,0)
        a=primary(data,4,4,0x1a01)
        b,_=secondary(data,4,4,0x1a01)
        self.assertEqual(a[0,0].tolist(),[255,0,0,255])
        self.assertTrue(parity(a,b)["exact"])
    def test_bc2_explicit_alpha(self):
        data=struct.pack("<QHHI",0x8888888888888888,0xf800,0x0000,0)
        a=primary(data,4,4,0x1b01); b,_=secondary(data,4,4,0x1b01)
        self.assertEqual(a[0,0].tolist(),[255,0,0,136])
        self.assertTrue(parity(a,b)["exact"])
    def test_bc4_alpha_channel(self):
        data=bytes([128,0])+bytes(6)
        a=primary(data,4,4,0x1d01); b,_=secondary(data,4,4,0x1d01)
        a=select_channels(a,[1,1,1,2]); b=select_channels(b,[1,1,1,2])
        self.assertEqual(a[0,0].tolist(),[255,255,255,128])
        self.assertTrue(parity(a,b)["exact"])
    def test_png(self):
        a=np.array([[[1,2,3,0],[4,5,6,127]]],np.uint8)
        self.assertTrue(encode_png(a).startswith(b"\x89PNG"))
        b=a.copy(); b[0,0,0]=3
        self.assertEqual(parity(a,b)["visible_different_pixels"],0)
        self.assertEqual(parity(a,b)["different_pixels"],1)
if __name__=="__main__": unittest.main()
