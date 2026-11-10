/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120cba0; name: FUN_0120cba0
 */


void FUN_0120cba0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  
  if (param_3 == 0) {
    *param_1 = 0;
    return;
  }
  bVar2 = FUN_007b5850(param_3);
  if (7 < bVar2) {
    *param_1 = 0;
    return;
  }
  param_2 = param_2 + (ulong)bVar2 * 0x30;
  lVar1 = 0;
  if (*(long *)(param_2 + 0xa0) != 0) {
    lVar1 = param_2 + 0x78;
  }
  *param_1 = lVar1;
  return;
}


