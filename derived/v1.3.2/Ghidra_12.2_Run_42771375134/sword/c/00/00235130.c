/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00235130; name: FUN_00235130
 */


undefined1  [16]
FUN_00235130(float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar9 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  int iVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar28;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  fVar7 = (float)*(undefined8 *)param_1 - *param_3;
  fVar10 = (float)((ulong)*(undefined8 *)param_1 >> 0x20) - param_3[1];
  fVar12 = (float)*(undefined8 *)(param_1 + 2) - param_3[2];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar22 = param_2[2];
  fVar20 = *param_4;
  fVar28 = param_4[1];
  fVar29 = param_4[2];
  fVar8 = fVar7 * fVar20;
  fVar11 = fVar10 * fVar28;
  fVar13 = fVar12 * fVar29;
  fVar14 = ((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) - param_3[3]) * param_4[3];
  auVar21._4_4_ = fVar11;
  auVar21._0_4_ = fVar8;
  auVar21._8_4_ = fVar13;
  auVar21._12_4_ = fVar14;
  auVar24._4_4_ = fVar11;
  auVar24._0_4_ = fVar8;
  auVar24._8_4_ = fVar13;
  auVar24._12_4_ = fVar14;
  auVar21 = NEON_ext(auVar21,auVar24,8,1);
  auVar16._0_4_ = fVar22 * fVar22 + fVar5 * fVar5 + fVar6 * fVar6;
  auVar16._4_4_ = fVar29 * fVar29 + fVar20 * fVar20 + fVar28 * fVar28;
  auVar16._8_4_ = fVar22 * fVar29 + fVar5 * fVar20 + fVar6 * fVar28;
  auVar16._12_4_ = fVar22 * fVar12 + fVar5 * fVar7 + fVar6 * fVar10;
  auVar24 = NEON_frecpe(auVar16,4);
  fVar6 = auVar21._0_4_ + auVar21._4_4_;
  iVar18 = -(uint)(1.1920929e-07 < auVar16._0_4_);
  iVar19 = -(uint)(1.1920929e-07 < auVar16._4_4_);
  fVar5 = fVar8 + fVar11 + fVar6;
  fVar6 = fVar8 + fVar11 + fVar6;
  auVar21 = NEON_frecps(auVar24,auVar16,4);
  auVar25._0_4_ = auVar24._0_4_ * auVar21._0_4_;
  auVar25._4_4_ = auVar24._4_4_ * auVar21._4_4_;
  auVar25._8_4_ = auVar24._8_4_ * auVar21._8_4_;
  auVar25._12_4_ = auVar24._12_4_ * auVar21._12_4_;
  auVar21 = NEON_frecps(auVar25,auVar16,4);
  auVar26._0_4_ = auVar25._0_4_ * auVar21._0_4_;
  auVar26._4_4_ = auVar25._4_4_ * auVar21._4_4_;
  auVar26._8_4_ = auVar25._8_4_ * auVar21._8_4_;
  auVar26._12_4_ = auVar25._12_4_ * auVar21._12_4_;
  auVar21 = NEON_frecps(auVar26,auVar16,4);
  auVar27._0_4_ = auVar26._0_4_ * auVar21._0_4_;
  auVar27._4_4_ = auVar26._4_4_ * auVar21._4_4_;
  auVar27._8_4_ = auVar26._8_4_ * auVar21._8_4_;
  auVar27._12_4_ = auVar26._12_4_ * auVar21._12_4_;
  auVar21 = NEON_frecps(auVar27,auVar16,4);
  fVar22 = auVar27._0_4_ * auVar21._0_4_;
  fVar28 = auVar27._4_4_ * auVar21._4_4_;
  fVar22 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & (byte)((uint)iVar18 >> 0x18),
                           CONCAT12((byte)((uint)fVar22 >> 0x10) & (byte)((uint)iVar18 >> 0x10),
                                    CONCAT11((byte)((uint)fVar22 >> 8) & (byte)((uint)iVar18 >> 8),
                                             SUB41(fVar22,0) & (byte)iVar18)));
  fVar20 = auVar16._0_4_ * auVar16._4_4_ - auVar16._8_4_ * auVar16._8_4_;
  uVar15 = CONCAT44(auVar16._0_4_ * auVar16._4_4_ - auVar16._8_4_ * auVar16._8_4_,fVar20);
  uVar31 = NEON_frecpe(uVar15,4);
  uVar30 = NEON_frecps(uVar15,uVar31,4);
  fVar29 = (float)uVar31 * (float)uVar30;
  fVar7 = (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar30 >> 0x20);
  uVar31 = NEON_frecps(uVar15,CONCAT44(fVar7,fVar29),4);
  fVar29 = fVar29 * (float)uVar31;
  fVar7 = fVar7 * (float)((ulong)uVar31 >> 0x20);
  uVar31 = NEON_frecps(uVar15,CONCAT44(fVar7,fVar29),4);
  fVar29 = fVar29 * (float)uVar31;
  fVar7 = fVar7 * (float)((ulong)uVar31 >> 0x20);
  uVar31 = NEON_frecps(uVar15,CONCAT44(fVar7,fVar29),4);
  fVar29 = fVar29 * (float)uVar31;
  fVar7 = fVar7 * (float)((ulong)uVar31 >> 0x20);
  uVar31 = NEON_frecps(uVar15,CONCAT44(fVar7,fVar29),4);
  uVar15 = NEON_fmov(0x3f800000,4);
  uVar31 = NEON_fmin(CONCAT44((fVar6 * auVar16._8_4_ - auVar16._12_4_ * auVar16._4_4_) *
                              fVar7 * (float)((ulong)uVar31 >> 0x20),
                              (fVar5 * auVar16._8_4_ - auVar16._12_4_ * auVar16._4_4_) *
                              fVar29 * (float)uVar31),uVar15,4);
  iVar18 = -(uint)(fVar20 < 1.1920929e-07);
  uVar23 = NEON_fmax(uVar31,0,4);
  uVar23 = uVar23 ^ (uVar23 ^ 0x3f0000003f000000) & CONCAT44(iVar18,iVar18);
  fVar20 = (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & (byte)((uint)iVar19 >> 0x18),
                            CONCAT16((byte)((uint)fVar28 >> 0x10) & (byte)((uint)iVar19 >> 0x10),
                                     CONCAT15((byte)((uint)fVar28 >> 8) & (byte)((uint)iVar19 >> 8),
                                              CONCAT14(SUB41(fVar28,0) & (byte)iVar19,fVar22)))) >>
                  0x20);
  uVar31 = NEON_fmin(CONCAT44((fVar6 + (float)(uVar23 >> 0x20) * auVar16._8_4_) * fVar20,
                              (fVar5 + (float)uVar23 * auVar16._8_4_) * fVar20),uVar15,4);
  uVar31 = NEON_fmax(uVar31,0,4);
  fVar5 = (float)uVar31;
  uVar15 = NEON_fmin(CONCAT44(((float)((ulong)uVar31 >> 0x20) * auVar16._8_4_ - auVar16._12_4_) *
                              fVar22,(fVar5 * auVar16._8_4_ - auVar16._12_4_) * fVar22),uVar15,4);
  uVar15 = NEON_fmax(uVar15,0,4);
  *param_5 = uVar15;
  *param_6 = uVar31;
  fVar6 = (float)uVar15;
  auVar17._0_4_ = *param_2 * fVar6 + *param_1;
  auVar17._4_4_ = param_2[1] * fVar6 + param_1[1];
  auVar17._8_4_ = param_2[2] * fVar6 + param_1[2];
  auVar17._12_4_ = param_2[3] * fVar6 + param_1[3];
  auVar21 = NEON_ext(auVar17,auVar17,8,1);
  fVar6 = *param_4 * fVar5 + *param_3;
  fVar22 = param_4[1] * fVar5 + param_3[1];
  fVar20 = param_4[2] * fVar5 + param_3[2];
  fVar5 = param_4[3] * fVar5 + param_3[3];
  auVar1._4_4_ = fVar22;
  auVar1._0_4_ = fVar6;
  auVar1._8_4_ = fVar20;
  auVar1._12_4_ = fVar5;
  auVar2._4_4_ = fVar22;
  auVar2._0_4_ = fVar6;
  auVar2._8_4_ = fVar20;
  auVar2._12_4_ = fVar5;
  auVar24 = NEON_ext(auVar1,auVar2,8,1);
  fVar5 = auVar21._0_4_ - auVar24._0_4_;
  fVar6 = (auVar17._0_4_ - fVar6) * (auVar17._0_4_ - fVar6);
  fVar22 = (auVar17._4_4_ - fVar22) * (auVar17._4_4_ - fVar22);
  fVar5 = fVar5 * fVar5;
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar6;
  auVar3._8_4_ = fVar5;
  auVar3._12_4_ = 0;
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar6;
  auVar4._8_4_ = fVar5;
  auVar4._12_4_ = 0;
  auVar21 = NEON_ext(auVar3,auVar4,8,1);
  fVar5 = auVar21._0_4_ + auVar21._4_4_;
  auVar9._4_4_ = fVar6 + fVar22 + fVar5;
  auVar9._0_4_ = fVar6 + fVar22 + fVar5;
  auVar9._8_8_ = 0;
  return auVar9;
}


