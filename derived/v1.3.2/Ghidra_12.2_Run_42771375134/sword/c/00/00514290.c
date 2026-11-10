/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00514290; name: FUN_00514290
 */


void FUN_00514290(float param_1,float param_2,uint param_3,undefined4 *param_4,float *param_5,
                 uint param_6)

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
  
  if (param_1 <= DAT_01d4c2e0) {
    param_1 = DAT_01d4c2e0;
  }
  fVar19 = param_1 * DAT_01d4bbc8;
  fVar18 = 1.0 / ((param_1 + param_1) * param_1);
  fVar1 = expf(-(fVar18 * param_2 * param_2));
  fVar5 = param_2 + param_2;
  fVar2 = expf(-(fVar18 * fVar5 * fVar5));
  fVar2 = fVar1 + fVar2;
  fVar3 = 0.0;
  if (0.0 < fVar2) {
    fVar3 = fVar1 / fVar2;
  }
  fVar2 = fVar2 * 0.5;
  fVar5 = fVar5 + (param_2 - fVar5) * fVar3;
  fVar6 = param_2 * 3.0;
  fVar1 = expf(-(fVar18 * fVar6 * fVar6));
  fVar12 = param_2 * 4.0;
  fVar3 = expf(-(fVar18 * fVar12 * fVar12));
  fVar3 = fVar1 + fVar3;
  fVar4 = 0.0;
  if (0.0 < fVar3) {
    fVar4 = fVar1 / fVar3;
  }
  fVar3 = fVar3 * 0.5;
  fVar7 = param_2 * 5.0;
  fVar12 = fVar12 + (fVar6 - fVar12) * fVar4;
  fVar1 = expf(-(fVar18 * fVar7 * fVar7));
  fVar13 = param_2 * 6.0;
  fVar4 = expf(-(fVar18 * fVar13 * fVar13));
  fVar4 = fVar1 + fVar4;
  fVar6 = 0.0;
  if (0.0 < fVar4) {
    fVar6 = fVar1 / fVar4;
  }
  fVar4 = fVar4 * 0.5;
  fVar8 = param_2 * 7.0;
  fVar13 = fVar13 + (fVar7 - fVar13) * fVar6;
  fVar1 = expf(-(fVar18 * fVar8 * fVar8));
  fVar14 = param_2 * 8.0;
  fVar6 = expf(-(fVar18 * fVar14 * fVar14));
  fVar6 = fVar1 + fVar6;
  fVar7 = 0.0;
  if (0.0 < fVar6) {
    fVar7 = fVar1 / fVar6;
  }
  fVar6 = fVar6 * 0.5;
  fVar9 = param_2 * 9.0;
  fVar14 = fVar14 + (fVar8 - fVar14) * fVar7;
  fVar1 = expf(-(fVar18 * fVar9 * fVar9));
  fVar15 = param_2 * 10.0;
  fVar7 = expf(-(fVar18 * fVar15 * fVar15));
  fVar7 = fVar1 + fVar7;
  fVar8 = 0.0;
  if (0.0 < fVar7) {
    fVar8 = fVar1 / fVar7;
  }
  fVar7 = fVar7 * 0.5;
  fVar10 = param_2 * 11.0;
  fVar15 = fVar15 + (fVar9 - fVar15) * fVar8;
  fVar1 = expf(-(fVar18 * fVar10 * fVar10));
  fVar16 = param_2 * 12.0;
  fVar8 = expf(-(fVar18 * fVar16 * fVar16));
  fVar8 = fVar1 + fVar8;
  fVar9 = 0.0;
  if (0.0 < fVar8) {
    fVar9 = fVar1 / fVar8;
  }
  fVar8 = fVar8 * 0.5;
  fVar11 = param_2 * 13.0;
  fVar16 = fVar16 + (fVar10 - fVar16) * fVar9;
  fVar1 = expf(-(fVar18 * fVar11 * fVar11));
  fVar17 = param_2 * 14.0;
  fVar9 = expf(-(fVar18 * fVar17 * fVar17));
  fVar9 = fVar1 + fVar9;
  fVar10 = 0.0;
  if (0.0 < fVar9) {
    fVar10 = fVar1 / fVar9;
  }
  fVar9 = fVar9 * 0.5;
  fVar17 = fVar17 + (fVar11 - fVar17) * fVar10;
  fVar10 = 1.0 / (float)param_3;
  fVar1 = expf(-(param_2 * 0.0 * param_2 * 0.0 * fVar18));
  if ((param_6 & 1) == 0 || fVar19 < 1.0) {
    fVar19 = 1.0 / (fVar1 * 0.5 + fVar2 + fVar2 + fVar3 + fVar3 + fVar4 + fVar4 + fVar6 + fVar6 +
                    fVar7 + fVar7 + fVar8 + fVar8 + fVar9 + fVar9);
  }
  else {
    fVar19 = 1.0 / (param_1 * DAT_01d4bbc8);
    fVar19 = fVar19 + fVar19;
  }
  *param_5 = fVar19 * fVar1 * 0.5;
  *param_4 = 0;
  param_5[1] = fVar19 * fVar2;
  param_4[1] = fVar10 * fVar5;
  param_5[2] = fVar19 * fVar2;
  param_4[2] = -(fVar10 * fVar5);
  param_5[3] = fVar19 * fVar3;
  param_4[3] = fVar10 * fVar12;
  param_5[4] = fVar19 * fVar3;
  param_4[4] = -(fVar10 * fVar12);
  param_5[5] = fVar19 * fVar4;
  param_4[5] = fVar10 * fVar13;
  param_5[6] = fVar19 * fVar4;
  param_4[6] = -(fVar10 * fVar13);
  param_5[7] = fVar19 * fVar6;
  param_4[7] = fVar10 * fVar14;
  param_5[8] = fVar19 * fVar6;
  param_4[8] = -(fVar10 * fVar14);
  param_5[9] = fVar19 * fVar7;
  param_4[9] = fVar10 * fVar15;
  param_5[10] = fVar19 * fVar7;
  param_4[10] = -(fVar10 * fVar15);
  param_5[0xb] = fVar19 * fVar8;
  param_4[0xb] = fVar10 * fVar16;
  param_5[0xc] = fVar19 * fVar8;
  param_4[0xc] = -(fVar10 * fVar16);
  param_5[0xd] = fVar19 * fVar9;
  param_4[0xd] = fVar10 * fVar17;
  param_5[0xe] = fVar19 * fVar9;
  param_4[0xe] = -(fVar10 * fVar17);
  return;
}


