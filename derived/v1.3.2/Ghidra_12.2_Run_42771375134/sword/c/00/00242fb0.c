/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00242fb0; name: FUN_00242fb0
 */


bool FUN_00242fb0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  bool bVar1;
  float fVar2;
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
  
  fVar2 = param_2[1] - param_5[1];
  fVar5 = *param_6;
  fVar6 = param_6[1];
  fVar3 = *param_2 - *param_5;
  fVar4 = param_2[2] - param_5[2];
  fVar7 = param_6[2];
  fVar9 = fVar3 * fVar5 + fVar2 * fVar6 + fVar4 * fVar7;
  if (0.0 < fVar9) {
    fVar11 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (fVar9 < fVar11) {
      fVar9 = fVar9 / fVar11;
      fVar5 = fVar5 * fVar9;
      fVar6 = fVar6 * fVar9;
      fVar7 = fVar7 * fVar9;
    }
    fVar3 = fVar3 - fVar5;
    fVar2 = fVar2 - fVar6;
    fVar4 = fVar4 - fVar7;
  }
  if (fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4 <= param_5[6] * param_5[6]) {
    bVar1 = true;
  }
  else {
    fVar5 = *param_1;
    fVar6 = param_1[1];
    fVar7 = param_1[2];
    fVar4 = *param_5 * fVar5 + param_5[1] * fVar6 + param_5[2] * fVar7;
    fVar3 = fVar5 * param_5[3] + fVar6 * param_5[4] + fVar7 * param_5[5];
    fVar2 = fVar4;
    if (fVar4 <= fVar3) {
      fVar2 = fVar3;
      fVar3 = fVar4;
    }
    fVar6 = sqrtf(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
    fVar7 = *param_2;
    fVar9 = param_2[1];
    fVar3 = fVar3 - fVar6 * param_5[6];
    fVar8 = *param_1;
    fVar10 = param_1[1];
    fVar11 = param_2[2];
    fVar12 = param_1[2];
    fVar13 = fVar7 * fVar8 + fVar9 * fVar10 + fVar11 * fVar12;
    fVar4 = fVar8 * *param_3 + fVar10 * param_3[1] + fVar12 * param_3[2];
    fVar5 = fVar4;
    if (fVar13 <= fVar4) {
      fVar5 = fVar13;
    }
    if (fVar4 <= fVar13) {
      fVar4 = fVar13;
    }
    fVar8 = fVar8 * *param_4 + fVar10 * param_4[1] + fVar12 * param_4[2];
    fVar10 = fVar8;
    if (fVar5 <= fVar8) {
      fVar10 = fVar5;
    }
    if (fVar8 <= fVar4) {
      fVar8 = fVar4;
    }
    bVar1 = true;
    if ((fVar10 <= fVar6 * param_5[6] + fVar2) && (bVar1 = false, !NAN(fVar8) && !NAN(fVar3))) {
      bVar1 = fVar8 < fVar3;
    }
    if (!bVar1) {
      fVar3 = *param_3 - fVar7;
      fVar4 = param_3[1] - fVar9;
      fVar5 = param_3[2] - fVar11;
      fVar6 = param_6[2];
      fVar9 = param_5[1] - fVar9;
      fVar12 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
      fVar7 = *param_5 - fVar7;
      fVar10 = *param_6;
      fVar8 = param_6[1];
      fVar11 = param_5[2] - fVar11;
      fVar13 = fVar3 * fVar10 + fVar4 * fVar8 + fVar5 * fVar6;
      fVar14 = fVar3 * fVar7 + fVar4 * fVar9 + fVar5 * fVar11;
      fVar15 = fVar7 * fVar10 + fVar9 * fVar8 + fVar11 * fVar6;
      fVar16 = fVar12 * param_6[3] - fVar13 * fVar13;
      fVar2 = 0.0;
      if (fVar16 != 0.0) {
        fVar2 = (param_6[3] * fVar14 - fVar15 * fVar13) / fVar16;
      }
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      fVar15 = param_6[4] * (fVar13 * fVar2 - fVar15);
      if (0.0 <= fVar15) {
        if (1.0 < fVar15) {
          fVar2 = (fVar14 + fVar13) / fVar12;
          if (fVar2 <= 0.0) {
            fVar2 = 0.0;
          }
          if (1.0 < fVar2) {
            fVar2 = 1.0;
          }
          fVar15 = 1.0;
        }
      }
      else {
        fVar2 = fVar14 / fVar12;
        fVar15 = 0.0;
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
      }
      fVar7 = (fVar7 + fVar10 * fVar15) - fVar3 * fVar2;
      fVar9 = (fVar9 + fVar8 * fVar15) - fVar4 * fVar2;
      fVar5 = (fVar11 + fVar6 * fVar15) - fVar5 * fVar2;
      fVar4 = param_5[2] * fVar5 + *param_5 * fVar7 + param_5[1] * fVar9;
      fVar3 = fVar7 * param_5[3] + fVar9 * param_5[4] + fVar5 * param_5[5];
      fVar2 = fVar4;
      if (fVar4 <= fVar3) {
        fVar2 = fVar3;
        fVar3 = fVar4;
      }
      fVar11 = sqrtf(fVar5 * fVar5 + fVar7 * fVar7 + fVar9 * fVar9);
      fVar10 = *param_3;
      fVar12 = param_3[1];
      fVar3 = fVar3 - fVar11 * param_5[6];
      fVar8 = fVar7 * *param_2 + fVar9 * param_2[1] + fVar5 * param_2[2];
      fVar13 = param_3[2];
      fVar6 = fVar7 * fVar10 + fVar9 * fVar12 + fVar5 * fVar13;
      fVar4 = fVar6;
      if (fVar8 <= fVar6) {
        fVar4 = fVar8;
      }
      if (fVar6 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar7 = fVar7 * *param_4 + fVar9 * param_4[1] + fVar5 * param_4[2];
      fVar5 = fVar7;
      if (fVar4 <= fVar7) {
        fVar5 = fVar4;
      }
      if (fVar7 <= fVar6) {
        fVar7 = fVar6;
      }
      bVar1 = true;
      if ((fVar5 <= fVar11 * param_5[6] + fVar2) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar3))) {
        bVar1 = fVar7 < fVar3;
      }
      if (!bVar1) {
        fVar3 = *param_4 - fVar10;
        fVar4 = param_4[1] - fVar12;
        fVar5 = param_4[2] - fVar13;
        fVar6 = param_6[2];
        fVar12 = param_5[1] - fVar12;
        fVar11 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
        fVar10 = *param_5 - fVar10;
        fVar9 = *param_6;
        fVar7 = param_6[1];
        fVar13 = param_5[2] - fVar13;
        fVar8 = fVar3 * fVar9 + fVar4 * fVar7 + fVar5 * fVar6;
        fVar14 = fVar3 * fVar10 + fVar4 * fVar12 + fVar5 * fVar13;
        fVar15 = fVar10 * fVar9 + fVar12 * fVar7 + fVar13 * fVar6;
        fVar16 = fVar11 * param_6[3] - fVar8 * fVar8;
        fVar2 = 0.0;
        if (fVar16 != 0.0) {
          fVar2 = (param_6[3] * fVar14 - fVar15 * fVar8) / fVar16;
        }
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        fVar15 = param_6[4] * (fVar8 * fVar2 - fVar15);
        if (0.0 <= fVar15) {
          if (1.0 < fVar15) {
            fVar2 = (fVar14 + fVar8) / fVar11;
            if (fVar2 <= 0.0) {
              fVar2 = 0.0;
            }
            if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            fVar15 = 1.0;
          }
        }
        else {
          fVar2 = fVar14 / fVar11;
          fVar15 = 0.0;
          if (fVar2 <= 0.0) {
            fVar2 = 0.0;
          }
          if (1.0 < fVar2) {
            fVar2 = 1.0;
          }
        }
        fVar9 = (fVar10 + fVar9 * fVar15) - fVar3 * fVar2;
        fVar7 = (fVar12 + fVar7 * fVar15) - fVar4 * fVar2;
        fVar5 = (fVar13 + fVar6 * fVar15) - fVar5 * fVar2;
        fVar4 = param_5[2] * fVar5 + *param_5 * fVar9 + param_5[1] * fVar7;
        fVar3 = fVar9 * param_5[3] + fVar7 * param_5[4] + fVar5 * param_5[5];
        fVar2 = fVar4;
        if (fVar4 <= fVar3) {
          fVar2 = fVar3;
          fVar3 = fVar4;
        }
        fVar11 = sqrtf(fVar5 * fVar5 + fVar9 * fVar9 + fVar7 * fVar7);
        fVar8 = fVar9 * *param_2 + fVar7 * param_2[1] + fVar5 * param_2[2];
        fVar4 = fVar9 * *param_3 + fVar7 * param_3[1] + fVar5 * param_3[2];
        fVar6 = fVar4;
        if (fVar8 <= fVar4) {
          fVar6 = fVar8;
        }
        if (fVar4 <= fVar8) {
          fVar4 = fVar8;
        }
        fVar8 = *param_4;
        fVar10 = param_4[1];
        fVar12 = param_4[2];
        fVar5 = fVar9 * fVar8 + fVar7 * fVar10 + fVar5 * fVar12;
        fVar7 = fVar5;
        if (fVar6 <= fVar5) {
          fVar7 = fVar6;
        }
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
        if (fVar11 * param_5[6] + fVar2 < fVar7) {
          return false;
        }
        if (fVar5 < fVar3 - fVar11 * param_5[6]) {
          return false;
        }
        fVar3 = *param_2 - fVar8;
        fVar4 = param_2[1] - fVar10;
        fVar5 = param_2[2] - fVar12;
        fVar6 = param_6[2];
        fVar10 = param_5[1] - fVar10;
        fVar11 = fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5;
        fVar8 = *param_5 - fVar8;
        fVar9 = *param_6;
        fVar7 = param_6[1];
        fVar12 = param_5[2] - fVar12;
        fVar13 = fVar3 * fVar9 + fVar4 * fVar7 + fVar5 * fVar6;
        fVar14 = fVar3 * fVar8 + fVar4 * fVar10 + fVar5 * fVar12;
        fVar15 = fVar8 * fVar9 + fVar10 * fVar7 + fVar12 * fVar6;
        fVar16 = fVar11 * param_6[3] - fVar13 * fVar13;
        fVar2 = 0.0;
        if (fVar16 != 0.0) {
          fVar2 = (param_6[3] * fVar14 - fVar15 * fVar13) / fVar16;
        }
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (1.0 < fVar2) {
          fVar2 = 1.0;
        }
        fVar15 = param_6[4] * (fVar13 * fVar2 - fVar15);
        if (0.0 <= fVar15) {
          if (1.0 < fVar15) {
            fVar2 = (fVar14 + fVar13) / fVar11;
            if (fVar2 <= 0.0) {
              fVar2 = 0.0;
            }
            if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            fVar15 = 1.0;
          }
        }
        else {
          fVar2 = fVar14 / fVar11;
          fVar15 = 0.0;
          if (fVar2 <= 0.0) {
            fVar2 = 0.0;
          }
          if (1.0 < fVar2) {
            fVar2 = 1.0;
          }
        }
        fVar9 = (fVar8 + fVar9 * fVar15) - fVar3 * fVar2;
        fVar7 = (fVar10 + fVar7 * fVar15) - fVar4 * fVar2;
        fVar5 = (fVar12 + fVar6 * fVar15) - fVar5 * fVar2;
        fVar4 = param_5[2] * fVar5 + *param_5 * fVar9 + param_5[1] * fVar7;
        fVar3 = fVar9 * param_5[3] + fVar7 * param_5[4] + fVar5 * param_5[5];
        fVar2 = fVar4;
        if (fVar4 <= fVar3) {
          fVar2 = fVar3;
          fVar3 = fVar4;
        }
        fVar11 = sqrtf(fVar5 * fVar5 + fVar9 * fVar9 + fVar7 * fVar7);
        fVar8 = fVar9 * *param_2 + fVar7 * param_2[1] + fVar5 * param_2[2];
        fVar4 = fVar9 * *param_3 + fVar7 * param_3[1] + fVar5 * param_3[2];
        fVar6 = fVar4;
        if (fVar8 <= fVar4) {
          fVar6 = fVar8;
        }
        if (fVar4 <= fVar8) {
          fVar4 = fVar8;
        }
        fVar5 = fVar9 * *param_4 + fVar7 * param_4[1] + fVar5 * param_4[2];
        fVar7 = fVar5;
        if (fVar6 <= fVar5) {
          fVar7 = fVar6;
        }
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
        return fVar3 - fVar11 * param_5[6] <= fVar5 && fVar7 <= fVar11 * param_5[6] + fVar2;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


