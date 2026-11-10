/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0050fa60; name: FUN_0050fa60
 */


float * FUN_0050fa60(float *param_1,float *param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2[0xb];
  fVar3 = 1.0;
  if (fVar2 <= 0.0) {
    fVar3 = -1.0;
  }
  fVar7 = -param_2[0xe] / (fVar3 * param_2[10]);
  fVar5 = param_2[5];
  fVar8 = fVar7 + fVar7;
  fVar1 = -param_2[0xe] / (fVar3 * param_2[10] + -1.0);
  fVar4 = fVar8 / *param_2;
  fVar6 = fVar8 / fVar5;
  fVar10 = fVar4 * (1.0 - fVar3 * param_2[8]) * 0.5;
  fVar9 = fVar4 * (fVar3 * param_2[8] + 1.0) * -0.5;
  fVar4 = fVar6 * (fVar3 * param_2[9] + 1.0) * -0.5;
  fVar6 = fVar6 * (1.0 - fVar3 * param_2[9]) * 0.5;
  atanf(1.0 / *param_2);
  atanf(1.0 / fVar5);
  *param_1 = fVar8 / (fVar10 - fVar9);
  param_1[5] = fVar8 / (fVar6 - fVar4);
  fVar3 = 1.0;
  if ((0.0 < fVar2 & (param_3 ^ 1)) == 0) {
    fVar3 = -1.0;
  }
  param_1[8] = fVar3 * ((fVar9 + fVar10) / (fVar9 - fVar10));
  param_1[9] = fVar3 * ((fVar4 + fVar6) / (fVar4 - fVar6));
  param_1[10] = fVar3 * ((fVar7 + fVar1) / (fVar1 - fVar7));
  param_1[0xb] = fVar3;
  param_1[0xe] = (fVar7 * fVar1 * -2.0) / (fVar1 - fVar7);
  param_1[0xf] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return param_1;
}


