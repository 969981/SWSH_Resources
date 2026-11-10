/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087f530; name: FUN_0087f530
 */


byte FUN_0087f530(long param_1)

{
  return *(byte *)(param_1 + 0x31) >> 6 & 1;
}


