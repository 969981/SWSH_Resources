/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0120cc20; name: FUN_0120cc20
 */


void FUN_0120cc20(long *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  if (*(long *)PTR_DAT_027185f8 == 0) {
    *param_1 = 0;
    return;
  }
  lVar2 = FUN_0120e640();
  if (lVar2 == 0) {
    *param_1 = 0;
    return;
  }
  bVar1 = FUN_007b5850();
  if (7 < bVar1) {
    *param_1 = 0;
    return;
  }
  param_2 = param_2 + (ulong)bVar1 * 0x30;
  lVar2 = 0;
  if (*(long *)(param_2 + 0xa0) != 0) {
    lVar2 = param_2 + 0x78;
  }
  *param_1 = lVar2;
  return;
}


