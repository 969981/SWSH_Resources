/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753d80; name: FUN_00753d80
 */


long FUN_00753d80(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x220);
  lVar1 = lVar2 + (long)param_2 * 0x80;
  if ((int)((ulong)(*(long *)(param_1 + 0x228) - lVar2) >> 7) <= param_2) {
    lVar1 = lVar2;
  }
  return lVar1;
}


