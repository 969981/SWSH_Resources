/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c3030; name: FUN_002c3030
 */


void FUN_002c3030(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = *param_10;
  fVar6 = param_10[1];
  fVar2 = param_4 * param_4 + param_5 * param_5 + param_6 * param_6;
  fVar7 = param_10[2];
  fVar1 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  fVar3 = fVar5 * param_4 + fVar6 * param_5 + fVar7 * param_6;
  fVar7 = (*param_9 - param_1) * fVar5 + (param_9[1] - param_2) * fVar6 +
          (param_9[2] - param_3) * fVar7;
  fVar6 = (*param_9 - param_1) * param_4 + (param_9[1] - param_2) * param_5 +
          (param_9[2] - param_3) * param_6;
  fVar4 = fVar2 * fVar1 - fVar3 * fVar3;
  fVar5 = 0.0;
  if (((fVar4 != 0.0) && (fVar4 = (fVar6 * fVar1 - fVar7 * fVar3) / fVar4, 0.0 <= fVar4)) &&
     (fVar5 = fVar4, 1.0 < fVar4)) {
    fVar5 = 1.0;
  }
  if ((fVar1 == 0.0) || (fVar1 = (fVar3 * fVar5 - fVar7) / fVar1, fVar1 < 0.0)) {
    if ((fVar2 == 0.0) || (fVar6 / fVar2 < 0.0)) {
      fVar1 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar1 = 0.0;
      fVar5 = 1.0;
      if (fVar6 / fVar2 <= 1.0) {
        fVar5 = fVar6 / fVar2;
      }
    }
  }
  else if (1.0 < fVar1) {
    fVar5 = 0.0;
    if (fVar2 == 0.0) {
      fVar1 = 1.0;
    }
    else {
      fVar2 = (fVar6 + fVar3) / fVar2;
      fVar1 = 1.0;
      if ((0.0 <= fVar2) && (fVar1 = 1.0, fVar5 = fVar2, 1.0 < fVar2)) {
        fVar5 = 1.0;
        fVar1 = 1.0;
      }
    }
  }
  *param_7 = fVar5 * param_4 + param_1;
  param_7[1] = fVar5 * param_5 + param_2;
  param_7[2] = fVar5 * param_6 + param_3;
  fVar2 = param_10[2];
  fVar5 = param_10[1];
  fVar3 = param_9[1];
  fVar6 = param_9[2];
  *param_8 = fVar1 * *param_10 + *param_9;
  param_8[1] = fVar1 * fVar5 + fVar3;
  param_8[2] = fVar1 * fVar2 + fVar6;
  return;
}


