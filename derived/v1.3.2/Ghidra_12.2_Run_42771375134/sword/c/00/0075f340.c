/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f340; name: FUN_0075f340
 */


long FUN_0075f340(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) == 0) {
    param_1 = param_1 - *(long *)(param_1 + -8);
  }
  return param_1;
}


