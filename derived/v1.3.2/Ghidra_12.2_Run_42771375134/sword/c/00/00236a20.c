/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00236a20; name: FUN_00236a20
 */


void FUN_00236a20(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  bool bVar1;
  bool bVar2;
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
  
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar6 = param_4[1] - fVar10;
  fVar5 = *param_5 - fVar9;
  fVar13 = *param_2;
  fVar14 = param_2[1];
  fVar8 = *param_4 - fVar9;
  fVar16 = param_3[2];
  fVar3 = param_5[1] - fVar10;
  fVar7 = param_4[2] - fVar16;
  fVar15 = param_2[2];
  fVar4 = param_5[2] - fVar16;
  fVar11 = fVar8 * (fVar13 - fVar9) + fVar6 * (fVar14 - fVar10) + fVar7 * (fVar15 - fVar16);
  fVar9 = fVar5 * (fVar13 - fVar9) + fVar3 * (fVar14 - fVar10) + fVar4 * (fVar15 - fVar16);
  if ((fVar11 <= 0.0) && (fVar9 <= 0.0)) {
    *param_6 = 0.0;
    *param_7 = 0.0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return;
  }
  fVar10 = fVar13 - *param_4;
  fVar17 = fVar14 - param_4[1];
  fVar12 = fVar15 - param_4[2];
  fVar16 = fVar8 * fVar10 + fVar6 * fVar17 + fVar7 * fVar12;
  fVar10 = fVar5 * fVar10 + fVar3 * fVar17 + fVar4 * fVar12;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar16) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar10) && !NAN(fVar16)) {
      bVar1 = fVar10 == fVar16;
      bVar2 = fVar16 <= fVar10;
    }
  }
  if (!bVar2 || bVar1) {
    *param_6 = 1.0;
    *param_7 = 0.0;
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    return;
  }
  fVar12 = fVar11 * fVar10 - fVar16 * fVar9;
  if (((fVar16 <= 0.0) && (0.0 <= fVar11)) && (fVar12 <= 0.0)) {
    fVar11 = fVar11 / (fVar11 - fVar16);
    *param_6 = fVar11;
    *param_7 = 0.0;
    fVar4 = param_3[1];
    fVar3 = param_3[2];
    *param_1 = fVar8 * fVar11 + *param_3;
    param_1[1] = fVar6 * fVar11 + fVar4;
    param_1[2] = fVar7 * fVar11 + fVar3;
    return;
  }
  fVar13 = fVar13 - *param_5;
  fVar14 = fVar14 - param_5[1];
  fVar15 = fVar15 - param_5[2];
  fVar17 = fVar5 * fVar13 + fVar3 * fVar14 + fVar4 * fVar15;
  fVar14 = fVar8 * fVar13 + fVar6 * fVar14 + fVar7 * fVar15;
  bVar1 = false;
  bVar2 = true;
  if (0.0 <= fVar17) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar14) && !NAN(fVar17)) {
      bVar1 = fVar14 == fVar17;
      bVar2 = fVar17 <= fVar14;
    }
  }
  if (!bVar2 || bVar1) {
    *param_6 = 0.0;
    *param_7 = 1.0;
    *param_1 = *param_5;
    param_1[1] = param_5[1];
    param_1[2] = param_5[2];
    return;
  }
  fVar11 = fVar14 * fVar9 - fVar11 * fVar17;
  if (((fVar17 <= 0.0) && (0.0 <= fVar9)) && (fVar11 <= 0.0)) {
    fVar9 = fVar9 / (fVar9 - fVar17);
    *param_6 = 0.0;
    *param_7 = fVar9;
    fVar6 = param_3[1];
    fVar11 = param_3[2];
    *param_1 = fVar5 * fVar9 + *param_3;
    param_1[1] = fVar3 * fVar9 + fVar6;
    param_1[2] = fVar4 * fVar9 + fVar11;
    return;
  }
  fVar9 = fVar16 * fVar17 - fVar14 * fVar10;
  if (((fVar9 <= 0.0) && (fVar10 = fVar10 - fVar16, 0.0 <= fVar10)) && (0.0 <= fVar14 - fVar17)) {
    fVar10 = fVar10 / (fVar10 + (fVar14 - fVar17));
    *param_6 = 1.0 - fVar10;
    *param_7 = fVar10;
    fVar3 = param_5[1];
    fVar4 = param_5[2];
    fVar11 = param_4[1];
    fVar5 = param_4[2];
    *param_1 = *param_4 + fVar10 * (*param_5 - *param_4);
    param_1[1] = fVar11 + fVar10 * (fVar3 - fVar11);
    param_1[2] = fVar5 + fVar10 * (fVar4 - fVar5);
    return;
  }
  fVar9 = 1.0 / (fVar12 + fVar9 + fVar11);
  fVar11 = fVar11 * fVar9;
  fVar12 = fVar12 * fVar9;
  *param_6 = fVar11;
  *param_7 = fVar12;
  fVar10 = param_3[1];
  fVar9 = param_3[2];
  *param_1 = fVar5 * fVar12 + fVar8 * fVar11 + *param_3;
  param_1[1] = fVar3 * fVar12 + fVar6 * fVar11 + fVar10;
  param_1[2] = fVar4 * fVar12 + fVar7 * fVar11 + fVar9;
  return;
}


