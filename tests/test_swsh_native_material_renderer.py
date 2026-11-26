import unittest,sys
from pathlib import Path
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/"scripts"))
import numpy as np
from swsh_native_material_renderer import wrap_idx,sample,shade,PROFILES
class MaterialTests(unittest.TestCase):
    def test_wrap(self):
        a=np.array([-2,-1,0,1,2,3,4])
        self.assertEqual(wrap_idx(a,2,2).tolist(),[1,0,0,1,1,0,0])
        self.assertEqual(wrap_idx(a,2,1).tolist(),[0,1,0,1,0,1,0])
    def test_identity(self):
        t=np.array([[[0,255,128,77],[255,0,0,255]]],dtype=np.uint8)
        s=sample(t,2,1,[0,0,1,0,0,1,1,1],[0,0,0,1,1],[4,4])
        r=shade(s,[0,0,0,0],[255]*4,[[255]*4]*4,255,PROFILES[0])
        np.testing.assert_array_equal(t,r)
    def test_endpoints(self):
        t=np.array([[[0.,0.,0.,0.5],[1.,1.,1.,1.]]])
        r=shade(t,[10,20,30,0],[100,110,120,200],[[255]*4]*4,255,PROFILES[0])
        self.assertEqual(r.tolist(),[[[10,20,30,100],[100,110,120,200]]])
if __name__=="__main__":unittest.main()
