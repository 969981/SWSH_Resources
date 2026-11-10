/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004eb070; name: FUN_004eb070
 */


void FUN_004eb070(long param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [12])

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  float fVar3;
  undefined4 uVar4;
  float fVar6;
  undefined1 auVar5 [16];
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
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  auVar5 = NEON_fmov(0x3f800000,4);
  fVar7 = auVar5._12_4_;
  auVar1 = *(undefined1 (*) [12])(param_1 + 0xc);
  auVar2 = *param_2;
  fVar19 = *(float *)(param_1 + 0x54);
  fVar29 = *(float *)(param_1 + 0x58);
  fVar16 = auVar1._0_4_ * fVar29;
  fVar17 = auVar1._4_4_ * fVar29;
  fVar18 = auVar1._8_4_ * fVar29;
  fVar29 = fVar29 * 0.0;
  fVar9 = (float)*(undefined8 *)(param_1 + 0x60) * fVar19;
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar19;
  fVar13 = *(float *)(param_1 + 0x68) * fVar19;
  fVar3 = (float)*(undefined8 *)(param_1 + 0x48);
  fVar20 = fVar3 - fVar9;
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20);
  fVar23 = fVar6 - fVar11;
  fVar25 = *(float *)(param_1 + 0x50) - fVar13;
  fVar27 = fVar7 - fVar19 * 0.0;
  fVar9 = fVar9 + fVar3;
  fVar11 = fVar11 + fVar6;
  fVar13 = fVar13 + *(float *)(param_1 + 0x50);
  fVar8 = fVar19 * 0.0 + fVar7;
  fVar30 = fVar20 - fVar16;
  fVar33 = fVar23 - fVar17;
  fVar34 = fVar25 - fVar18;
  fVar35 = fVar27 - fVar29;
  fVar10 = fVar16 + fVar9;
  fVar12 = fVar17 + fVar11;
  fVar14 = fVar18 + fVar13;
  fVar15 = fVar29 + fVar8;
  fVar9 = fVar9 - fVar16;
  fVar11 = fVar11 - fVar17;
  fVar13 = fVar13 - fVar18;
  fVar8 = fVar8 - fVar29;
  fVar16 = fVar16 + fVar20;
  fVar17 = fVar17 + fVar23;
  fVar18 = fVar18 + fVar25;
  fVar29 = fVar29 + fVar27;
  auVar1 = *param_3;
  fVar3 = auVar2._0_4_;
  auVar31._0_4_ = fVar30 - fVar3;
  fVar6 = auVar2._4_4_;
  auVar31._4_4_ = fVar33 - fVar6;
  fVar19 = auVar2._8_4_;
  auVar31._8_4_ = fVar34 - fVar19;
  auVar31._12_4_ = fVar35 - fVar7;
  auVar37._0_4_ = fVar10 - fVar3;
  auVar37._4_4_ = fVar12 - fVar6;
  auVar37._8_4_ = fVar14 - fVar19;
  auVar37._12_4_ = fVar15 - fVar7;
  auVar40._0_4_ = fVar9 - fVar3;
  auVar40._4_4_ = fVar11 - fVar6;
  auVar40._8_4_ = fVar13 - fVar19;
  auVar40._12_4_ = fVar8 - fVar7;
  auVar43._0_4_ = fVar16 - fVar3;
  auVar43._4_4_ = fVar17 - fVar6;
  auVar43._8_4_ = fVar18 - fVar19;
  auVar43._12_4_ = fVar29 - fVar7;
  auVar36 = NEON_ext(auVar31,auVar31,8,1);
  auVar38 = NEON_ext(auVar37,auVar37,8,1);
  auVar41 = NEON_ext(auVar40,auVar40,8,1);
  auVar5 = NEON_ext(auVar43,auVar43,8,1);
  fVar20 = auVar1._0_4_;
  fVar23 = auVar1._4_4_;
  fVar25 = auVar1._8_4_;
  fVar27 = auVar31._0_4_ * fVar20 + auVar31._4_4_ * fVar23 + auVar36._0_4_ * fVar25;
  fVar24 = auVar37._0_4_ * fVar20 + auVar37._4_4_ * fVar23 + auVar38._0_4_ * fVar25;
  fVar26 = auVar40._0_4_ * fVar20 + auVar40._4_4_ * fVar23 + auVar41._0_4_ * fVar25;
  fVar28 = auVar43._0_4_ * fVar20 + auVar43._4_4_ * fVar23 + auVar5._0_4_ * fVar25;
  fVar30 = (fVar30 - fVar20 * fVar27) - fVar3;
  fVar33 = (fVar33 - fVar23 * fVar27) - fVar6;
  fVar34 = (fVar34 - fVar25 * fVar27) - fVar19;
  fVar27 = (fVar35 - fVar27 * 0.0) - fVar7;
  fVar10 = (fVar10 - fVar20 * fVar24) - fVar3;
  fVar12 = (fVar12 - fVar23 * fVar24) - fVar6;
  fVar14 = (fVar14 - fVar25 * fVar24) - fVar19;
  fVar15 = (fVar15 - fVar24 * 0.0) - fVar7;
  fVar9 = (fVar9 - fVar20 * fVar26) - fVar3;
  fVar11 = (fVar11 - fVar23 * fVar26) - fVar6;
  fVar13 = (fVar13 - fVar25 * fVar26) - fVar19;
  fVar8 = (fVar8 - fVar26 * 0.0) - fVar7;
  fVar3 = (fVar16 - fVar20 * fVar28) - fVar3;
  fVar6 = (fVar17 - fVar23 * fVar28) - fVar6;
  fVar19 = (fVar18 - fVar25 * fVar28) - fVar19;
  fVar7 = (fVar29 - fVar28 * 0.0) - fVar7;
  auVar32._0_4_ = fVar30 * fVar30;
  auVar32._4_4_ = fVar33 * fVar33;
  auVar32._8_4_ = fVar34 * fVar34;
  auVar32._12_4_ = fVar27 * fVar27;
  auVar39._0_4_ = fVar10 * fVar10;
  auVar39._4_4_ = fVar12 * fVar12;
  auVar39._8_4_ = fVar14 * fVar14;
  auVar39._12_4_ = fVar15 * fVar15;
  auVar42._0_4_ = fVar9 * fVar9;
  auVar42._4_4_ = fVar11 * fVar11;
  auVar42._8_4_ = fVar13 * fVar13;
  auVar42._12_4_ = fVar8 * fVar8;
  auVar5._0_4_ = fVar3 * fVar3;
  auVar5._4_4_ = fVar6 * fVar6;
  auVar5._8_4_ = fVar19 * fVar19;
  auVar5._12_4_ = fVar7 * fVar7;
  auVar38 = NEON_ext(auVar32,auVar32,8,1);
  auVar41 = NEON_ext(auVar39,auVar39,8,1);
  auVar43 = NEON_ext(auVar42,auVar42,8,1);
  auVar36 = NEON_ext(auVar5,auVar5,8,1);
  auVar38._0_4_ = auVar38._0_4_ + auVar32._4_4_ + auVar32._0_4_;
  auVar38._4_4_ = auVar41._0_4_ + auVar39._4_4_ + auVar39._0_4_;
  auVar38._8_4_ = auVar43._0_4_ + auVar42._4_4_ + auVar42._0_4_;
  auVar38._12_4_ = auVar36._0_4_ + auVar5._4_4_ + auVar5._0_4_;
  auVar5 = NEON_frsqrte(auVar38,4);
  auVar5 = NEON_frecpe(auVar5,4);
  uVar4 = auVar5._0_4_;
  auVar41._4_4_ = uVar4;
  auVar41._0_4_ = uVar4;
  auVar41._8_4_ = uVar4;
  auVar41._12_4_ = uVar4;
  auVar43 = NEON_frecpe(auVar41,4);
  auVar38 = NEON_frecps(auVar41,auVar43,4);
  uVar4 = auVar5._4_4_;
  auVar21._4_4_ = uVar4;
  auVar21._0_4_ = uVar4;
  auVar21._8_4_ = uVar4;
  auVar21._12_4_ = uVar4;
  auVar31 = NEON_frecpe(auVar21,4);
  auVar41 = NEON_frecps(auVar21,auVar31,4);
  uVar4 = auVar5._8_4_;
  auVar22._4_4_ = uVar4;
  auVar22._0_4_ = uVar4;
  auVar22._8_4_ = uVar4;
  auVar22._12_4_ = uVar4;
  auVar36._12_4_ = auVar5._12_4_;
  auVar36._4_4_ = auVar36._12_4_;
  auVar36._0_4_ = auVar36._12_4_;
  auVar36._8_4_ = auVar36._12_4_;
  auVar32 = NEON_frecpe(auVar22,4);
  auVar21 = NEON_frecps(auVar22,auVar32,4);
  auVar22 = NEON_frecpe(auVar36,4);
  auVar5 = NEON_frecps(auVar36,auVar22,4);
  uVar4 = NEON_fminnm(auVar41._0_4_ * auVar31._0_4_ * fVar10 *
                      auVar38._0_4_ * auVar43._0_4_ * fVar30 +
                      auVar41._4_4_ * auVar31._4_4_ * fVar12 *
                      auVar38._4_4_ * auVar43._4_4_ * fVar33 +
                      auVar41._8_4_ * auVar31._8_4_ * fVar14 *
                      auVar38._8_4_ * auVar43._8_4_ * fVar34,
                      auVar5._0_4_ * auVar22._0_4_ * fVar3 * auVar21._0_4_ * auVar32._0_4_ * fVar9 +
                      auVar5._4_4_ * auVar22._4_4_ * fVar6 * auVar21._4_4_ * auVar32._4_4_ * fVar11
                      + auVar5._8_4_ * auVar22._8_4_ * fVar19 *
                        auVar21._8_4_ * auVar32._8_4_ * fVar13);
  fVar3 = (float)NEON_fminnm(uVar4,0x3f800000);
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  acosf(fVar3);
  return;
}


