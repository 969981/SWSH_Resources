/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f26790; name: FUN_00f26790
 */


/* WARNING: Removing unreachable block (ram,0x00f2686c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f26790(long *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar6;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 uVar7;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 uVar8;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar9;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar10;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 uVar11;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar12;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 uVar13;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 uVar14;
  undefined1 extraout_var_42;
  float fVar15;
  int iVar16;
  undefined1 auVar17 [12];
  float fVar20;
  undefined1 auVar18 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  undefined1 auVar19 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fStack_34;
  
  lVar3 = param_1[0xe];
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x13) = 0;
    (**(code **)(*param_1 + 0xa0))(0);
    *(ulong *)(lVar3 + 0xb8) =
         CONCAT17(extraout_var_40,
                  CONCAT16(extraout_var_37,
                           CONCAT15(extraout_var_34,
                                    CONCAT14(extraout_var_31,
                                             CONCAT13(extraout_var_28,
                                                      CONCAT12(extraout_var_25,
                                                               CONCAT11(extraout_var_22,
                                                                        extraout_var_19)))))));
    *(ulong *)(lVar3 + 0xb0) =
         CONCAT17(extraout_var_17,
                  CONCAT16(extraout_var_15,
                           CONCAT15(extraout_var_13,
                                    CONCAT14(extraout_var_11,
                                             CONCAT13(extraout_var_07,
                                                      CONCAT12(extraout_var_03,
                                                               CONCAT11(extraout_var,extraout_b0))))
                                   )));
    *(undefined1 *)(lVar3 + 0xc0) = 1;
    fVar5 = (float)CONCAT13(extraout_var_28,
                            CONCAT12(extraout_var_25,CONCAT11(extraout_var_22,extraout_var_19)));
    (**(code **)(*param_1 + 0xa0))(SUB41(*(float *)(param_1 + 0x13) + 30.0,0),param_1);
    fStack_34 = (float)(CONCAT17(extraout_var_40,
                                 CONCAT16(extraout_var_37,
                                          CONCAT15(extraout_var_34,CONCAT14(extraout_var_31,fVar5)))
                                ) >> 0x20);
    fVar2 = (float)CONCAT13(extraout_var_08,
                            CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00))) -
            (float)CONCAT13(extraout_var_07,
                            CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0)));
    fVar5 = (float)CONCAT13(extraout_var_29,
                            CONCAT12(extraout_var_26,CONCAT11(extraout_var_23,extraout_var_20))) -
            fVar5;
    fStack_34 = (float)CONCAT13(extraout_var_41,
                                CONCAT12(extraout_var_38,CONCAT11(extraout_var_35,extraout_var_32)))
                - fStack_34;
    uVar6 = 0;
    auVar25._0_4_ = fVar2 * fVar2;
    auVar25._4_4_ = 0;
    auVar25._8_4_ = fVar5 * fVar5;
    auVar25._12_4_ = fStack_34 * fStack_34;
    auVar24 = NEON_ext(auVar25,auVar25,8,1);
    fVar15 = auVar24._0_4_ + auVar25._0_4_;
    fVar20 = auVar24._4_4_ + 0.0;
    fVar4 = fVar15 + fVar20;
    fVar15 = fVar15 + fVar20;
    if (fVar4 != 0.0) {
      auVar18._8_8_ = CONCAT44(fVar15,fVar4);
      auVar18._0_8_ = CONCAT44(fVar15,fVar4);
      auVar25 = NEON_frsqrte(auVar18,4);
      auVar27._0_4_ = auVar25._0_4_ * fVar4;
      auVar27._4_4_ = auVar25._4_4_ * fVar15;
      auVar27._8_4_ = auVar25._8_4_ * fVar4;
      auVar27._12_4_ = auVar25._12_4_ * fVar15;
      auVar24 = NEON_frsqrts(auVar25,auVar27,4);
      auVar26._0_4_ = auVar25._0_4_ * auVar24._0_4_;
      auVar26._4_4_ = auVar25._4_4_ * auVar24._4_4_;
      auVar26._8_4_ = auVar25._8_4_ * auVar24._8_4_;
      auVar26._12_4_ = auVar25._12_4_ * auVar24._12_4_;
      auVar28._0_4_ = fVar4 * auVar26._0_4_;
      auVar28._4_4_ = fVar15 * auVar26._4_4_;
      auVar28._8_4_ = fVar4 * auVar26._8_4_;
      auVar28._12_4_ = fVar15 * auVar26._12_4_;
      iVar16 = -(uint)(fVar4 == 0.0);
      iVar21 = -(uint)(fVar15 == 0.0);
      iVar22 = -(uint)(fVar4 == 0.0);
      iVar23 = -(uint)(fVar15 == 0.0);
      auVar25 = NEON_frsqrts(auVar26,auVar28,4);
      fVar2 = fVar2 * auVar26._0_4_ * auVar25._0_4_;
      fVar4 = auVar26._4_4_ * auVar25._4_4_ * 0.0;
      fVar5 = fVar5 * auVar26._8_4_ * auVar25._8_4_;
      fStack_34 = fStack_34 * auVar26._12_4_ * auVar25._12_4_;
      fVar20 = (float)CONCAT13((byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                               CONCAT12((byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                        CONCAT11((byte)((uint)fVar2 >> 8) &
                                                 ~(byte)((uint)iVar16 >> 8),
                                                 SUB41(fVar2,0) & ~(byte)iVar16)));
      auVar17._0_8_ =
           CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                    CONCAT16((byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                             CONCAT15((byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                      CONCAT14(SUB41(fVar4,0) & ~(byte)iVar21,fVar20))));
      auVar17[8] = SUB41(fVar5,0) & ~(byte)iVar22;
      auVar17[9] = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar22 >> 8);
      auVar17[10] = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10);
      auVar17[0xb] = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18);
      auVar19[0xc] = SUB41(fStack_34,0) & ~(byte)iVar23;
      auVar19._0_12_ = auVar17;
      auVar19[0xd] = (byte)((uint)fStack_34 >> 8) & ~(byte)((uint)iVar23 >> 8);
      auVar19[0xe] = (byte)((uint)fStack_34 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
      auVar19[0xf] = (byte)((uint)fStack_34 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
      fVar5 = fVar20 * (float)_DAT_01d49dc0;
      fVar2 = (float)((ulong)auVar17._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
      uVar6 = (undefined1)((uint)fVar2 >> 8);
      uVar7 = (undefined1)((uint)fVar2 >> 0x10);
      uVar8 = (undefined1)((uint)fVar2 >> 0x18);
      fVar4 = auVar17._8_4_ * (float)_UNK_01d49dc8;
      uVar9 = (undefined1)((uint)fVar4 >> 8);
      uVar10 = (undefined1)((uint)fVar4 >> 0x10);
      uVar11 = (undefined1)((uint)fVar4 >> 0x18);
      fVar15 = auVar19._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
      uVar12 = (undefined1)((uint)fVar15 >> 8);
      uVar13 = (undefined1)((uint)fVar15 >> 0x10);
      uVar14 = (undefined1)((uint)fVar15 >> 0x18);
      auVar24[4] = SUB41(fVar2,0);
      auVar24._0_4_ = fVar5;
      auVar24[5] = uVar6;
      auVar24[6] = uVar7;
      auVar24[7] = uVar8;
      auVar24[8] = SUB41(fVar4,0);
      auVar24[9] = uVar9;
      auVar24[10] = uVar10;
      auVar24[0xb] = uVar11;
      auVar24[0xc] = SUB41(fVar15,0);
      auVar24[0xd] = uVar12;
      auVar24[0xe] = uVar13;
      auVar24[0xf] = uVar14;
      auVar1[4] = SUB41(fVar2,0);
      auVar1._0_4_ = fVar5;
      auVar1[5] = uVar6;
      auVar1[6] = uVar7;
      auVar1[7] = uVar8;
      auVar1[8] = SUB41(fVar4,0);
      auVar1[9] = uVar9;
      auVar1[10] = uVar10;
      auVar1[0xb] = uVar11;
      auVar1[0xc] = SUB41(fVar15,0);
      auVar1[0xd] = uVar12;
      auVar1[0xe] = uVar13;
      auVar1[0xf] = uVar14;
      auVar25 = NEON_ext(auVar24,auVar1,8,1);
      fVar5 = auVar25._0_4_ + fVar5 + auVar25._4_4_ + fVar2;
      uVar6 = 0;
      if (-1.0 <= fVar5) {
        uVar6 = SUB41(fVar5,0);
      }
      FUN_01590400(uVar6);
      uVar6 = SUB41(-(float)CONCAT13(extraout_var_09,
                                     CONCAT12(extraout_var_05,
                                              CONCAT11(extraout_var_01,extraout_b0_01))),0);
      if (0.0 <= fVar20) {
        uVar6 = extraout_b0_01;
      }
    }
    FUN_00a92cd0(uVar6,ZEXT816(0),ZEXT816(0));
    *(undefined1 *)(lVar3 + 0xc0) = 1;
    *(ulong *)(lVar3 + 0xa8) =
         CONCAT17(extraout_var_42,
                  CONCAT16(extraout_var_39,
                           CONCAT15(extraout_var_36,
                                    CONCAT14(extraout_var_33,
                                             CONCAT13(extraout_var_30,
                                                      CONCAT12(extraout_var_27,
                                                               CONCAT11(extraout_var_24,
                                                                        extraout_var_21)))))));
    *(ulong *)(lVar3 + 0xa0) =
         CONCAT17(extraout_var_18,
                  CONCAT16(extraout_var_16,
                           CONCAT15(extraout_var_14,
                                    CONCAT14(extraout_var_12,
                                             CONCAT13(extraout_var_10,
                                                      CONCAT12(extraout_var_06,
                                                               CONCAT11(extraout_var_02,
                                                                        extraout_b0_02)))))));
  }
  return;
}


