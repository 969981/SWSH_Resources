import sys,struct,unittest
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
from swsh_image_selectors import decode_dat,display,gender_kind
class SelectorTests(unittest.TestCase):
    def test_dat(self):
        u=[ord("A"),0];k=0x7c89;words=[]
        for x in u:
            words.append(x^k);k=((k<<3)|(k>>13))&65535
        b=struct.pack("<HHIIII IHH",1,1,16,0,16,16,12,2,0)+struct.pack("<2H",*words)
        self.assertEqual(display(decode_dat(b)[0]["utf16_units"]),"A")
    def test_control(self):
        self.assertEqual(display([16,2,0xbdff,12,0]),"[VAR BDFF:000C]")
        self.assertEqual(display([16,1,0xbe00,0]),"\\r")
    def test_gender(self):
        self.assertEqual(gender_kind(255),"genderless")
if __name__=="__main__":unittest.main()
