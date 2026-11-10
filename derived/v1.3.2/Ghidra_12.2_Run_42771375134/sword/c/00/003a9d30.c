/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a9d30; name: FUN_003a9d30
 */


float FUN_003a9d30(long param_1)

{
  return *(float *)(param_1 + 0x3c) * *(float *)(param_1 + 0x38) *
         (float)(uint)(1 << (ulong)(*(uint *)(param_1 + 0x50) & 0x1f));
}


