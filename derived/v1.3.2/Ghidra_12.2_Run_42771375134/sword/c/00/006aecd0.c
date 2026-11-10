/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006aecd0; name: FUN_006aecd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006aecd0(float param_1,long param_2,long param_3,undefined8 *param_4,float *param_5,
                 float *param_6)

{
  int iVar1;
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
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  
  if (param_4 == (undefined8 *)0x0) {
    if (*(float *)(param_2 + 0xd0) <= 0.0) {
      fVar3 = *(float *)(param_2 + 0xc0);
      *(float *)(param_2 + 200) = fVar3;
      *(undefined4 *)(param_2 + 0xcc) = *(undefined4 *)(param_2 + 0xc4);
    }
    else {
      fVar3 = *(float *)(param_2 + 200);
    }
    param_1 = *(float *)(param_2 + 0xd0) + param_1;
    *(float *)(param_2 + 0xd0) = param_1;
    param_1 = param_1 / *(float *)(param_2 + 0xd4);
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    *param_5 = fVar3 * (1.0 - param_1);
    fVar3 = *(float *)(param_2 + 0xcc) * (1.0 - param_1);
    goto LAB_006af5dc;
  }
  *(undefined4 *)(param_2 + 0xd0) = 0;
  iVar1 = *(int *)(*(long *)(*(long *)(param_2 + 8) + 0x128) + 0x40);
  FUN_00723030(param_3,iVar1);
  lVar2 = *(long *)(param_3 + 0x1b8) + (long)iVar1 * 0x130;
  fVar3 = *(float *)(param_3 + 0x60);
  fVar6 = *(float *)(param_3 + 100);
  fVar8 = *(float *)(param_3 + 0x68);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar4 = *(float *)(param_3 + 0x74);
  fVar9 = *(float *)(param_3 + 0x78);
  fVar5 = *(float *)(param_3 + 0x80);
  fVar23 = *(float *)(param_3 + 0x84);
  fVar24 = *(float *)(param_3 + 0x88);
  fVar12 = *(float *)(lVar2 + 0xb0);
  fVar28 = *(float *)(lVar2 + 0xb4);
  fVar31 = *(float *)(lVar2 + 0xb8);
  fVar15 = (float)*(undefined8 *)(lVar2 + 0xa0);
  fVar34 = (float)((ulong)*(undefined8 *)(lVar2 + 0xa0) >> 0x20);
  fVar10 = *(float *)(lVar2 + 0xc0);
  fVar11 = *(float *)(lVar2 + 0xc4);
  fVar13 = *(float *)(lVar2 + 200);
  fVar27 = *(float *)(lVar2 + 0xd0);
  fVar32 = *(float *)(lVar2 + 0xd4);
  fVar33 = *(float *)(lVar2 + 0xd8);
  fVar16 = fVar3 * fVar10 + fVar7 * fVar11 + fVar5 * fVar13;
  fVar17 = fVar6 * fVar10 + fVar4 * fVar11 + fVar23 * fVar13;
  fVar18 = fVar8 * fVar10 + fVar9 * fVar11 + fVar24 * fVar13;
  fVar10 = (float)*(undefined8 *)(lVar2 + 0xa8);
  fVar13 = fVar3 * fVar15 + fVar7 * fVar34 + fVar5 * fVar10;
  fVar14 = fVar6 * fVar15 + fVar4 * fVar34 + fVar23 * fVar10;
  fVar15 = fVar8 * fVar15 + fVar9 * fVar34 + fVar24 * fVar10;
  fVar10 = fVar3 * fVar12 + fVar7 * fVar28 + fVar5 * fVar31;
  fVar11 = fVar6 * fVar12 + fVar4 * fVar28 + fVar23 * fVar31;
  fVar12 = fVar8 * fVar12 + fVar9 * fVar28 + fVar24 * fVar31;
  fVar3 = *(float *)(param_3 + 0x90) + fVar3 * fVar27 + fVar7 * fVar32 + fVar5 * fVar33;
  fVar6 = *(float *)(param_3 + 0x94) + fVar6 * fVar27 + fVar4 * fVar32 + fVar23 * fVar33;
  fVar8 = *(float *)(param_3 + 0x98) + fVar8 * fVar27 + fVar9 * fVar32 + fVar24 * fVar33;
  fVar4 = (float)((ulong)_DAT_01d4a4a0 >> 0x20);
  fVar7 = (float)((ulong)_DAT_01d4b1c0 >> 0x20);
  switch(*(undefined4 *)(param_2 + 0x20)) {
  case 1:
  case 5:
    fVar23 = (float)param_4[1];
    fVar9 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar7 = (0.0 - (fVar13 * fVar3 + fVar14 * fVar6 + fVar15 * fVar8)) +
            fVar13 * fVar9 + fVar14 * fVar5 + fVar15 * fVar23;
    fVar4 = (0.0 - (fVar10 * fVar3 + fVar11 * fVar6 + fVar12 * fVar8)) +
            fVar10 * fVar9 + fVar11 * fVar5 + fVar12 * fVar23;
    fVar3 = (0.0 - (fVar16 * fVar3 + fVar17 * fVar6 + fVar18 * fVar8)) +
            fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar23;
    goto LAB_006af544;
  default:
    fVar23 = (float)param_4[1];
    fVar9 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar4 = (0.0 - (fVar13 * fVar3 + fVar14 * fVar6 + fVar15 * fVar8)) +
            fVar13 * fVar9 + fVar14 * fVar5 + fVar15 * fVar23;
    fVar7 = (0.0 - (fVar10 * fVar3 + fVar11 * fVar6 + fVar12 * fVar8)) +
            fVar10 * fVar9 + fVar11 * fVar5 + fVar12 * fVar23;
    fVar9 = (0.0 - (fVar16 * fVar3 + fVar17 * fVar6 + fVar18 * fVar8)) +
            fVar16 * fVar9 + fVar17 * fVar5 + fVar18 * fVar23;
    goto LAB_006af268;
  case 3:
    fVar5 = (float)param_4[1];
    fVar7 = (float)*param_4;
    fVar9 = (float)((ulong)*param_4 >> 0x20);
    fVar4 = (0.0 - (fVar13 * fVar3 + fVar14 * fVar6 + fVar15 * fVar8)) +
            fVar13 * fVar7 + fVar14 * fVar9 + fVar15 * fVar5;
    fVar23 = (0.0 - (fVar10 * fVar3 + fVar11 * fVar6 + fVar12 * fVar8)) +
             fVar10 * fVar7 + fVar11 * fVar9 + fVar12 * fVar5;
    fVar7 = (0.0 - (fVar16 * fVar3 + fVar17 * fVar6 + fVar18 * fVar8)) +
            fVar16 * fVar7 + fVar17 * fVar9 + fVar18 * fVar5;
    fVar3 = fVar23 * fVar23 + fVar7 * fVar7;
    if (ABS(fVar3) < DAT_01d4c1cc) {
      return;
    }
    fVar8 = SQRT(fVar3);
    fVar6 = fVar4 * fVar4 + fVar3;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar3);
    }
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar5 = 1.0 / fVar5;
    fVar9 = -(fVar23 * (1.0 / fVar8));
    fVar7 = fVar7 * (1.0 / fVar8);
    fVar4 = fVar4 * fVar5;
    break;
  case 4:
  case 8:
    fVar23 = (float)param_4[1];
    fVar4 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar7 = (0.0 - (fVar13 * fVar3 + fVar14 * fVar6 + fVar15 * fVar8)) +
            fVar13 * fVar4 + fVar14 * fVar5 + fVar15 * fVar23;
    fVar9 = (0.0 - (fVar10 * fVar3 + fVar11 * fVar6 + fVar12 * fVar8)) +
            fVar10 * fVar4 + fVar11 * fVar5 + fVar12 * fVar23;
    fVar6 = (0.0 - (fVar16 * fVar3 + fVar17 * fVar6 + fVar18 * fVar8)) +
            fVar16 * fVar4 + fVar17 * fVar5 + fVar18 * fVar23;
    fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
    if (ABS(fVar3) < DAT_01d4c1cc) {
      return;
    }
    fVar8 = SQRT(fVar3);
    fVar4 = fVar6 * fVar6 + fVar3;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar3);
    }
    fVar5 = SQRT(fVar4);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar4);
    }
    fVar5 = 1.0 / fVar5;
    fVar9 = fVar9 * (1.0 / fVar8);
    fVar7 = fVar7 * (1.0 / fVar8);
    fVar4 = -(fVar6 * fVar5);
    break;
  case 7:
    fVar9 = *(float *)PTR_Float1Divided2Pi_02715148;
    fVar5 = (float)_DAT_01d4a920 * fVar9;
    fVar28 = (float)((ulong)_DAT_01d4a920 >> 0x20);
    fVar23 = fVar28 * fVar9;
    fVar24 = (float)_UNK_01d4a928 * fVar9;
    fVar31 = (float)((ulong)_UNK_01d4a928 >> 0x20);
    fVar9 = fVar31 * fVar9;
    fVar27 = *(float *)PTR_Float2Pi_02715150;
    auVar19._0_4_ = (int)(fVar5 + (float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000));
    auVar19._4_4_ = (int)(fVar23 + (float)(-(uint)(0.0 <= fVar23) & 0x80000000 ^ 0xbf000000));
    auVar19._8_4_ = (int)(fVar24 + (float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000));
    auVar19._12_4_ = (int)(fVar9 + (float)(-(uint)(0.0 <= fVar9) & 0x80000000 ^ 0xbf000000));
    auVar22 = NEON_scvtf(auVar19,4);
    auVar44._0_4_ = (float)_DAT_01d4a920 - auVar22._0_4_ * fVar27;
    auVar44._4_4_ = fVar28 - auVar22._4_4_ * fVar27;
    auVar44._8_4_ = (float)_UNK_01d4a928 - auVar22._8_4_ * fVar27;
    auVar44._12_4_ = fVar31 - auVar22._12_4_ * fVar27;
    fVar9 = *(float *)PTR_FloatPiDivided2_02715158;
    fVar23 = *(float *)PTR_FloatPi_02715160;
    fVar5 = -fVar9;
    auVar29._0_8_ = CONCAT44(-(uint)(fVar9 < auVar44._4_4_),-(uint)(fVar9 < auVar44._0_4_));
    auVar29._8_4_ = -(uint)(fVar9 < auVar44._8_4_);
    auVar29._12_4_ = -(uint)(fVar9 < auVar44._12_4_);
    auVar43._8_8_ = auVar29._8_8_;
    auVar43._0_8_ = auVar29._0_8_;
    auVar39._0_4_ = fVar23 - auVar44._0_4_;
    auVar39._4_4_ = fVar23 - auVar44._4_4_;
    auVar39._8_4_ = fVar23 - auVar44._8_4_;
    auVar39._12_4_ = fVar23 - auVar44._12_4_;
    auVar44 = auVar44 ^ (auVar44 ^ auVar39) & auVar43;
    auVar48._0_4_ = -(uint)(auVar44._0_4_ < fVar5);
    auVar48._4_4_ = -(uint)(auVar44._4_4_ < fVar5);
    auVar48._8_4_ = -(uint)(auVar44._8_4_ < fVar5);
    auVar48._12_4_ = -(uint)(auVar44._12_4_ < fVar5);
    fVar23 = -fVar23;
    auVar20._0_4_ = fVar23 - auVar44._0_4_;
    auVar20._4_4_ = fVar23 - auVar44._4_4_;
    auVar20._8_4_ = fVar23 - auVar44._8_4_;
    auVar20._12_4_ = fVar23 - auVar44._12_4_;
    auVar41 = NEON_fmov(0xbf800000,4);
    auVar22 = NEON_fmov(0x3f800000,4);
    auVar47 = auVar22 ^ (auVar22 ^ auVar41) & auVar29;
    auVar47 = auVar47 ^ (auVar47 ^ auVar41) & auVar48;
    fVar36 = *(float *)PTR_SinCoefficients_02715168;
    auVar44 = auVar44 ^ (auVar44 ^ auVar20) & auVar48;
    fVar9 = *(float *)(PTR_SinCoefficients_02715168 + 4);
    fVar33 = auVar44._0_4_;
    fVar28 = fVar33 * fVar33;
    fVar34 = auVar44._4_4_;
    fVar31 = fVar34 * fVar34;
    fVar35 = auVar44._8_4_;
    fVar27 = fVar35 * fVar35;
    fVar42 = auVar44._12_4_;
    fVar32 = fVar42 * fVar42;
    fVar37 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
    fVar5 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
    fVar38 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
    fVar23 = *(float *)(PTR_CosCoefficients_02715170 + 4);
    fVar24 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
    auVar21._0_4_ =
         (auVar22._0_4_ +
         fVar28 * (fVar38 + fVar28 * (fVar5 + fVar28 * (fVar37 + fVar28 * (fVar9 - fVar28 * fVar36))
                                     ))) * fVar33;
    auVar21._4_4_ =
         (auVar22._4_4_ +
         fVar31 * (fVar38 + fVar31 * (fVar5 + fVar31 * (fVar37 + fVar31 * (fVar9 - fVar31 * fVar36))
                                     ))) * fVar34;
    auVar21._8_4_ =
         (auVar22._8_4_ +
         fVar27 * (fVar38 + fVar27 * (fVar5 + fVar27 * (fVar37 + fVar27 * (fVar9 - fVar27 * fVar36))
                                     ))) * fVar35;
    auVar21._12_4_ =
         (auVar22._12_4_ +
         fVar32 * (fVar38 + fVar32 * (fVar5 + fVar32 * (fVar37 + fVar32 * (fVar9 - fVar32 * fVar36))
                                     ))) * fVar42;
    fVar9 = *(float *)PTR_CosCoefficients_02715170;
    fVar5 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
    fVar33 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
    auVar25._0_4_ =
         (auVar22._0_4_ +
         fVar28 * (fVar33 + fVar28 * (fVar24 + fVar28 * (fVar5 + fVar28 * (fVar23 - fVar28 * fVar9))
                                     ))) * auVar47._0_4_;
    auVar25._4_4_ =
         (auVar22._4_4_ +
         fVar31 * (fVar33 + fVar31 * (fVar24 + fVar31 * (fVar5 + fVar31 * (fVar23 - fVar31 * fVar9))
                                     ))) * auVar47._4_4_;
    auVar25._8_4_ =
         (auVar22._8_4_ +
         fVar27 * (fVar33 + fVar27 * (fVar24 + fVar27 * (fVar5 + fVar27 * (fVar23 - fVar27 * fVar9))
                                     ))) * auVar47._8_4_;
    auVar25._12_4_ =
         (auVar22._12_4_ +
         fVar32 * (fVar33 + fVar32 * (fVar24 + fVar32 * (fVar5 + fVar32 * (fVar23 - fVar32 * fVar9))
                                     ))) * auVar47._12_4_;
    auVar22 = NEON_ext(auVar21,auVar21,8,1);
    auVar47 = NEON_ext(auVar25,auVar25,8,1);
    fVar9 = auVar47._0_4_;
    fVar5 = auVar22._0_4_;
    fVar31 = auVar25._4_4_ * fVar9;
    fVar27 = auVar25._4_4_ * fVar5;
    fVar32 = (float)DAT_01cd53f0 * auVar21._4_4_;
    fVar23 = (float)DAT_01cd5070 * auVar25._4_4_;
    fVar42 = fVar5 * auVar25._0_4_ * (float)_DAT_01d4a4a0 + auVar21._4_4_ * fVar9 * auVar21._0_4_;
    fVar36 = fVar9 * auVar25._0_4_ * fVar4 + auVar21._4_4_ * fVar5 * auVar21._0_4_;
    fVar37 = auVar25._0_4_ * 0.0 * (float)_UNK_01d4a4a8 + fVar23 * auVar21._0_4_;
    fVar4 = fVar5 * auVar21._0_4_ * (float)_DAT_01d4b1c0 + auVar21._4_4_ * fVar9 * auVar25._0_4_;
    fVar7 = fVar9 * auVar21._0_4_ * fVar7 + auVar21._4_4_ * fVar5 * auVar25._0_4_;
    fVar9 = auVar21._0_4_ * 0.0 * (float)_UNK_01d4b1c8 + fVar23 * auVar25._0_4_;
    fVar24 = fVar13 * fVar31 + fVar10 * fVar27 + fVar16 * fVar32;
    fVar28 = fVar14 * fVar31 + fVar11 * fVar27 + fVar17 * fVar32;
    fVar31 = fVar15 * fVar31 + fVar12 * fVar27 + fVar18 * fVar32;
    fVar33 = fVar13 * fVar4 + fVar10 * fVar7 + fVar16 * fVar9;
    fVar34 = fVar14 * fVar4 + fVar11 * fVar7 + fVar17 * fVar9;
    fVar35 = fVar15 * fVar4 + fVar12 * fVar7 + fVar18 * fVar9;
    fVar7 = fVar13 * fVar42 + fVar10 * fVar36 + fVar16 * fVar37;
    fVar27 = fVar14 * fVar42 + fVar11 * fVar36 + fVar17 * fVar37;
    fVar32 = fVar15 * fVar42 + fVar12 * fVar36 + fVar18 * fVar37;
    fVar3 = fVar3 + fVar13 * 0.0 + fVar10 * 0.0 + fVar16 * 0.0;
    fVar6 = fVar6 + fVar14 * 0.0 + fVar11 * 0.0 + fVar17 * 0.0;
    fVar8 = fVar8 + fVar15 * 0.0 + fVar12 * 0.0 + fVar18 * 0.0;
    fVar23 = (float)param_4[1];
    fVar9 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar4 = fVar24 * fVar9 + fVar28 * fVar5 + fVar31 * fVar23 +
            (0.0 - (fVar24 * fVar3 + fVar28 * fVar6 + fVar31 * fVar8));
    fVar7 = fVar7 * fVar9 + fVar27 * fVar5 + fVar32 * fVar23 +
            (0.0 - (fVar7 * fVar3 + fVar27 * fVar6 + fVar32 * fVar8));
    fVar9 = fVar33 * fVar9 + fVar34 * fVar5 + fVar35 * fVar23 +
            (0.0 - (fVar33 * fVar3 + fVar34 * fVar6 + fVar35 * fVar8));
