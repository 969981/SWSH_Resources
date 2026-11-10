/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f260; name: FUN_0075f260
 */


long FUN_0075f260(long param_1)

{
  return 1L << ((ulong)*(byte *)(param_1 + 0xe) & 0x3f);
}


