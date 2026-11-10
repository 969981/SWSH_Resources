/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00514c90; name: FUN_00514c90
 */


void FUN_00514c90(float param_1,float param_2,uint param_3,undefined4 *param_4,float *param_5,
                 uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar5 = param_1 * DAT_01d4bbc8;
  fVar6 = 1.0 / ((param_1 + param_1) * param_1);
  fVar1 = expf(-(fVar6 * param_2 * param_2));
  fVar2 = expf(-(fVar6 * (param_2 + param_2) * (param_2 + param_2)));
  fVar3 = expf(-(fVar6 * param_2 * 3.0 * param_2 * 3.0));
  fVar4 = 1.0 / (float)param_3;
  fVar6 = expf(-(param_2 * 0.0 * param_2 * 0.0 * fVar6));
  if ((param_6 & 1) == 0 || fVar5 < 1.0) {
    fVar5 = fVar6 + fVar1 + fVar1 + fVar2 + fVar2 + fVar3 + fVar3;
  }
  fVar5 = 1.0 / fVar5;
  *param_5 = fVar5 * fVar6;
  *param_4 = 0;
  param_5[1] = fVar5 * fVar1;
  param_4[1] = fVar4;
  param_5[2] = fVar5 * fVar1;
  param_4[2] = -fVar4;
  param_5[3] = fVar5 * fVar2;
  param_4[3] = fVar4 + fVar4;
  param_5[4] = fVar5 * fVar2;
  param_4[4] = -(fVar4 + fVar4);
  param_5[5] = fVar5 * fVar3;
  param_4[5] = fVar4 * 3.0;
  param_5[6] = fVar5 * fVar3;
  param_4[6] = fVar4 * -3.0;
  return;
}


