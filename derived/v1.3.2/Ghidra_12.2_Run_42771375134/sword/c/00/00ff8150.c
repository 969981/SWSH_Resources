/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff8150; name: FUN_00ff8150
 */


long FUN_00ff8150(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = param_1 + (ulong)param_2 * 400 + 0x10;
  if (*(uint *)(param_1 + 0xc90) <= param_2) {
    lVar1 = 0;
  }
  return lVar1;
}


