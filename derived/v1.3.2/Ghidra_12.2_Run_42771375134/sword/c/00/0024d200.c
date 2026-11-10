/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024d200; name: FUN_0024d200
 */


undefined8
FUN_0024d200(float param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,uint param_7)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
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
  float fVar23;
  
  fVar13 = param_2[2];
  fVar17 = *param_2;
  fVar14 = param_2[1];
  fVar18 = param_2[3] - fVar17;
  fVar19 = param_2[4] - fVar14;
  fVar20 = param_2[5] - fVar13;
  fVar21 = param_2[6] - fVar17;
  fVar22 = param_2[7] - fVar14;
  fVar23 = param_2[8] - fVar13;
  fVar15 = fVar19 * fVar23 - fVar20 * fVar22;
  fVar20 = fVar20 * fVar21 - fVar18 * fVar23;
  fVar18 = fVar18 * fVar22 - fVar19 * fVar21;
  if (((param_7 & 1) == 0) || (fVar15 * *param_4 + fVar20 * param_4[1] + fVar18 * param_4[2] < 0.0))
  {
    fVar14 = fVar13 * fVar18 + fVar17 * fVar15 + fVar14 * fVar20;
    fVar19 = param_2[5] * fVar18 + param_2[3] * fVar15 + param_2[4] * fVar20;
    fVar17 = param_2[8] * fVar18 + param_2[6] * fVar15 + param_2[7] * fVar20;
    fVar13 = fVar14;
    if (fVar19 <= fVar14) {
      fVar13 = fVar19;
    }
    if (fVar14 <= fVar19) {
      fVar14 = fVar19;
    }
    if (fVar17 <= fVar13) {
      fVar13 = fVar17;
    }
    if (fVar14 <= fVar17) {
      fVar14 = fVar17;
    }
    fVar17 = fabsf(fVar15);
    fVar22 = *param_3;
    fVar19 = fabsf(fVar20);
    fVar23 = param_3[1];
    fVar21 = fabsf(fVar18);
    fVar17 = fVar17 * fVar22 + fVar19 * fVar23 + fVar21 * param_3[2];
    fVar13 = fVar17 - fVar13;
    fVar14 = -fVar17 - fVar14;
    fVar20 = fVar15 * *param_4 + fVar20 * param_4[1] + fVar18 * param_4[2];
    fVar18 = fabsf(fVar20);
    fVar15 = DAT_01d4c1cc;
    if (DAT_01d4c1cc <= fVar18) {
      fVar20 = -1.0 / fVar20;
      fVar17 = fVar14 * fVar20;
      fVar20 = fVar13 * fVar20;
      fVar18 = fVar17;
      if (fVar20 <= fVar17) {
        fVar18 = fVar20;
      }
      if (fVar17 <= fVar20) {
        fVar17 = fVar20;
      }
      if (DAT_01d4c18c < fVar18) {
        return 0;
      }
      if (fVar17 < DAT_01d4c5a8) {
        return 0;
      }
      fVar20 = (float)NEON_fminnm(fVar17,DAT_01d4c18c);
      if (fVar18 <= DAT_01d4c5a8) {
        fVar18 = DAT_01d4c5a8;
      }
    }
    else {
      if (fVar14 > 0.0 || 0.0 > fVar13) {
        return 0;
      }
      fVar20 = DAT_01d4c18c;
      fVar18 = DAT_01d4c5a8;
    }
    fVar17 = *param_2;
    fVar21 = param_2[3];
    fVar22 = param_2[6];
    fVar19 = fVar17;
    if (fVar21 <= fVar17) {
      fVar19 = fVar21;
    }
    if (fVar17 <= fVar21) {
      fVar17 = fVar21;
    }
    if (fVar22 <= fVar19) {
      fVar19 = fVar22;
    }
    if (fVar17 <= fVar22) {
      fVar17 = fVar22;
    }
    fVar17 = -*param_3 - fVar17;
    fVar19 = *param_3 - fVar19;
    fVar22 = *param_5;
    fVar21 = fabsf(*param_4);
    if (fVar15 <= fVar21) {
      fVar23 = fVar17 * -fVar22;
      fVar22 = fVar19 * -fVar22;
      fVar21 = fVar23;
      if (fVar22 <= fVar23) {
        fVar21 = fVar22;
      }
      if (fVar23 <= fVar22) {
        fVar23 = fVar22;
      }
      if (fVar20 < fVar21) {
        return 0;
      }
      if (fVar23 < fVar18) {
        return 0;
      }
      if (fVar20 <= fVar23) {
        fVar23 = fVar20;
      }
      fVar20 = fVar23;
      if (fVar21 <= fVar18) {
        fVar21 = fVar18;
      }
    }
    else {
      fVar21 = fVar18;
      if (fVar17 > 0.0 || 0.0 > fVar19) {
        return 0;
      }
    }
    fVar18 = param_2[1];
    fVar23 = param_2[4];
    fVar11 = param_2[7];
    fVar22 = fVar18;
    if (fVar23 <= fVar18) {
      fVar22 = fVar23;
    }
    if (fVar18 <= fVar23) {
      fVar18 = fVar23;
    }
    if (fVar11 <= fVar22) {
      fVar22 = fVar11;
    }
    if (fVar18 <= fVar11) {
      fVar18 = fVar11;
    }
    fVar18 = -param_3[1] - fVar18;
    fVar22 = param_3[1] - fVar22;
    fVar11 = param_5[1];
    fVar23 = fabsf(param_4[1]);
    if (fVar15 <= fVar23) {
      fVar8 = fVar18 * -fVar11;
      fVar11 = fVar22 * -fVar11;
      fVar23 = fVar8;
      if (fVar11 <= fVar8) {
        fVar23 = fVar11;
      }
      if (fVar8 <= fVar11) {
        fVar8 = fVar11;
      }
      if (fVar20 < fVar23) {
        return 0;
      }
      if (fVar8 < fVar21) {
        return 0;
      }
      if (fVar20 <= fVar8) {
        fVar8 = fVar20;
      }
      fVar20 = fVar8;
      if (fVar23 <= fVar21) {
        fVar23 = fVar21;
      }
    }
    else {
      fVar23 = fVar21;
      if (fVar18 > 0.0 || 0.0 > fVar22) {
        return 0;
      }
    }
    fVar21 = param_2[2];
    fVar8 = param_2[5];
    fVar12 = param_2[8];
    fVar11 = fVar21;
    if (fVar8 <= fVar21) {
      fVar11 = fVar8;
    }
    if (fVar21 <= fVar8) {
      fVar21 = fVar8;
    }
    if (fVar12 <= fVar11) {
      fVar11 = fVar12;
    }
    if (fVar21 <= fVar12) {
      fVar21 = fVar12;
    }
    fVar21 = -param_3[2] - fVar21;
    fVar11 = param_3[2] - fVar11;
    fVar12 = param_5[2];
    fVar8 = fabsf(param_4[2]);
    if (fVar15 <= fVar8) {
      fVar16 = fVar21 * -fVar12;
      fVar12 = fVar11 * -fVar12;
      fVar8 = fVar16;
      if (fVar12 <= fVar16) {
        fVar8 = fVar12;
      }
      if (fVar16 <= fVar12) {
        fVar16 = fVar12;
      }
      if (fVar20 < fVar8) {
        return 0;
      }
      if (fVar16 < fVar23) {
        return 0;
      }
      if (fVar20 <= fVar16) {
        fVar16 = fVar20;
      }
      fVar20 = fVar16;
      if (fVar8 <= fVar23) {
        fVar8 = fVar23;
      }
    }
    else {
      fVar8 = fVar23;
      if (fVar21 > 0.0 || 0.0 > fVar11) {
        return 0;
      }
    }
    pfVar6 = param_2 + 2;
    uVar5 = 0;
    bVar2 = (((fVar14 <= 0.0 && 0.0 <= fVar13) && (fVar17 <= 0.0 && 0.0 <= fVar19)) &&
            (fVar18 <= 0.0 && 0.0 <= fVar22)) && (fVar21 <= 0.0 && 0.0 <= fVar11);
    do {
      while( true ) {
        lVar1 = 0;
        if (uVar5 != 2) {
          lVar1 = uVar5 + 1;
        }
        pfVar4 = param_2 + lVar1 * 3;
        fVar18 = pfVar6[-2];
        fVar14 = *pfVar4;
        fVar19 = pfVar4[1] - pfVar6[-1];
        fVar21 = pfVar4[2] - *pfVar6;
        fVar17 = fVar21 * fVar21 + 0.0;
        fVar13 = fVar8;
        if (fVar15 <= fVar19 * fVar19 + fVar17) {
          fVar16 = -fVar21;
          fVar22 = *param_2 * 0.0 + param_2[1] * fVar16 + fVar19 * param_2[2];
          fVar11 = param_2[3] * 0.0 + param_2[4] * fVar16 + fVar19 * param_2[5];
          fVar12 = param_2[6] * 0.0 + param_2[7] * fVar16 + fVar19 * param_2[8];
          fVar23 = fVar22;
          if (fVar11 <= fVar22) {
            fVar23 = fVar11;
          }
          if (fVar22 <= fVar11) {
            fVar22 = fVar11;
          }
          if (fVar12 <= fVar23) {
            fVar23 = fVar12;
          }
          if (fVar22 <= fVar12) {
            fVar22 = fVar12;
          }
          fVar11 = fabsf(0.0);
          fVar9 = *param_3;
          fVar12 = fabsf(fVar16);
          fVar10 = param_3[1];
          fVar7 = fabsf(fVar19);
          fVar11 = fVar11 * fVar9 + fVar12 * fVar10 + fVar7 * param_3[2];
          fVar23 = fVar11 - fVar23;
          fVar22 = -fVar11 - fVar22;
          fVar12 = *param_4 * 0.0 + param_4[1] * fVar16 + fVar19 * param_4[2];
          bVar2 = (bool)((fVar22 <= 0.0 && 0.0 <= fVar23) & bVar2);
          fVar11 = fabsf(fVar12);
          if (fVar15 <= fVar11) {
            fVar12 = -1.0 / fVar12;
            fVar22 = fVar22 * fVar12;
            fVar23 = fVar23 * fVar12;
            fVar13 = fVar22;
            if (fVar23 <= fVar22) {
              fVar13 = fVar23;
            }
            if (fVar22 <= fVar23) {
              fVar22 = fVar23;
            }
            bVar3 = true;
            if ((fVar13 <= fVar20) && (bVar3 = false, !NAN(fVar22) && !NAN(fVar8))) {
              bVar3 = fVar22 < fVar8;
            }
            if (bVar3) {
              return 0;
            }
            if (fVar20 <= fVar22) {
              fVar22 = fVar20;
            }
            fVar20 = fVar22;
            if (fVar13 <= fVar8) {
              fVar13 = fVar8;
            }
          }
          else if (fVar22 > 0.0 || 0.0 > fVar23) {
            return 0;
          }
        }
        fVar14 = fVar14 - fVar18;
        fVar8 = fVar13;
        if (fVar15 <= fVar14 * fVar14 + fVar17) {
          fVar11 = -fVar14;
          fVar18 = fVar21 * *param_2 + param_2[1] * 0.0 + param_2[2] * fVar11;
          fVar22 = fVar21 * param_2[3] + param_2[4] * 0.0 + param_2[5] * fVar11;
          fVar23 = fVar21 * param_2[6] + param_2[7] * 0.0 + param_2[8] * fVar11;
          fVar17 = fVar18;
          if (fVar22 <= fVar18) {
            fVar17 = fVar22;
          }
          if (fVar18 <= fVar22) {
            fVar18 = fVar22;
          }
          if (fVar23 <= fVar17) {
            fVar17 = fVar23;
          }
          if (fVar18 <= fVar23) {
            fVar18 = fVar23;
          }
          fVar22 = fabsf(fVar21);
          fVar16 = *param_3;
          fVar23 = fabsf(0.0);
          fVar7 = param_3[1];
          fVar12 = fabsf(fVar11);
          fVar22 = fVar22 * fVar16 + fVar23 * fVar7 + fVar12 * param_3[2];
          fVar17 = fVar22 - fVar17;
          fVar18 = -fVar22 - fVar18;
          fVar22 = fVar21 * *param_4 + param_4[1] * 0.0 + param_4[2] * fVar11;
          bVar2 = (bool)((fVar18 <= 0.0 && 0.0 <= fVar17) & bVar2);
          fVar21 = fabsf(fVar22);
          if (fVar15 <= fVar21) {
            fVar22 = -1.0 / fVar22;
            fVar18 = fVar18 * fVar22;
            fVar17 = fVar17 * fVar22;
            fVar8 = fVar18;
            if (fVar17 <= fVar18) {
              fVar8 = fVar17;
            }
            if (fVar18 <= fVar17) {
              fVar18 = fVar17;
            }
            bVar3 = true;
            if ((fVar8 <= fVar20) && (bVar3 = false, !NAN(fVar18) && !NAN(fVar13))) {
              bVar3 = fVar18 < fVar13;
            }
            if (bVar3) {
              return 0;
            }
            if (fVar20 <= fVar18) {
              fVar18 = fVar20;
            }
            fVar20 = fVar18;
            if (fVar8 <= fVar13) {
              fVar8 = fVar13;
            }
          }
          else if (fVar18 > 0.0 || 0.0 > fVar17) {
            return 0;
          }
        }
        if (fVar15 <= fVar14 * fVar14 + fVar19 * fVar19 + 0.0) break;
LAB_0024daa0:
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 3;
        if (2 < uVar5) goto LAB_0024db00;
      }
      fVar19 = -fVar19;
      fVar13 = *param_2 * fVar19 + fVar14 * param_2[1] + param_2[2] * 0.0;
      fVar17 = param_2[3] * fVar19 + fVar14 * param_2[4] + param_2[5] * 0.0;
      fVar21 = param_2[6] * fVar19 + fVar14 * param_2[7] + param_2[8] * 0.0;
      fVar18 = fVar13;
      if (fVar17 <= fVar13) {
        fVar18 = fVar17;
      }
      if (fVar13 <= fVar17) {
        fVar13 = fVar17;
      }
      if (fVar21 <= fVar18) {
        fVar18 = fVar21;
      }
      if (fVar13 <= fVar21) {
        fVar13 = fVar21;
      }
      fVar17 = fabsf(fVar19);
      fVar23 = *param_3;
      fVar21 = fabsf(fVar14);
      fVar11 = param_3[1];
      fVar22 = fabsf(0.0);
      fVar17 = fVar17 * fVar23 + fVar21 * fVar11 + fVar22 * param_3[2];
      fVar18 = fVar17 - fVar18;
      fVar13 = -fVar17 - fVar13;
      fVar17 = *param_4 * fVar19 + fVar14 * param_4[1] + param_4[2] * 0.0;
      bVar2 = (bool)((fVar13 <= 0.0 && 0.0 <= fVar18) & bVar2);
      fVar14 = fabsf(fVar17);
      if (fVar14 < fVar15) {
        if (fVar13 > 0.0 || 0.0 > fVar18) {
          return 0;
        }
        goto LAB_0024daa0;
      }
      fVar17 = -1.0 / fVar17;
      fVar13 = fVar13 * fVar17;
      fVar18 = fVar18 * fVar17;
      fVar14 = fVar13;
      if (fVar18 <= fVar13) {
        fVar14 = fVar18;
      }
      if (fVar13 <= fVar18) {
        fVar13 = fVar18;
      }
      bVar3 = true;
      if ((fVar14 <= fVar20) && (bVar3 = false, !NAN(fVar13) && !NAN(fVar8))) {
        bVar3 = fVar13 < fVar8;
      }
      if (bVar3) {
        return 0;
      }
      if (fVar20 <= fVar13) {
        fVar13 = fVar20;
      }
      fVar20 = fVar13;
      if (fVar14 <= fVar8) {
        fVar14 = fVar8;
      }
      fVar8 = fVar14;
      uVar5 = uVar5 + 1;
      pfVar6 = pfVar6 + 3;
    } while (uVar5 < 3);
LAB_0024db00:
    if (fVar20 < 0.0) {
      return 0;
    }
    if (param_1 < fVar8) {
      return 0;
    }
    if ((0.0 < fVar8) || (fVar8 = 0.0, bVar2)) {
      *param_6 = fVar8;
      return 1;
    }
  }
  return 0;
}


