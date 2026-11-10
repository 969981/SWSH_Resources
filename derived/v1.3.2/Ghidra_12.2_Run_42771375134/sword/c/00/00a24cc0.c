/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a24cc0; name: FUN_00a24cc0
 */


void FUN_00a24cc0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  if ((param_4 & 0xff) == 5) {
    if (6 < param_3) {
      return;
    }
    if ((0x55U >> (ulong)(param_3 & 0x1f) & 1) == 0) {
      return;
    }
    FUN_00a1b110(*(long *)(param_1 + 0x6d8) +
                 *(long *)(&DAT_02154730 + (long)(int)param_3 * 8) * 0xb0,param_2,param_3,1);
  }
  if (param_3 == 2) {
    lVar1 = 0;
  }
  else if (param_3 == 6) {
    lVar1 = 2;
  }
  else {
    if (param_3 != 4) {
      return;
    }
    lVar1 = 1;
  }
  FUN_00a264b0(*(long *)(param_1 + 0x6f8) + lVar1 * 0x38,param_4);
  return;
}


