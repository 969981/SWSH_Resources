/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00877670; name: FUN_00877670
 */


bool FUN_00877670(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((param_3 != 0xf) && (param_4 != 0xf)) && (param_7 != 0xf)) && (param_8 != 0xf)) {
    if ((param_1 == 0x84) && (param_5 == 0x84)) {
      return false;
    }
    bVar1 = true;
    if ((param_1 != 0x84) && (param_5 != 0x84)) {
      if (param_2 == param_6) {
        return false;
      }
      bVar1 = false;
      if ((param_2 != 2) && (param_6 != 2)) {
        bVar1 = param_4 == param_8 ||
                (param_4 == param_7 || (param_3 == param_7 || param_3 == param_8));
      }
    }
  }
  return bVar1;
}


