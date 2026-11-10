/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00206d10; name: FUN_00206d10
 */


long FUN_00206d10(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) + 0x80;
  }
  return lVar1;
}


