/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006302e0; name: FUN_006302e0
 */


long FUN_006302e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x350);
  param_3 = (*(long *)(param_1 + 0x358) - lVar1) + param_3;
  if (-1 < param_2) {
    lVar3 = *(long *)(param_1 + 0x348);
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = (param_3 + param_2) / lVar3;
    }
    lVar2 = lVar1 + lVar2 * lVar3;
    if (-1 < lVar2) {
      lVar1 = lVar2;
    }
    return lVar1;
  }
  lVar3 = *(long *)(param_1 + 0x348);
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = (param_3 - param_2) / lVar3;
  }
  lVar2 = -lVar1 - lVar2 * lVar3;
  if (0 < lVar2) {
    lVar2 = -lVar1;
  }
  return lVar2;
}


