/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00287c30; name: FUN_00287c30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00287c30(long param_1,long param_2,long param_3,undefined1 (*param_4) [12],float *param_5,
            undefined8 param_6,long param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  ulong uVar12;
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
  float fVar24;
  undefined8 uVar25;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar28;
  undefined1 auVar27 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  int iVar34;
  uint uVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  
  fVar15 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
  fVar16 = (float)*(undefined8 *)*param_4;
  fVar18 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
  fVar22 = fVar16 + fVar16;
  auVar26._12_4_ = 0;
  auVar26._0_12_ = *param_4;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = *param_4;
  auVar26 = NEON_ext(auVar26,auVar4,8,1);
  uVar25 = NEON_ext(CONCAT44(fVar15,fVar15),auVar26._0_8_,4,1);
  fVar15 = fVar15 + fVar15;
  fVar16 = fVar16 * fVar22 + (float)uVar25 * fVar15;
  fVar17 = fVar18 * fVar22 + (float)((ulong)uVar25 >> 0x20) * fVar15;
  fVar18 = (float)*(undefined8 *)(*param_4 + 8) * fVar22 + -fVar18 * fVar15;
  fVar15 = fVar15 * 0.0 + 0.0;
  fVar22 = *(float *)(param_3 + 0x10);
  fVar13 = *(float *)(param_3 + 0x14);
  fVar14 = *(float *)(param_3 + 0x18);
  auVar11 = *(undefined1 (*) [12])(param_4[1] + 4);
  auVar5._4_4_ = fVar17;
  auVar5._0_4_ = fVar16;
  auVar5._8_4_ = fVar18;
  auVar5._12_4_ = fVar15;
  auVar6._4_4_ = fVar17;
  auVar6._0_4_ = fVar16;
  auVar6._8_4_ = fVar18;
  auVar6._12_4_ = fVar15;
  auVar26 = NEON_ext(auVar5,auVar6,8,1);
  uVar25 = NEON_fmov(0xbf800000,4);
  fVar18 = *(float *)(param_2 + 8);
  fVar16 = (fVar16 + (float)uVar25) * fVar18;
  fVar15 = auVar26._0_4_ * fVar18;
  fVar19 = auVar11._0_4_ + fVar16;
  fVar20 = auVar11._4_4_ + fVar17 * fVar18;
  fVar21 = auVar11._8_4_ + fVar15;
  fVar24 = (auVar11._0_4_ - fVar16) - fVar19;
  fVar28 = (auVar11._4_4_ - fVar17 * fVar18) - fVar20;
  fVar29 = (auVar11._8_4_ - fVar15) - fVar21;
  fVar17 = *(float *)(param_1 + 4);
  auVar31._0_4_ = (fVar22 - fVar19) * fVar24;
  auVar31._4_4_ = (fVar13 - fVar20) * fVar28;
  auVar31._8_4_ = (fVar14 - fVar21) * fVar29;
  auVar31._12_4_ = 0;
  auVar26 = NEON_ext(auVar31,auVar31,8,1);
  fVar15 = auVar26._0_4_ + auVar26._4_4_;
  auVar37._0_4_ = fVar24 * fVar24;
  auVar37._4_4_ = fVar28 * fVar28;
  auVar37._8_4_ = fVar29 * fVar29;
  auVar37._12_4_ = 0;
  auVar26 = NEON_ext(auVar37,auVar37,8,1);
  fVar18 = auVar26._0_4_ + auVar26._4_4_;
  fVar16 = auVar37._0_4_ + auVar37._4_4_ + fVar18;
  uVar25 = CONCAT44(auVar37._0_4_ + auVar37._4_4_ + fVar18,fVar16);
  uVar38 = NEON_frecpe(uVar25,4);
  uVar40 = NEON_frecps(uVar25,uVar38,4);
  fVar18 = (float)uVar38 * (float)uVar40;
  fVar39 = (float)((ulong)uVar38 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
  uVar38 = NEON_frecps(uVar25,CONCAT44(fVar39,fVar18),4);
  fVar18 = fVar18 * (float)uVar38;
  fVar39 = fVar39 * (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frecps(uVar25,CONCAT44(fVar39,fVar18),4);
  fVar18 = fVar18 * (float)uVar38;
  fVar39 = fVar39 * (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frecps(uVar25,CONCAT44(fVar39,fVar18),4);
  fVar18 = fVar18 * (float)uVar38;
  fVar39 = fVar39 * (float)((ulong)uVar38 >> 0x20);
  uVar38 = NEON_frecps(uVar25,CONCAT44(fVar39,fVar18),4);
  iVar34 = -(uint)(fVar16 == 0.0);
  uVar25 = NEON_fmov(0x3f800000,4);
  uVar25 = NEON_fmin(CONCAT44((auVar31._0_4_ + auVar31._4_4_ + fVar15) *
                              fVar39 * (float)((ulong)uVar38 >> 0x20),
                              (auVar31._0_4_ + auVar31._4_4_ + fVar15) * fVar18 * (float)uVar38),
                     uVar25,4);
  uVar25 = NEON_fmax(uVar25,0,4);
  fVar30 = (float)(CONCAT13(~(byte)((uint)iVar34 >> 0x18),
                            CONCAT12(~(byte)((uint)iVar34 >> 0x10),
                                     CONCAT11(~(byte)((uint)iVar34 >> 8),~(byte)iVar34))) &
                  (uint)uVar25);
  fVar23 = fVar17 + *(float *)(param_2 + 4);
  fVar33 = fVar23 + *param_5;
  fVar18 = (fVar22 - fVar19) - fVar24 * fVar30;
  fVar39 = (fVar13 - fVar20) - fVar28 * fVar30;
  fVar16 = (fVar14 - fVar21) - fVar29 * fVar30;
  fVar15 = 0.0 - fVar30 * 0.0;
  auVar7._4_4_ = fVar39;
  auVar7._0_4_ = fVar18;
  auVar7._8_4_ = fVar16;
  auVar7._12_4_ = fVar15;
  auVar8._4_4_ = fVar39;
  auVar8._0_4_ = fVar18;
  auVar8._8_4_ = fVar16;
  auVar8._12_4_ = fVar15;
  auVar26 = NEON_ext(auVar7,auVar8,8,1);
  fVar18 = fVar18 * fVar18;
  fVar39 = fVar39 * fVar39;
  fVar16 = auVar26._0_4_ * auVar26._0_4_;
  auVar9._4_4_ = fVar39;
  auVar9._0_4_ = fVar18;
  auVar9._8_4_ = fVar16;
  auVar9._12_4_ = 0;
  auVar10._4_4_ = fVar39;
  auVar10._0_4_ = fVar18;
  auVar10._8_4_ = fVar16;
  auVar10._12_4_ = 0;
  auVar26 = NEON_ext(auVar9,auVar10,8,1);
  fVar15 = auVar26._0_4_ + auVar26._4_4_;
  fVar16 = fVar18 + fVar39 + fVar15;
  fVar15 = fVar18 + fVar39 + fVar15;
  if (fVar16 < fVar33 * fVar33) {
    auVar27._0_4_ = fVar19 + fVar24 * fVar30;
    auVar27._4_4_ = fVar20 + fVar28 * fVar30;
    auVar27._8_4_ = fVar21 + fVar29 * fVar30;
    auVar27._12_4_ = fVar30 * 0.0 + 0.0;
    auVar26 = NEON_ext(auVar27,auVar27,8,1);
    fVar19 = fVar22 - auVar27._0_4_;
    fVar20 = fVar13 - auVar27._4_4_;
    fVar21 = fVar14 - auVar26._0_4_;
    auVar32._0_4_ = fVar19 * fVar19;
    auVar32._4_4_ = fVar20 * fVar20;
    auVar32._8_4_ = fVar21 * fVar21;
    auVar32._12_4_ = 0;
    auVar26 = NEON_ext(auVar32,auVar32,8,1);
    fVar39 = auVar26._0_4_ + auVar26._4_4_;
    fVar18 = auVar32._0_4_ + auVar32._4_4_ + fVar39;
    fVar39 = auVar32._0_4_ + auVar32._4_4_ + fVar39;
    uVar12 = CONCAT44(fVar39,fVar18);
    uVar25 = NEON_frsqrte(uVar12,4);
    fVar24 = (float)uVar25;
    fVar28 = (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar24 * fVar24),uVar12,4);
    fVar24 = fVar24 * (float)uVar25;
    fVar28 = fVar28 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar24 * fVar24),uVar12,4);
    fVar24 = fVar24 * (float)uVar25;
    fVar28 = fVar28 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar24 * fVar24),uVar12,4);
    fVar24 = fVar24 * (float)uVar25;
    fVar28 = fVar28 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar24 * fVar24),uVar12,4);
    uVar36 = CONCAT44(fVar39 * fVar28 * (float)((ulong)uVar25 >> 0x20),
                      fVar18 * fVar24 * (float)uVar25);
    uVar36 = uVar36 ^ (uVar36 ^ uVar12) & CONCAT44(-(uint)(fVar18 == 0.0),-(uint)(fVar18 == 0.0));
    uVar25 = NEON_frecpe(uVar36,4);
    uVar38 = NEON_frecps(uVar36,uVar25,4);
    fVar18 = (float)uVar25 * (float)uVar38;
    fVar39 = (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar38 >> 0x20);
    uVar25 = NEON_frecps(uVar36,CONCAT44(fVar39,fVar18),4);
    fVar18 = fVar18 * (float)uVar25;
    fVar39 = fVar39 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frecps(uVar36,CONCAT44(fVar39,fVar18),4);
    fVar18 = fVar18 * (float)uVar25;
    fVar39 = fVar39 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frecps(uVar36,CONCAT44(fVar39,fVar18),4);
    fVar18 = fVar18 * (float)uVar25;
    uVar25 = NEON_frecps(uVar36,CONCAT44(fVar39 * (float)((ulong)uVar25 >> 0x20),fVar18),4);
    fVar18 = fVar18 * (float)uVar25;
    uVar25 = NEON_frsqrte(CONCAT44(fVar15,fVar16),4);
    fVar39 = (float)uVar25;
    fVar24 = (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar39 * fVar39),CONCAT44(fVar15,fVar16),4);
    fVar39 = fVar39 * (float)uVar25;
    fVar24 = fVar24 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar39 * fVar39),CONCAT44(fVar15,fVar16),4);
    fVar39 = fVar39 * (float)uVar25;
    fVar24 = fVar24 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar39 * fVar39),CONCAT44(fVar15,fVar16),4);
    fVar39 = fVar39 * (float)uVar25;
    fVar24 = fVar24 * (float)((ulong)uVar25 >> 0x20);
    uVar25 = NEON_frsqrts(CONCAT44(fVar24 * fVar24,fVar39 * fVar39),CONCAT44(fVar15,fVar16),4);
    uVar35 = -(uint)(0.0 < (float)uVar36);
    fVar19 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)(fVar19 * fVar18)) & uVar35);
    fVar20 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)(fVar20 * fVar18)) & uVar35);
    fVar21 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)(fVar21 * fVar18)) & uVar35);
    fVar24 = (float)(_UNK_01d4ae5c ^ _UNK_01d4ae5c & uVar35);
    fVar18 = fVar16 * fVar39 * (float)uVar25;
    fVar22 = fVar22 - fVar19 * fVar17;
    fVar13 = fVar13 - fVar20 * fVar17;
    fVar14 = fVar14 - fVar21 * fVar17;
    fVar15 = 0.0 - fVar24 * fVar17;
    auVar2._4_4_ = fVar13;
    auVar2._0_4_ = fVar22;
    auVar2._8_4_ = fVar14;
    auVar2._12_4_ = fVar15;
    auVar3._4_4_ = fVar13;
    auVar3._0_4_ = fVar22;
    auVar3._8_4_ = fVar14;
    auVar3._12_4_ = fVar15;
    auVar26 = NEON_ext(auVar2,auVar3,8,1);
    pfVar1 = (float *)(param_7 + (ulong)*(uint *)(param_7 + 0x1000) * 0x40);
    *(uint *)(param_7 + 0x1000) = *(uint *)(param_7 + 0x1000) + 1;
    pfVar1[2] = fVar21;
    pfVar1[3] = fVar24;
    *pfVar1 = fVar19;
    pfVar1[1] = fVar20;
    *(ulong *)(pfVar1 + 6) = (ulong)auVar26._0_4_;
    *(ulong *)(pfVar1 + 4) = CONCAT44(fVar13,fVar22);
    pfVar1[3] = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)fVar16) & -(uint)(fVar16 == 0.0)) -
                fVar23;
    pfVar1[0xd] = -NAN;
    return 1;
  }
  return 0;
}


