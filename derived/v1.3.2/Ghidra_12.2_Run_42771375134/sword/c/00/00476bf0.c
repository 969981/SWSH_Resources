/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00476bf0; name: FUN_00476bf0
 */


void FUN_00476bf0(long param_1,uint param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  *(undefined4 *)(param_3 + 8) = 0xffffffff;
  pfVar15 = (float *)(param_1 + 0x18);
  fVar23 = *pfVar15;
  *(float *)(param_3 + 0x10) = fVar23;
  fVar22 = *pfVar15;
  uVar14 = (*(uint *)(param_1 + 0x1c) >> 1) + 2 & 0xfffffffc;
  uVar1 = *(uint *)(param_1 + 4) & 0xfffffffc;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  uVar21 = (*(int *)(param_1 + 8) + 2U & 0xfffffffc) + uVar1;
  uVar20 = *(int *)(param_1 + 0xc) - param_2;
  if (0.0 < fVar22) {
    fVar26 = *(float *)(param_1 + 0x20);
    if ((fVar26 <= fVar22) || (fVar26 <= 0.0)) {
      iVar16 = uVar14 + (int)(((fVar22 - fVar26) / (1.0 - fVar26)) * (float)uVar14);
    }
    else {
      iVar16 = (int)((fVar22 / fVar26) * (float)uVar14);
    }
    uVar2 = iVar16 + 2U & 0xfffffffc;
    uVar20 = uVar2 + uVar20;
    uVar21 = uVar2 + uVar21;
  }
  if (uVar20 != 0) {
    pfVar15 = (float *)(param_1 + 0x10);
  }
  fVar22 = *pfVar15;
  uVar2 = uVar1 - uVar20;
  puVar11 = param_4;
  if (uVar20 <= uVar1 && uVar2 != 0) {
    if (param_2 <= uVar2) {
      uVar2 = param_2;
    }
    puVar11 = (undefined8 *)((long)param_4 + (ulong)uVar2 * 4);
    if (uVar2 != 0) {
      if (puVar11 <= param_4 + 2) {
        puVar11 = param_4 + 2;
      }
                    /* WARNING: Subroutine does not return */
      memset(param_4,0,(long)puVar11 + ~(ulong)param_4 + 0x10 & 0xfffffffffffffff0);
    }
    if (fVar23 <= 0.0) {
      fVar23 = 0.0;
    }
    *(float *)(param_3 + 0x10) = fVar23;
  }
  uVar2 = uVar14 + uVar1;
  if (uVar21 <= uVar14 + uVar1) {
    uVar2 = uVar21;
  }
  uVar7 = uVar2 - uVar20;
  if (uVar20 <= uVar2 && uVar7 != 0) {
    uVar3 = param_2;
    if (uVar14 == 0) {
      fVar23 = 0.0;
      if (uVar7 <= param_2) {
        uVar3 = uVar7;
      }
    }
    else {
      fVar23 = *(float *)(param_1 + 0x20) / (float)uVar14;
      if (uVar7 <= param_2) {
        uVar3 = uVar7;
      }
    }
    if (uVar3 != 0) {
      fVar26 = fVar23 * 4.0;
      fVar27 = fVar23 + fVar23 + fVar22;
      fVar28 = fVar23 * 3.0 + fVar22;
      puVar13 = (undefined8 *)((long)puVar11 + (ulong)uVar3 * 4);
      puVar11[1] = CONCAT44(fVar28,fVar27);
      *puVar11 = CONCAT44(fVar23 + fVar22,fVar22 + 0.0);
      uVar24 = CONCAT44(fVar23 + fVar22 + fVar26,fVar22 + 0.0 + fVar26);
      uVar25 = CONCAT44(fVar28 + fVar26,fVar27 + fVar26);
      if (4 < uVar3) {
        puVar17 = puVar13;
        if (puVar13 <= puVar11 + 4) {
          puVar17 = puVar11 + 4;
        }
        uVar18 = (long)puVar17 + (~(ulong)puVar11 - 0x10);
        uVar7 = ((uint)(uVar18 >> 4) & 0xfffffff) + 1;
        puVar17 = puVar11 + 2;
        if ((uVar7 & 3) != 0) {
          lVar19 = -((ulong)uVar7 & 3);
          do {
            puVar11 = puVar17;
            puVar17 = puVar11 + 2;
            puVar11[1] = uVar25;
            *puVar11 = uVar24;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar26,(float)uVar25 + fVar26);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
        }
        if (0x2f < uVar18) {
          do {
            puVar17[1] = uVar25;
            *puVar17 = uVar24;
            uVar24 = puVar11[2];
            puVar17[3] = CONCAT44((float)((ulong)puVar11[3] >> 0x20) + fVar26,
                                  (float)puVar11[3] + fVar26);
            puVar17[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[4];
            puVar17[5] = CONCAT44((float)((ulong)puVar11[5] >> 0x20) + fVar26,
                                  (float)puVar11[5] + fVar26);
            puVar17[4] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[6];
            puVar17[7] = CONCAT44((float)((ulong)puVar11[7] >> 0x20) + fVar26,
                                  (float)puVar11[7] + fVar26);
            puVar17[6] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[8];
            puVar17 = puVar17 + 8;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)puVar11[9] >> 0x20) + fVar26,(float)puVar11[9] + fVar26
                             );
            puVar11 = puVar11 + 8;
          } while (puVar17 < puVar13);
        }
      }
      fVar23 = (float)NEON_fminnm((int)uVar24,0x3f800000);
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar26 = fVar23;
      if (fVar23 <= fVar22) {
        fVar26 = fVar22;
      }
      if (fVar26 <= *(float *)(param_3 + 0x10)) {
        fVar26 = *(float *)(param_3 + 0x10);
      }
      *(float *)(param_3 + 0x10) = fVar26;
      puVar11 = puVar13;
      fVar22 = fVar23;
    }
    uVar20 = uVar3 + uVar20;
    param_2 = param_2 - uVar3;
  }
  uVar3 = iVar5 + 2U & 0xfffffffc;
  uVar7 = uVar1 + uVar14 * 2;
  if (uVar21 <= uVar7) {
    uVar7 = uVar21;
  }
  uVar8 = uVar7 - uVar20;
  if (uVar20 <= uVar7 && uVar8 != 0) {
    uVar4 = param_2;
    if (uVar14 == 0) {
      fVar23 = 0.0;
      if (uVar8 <= param_2) {
        uVar4 = uVar8;
      }
    }
    else {
      fVar23 = (1.0 - *(float *)(param_1 + 0x20)) / (float)uVar14;
      if (uVar8 <= param_2) {
        uVar4 = uVar8;
      }
    }
    if (uVar4 != 0) {
      fVar26 = fVar23 * 4.0;
      fVar27 = fVar23 + fVar23 + fVar22;
      fVar28 = fVar23 * 3.0 + fVar22;
      puVar13 = (undefined8 *)((long)puVar11 + (ulong)uVar4 * 4);
      puVar11[1] = CONCAT44(fVar28,fVar27);
      *puVar11 = CONCAT44(fVar23 + fVar22,fVar22 + 0.0);
      uVar24 = CONCAT44(fVar23 + fVar22 + fVar26,fVar22 + 0.0 + fVar26);
      uVar25 = CONCAT44(fVar28 + fVar26,fVar27 + fVar26);
      if (4 < uVar4) {
        puVar17 = puVar13;
        if (puVar13 <= puVar11 + 4) {
          puVar17 = puVar11 + 4;
        }
        uVar18 = (long)puVar17 + (~(ulong)puVar11 - 0x10);
        uVar8 = ((uint)(uVar18 >> 4) & 0xfffffff) + 1;
        puVar17 = puVar11 + 2;
        if ((uVar8 & 3) != 0) {
          lVar19 = -((ulong)uVar8 & 3);
          do {
            puVar11 = puVar17;
            puVar17 = puVar11 + 2;
            puVar11[1] = uVar25;
            *puVar11 = uVar24;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar26,(float)uVar25 + fVar26);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
        }
        if (0x2f < uVar18) {
          do {
            puVar17[1] = uVar25;
            *puVar17 = uVar24;
            uVar24 = puVar11[2];
            puVar17[3] = CONCAT44((float)((ulong)puVar11[3] >> 0x20) + fVar26,
                                  (float)puVar11[3] + fVar26);
            puVar17[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[4];
            puVar17[5] = CONCAT44((float)((ulong)puVar11[5] >> 0x20) + fVar26,
                                  (float)puVar11[5] + fVar26);
            puVar17[4] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[6];
            puVar17[7] = CONCAT44((float)((ulong)puVar11[7] >> 0x20) + fVar26,
                                  (float)puVar11[7] + fVar26);
            puVar17[6] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[8];
            puVar17 = puVar17 + 8;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)puVar11[9] >> 0x20) + fVar26,(float)puVar11[9] + fVar26
                             );
            puVar11 = puVar11 + 8;
          } while (puVar17 < puVar13);
        }
      }
      fVar23 = (float)NEON_fminnm((int)uVar24,0x3f800000);
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar26 = fVar23;
      if (fVar23 <= fVar22) {
        fVar26 = fVar22;
      }
      if (fVar26 <= *(float *)(param_3 + 0x10)) {
        fVar26 = *(float *)(param_3 + 0x10);
      }
      *(float *)(param_3 + 0x10) = fVar26;
      puVar11 = puVar13;
      fVar22 = fVar23;
    }
    uVar20 = uVar4 + uVar20;
    param_2 = param_2 - uVar4;
  }
  uVar8 = uVar7 + uVar3;
  uVar4 = uVar8;
  if (uVar21 <= uVar8) {
    uVar4 = uVar21;
  }
  uVar9 = uVar4 - uVar20;
  if (uVar20 <= uVar4 && uVar9 != 0) {
    uVar10 = param_2;
    if (uVar3 == 0) {
      fVar23 = 0.0;
      if (uVar9 <= param_2) {
        uVar10 = uVar9;
      }
    }
    else {
      fVar23 = (*(float *)(param_1 + 0x24) + -1.0) / (float)uVar3;
      if (uVar9 <= param_2) {
        uVar10 = uVar9;
      }
    }
    if (uVar10 != 0) {
      fVar26 = fVar23 * 4.0;
      fVar27 = fVar23 + fVar23 + fVar22;
      fVar28 = fVar23 * 3.0 + fVar22;
      puVar13 = (undefined8 *)((long)puVar11 + (ulong)uVar10 * 4);
      puVar11[1] = CONCAT44(fVar28,fVar27);
      *puVar11 = CONCAT44(fVar23 + fVar22,fVar22 + 0.0);
      uVar24 = CONCAT44(fVar23 + fVar22 + fVar26,fVar22 + 0.0 + fVar26);
      uVar25 = CONCAT44(fVar28 + fVar26,fVar27 + fVar26);
      if (4 < uVar10) {
        puVar17 = puVar13;
        if (puVar13 <= puVar11 + 4) {
          puVar17 = puVar11 + 4;
        }
        uVar18 = (long)puVar17 + (~(ulong)puVar11 - 0x10);
        uVar9 = ((uint)(uVar18 >> 4) & 0xfffffff) + 1;
        puVar17 = puVar11 + 2;
        if ((uVar9 & 3) != 0) {
          lVar19 = -((ulong)uVar9 & 3);
          do {
            puVar11 = puVar17;
            puVar17 = puVar11 + 2;
            puVar11[1] = uVar25;
            *puVar11 = uVar24;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar26,(float)uVar25 + fVar26);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
        }
        if (0x2f < uVar18) {
          do {
            puVar17[1] = uVar25;
            *puVar17 = uVar24;
            uVar24 = puVar11[2];
            puVar17[3] = CONCAT44((float)((ulong)puVar11[3] >> 0x20) + fVar26,
                                  (float)puVar11[3] + fVar26);
            puVar17[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[4];
            puVar17[5] = CONCAT44((float)((ulong)puVar11[5] >> 0x20) + fVar26,
                                  (float)puVar11[5] + fVar26);
            puVar17[4] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[6];
            puVar17[7] = CONCAT44((float)((ulong)puVar11[7] >> 0x20) + fVar26,
                                  (float)puVar11[7] + fVar26);
            puVar17[6] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar11[8];
            puVar17 = puVar17 + 8;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)puVar11[9] >> 0x20) + fVar26,(float)puVar11[9] + fVar26
                             );
            puVar11 = puVar11 + 8;
          } while (puVar17 < puVar13);
        }
      }
      fVar23 = (float)NEON_fminnm((int)uVar24,0x3f800000);
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar26 = fVar23;
      if (fVar23 <= fVar22) {
        fVar26 = fVar22;
      }
      if (fVar26 <= *(float *)(param_3 + 0x10)) {
        fVar26 = *(float *)(param_3 + 0x10);
      }
      *(float *)(param_3 + 0x10) = fVar26;
      puVar11 = puVar13;
      fVar22 = fVar23;
    }
    uVar20 = uVar10 + uVar20;
    param_2 = param_2 - uVar10;
  }
  fVar23 = *(float *)(param_1 + 0x24);
  uVar9 = iVar6 + 2U & 0xfffffffc;
  uVar10 = uVar8 - uVar21;
  if (uVar8 < uVar21 || uVar10 == 0) {
    uVar14 = 0;
  }
  else {
    if (uVar14 == 0) {
      fVar27 = 1.0;
      fVar26 = 1.0 - fVar23;
    }
    else {
      fVar27 = (*(float *)(param_1 + 0x20) / (float)uVar14) * (float)(uVar2 - uVar1) +
               (float)(uVar7 - uVar2) * ((1.0 - *(float *)(param_1 + 0x20)) / (float)uVar14);
      fVar26 = fVar27 - fVar23;
    }
    if (fVar26 <= 0.0) {
      uVar14 = 0;
      fVar23 = fVar27;
    }
    else {
      fVar27 = 0.0;
      if (uVar3 == 0) {
        uVar14 = 0;
        fVar28 = 0.0;
      }
      else {
        fVar28 = (fVar23 + -1.0) / (float)uVar3;
        if (fVar28 == 0.0) {
          uVar14 = 0;
        }
        else {
          uVar14 = (uint)(-fVar26 / fVar28);
        }
      }
      if (uVar14 <= uVar10) {
        uVar10 = uVar14;
      }
      uVar14 = uVar9;
      if (uVar10 <= uVar9) {
        uVar14 = uVar10;
      }
      uVar14 = (uVar14 >> 1) + 2 & 0xfffffffc;
      if (uVar9 != 0) {
        fVar27 = -fVar23 / (float)uVar9;
      }
      fVar27 = fVar27 * (float)uVar14;
      fVar23 = fVar23 - fVar27;
      uVar1 = (uVar14 + uVar4) - uVar20;
      if (uVar20 <= uVar14 + uVar4 && uVar1 != 0) {
        uVar2 = param_2;
        if (uVar14 == 0) {
          fVar26 = 0.0;
          if (uVar1 <= param_2) {
            uVar2 = uVar1;
          }
        }
        else {
          fVar26 = (fVar27 + (fVar28 * ((float)uVar7 - (float)uVar4) - fVar26)) / (float)uVar14;
          if (uVar1 <= param_2) {
            uVar2 = uVar1;
          }
        }
        if (uVar2 != 0) {
          fVar27 = fVar26 * 4.0;
          fVar28 = fVar26 + fVar26 + fVar22;
          fVar29 = fVar26 * 3.0 + fVar22;
          puVar13 = (undefined8 *)((long)puVar11 + (ulong)uVar2 * 4);
          puVar11[1] = CONCAT44(fVar29,fVar28);
          *puVar11 = CONCAT44(fVar26 + fVar22,fVar22 + 0.0);
          uVar24 = CONCAT44(fVar26 + fVar22 + fVar27,fVar22 + 0.0 + fVar27);
          uVar25 = CONCAT44(fVar29 + fVar27,fVar28 + fVar27);
          if (4 < uVar2) {
            puVar17 = puVar13;
            if (puVar13 <= puVar11 + 4) {
              puVar17 = puVar11 + 4;
            }
            uVar18 = (long)puVar17 + (~(ulong)puVar11 - 0x10);
            uVar1 = ((uint)(uVar18 >> 4) & 0xfffffff) + 1;
            puVar17 = puVar11 + 2;
            if ((uVar1 & 3) != 0) {
              lVar19 = -((ulong)uVar1 & 3);
              do {
                puVar11 = puVar17;
                puVar17 = puVar11 + 2;
                puVar11[1] = uVar25;
                *puVar11 = uVar24;
                uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar27,(float)uVar24 + fVar27);
                uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar27,(float)uVar25 + fVar27);
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0);
            }
            if (0x2f < uVar18) {
              do {
                puVar17[1] = uVar25;
                *puVar17 = uVar24;
                uVar24 = puVar11[2];
                puVar17[3] = CONCAT44((float)((ulong)puVar11[3] >> 0x20) + fVar27,
                                      (float)puVar11[3] + fVar27);
                puVar17[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar27,(float)uVar24 + fVar27
                                     );
                uVar24 = puVar11[4];
                puVar17[5] = CONCAT44((float)((ulong)puVar11[5] >> 0x20) + fVar27,
                                      (float)puVar11[5] + fVar27);
                puVar17[4] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar27,(float)uVar24 + fVar27
                                     );
                uVar24 = puVar11[6];
                puVar17[7] = CONCAT44((float)((ulong)puVar11[7] >> 0x20) + fVar27,
                                      (float)puVar11[7] + fVar27);
                puVar17[6] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar27,(float)uVar24 + fVar27
                                     );
                uVar24 = puVar11[8];
                puVar17 = puVar17 + 8;
                uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar27,(float)uVar24 + fVar27);
                uVar25 = CONCAT44((float)((ulong)puVar11[9] >> 0x20) + fVar27,
                                  (float)puVar11[9] + fVar27);
                puVar11 = puVar11 + 8;
              } while (puVar17 < puVar13);
            }
          }
          fVar26 = (float)NEON_fminnm((int)uVar24,0x3f800000);
          if (fVar26 <= 0.0) {
            fVar26 = 0.0;
          }
          fVar27 = fVar26;
          if (fVar26 <= fVar22) {
            fVar27 = fVar22;
          }
          if (fVar27 <= *(float *)(param_3 + 0x10)) {
            fVar27 = *(float *)(param_3 + 0x10);
          }
          *(float *)(param_3 + 0x10) = fVar27;
          puVar11 = puVar13;
          fVar22 = fVar26;
        }
        uVar20 = uVar2 + uVar20;
        param_2 = param_2 - uVar2;
      }
    }
  }
  uVar1 = param_2;
  if ((int)(uVar21 - uVar20) <= (int)param_2) {
    uVar1 = uVar21 - uVar20;
  }
  puVar13 = puVar11;
  if (0 < (int)uVar1) {
    fVar22 = *(float *)(param_1 + 0x24);
    puVar13 = (undefined8 *)((long)puVar11 + (ulong)uVar1 * 4);
    puVar17 = puVar13;
    if (puVar13 <= puVar11 + 2) {
      puVar17 = puVar11 + 2;
    }
    uVar18 = ~(ulong)puVar11;
    uVar24 = CONCAT44(fVar22,fVar22);
    uVar25 = CONCAT44(fVar22,fVar22);
    uVar2 = ((uint)((long)puVar17 + uVar18 >> 4) & 0xfffffff) + 1;
    if ((uVar2 & 7) != 0) {
      lVar19 = -((ulong)uVar2 & 7);
      puVar12 = puVar11;
      do {
        lVar19 = lVar19 + 1;
        puVar11 = puVar12 + 2;
        puVar12[1] = uVar25;
        *puVar12 = uVar24;
        puVar12 = puVar11;
      } while (lVar19 != 0);
    }
    if (0x6f < (long)puVar17 + uVar18) {
      do {
        puVar11[1] = uVar25;
        *puVar11 = uVar24;
        puVar11[3] = uVar25;
        puVar11[2] = uVar24;
        puVar11[5] = uVar25;
        puVar11[4] = uVar24;
        puVar11[7] = uVar25;
        puVar11[6] = uVar24;
        puVar11[9] = uVar25;
        puVar11[8] = uVar24;
        puVar11[0xb] = uVar25;
        puVar11[10] = uVar24;
        puVar11[0xd] = uVar25;
        puVar11[0xc] = uVar24;
        puVar11[0xf] = uVar25;
        puVar11[0xe] = uVar24;
        puVar11 = puVar11 + 0x10;
      } while (puVar11 < puVar13);
    }
    fVar26 = *(float *)(param_3 + 0x10);
    if (*(float *)(param_3 + 0x10) <= fVar22) {
      fVar26 = fVar22;
    }
    uVar20 = uVar1 + uVar20;
    param_2 = param_2 - uVar1;
    *(float *)(param_3 + 0x10) = fVar26;
  }
  uVar9 = uVar9 - uVar14;
  uVar21 = uVar9 + uVar21;
  uVar14 = uVar21 - uVar20;
  if (uVar20 <= uVar21 && uVar14 != 0) {
    uVar1 = param_2;
    if (uVar9 == 0) {
      fVar23 = 0.0;
      if (uVar14 <= param_2) {
        uVar1 = uVar14;
      }
    }
    else {
      fVar23 = -fVar23 / (float)uVar9;
      if (uVar14 <= param_2) {
        uVar1 = uVar14;
      }
    }
    if (uVar1 != 0) {
      fVar26 = fVar23 * 4.0;
      fVar27 = fVar23 + fVar23 + fVar22;
      fVar28 = fVar23 * 3.0 + fVar22;
      puVar11 = (undefined8 *)((long)puVar13 + (ulong)uVar1 * 4);
      puVar13[1] = CONCAT44(fVar28,fVar27);
      *puVar13 = CONCAT44(fVar23 + fVar22,fVar22 + 0.0);
      uVar24 = CONCAT44(fVar23 + fVar22 + fVar26,fVar22 + 0.0 + fVar26);
      uVar25 = CONCAT44(fVar28 + fVar26,fVar27 + fVar26);
      if (4 < uVar1) {
        puVar17 = puVar11;
        if (puVar11 <= puVar13 + 4) {
          puVar17 = puVar13 + 4;
        }
        uVar18 = (long)puVar17 + (~(ulong)puVar13 - 0x10);
        uVar14 = ((uint)(uVar18 >> 4) & 0xfffffff) + 1;
        puVar17 = puVar13 + 2;
        if ((uVar14 & 3) != 0) {
          lVar19 = -((ulong)uVar14 & 3);
          do {
            puVar13 = puVar17;
            puVar17 = puVar13 + 2;
            puVar13[1] = uVar25;
            *puVar13 = uVar24;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar26,(float)uVar25 + fVar26);
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
        }
        if (0x2f < uVar18) {
          do {
            puVar17[1] = uVar25;
            *puVar17 = uVar24;
            uVar24 = puVar13[2];
            puVar17[3] = CONCAT44((float)((ulong)puVar13[3] >> 0x20) + fVar26,
                                  (float)puVar13[3] + fVar26);
            puVar17[2] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar13[4];
            puVar17[5] = CONCAT44((float)((ulong)puVar13[5] >> 0x20) + fVar26,
                                  (float)puVar13[5] + fVar26);
            puVar17[4] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar13[6];
            puVar17[7] = CONCAT44((float)((ulong)puVar13[7] >> 0x20) + fVar26,
                                  (float)puVar13[7] + fVar26);
            puVar17[6] = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar24 = puVar13[8];
            puVar17 = puVar17 + 8;
            uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar26);
            uVar25 = CONCAT44((float)((ulong)puVar13[9] >> 0x20) + fVar26,(float)puVar13[9] + fVar26
                             );
            puVar13 = puVar13 + 8;
          } while (puVar17 < puVar11);
        }
      }
      fVar23 = (float)NEON_fminnm((int)uVar24,0x3f800000);
      if (fVar23 <= 0.0) {
        fVar23 = 0.0;
      }
      fVar26 = fVar23;
      if (fVar23 <= fVar22) {
        fVar26 = fVar22;
      }
      if (fVar26 <= *(float *)(param_3 + 0x10)) {
        fVar26 = *(float *)(param_3 + 0x10);
      }
      *(float *)(param_3 + 0x10) = fVar26;
      puVar13 = puVar11;
      fVar22 = fVar23;
    }
    uVar20 = uVar1 + uVar20;
    param_2 = param_2 - uVar1;
  }
  if ((param_2 == 0) || (uVar20 < uVar21)) {
    *(float *)(param_3 + 0xc) = fVar22;
    return;
  }
  puVar11 = (undefined8 *)((long)puVar13 + (ulong)param_2 * 4);
  if (puVar11 <= puVar13 + 2) {
    puVar11 = puVar13 + 2;
  }
                    /* WARNING: Subroutine does not return */
  memset(puVar13,0,(long)puVar11 + ~(ulong)puVar13 + 0x10 & 0xfffffffffffffff0);
}


