/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea1d20; name: FUN_00ea1d20
 */


void FUN_00ea1d20(long *param_1)

{
  bool bVar1;
  float fVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  float fVar6;
  byte bVar7;
  undefined1 extraout_b0;
  undefined1 uVar8;
  undefined1 extraout_b0_00;
  byte bVar9;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar10;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  byte bVar11;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  byte bVar16;
  undefined1 uVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  byte bVar21;
  undefined1 uVar22;
  byte bVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  float fVar29;
  int iVar30;
  byte bVar36;
  float fVar31;
  byte bVar34;
  byte bVar35;
  float fVar37;
  int iVar38;
  int iVar39;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  fVar43 = (float)param_1[0x68];
  auVar32._0_4_ = fVar43 * fVar43;
  fVar31 = (float)((ulong)param_1[0x68] >> 0x20);
  auVar32._4_4_ = fVar31 * fVar31;
  fVar42 = (float)param_1[0x69];
  auVar32._8_4_ = fVar42 * fVar42;
  fVar2 = (float)((ulong)param_1[0x69] >> 0x20);
  auVar32._12_4_ = fVar2 * fVar2;
  auVar44 = NEON_ext(auVar32,auVar32,8,1);
  fVar29 = auVar44._0_4_ + auVar32._0_4_;
  fVar37 = auVar44._4_4_ + auVar32._4_4_;
  fVar6 = fVar29 + fVar37;
  fVar29 = fVar29 + fVar37;
  iVar41 = -(uint)(fVar6 == 0.0);
  auVar33._8_8_ = CONCAT44(fVar29,fVar6);
  auVar33._0_8_ = CONCAT44(fVar29,fVar6);
  auVar44 = NEON_frsqrte(auVar33,4);
  auVar46._0_4_ = auVar44._0_4_ * fVar6;
  auVar46._4_4_ = auVar44._4_4_ * fVar29;
  auVar46._8_4_ = auVar44._8_4_ * fVar6;
  auVar46._12_4_ = auVar44._12_4_ * fVar29;
  auVar47 = NEON_frsqrts(auVar44,auVar46,4);
  auVar45._0_4_ = auVar44._0_4_ * auVar47._0_4_;
  auVar45._4_4_ = auVar44._4_4_ * auVar47._4_4_;
  auVar45._8_4_ = auVar44._8_4_ * auVar47._8_4_;
  auVar45._12_4_ = auVar44._12_4_ * auVar47._12_4_;
  auVar48._0_4_ = fVar6 * auVar45._0_4_;
  auVar48._4_4_ = fVar29 * auVar45._4_4_;
  auVar48._8_4_ = fVar6 * auVar45._8_4_;
  auVar48._12_4_ = fVar29 * auVar45._12_4_;
  iVar30 = -(uint)(fVar6 == 0.0);
  iVar38 = -(uint)(fVar29 == 0.0);
  iVar39 = -(uint)(fVar6 == 0.0);
  iVar40 = -(uint)(fVar29 == 0.0);
  auVar44 = NEON_frsqrts(auVar45,auVar48,4);
  fVar43 = fVar43 * auVar45._0_4_ * auVar44._0_4_;
  fVar31 = fVar31 * auVar45._4_4_ * auVar44._4_4_;
  fVar42 = fVar42 * auVar45._8_4_ * auVar44._8_4_;
  fVar2 = fVar2 * auVar45._12_4_ * auVar44._12_4_;
  bVar28 = ~(byte)iVar41;
  bVar34 = ~(byte)((uint)iVar41 >> 8);
  bVar35 = ~(byte)((uint)iVar41 >> 0x10);
  bVar36 = ~(byte)((uint)iVar41 >> 0x18);
  bVar7 = SUB41(fVar43,0) & ~(byte)iVar30 & bVar28;
  bVar9 = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar30 >> 8) & bVar34;
  bVar10 = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10) & bVar35;
  bVar11 = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18) & bVar36;
  bVar12 = SUB41(fVar31,0) & ~(byte)iVar38 & bVar28;
  bVar13 = (byte)((uint)fVar31 >> 8) & ~(byte)((uint)iVar38 >> 8) & bVar34;
  bVar14 = (byte)((uint)fVar31 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10) & bVar35;
  bVar16 = (byte)((uint)fVar31 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18) & bVar36;
  bVar18 = SUB41(fVar42,0) & ~(byte)iVar39 & bVar28;
  bVar19 = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar39 >> 8) & bVar34;
  bVar21 = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10) & bVar35;
  bVar23 = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18) & bVar36;
  bVar28 = SUB41(fVar2,0) & ~(byte)iVar40 & bVar28;
  bVar34 = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar40 >> 8) & bVar34;
  bVar35 = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10) & bVar35;
  bVar36 = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18) & bVar36;
  fVar43 = (float)CONCAT13(bVar11,CONCAT12(bVar10,CONCAT11(bVar9,bVar7))) *
           (float)CONCAT13(bVar11,CONCAT12(bVar10,CONCAT11(bVar9,bVar7)));
  fVar31 = (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar13,bVar12))) *
           (float)CONCAT13(bVar16,CONCAT12(bVar14,CONCAT11(bVar13,bVar12)));
  uVar8 = (undefined1)((uint)fVar31 >> 8);
  uVar15 = (undefined1)((uint)fVar31 >> 0x10);
  uVar17 = (undefined1)((uint)fVar31 >> 0x18);
  fVar42 = (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar18))) *
           (float)CONCAT13(bVar23,CONCAT12(bVar21,CONCAT11(bVar19,bVar18)));
  uVar20 = (undefined1)((uint)fVar42 >> 8);
  uVar22 = (undefined1)((uint)fVar42 >> 0x10);
  uVar24 = (undefined1)((uint)fVar42 >> 0x18);
  fVar2 = (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar28))) *
          (float)CONCAT13(bVar36,CONCAT12(bVar35,CONCAT11(bVar34,bVar28)));
  uVar25 = (undefined1)((uint)fVar2 >> 8);
  uVar26 = (undefined1)((uint)fVar2 >> 0x10);
  uVar27 = (undefined1)((uint)fVar2 >> 0x18);
  auVar44[4] = SUB41(fVar31,0);
  auVar44._0_4_ = fVar43;
  auVar44[5] = uVar8;
  auVar44[6] = uVar15;
  auVar44[7] = uVar17;
  auVar44[8] = SUB41(fVar42,0);
  auVar44[9] = uVar20;
  auVar44[10] = uVar22;
  auVar44[0xb] = uVar24;
  auVar44[0xc] = SUB41(fVar2,0);
  auVar44[0xd] = uVar25;
  auVar44[0xe] = uVar26;
  auVar44[0xf] = uVar27;
  auVar47[4] = SUB41(fVar31,0);
  auVar47._0_4_ = fVar43;
  auVar47[5] = uVar8;
  auVar47[6] = uVar15;
  auVar47[7] = uVar17;
  auVar47[8] = SUB41(fVar42,0);
  auVar47[9] = uVar20;
  auVar47[10] = uVar22;
  auVar47[0xb] = uVar24;
  auVar47[0xc] = SUB41(fVar2,0);
  auVar47[0xd] = uVar25;
  auVar47[0xe] = uVar26;
  auVar47[0xf] = uVar27;
  auVar44 = NEON_ext(auVar44,auVar47,8,1);
  if (0.0 < auVar44._0_4_ + fVar43 + auVar44._4_4_ + fVar31) {
    FUN_00dc0cb0((char)DAT_01d4c674,param_1,&DAT_02160e40);
LAB_00ea1dc4:
    FUN_00dc0d20(0,param_1,&DAT_02160e40);
    FUN_00dc0d90(0,param_1,&DAT_02160e40);
    return;
  }
  if (*(char *)((long)param_1 + 0x44c) == '\0') {
    pcVar5 = *(code **)(*param_1 + 0x178);
    puVar4 = PTR_DAT_0271e870;
  }
  else {
    pcVar5 = *(code **)(*param_1 + 0x1c0);
    puVar4 = (undefined *)((long)param_1 + 0x44c);
  }
  (*pcVar5)(0,param_1,puVar4);
  fVar43 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  uVar3 = FUN_00e46320(param_1);
  if ((uVar3 & 1) == 0) {
    if (1.0 <= fVar43) {
      if (2.0 <= fVar43) {
        FUN_00dc0cb0((char)DAT_01d4c680,param_1,&DAT_02160e40);
        FUN_00dc0d20((char)DAT_01d4c4a8,param_1,&DAT_02160e40);
        uVar8 = (undefined1)DAT_01d4c684;
LAB_00ea2040:
        FUN_00dc0d90(uVar8,param_1,&DAT_02160e40);
        return;
      }
      uVar3 = (**(code **)(*param_1 + 0x198))(param_1,PTR_DAT_0271ecf0,0);
      if ((((uVar3 & 1) != 0) &&
          ((**(code **)(*param_1 + 0x178))(0,param_1,PTR_DAT_0271e870),
          !NAN((float)CONCAT13(extraout_var_04,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))))
          && (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) <
             2.0)) &&
         (bVar1 = NAN((float)CONCAT13(extraout_var_04,
                                      CONCAT12(extraout_var_02,
                                               CONCAT11(extraout_var_00,extraout_b0_00)))),
         (bVar1 || (float)CONCAT13(extraout_var_04,
                                   CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)
                                           )) != 0.0) &&
         (!bVar1 &&
         (float)CONCAT13(extraout_var_04,
                         CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) < 0.0)
         == bVar1)) {
        FUN_00dc0cb0((char)DAT_01d4c664,param_1,&DAT_02160e40);
        FUN_00dc0d20(SUB41(DAT_01d4bee0,0),param_1,&DAT_02160e40);
        uVar8 = SUB41(DAT_01d4bd08,0);
        goto LAB_00ea2040;
      }
      uVar15 = SUB41(fVar43 * 0.5 * DAT_01d4bf68 + DAT_01d4bee0,0);
      uVar17 = SUB41(fVar43 * 0.5 * DAT_01d4c200 + DAT_01d4bd08,0);
      uVar8 = (undefined1)DAT_01d4c664;
      goto LAB_00ea1eb4;
    }
    fVar31 = DAT_01d4beb4;
    fVar42 = DAT_01d4c2b8;
LAB_00ea1e68:
    fVar31 = fVar43 * fVar31;
    fVar43 = fVar43 * fVar42;
  }
  else {
    if (1.0 > fVar43) {
      fVar31 = DAT_01d4c1c8;
      fVar42 = DAT_01d4bc10;
      goto LAB_00ea1e68;
    }
    if (fVar43 >= 1.5) {
      if (fVar43 < 1.5) {
        return;
      }
      FUN_00dc0cb0((char)DAT_01d4c6f8,param_1,&DAT_02160e40);
      goto LAB_00ea1dc4;
    }
    fVar31 = (fVar43 / 1.5) * DAT_01d4c1c8;
    fVar43 = (fVar43 / 1.5) * DAT_01d4bc10;
  }
  uVar17 = SUB41(fVar43 + 1.0,0);
  uVar15 = SUB41(fVar31 + 1.0,0);
  uVar8 = (undefined1)DAT_01d4c674;
LAB_00ea1eb4:
  FUN_00dc0cb0(uVar8,param_1,&DAT_02160e40);
  FUN_00dc0d20(uVar15,param_1,&DAT_02160e40);
  FUN_00dc0d90(uVar17,param_1,&DAT_02160e40);
  return;
}


