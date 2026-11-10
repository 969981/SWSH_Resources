/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00512220; name: FUN_00512220
 */


void FUN_00512220(float param_1,uint param_2,uint param_3,float *param_4,undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1 = param_1 + -0.5;
  fVar2 = -((1.0 / (float)param_2) * param_1);
  fVar3 = -((1.0 / (float)param_3) * param_1);
  fVar1 = (1.0 / (float)param_2) * param_1;
  param_1 = (1.0 / (float)param_3) * param_1;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  param_4[10] = 0.0;
  param_4[0xb] = 0.0;
  *param_4 = fVar2;
  param_4[1] = fVar3;
  param_4[4] = fVar1;
  param_4[5] = fVar3;
  param_4[8] = fVar2;
  param_4[9] = param_1;
  param_4[0xc] = fVar1;
  param_4[0xd] = param_1;
  param_4[0xe] = 0.0;
  param_4[0xf] = 0.0;
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0x3e8000003e800000;
    param_5[1] = 0x3e8000003e800000;
    param_5[2] = 0x3e8000003e800000;
    param_5[3] = 0x3e8000003e800000;
    param_5[4] = 0x3e8000003e800000;
    param_5[5] = 0x3e8000003e800000;
    param_5[6] = 0x3e8000003e800000;
    param_5[7] = 0x3e8000003e800000;
  }
  return;
}


