/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001476c0; name: FUN_001476c0
 */


void FUN_001476c0(long param_1,long param_2)

{
  *(float *)(param_2 + 0x30) = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x18)) * 0.5;
  *(float *)(param_2 + 0x3c) = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18)) * 0.5;
  *(float *)(param_2 + 0x34) = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1c)) * 0.5;
  *(float *)(param_2 + 0x40) = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1c)) * 0.5;
  *(float *)(param_2 + 0x38) = (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x20)) * 0.5;
  *(float *)(param_2 + 0x44) = (*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20)) * 0.5;
  *(undefined4 *)(param_2 + 0x290) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_2 + 0x28c) = *(undefined4 *)(param_1 + 0x1b0);
  return;
}


