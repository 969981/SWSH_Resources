/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002fe180; name: FUN_002fe180
 */


void FUN_002fe180(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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
  float fVar16;
  
  fVar1 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x24);
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar2 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x20);
  fVar4 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x28);
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  fVar8 = fVar7 * fVar7 + -0.5;
  fVar13 = fVar2 * fVar11 + fVar1 * fVar12 + fVar4 * fVar6;
  fVar9 = param_2[6];
  fVar3 = param_2[4];
  fVar5 = param_2[5];
  fVar15 = *(float *)(param_1 + 0x18);
  fVar16 = *(float *)(param_1 + 0x1c);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar14 = *(float *)(param_1 + 0x14);
  *param_4 = (fVar7 * fVar10 + fVar11 * fVar16 + fVar12 * fVar15) - fVar6 * fVar14;
  param_4[1] = (fVar6 * fVar10 + fVar12 * fVar16 + fVar7 * fVar14) - fVar11 * fVar15;
  param_4[2] = (fVar11 * fVar14 + fVar6 * fVar16 + fVar7 * fVar15) - fVar12 * fVar10;
  param_4[3] = ((fVar7 * fVar16 - fVar11 * fVar10) - fVar12 * fVar14) - fVar6 * fVar15;
  param_4[4] = fVar3 + fVar11 * fVar13 + fVar2 * fVar8 + fVar7 * (fVar4 * fVar12 - fVar1 * fVar6);
  param_4[5] = fVar5 + fVar12 * fVar13 + fVar1 * fVar8 + fVar7 * (fVar2 * fVar6 - fVar4 * fVar11);
  param_4[6] = fVar9 + fVar4 * fVar8 + fVar7 * (fVar1 * fVar11 - fVar2 * fVar12) + fVar6 * fVar13;
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  fVar2 = *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x40);
  fVar10 = *param_3;
  fVar11 = param_3[1];
  fVar1 = *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x3c);
  fVar3 = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x44);
  fVar4 = fVar9 * fVar9 + -0.5;
  fVar6 = fVar1 * fVar10 + fVar2 * fVar11 + fVar3 * fVar8;
  fVar14 = *(float *)(param_1 + 0x34);
  fVar15 = *(float *)(param_1 + 0x38);
  fVar7 = param_3[5] + fVar11 * fVar6 + fVar2 * fVar4 + fVar9 * (fVar1 * fVar8 - fVar3 * fVar10);
  fVar12 = *(float *)(param_1 + 0x2c);
  fVar13 = *(float *)(param_1 + 0x30);
  fVar5 = param_3[4] + fVar10 * fVar6 + fVar1 * fVar4 + fVar9 * (fVar3 * fVar11 - fVar2 * fVar8);
  fVar4 = param_3[6] + fVar3 * fVar4 + fVar9 * (fVar2 * fVar10 - fVar1 * fVar11) + fVar8 * fVar6;
  fVar1 = (fVar9 * fVar12 + fVar10 * fVar15 + fVar11 * fVar14) - fVar8 * fVar13;
  fVar2 = (fVar8 * fVar12 + fVar11 * fVar15 + fVar9 * fVar13) - fVar10 * fVar14;
  fVar3 = (fVar10 * fVar13 + fVar8 * fVar15 + fVar9 * fVar14) - fVar11 * fVar12;
  fVar9 = ((fVar9 * fVar15 - fVar10 * fVar12) - fVar11 * fVar13) - fVar8 * fVar14;
  *param_5 = fVar1;
  param_5[1] = fVar2;
  param_5[6] = fVar4;
  param_5[2] = fVar3;
  param_5[3] = fVar9;
  param_5[4] = fVar5;
  param_5[5] = fVar7;
  fVar6 = *param_4;
  fVar8 = param_4[1];
  fVar10 = param_4[2];
  fVar12 = param_4[3];
  fVar11 = fVar12 * fVar9;
  if (fVar6 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11 < 0.0) {
    fVar1 = -fVar1;
    fVar2 = -fVar2;
    fVar3 = -fVar3;
    fVar9 = -fVar9;
    *param_5 = fVar1;
    param_5[1] = fVar2;
    param_5[2] = fVar3;
    param_5[3] = fVar9;
    fVar10 = param_4[2];
    fVar12 = param_4[3];
    fVar11 = fVar12 * fVar9;
    fVar6 = *param_4;
    fVar8 = param_4[1];
  }
  fVar5 = fVar5 - param_4[4];
  fVar7 = fVar7 - param_4[5];
  fVar4 = fVar4 - param_4[6];
  fVar5 = fVar5 + fVar5;
  fVar13 = fVar12 * fVar12 + -0.5;
  fVar7 = fVar7 + fVar7;
  fVar4 = fVar4 + fVar4;
  fVar14 = (fVar5 * -fVar6 - fVar7 * fVar8) - fVar4 * fVar10;
  *param_6 = ((fVar12 * fVar1 - fVar9 * fVar6) - fVar3 * fVar8) + fVar2 * fVar10;
  param_6[1] = ((fVar12 * fVar2 - fVar9 * fVar8) - fVar1 * fVar10) + fVar3 * fVar6;
  param_6[4] = (fVar13 * fVar5 + fVar12 * (fVar7 * fVar10 - fVar4 * fVar8)) - fVar14 * fVar6;
  param_6[5] = (fVar13 * fVar7 + fVar12 * (fVar4 * fVar6 - fVar5 * fVar10)) - fVar14 * fVar8;
  param_6[6] = (fVar13 * fVar4 + fVar12 * (fVar5 * fVar8 - fVar7 * fVar6)) - fVar14 * fVar10;
  param_6[2] = ((fVar12 * fVar3 - fVar9 * fVar10) - fVar2 * fVar6) + fVar1 * fVar8;
  param_6[3] = fVar11 + fVar1 * fVar6 + fVar2 * fVar8 + fVar3 * fVar10;
  return;
}


