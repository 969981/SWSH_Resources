/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029a800; name: FUN_0029a800
 */


void FUN_0029a800(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
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
  float local_6c [3];
  
  fVar4 = fabsf(param_6[1]);
  if (fVar4 <= DAT_01d4c2dc) {
    fVar4 = *param_6;
  }
  else {
    fVar4 = param_6[1];
  }
  sqrtf(param_6[2] * param_6[2] + 0.0 + fVar4 * fVar4);
  fVar5 = fabsf(*param_5 * *param_6 + param_5[1] * param_6[1] + param_5[2] * param_6[2]);
  local_6c[0] = fVar5;
  fVar6 = fabsf(param_5[3] * *param_6 + param_5[4] * param_6[1] + param_5[5] * param_6[2]);
  local_6c[1] = fVar6;
  local_6c[2] = fabsf(param_5[6] * *param_6 + param_5[7] * param_6[1] + param_5[8] * param_6[2]);
  fVar4 = fVar6;
  if (fVar6 <= fVar5) {
    fVar4 = fVar5;
  }
  uVar3 = 2;
  if (fVar4 < local_6c[2]) {
    uVar3 = 1;
  }
  uVar1 = (fVar5 < fVar6 || fVar4 < local_6c[2]) ^ 1;
  if (local_6c[uVar1] <= local_6c[uVar3]) {
    uVar3 = uVar1;
  }
  pfVar2 = param_5 + (ulong)uVar3 * 3;
  fVar4 = *pfVar2 * *param_6 + pfVar2[1] * param_6[1] + pfVar2[2] * param_6[2];
  fVar6 = *pfVar2 - *param_6 * fVar4;
  fVar16 = pfVar2[1] - param_6[1] * fVar4;
  fVar5 = pfVar2[2] - param_6[2] * fVar4;
  fVar4 = sqrtf(fVar5 * fVar5 + fVar6 * fVar6 + fVar16 * fVar16);
  if (0.0 < fVar4) {
    fVar4 = 1.0 / fVar4;
    fVar6 = fVar4 * fVar6;
    fVar16 = fVar4 * fVar16;
    fVar5 = fVar4 * fVar5;
  }
  fVar11 = param_6[2];
  fVar4 = *param_6;
  fVar7 = param_6[1];
  *param_2 = fVar4;
  param_2[1] = fVar7;
  fVar10 = fVar5 * fVar7 - fVar16 * fVar11;
  fVar12 = fVar6 * fVar11 - fVar5 * fVar4;
  fVar13 = fVar16 * fVar4 - fVar6 * fVar7;
  param_2[2] = fVar11;
  param_2[3] = fVar6;
  param_2[4] = fVar16;
  param_2[5] = fVar5;
  param_2[6] = fVar10;
  param_2[7] = fVar12;
  param_2[8] = fVar13;
  fVar14 = *param_6;
  fVar15 = param_6[1];
  fVar17 = param_6[2];
  fVar4 = fabsf(*param_5 * fVar4 + param_5[1] * fVar7 + param_5[2] * fVar11);
  fVar8 = *param_3;
  fVar7 = fabsf(param_5[3] * *param_2 + param_5[4] * param_2[1] + param_5[5] * param_2[2]);
  fVar9 = param_3[1];
  fVar11 = fabsf(param_5[6] * *param_2 + param_5[7] * param_2[1] + param_5[8] * param_2[2]);
  param_2[0xc] = param_1 * 0.5 + fVar4 * fVar8 + fVar7 * fVar9 + fVar11 * param_3[2];
  fVar4 = fabsf(*param_5 * param_2[3] + param_5[1] * param_2[4] + param_5[2] * param_2[5]);
  fVar8 = *param_3;
  fVar7 = fabsf(param_5[3] * param_2[3] + param_5[4] * param_2[4] + param_5[5] * param_2[5]);
  fVar9 = param_3[1];
  fVar11 = fabsf(param_5[6] * param_2[3] + param_5[7] * param_2[4] + param_5[8] * param_2[5]);
  param_2[0xd] = (fVar6 * fVar14 + fVar16 * fVar15 + fVar5 * fVar17) * param_1 * 0.5 + fVar4 * fVar8
                 + fVar7 * fVar9 + fVar11 * param_3[2];
  fVar4 = fabsf(*param_5 * param_2[6] + param_5[1] * param_2[7] + param_5[2] * param_2[8]);
  fVar16 = *param_3;
  fVar5 = fabsf(param_5[3] * param_2[6] + param_5[4] * param_2[7] + param_5[5] * param_2[8]);
  fVar7 = param_3[1];
  fVar6 = fabsf(param_5[6] * param_2[6] + param_5[7] * param_2[7] + param_5[8] * param_2[8]);
  param_2[0xe] = (fVar10 * fVar14 + fVar12 * fVar15 + fVar13 * fVar17) * param_1 * 0.5 +
                 fVar4 * fVar16 + fVar5 * fVar7 + fVar6 * param_3[2];
  fVar4 = param_6[1];
  fVar5 = param_6[2];
  fVar16 = param_4[1];
  fVar6 = param_4[2];
  param_2[9] = *param_6 * param_1 * 0.5 + *param_4;
  param_2[10] = fVar4 * param_1 * 0.5 + fVar16;
  param_2[0xb] = fVar5 * param_1 * 0.5 + fVar6;
  return;
}


