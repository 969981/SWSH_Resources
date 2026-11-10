/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8930; name: FUN_008f8930
 */


byte FUN_008f8930(long param_1)

{
  return *(byte *)(param_1 + 0x183) >> 2 & 1;
}


