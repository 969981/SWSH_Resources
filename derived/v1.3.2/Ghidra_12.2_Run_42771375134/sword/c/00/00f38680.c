/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f38680; name: FUN_00f38680
 */


void FUN_00f38680(float *param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined8 local_70;
  undefined8 local_68;
  
LAB_00f386d0:
  pfVar12 = param_2 + -4;
LAB_00f386f0:
  pfVar18 = param_1;
  lVar13 = (long)param_2 - (long)pfVar18;
  uVar8 = lVar13 >> 4;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_00f38ba0_caseD_0;
  case 2:
    if (*pfVar18 <= param_2[-4]) {
      return;
    }
    break;
  case 3:
    pfVar12 = pfVar18 + 4;
    fVar22 = *pfVar12;
    pfVar11 = param_2 + -4;
    if (*pfVar18 <= fVar22) {
      if (fVar22 <= *pfVar11) {
        return;
      }
      uVar16 = *(undefined8 *)pfVar12;
      uVar2 = *(undefined8 *)(pfVar18 + 6);
      uVar15 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar12 = *(undefined8 *)pfVar11;
      *(undefined8 *)(pfVar18 + 6) = uVar15;
      *(undefined8 *)pfVar11 = uVar16;
      *(undefined8 *)(param_2 + -2) = uVar2;
      if (pfVar18[4] < *pfVar18) {
        uVar16 = *(undefined8 *)pfVar18;
        uVar2 = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar18 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 6);
        *(undefined8 *)pfVar12 = uVar16;
        *(undefined8 *)(pfVar18 + 6) = uVar2;
        return;
      }
      return;
    }
    if (fVar22 <= *pfVar11) {
      uVar16 = *(undefined8 *)pfVar18;
      uVar2 = *(undefined8 *)(pfVar18 + 2);
      *(undefined8 *)pfVar18 = *(undefined8 *)pfVar12;
      *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 6);
      *(undefined8 *)pfVar12 = uVar16;
      *(undefined8 *)(pfVar18 + 6) = uVar2;
      if (pfVar18[4] <= *pfVar11) {
        return;
      }
      local_70 = *(undefined8 *)pfVar12;
      local_68 = *(undefined8 *)(pfVar18 + 6);
      uVar16 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)pfVar12 = *(undefined8 *)pfVar11;
      *(undefined8 *)(pfVar18 + 6) = uVar16;
      goto LAB_00f38d60;
    }
    break;
  case 4:
    FUN_00f38ef0(pfVar18,pfVar18 + 4,pfVar18 + 8,pfVar12,param_3);
    return;
  case 5:
    pfVar12 = pfVar18 + 4;
    pfVar11 = pfVar18 + 8;
    pfVar20 = pfVar18 + 0xc;
    FUN_00f38ef0(pfVar18,pfVar12,pfVar11,pfVar20,param_3);
    pfVar9 = param_2 + -4;
    if (pfVar18[0xc] <= *pfVar9) {
      return;
    }
    uVar16 = *(undefined8 *)pfVar20;
    uVar2 = *(undefined8 *)(pfVar18 + 0xe);
    uVar15 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)pfVar20 = *(undefined8 *)pfVar9;
    *(undefined8 *)(pfVar18 + 0xe) = uVar15;
    *(undefined8 *)pfVar9 = uVar16;
    *(undefined8 *)(param_2 + -2) = uVar2;
    if (*pfVar11 <= *pfVar20) {
      return;
    }
    uVar16 = *(undefined8 *)pfVar11;
    uVar2 = *(undefined8 *)(pfVar18 + 10);
    *(undefined8 *)pfVar11 = *(undefined8 *)pfVar20;
    *(undefined8 *)(pfVar18 + 10) = *(undefined8 *)(pfVar18 + 0xe);
    *(undefined8 *)pfVar20 = uVar16;
    *(undefined8 *)(pfVar18 + 0xe) = uVar2;
    if (*pfVar12 <= *pfVar11) {
      return;
    }
    uVar16 = *(undefined8 *)pfVar12;
    uVar2 = *(undefined8 *)(pfVar18 + 6);
    *(undefined8 *)pfVar12 = *(undefined8 *)pfVar11;
    *(undefined8 *)(pfVar18 + 6) = *(undefined8 *)(pfVar18 + 10);
    *(undefined8 *)pfVar11 = uVar16;
    *(undefined8 *)(pfVar18 + 10) = uVar2;
    if (pfVar18[4] < *pfVar18) {
      uVar16 = *(undefined8 *)pfVar18;
      uVar2 = *(undefined8 *)(pfVar18 + 2);
      *(undefined8 *)pfVar18 = *(undefined8 *)pfVar12;
      *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 6);
      *(undefined8 *)pfVar12 = uVar16;
      *(undefined8 *)(pfVar18 + 6) = uVar2;
      return;
    }
    return;
  default:
    if (0x1ef < lVar13) {
      uVar7 = uVar8;
      if ((long)uVar8 < 0) {
        uVar7 = uVar8 + 1;
      }
      pfVar11 = pfVar18 + (uVar7 & 0x1ffffffffffffffe) * 2;
      if (lVar13 < 0x3e71) {
        fVar22 = *pfVar11;
        if (*pfVar18 <= fVar22) {
          if (fVar22 <= *pfVar12) {
            iVar6 = 0;
            iVar5 = 0;
            fVar22 = *pfVar18;
            fVar23 = *pfVar11;
            if (fVar23 <= fVar22) goto LAB_00f388a4;
          }
          else {
            uVar16 = *(undefined8 *)pfVar11;
            uVar2 = *(undefined8 *)(pfVar11 + 2);
            uVar15 = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar11 + 2) = uVar15;
            *(undefined8 *)pfVar12 = uVar16;
            *(undefined8 *)(param_2 + -2) = uVar2;
            if (*pfVar18 <= *pfVar11) goto LAB_00f38a64;
            uVar16 = *(undefined8 *)pfVar18;
            uVar2 = *(undefined8 *)(pfVar18 + 2);
            uVar15 = *(undefined8 *)(pfVar11 + 2);
            *(undefined8 *)pfVar18 = *(undefined8 *)pfVar11;
            *(undefined8 *)(pfVar18 + 2) = uVar15;
            *(undefined8 *)pfVar11 = uVar16;
            *(undefined8 *)(pfVar11 + 2) = uVar2;
LAB_00f38a34:
            iVar6 = 2;
            iVar5 = 2;
            fVar22 = *pfVar18;
            fVar23 = *pfVar11;
            if (fVar23 <= fVar22) {
LAB_00f388a4:
              pfVar20 = param_2 + -8;
LAB_00f388a8:
              pfVar9 = pfVar20;
              if (pfVar18 != pfVar9) goto code_r0x00f388b0;
              pfVar11 = pfVar18 + 4;
              if (*pfVar12 <= fVar22) {
                if (pfVar11 == pfVar12) {
                  return;
                }
                pfVar11 = pfVar18 + 8;
                while (pfVar11[-4] <= fVar22) {
                  pfVar11 = pfVar11 + 4;
                  if (param_2 == pfVar11) {
                    return;
                  }
                }
                uVar16 = *(undefined8 *)(pfVar11 + -4);
                uVar2 = *(undefined8 *)(pfVar11 + -2);
                uVar15 = *(undefined8 *)(param_2 + -2);
                *(undefined8 *)(pfVar11 + -4) = *(undefined8 *)pfVar12;
                *(undefined8 *)(pfVar11 + -2) = uVar15;
                *(undefined8 *)pfVar12 = uVar16;
                *(undefined8 *)(param_2 + -2) = uVar2;
              }
              if (pfVar11 == pfVar12) {
                return;
              }
              while( true ) {
                param_1 = pfVar11 + -4;
                do {
                  pfVar20 = param_1;
                  param_1 = pfVar20 + 4;
                } while (*param_1 <= *pfVar18);
                pfVar11 = pfVar20 + 8;
                do {
                  pfVar9 = pfVar12;
                  pfVar12 = pfVar9 + -4;
                } while (*pfVar18 < *pfVar12);
                if (pfVar12 <= param_1) break;
                uVar16 = *(undefined8 *)param_1;
                uVar2 = *(undefined8 *)(pfVar20 + 6);
                uVar15 = *(undefined8 *)(pfVar9 + -2);
                *(undefined8 *)param_1 = *(undefined8 *)pfVar12;
                *(undefined8 *)(pfVar20 + 6) = uVar15;
                *(undefined8 *)pfVar12 = uVar16;
                *(undefined8 *)(pfVar9 + -2) = uVar2;
              }
              uVar21 = 4;
              goto LAB_00f38b5c;
            }
          }
        }
        else if (fVar22 <= *pfVar12) {
          uVar16 = *(undefined8 *)pfVar18;
          uVar2 = *(undefined8 *)(pfVar18 + 2);
          uVar15 = *(undefined8 *)(pfVar11 + 2);
          *(undefined8 *)pfVar18 = *(undefined8 *)pfVar11;
          *(undefined8 *)(pfVar18 + 2) = uVar15;
          *(undefined8 *)pfVar11 = uVar16;
          *(undefined8 *)(pfVar11 + 2) = uVar2;
          if (*pfVar12 < *pfVar11) {
            uVar16 = *(undefined8 *)pfVar11;
            uVar2 = *(undefined8 *)(pfVar11 + 2);
            uVar15 = *(undefined8 *)(param_2 + -2);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar12;
            *(undefined8 *)(pfVar11 + 2) = uVar15;
            *(undefined8 *)pfVar12 = uVar16;
            *(undefined8 *)(param_2 + -2) = uVar2;
            goto LAB_00f38a34;
          }
LAB_00f38a64:
          iVar6 = 1;
          iVar5 = 1;
          fVar22 = *pfVar18;
          fVar23 = *pfVar11;
          if (fVar23 <= fVar22) goto LAB_00f388a4;
        }
        else {
          uVar16 = *(undefined8 *)pfVar18;
          uVar2 = *(undefined8 *)(pfVar18 + 2);
          iVar6 = 1;
          iVar5 = 1;
          uVar15 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)pfVar18 = *(undefined8 *)pfVar12;
          *(undefined8 *)(pfVar18 + 2) = uVar15;
          *(undefined8 *)pfVar12 = uVar16;
          *(undefined8 *)(param_2 + -2) = uVar2;
          fVar22 = *pfVar18;
          fVar23 = *pfVar11;
          if (fVar23 <= fVar22) goto LAB_00f388a4;
        }
      }
      else {
        uVar7 = uVar8 + 3;
        if (-1 < (long)uVar8) {
          uVar7 = uVar8;
        }
        pfVar20 = pfVar18 + (uVar7 & 0x3ffffffffffffffc);
        pfVar9 = pfVar11 + (uVar7 & 0x3ffffffffffffffc);
        iVar5 = FUN_00f38ef0(pfVar18,pfVar20,pfVar11,pfVar9,param_3);
        if (*pfVar12 < *pfVar9) {
          uVar16 = *(undefined8 *)pfVar9;
          uVar2 = *(undefined8 *)(pfVar9 + 2);
          uVar15 = *(undefined8 *)(param_2 + -2);
          *(undefined8 *)pfVar9 = *(undefined8 *)pfVar12;
          *(undefined8 *)(pfVar9 + 2) = uVar15;
          *(undefined8 *)pfVar12 = uVar16;
          *(undefined8 *)(param_2 + -2) = uVar2;
          if (*pfVar11 <= *pfVar9) {
            iVar5 = iVar5 + 1;
            fVar22 = *pfVar18;
            fVar23 = *pfVar11;
            iVar6 = iVar5;
            if (fVar23 <= fVar22) goto LAB_00f388a4;
          }
          else {
            uVar16 = *(undefined8 *)pfVar11;
            uVar2 = *(undefined8 *)(pfVar11 + 2);
            uVar15 = *(undefined8 *)(pfVar9 + 2);
            *(undefined8 *)pfVar11 = *(undefined8 *)pfVar9;
            *(undefined8 *)(pfVar11 + 2) = uVar15;
            *(undefined8 *)pfVar9 = uVar16;
            *(undefined8 *)(pfVar9 + 2) = uVar2;
            if (*pfVar20 <= *pfVar11) {
              iVar5 = iVar5 + 2;
              fVar22 = *pfVar18;
              fVar23 = *pfVar11;
              iVar6 = iVar5;
              if (fVar23 <= fVar22) goto LAB_00f388a4;
            }
            else {
              uVar16 = *(undefined8 *)pfVar20;
              uVar2 = *(undefined8 *)(pfVar20 + 2);
              uVar15 = *(undefined8 *)(pfVar11 + 2);
              *(undefined8 *)pfVar20 = *(undefined8 *)pfVar11;
              *(undefined8 *)(pfVar20 + 2) = uVar15;
              *(undefined8 *)pfVar11 = uVar16;
              *(undefined8 *)(pfVar11 + 2) = uVar2;
              if (*pfVar20 < *pfVar18) {
                uVar16 = *(undefined8 *)pfVar18;
                uVar2 = *(undefined8 *)(pfVar18 + 2);
                iVar5 = iVar5 + 4;
                uVar15 = *(undefined8 *)(pfVar20 + 2);
                *(undefined8 *)pfVar18 = *(undefined8 *)pfVar20;
                *(undefined8 *)(pfVar18 + 2) = uVar15;
                *(undefined8 *)pfVar20 = uVar16;
                *(undefined8 *)(pfVar20 + 2) = uVar2;
                goto LAB_00f38800;
              }
              iVar5 = iVar5 + 3;
              fVar22 = *pfVar18;
              fVar23 = *pfVar11;
              iVar6 = iVar5;
              if (fVar23 <= fVar22) goto LAB_00f388a4;
            }
          }
        }
        else {
LAB_00f38800:
          fVar22 = *pfVar18;
          fVar23 = *pfVar11;
          iVar6 = iVar5;
          if (fVar23 <= fVar22) goto LAB_00f388a4;
        }
      }
      pfVar20 = pfVar18 + 4;
      pfVar9 = pfVar12;
      if (pfVar12 <= pfVar20) goto LAB_00f38820;
      goto LAB_00f38910;
    }
    pfVar12 = pfVar18 + 8;
    fVar22 = *pfVar12;
    pfVar11 = pfVar18 + 4;
    fVar23 = *pfVar11;
    if (*pfVar18 <= fVar23) {
      if (fVar22 < fVar23) {
        uVar16 = *(undefined8 *)pfVar11;
        uVar2 = *(undefined8 *)(pfVar18 + 6);
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar18 + 6) = *(undefined8 *)(pfVar18 + 10);
        *(undefined8 *)pfVar12 = uVar16;
        *(undefined8 *)(pfVar18 + 10) = uVar2;
        if (*pfVar11 < *pfVar18) {
          uVar16 = *(undefined8 *)pfVar18;
          uVar2 = *(undefined8 *)(pfVar18 + 2);
          *(undefined8 *)pfVar18 = *(undefined8 *)pfVar11;
          *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 6);
          *(undefined8 *)pfVar11 = uVar16;
          *(undefined8 *)(pfVar18 + 6) = uVar2;
        }
      }
    }
    else {
      if (fVar23 <= fVar22) {
        uVar16 = *(undefined8 *)pfVar18;
        uVar2 = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar18 = *(undefined8 *)pfVar11;
        *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 6);
        *(undefined8 *)pfVar11 = uVar16;
        *(undefined8 *)(pfVar18 + 6) = uVar2;
        if (pfVar18[4] <= fVar22) goto joined_r0x00f38c3c;
        local_70 = *(undefined8 *)pfVar11;
        local_68 = *(undefined8 *)(pfVar18 + 6);
        *(undefined8 *)pfVar11 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar18 + 6) = *(undefined8 *)(pfVar18 + 10);
      }
      else {
        local_70 = *(undefined8 *)pfVar18;
        local_68 = *(undefined8 *)(pfVar18 + 2);
        *(undefined8 *)pfVar18 = *(undefined8 *)pfVar12;
        *(undefined8 *)(pfVar18 + 2) = *(undefined8 *)(pfVar18 + 10);
      }
      *(undefined8 *)pfVar12 = local_70;
      *(undefined8 *)(pfVar18 + 10) = local_68;
    }
