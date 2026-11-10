/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00867f40; name: FUN_00867f40
 */


byte FUN_00867f40(long param_1)

{
  return *(byte *)(*(long *)(param_1 + 0x10) + 4) >> 2 & 1;
}


