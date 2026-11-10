/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004015c0; name: FUN_004015c0
 */


void FUN_004015c0(float *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar13 = *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2];
  fVar14 = param_2[3] * param_2[3] + param_2[4] * param_2[4] + param_2[5] * param_2[5];
  fVar15 = param_2[6];
  fVar16 = param_2[7];
  fVar17 = param_2[8];
  *param_1 = fVar13;
  param_1[1] = fVar14;
  fVar15 = fVar15 * fVar15 + fVar16 * fVar16 + fVar17 * fVar17;
  param_1[2] = fVar15;
  iVar4 = 2;
  if (fVar14 <= fVar13) {
    iVar4 = 3;
  }
  uVar3 = 2;
  if (fVar15 <= param_1[fVar14 <= fVar13]) {
    uVar3 = (uint)(fVar14 <= fVar13);
  }
  uVar2 = (uint)(fVar13 < fVar14);
  uVar1 = uVar3;
  if (param_1[uVar3] <= param_1[fVar13 < fVar14]) {
    uVar1 = uVar2;
  }
  uVar6 = (ulong)uVar1;
  fVar15 = param_1[uVar6];
  if (param_1[uVar3] <= param_1[fVar13 < fVar14]) {
    uVar2 = uVar3;
  }
  uVar8 = (ulong)uVar2;
  fVar13 = sqrtf(fVar15);
  fVar13 = 1.0 / fVar13;
  fVar15 = fVar15 * fVar13;
  pfVar12 = param_2 + uVar6 * 3;
  pfVar10 = param_2 + uVar8 * 3;
  param_1[uVar6] = fVar15;
  fVar16 = fVar13 * pfVar12[1];
  fVar14 = fVar13 * *pfVar12;
  fVar13 = fVar13 * pfVar12[2];
  *pfVar12 = fVar14;
  pfVar12[1] = fVar16;
  pfVar12[2] = fVar13;
  pfVar9 = pfVar10 + 2;
  pfVar11 = pfVar10 + 1;
  param_2 = param_2 + (ulong)(iVar4 - uVar3) * 3;
  fVar17 = fVar14 * *pfVar10 + fVar16 * *pfVar11 + fVar13 * *pfVar9;
  pfVar5 = param_2 + 2;
  pfVar7 = param_2 + 1;
  fVar16 = fVar14 * *param_2 + fVar16 * *pfVar7 + fVar13 * *pfVar5;
  fVar13 = fabsf(fVar17);
  fVar14 = fabsf(fVar16);
  param_1[uVar6] = fVar15 + fVar13 + fVar14;
  fVar13 = pfVar12[1];
  fVar14 = pfVar12[2];
  *pfVar10 = *pfVar10 - fVar17 * *pfVar12;
  *pfVar11 = *pfVar11 - fVar17 * fVar13;
  *pfVar9 = *pfVar9 - fVar17 * fVar14;
  fVar13 = pfVar12[1];
  fVar14 = pfVar12[2];
  *param_2 = *param_2 - fVar16 * *pfVar12;
  *pfVar7 = *pfVar7 - fVar16 * fVar13;
  *pfVar5 = *pfVar5 - fVar16 * fVar14;
  fVar13 = sqrtf(*pfVar10 * *pfVar10 + *pfVar11 * *pfVar11 + *pfVar9 * *pfVar9);
  if (fVar13 <= 0.0) {
    fVar14 = *pfVar10;
    fVar15 = *pfVar11;
    fVar16 = *pfVar9;
  }
  else {
    fVar16 = 1.0 / fVar13;
    fVar14 = fVar16 * *pfVar10;
    *pfVar10 = fVar14;
    fVar15 = fVar16 * *pfVar11;
    *pfVar11 = fVar15;
    fVar16 = fVar16 * *pfVar9;
    *pfVar9 = fVar16;
  }
  param_1[uVar8] = fVar13;
  fVar16 = fVar14 * *param_2 + fVar15 * *pfVar7 + fVar16 * *pfVar5;
  fVar14 = fabsf(fVar16);
  param_1[uVar8] = fVar13 + fVar14;
  fVar13 = *param_2 - fVar16 * *pfVar10;
  fVar14 = *pfVar11;
  fVar15 = *pfVar9;
  *param_2 = fVar13;
  fVar14 = *pfVar7 - fVar16 * fVar14;
  *pfVar7 = fVar14;
  fVar15 = *pfVar5 - fVar16 * fVar15;
  *pfVar5 = fVar15;
  fVar13 = sqrtf(fVar13 * fVar13 + fVar14 * fVar14 + fVar15 * fVar15);
  if (0.0 < fVar13) {
    fVar14 = 1.0 / fVar13;
    *param_2 = fVar14 * *param_2;
    *pfVar7 = fVar14 * *pfVar7;
    *pfVar5 = fVar14 * *pfVar5;
  }
  param_1[iVar4 - uVar3] = fVar13;
  return;
}


