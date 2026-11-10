/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00239e60; name: FUN_00239e60
 */


undefined4
FUN_00239e60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *param_5 = -3.4028235e+38;
  *param_6 = 3.4028235e+38;
  fVar7 = DAT_01d4c6b0;
  fVar5 = *param_4;
  fVar6 = DAT_01d4c18c;
  if ((fVar5 <= DAT_01d4c6b0) || (DAT_01d4c708 <= fVar5)) {
    fVar9 = (1.0 / fVar5) * (*param_1 - *param_3);
    fVar10 = (1.0 / fVar5) * (*param_2 - *param_3);
    fVar5 = fVar9;
    fVar8 = fVar10;
    if (fVar9 <= fVar10) {
      fVar5 = fVar10;
      fVar8 = fVar9;
    }
    if (fVar8 <= *param_5) {
      uVar4 = 0xffffffff;
      fVar8 = *param_5;
    }
    else {
      *param_5 = fVar8;
      fVar6 = *param_6;
      uVar4 = 3;
      if (fVar9 <= fVar10) {
        uVar4 = 0;
      }
    }
    if (fVar5 < fVar6) {
      *param_6 = fVar5;
      fVar8 = *param_5;
      fVar6 = fVar5;
    }
    if (fVar6 < DAT_01d4c708) {
      return 0xffffffff;
    }
    if (fVar6 < fVar8) {
      return 0xffffffff;
    }
    fVar8 = param_4[1];
    fVar5 = fVar6;
    if (fVar8 <= fVar7) goto LAB_00239fdc;
LAB_00239f70:
    fVar5 = fVar6;
    if (DAT_01d4c708 <= fVar8) goto LAB_00239fdc;
    if (param_3[1] < param_1[1]) {
      return 0xffffffff;
    }
    if (param_2[1] < param_3[1]) {
      return 0xffffffff;
    }
  }
  else {
    if (*param_3 < *param_1) {
      return 0xffffffff;
    }
    if (*param_2 < *param_3) {
      return 0xffffffff;
    }
    uVar4 = 0xffffffff;
    fVar8 = param_4[1];
    fVar5 = DAT_01d4c18c;
    if (DAT_01d4c6b0 < fVar8) goto LAB_00239f70;
LAB_00239fdc:
    fVar9 = (1.0 / fVar8) * (param_1[1] - param_3[1]);
    fVar10 = (1.0 / fVar8) * (param_2[1] - param_3[1]);
    fVar6 = fVar9;
    fVar8 = fVar10;
    if (fVar9 <= fVar10) {
      fVar6 = fVar10;
      fVar8 = fVar9;
    }
    if (*param_5 < fVar8) {
      *param_5 = fVar8;
      uVar4 = 4;
      if (fVar9 <= fVar10) {
        uVar4 = 1;
      }
      fVar5 = *param_6;
      if (*param_6 <= fVar6) goto LAB_0023a020;
LAB_0023a05c:
      *param_6 = fVar6;
      fVar8 = *param_5;
      if (fVar6 < DAT_01d4c708) {
        return 0xffffffff;
      }
    }
    else {
      fVar8 = *param_5;
      if (fVar6 < fVar5) goto LAB_0023a05c;
LAB_0023a020:
      fVar6 = fVar5;
      if (fVar6 < DAT_01d4c708) {
        return 0xffffffff;
      }
    }
    if (fVar6 < fVar8) {
      return 0xffffffff;
    }
  }
  fVar5 = param_4[2];
  if ((fVar7 < fVar5) && (fVar5 < DAT_01d4c708)) {
    if (param_3[2] < param_1[2]) {
      return 0xffffffff;
    }
    if (param_2[2] < param_3[2]) {
      return 0xffffffff;
    }
    fVar7 = *param_5;
    goto LAB_0023a0d8;
  }
  fVar8 = (1.0 / fVar5) * (param_1[2] - param_3[2]);
  fVar9 = (1.0 / fVar5) * (param_2[2] - param_3[2]);
  fVar5 = fVar8;
  fVar7 = fVar9;
  if (fVar8 <= fVar9) {
    fVar5 = fVar9;
    fVar7 = fVar8;
  }
  if (*param_5 < fVar7) {
    *param_5 = fVar7;
    fVar6 = *param_6;
    uVar4 = 5;
    if (fVar8 <= fVar9) {
      uVar4 = 2;
    }
    if (fVar6 <= fVar5) goto LAB_0023a0c0;
LAB_0023a114:
    *param_6 = fVar5;
    fVar7 = *param_5;
    fVar6 = fVar5;
    if (fVar5 < DAT_01d4c708) {
      return 0xffffffff;
    }
  }
  else {
    fVar7 = *param_5;
    if (fVar5 < fVar6) goto LAB_0023a114;
LAB_0023a0c0:
    if (fVar6 < DAT_01d4c708) {
      return 0xffffffff;
    }
  }
  if (fVar6 < fVar7) {
    return 0xffffffff;
  }
LAB_0023a0d8:
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (DAT_01d4c708 <= fVar6) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar7) && !NAN(fVar6)) {
      bVar1 = fVar7 < fVar6;
      bVar2 = fVar7 == fVar6;
      bVar3 = false;
    }
  }
  if (!bVar2 && bVar1 == bVar3) {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}


