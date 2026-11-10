/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024cb60; name: FUN_0024cb60
 */


uint FUN_0024cb60(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  bool bVar1;
  bool bVar2;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar18 = param_5[1] - param_4[1];
  fVar16 = *param_5 - *param_4;
  fVar20 = param_5[2] - param_4[2];
  fVar4 = sqrtf(fVar16 * fVar16 + fVar18 * fVar18 + fVar20 * fVar20);
  fVar5 = 1.0 / fVar4;
  if (fVar4 != 0.0) {
    fVar20 = fVar20 * fVar5;
    fVar18 = fVar18 * fVar5;
    fVar16 = fVar16 * fVar5;
  }
  fVar5 = (float)param_1;
  if (fVar4 <= DAT_01d4c1cc) {
    fVar18 = param_2[1] - param_4[1];
    fVar20 = *param_2 - *param_4;
    fVar16 = param_2[2] - param_4[2];
    fVar20 = fVar20 * fVar20 + fVar18 * fVar18 + fVar16 * fVar16;
    fVar16 = param_2[1] - param_5[1];
    fVar18 = *param_2 - *param_5;
    fVar4 = param_2[2] - param_5[2];
    fVar18 = fVar18 * fVar18 + fVar16 * fVar16 + fVar4 * fVar4;
    if (fVar20 <= fVar18) {
      fVar20 = fVar18;
    }
    uVar3 = FUN_0024a5c0(fVar20 + fVar5 + fVar20 + fVar5,param_1,param_2,param_3,param_4,param_6,0);
    return uVar3 & 1;
  }
  fVar17 = 0.0;
  if (fVar4 <= 0.0) {
    fVar7 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar6 = fabsf(fVar16);
    fVar7 = fabsf(fVar18);
    if (fVar7 <= fVar6) {
      fVar6 = sqrtf(fVar16 * fVar16 + fVar20 * fVar20);
      fVar7 = -(fVar20 * (1.0 / fVar6));
      fVar6 = fVar16 * (1.0 / fVar6);
    }
    else {
      fVar6 = sqrtf(fVar18 * fVar18 + fVar20 * fVar20);
      fVar7 = 0.0;
      fVar17 = fVar20 * (1.0 / fVar6);
      fVar6 = -(fVar18 * (1.0 / fVar6));
    }
  }
  fVar19 = fVar18 * fVar6 - fVar20 * fVar17;
  fVar22 = fVar20 * fVar7 - fVar16 * fVar6;
  fVar21 = fVar16 * fVar17 - fVar18 * fVar7;
  fVar8 = sqrtf(fVar21 * fVar21 + fVar19 * fVar19 + fVar22 * fVar22);
  if (0.0 < fVar8) {
    fVar8 = 1.0 / fVar8;
    fVar19 = fVar8 * fVar19;
    fVar22 = fVar8 * fVar22;
    fVar21 = fVar21 * fVar8;
  }
  fVar8 = *param_3;
  fVar10 = param_3[1];
  fVar13 = param_3[2];
  fVar15 = fVar7 * fVar8 + fVar17 * fVar10 + fVar6 * fVar13;
  fVar14 = fVar19 * fVar8 + fVar22 * fVar10 + fVar21 * fVar13;
  fVar10 = fVar16 * fVar8 + fVar18 * fVar10 + fVar20 * fVar13;
  fVar8 = sqrtf(fVar10 * fVar10 + fVar15 * fVar15 + fVar14 * fVar14);
  if (fVar8 == 0.0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = 1.0 / fVar8;
  }
  fVar10 = fVar10 * fVar13;
  fVar11 = param_2[1] - param_4[1];
  fVar9 = *param_2 - *param_4;
  fVar12 = param_2[2] - param_4[2];
  fVar7 = fVar7 * fVar9 + fVar17 * fVar11 + fVar6 * fVar12;
  fVar6 = fVar19 * fVar9 + fVar22 * fVar11 + fVar21 * fVar12;
  fVar19 = fVar16 * fVar9 + fVar18 * fVar11 + fVar20 * fVar12;
  fVar17 = fabsf(fVar10);
  if ((fVar8 < DAT_01d4c708) || (DAT_01d4be60 <= fVar17)) {
    fVar18 = fVar16 * *param_3 + fVar18 * param_3[1] + fVar20 * param_3[2];
    fVar20 = (fVar5 * fVar5 - fVar7 * fVar7) - fVar6 * fVar6;
    if ((fVar20 < 0.0) || (0.0 <= fVar18)) {
      if (fVar20 < 0.0) {
        return 0;
      }
      if (fVar18 <= 0.0) {
        return 0;
      }
      fVar20 = sqrtf(fVar20);
      fVar18 = -(fVar13 * (fVar19 + fVar20));
      fVar13 = fVar13 * ((fVar4 - fVar19) + fVar20);
    }
    else {
      fVar20 = sqrtf(fVar20);
      fVar18 = fVar13 * (fVar19 + fVar20);
      fVar13 = -(fVar13 * ((fVar4 - fVar19) + fVar20));
    }
    *param_6 = fVar18;
    param_6[1] = fVar13;
LAB_0024cffc:
    uVar3 = 2;
  }
  else {
    fVar15 = fVar15 * fVar13;
    fVar14 = fVar14 * fVar13;
    fVar18 = fVar15 * fVar7 + fVar14 * fVar6;
    fVar17 = fVar15 * fVar15 + fVar14 * fVar14;
    fVar16 = (fVar7 * fVar7 + fVar6 * fVar6) - fVar5 * fVar5;
    fVar20 = fVar18 * fVar18 - fVar17 * fVar16;
    if (fVar20 < 0.0) {
      return 0;
    }
    if (fVar20 <= 0.0) {
      fVar20 = fVar19 + fVar10 * (-fVar18 / fVar17);
      bVar1 = false;
      bVar2 = true;
      if (0.0 <= fVar20) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar20) && !NAN(fVar4)) {
          bVar1 = fVar20 == fVar4;
          bVar2 = fVar4 <= fVar20;
        }
      }
      if (bVar2 && !bVar1) {
        uVar3 = 0;
        goto LAB_0024d098;
      }
      *param_6 = fVar13 * (-fVar18 / fVar17);
    }
    else {
      fVar5 = sqrtf(fVar20);
      fVar20 = DAT_01d4bb34;
      fVar7 = (1.0 / fVar17) * (-fVar18 - fVar5);
      fVar8 = fVar19 + fVar10 * fVar7;
      fVar6 = fVar4 + DAT_01d4c6ac;
      bVar1 = false;
      bVar2 = true;
      if (DAT_01d4bb34 <= fVar8) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar8) && !NAN(fVar6)) {
          bVar1 = fVar8 == fVar6;
          bVar2 = fVar6 <= fVar8;
        }
      }
      if (!bVar2 || bVar1) {
        *param_6 = fVar13 * fVar7;
      }
      uVar3 = (uint)(!bVar2 || bVar1);
      fVar5 = (1.0 / fVar17) * (fVar5 - fVar18);
      fVar17 = fVar19 + fVar10 * fVar5;
      bVar1 = false;
      bVar2 = true;
      if (fVar20 <= fVar17) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar17) && !NAN(fVar6)) {
          bVar1 = fVar17 == fVar6;
          bVar2 = fVar6 <= fVar17;
        }
      }
      if (!bVar2 || bVar1) {
        param_6[uVar3] = fVar13 * fVar5;
        if (uVar3 != 0) goto LAB_0024cffc;
        uVar3 = 1;
      }
