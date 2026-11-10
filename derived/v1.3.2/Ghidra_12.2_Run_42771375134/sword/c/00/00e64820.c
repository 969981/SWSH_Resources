/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e64820; name: FUN_00e64820
 */


/* WARNING: Removing unreachable block (ram,0x00e64948) */
/* WARNING: Removing unreachable block (ram,0x00e649e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00e64820(long param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_08;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 extraout_var_16;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 auVar17 [16];
  undefined1 extraout_var_01;
  undefined1 extraout_var_04;
  undefined1 extraout_var_07;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 auVar18 [16];
  float fVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  float fVar39;
  undefined1 auVar33 [16];
  int iVar40;
  int iVar41;
  int iVar42;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar48;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  lVar11 = *(long *)(param_1 + 0x70);
  fVar15 = *param_2 - (float)*(undefined8 *)(lVar11 + 0xb0);
  fVar14 = param_2[1] - (float)((ulong)*(undefined8 *)(lVar11 + 0xb0) >> 0x20);
  fVar13 = param_2[2] - (float)*(undefined8 *)(lVar11 + 0xb8);
  fVar29 = param_2[3] - (float)((ulong)*(undefined8 *)(lVar11 + 0xb8) >> 0x20);
  auVar44._0_4_ = fVar15 * fVar15;
  auVar44._4_4_ = fVar14 * fVar14;
  auVar44._8_4_ = fVar13 * fVar13;
  auVar44._12_4_ = fVar29 * fVar29;
  auVar43 = NEON_ext(auVar44,auVar44,8,1);
  fVar27 = auVar43._0_4_ + auVar44._0_4_;
  fVar39 = auVar43._4_4_ + auVar44._4_4_;
  fVar12 = fVar27 + fVar39;
  fVar27 = fVar27 + fVar39;
  if (fVar12 == 0.0) {
    FUN_00ac7ad0(lVar11 + 0xa0);
    auVar18[1] = extraout_var_01;
    auVar18[0] = extraout_b0_01;
    auVar18[2] = extraout_var_04;
    auVar18[3] = extraout_var_07;
    auVar18[4] = extraout_var_08;
    auVar18[5] = extraout_var_09;
    auVar18[6] = extraout_var_10;
    auVar18[7] = extraout_var_11;
    auVar18[8] = extraout_var_12;
    auVar18[9] = extraout_var_13;
    auVar18[10] = extraout_var_14;
    auVar18[0xb] = extraout_var_15;
    auVar18[0xc] = extraout_var_16;
    auVar18[0xd] = extraout_var_17;
    auVar18[0xe] = extraout_var_18;
    auVar18[0xf] = extraout_var_19;
    return auVar18;
  }
  auVar33._8_8_ = CONCAT44(fVar27,fVar12);
  auVar33._0_8_ = CONCAT44(fVar27,fVar12);
  auVar44 = NEON_frsqrte(auVar33,4);
  auVar50._0_4_ = auVar44._0_4_ * fVar12;
  auVar50._4_4_ = auVar44._4_4_ * fVar27;
  auVar50._8_4_ = auVar44._8_4_ * fVar12;
  auVar50._12_4_ = auVar44._12_4_ * fVar27;
  auVar43 = NEON_frsqrts(auVar44,auVar50,4);
  auVar45._0_4_ = auVar44._0_4_ * auVar43._0_4_;
  auVar45._4_4_ = auVar44._4_4_ * auVar43._4_4_;
  auVar45._8_4_ = auVar44._8_4_ * auVar43._8_4_;
  auVar45._12_4_ = auVar44._12_4_ * auVar43._12_4_;
  auVar51._0_4_ = fVar12 * auVar45._0_4_;
  auVar51._4_4_ = fVar27 * auVar45._4_4_;
  auVar51._8_4_ = fVar12 * auVar45._8_4_;
  auVar51._12_4_ = fVar27 * auVar45._12_4_;
  iVar28 = -(uint)(fVar12 == 0.0);
  iVar40 = -(uint)(fVar27 == 0.0);
  iVar41 = -(uint)(fVar12 == 0.0);
  iVar42 = -(uint)(fVar27 == 0.0);
  auVar44 = NEON_frsqrts(auVar45,auVar51,4);
  fVar15 = fVar15 * auVar45._0_4_ * auVar44._0_4_;
  fVar14 = fVar14 * auVar45._4_4_ * auVar44._4_4_;
  fVar13 = fVar13 * auVar45._8_4_ * auVar44._8_4_;
  fVar29 = fVar29 * auVar45._12_4_ * auVar44._12_4_;
  fVar12 = 0.0;
  fVar27 = (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT12((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT11((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             SUB41(fVar15,0) & ~(byte)iVar28)));
  auVar49._0_8_ =
       CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                         CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                  CONCAT14(SUB41(fVar14,0) & ~(byte)iVar40,fVar27))));
  auVar49[8] = SUB41(fVar13,0) & ~(byte)iVar41;
  auVar49[9] = (byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar41 >> 8);
  auVar49[10] = (byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
  auVar49[0xb] = (byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
  auVar52[0xc] = SUB41(fVar29,0) & ~(byte)iVar42;
  auVar52._0_12_ = auVar49;
  auVar52[0xd] = (byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar42 >> 8);
  auVar52[0xe] = (byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
  auVar52[0xf] = (byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
  fVar15 = fVar27 * fVar27;
  fVar39 = (float)((ulong)auVar49._0_8_ >> 0x20);
  fVar14 = fVar39 * fVar39;
  uVar16 = (undefined1)((uint)fVar14 >> 8);
  uVar19 = (undefined1)((uint)fVar14 >> 0x10);
  uVar20 = (undefined1)((uint)fVar14 >> 0x18);
  fVar30 = auVar49._8_4_;
  fVar13 = fVar30 * fVar30;
  uVar21 = (undefined1)((uint)fVar13 >> 8);
  uVar22 = (undefined1)((uint)fVar13 >> 0x10);
  uVar23 = (undefined1)((uint)fVar13 >> 0x18);
  fVar55 = auVar52._12_4_;
  fVar29 = fVar55 * fVar55;
  uVar24 = (undefined1)((uint)fVar29 >> 8);
  uVar25 = (undefined1)((uint)fVar29 >> 0x10);
  uVar26 = (undefined1)((uint)fVar29 >> 0x18);
  auVar43[4] = SUB41(fVar14,0);
  auVar43._0_4_ = fVar15;
  auVar43[5] = uVar16;
  auVar43[6] = uVar19;
  auVar43[7] = uVar20;
  auVar43[8] = SUB41(fVar13,0);
  auVar43[9] = uVar21;
  auVar43[10] = uVar22;
  auVar43[0xb] = uVar23;
  auVar43[0xc] = SUB41(fVar29,0);
  auVar43[0xd] = uVar24;
  auVar43[0xe] = uVar25;
  auVar43[0xf] = uVar26;
  auVar1[4] = SUB41(fVar14,0);
  auVar1._0_4_ = fVar15;
  auVar1[5] = uVar16;
  auVar1[6] = uVar19;
  auVar1[7] = uVar20;
  auVar1[8] = SUB41(fVar13,0);
  auVar1[9] = uVar21;
  auVar1[10] = uVar22;
  auVar1[0xb] = uVar23;
  auVar1[0xc] = SUB41(fVar29,0);
  auVar1[0xd] = uVar24;
  auVar1[0xe] = uVar25;
  auVar1[0xf] = uVar26;
  auVar44 = NEON_ext(auVar43,auVar1,8,1);
  fVar15 = auVar44._0_4_ + fVar15;
  fVar14 = auVar44._4_4_ + fVar14;
  fVar13 = fVar15 + fVar14;
  fVar15 = fVar15 + fVar14;
  uVar16 = SUB41(fVar15,0);
  uVar19 = (undefined1)((uint)fVar15 >> 8);
  uVar20 = (undefined1)((uint)fVar15 >> 0x10);
  uVar21 = (undefined1)((uint)fVar15 >> 0x18);
  if (fVar13 != 0.0) {
    auVar34._0_4_ = fVar27 * fVar27;
    auVar34._4_4_ = 0;
    auVar34._8_4_ = fVar30 * fVar30;
    auVar34._12_4_ = 0;
    auVar44 = NEON_ext(auVar34,auVar34,8,1);
    fVar29 = auVar44._0_4_ + auVar34._0_4_;
    fVar12 = auVar44._4_4_ + 0.0;
    fVar14 = fVar29 + fVar12;
    fVar29 = fVar29 + fVar12;
    auVar35._8_8_ = CONCAT44(fVar29,fVar14);
    auVar35._0_8_ = CONCAT44(fVar29,fVar14);
    auVar44 = NEON_frsqrte(auVar35,4);
    auVar56._0_4_ = auVar44._0_4_ * fVar14;
    auVar56._4_4_ = auVar44._4_4_ * fVar29;
    auVar56._8_4_ = auVar44._8_4_ * fVar14;
    auVar56._12_4_ = auVar44._12_4_ * fVar29;
    auVar43 = NEON_frsqrts(auVar44,auVar56,4);
    auVar53._0_4_ = auVar44._0_4_ * auVar43._0_4_;
    auVar53._4_4_ = auVar44._4_4_ * auVar43._4_4_;
    auVar53._8_4_ = auVar44._8_4_ * auVar43._8_4_;
    auVar53._12_4_ = auVar44._12_4_ * auVar43._12_4_;
    auVar57._0_4_ = fVar14 * auVar53._0_4_;
    auVar57._4_4_ = fVar29 * auVar53._4_4_;
    auVar57._8_4_ = fVar14 * auVar53._8_4_;
    auVar57._12_4_ = fVar29 * auVar53._12_4_;
    iVar28 = -(uint)(fVar14 == 0.0);
    iVar40 = -(uint)(fVar29 == 0.0);
    iVar41 = -(uint)(fVar14 == 0.0);
    iVar42 = -(uint)(fVar29 == 0.0);
    auVar44 = NEON_frsqrts(auVar53,auVar57,4);
    fVar14 = fVar27 * auVar53._0_4_ * auVar44._0_4_;
    fVar29 = auVar53._4_4_ * auVar44._4_4_ * 0.0;
    fVar12 = fVar30 * auVar53._8_4_ * auVar44._8_4_;
    fVar48 = auVar53._12_4_ * auVar44._12_4_ * 0.0;
    fVar14 = (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                      CONCAT11((byte)((uint)fVar14 >> 8) &
                                               ~(byte)((uint)iVar28 >> 8),
                                               SUB41(fVar14,0) & ~(byte)iVar28)));
    auVar31._0_8_ =
         CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                  CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                           CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                    CONCAT14(SUB41(fVar29,0) & ~(byte)iVar40,fVar14))));
    auVar31[8] = SUB41(fVar12,0) & ~(byte)iVar41;
    auVar31[9] = (byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar31[10] = (byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar31[0xb] = (byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar36[0xc] = SUB41(fVar48,0) & ~(byte)iVar42;
    auVar36._0_12_ = auVar31;
    auVar36[0xd] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar42 >> 8);
    auVar36[0xe] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
    auVar36[0xf] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
    auVar2[4] = uVar16;
    auVar2._0_4_ = fVar13;
    auVar2[5] = uVar19;
    auVar2[6] = uVar20;
    auVar2[7] = uVar21;
    auVar2[8] = SUB41(fVar13,0);
    auVar2[9] = (char)((uint)fVar13 >> 8);
    auVar2[10] = (char)((uint)fVar13 >> 0x10);
    auVar2[0xb] = (char)((uint)fVar13 >> 0x18);
    auVar2[0xc] = uVar16;
    auVar2[0xd] = uVar19;
    auVar2[0xe] = uVar20;
    auVar2[0xf] = uVar21;
    auVar44 = NEON_frsqrte(auVar2,4);
    auVar58._0_4_ = fVar13 * auVar44._0_4_;
    auVar58._4_4_ = fVar15 * auVar44._4_4_;
    auVar58._8_4_ = fVar13 * auVar44._8_4_;
    uVar10 = (undefined2)(CONCAT15(uVar19,CONCAT14(uVar16,fVar13)) >> 0x20);
    auVar58._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10)) * auVar44._12_4_;
    auVar43 = NEON_frsqrts(auVar44,auVar58,4);
    auVar54._0_4_ = auVar44._0_4_ * auVar43._0_4_;
    auVar54._4_4_ = auVar44._4_4_ * auVar43._4_4_;
    auVar54._8_4_ = auVar44._8_4_ * auVar43._8_4_;
    auVar54._12_4_ = auVar44._12_4_ * auVar43._12_4_;
    auVar59._0_4_ = fVar13 * auVar54._0_4_;
    auVar59._4_4_ = fVar15 * auVar54._4_4_;
    auVar59._8_4_ = fVar13 * auVar54._8_4_;
    auVar59._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10)) * auVar54._12_4_;
    iVar28 = -(uint)(fVar13 == 0.0);
    iVar40 = -(uint)(fVar15 == 0.0);
    iVar41 = -(uint)(fVar13 == 0.0);
    iVar42 = -(uint)((float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10)) == 0.0);
    auVar44 = NEON_frsqrts(auVar54,auVar59,4);
    fVar15 = fVar27 * auVar54._0_4_ * auVar44._0_4_;
    fVar13 = fVar39 * auVar54._4_4_ * auVar44._4_4_;
    fVar29 = fVar30 * auVar54._8_4_ * auVar44._8_4_;
    fVar12 = fVar55 * auVar54._12_4_ * auVar44._12_4_;
    fVar14 = fVar14 * (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                      CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                               ~(byte)((uint)iVar28 >> 0x10),
                                               CONCAT11((byte)((uint)fVar15 >> 8) &
                                                        ~(byte)((uint)iVar28 >> 8),
                                                        SUB41(fVar15,0) & ~(byte)iVar28)));
    fVar15 = (float)((ulong)auVar31._0_8_ >> 0x20) *
             (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar13 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar13,0) & ~(byte)iVar40)));
    uVar16 = (undefined1)((uint)fVar15 >> 8);
    uVar19 = (undefined1)((uint)fVar15 >> 0x10);
    uVar20 = (undefined1)((uint)fVar15 >> 0x18);
    fVar13 = auVar31._8_4_ *
             (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) &
                                               ~(byte)((uint)iVar41 >> 8),
                                               SUB41(fVar29,0) & ~(byte)iVar41)));
    uVar21 = (undefined1)((uint)fVar13 >> 8);
    uVar22 = (undefined1)((uint)fVar13 >> 0x10);
    uVar23 = (undefined1)((uint)fVar13 >> 0x18);
    fVar29 = auVar36._12_4_ *
             (float)CONCAT13((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                             CONCAT12((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                      CONCAT11((byte)((uint)fVar12 >> 8) &
                                               ~(byte)((uint)iVar42 >> 8),
                                               SUB41(fVar12,0) & ~(byte)iVar42)));
    uVar24 = (undefined1)((uint)fVar29 >> 8);
    uVar25 = (undefined1)((uint)fVar29 >> 0x10);
    uVar26 = (undefined1)((uint)fVar29 >> 0x18);
    auVar3[4] = SUB41(fVar15,0);
    auVar3._0_4_ = fVar14;
    auVar3[5] = uVar16;
    auVar3[6] = uVar19;
    auVar3[7] = uVar20;
    auVar3[8] = SUB41(fVar13,0);
    auVar3[9] = uVar21;
    auVar3[10] = uVar22;
    auVar3[0xb] = uVar23;
    auVar3[0xc] = SUB41(fVar29,0);
    auVar3[0xd] = uVar24;
    auVar3[0xe] = uVar25;
    auVar3[0xf] = uVar26;
    auVar4[4] = SUB41(fVar15,0);
    auVar4._0_4_ = fVar14;
    auVar4[5] = uVar16;
    auVar4[6] = uVar19;
    auVar4[7] = uVar20;
    auVar4[8] = SUB41(fVar13,0);
    auVar4[9] = uVar21;
    auVar4[10] = uVar22;
    auVar4[0xb] = uVar23;
    auVar4[0xc] = SUB41(fVar29,0);
    auVar4[0xd] = uVar24;
    auVar4[0xe] = uVar25;
    auVar4[0xf] = uVar26;
    auVar44 = NEON_ext(auVar3,auVar4,8,1);
    fVar15 = auVar44._0_4_ + fVar14 + auVar44._4_4_ + fVar15;
    uVar16 = 0;
    if (-1.0 <= fVar15) {
      uVar16 = SUB41(fVar15,0);
    }
    FUN_01590400(uVar16);
    auVar52._4_4_ = fVar39;
    auVar52._0_4_ = fVar27;
    auVar52._8_4_ = fVar30;
    auVar52._12_4_ = fVar55;
    fVar12 = -(float)CONCAT13(extraout_var_05,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    if (0.0 <= fVar39) {
      fVar12 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    }
  }
  fVar29 = auVar52._0_4_;
  fVar15 = fVar29 * fVar29;
  fVar27 = auVar52._8_4_;
  fVar14 = fVar27 * fVar27;
  uVar16 = (undefined1)((uint)fVar14 >> 8);
  uVar19 = (undefined1)((uint)fVar14 >> 0x10);
  uVar20 = (undefined1)((uint)fVar14 >> 0x18);
  fVar39 = auVar52._12_4_;
  fVar13 = fVar39 * fVar39;
  uVar21 = (undefined1)((uint)fVar13 >> 8);
  uVar22 = (undefined1)((uint)fVar13 >> 0x10);
  uVar23 = (undefined1)((uint)fVar13 >> 0x18);
  auVar5._4_4_ = 0;
  auVar5._0_4_ = fVar15;
  auVar5[8] = SUB41(fVar14,0);
  auVar5[9] = uVar16;
  auVar5[10] = uVar19;
  auVar5[0xb] = uVar20;
  auVar5[0xc] = SUB41(fVar13,0);
  auVar5[0xd] = uVar21;
  auVar5[0xe] = uVar22;
  auVar5[0xf] = uVar23;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fVar15;
  auVar6[8] = SUB41(fVar14,0);
  auVar6[9] = uVar16;
  auVar6[10] = uVar19;
  auVar6[0xb] = uVar20;
  auVar6[0xc] = SUB41(fVar13,0);
  auVar6[0xd] = uVar21;
  auVar6[0xe] = uVar22;
  auVar6[0xf] = uVar23;
  auVar44 = NEON_ext(auVar5,auVar6,8,1);
  fVar15 = auVar44._0_4_ + fVar15;
  fVar14 = auVar44._4_4_ + 0.0;
  fVar13 = fVar15 + fVar14;
  fVar15 = fVar15 + fVar14;
  uVar16 = SUB41(fVar15,0);
  uVar19 = (undefined1)((uint)fVar15 >> 8);
  uVar20 = (undefined1)((uint)fVar15 >> 0x10);
  uVar21 = (undefined1)((uint)fVar15 >> 0x18);
  fVar14 = 0.0;
  if (fVar13 != 0.0) {
    auVar7[4] = uVar16;
    auVar7._0_4_ = fVar13;
    auVar7[5] = uVar19;
    auVar7[6] = uVar20;
    auVar7[7] = uVar21;
    auVar7[8] = SUB41(fVar13,0);
    auVar7[9] = (char)((uint)fVar13 >> 8);
    auVar7[10] = (char)((uint)fVar13 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar13 >> 0x18);
    auVar7[0xc] = uVar16;
    auVar7[0xd] = uVar19;
    auVar7[0xe] = uVar20;
    auVar7[0xf] = uVar21;
    auVar44 = NEON_frsqrte(auVar7,4);
    auVar46._0_4_ = auVar44._0_4_ * fVar13;
    auVar46._4_4_ = auVar44._4_4_ * fVar15;
    auVar46._8_4_ = auVar44._8_4_ * fVar13;
    uVar10 = (undefined2)(CONCAT15(uVar19,CONCAT14(uVar16,fVar13)) >> 0x20);
    auVar46._12_4_ = auVar44._12_4_ * (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10));
    auVar43 = NEON_frsqrts(auVar44,auVar46,4);
    auVar37._0_4_ = auVar44._0_4_ * auVar43._0_4_;
    auVar37._4_4_ = auVar44._4_4_ * auVar43._4_4_;
    auVar37._8_4_ = auVar44._8_4_ * auVar43._8_4_;
    auVar37._12_4_ = auVar44._12_4_ * auVar43._12_4_;
    auVar47._0_4_ = fVar13 * auVar37._0_4_;
    auVar47._4_4_ = fVar15 * auVar37._4_4_;
    auVar47._8_4_ = fVar13 * auVar37._8_4_;
    auVar47._12_4_ = (float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10)) * auVar37._12_4_;
    iVar28 = -(uint)(fVar13 == 0.0);
    iVar40 = -(uint)(fVar15 == 0.0);
    iVar41 = -(uint)(fVar13 == 0.0);
    iVar42 = -(uint)((float)CONCAT13(uVar21,CONCAT12(uVar20,uVar10)) == 0.0);
    auVar44 = NEON_frsqrts(auVar37,auVar47,4);
    fVar29 = fVar29 * auVar37._0_4_ * auVar44._0_4_;
    fVar15 = auVar37._4_4_ * auVar44._4_4_ * 0.0;
    fVar27 = fVar27 * auVar37._8_4_ * auVar44._8_4_;
    fVar39 = fVar39 * auVar37._12_4_ * auVar44._12_4_;
    fVar30 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) &
                                               ~(byte)((uint)iVar28 >> 8),
                                               SUB41(fVar29,0) & ~(byte)iVar28)));
    auVar32._0_8_ =
         CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                  CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                           CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar40 >> 8),
                                    CONCAT14(SUB41(fVar15,0) & ~(byte)iVar40,fVar30))));
    auVar32[8] = SUB41(fVar27,0) & ~(byte)iVar41;
    auVar32[9] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar41 >> 8);
    auVar32[10] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10);
    auVar32[0xb] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18);
    auVar38[0xc] = SUB41(fVar39,0) & ~(byte)iVar42;
    auVar38._0_12_ = auVar32;
    auVar38[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar42 >> 8);
    auVar38[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
    fVar15 = fVar30 * (float)_DAT_01d49dc0;
    fVar14 = (float)((ulong)auVar32._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    uVar16 = (undefined1)((uint)fVar14 >> 8);
    uVar19 = (undefined1)((uint)fVar14 >> 0x10);
    uVar20 = (undefined1)((uint)fVar14 >> 0x18);
    fVar13 = auVar32._8_4_ * (float)_UNK_01d49dc8;
    uVar21 = (undefined1)((uint)fVar13 >> 8);
    uVar22 = (undefined1)((uint)fVar13 >> 0x10);
    uVar23 = (undefined1)((uint)fVar13 >> 0x18);
    fVar29 = auVar38._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar24 = (undefined1)((uint)fVar29 >> 8);
    uVar25 = (undefined1)((uint)fVar29 >> 0x10);
    uVar26 = (undefined1)((uint)fVar29 >> 0x18);
    auVar8[4] = SUB41(fVar14,0);
    auVar8._0_4_ = fVar15;
    auVar8[5] = uVar16;
    auVar8[6] = uVar19;
    auVar8[7] = uVar20;
    auVar8[8] = SUB41(fVar13,0);
    auVar8[9] = uVar21;
    auVar8[10] = uVar22;
    auVar8[0xb] = uVar23;
    auVar8[0xc] = SUB41(fVar29,0);
    auVar8[0xd] = uVar24;
    auVar8[0xe] = uVar25;
    auVar8[0xf] = uVar26;
    auVar9[4] = SUB41(fVar14,0);
    auVar9._0_4_ = fVar15;
    auVar9[5] = uVar16;
    auVar9[6] = uVar19;
    auVar9[7] = uVar20;
    auVar9[8] = SUB41(fVar13,0);
    auVar9[9] = uVar21;
    auVar9[10] = uVar22;
    auVar9[0xb] = uVar23;
    auVar9[0xc] = SUB41(fVar29,0);
    auVar9[0xd] = uVar24;
    auVar9[0xe] = uVar25;
    auVar9[0xf] = uVar26;
    auVar44 = NEON_ext(auVar8,auVar9,8,1);
    fVar15 = auVar44._0_4_ + fVar15 + auVar44._4_4_ + fVar14;
    uVar16 = 0;
    if (-1.0 <= fVar15) {
      uVar16 = SUB41(fVar15,0);
    }
    FUN_01590400(uVar16);
    fVar14 = -(float)CONCAT13(extraout_var_06,
                              CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
    if (0.0 <= fVar30) {
      fVar14 = (float)CONCAT13(extraout_var_06,
                               CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
    }
  }
  auVar17[4] = SUB41(fVar14,0);
  auVar17[5] = (undefined1)((uint)fVar14 >> 8);
  auVar17[6] = (undefined1)((uint)fVar14 >> 0x10);
  auVar17[7] = (undefined1)((uint)fVar14 >> 0x18);
  auVar17._0_4_ = -fVar12;
  auVar17._8_8_ = 0;
  return auVar17;
}