LAB_006af268:
    fVar7 = 0.0 - fVar7;
    fVar4 = 0.0 - fVar4;
    fVar9 = 0.0 - fVar9;
    fVar3 = fVar7 * fVar7 + fVar9 * fVar9;
    if (ABS(fVar3) < DAT_01d4c1cc) {
      return;
    }
    fVar8 = SQRT(fVar3);
    fVar6 = fVar4 * fVar4 + fVar3;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar3);
    }
    fVar5 = SQRT(fVar6);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar6);
    }
    fVar5 = 1.0 / fVar5;
    fVar9 = fVar9 * (1.0 / fVar8);
    fVar7 = fVar7 * (1.0 / fVar8);
    fVar4 = -(fVar4 * fVar5);
    break;
  case 9:
    fVar9 = *(float *)PTR_Float1Divided2Pi_02715148;
    fVar5 = (float)_DAT_01d4a760 * fVar9;
    fVar28 = (float)((ulong)_DAT_01d4a760 >> 0x20);
    fVar23 = fVar28 * fVar9;
    fVar24 = (float)_UNK_01d4a768 * fVar9;
    fVar31 = (float)((ulong)_UNK_01d4a768 >> 0x20);
    fVar9 = fVar31 * fVar9;
    fVar27 = *(float *)PTR_Float2Pi_02715150;
    auVar22._0_4_ = (int)(fVar5 + (float)(-(uint)(0.0 <= fVar5) & 0x80000000 ^ 0xbf000000));
    auVar22._4_4_ = (int)(fVar23 + (float)(-(uint)(0.0 <= fVar23) & 0x80000000 ^ 0xbf000000));
    auVar22._8_4_ = (int)(fVar24 + (float)(-(uint)(0.0 <= fVar24) & 0x80000000 ^ 0xbf000000));
    auVar22._12_4_ = (int)(fVar9 + (float)(-(uint)(0.0 <= fVar9) & 0x80000000 ^ 0xbf000000));
    auVar22 = NEON_scvtf(auVar22,4);
    auVar46._0_4_ = (float)_DAT_01d4a760 - auVar22._0_4_ * fVar27;
    auVar46._4_4_ = fVar28 - auVar22._4_4_ * fVar27;
    auVar46._8_4_ = (float)_UNK_01d4a768 - auVar22._8_4_ * fVar27;
    auVar46._12_4_ = fVar31 - auVar22._12_4_ * fVar27;
    fVar9 = *(float *)PTR_FloatPiDivided2_02715158;
    fVar23 = *(float *)PTR_FloatPi_02715160;
    fVar5 = -fVar9;
    auVar30._0_8_ = CONCAT44(-(uint)(fVar9 < auVar46._4_4_),-(uint)(fVar9 < auVar46._0_4_));
    auVar30._8_4_ = -(uint)(fVar9 < auVar46._8_4_);
    auVar30._12_4_ = -(uint)(fVar9 < auVar46._12_4_);
    auVar45._8_8_ = auVar30._8_8_;
    auVar45._0_8_ = auVar30._0_8_;
    auVar40._0_4_ = fVar23 - auVar46._0_4_;
    auVar40._4_4_ = fVar23 - auVar46._4_4_;
    auVar40._8_4_ = fVar23 - auVar46._8_4_;
    auVar40._12_4_ = fVar23 - auVar46._12_4_;
    auVar46 = auVar46 ^ (auVar46 ^ auVar40) & auVar45;
    auVar49._0_4_ = -(uint)(auVar46._0_4_ < fVar5);
    auVar49._4_4_ = -(uint)(auVar46._4_4_ < fVar5);
    auVar49._8_4_ = -(uint)(auVar46._8_4_ < fVar5);
    auVar49._12_4_ = -(uint)(auVar46._12_4_ < fVar5);
    fVar23 = -fVar23;
    auVar47._0_4_ = fVar23 - auVar46._0_4_;
    auVar47._4_4_ = fVar23 - auVar46._4_4_;
    auVar47._8_4_ = fVar23 - auVar46._8_4_;
    auVar47._12_4_ = fVar23 - auVar46._12_4_;
    auVar41 = NEON_fmov(0xbf800000,4);
    auVar22 = NEON_fmov(0x3f800000,4);
    auVar30 = auVar22 ^ (auVar22 ^ auVar41) & auVar30;
    auVar30 = auVar30 ^ (auVar30 ^ auVar41) & auVar49;
    fVar36 = *(float *)PTR_SinCoefficients_02715168;
    auVar46 = auVar46 ^ (auVar46 ^ auVar47) & auVar49;
    fVar9 = *(float *)(PTR_SinCoefficients_02715168 + 4);
    fVar33 = auVar46._0_4_;
    fVar28 = fVar33 * fVar33;
    fVar34 = auVar46._4_4_;
    fVar31 = fVar34 * fVar34;
    fVar35 = auVar46._8_4_;
    fVar27 = fVar35 * fVar35;
    fVar42 = auVar46._12_4_;
    fVar32 = fVar42 * fVar42;
    fVar37 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
    fVar5 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
    fVar38 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
    fVar23 = *(float *)(PTR_CosCoefficients_02715170 + 4);
    fVar24 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
    auVar41._0_4_ =
         (auVar22._0_4_ +
         fVar28 * (fVar38 + fVar28 * (fVar5 + fVar28 * (fVar37 + fVar28 * (fVar9 - fVar28 * fVar36))
                                     ))) * fVar33;
    auVar41._4_4_ =
         (auVar22._4_4_ +
         fVar31 * (fVar38 + fVar31 * (fVar5 + fVar31 * (fVar37 + fVar31 * (fVar9 - fVar31 * fVar36))
                                     ))) * fVar34;
    auVar41._8_4_ =
         (auVar22._8_4_ +
         fVar27 * (fVar38 + fVar27 * (fVar5 + fVar27 * (fVar37 + fVar27 * (fVar9 - fVar27 * fVar36))
                                     ))) * fVar35;
    auVar41._12_4_ =
         (auVar22._12_4_ +
         fVar32 * (fVar38 + fVar32 * (fVar5 + fVar32 * (fVar37 + fVar32 * (fVar9 - fVar32 * fVar36))
                                     ))) * fVar42;
    fVar9 = *(float *)PTR_CosCoefficients_02715170;
    fVar5 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
    fVar33 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
    auVar26._0_4_ =
         (auVar22._0_4_ +
         fVar28 * (fVar33 + fVar28 * (fVar24 + fVar28 * (fVar5 + fVar28 * (fVar23 - fVar28 * fVar9))
                                     ))) * auVar30._0_4_;
    auVar26._4_4_ =
         (auVar22._4_4_ +
         fVar31 * (fVar33 + fVar31 * (fVar24 + fVar31 * (fVar5 + fVar31 * (fVar23 - fVar31 * fVar9))
                                     ))) * auVar30._4_4_;
    auVar26._8_4_ =
         (auVar22._8_4_ +
         fVar27 * (fVar33 + fVar27 * (fVar24 + fVar27 * (fVar5 + fVar27 * (fVar23 - fVar27 * fVar9))
                                     ))) * auVar30._8_4_;
    auVar26._12_4_ =
         (auVar22._12_4_ +
         fVar32 * (fVar33 + fVar32 * (fVar24 + fVar32 * (fVar5 + fVar32 * (fVar23 - fVar32 * fVar9))
                                     ))) * auVar30._12_4_;
    auVar22 = NEON_ext(auVar41,auVar41,8,1);
    auVar47 = NEON_ext(auVar26,auVar26,8,1);
    fVar9 = auVar47._0_4_;
    fVar5 = auVar22._0_4_;
    fVar31 = auVar26._4_4_ * fVar9;
    fVar27 = auVar26._4_4_ * fVar5;
    fVar32 = (float)DAT_01cd53f0 * auVar41._4_4_;
    fVar23 = (float)DAT_01cd5070 * auVar26._4_4_;
    fVar42 = fVar5 * auVar26._0_4_ * (float)_DAT_01d4a4a0 + auVar41._4_4_ * fVar9 * auVar41._0_4_;
    fVar36 = fVar9 * auVar26._0_4_ * fVar4 + auVar41._4_4_ * fVar5 * auVar41._0_4_;
    fVar37 = auVar26._0_4_ * 0.0 * (float)_UNK_01d4a4a8 + fVar23 * auVar41._0_4_;
    fVar4 = fVar5 * auVar41._0_4_ * (float)_DAT_01d4b1c0 + auVar41._4_4_ * fVar9 * auVar26._0_4_;
    fVar7 = fVar9 * auVar41._0_4_ * fVar7 + auVar41._4_4_ * fVar5 * auVar26._0_4_;
    fVar9 = auVar41._0_4_ * 0.0 * (float)_UNK_01d4b1c8 + fVar23 * auVar26._0_4_;
    fVar24 = fVar13 * fVar31 + fVar10 * fVar27 + fVar16 * fVar32;
    fVar28 = fVar14 * fVar31 + fVar11 * fVar27 + fVar17 * fVar32;
    fVar31 = fVar15 * fVar31 + fVar12 * fVar27 + fVar18 * fVar32;
    fVar33 = fVar13 * fVar4 + fVar10 * fVar7 + fVar16 * fVar9;
    fVar34 = fVar14 * fVar4 + fVar11 * fVar7 + fVar17 * fVar9;
    fVar35 = fVar15 * fVar4 + fVar12 * fVar7 + fVar18 * fVar9;
    fVar4 = fVar13 * fVar42 + fVar10 * fVar36 + fVar16 * fVar37;
    fVar27 = fVar14 * fVar42 + fVar11 * fVar36 + fVar17 * fVar37;
    fVar32 = fVar15 * fVar42 + fVar12 * fVar36 + fVar18 * fVar37;
    fVar3 = fVar3 + fVar13 * 0.0 + fVar10 * 0.0 + fVar16 * 0.0;
    fVar6 = fVar6 + fVar14 * 0.0 + fVar11 * 0.0 + fVar17 * 0.0;
    fVar8 = fVar8 + fVar15 * 0.0 + fVar12 * 0.0 + fVar18 * 0.0;
    fVar23 = (float)param_4[1];
    fVar9 = (float)*param_4;
    fVar5 = (float)((ulong)*param_4 >> 0x20);
    fVar7 = 0.0 - (fVar24 * fVar9 + fVar28 * fVar5 + fVar31 * fVar23 +
                  (0.0 - (fVar24 * fVar3 + fVar28 * fVar6 + fVar31 * fVar8)));
    fVar4 = 0.0 - (fVar4 * fVar9 + fVar27 * fVar5 + fVar32 * fVar23 +
                  (0.0 - (fVar4 * fVar3 + fVar27 * fVar6 + fVar32 * fVar8)));
    fVar3 = 0.0 - (fVar33 * fVar9 + fVar34 * fVar5 + fVar35 * fVar23 +
                  (0.0 - (fVar33 * fVar3 + fVar34 * fVar6 + fVar35 * fVar8)));
LAB_006af544:
    fVar6 = fVar7 * fVar7 + fVar3 * fVar3;
    if (ABS(fVar6) < DAT_01d4c1cc) {
      return;
    }
    fVar8 = SQRT(fVar6);
    fVar9 = fVar4 * fVar4 + fVar6;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar6);
    }
    fVar5 = SQRT(fVar9);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar9);
    }
    fVar5 = 1.0 / fVar5;
    fVar9 = -(fVar3 * (1.0 / fVar8));
    fVar7 = fVar7 * (1.0 / fVar8);
    fVar4 = fVar4 * fVar5;
  }
  fVar3 = atan2f(fVar9,fVar7);
  *param_5 = fVar3;
  fVar3 = atan2f(fVar4,fVar8 * fVar5);
LAB_006af5dc:
  *param_6 = fVar3;
  return;
}


