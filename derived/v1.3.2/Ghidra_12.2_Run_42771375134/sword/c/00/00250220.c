/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00250220; name: FUN_00250220
 */


int FUN_00250220(float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  fVar1 = fabsf(param_1 + 1.0);
  fVar3 = DAT_01d4c1cc;
  fVar1 = fVar1 * DAT_01d4c1cc;
  fVar2 = fabsf(param_2 + 1.0);
  fVar1 = *(float *)(param_3 + 0x40) + (1.0 - fVar1);
  fVar3 = *(float *)(param_3 + 0x44) + (1.0 - fVar2 * fVar3);
  if (fVar1 <= param_1) {
    param_1 = fVar1;
  }
  if (fVar3 <= param_2) {
    param_2 = fVar3;
  }
  fVar3 = floorf(param_1);
  *param_4 = param_1 - fVar3;
  fVar1 = floorf(param_2);
  *param_5 = param_2 - fVar1;
  return (int)(fVar1 + fVar3 * *(float *)(param_3 + 0x48));
}


