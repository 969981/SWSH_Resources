/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020d780; name: FUN_0020d780
 */


void FUN_0020d780(long param_1,float *param_2)

{
  *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x48) - *param_2;
  *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x4c) - param_2[1];
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) - param_2[2];
  return;
}


