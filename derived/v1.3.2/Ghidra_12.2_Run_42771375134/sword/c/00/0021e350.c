/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021e350; name: FUN_0021e350
 */


bool FUN_0021e350(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float *param_8,float *param_9,long param_10,
                 float *param_11,uint param_12,uint param_13,float *param_14,float *param_15,
                 float *param_16)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_11;
  fVar5 = param_11[1];
  fVar6 = param_11[2];
  fVar3 = param_11[3] + fVar4 * param_2 + fVar5 * param_3 + fVar6 * param_4;
  if (0.0 < fVar3 * (param_11[3] + fVar4 * param_5 + fVar5 * param_6 + fVar6 * param_7)) {
    return false;
  }
  fVar4 = (param_5 - param_2) * fVar4 + (param_6 - param_3) * fVar5 + (param_7 - param_4) * fVar6;
  if (fVar4 == 0.0) {
    return false;
  }
  fVar3 = fVar3 / fVar4;
  uVar2 = (ulong)param_13;
  *param_16 = param_2 - (param_5 - param_2) * fVar3;
  param_16[1] = param_3 - (param_6 - param_3) * fVar3;
  param_16[2] = param_4 - (param_7 - param_4) * fVar3;
  uVar1 = (ulong)param_12;
  param_1 = (*(float *)(param_10 + uVar1 * 4) * (param_16[uVar2] - param_8[uVar2]) -
            *(float *)(param_10 + uVar2 * 4) * (param_16[uVar1] - param_8[uVar1])) * param_1;
  *param_15 = param_1;
  if (param_1 < 0.0) {
    return false;
  }
  fVar5 = param_16[1] - param_1 * param_14[1];
  fVar4 = *param_16 - param_1 * *param_14;
  fVar3 = param_16[2] - param_1 * param_14[2];
  *param_16 = fVar4;
  param_16[1] = fVar5;
  param_16[2] = fVar3;
  return (*param_8 - fVar4) * (*param_9 - fVar4) + (param_8[1] - fVar5) * (param_9[1] - fVar5) +
         (param_8[2] - fVar3) * (param_9[2] - fVar3) < 0.0;
}