LAB_0024d098:
      fVar18 = fVar10 * fVar19 + fVar18;
      fVar16 = fVar19 * fVar19 + fVar16;
      fVar20 = fVar18 * fVar18 - fVar16;
      if (fVar20 <= 0.0) {
        if ((fVar20 == 0.0) && (fVar19 - fVar10 * fVar18 <= 0.0)) {
          param_6[uVar3] = fVar13 * -fVar18;
          goto joined_r0x0024d100;
        }
      }
      else {
        fVar20 = sqrtf(fVar20);
        if (fVar19 + fVar10 * (-fVar18 - fVar20) <= 0.0) {
          param_6[uVar3] = fVar13 * (-fVar18 - fVar20);
          if (uVar3 != 0) goto LAB_0024cffc;
          uVar3 = 1;
        }
        if (fVar19 + fVar10 * (fVar20 - fVar18) <= 0.0) {
          param_6[uVar3] = fVar13 * (fVar20 - fVar18);
joined_r0x0024d100:
          if (uVar3 != 0) goto LAB_0024cffc;
          uVar3 = 1;
        }
      }
      fVar18 = fVar18 - fVar4 * fVar10;
      fVar20 = fVar18 * fVar18 - (fVar4 * (fVar4 - (fVar19 + fVar19)) + fVar16);
      if (fVar20 <= 0.0) {
        if (fVar20 != 0.0) {
          return uVar3;
        }
        if (fVar19 - fVar10 * fVar18 < fVar4) {
          return uVar3;
        }
        param_6[uVar3] = fVar13 * -fVar18;
      }
      else {
        fVar20 = sqrtf(fVar20);
        if (fVar4 <= fVar19 + fVar10 * (-fVar18 - fVar20)) {
          param_6[uVar3] = fVar13 * (-fVar18 - fVar20);
          if (uVar3 != 0) goto LAB_0024cffc;
          uVar3 = 1;
        }
        if (fVar19 + fVar10 * (fVar20 - fVar18) < fVar4) {
          return uVar3;
        }
        param_6[uVar3] = fVar13 * (fVar20 - fVar18);
      }
      if (uVar3 != 0) goto LAB_0024cffc;
    }
    uVar3 = 1;
  }
  return uVar3;
}