joined_r0x00f38c3c:
    if (pfVar18 + 0xc == param_2) {
      return;
    }
    lVar13 = 0;
    pfVar11 = pfVar18 + 0xc;
    goto LAB_00f38c90;
  }
  local_70 = *(undefined8 *)pfVar18;
  local_68 = *(undefined8 *)(pfVar18 + 2);
  uVar16 = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)pfVar18 = *(undefined8 *)(param_2 + -4);
  *(undefined8 *)(pfVar18 + 2) = uVar16;
LAB_00f38d60:
  *(undefined8 *)(param_2 + -4) = local_70;
  *(undefined8 *)(param_2 + -2) = local_68;
  return;
code_r0x00f388b0:
  pfVar20 = pfVar9 + -4;
  if (*pfVar9 < fVar23) goto code_r0x00f388bc;
  goto LAB_00f388a8;
code_r0x00f388bc:
  uVar16 = *(undefined8 *)pfVar18;
  uVar2 = *(undefined8 *)(pfVar18 + 2);
  iVar6 = iVar5 + 1;
  uVar15 = *(undefined8 *)(pfVar9 + 2);
  *(undefined8 *)pfVar18 = *(undefined8 *)pfVar9;
  *(undefined8 *)(pfVar18 + 2) = uVar15;
  *(undefined8 *)pfVar9 = uVar16;
  *(undefined8 *)(pfVar9 + 2) = uVar2;
  pfVar20 = pfVar18 + 4;
  if (pfVar20 < pfVar9) {
LAB_00f38910:
    while( true ) {
      pfVar19 = pfVar20 + -4;
      do {
        pfVar14 = pfVar19;
        pfVar19 = pfVar14 + 4;
      } while (*pfVar19 < *pfVar11);
      pfVar20 = pfVar14 + 8;
      do {
        pfVar10 = pfVar9;
        pfVar9 = pfVar10 + -4;
      } while (*pfVar11 <= *pfVar9);
      if (pfVar9 < pfVar19) break;
      uVar16 = *(undefined8 *)pfVar19;
      uVar2 = *(undefined8 *)(pfVar14 + 6);
      iVar6 = iVar6 + 1;
      uVar15 = *(undefined8 *)(pfVar10 + -2);
      pfVar1 = pfVar9;
      if (pfVar11 != pfVar19) {
        pfVar1 = pfVar11;
      }
      *(undefined8 *)pfVar19 = *(undefined8 *)pfVar9;
      *(undefined8 *)(pfVar14 + 6) = uVar15;
      *(undefined8 *)pfVar9 = uVar16;
      *(undefined8 *)(pfVar10 + -2) = uVar2;
      pfVar11 = pfVar1;
    }
    if (pfVar19 == pfVar11) goto LAB_00f38948;
LAB_00f38828:
    if (*pfVar19 <= *pfVar11) goto LAB_00f38948;
    uVar16 = *(undefined8 *)pfVar19;
    uVar2 = *(undefined8 *)(pfVar19 + 2);
    uVar15 = *(undefined8 *)(pfVar11 + 2);
    *(undefined8 *)pfVar19 = *(undefined8 *)pfVar11;
    *(undefined8 *)(pfVar19 + 2) = uVar15;
    *(undefined8 *)pfVar11 = uVar16;
    *(undefined8 *)(pfVar11 + 2) = uVar2;
    if (iVar6 != -1) goto LAB_00f3897c;
  }
  else {
LAB_00f38820:
    pfVar19 = pfVar18 + 4;
    if (pfVar19 != pfVar11) goto LAB_00f38828;
LAB_00f38948:
    if (iVar6 != 0) goto LAB_00f3897c;
  }
  uVar8 = FUN_00f390a0(pfVar18,pfVar19,param_3);
  uVar7 = FUN_00f390a0(pfVar19 + 4,param_2,param_3);
  if ((uVar7 & 1) != 0) goto LAB_00f38b70;
  param_1 = pfVar19 + 4;
  if ((uVar8 & 1) != 0) goto LAB_00f386f0;
