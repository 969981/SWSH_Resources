/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093aca0; name: FUN_0093aca0
 */


long FUN_0093aca0(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 9 + (ulong)param_2;
  if (*(byte *)(param_1 + 8) <= param_2) {
    lVar1 = param_1 + 9;
  }
  return lVar1;
}


