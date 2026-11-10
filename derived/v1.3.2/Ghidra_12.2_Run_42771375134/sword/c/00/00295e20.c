/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00295e20; name: FUN_00295e20
 */


void FUN_00295e20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar6 = *param_5;
  fVar9 = param_3[2];
  fVar11 = *param_6;
  fVar12 = *param_2 - fVar3 * *param_4;
  fVar14 = fVar5 * fVar6 + fVar9 * fVar11;
  fVar8 = param_2[2] - fVar3 * param_4[2];
  fVar1 = fVar3 * *param_4 + *param_2;
  fVar10 = fVar5 * param_5[2] + fVar9 * param_6[2];
  fVar13 = param_2[1] - fVar3 * param_4[1];
  fVar15 = fVar5 * param_5[1] + fVar9 * param_6[1];
  fVar7 = fVar5 * param_5[1] - fVar9 * param_6[1];
  fVar2 = fVar3 * param_4[1] + param_2[1];
  fVar3 = fVar3 * param_4[2] + param_2[2];
  fVar4 = fVar5 * param_5[2] - fVar9 * param_6[2];
  param_1[2] = fVar8 - fVar10;
  param_1[3] = fVar1 - fVar14;
  param_1[4] = fVar2 - fVar15;
  param_1[5] = fVar3 - fVar10;
  param_1[0x12] = fVar14 + fVar1;
  param_1[0x13] = fVar15 + fVar2;
  param_1[0x14] = fVar10 + fVar3;
  param_1[0x15] = fVar14 + fVar12;
  fVar5 = fVar5 * fVar6 - fVar9 * fVar11;
  param_1[0x16] = fVar15 + fVar13;
  param_1[0x17] = fVar10 + fVar8;
  param_1[6] = fVar5 + fVar1;
  param_1[7] = fVar7 + fVar2;
  param_1[8] = fVar4 + fVar3;
  param_1[9] = fVar5 + fVar12;
  param_1[10] = fVar7 + fVar13;
  param_1[0xb] = fVar4 + fVar8;
  param_1[0xc] = fVar12 - fVar5;
  param_1[0xd] = fVar13 - fVar7;
  *param_1 = fVar12 - fVar14;
  param_1[1] = fVar13 - fVar15;
  param_1[0xe] = fVar8 - fVar4;
  param_1[0xf] = fVar1 - fVar5;
  param_1[0x10] = fVar2 - fVar7;
  param_1[0x11] = fVar3 - fVar4;
  return;
}


