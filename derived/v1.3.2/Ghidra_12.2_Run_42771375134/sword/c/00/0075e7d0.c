/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075e7d0; name: FUN_0075e7d0
 */


undefined1  [16] FUN_0075e7d0(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  fVar20 = (float)*param_3;
  fVar24 = (float)*param_2;
  fVar2 = fVar24 * fVar20;
  fVar21 = (float)((ulong)*param_3 >> 0x20);
  fVar25 = (float)((ulong)*param_2 >> 0x20);
  fVar5 = fVar25 * fVar21;
  fVar22 = (float)param_3[1];
  fVar26 = (float)param_2[1];
  fVar6 = fVar26 * fVar22;
  fVar23 = (float)((ulong)param_3[1] >> 0x20);
  fVar27 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = fVar27 * fVar23;
  auVar10._4_4_ = fVar5;
  auVar10._0_4_ = fVar2;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = fVar7;
  auVar1._4_4_ = fVar5;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar7;
  auVar10 = NEON_ext(auVar10,auVar1,8,1);
  fVar5 = auVar10._0_4_ + fVar2 + auVar10._4_4_ + fVar5;
  fVar2 = fVar5;
  if (fVar5 < 0.0) {
    fVar2 = -fVar5;
  }
  fVar6 = 1.0;
  if (fVar5 < 0.0) {
    fVar6 = -1.0;
  }
  if (0.0 <= fVar2) {
    if (DAT_01d4bfe0 < fVar2) {
      fVar7 = 1.0 - fVar2 * fVar2;
      fVar5 = SQRT(fVar7);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar7);
      }
      fVar5 = fVar5 / fVar2;
      fVar7 = fVar5 * fVar5;
      fVar5 = fVar5 * (fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                        fVar7 * (fVar7 * (*(float *)(PTR_AtanCoefficients_02715a60 +
                                                                    0x10) +
                                                         fVar7 * (fVar7 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar7 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar7 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)))
                               - *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      goto LAB_0075ea64;
    }
    fVar8 = 1.0 - fVar2 * fVar2;
    fVar7 = SQRT(fVar8);
    fVar5 = *(float *)PTR_FloatPiDivided2_02715158;
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar7 = fVar2 / fVar7;
  }
  else {
    if (DAT_01d4c778 <= fVar2) {
      fVar8 = 1.0 - fVar2 * fVar2;
      fVar7 = SQRT(fVar8);
      fVar5 = *(float *)PTR_FloatPiDivided2_02715158;
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar7 = -fVar2 / fVar7;
      fVar8 = fVar7 * fVar7;
      fVar5 = fVar5 + fVar7 * (fVar8 * (fVar8 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                                fVar8 * (fVar8 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar8 * (fVar8 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar8 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar8 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                       *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
      goto LAB_0075ea64;
    }
    fVar8 = 1.0 - fVar2 * fVar2;
    fVar7 = SQRT(fVar8);
    fVar5 = *(float *)PTR_FloatPi_02715160;
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar7 = -fVar7 / fVar2;
  }
  fVar8 = fVar7 * fVar7;
  fVar5 = fVar5 - fVar7 * (fVar8 * (fVar8 * (*(float *)(PTR_AtanCoefficients_02715a60 + 0x18) +
                                            fVar8 * (fVar8 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 0x10) +
                                                  fVar8 * (fVar8 * (*(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 8) +
                                                  fVar8 * (*(float *)PTR_AtanCoefficients_02715a60 *
                                                           fVar8 - *(float *)(
                                                  PTR_AtanCoefficients_02715a60 + 4))) -
                                                  *(float *)(PTR_AtanCoefficients_02715a60 + 0xc)))
                                                  - *(float *)(PTR_AtanCoefficients_02715a60 + 0x14)
                                                  )) -
                                   *(float *)(PTR_AtanCoefficients_02715a60 + 0x1c)) + 1.0);
LAB_0075ea64:
  fVar8 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar7 = 0.5;
  if (fVar5 < 0.0) {
    fVar7 = -0.5;
  }
  fVar9 = *(float *)PTR_Float2Pi_02715150;
  fVar15 = fVar5 - fVar9 * (float)(int)(fVar7 + fVar5 * fVar8);
  fVar7 = *(float *)PTR_FloatPiDivided2_02715158;
  if (fVar15 <= fVar7) {
    fVar11 = *(float *)PTR_FloatPi_02715160;
    if (fVar15 < -fVar7) {
      fVar15 = -fVar11 - fVar15;
    }
  }
  else {
    fVar11 = *(float *)PTR_FloatPi_02715160;
    fVar15 = fVar11 - fVar15;
  }
  fVar14 = fVar15 * fVar15;
  fVar16 = *(float *)PTR_SinCoefficients_02715168;
  fVar17 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar19 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar3 = (1.0 - param_1) * fVar5;
  fVar12 = fVar3 * fVar8;
  fVar8 = param_1 * fVar5 * fVar8;
  uVar18 = CONCAT44(-(uint)(0.0 <= fVar8),-(uint)(0.0 <= fVar12)) & 0x8000000080000000 ^
           0xbf000000bf000000;
  uVar13 = NEON_scvtf(CONCAT44((int)(fVar8 + (float)(uVar18 >> 0x20)),(int)(fVar12 + (float)uVar18))
                      ,4);
  fVar3 = fVar3 - (float)uVar13 * fVar9;
  fVar5 = param_1 * fVar5 - (float)((ulong)uVar13 >> 0x20) * fVar9;
  uVar18 = CONCAT44(fVar5,fVar3) ^
           (CONCAT44(fVar5,fVar3) ^ CONCAT44(fVar11 - fVar5,fVar11 - fVar3)) &
           CONCAT44(-(uint)(fVar7 < fVar5),-(uint)(fVar7 < fVar3));
  fVar5 = (float)(uVar18 >> 0x20);
  uVar18 = uVar18 ^ (uVar18 ^ CONCAT44(-fVar11 - fVar5,-fVar11 - (float)uVar18)) &
                    CONCAT44(-(uint)(fVar5 < -fVar7),-(uint)((float)uVar18 < -fVar7));
  fVar5 = (float)uVar18;
  fVar7 = (float)(uVar18 >> 0x20);
  fVar8 = fVar5 * fVar5;
  fVar9 = fVar7 * fVar7;
  fVar11 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar3 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  uVar13 = NEON_fmov(0x3f800000,4);
  fVar15 = 1.0 / (fVar15 * (fVar14 * (fVar14 * (fVar19 + fVar14 * (fVar14 * (fVar17 - fVar16 * 
                                                  fVar14) - *(float *)(PTR_SinCoefficients_02715168
                                                                      + 8))) -
                                     *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0));
  fVar5 = fVar15 * fVar5 * ((float)uVar13 +
                           fVar8 * (fVar3 + fVar8 * (fVar19 + fVar8 * (fVar11 + fVar8 * (fVar17 - 
                                                  fVar8 * fVar16)))));
  if (fVar2 <= 1.0 - *(float *)PTR_FloatQuaternionEpsilon_02715060) {
    fVar6 = fVar15 * fVar6 * fVar7 * ((float)((ulong)uVar13 >> 0x20) +
                                     fVar9 * (fVar3 + fVar9 * (fVar19 + fVar9 * (fVar11 + fVar9 * (
                                                  fVar17 - fVar9 * fVar16)))));
  }
  else {
    fVar6 = fVar6 * param_1;
    fVar5 = 1.0 - param_1;
  }
  auVar4._0_4_ = fVar24 * fVar5 + fVar20 * fVar6;
  auVar4._4_4_ = fVar25 * fVar5 + fVar21 * fVar6;
  auVar4._8_4_ = fVar26 * fVar5 + fVar22 * fVar6;
  auVar4._12_4_ = fVar27 * fVar5 + fVar23 * fVar6;
  return auVar4;
}


