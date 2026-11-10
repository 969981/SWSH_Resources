/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f11ca0; name: FUN_00f11ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f11ca0(long param_1)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined1 uVar11;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar12;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar13;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar14;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar15;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 uVar16;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar17;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar18;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 uVar19;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 uVar20;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar21;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 uVar22;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 uVar23;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar24;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 uVar25;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 uVar26;
  float fVar27;
  int iVar28;
  undefined1 auVar29 [12];
  float fVar33;
  undefined1 auVar30 [16];
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  ulong local_50;
  undefined8 uStack_48;
  float local_34;
  
  fVar42 = *(float *)(param_1 + 0x7c);
  if (fVar42 == *(float *)(param_1 + 0x80)) {
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
  }
  else {
    fVar42 = (*(float *)(param_1 + 0xa0) - fVar42) / (*(float *)(param_1 + 0x80) - fVar42);
    uVar11 = SUB41(fVar42,0);
    uVar12 = (undefined1)((uint)fVar42 >> 8);
    uVar13 = (undefined1)((uint)fVar42 >> 0x10);
    uVar14 = (undefined1)((uint)fVar42 >> 0x18);
  }
  bVar1 = NAN((float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))));
  pfVar8 = (float *)(param_1 + 0xc0);
  *pfVar8 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)));
  local_34 = 1.0;
  pfVar2 = &local_34;
  if (!bVar1 && (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) == 1.0 ||
      (!bVar1 && (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) < 1.0) != bVar1) {
    pfVar2 = pfVar8;
  }
  local_50 = local_50 & 0xffffffff00000000;
  pfVar3 = (float *)&local_50;
  if (NAN((float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))) ||
      0.0 <= (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))) {
    pfVar3 = pfVar2;
  }
  fVar42 = *pfVar3;
  *pfVar8 = fVar42;
  *(float *)(param_1 + 0xc4) =
       *(float *)PTR_DAT_0271ecc8 +
       (*(float *)PTR_DAT_0271ecc0 - *(float *)PTR_DAT_0271ecc8) * fVar42;
  fVar42 = (float)*(undefined8 *)(param_1 + 0x90);
  auVar38._0_4_ = fVar42 * fVar42;
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  auVar38._4_4_ = fVar10 * fVar10;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x98);
  auVar38._8_4_ = fVar5 * fVar5;
  fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  auVar38._12_4_ = fVar7 * fVar7;
  auVar37 = NEON_ext(auVar38,auVar38,8,1);
  fVar27 = auVar37._0_4_ + auVar38._0_4_;
  fVar33 = auVar37._4_4_ + auVar38._4_4_;
  fVar9 = fVar27 + fVar33;
  fVar27 = fVar27 + fVar33;
  if (fVar9 == 0.0) {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xa8);
    uVar19 = (undefined1)uVar6;
    uVar20 = (undefined1)((ulong)uVar6 >> 8);
    uVar21 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar22 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar23 = (undefined1)((ulong)uVar6 >> 0x20);
    uVar24 = (undefined1)((ulong)uVar6 >> 0x28);
    uVar25 = (undefined1)((ulong)uVar6 >> 0x30);
    uVar26 = (undefined1)((ulong)uVar6 >> 0x38);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0xa0);
    uVar11 = (undefined1)uVar6;
    uVar12 = (undefined1)((ulong)uVar6 >> 8);
    uVar13 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar14 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar15 = (undefined1)((ulong)uVar6 >> 0x20);
    uVar16 = (undefined1)((ulong)uVar6 >> 0x28);
    uVar17 = (undefined1)((ulong)uVar6 >> 0x30);
    uVar18 = (undefined1)((ulong)uVar6 >> 0x38);
  }
  else {
    auVar30._8_8_ = CONCAT44(fVar27,fVar9);
    auVar30._0_8_ = CONCAT44(fVar27,fVar9);
    auVar38 = NEON_frsqrte(auVar30,4);
    auVar40._0_4_ = auVar38._0_4_ * fVar9;
    auVar40._4_4_ = auVar38._4_4_ * fVar27;
    auVar40._8_4_ = auVar38._8_4_ * fVar9;
    auVar40._12_4_ = auVar38._12_4_ * fVar27;
    auVar37 = NEON_frsqrts(auVar38,auVar40,4);
    auVar39._0_4_ = auVar38._0_4_ * auVar37._0_4_;
    auVar39._4_4_ = auVar38._4_4_ * auVar37._4_4_;
    auVar39._8_4_ = auVar38._8_4_ * auVar37._8_4_;
    auVar39._12_4_ = auVar38._12_4_ * auVar37._12_4_;
    auVar41._0_4_ = fVar9 * auVar39._0_4_;
    auVar41._4_4_ = fVar27 * auVar39._4_4_;
    auVar41._8_4_ = fVar9 * auVar39._8_4_;
    auVar41._12_4_ = fVar27 * auVar39._12_4_;
    iVar28 = -(uint)(fVar9 == 0.0);
    iVar34 = -(uint)(fVar27 == 0.0);
    iVar35 = -(uint)(fVar9 == 0.0);
    iVar36 = -(uint)(fVar27 == 0.0);
    auVar38 = NEON_frsqrts(auVar39,auVar41,4);
    fVar42 = fVar42 * auVar39._0_4_ * auVar38._0_4_;
    fVar10 = fVar10 * auVar39._4_4_ * auVar38._4_4_;
    fVar5 = fVar5 * auVar39._8_4_ * auVar38._8_4_;
    fVar7 = fVar7 * auVar39._12_4_ * auVar38._12_4_;
    fVar9 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                            CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                     CONCAT11((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar28 >> 8)
                                              ,SUB41(fVar42,0) & ~(byte)iVar28)));
    auVar29._0_8_ =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10),
                           CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar34 >> 8),
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar34,fVar9))));
    auVar29[8] = SUB41(fVar5,0) & ~(byte)iVar35;
    auVar29[9] = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar35 >> 8);
    auVar29[10] = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
    auVar29[0xb] = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
    auVar31[0xc] = SUB41(fVar7,0) & ~(byte)iVar36;
    auVar31._0_12_ = auVar29;
    auVar31[0xd] = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar36 >> 8);
    auVar31[0xe] = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar36 >> 0x10);
    auVar31[0xf] = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar36 >> 0x18);
    fVar42 = fVar9 * (float)_DAT_01d49dc0;
    fVar10 = (float)((ulong)auVar29._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
    uVar11 = (undefined1)((uint)fVar10 >> 8);
    uVar12 = (undefined1)((uint)fVar10 >> 0x10);
    uVar13 = (undefined1)((uint)fVar10 >> 0x18);
    fVar5 = auVar29._8_4_ * (float)_UNK_01d49dc8;
    uVar14 = (undefined1)((uint)fVar5 >> 8);
    uVar15 = (undefined1)((uint)fVar5 >> 0x10);
    uVar16 = (undefined1)((uint)fVar5 >> 0x18);
    fVar7 = auVar31._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar17 = (undefined1)((uint)fVar7 >> 8);
    uVar18 = (undefined1)((uint)fVar7 >> 0x10);
    uVar19 = (undefined1)((uint)fVar7 >> 0x18);
    auVar37[4] = SUB41(fVar10,0);
    auVar37._0_4_ = fVar42;
    auVar37[5] = uVar11;
    auVar37[6] = uVar12;
    auVar37[7] = uVar13;
    auVar37[8] = SUB41(fVar5,0);
    auVar37[9] = uVar14;
    auVar37[10] = uVar15;
    auVar37[0xb] = uVar16;
    auVar37[0xc] = SUB41(fVar7,0);
    auVar37[0xd] = uVar17;
    auVar37[0xe] = uVar18;
    auVar37[0xf] = uVar19;
    auVar4[4] = SUB41(fVar10,0);
    auVar4._0_4_ = fVar42;
    auVar4[5] = uVar11;
    auVar4[6] = uVar12;
    auVar4[7] = uVar13;
    auVar4[8] = SUB41(fVar5,0);
    auVar4[9] = uVar14;
    auVar4[10] = uVar15;
    auVar4[0xb] = uVar16;
    auVar4[0xc] = SUB41(fVar7,0);
    auVar4[0xd] = uVar17;
    auVar4[0xe] = uVar18;
    auVar4[0xf] = uVar19;
    auVar38 = NEON_ext(auVar37,auVar4,8,1);
    fVar10 = auVar38._0_4_ + fVar42 + auVar38._4_4_ + fVar10;
    fVar42 = fVar10;
    if (1.0 < fVar10) {
      fVar42 = 0.0;
    }
    uVar11 = 0;
    if (-1.0 <= fVar10) {
      uVar11 = SUB41(fVar42,0);
    }
    FUN_01590400(uVar11);
    fVar42 = -(float)CONCAT13(extraout_var_05,
                              CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    if (0.0 <= fVar9) {
      fVar42 = (float)CONCAT13(extraout_var_05,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)));
    }
    uStack_48 = *(undefined8 *)(*(long *)(param_1 + 0x88) + 0x5d8);
    local_50 = *(ulong *)(*(long *)(param_1 + 0x88) + 0x5d0);
    FUN_00ac7ad0(&local_50);
    fVar42 = (fVar42 + (float)CONCAT13(extraout_var_17,
                                       CONCAT12(extraout_var_14,
                                                CONCAT11(extraout_var_11,extraout_var_08))) +
             DAT_01d4bb38) / DAT_01d4bdf4;
    fVar10 = 1.0;
    if (fVar42 < 0.0) {
      fVar10 = -1.0;
    }
    fVar42 = fVar42 - fVar10 * (float)(int)fVar42;
    fVar10 = fVar42 + 1.0;
    uVar11 = SUB41(fVar10,0);
    uVar12 = (char)((uint)fVar10 >> 8);
    uVar13 = (char)((uint)fVar10 >> 0x10);
    uVar14 = (char)((uint)fVar10 >> 0x18);
    if (0.0 <= fVar42) {
      uVar11 = SUB41(fVar42,0);
      uVar12 = (char)((uint)fVar42 >> 8);
      uVar13 = (char)((uint)fVar42 >> 0x10);
      uVar14 = (char)((uint)fVar42 >> 0x18);
    }
    fVar42 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11))) * DAT_01d4bdf4 +
             DAT_01d4be68;
    FUN_007101c0(*(long *)(param_1 + 0x88) + 0xa0);
    auVar32[9] = extraout_var_22;
    auVar32[8] = extraout_var_20;
    auVar32[10] = extraout_var_24;
    auVar32[0xb] = extraout_var_26;
    auVar32[0xc] = extraout_var_28;
    auVar32[0xd] = extraout_var_30;
    auVar32[0xe] = extraout_var_32;
    auVar32[0xf] = extraout_var_34;
    auVar32[1] = extraout_var_00;
    auVar32[0] = extraout_b0_00;
    auVar32[2] = extraout_var_03;
    auVar32[3] = extraout_var_06;
    auVar32[4] = extraout_var_09;
    auVar32[5] = extraout_var_12;
    auVar32[6] = extraout_var_15;
    auVar32[7] = extraout_var_18;
    FUN_00a92cd0(SUB41(fVar42,0),auVar32);
    uVar11 = extraout_b0_01;
    uVar12 = extraout_var_01;
    uVar13 = extraout_var_04;
    uVar14 = extraout_var_07;
    uVar15 = extraout_var_10;
    uVar16 = extraout_var_13;
    uVar17 = extraout_var_16;
    uVar18 = extraout_var_19;
    uVar19 = extraout_var_21;
    uVar20 = extraout_var_23;
    uVar21 = extraout_var_25;
    uVar22 = extraout_var_27;
    uVar23 = extraout_var_29;
    uVar24 = extraout_var_31;
    uVar25 = extraout_var_33;
    uVar26 = extraout_var_35;
  }
  *(ulong *)(param_1 + 0xd8) =
       CONCAT17(uVar26,CONCAT16(uVar25,CONCAT15(uVar24,CONCAT14(uVar23,CONCAT13(uVar22,CONCAT12(
                                                  uVar21,CONCAT11(uVar20,uVar19)))))));
  *(ulong *)(param_1 + 0xd0) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,CONCAT12(
                                                  uVar13,CONCAT11(uVar12,uVar11)))))));
  return;
}


