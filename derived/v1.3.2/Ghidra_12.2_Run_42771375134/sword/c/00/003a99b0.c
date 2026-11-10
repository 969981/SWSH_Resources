/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a99b0; name: FUN_003a99b0
 */


void FUN_003a99b0(long param_1,float *param_2)

{
  *(float *)(param_1 + 0x84) =
       *(float *)(param_1 + 0x84) +
       *(float *)(param_1 + 0x78) * *param_2 + *(float *)(param_1 + 0x7c) * param_2[1] +
       *(float *)(param_1 + 0x80) * param_2[2];
  FUN_001967d0(*(undefined8 *)(param_1 + 0x10));
  return;
}


