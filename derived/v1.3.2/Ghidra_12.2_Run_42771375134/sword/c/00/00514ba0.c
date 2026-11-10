/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00514ba0; name: FUN_00514ba0
 */


void FUN_00514ba0(float param_1,float param_2,uint param_3,undefined4 *param_4,float *param_5,
                 uint param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar2 = param_1 * DAT_01d4bbc8;
  fVar3 = 1.0 / ((param_1 + param_1) * param_1);
  fVar1 = expf(-(fVar3 * param_2 * param_2));
  fVar3 = expf(-(param_2 * 0.0 * param_2 * 0.0 * fVar3));
  if ((param_6 & 1) == 0 || fVar2 < 1.0) {
    fVar2 = fVar3 + fVar1 + fVar1;
  }
  fVar1 = (1.0 / fVar2) * fVar1;
  *param_5 = (1.0 / fVar2) * fVar3;
  *param_4 = 0;
  param_5[1] = fVar1;
  param_4[1] = 1.0 / (float)param_3;
  param_5[2] = fVar1;
  param_4[2] = -(1.0 / (float)param_3);
  return;
}


