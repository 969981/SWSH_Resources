/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00221c30; name: FUN_00221c30
 */


bool FUN_00221c30(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float *param_9,float *param_10,
                 long param_11,float *param_12,uint param_13,uint param_14,float *param_15,
                 float *param_16,float *param_17)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_12;
  fVar5 = param_12[1];
  fVar6 = param_12[2];
  fVar3 = param_12[3] + fVar4 * param_2 + fVar5 * param_3 + fVar6 * param_4;
  if (0.0 < fVar3 * (param_12[3] + fVar4 * param_5 + fVar5 * param_6 + fVar6 * param_7)) {
    return false;
  }
  fVar4 = (param_5 - param_2) * fVar4 + (param_6 - param_3) * fVar5 + (param_7 - param_4) * fVar6;
  if (fVar4 == 0.0) {
    return false;
  }
  fVar3 = fVar3 / fVar4;
  uVar2 = (ulong)param_14;
  *param_17 = param_2 - (param_5 - param_2) * fVar3;
  param_17[1] = param_3 - (param_6 - param_3) * fVar3;
  param_17[2] = param_4 - (param_7 - param_4) * fVar3;
  uVar1 = (ulong)param_13;
  param_1 = (*(float *)(param_11 + uVar1 * 4) * (param_17[uVar2] - param_9[uVar2]) -
            *(float *)(param_11 + uVar2 * 4) * (param_17[uVar1] - param_9[uVar1])) * param_1;
  *param_16 = param_1;
  if (param_1 < param_8) {
    return false;
  }
  fVar5 = param_17[1] - param_1 * param_15[1];
  fVar4 = *param_17 - param_1 * *param_15;
  fVar3 = param_17[2] - param_1 * param_15[2];
  *param_17 = fVar4;
  param_17[1] = fVar5;
  param_17[2] = fVar3;
  return (*param_9 - fVar4) * (*param_10 - fVar4) + (param_9[1] - fVar5) * (param_10[1] - fVar5) +
         (param_9[2] - fVar3) * (param_10[2] - fVar3) < 0.0;
}


