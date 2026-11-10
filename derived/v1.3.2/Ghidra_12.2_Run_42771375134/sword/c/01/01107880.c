/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01107880; name: FUN_01107880
 */


void FUN_01107880(long param_1)

{
  float fVar1;
  
  fVar1 = DAT_01d4c6b8;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    *(undefined4 *)(param_1 + 0x80) = 1;
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(undefined4 *)(param_1 + 0x88) = 0x42c80000;
    *(float *)(param_1 + 0x8c) = ((fVar1 - *(float *)(param_1 + 0x84)) + 10.0) / 20.0;
  }
  return;
}


