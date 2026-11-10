/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024a770; name: FUN_0024a770
 */


void FUN_0024a770(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float local_64;
  float local_60;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [4];
  float local_50;
  float local_4c;
  float local_48;
  
  local_4c = param_5[1] * param_1 + param_4[1];
  local_50 = *param_5 * param_1 + *param_4;
  local_48 = param_5[2] * param_1 + param_4[2];
  FUN_00236a20(&local_68,&local_50,param_6,param_6 + 3,param_6 + 6,auStack_54,auStack_58);
  fVar5 = local_50 - local_68;
  fVar6 = local_4c - local_64;
  fVar7 = local_48 - local_60;
  fVar1 = sqrtf(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  if (0.0 < fVar1) {
    fVar2 = 1.0 / fVar1;
    fVar5 = fVar5 * fVar2;
    fVar6 = fVar6 * fVar2;
    fVar7 = fVar7 * fVar2;
  }
  if (fVar1 < DAT_01d4c6ac) {
    fVar7 = param_6[3] - *param_6;
    fVar2 = param_6[6] - *param_6;
    fVar4 = param_6[4] - param_6[1];
    fVar6 = param_6[5] - param_6[2];
    fVar3 = param_6[7] - param_6[1];
    fVar1 = param_6[8] - param_6[2];
    fVar5 = fVar4 * fVar1 - fVar6 * fVar3;
    fVar6 = fVar6 * fVar2 - fVar7 * fVar1;
    fVar7 = fVar7 * fVar3 - fVar4 * fVar2;
    fVar1 = sqrtf(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    if (0.0 < fVar1) {
      fVar1 = 1.0 / fVar1;
      fVar5 = fVar1 * fVar5;
      fVar6 = fVar1 * fVar6;
      fVar7 = fVar1 * fVar7;
    }
  }
  *param_2 = local_68;
  param_2[1] = local_64;
  param_2[2] = local_60;
  *param_3 = fVar5;
  param_3[1] = fVar6;
  param_3[2] = fVar7;
  return;
}


