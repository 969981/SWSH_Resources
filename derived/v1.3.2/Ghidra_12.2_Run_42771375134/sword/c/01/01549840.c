/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01549840; name: FUN_01549840
 */


long FUN_01549840(long param_1,int param_2)

{
  long lVar1;
  
  if (0x31 < param_2) {
    return 0;
  }
  param_1 = param_1 + (long)param_2 * 0x68;
  lVar1 = 0;
  if (*(char *)(param_1 + 0x6c) != '\0') {
    lVar1 = param_1 + 0x60;
  }
  return lVar1;
}


