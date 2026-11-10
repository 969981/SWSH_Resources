/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01384df0; name: FUN_01384df0
 */


void FUN_01384df0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  float fVar13;
  ulong uVar12;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar25;
  int iVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar26;
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar5 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
  pfVar6 = (float *)FUN_01020330();
  fVar9 = *pfVar6;
  fVar10 = pfVar6[1];
  pfVar6 = (float *)FUN_01020340(uVar5);
  uVar5 = *(undefined8 *)pfVar6;
  fVar18 = fVar9 + *pfVar6;
  uVar11 = (ulong)(uint)fVar18;
  fVar19 = fVar10 + pfVar6[1];
  uVar12 = (ulong)(uint)fVar19;
  *(undefined2 *)(param_1 + 0x201) = 0;
  fVar14 = DAT_01d4c15c;
  auVar22._0_4_ = fVar18 * fVar18;
  auVar22._4_4_ = 0;
  auVar22._8_4_ = fVar19 * fVar19;
  auVar22._12_4_ = 0;
  auVar29 = NEON_ext(auVar22,auVar22,8,1);
  fVar20 = auVar29._0_4_ + auVar22._0_4_;
  fVar25 = auVar29._4_4_ + 0.0;
  fVar7 = fVar20 + fVar25;
  fVar20 = fVar20 + fVar25;
  uVar8 = CONCAT44(fVar20,fVar7);
  auVar29._8_8_ = uVar8;
  auVar29._0_8_ = uVar8;
  if (1.0 < SQRT(fVar7)) {
    auVar22 = NEON_frsqrte(auVar29,4);
    auVar30._0_4_ = fVar7 * auVar22._0_4_;
    auVar30._4_4_ = fVar20 * auVar22._4_4_;
    auVar30._8_4_ = fVar7 * auVar22._8_4_;
    auVar30._12_4_ = fVar20 * auVar22._12_4_;
    auVar29 = NEON_frsqrts(auVar22,auVar30,4);
    auVar23._0_4_ = auVar22._0_4_ * auVar29._0_4_;
    auVar23._4_4_ = auVar22._4_4_ * auVar29._4_4_;
    auVar23._8_4_ = auVar22._8_4_ * auVar29._8_4_;
    auVar23._12_4_ = auVar22._12_4_ * auVar29._12_4_;
    auVar31._0_4_ = fVar7 * auVar23._0_4_;
    auVar31._4_4_ = fVar20 * auVar23._4_4_;
    auVar31._8_4_ = fVar7 * auVar23._8_4_;
    auVar31._12_4_ = fVar20 * auVar23._12_4_;
    auVar22 = NEON_frsqrts(auVar23,auVar31,4);
    fVar18 = fVar18 * auVar23._0_4_ * auVar22._0_4_;
    fVar25 = auVar23._4_4_ * auVar22._4_4_ * 0.0;
    fVar19 = fVar19 * auVar23._8_4_ * auVar22._8_4_;
    fVar13 = auVar23._12_4_ * auVar22._12_4_ * 0.0;
    iVar21 = -(uint)(fVar7 == 0.0);
    iVar26 = -(uint)(fVar20 == 0.0);
    iVar27 = -(uint)(fVar7 == 0.0);
    iVar28 = -(uint)(fVar20 == 0.0);
    fVar7 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                            CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                     CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar21 >> 8)
                                              ,SUB41(fVar18,0) & ~(byte)iVar21)));
    uVar11 = CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                      CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                               CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                        CONCAT14(SUB41(fVar25,0) & ~(byte)iVar26,fVar7))));
    fVar20 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                             CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                                      CONCAT11((byte)((uint)fVar19 >> 8) &
                                               ~(byte)((uint)iVar27 >> 8),
                                               SUB41(fVar19,0) & ~(byte)iVar27)));
    uVar12 = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                      CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                               CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                        CONCAT14(SUB41(fVar13,0) & ~(byte)iVar28,fVar20))));
    auVar24._0_4_ = fVar7 * fVar7;
    fVar7 = (float)(uVar11 >> 0x20);
    auVar24._4_4_ = fVar7 * fVar7;
    auVar24._8_4_ = fVar20 * fVar20;
    fVar7 = (float)(uVar12 >> 0x20);
    auVar24._12_4_ = fVar7 * fVar7;
    auVar22 = NEON_ext(auVar24,auVar24,8,1);
    uVar8 = (ulong)(uint)(auVar22._0_4_ + auVar24._0_4_ + auVar22._4_4_ + auVar24._4_4_);
  }
  if (DAT_01d4bb98 <= (float)uVar8) {
    fVar7 = (float)uVar5;
    auVar15._0_4_ = fVar7 * fVar7;
    fVar7 = (float)((ulong)uVar5 >> 0x20);
    auVar15._4_4_ = fVar7 * fVar7;
    auVar15._8_8_ = 0;
    auVar22 = NEON_ext(auVar15,auVar15,8,1);
    fVar9 = fVar9 * fVar9;
    fVar10 = fVar10 * fVar10;
    auVar1._4_4_ = fVar10;
    auVar1._0_4_ = fVar9;
    auVar1._8_8_ = 0;
    auVar2._4_4_ = fVar10;
    auVar2._0_4_ = fVar9;
    auVar2._8_8_ = 0;
    auVar29 = NEON_ext(auVar1,auVar2,8,1);
    fVar18 = (float)*(undefined8 *)(param_1 + 0x1d8);
    fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
    fVar7 = (float)*(undefined8 *)(param_1 + 0x1d0);
    fVar20 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20);
    *(bool *)(param_1 + 0x201) = DAT_01d4c15c < SQRT(auVar29._0_4_ + fVar9 + auVar29._4_4_ + fVar10)
    ;
    auVar16._0_4_ = fVar7 * fVar7;
    auVar16._4_4_ = fVar20 * fVar20;
    auVar16._8_4_ = fVar18 * fVar18;
    auVar16._12_4_ = fVar19 * fVar19;
    *(bool *)(param_1 + 0x202) =
         fVar14 < SQRT(auVar22._0_4_ + auVar15._0_4_ + auVar22._4_4_ + auVar15._4_4_);
    auVar22 = NEON_ext(auVar16,auVar16,8,1);
    fVar14 = (float)uVar11 - fVar7;
    fVar9 = (float)(uVar11 >> 0x20) - fVar20;
    fVar10 = (float)uVar12 - fVar18;
    fVar25 = (float)(uVar12 >> 0x20) - fVar19;
    if (auVar22._0_4_ + auVar16._0_4_ + auVar22._4_4_ + auVar16._4_4_ < DAT_01d4c62c) {
      *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar19 + fVar25 * 0.5,fVar18 + fVar10 * 0.5);
      *(ulong *)(param_1 + 0x1d0) = CONCAT44(fVar20 + fVar9 * 0.5,fVar7 + fVar14 * 0.5);
      *(float *)(param_1 + 0xd8) =
           *(float *)(param_1 + 0xd8) +
           ((*(float *)(param_1 + 0x1b0) + 0.0 + *(float *)(param_1 + 0x1b4) +
            *(float *)(param_1 + 0x1b8)) / 3.0) * 0.5;
      return;
    }
    fVar7 = SQRT((float)uVar8);
    fVar20 = fVar14 * fVar7 * 0.8;
    fVar9 = fVar9 * fVar7 * 0.8;
    fVar10 = fVar10 * fVar7 * 0.8;
    fVar7 = fVar25 * fVar7 * 0.8;
    auVar17._0_4_ = fVar20 * fVar20;
    auVar17._4_4_ = fVar9 * fVar9;
    auVar17._8_4_ = fVar10 * fVar10;
    auVar17._12_4_ = fVar7 * fVar7;
    auVar22 = NEON_ext(auVar17,auVar17,8,1);
    fVar14 = auVar22._0_4_ + auVar17._0_4_ + auVar22._4_4_ + auVar17._4_4_;
    if (DAT_01d4c76c < fVar14) {
      fVar18 = DAT_01d4c034 / SQRT(fVar14);
      fVar14 = fVar20 * fVar18 * fVar20 * fVar18;
      fVar20 = fVar9 * fVar18 * fVar9 * fVar18;
      fVar9 = fVar10 * fVar18 * fVar10 * fVar18;
      fVar7 = fVar7 * fVar18 * fVar7 * fVar18;
      auVar3._4_4_ = fVar20;
      auVar3._0_4_ = fVar14;
      auVar3._8_4_ = fVar9;
      auVar3._12_4_ = fVar7;
      auVar4._4_4_ = fVar20;
      auVar4._0_4_ = fVar14;
      auVar4._8_4_ = fVar9;
      auVar4._12_4_ = fVar7;
      auVar22 = NEON_ext(auVar3,auVar4,8,1);
      fVar14 = auVar22._0_4_ + fVar14 + auVar22._4_4_ + fVar20;
    }
    *(float *)(param_1 + 0xd8) = *(float *)(param_1 + 0xd8) + SQRT(fVar14);
  }
  *(ulong *)(param_1 + 0x1d8) = uVar12;
  *(ulong *)(param_1 + 0x1d0) = uVar11;
  return;
}


