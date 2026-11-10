/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009430a0; name: FUN_009430a0
 */


void FUN_009430a0(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 200) = *(ulong *)(param_1 + 200) | 1L << (param_2 & 0x3f);
  return;
}


