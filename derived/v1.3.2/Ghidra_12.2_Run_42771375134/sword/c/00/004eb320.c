/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb320; name: FUN_004eb320
 */


void FUN_004eb320(float *param_1,float *param_2,long param_3,float *param_4,long param_5)

{
  float *pfVar1;
  long lVar2;
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
  float local_10;
  float local_c;
  float local_8;
  
  if (param_2[0xc] == 0.0) {
    lVar2 = -1;
  }
  else {
    lVar2 = *(long *)(**(long **)(param_2 + 10) + 0x38);
  }
  fVar4 = param_2[0x12];
  fVar7 = *param_4 - fVar4;
  fVar5 = param_2[0x13];
  fVar6 = param_2[0x14];
  fVar9 = param_4[2] - fVar6;
  fVar8 = param_4[1] - fVar5;
  fVar11 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar3 = 1.0;
  if (lVar2 != param_3) {
    fVar3 = -1.0;
  }
  if (fVar11 == 0.0) {
    local_10 = 0.0;
    local_c = 0.0;
    local_8 = 0.0;
  }
  else {
    fVar11 = 1.0 / fVar11;
    local_10 = fVar7 * fVar11 * DAT_01d4c4d4;
    local_c = fVar8 * fVar11 * DAT_01d4c4d4;
    local_8 = fVar9 * fVar11 * DAT_01d4c4d4;
  }
  local_10 = local_10 + *param_4;
  local_c = local_c + param_4[1];
  local_8 = local_8 + param_4[2];
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar11 = param_2[0x17];
  if (0.0 < fVar11) {
    fVar12 = param_2[0x19];
    fVar19 = param_2[1];
    fVar14 = param_2[0x1a];
    fVar15 = param_2[2];
    fVar17 = param_2[4];
    fVar18 = param_2[5];
    fVar16 = param_2[3] * fVar7 + fVar8 * fVar17 + fVar9 * fVar18;
    fVar13 = param_2[0x18] * fVar7 + fVar8 * fVar12 + fVar9 * fVar14;
    fVar8 = *param_2 * fVar7 + fVar8 * fVar19 + fVar9 * fVar15;
    fVar7 = -param_2[0x15];
    fVar9 = (float)NEON_fminnm(fVar13,param_2[0x15]);
    if (fVar7 <= fVar13) {
      fVar7 = fVar9;
    }
    fVar9 = -param_2[0x16];
    fVar10 = (float)NEON_fminnm(fVar16,param_2[0x16]);
    if (fVar9 <= fVar16) {
      fVar9 = fVar10;
    }
    fVar3 = fVar11 * fVar3;
    fVar8 = (float)NEON_fminnm(SQRT(fVar8 * fVar8 + (fVar13 - fVar7) * (fVar13 - fVar7) +
                                    (fVar16 - fVar9) * (fVar16 - fVar9)) / fVar11,0x3f800000);
    if (param_3 != param_5) {
      fVar8 = -fVar8;
    }
    fVar11 = fVar8 * 0.5 + 0.5;
    fVar8 = 1.0 - fVar11;
    *param_1 = fVar11 * local_10 +
               (fVar4 + fVar3 * *param_2 + param_2[0x18] * fVar7 + param_2[3] * fVar9) * fVar8;
    param_1[1] = fVar11 * local_c +
                 (fVar5 + fVar3 * fVar19 + fVar12 * fVar7 + fVar17 * fVar9) * fVar8;
    param_1[2] = fVar11 * local_8 +
                 (fVar6 + fVar3 * fVar15 + fVar14 * fVar7 + fVar18 * fVar9) * fVar8;
    return;
  }
  pfVar1 = &local_10;
  if (param_3 != param_5) {
    pfVar1 = param_2 + 0x12;
  }
  *param_1 = *pfVar1;
  fVar3 = pfVar1[2];
  param_1[1] = pfVar1[1];
  param_1[2] = fVar3;
  return;
}


