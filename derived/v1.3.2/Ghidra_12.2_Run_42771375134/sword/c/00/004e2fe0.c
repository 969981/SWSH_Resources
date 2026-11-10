/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2fe0; name: FUN_004e2fe0
 */


void FUN_004e2fe0(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 0.0) {
    param_1 = *(float *)(param_2 + 0x50);
  }
  else {
    *(float *)(param_2 + 0x50) = param_1;
  }
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x1c));
  fVar2 = param_1 * fVar1 * DAT_01d4c728;
  *(float *)(param_2 + 0x54) = DAT_01d4c2fc / (param_1 * fVar1);
  *(float *)(param_2 + 0x58) = fVar2;
  return;
}


