/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040eab0; name: FUN_0040eab0
 */


int FUN_0040eab0(long param_1)

{
  return *(int *)(param_1 + 0xf8) -
         *(int *)(*(long *)(param_1 + 0xe8) + (ulong)*(uint *)(param_1 + 0xf0) * 0x10 + -0xc);
}


