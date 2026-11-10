/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a726a0; name: FUN_00a726a0
 */


void FUN_00a726a0(long *param_1,int param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  
  fVar13 = (float)*param_3;
  fVar12 = fVar13 * fVar13;
  fVar15 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = fVar15 * fVar15;
  uVar19 = (undefined1)((uint)fVar4 >> 8);
  uVar20 = (undefined1)((uint)fVar4 >> 0x10);
  uVar21 = (undefined1)((uint)fVar4 >> 0x18);
  fVar16 = (float)param_3[1];
  fVar11 = fVar16 * fVar16;
  uVar22 = (undefined1)((uint)fVar11 >> 8);
  uVar23 = (undefined1)((uint)fVar11 >> 0x10);
  uVar24 = (undefined1)((uint)fVar11 >> 0x18);
  fVar18 = (float)((ulong)param_3[1] >> 0x20);
  fVar7 = fVar18 * fVar18;
  uVar25 = (undefined1)((uint)fVar7 >> 8);
  uVar26 = (undefined1)((uint)fVar7 >> 0x10);
  uVar27 = (undefined1)((uint)fVar7 >> 0x18);
  auVar28[4] = SUB41(fVar4,0);
  auVar28._0_4_ = fVar12;
  auVar28[5] = uVar19;
  auVar28[6] = uVar20;
  auVar28[7] = uVar21;
  auVar28[8] = SUB41(fVar11,0);
  auVar28[9] = uVar22;
  auVar28[10] = uVar23;
  auVar28[0xb] = uVar24;
  auVar28[0xc] = SUB41(fVar7,0);
  auVar28[0xd] = uVar25;
  auVar28[0xe] = uVar26;
  auVar28[0xf] = uVar27;
  auVar31[4] = SUB41(fVar4,0);
  auVar31._0_4_ = fVar12;
  auVar31[5] = uVar19;
  auVar31[6] = uVar20;
  auVar31[7] = uVar21;
  auVar31[8] = SUB41(fVar11,0);
  auVar31[9] = uVar22;
  auVar31[10] = uVar23;
  auVar31[0xb] = uVar24;
  auVar31[0xc] = SUB41(fVar7,0);
  auVar31[0xd] = uVar25;
  auVar31[0xe] = uVar26;
  auVar31[0xf] = uVar27;
  auVar28 = NEON_ext(auVar28,auVar31,8,1);
  fVar12 = auVar28._0_4_ + fVar12;
  fVar4 = auVar28._4_4_ + fVar4;
  fVar11 = fVar12 + fVar4;
  fVar12 = fVar12 + fVar4;
  uVar19 = SUB41(fVar12,0);
  uVar20 = (undefined1)((uint)fVar12 >> 8);
  uVar21 = (undefined1)((uint)fVar12 >> 0x10);
  uVar22 = (undefined1)((uint)fVar12 >> 0x18);
  if (fVar11 != 0.0) {
    auVar1[4] = uVar19;
    auVar1._0_4_ = fVar11;
    auVar1[5] = uVar20;
    auVar1[6] = uVar21;
    auVar1[7] = uVar22;
    auVar1[8] = SUB41(fVar11,0);
    auVar1[9] = (char)((uint)fVar11 >> 8);
    auVar1[10] = (char)((uint)fVar11 >> 0x10);
    auVar1[0xb] = (char)((uint)fVar11 >> 0x18);
    auVar1[0xc] = uVar19;
    auVar1[0xd] = uVar20;
    auVar1[0xe] = uVar21;
    auVar1[0xf] = uVar22;
    auVar28 = NEON_frsqrte(auVar1,4);
    auVar30._0_4_ = auVar28._0_4_ * fVar11;
    auVar30._4_4_ = auVar28._4_4_ * fVar12;
    auVar30._8_4_ = auVar28._8_4_ * fVar11;
    uVar2 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar19,fVar11)) >> 0x20);
    auVar30._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2));
    auVar31 = NEON_frsqrts(auVar28,auVar30,4);
    auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
    auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
    auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
    auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
    auVar32._0_4_ = fVar11 * auVar29._0_4_;
    auVar32._4_4_ = fVar12 * auVar29._4_4_;
    auVar32._8_4_ = fVar11 * auVar29._8_4_;
    auVar32._12_4_ = (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2)) * auVar29._12_4_;
    iVar3 = -(uint)(fVar11 == 0.0);
    iVar5 = -(uint)(fVar12 == 0.0);
    iVar6 = -(uint)(fVar11 == 0.0);
    iVar8 = -(uint)((float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2)) == 0.0);
    auVar28 = NEON_frsqrts(auVar29,auVar32,4);
    fVar13 = fVar13 * auVar29._0_4_ * auVar28._0_4_;
    fVar15 = fVar15 * auVar29._4_4_ * auVar28._4_4_;
    fVar16 = fVar16 * auVar29._8_4_ * auVar28._8_4_;
    fVar18 = fVar18 * auVar29._12_4_ * auVar28._12_4_;
    uVar14 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                      CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                               CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                        CONCAT14(SUB41(fVar15,0) & ~(byte)iVar5,
                                                 CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                          ~(byte)((uint)iVar3 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar13 >> 0x10) &
                                                                   ~(byte)((uint)iVar3 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar13 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar3 >> 8),SUB41(fVar13,0) & ~(byte)iVar3)))))));
    uVar17 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                      CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                               CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                        CONCAT14(SUB41(fVar18,0) & ~(byte)iVar8,
                                                 CONCAT13((byte)((uint)fVar16 >> 0x18) &
                                                          ~(byte)((uint)iVar6 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                                                   ~(byte)((uint)iVar6 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar16 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar6 >> 8),SUB41(fVar16,0) & ~(byte)iVar6)))))));
    if (param_2 == 0xff) {
      lVar10 = param_1[0x8f];
      *(undefined8 *)(lVar10 + 0x88) = uVar17;
      *(undefined8 *)(lVar10 + 0x80) = uVar14;
      param_1 = param_1 + 0x90;
    }
    else {
      uVar9 = (**(code **)(*param_1 + 0x748))(param_1);
      if ((uVar9 & 1) == 0) {
        param_1 = param_1 + 0x90;
      }
      else {
        param_1 = param_1 + 0x8f;
      }
    }
    lVar10 = *param_1;
    *(undefined8 *)(lVar10 + 0x88) = uVar17;
    *(undefined8 *)(lVar10 + 0x80) = uVar14;
  }
  return;
}


