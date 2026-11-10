/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001414e0; name: FUN_001414e0
 */


void FUN_001414e0(undefined2 *param_1,undefined2 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0xffff;
  *(undefined8 *)(param_1 + 2) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 6) = 0x3f8000003f800000;
  fVar3 = DAT_01d4c6a8;
  fVar1 = (float)NEON_fminnm(1.0 - *(float *)(param_2 + 2),0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = DAT_01d4c6a8;
  if (fVar1 != 0.0) {
    fVar2 = logf(fVar1);
    fVar2 = fVar2 / DAT_01d4c4dc;
  }
  *(float *)(param_1 + 2) = fVar2;
  fVar1 = (float)NEON_fminnm(*(undefined4 *)(param_2 + 4),0x3f800000);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar1 != 0.0) {
    fVar3 = logf(fVar1);
    fVar3 = fVar3 / DAT_01d4c4dc;
  }
  fVar1 = *(float *)(param_2 + 6);
  *(float *)(param_1 + 4) = fVar3;
  *(float *)(param_1 + 6) = 1.0 - 1.0 / fVar1;
  *(float *)(param_1 + 8) = 1.0 - 1.0 / *(float *)(param_2 + 8);
  return;
}


