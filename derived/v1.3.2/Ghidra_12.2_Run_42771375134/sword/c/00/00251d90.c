/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00251d90; name: FUN_00251d90
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_00251d90(float *param_1,float *param_2,float *param_3,uint param_4,long *param_5)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  short sVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_188 [4];
  float local_178;
  float fStack_174;
  float local_170;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  if ((param_4 & 1) == 0) {
    local_88 = *param_3;
    local_84 = param_3[1];
    local_80 = param_3[2];
    local_7c = param_3[3];
    local_78 = param_3[4];
    local_74 = param_3[5];
  }
  else {
    fVar25 = param_2[2];
    local_188[3] = param_2[3];
    fVar29 = param_2[5] * -2.0;
    local_188[2] = -fVar25;
    fVar30 = param_2[4] * -2.0;
    fVar27 = param_2[6] * -2.0;
    fVar24 = *param_2;
    fVar28 = param_2[1];
    local_188[0] = -fVar24;
    local_188[1] = -fVar28;
    fVar26 = local_188[3] * local_188[3] + -0.5;
    fVar31 = fVar30 * fVar24 + fVar29 * fVar28 + fVar27 * fVar25;
    local_178 = fVar24 * fVar31 +
                (fVar30 * fVar26 - local_188[3] * (fVar27 * fVar28 - fVar29 * fVar25));
    fStack_174 = fVar28 * fVar31 +
                 (fVar29 * fVar26 - local_188[3] * (fVar30 * fVar25 - fVar27 * fVar24));
    local_170 = (fVar27 * fVar26 - local_188[3] * (fVar29 * fVar24 - fVar30 * fVar28)) +
                fVar25 * fVar31;
    FUN_001b0d40(&local_88,local_188,param_3);
  }
  fVar30 = *param_1 * local_88;
  local_84 = param_1[1] * local_84;
  local_7c = *param_1 * local_7c;
  fVar24 = param_1[2] * local_80;
  local_78 = param_1[1] * local_78;
  local_74 = param_1[2] * local_74;
  lVar11 = *(long *)(param_1 + 6);
  if (0.0 <= *(float *)(lVar11 + 0x14)) {
    fVar29 = *(float *)(lVar11 + 0x18);
    local_88 = fVar30;
  }
  else {
    fVar29 = *(float *)(lVar11 + 0x18);
    local_88 = local_7c;
    local_7c = fVar30;
  }
  if (fVar29 < 0.0) {
    local_80 = local_74;
    local_74 = fVar24;
  }
  else {
    local_80 = fVar24;
  }
  lVar11 = *(long *)(param_1 + 4);
  uVar15 = *(int *)(lVar11 + 0x38) - 1;
  if ((float)uVar15 < local_88) {
    return false;
  }
  if ((float)(*(int *)(lVar11 + 0x3c) - 1) < local_80) {
    return false;
  }
  if (local_7c < 0.0) {
    return false;
  }
  if (local_74 < 0.0) {
    return false;
  }
  if (0.0 <= local_88) {
    uVar16 = *(int *)(lVar11 + 0x38) - 2;
    if (local_88 <= (float)uVar16) {
      fVar24 = floorf(local_88);
      uVar16 = (uint)fVar24;
      lVar11 = *(long *)(param_1 + 4);
      uVar15 = *(int *)(lVar11 + 0x38) - 1;
    }
  }
  else {
    uVar16 = 0;
  }
  if (0.0 <= local_7c) {
    if (local_7c <= (float)uVar15) {
      fVar24 = ceilf(local_7c);
      uVar15 = (uint)fVar24;
      lVar11 = *(long *)(param_1 + 4);
    }
    iVar9 = *(int *)(lVar11 + 0x3c);
  }
  else {
    uVar15 = 0;
    iVar9 = *(int *)(lVar11 + 0x3c);
  }
  if (0.0 <= local_80) {
    uVar21 = iVar9 - 2;
    if (local_80 <= (float)uVar21) {
      fVar24 = floorf(local_80);
      uVar21 = (uint)fVar24;
      iVar9 = *(int *)(*(long *)(param_1 + 4) + 0x3c);
    }
  }
  else {
    uVar21 = 0;
  }
  if (0.0 <= local_74) {
    uVar20 = iVar9 - 1;
    if (local_74 <= (float)uVar20) {
      fVar24 = ceilf(local_74);
      uVar20 = (uint)fVar24;
    }
  }
  else {
    uVar20 = 0;
  }
  fVar30 = local_78;
  fVar24 = local_84;
  iVar9 = uVar20 - uVar21;
  if (((uVar15 - uVar16) * iVar9 & 0x7fffffff) == 0) {
    bVar3 = false;
  }
  else {
    if (uVar16 < uVar15) {
      lVar11 = *(long *)(param_1 + 4);
      uVar18 = uVar21 + *(int *)(lVar11 + 0x3c) * uVar16;
      uVar10 = 0;
      iVar17 = 0;
      do {
        if (uVar21 < uVar20) {
          if ((param_4 >> 1 & 1) == 0) {
            fVar29 = (float)(uVar18 << 1);
            uVar19 = (ulong)uVar18;
            iVar22 = iVar9;
            do {
              lVar12 = *(long *)(lVar11 + 0x50);
              uVar23 = (ulong)((int)uVar19 + 1);
              uVar14 = (int)uVar19 + *(int *)(lVar11 + 0x3c);
              fVar25 = (float)(int)*(short *)(lVar12 + uVar19 * 4);
              fVar26 = (float)(int)*(short *)(lVar12 + uVar23 * 4);
              fVar28 = (float)(int)*(short *)(lVar12 + (ulong)uVar14 * 4);
              fVar27 = (float)(int)*(short *)(lVar12 + (ulong)(uVar14 + 1) * 4);
              bVar3 = false;
              if ((fVar30 < fVar25) && (bVar3 = false, !NAN(fVar30) && !NAN(fVar26))) {
                bVar3 = fVar30 < fVar26;
              }
              bVar4 = false;
              if ((bVar3) && (bVar4 = false, !NAN(fVar30) && !NAN(fVar28))) {
                bVar4 = fVar30 < fVar28;
              }
              bVar3 = false;
              if ((bVar4) && (bVar3 = false, !NAN(fVar30) && !NAN(fVar27))) {
                bVar3 = fVar30 < fVar27;
              }
              if (!bVar3) {
                bVar3 = false;
                bVar4 = true;
                bVar7 = false;
                if (fVar25 < fVar24) {
                  bVar3 = false;
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(fVar24) && !NAN(fVar26)) {
                    bVar3 = fVar24 < fVar26;
                    bVar4 = fVar24 == fVar26;
                    bVar7 = false;
                  }
                }
                bVar5 = false;
                bVar6 = true;
                bVar8 = false;
                if (!bVar4 && bVar3 == bVar7) {
                  bVar5 = false;
                  bVar6 = false;
                  bVar8 = true;
                  if (!NAN(fVar24) && !NAN(fVar28)) {
                    bVar5 = fVar24 < fVar28;
                    bVar6 = fVar24 == fVar28;
                    bVar8 = false;
                  }
                }
                bVar3 = false;
                bVar4 = true;
                bVar7 = false;
                if (!bVar6 && bVar5 == bVar8) {
                  bVar3 = false;
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(fVar24) && !NAN(fVar27)) {
                    bVar3 = fVar24 < fVar27;
                    bVar4 = fVar24 == fVar27;
                    bVar7 = false;
                  }
                }
                if (bVar4 || bVar3 != bVar7) {
                  if ((~*(byte *)(lVar12 + uVar19 * 4 + 2) & 0x7f) != 0) {
                    if (0x3f < (uint)uVar10) {
                      (**(code **)(*param_5 + 0x10))(param_5,uVar10,local_188);
                      lVar11 = *(long *)(param_1 + 4);
                      uVar10 = 0;
                    }
                    local_188[uVar10] = fVar29;
                    uVar10 = (ulong)((int)uVar10 + 1);
                    iVar17 = iVar17 + 1;
                  }
                  if ((~*(byte *)(*(long *)(lVar11 + 0x50) + uVar19 * 4 + 3) & 0x7f) != 0) {
                    if (0x3f < (uint)uVar10) {
                      (**(code **)(*param_5 + 0x10))(param_5,uVar10,local_188);
                      lVar11 = *(long *)(param_1 + 4);
                      uVar10 = 0;
                    }
                    local_188[uVar10] = (float)((int)fVar29 + 1);
                    uVar10 = (ulong)((int)uVar10 + 1);
                    iVar17 = iVar17 + 1;
                  }
                }
              }
              iVar22 = iVar22 + -1;
              fVar29 = (float)((int)fVar29 + 2);
              uVar19 = uVar23;
            } while (iVar22 != 0);
            uVar18 = iVar9 + uVar18;
          }
          else {
            lVar12 = *(long *)(lVar11 + 0x50);
            sVar13 = *(short *)(lVar12 + (ulong)uVar18 * 4);
            fVar29 = (float)(uVar18 << 1);
            uVar19 = (ulong)uVar18;
            uVar14 = uVar21;
            do {
              iVar22 = (int)sVar13;
              uVar18 = (int)uVar19 + 1;
              sVar13 = *(short *)(lVar12 + (ulong)uVar18 * 4);
              fVar25 = (float)(int)sVar13;
              uVar1 = *(int *)(lVar11 + 0x3c) + (int)uVar19;
              fVar26 = (float)(int)*(short *)(lVar12 + (ulong)uVar1 * 4);
              fVar27 = (float)(int)*(short *)(lVar12 + (ulong)(uVar1 + 1) * 4);
              bVar3 = false;
              if ((fVar30 < (float)iVar22) && (bVar3 = false, !NAN(fVar30) && !NAN(fVar25))) {
                bVar3 = fVar30 < fVar25;
              }
              bVar4 = false;
              if ((bVar3) && (bVar4 = false, !NAN(fVar30) && !NAN(fVar26))) {
                bVar4 = fVar30 < fVar26;
              }
              bVar3 = false;
              if ((bVar4) && (bVar3 = false, !NAN(fVar30) && !NAN(fVar27))) {
                bVar3 = fVar30 < fVar27;
              }
              if (!bVar3) {
                bVar3 = false;
                bVar4 = true;
                bVar7 = false;
                if ((float)iVar22 < fVar24) {
                  bVar3 = false;
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(fVar24) && !NAN(fVar25)) {
                    bVar3 = fVar24 < fVar25;
                    bVar4 = fVar24 == fVar25;
                    bVar7 = false;
                  }
                }
                bVar5 = false;
                bVar6 = true;
                bVar8 = false;
                if (!bVar4 && bVar3 == bVar7) {
                  bVar5 = false;
                  bVar6 = false;
                  bVar8 = true;
                  if (!NAN(fVar24) && !NAN(fVar26)) {
                    bVar5 = fVar24 < fVar26;
                    bVar6 = fVar24 == fVar26;
                    bVar8 = false;
                  }
                }
                bVar3 = false;
                bVar4 = true;
                bVar7 = false;
                if (!bVar6 && bVar5 == bVar8) {
                  bVar3 = false;
                  bVar4 = false;
                  bVar7 = true;
                  if (!NAN(fVar24) && !NAN(fVar27)) {
                    bVar3 = fVar24 < fVar27;
                    bVar4 = fVar24 == fVar27;
                    bVar7 = false;
                  }
                }
                if (bVar4 || bVar3 != bVar7) {
                  lVar2 = lVar12 + uVar19 * 4;
                  if ((~*(byte *)(lVar2 + 2) & 0x7f) == 0) {
                    if ((~*(byte *)(lVar2 + 3) & 0x7f) == 0) goto LAB_002522d0;
                    if (0x3f < (uint)uVar10) {
                      (**(code **)(*param_5 + 0x10))(param_5,uVar10,local_188);
                      uVar10 = 0;
                    }
                    iVar9 = (int)uVar10;
                    local_188[uVar10] = (float)((int)fVar29 + 1);
                  }
                  else {
                    if (0x3f < (uint)uVar10) {
                      (**(code **)(*param_5 + 0x10))(param_5,uVar10,local_188);
                      uVar10 = 0;
                    }
                    iVar9 = (int)uVar10;
                    local_188[uVar10] = fVar29;
                  }
                  uVar10 = (ulong)(iVar9 + 1);
                  iVar17 = iVar17 + 1;
                  goto LAB_00252390;
                }
              }
LAB_002522d0:
              uVar14 = uVar14 + 1;
              fVar29 = (float)((int)fVar29 + 2);
              uVar19 = (ulong)uVar18;
            } while (uVar14 < uVar20);
          }
        }
        uVar16 = uVar16 + 1;
        uVar18 = (uVar18 - iVar9) + *(int *)(lVar11 + 0x3c);
      } while (uVar16 < uVar15);
      if ((int)uVar10 != 0) {
LAB_00252390:
        (**(code **)(*param_5 + 0x10))(param_5,uVar10,local_188);
      }
    }
    else {
      iVar17 = 0;
    }
    bVar3 = iVar17 != 0;
  }
  return bVar3;
}


