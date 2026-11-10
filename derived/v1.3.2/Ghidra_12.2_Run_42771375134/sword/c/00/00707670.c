/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00707670; name: FUN_00707670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00707670(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar16 [12];
  undefined8 uVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined8 uVar25;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  float fVar31;
  undefined1 auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  
  lVar9 = *(long *)(param_1 + 0x270);
  *(undefined8 *)(lVar9 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(lVar9 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(lVar9 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(lVar9 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined1 *)(lVar9 + 0xc0) = 1;
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 200) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xd0) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
  *(undefined4 *)(*(long *)(param_1 + 0x270) + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  lVar9 = *(long *)(param_1 + 0x270);
  uVar15 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lVar9 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(lVar9 + 0xe8) = uVar15;
  lVar9 = *(long *)(param_1 + 0x270);
  *(undefined8 *)(lVar9 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
  *(undefined8 *)(lVar9 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  lVar9 = *(long *)(param_1 + 0x270);
  if (*(int *)(lVar9 + 0xdc) == 0) {
    fVar65 = *(float *)(lVar9 + 0xd0) * 0.5;
    fVar59 = fVar65 * *(float *)PTR_Float1Divided2Pi_02715148;
    auVar36._0_4_ = (int)(fVar59 + (float)(-(uint)(0.0 <= fVar59) & 0x80000000 ^ 0xbf000000));
    auVar36._4_4_ = (int)(fVar59 + (float)(-(uint)(0.0 <= fVar59) & 0x80000000 ^ 0xbf000000));
    auVar36._8_4_ = (int)(fVar59 + (float)(-(uint)(0.0 <= fVar59) & 0x80000000 ^ 0xbf000000));
    auVar36._12_4_ = (int)(fVar59 + (float)(-(uint)(0.0 <= fVar59) & 0x80000000 ^ 0xbf000000));
    auVar44 = NEON_scvtf(auVar36,4);
    fVar59 = *(float *)(PTR_SinCoefficients_02715168 + 4);
    fVar13 = *(float *)(PTR_CosCoefficients_02715170 + 4);
    fVar14 = *(float *)PTR_Float2Pi_02715150;
    fVar66 = *(float *)PTR_FloatPiDivided2_02715158;
    fVar22 = *(float *)PTR_FloatPi_02715160;
    fVar53 = *(float *)PTR_SinCoefficients_02715168;
    auVar61._0_4_ = fVar65 - auVar44._0_4_ * fVar14;
    auVar61._4_4_ = fVar65 - auVar44._4_4_ * fVar14;
    auVar61._8_4_ = fVar65 - auVar44._8_4_ * fVar14;
    auVar61._12_4_ = fVar65 - auVar44._12_4_ * fVar14;
    fVar65 = -fVar66;
    auVar20._0_8_ = CONCAT44(-(uint)(fVar66 < auVar61._4_4_),-(uint)(fVar66 < auVar61._0_4_));
    auVar20._8_4_ = -(uint)(fVar66 < auVar61._8_4_);
    auVar20._12_4_ = -(uint)(fVar66 < auVar61._12_4_);
    fVar14 = -fVar22;
    auVar42._0_4_ = fVar22 - auVar61._0_4_;
    auVar42._4_4_ = fVar22 - auVar61._4_4_;
    auVar42._8_4_ = fVar22 - auVar61._8_4_;
    auVar42._12_4_ = fVar22 - auVar61._12_4_;
    auVar60._8_8_ = auVar20._8_8_;
    auVar60._0_8_ = auVar20._0_8_;
    auVar61 = auVar61 ^ (auVar61 ^ auVar42) & auVar60;
    auVar17._0_8_ = CONCAT44(-(uint)(auVar61._4_4_ < fVar65),-(uint)(auVar61._0_4_ < fVar65));
    auVar17._8_4_ = -(uint)(auVar61._8_4_ < fVar65);
    auVar17._12_4_ = -(uint)(auVar61._12_4_ < fVar65);
    auVar43._0_4_ = fVar14 - auVar61._0_4_;
    auVar43._4_4_ = fVar14 - auVar61._4_4_;
    auVar43._8_4_ = fVar14 - auVar61._8_4_;
    auVar43._12_4_ = fVar14 - auVar61._12_4_;
    fVar49 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
    auVar47._8_8_ = auVar17._8_8_;
    auVar47._0_8_ = auVar17._0_8_;
    auVar61 = auVar61 ^ (auVar61 ^ auVar43) & auVar47;
    fVar23 = auVar61._0_4_;
    fVar38 = fVar23 * fVar23;
    fVar29 = auVar61._4_4_;
    fVar55 = fVar29 * fVar29;
    fVar30 = auVar61._8_4_;
    fVar56 = fVar30 * fVar30;
    fVar31 = auVar61._12_4_;
    fVar64 = fVar31 * fVar31;
    fVar66 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
    fVar54 = *(float *)PTR_CosCoefficients_02715170;
    fVar33 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
    fVar65 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
    fVar14 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
    fVar32 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
    auVar36 = NEON_fmov(0xbf800000,4);
    auVar61 = NEON_fmov(0x3f800000,4);
    auVar44 = auVar61 ^ (auVar61 ^ auVar36) & auVar20;
    auVar44 = auVar44 ^ (auVar44 ^ auVar36) & auVar17;
    fVar22 = *(float *)(lVar9 + 200);
    fVar24 = *(float *)(lVar9 + 0xcc);
    auVar26._0_4_ =
         ((auVar61._0_4_ +
          fVar38 * (fVar49 + fVar38 * (fVar65 + fVar38 * (fVar66 + fVar38 * (fVar59 - fVar38 * 
                                                  fVar53))))) * fVar23) /
         ((auVar61._0_4_ +
          fVar38 * (fVar32 + fVar38 * (fVar14 + fVar38 * (fVar33 + fVar38 * (fVar13 - fVar38 * 
                                                  fVar54))))) * auVar44._0_4_);
    auVar26._4_4_ =
         ((auVar61._4_4_ +
          fVar55 * (fVar49 + fVar55 * (fVar65 + fVar55 * (fVar66 + fVar55 * (fVar59 - fVar55 * 
                                                  fVar53))))) * fVar29) /
         ((auVar61._4_4_ +
          fVar55 * (fVar32 + fVar55 * (fVar14 + fVar55 * (fVar33 + fVar55 * (fVar13 - fVar55 * 
                                                  fVar54))))) * auVar44._4_4_);
    auVar26._8_4_ =
         ((auVar61._8_4_ +
          fVar56 * (fVar49 + fVar56 * (fVar65 + fVar56 * (fVar66 + fVar56 * (fVar59 - fVar56 * 
                                                  fVar53))))) * fVar30) /
         ((auVar61._8_4_ +
          fVar56 * (fVar32 + fVar56 * (fVar14 + fVar56 * (fVar33 + fVar56 * (fVar13 - fVar56 * 
                                                  fVar54))))) * auVar44._8_4_);
    auVar26._12_4_ =
         ((auVar61._12_4_ +
          fVar64 * (fVar49 + fVar64 * (fVar65 + fVar64 * (fVar66 + fVar64 * (fVar59 - fVar64 * 
                                                  fVar53))))) * fVar31) /
         ((auVar61._12_4_ +
          fVar64 * (fVar32 + fVar64 * (fVar14 + fVar64 * (fVar33 + fVar64 * (fVar13 - fVar64 * 
                                                  fVar54))))) * auVar44._12_4_);
    fVar32 = -1.0 / (fVar24 - fVar22);
    auVar44 = NEON_frecpe(auVar26,4);
    auVar61 = NEON_frecps(auVar44,auVar26,4);
    auVar51._0_4_ = auVar44._0_4_ * auVar61._0_4_;
    auVar51._4_4_ = auVar44._4_4_ * auVar61._4_4_;
    auVar51._8_4_ = auVar44._8_4_ * auVar61._8_4_;
    auVar51._12_4_ = auVar44._12_4_ * auVar61._12_4_;
    auVar44 = NEON_frecps(auVar51,auVar26,4);
    auVar27._0_4_ = auVar51._0_4_ * auVar44._0_4_;
    auVar27._4_4_ = auVar51._4_4_ * auVar44._4_4_;
    auVar27._8_4_ = auVar51._8_4_ * auVar44._8_4_;
    auVar27._12_4_ = auVar51._12_4_ * auVar44._12_4_;
    fVar59 = auVar27._0_4_ / *(float *)(lVar9 + 0xd4);
    fVar14 = (fVar22 * fVar24 + fVar22 * fVar24) * fVar32;
    auVar44 = NEON_ext(ZEXT816(0),auVar27,4,1);
    fVar66 = 0.0;
    fVar13 = 0.0;
    fVar65 = 0.0;
    auVar61 = NEON_ext(auVar44,auVar44,8,1);
    auVar44._4_4_ = 0xbf800000;
    auVar44._0_4_ = (fVar22 + fVar24) * fVar32;
    auVar44._8_8_ = 0;
  }
  else {
    fVar59 = 1.0 / (*(float *)(lVar9 + 0xe4) - *(float *)(lVar9 + 0xe0));
    fVar13 = -((*(float *)(lVar9 + 0xe0) + *(float *)(lVar9 + 0xe4)) * fVar59);
    fVar65 = 1.0 / (*(float *)(lVar9 + 0xec) - *(float *)(lVar9 + 0xe8));
    fVar59 = fVar59 + fVar59;
    auVar61 = ZEXT416((uint)(fVar65 + fVar65)) << 0x20;
    fVar66 = -1.0 / (*(float *)(lVar9 + 0xcc) - *(float *)(lVar9 + 200));
    fVar65 = -((*(float *)(lVar9 + 0xe8) + *(float *)(lVar9 + 0xec)) * fVar65);
    auVar17 = NEON_fmov(0x3f800000,4);
    fVar14 = (*(float *)(lVar9 + 200) + *(float *)(lVar9 + 0xcc)) * fVar66;
    auVar44 = ZEXT416((uint)(fVar66 + fVar66));
    fVar66 = auVar17._12_4_;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(ulong *)(param_1 + 0xa0) = (ulong)(uint)fVar59;
  *(long *)(param_1 + 0xb8) = auVar61._8_8_;
  *(long *)(param_1 + 0xb0) = auVar61._0_8_;
  *(long *)(param_1 + 200) = auVar44._0_8_;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(float *)(param_1 + 0xd8) = fVar14;
  *(float *)(param_1 + 0xdc) = fVar66;
  *(float *)(param_1 + 0xd0) = fVar13;
  *(float *)(param_1 + 0xd4) = fVar65;
  fVar59 = *(float *)(lVar9 + 0xf8) * fVar59;
  auVar44 = NEON_ext(auVar44 << 0x40,auVar44 << 0x40,8,1);
  fVar29 = 0.0;
  fVar30 = 0.0;
  fVar31 = 0.0;
  fVar32 = *(float *)(lVar9 + 0xfc) * auVar61._4_4_;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  auVar37._0_8_ = CONCAT44(-*(float *)(lVar9 + 0xf4),-*(float *)(lVar9 + 0xf0));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(float *)(param_1 + 0xa0) = fVar59;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(float *)(param_1 + 0xb4) = fVar32;
  auVar37._8_8_ = auVar44._0_8_;
  *(long *)(param_1 + 200) = auVar44._0_8_;
  *(undefined8 *)(param_1 + 0xc0) = auVar37._0_8_;
  if (*(char *)(lVar9 + 0xc0) == '\0') {
    auVar45 = *(undefined1 (*) [16])(lVar9 + 0x60);
    auVar52 = *(undefined1 (*) [16])(lVar9 + 0x70);
    fVar55 = (float)*(undefined8 *)(lVar9 + 0x88);
    fVar56 = (float)((ulong)*(undefined8 *)(lVar9 + 0x88) >> 0x20);
    fVar33 = (float)*(undefined8 *)(lVar9 + 0x80);
    fVar38 = (float)((ulong)*(undefined8 *)(lVar9 + 0x80) >> 0x20);
    fVar49 = *(float *)(lVar9 + 0x90);
    fVar53 = *(float *)(lVar9 + 0x94);
    fVar54 = *(float *)(lVar9 + 0x98);
  }
  else {
    auVar44 = *(undefined1 (*) [16])(lVar9 + 0xa0);
    fVar49 = *(float *)(lVar9 + 0xb0);
    fVar53 = *(float *)(lVar9 + 0xb4);
    fVar54 = *(float *)(lVar9 + 0xb8);
    fVar59 = (float)CONCAT13(auVar44[3] & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12(auVar44[2] & (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11(auVar44[1] & (byte)((ulong)DAT_01d4ab50 >> 8),
                                               auVar44[0] & (byte)DAT_01d4ab50)));
    auVar16._0_8_ =
         CONCAT17(auVar44[7] & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                  CONCAT16(auVar44[6] & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                           CONCAT15(auVar44[5] & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                    CONCAT14(auVar44[4] & (byte)((ulong)DAT_01d4ab50 >> 0x20),fVar59
                                            ))));
    auVar16[8] = auVar44[8] & (byte)DAT_01d4ab58;
    auVar16[9] = auVar44[9] & (byte)((ulong)DAT_01d4ab58 >> 8);
    auVar16[10] = auVar44[10] & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    auVar16[0xb] = auVar44[0xb] & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    auVar18[0xc] = auVar44[0xc] & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    auVar18._0_12_ = auVar16;
    auVar18[0xd] = auVar44[0xd] & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    auVar18[0xe] = auVar44[0xe] & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    auVar18[0xf] = auVar44[0xf] & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar15 = NEON_ext(auVar16._0_8_,auVar16._0_8_,4,1);
    fVar38 = (float)((ulong)uVar15 >> 0x20);
    uVar19 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5188);
    uVar25 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5048);
    uVar50 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
    fVar64 = (float)uVar19;
    fVar10 = (float)((ulong)uVar19 >> 0x20);
    uVar35 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5158);
    uVar19 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
    fVar24 = (float)uVar25 * (float)uVar25;
    fVar29 = (float)((ulong)uVar25 >> 0x20);
    fVar29 = fVar29 * fVar29;
    fVar30 = (float)uVar35;
    fVar31 = (float)((ulong)uVar35 >> 0x20);
    fVar59 = (float)uVar50 * fVar59;
    fVar13 = (float)((ulong)uVar50 >> 0x20) * (float)((ulong)auVar16._0_8_ >> 0x20);
    fVar65 = fVar64 * auVar16._8_4_;
    fVar14 = fVar10 * auVar18._12_4_;
    *(undefined1 *)(lVar9 + 0xc0) = 0;
    fVar23 = auVar44._12_4_;
    fVar66 = (float)uVar19 * fVar23;
    fVar22 = (float)((ulong)uVar19 >> 0x20) * fVar23;
    fVar59 = fVar59 + fVar59;
    fVar13 = fVar13 + fVar13;
    fVar65 = fVar65 + fVar65;
    fVar14 = fVar14 + fVar14;
    fVar33 = (float)uVar15 * (float)uVar15;
    fVar38 = fVar38 * fVar38;
    fVar66 = fVar66 + fVar66;
    fVar22 = fVar22 + fVar22;
    fVar32 = fVar30 * fVar23 + fVar30 * fVar23;
    fVar23 = fVar31 * fVar23 + fVar31 * fVar23;
    fVar55 = fVar59 + fVar66;
    fVar56 = fVar13 + fVar22;
    fVar57 = fVar65 + fVar32;
    fVar58 = fVar14 + fVar23;
    auVar62._0_4_ = fVar59 - fVar66;
    auVar62._4_4_ = fVar13 - fVar22;
    auVar62._8_4_ = fVar65 - fVar32;
    auVar62._12_4_ = fVar14 - fVar23;
    auVar21._0_8_ =
         CONCAT44((float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar29 + fVar29 + fVar38 + fVar38),
                  (float)_DAT_01d4a130 - (fVar24 + fVar24 + fVar33 + fVar33));
    auVar21._8_4_ =
         (float)_UNK_01d4a138 -
         (fVar30 * fVar30 + fVar30 * fVar30 + fVar64 * fVar64 + fVar64 * fVar64);
    auVar21._12_4_ =
         (float)((ulong)_UNK_01d4a138 >> 0x20) -
         (fVar31 * fVar31 + fVar31 * fVar31 + fVar10 * fVar10 + fVar10 * fVar10);
    auVar1._4_4_ = fVar56;
    auVar1._0_4_ = fVar55;
    auVar1._8_4_ = fVar57;
    auVar1._12_4_ = fVar58;
    auVar28._0_8_ = a64_TBL(ZEXT816(0),auVar1,auVar62,DAT_01cd5250);
    auVar2._4_4_ = fVar56;
    auVar2._0_4_ = fVar55;
    auVar2._8_4_ = fVar57;
    auVar2._12_4_ = fVar58;
    uVar15 = a64_TBL(ZEXT816(0),auVar2,auVar62,DAT_01cd51f8);
    auVar3._4_4_ = fVar56;
    auVar3._0_4_ = fVar55;
    auVar3._8_4_ = fVar57;
    auVar3._12_4_ = fVar58;
    uVar19 = a64_TBL(ZEXT816(0),auVar3,auVar62,DAT_01cd5050);
    auVar4._4_4_ = fVar56;
    auVar4._0_4_ = fVar55;
    auVar4._8_4_ = fVar57;
    auVar4._12_4_ = fVar58;
    auVar63._0_8_ = a64_TBL(ZEXT816(0),auVar4,auVar62,DAT_01cd5430);
    auVar28._8_8_ = uVar15;
    auVar63._8_8_ = uVar19;
    auVar5._8_4_ = auVar21._8_4_;
    auVar5._0_8_ = auVar21._0_8_;
    auVar5._12_4_ = auVar21._12_4_;
    auVar45._0_8_ = a64_TBL(ZEXT816(0),auVar5,auVar63,DAT_01cd50b8);
    auVar6._8_4_ = auVar21._8_4_;
    auVar6._0_8_ = auVar21._0_8_;
    auVar6._12_4_ = auVar21._12_4_;
    uVar19 = a64_TBL(ZEXT816(0),auVar6,auVar63,DAT_01cd5308);
    auVar45._8_8_ = uVar19;
    auVar7._8_4_ = auVar21._8_4_;
    auVar7._0_8_ = auVar21._0_8_;
    auVar7._12_4_ = auVar21._12_4_;
    auVar52._0_8_ = a64_TBL(ZEXT816(0),auVar7,auVar63,DAT_01cd5008);
    auVar8._8_4_ = auVar21._8_4_;
    auVar8._0_8_ = auVar21._0_8_;
    auVar8._12_4_ = auVar21._12_4_;
    uVar25 = a64_TBL(ZEXT816(0),auVar8,auVar63,DAT_01cd4fb0);
    auVar52._8_8_ = uVar25;
    uVar15 = a64_TBL(ZEXT816(0),auVar21,auVar28,DAT_01cd50d8);
    fVar33 = (float)uVar15;
    fVar38 = (float)((ulong)uVar15 >> 0x20);
    uVar35 = a64_TBL(ZEXT816(0),auVar21,auVar28,DAT_01cd4fb8);
    *(undefined8 *)(lVar9 + 0x68) = uVar19;
    *(undefined8 *)(lVar9 + 0x60) = auVar45._0_8_;
    *(undefined8 *)(lVar9 + 0x78) = uVar25;
    *(undefined8 *)(lVar9 + 0x70) = auVar52._0_8_;
    fVar55 = (float)uVar35;
    fVar56 = (float)((ulong)uVar35 >> 0x20);
    *(undefined8 *)(lVar9 + 0x88) = uVar35;
    *(undefined8 *)(lVar9 + 0x80) = uVar15;
    *(float *)(lVar9 + 0x98) = fVar54;
    *(undefined4 *)(lVar9 + 0x9c) = *(undefined4 *)(lVar9 + 0xbc);
    *(float *)(lVar9 + 0x90) = fVar49;
    *(float *)(lVar9 + 0x94) = fVar53;
    fVar59 = *(float *)(param_1 + 0xa0);
    fVar29 = *(float *)(param_1 + 0xa4);
    fVar30 = *(float *)(param_1 + 0xa8);
    fVar31 = *(float *)(param_1 + 0xac);
    fVar22 = *(float *)(param_1 + 0xb0);
    fVar32 = *(float *)(param_1 + 0xb4);
    fVar23 = *(float *)(param_1 + 0xb8);
    fVar24 = *(float *)(param_1 + 0xbc);
    auVar37 = *(undefined1 (*) [16])(param_1 + 0xc0);
    fVar13 = *(float *)(param_1 + 0xd0);
    fVar65 = *(float *)(param_1 + 0xd4);
    fVar14 = *(float *)(param_1 + 0xd8);
    fVar66 = *(float *)(param_1 + 0xdc);
  }
  fVar64 = auVar45._0_4_;
  fVar10 = auVar45._4_4_;
  fVar57 = auVar52._0_4_;
  fVar58 = auVar52._4_4_;
  uVar67 = (undefined4)_UNK_01d4b578;
  fVar11 = auVar45._8_4_;
  *(long *)(param_1 + 0x238) = auVar45._8_8_;
  *(long *)(param_1 + 0x230) = auVar45._0_8_;
  *(long *)(param_1 + 0x248) = auVar52._8_8_;
  *(long *)(param_1 + 0x240) = auVar52._0_8_;
  fVar12 = auVar52._8_4_;
  *(ulong *)(param_1 + 600) = CONCAT44(fVar56,fVar55);
  *(ulong *)(param_1 + 0x250) = CONCAT44(fVar38,fVar33);
  *(float *)(param_1 + 0x268) = fVar54;
  *(undefined4 *)(param_1 + 0x26c) = 0x3f800000;
  *(float *)(param_1 + 0x260) = fVar49;
  *(float *)(param_1 + 0x264) = fVar53;
  *(ulong *)(param_1 + 0x68) = (ulong)(uint)fVar33;
  *(ulong *)(param_1 + 0x60) = CONCAT44(fVar57,fVar64);
  *(float *)(param_1 + 0x78) = fVar38;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(float *)(param_1 + 0x70) = fVar10;
  *(float *)(param_1 + 0x74) = fVar58;
  fVar34 = auVar37._0_4_;
  fVar39 = auVar37._4_4_;
  fVar40 = auVar37._8_4_;
  fVar41 = auVar37._12_4_;
  fVar46 = 0.0 - (fVar64 * fVar49 + fVar10 * fVar53 + fVar11 * fVar54 + auVar45._12_4_ * 1.0);
  fVar48 = 0.0 - (fVar57 * fVar49 + fVar58 * fVar53 + fVar12 * fVar54 + auVar52._12_4_ * 1.0);
  fVar49 = 0.0 - (fVar33 * fVar49 + fVar38 * fVar53 + fVar55 * fVar54 + fVar56 * 1.0);
  *(ulong *)(param_1 + 0x88) = CONCAT44(uVar67,fVar55);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar12,fVar11);
  *(float *)(param_1 + 0x98) = fVar49;
  *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
  *(float *)(param_1 + 0x90) = fVar46;
  *(float *)(param_1 + 0x94) = fVar48;
  *(float *)(param_1 + 0xe8) = fVar30 * fVar64 + fVar23 * fVar57 + fVar40 * fVar33 + fVar14 * 0.0;
  *(float *)(param_1 + 0xec) = fVar31 * fVar64 + fVar24 * fVar57 + fVar41 * fVar33 + fVar66 * 0.0;
  *(float *)(param_1 + 0xe0) = fVar59 * fVar64 + fVar22 * fVar57 + fVar34 * fVar33 + fVar13 * 0.0;
  *(float *)(param_1 + 0xe4) = fVar29 * fVar64 + fVar32 * fVar57 + fVar39 * fVar33 + fVar65 * 0.0;
  *(ulong *)(param_1 + 0xf8) =
       CONCAT44(fVar31 * fVar10 + fVar24 * fVar58 + fVar41 * fVar38 + fVar66 * 0.0,
                fVar30 * fVar10 + fVar23 * fVar58 + fVar40 * fVar38 + fVar14 * 0.0);
  *(ulong *)(param_1 + 0xf0) =
       CONCAT44(fVar29 * fVar10 + fVar32 * fVar58 + fVar39 * fVar38 + fVar65 * 0.0,
                fVar59 * fVar10 + fVar22 * fVar58 + fVar34 * fVar38 + fVar13 * 0.0);
  *(float *)(param_1 + 0x108) = fVar30 * fVar11 + fVar23 * fVar12 + fVar40 * fVar55 + fVar14 * 0.0;
  *(float *)(param_1 + 0x10c) = fVar31 * fVar11 + fVar24 * fVar12 + fVar41 * fVar55 + fVar66 * 0.0;
  *(float *)(param_1 + 0x100) = fVar59 * fVar11 + fVar22 * fVar12 + fVar34 * fVar55 + fVar13 * 0.0;
  *(float *)(param_1 + 0x104) = fVar29 * fVar11 + fVar32 * fVar12 + fVar39 * fVar55 + fVar65 * 0.0;
  *(ulong *)(param_1 + 0x118) =
       CONCAT44(fVar31 * fVar46 + fVar24 * fVar48 + fVar41 * fVar49 + fVar66 * 1.0,
                fVar30 * fVar46 + fVar23 * fVar48 + fVar40 * fVar49 + fVar14 * 1.0);
  *(ulong *)(param_1 + 0x110) =
       CONCAT44(fVar29 * fVar46 + fVar32 * fVar48 + fVar39 * fVar49 + fVar65 * 1.0,
                fVar59 * fVar46 + fVar22 * fVar48 + fVar34 * fVar49 + fVar13 * 1.0);
  return;
}


