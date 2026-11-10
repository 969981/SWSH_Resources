/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df930; name: FUN_007df930
 */


long FUN_007df930(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x58;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar1 = 0;
  }
  return lVar1;
}


