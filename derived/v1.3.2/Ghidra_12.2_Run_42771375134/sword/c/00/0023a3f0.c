/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0023a3f0; name: FUN_0023a3f0
 */


undefined8 FUN_0023a3f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float __x;
  float __x_00;
  float fVar22;
  float __x_01;
  float __x_02;
  float __x_03;
  
  fVar14 = *param_1;
  fVar8 = param_1[1];
  fVar20 = param_3[1] - fVar8;
  fVar6 = param_1[2];
  fVar18 = *param_3 - fVar14;
  fVar21 = param_3[2] - fVar6;
  fVar17 = *param_4 - fVar14;
  fVar15 = param_4[1] - fVar8;
  fVar12 = param_4[2] - fVar6;
  fVar2 = *param_5;
  fVar8 = param_5[1] - fVar8;
  __x = fVar17 - fVar18;
  __x_00 = fVar15 - fVar20;
  __x_01 = fVar12 - fVar21;
  fVar6 = param_5[2] - fVar6;
  fVar3 = fabsf(__x);
  fVar4 = fabsf(__x_00);
  fVar5 = fabsf(__x_01);
  fVar7 = fVar20 * __x_01 - fVar21 * __x_00;
  fVar9 = __x_01 * fVar8 - __x_00 * fVar6;
  fVar13 = fVar7;
  if (fVar9 <= fVar7) {
    fVar13 = fVar9;
  }
  if (fVar7 <= fVar9) {
    fVar7 = fVar9;
  }
  fVar9 = fVar5 * param_2[1] + fVar4 * param_2[2];
  fVar19 = -fVar9;
  bVar1 = true;
  if ((fVar13 <= fVar9) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar19))) {
    bVar1 = fVar7 < fVar19;
  }
  if (!bVar1) {
    fVar2 = fVar2 - fVar14;
    fVar13 = fVar21 * __x - fVar18 * __x_01;
    fVar9 = __x * fVar6 - fVar2 * __x_01;
    fVar7 = fVar13;
    if (fVar9 <= fVar13) {
      fVar7 = fVar9;
    }
    if (fVar13 <= fVar9) {
      fVar13 = fVar9;
    }
    fVar5 = fVar3 * param_2[2] + fVar5 * *param_2;
    fVar9 = -fVar5;
    bVar1 = true;
    if ((fVar7 <= fVar5) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar9))) {
      bVar1 = fVar13 < fVar9;
    }
    if (!bVar1) {
      fVar13 = fVar17 * __x_00 - __x * fVar15;
      fVar5 = __x_00 * fVar2 - __x * fVar8;
      fVar7 = fVar13;
      if (fVar5 <= fVar13) {
        fVar7 = fVar5;
      }
      if (fVar13 <= fVar5) {
        fVar13 = fVar5;
      }
      fVar3 = fVar3 * param_2[1] + fVar4 * *param_2;
      fVar4 = -fVar3;
      bVar1 = true;
      if ((fVar7 <= fVar3) && (bVar1 = false, !NAN(fVar13) && !NAN(fVar4))) {
        bVar1 = fVar13 < fVar4;
      }
      if (!bVar1) {
        fVar9 = fVar2 - fVar17;
        fVar19 = fVar6 - fVar12;
        __x_02 = fVar8 - fVar15;
        fVar3 = fabsf(fVar9);
        fVar4 = fabsf(__x_02);
        fVar5 = fabsf(fVar19);
        fVar13 = fVar20 * fVar19 - fVar21 * __x_02;
        fVar14 = fVar8 * fVar19 - __x_02 * fVar6;
        fVar7 = fVar13;
        if (fVar14 <= fVar13) {
          fVar7 = fVar14;
        }
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar14 = fVar5 * param_2[1] + fVar4 * param_2[2];
        if (fVar14 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar14) {
          return 0;
        }
        fVar13 = fVar21 * fVar9 - fVar18 * fVar19;
        fVar14 = fVar9 * fVar6 - fVar2 * fVar19;
        fVar7 = fVar13;
        if (fVar14 <= fVar13) {
          fVar7 = fVar14;
        }
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar5 = fVar3 * param_2[2] + fVar5 * *param_2;
        if (fVar5 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar5) {
          return 0;
        }
        fVar13 = fVar18 * __x_02 - fVar20 * fVar9;
        fVar5 = fVar17 * __x_02 - fVar15 * fVar9;
        fVar7 = fVar13;
        if (fVar5 <= fVar13) {
          fVar7 = fVar5;
        }
        if (fVar13 <= fVar5) {
          fVar13 = fVar5;
        }
        fVar3 = fVar3 * param_2[1] + fVar4 * *param_2;
        if (fVar3 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar3) {
          return 0;
        }
        fVar3 = fVar18 - fVar2;
        __x_03 = fVar20 - fVar8;
        fVar22 = fVar21 - fVar6;
        fVar4 = fabsf(fVar3);
        fVar5 = fabsf(__x_03);
        fVar14 = fabsf(fVar22);
        fVar13 = fVar20 * fVar22 - fVar21 * __x_03;
        fVar10 = fVar15 * fVar22 - fVar12 * __x_03;
        fVar7 = fVar13;
        if (fVar10 <= fVar13) {
          fVar7 = fVar10;
        }
        if (fVar13 <= fVar10) {
          fVar13 = fVar10;
        }
        fVar10 = param_2[1];
        fVar11 = param_2[2];
        fVar16 = fVar14 * fVar10 + fVar5 * fVar11;
        if (fVar16 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar16) {
          return 0;
        }
        fVar13 = fVar21 * fVar3 - fVar18 * fVar22;
        fVar22 = fVar12 * fVar3 - fVar17 * fVar22;
        fVar7 = fVar13;
        if (fVar22 <= fVar13) {
          fVar7 = fVar22;
        }
        if (fVar13 <= fVar22) {
          fVar13 = fVar22;
        }
        fVar22 = *param_2;
        fVar14 = fVar4 * fVar11 + fVar14 * fVar22;
        if (fVar14 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar14) {
          return 0;
        }
        fVar14 = fVar2 * __x_03 - fVar3 * fVar8;
        fVar13 = fVar17 * __x_03 - fVar15 * fVar3;
        fVar7 = fVar13;
        if (fVar14 <= fVar13) {
          fVar7 = fVar14;
        }
        if (fVar13 <= fVar14) {
          fVar13 = fVar14;
        }
        fVar3 = fVar4 * fVar10 + fVar5 * fVar22;
        if (fVar3 < fVar7) {
          return 0;
        }
        if (fVar13 < -fVar3) {
          return 0;
        }
        fVar13 = fVar18;
        if (fVar17 <= fVar18) {
          fVar13 = fVar17;
        }
        fVar7 = fVar18;
        if (fVar18 <= fVar17) {
          fVar7 = fVar17;
        }
        if (fVar2 <= fVar13) {
          fVar13 = fVar2;
        }
        if (fVar7 <= fVar2) {
          fVar7 = fVar2;
        }
        if (fVar22 < fVar13) {
          return 0;
        }
        fVar13 = -fVar22;
        if (fVar7 < fVar13) {
          return 0;
        }
        fVar7 = fVar20;
        if (fVar15 <= fVar20) {
          fVar7 = fVar15;
        }
        fVar2 = fVar20;
        if (fVar20 <= fVar15) {
          fVar2 = fVar15;
        }
        if (fVar8 <= fVar7) {
          fVar7 = fVar8;
        }
        if (fVar2 <= fVar8) {
          fVar2 = fVar8;
        }
        if (fVar10 < fVar7) {
          return 0;
        }
        fVar7 = -fVar10;
        if (fVar2 < fVar7) {
          return 0;
        }
        fVar2 = fVar21;
        if (fVar12 <= fVar21) {
          fVar2 = fVar12;
        }
        fVar3 = fVar21;
        if (fVar21 <= fVar12) {
          fVar3 = fVar12;
        }
        if (fVar6 <= fVar2) {
          fVar2 = fVar6;
        }
        if (fVar3 <= fVar6) {
          fVar3 = fVar6;
        }
        if (fVar11 < fVar2) {
          return 0;
        }
        fVar2 = -fVar11;
        if (fVar3 < fVar2) {
          return 0;
        }
        fVar4 = __x_00 * fVar19 - __x_01 * __x_02;
        fVar5 = __x_01 * fVar9 - __x * fVar19;
        fVar6 = __x * __x_02 - __x_00 * fVar9;
        fVar8 = fVar21 * fVar6 + fVar18 * fVar4 + fVar20 * fVar5;
        fVar3 = fVar13;
        if (fVar4 <= 0.0) {
          fVar3 = fVar22;
        }
        fVar9 = fVar7;
        if (fVar5 <= 0.0) {
          fVar9 = fVar10;
        }
        fVar12 = fVar2;
        if (fVar6 <= 0.0) {
          fVar12 = fVar11;
        }
        if ((fVar6 * fVar12 + fVar5 * fVar9 + fVar4 * fVar3) - fVar8 <= 0.0) {
          if (fVar6 <= 0.0) {
            fVar11 = fVar2;
          }
          if (fVar5 <= 0.0) {
            fVar10 = fVar7;
          }
          if (fVar4 <= 0.0) {
            fVar22 = fVar13;
          }
          if (0.0 <= (fVar6 * fVar11 + fVar5 * fVar10 + fVar4 * fVar22) - fVar8) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


