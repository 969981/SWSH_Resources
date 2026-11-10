/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ed250; name: FUN_005ed250
 */


int FUN_005ed250(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 1) {
    if ((int)param_1 < 1) {
      return 0;
    }
    iVar1 = 0;
    do {
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (param_1 != 0);
  }
  else {
    iVar1 = 0;
    do {
      if ((int)param_1 < 1) {
        return iVar1;
      }
      param_1 = param_1 >> 1;
      iVar1 = iVar1 + 1;
    } while (param_2 <= (int)param_1);
  }
  return iVar1;
}


