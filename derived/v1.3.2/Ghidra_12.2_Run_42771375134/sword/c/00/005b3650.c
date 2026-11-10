/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b3650; name: FUN_005b3650
 */


long FUN_005b3650(long param_1,uint param_2,int param_3)

{
  long lVar1;
  
  if (*(float *)(param_1 + 0x1dc) != 0.0) {
    lVar1 = 0x470;
    if ((param_2 & 1) == 0) {
      lVar1 = 0x468;
    }
    lVar1 = *(long *)(*(long *)(param_1 + lVar1) + (long)param_3 * 8);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = 0x450;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x448;
  }
  return *(long *)(*(long *)(param_1 + lVar1) + (long)param_3 * 8);
}


