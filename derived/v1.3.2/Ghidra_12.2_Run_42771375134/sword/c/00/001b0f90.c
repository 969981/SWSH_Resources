/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b0f90; name: FUN_001b0f90
 */


void FUN_001b0f90(float *param_1,float *param_2,float *param_3)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar8 = fVar2 + fVar2;
  fVar3 = param_3[2];
  fVar5 = param_3[3];
  fVar7 = fVar1 + fVar1;
  fVar6 = (fVar3 + fVar3) * fVar5;
  fVar12 = fVar3 * (fVar3 + fVar3);
  fVar16 = fVar7 * fVar2 + fVar6;
  fVar6 = fVar7 * fVar2 - fVar6;
  fVar1 = 1.0 - fVar1 * fVar7;
  fVar11 = fVar8 * fVar3 + fVar7 * fVar5;
  fVar10 = fVar7 * fVar3 + fVar8 * fVar5;
  fVar15 = (1.0 - fVar2 * fVar8) - fVar12;
  fVar4 = fVar7 * fVar3 - fVar8 * fVar5;
  fVar9 = fVar8 * fVar3 - fVar7 * fVar5;
  fVar12 = fVar1 - fVar12;
  fVar1 = fVar1 - fVar2 * fVar8;
  *param_1 = fVar15;
  param_1[1] = fVar6;
  param_1[2] = fVar10;
  param_1[3] = fVar16;
  param_1[6] = fVar4;
  param_1[7] = fVar11;
  param_1[4] = fVar12;
  param_1[5] = fVar9;
  param_1[8] = fVar1;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar21 = fVar2 * fVar10 + fVar9 * 0.0 + fVar1 * 0.0;
  fVar5 = param_2[2];
  fVar14 = fVar2 * fVar6 + fVar12 * 0.0 + fVar11 * 0.0;
  fVar19 = fVar6 * 0.0 + fVar3 * fVar12 + fVar11 * 0.0;
  fVar13 = fVar2 * fVar15 + fVar16 * 0.0 + fVar4 * 0.0;
  fVar18 = fVar15 * 0.0 + fVar3 * fVar16 + fVar4 * 0.0;
  fVar20 = fVar10 * 0.0 + fVar3 * fVar9 + fVar1 * 0.0;
  fVar3 = fVar15 * 0.0 + fVar16 * 0.0 + fVar5 * fVar4;
  fVar17 = fVar6 * 0.0 + fVar12 * 0.0 + fVar5 * fVar11;
  fVar2 = fVar10 * 0.0 + fVar9 * 0.0 + fVar5 * fVar1;
  fVar7 = fVar15 * fVar13 + fVar16 * fVar18 + fVar4 * fVar3;
  fVar5 = fVar15 * fVar14 + fVar16 * fVar19 + fVar4 * fVar17;
  fVar8 = fVar15 * fVar21 + fVar16 * fVar20 + fVar4 * fVar2;
  fVar15 = fVar6 * fVar13 + fVar12 * fVar18 + fVar11 * fVar3;
  fVar16 = fVar6 * fVar14 + fVar12 * fVar19 + fVar11 * fVar17;
  fVar11 = fVar6 * fVar21 + fVar12 * fVar20 + fVar11 * fVar2;
  *param_1 = fVar7;
  param_1[1] = fVar5;
  param_1[2] = fVar8;
  param_1[3] = fVar15;
  param_1[4] = fVar16;
  param_1[5] = fVar11;
  fVar4 = fVar10 * fVar13 + fVar9 * fVar18 + fVar1 * fVar3;
  fVar6 = fVar10 * fVar14 + fVar9 * fVar19 + fVar1 * fVar17;
  fVar9 = fVar10 * fVar21 + fVar9 * fVar20 + fVar1 * fVar2;
  fVar2 = fVar16 * fVar9 - fVar6 * fVar11;
  fVar1 = fVar6 * fVar15 - fVar16 * fVar4;
  param_1[6] = fVar4;
  param_1[7] = fVar6;
  fVar3 = fVar2 * fVar7 + fVar5 * (fVar11 * fVar4 - fVar9 * fVar15) + fVar1 * fVar8;
  param_1[8] = fVar9;
  if (fVar3 == 0.0) {
    fVar9 = 0.0;
    fVar12 = 0.0;
    fVar10 = 0.0;
    fVar8 = 0.0;
    fVar1 = 0.0;
    fVar3 = 0.0;
    fVar13 = 1.0;
    fVar2 = 1.0;
    fVar16 = 1.0;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fVar2 = fVar2 * fVar3;
    fVar12 = (fVar11 * fVar5 - fVar16 * fVar8) * fVar3;
    fVar1 = fVar1 * fVar3;
    fVar13 = (fVar9 * fVar7 - fVar4 * fVar8) * fVar3;
    fVar16 = (fVar16 * fVar7 - fVar15 * fVar5) * fVar3;
    fVar10 = -((fVar9 * fVar5 - fVar6 * fVar8) * fVar3);
    fVar9 = -((fVar9 * fVar15 - fVar11 * fVar4) * fVar3);
    fVar8 = -((fVar11 * fVar7 - fVar15 * fVar8) * fVar3);
    fVar3 = -((fVar6 * fVar7 - fVar4 * fVar5) * fVar3);
  }
  param_1[9] = fVar2;
  param_1[10] = fVar10;
  param_1[0xb] = fVar12;
  param_1[0xc] = fVar9;
  param_1[0xd] = fVar13;
  param_1[0xe] = fVar8;
  param_1[0xf] = fVar1;
  param_1[0x10] = fVar3;
  param_1[0x11] = fVar16;
  *(bool *)(param_1 + 0x12) = *param_2 * param_2[1] * param_2[2] < 0.0;
  return;
}