LAB_00f3897c:
  if ((long)param_2 - (long)pfVar19 <= (long)pfVar19 - (long)pfVar18) {
    FUN_00f38680(pfVar19 + 4,param_2,param_3);
    param_2 = pfVar19;
    param_1 = pfVar18;
    goto LAB_00f386d0;
  }
  FUN_00f38680(pfVar18,pfVar19,param_3);
  param_1 = pfVar19 + 4;
  goto LAB_00f386f0;
LAB_00f38b70:
  bVar4 = (uVar8 & 1) == 0;
  if (bVar4) {
    param_2 = pfVar19;
  }
  uVar21 = 1;
  if (bVar4) {
    uVar21 = 2;
  }
  param_1 = pfVar18;
  if (4 < uVar21) {
    return;
  }
LAB_00f38b5c:
  if ((1 << (ulong)uVar21 & 0x15U) == 0) {
    return;
  }
  goto LAB_00f386d0;
LAB_00f38c90:
  fVar22 = *pfVar11;
  if (fVar22 < *pfVar12) {
    uVar16 = *(undefined8 *)(pfVar11 + 1);
    fVar23 = pfVar11[3];
    lVar3 = lVar13;
    do {
      lVar17 = lVar3;
      *(undefined8 *)((long)pfVar18 + lVar17 + 0x30) =
           *(undefined8 *)((long)pfVar18 + lVar17 + 0x20);
      *(undefined8 *)((long)pfVar18 + lVar17 + 0x38) =
           *(undefined8 *)((long)pfVar18 + lVar17 + 0x28);
      if (lVar17 == -0x20) {
        pfVar12 = pfVar18;
        goto LAB_00f38cec;
      }
      lVar3 = lVar17 + -0x10;
    } while (fVar22 < *(float *)((long)pfVar18 + lVar17 + 0x10));
    pfVar12 = (float *)((long)pfVar18 + lVar17 + 0x20);
LAB_00f38cec:
    *pfVar12 = fVar22;
    pfVar12[3] = fVar23;
    *(undefined8 *)(pfVar12 + 1) = uVar16;
  }
  pfVar20 = pfVar11 + 4;
  lVar13 = lVar13 + 0x10;
  pfVar12 = pfVar11;
  pfVar11 = pfVar20;
  if (pfVar20 == param_2) {
switchD_00f38ba0_caseD_0:
    return;
  }
  goto LAB_00f38c90;
}


