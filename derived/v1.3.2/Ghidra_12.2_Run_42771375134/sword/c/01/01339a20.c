/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01339a20; name: FUN_01339a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01339a20(long param_1,long param_2)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long *plVar35;
  float extraout_s0;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 extraout_s0_00;
  float extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  undefined4 extraout_var_02;
  float extraout_var_03;
  undefined4 extraout_var_04;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar55;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  long local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  
  uVar34 = FUN_012e8740(*(undefined8 *)(param_2 + 0x10));
  plVar35 = (long *)PTR_DAT_02710848;
  fVar38 = DAT_01d4bd0c;
  if (((uVar34 & 1) == 0) ||
     (FUN_012e54a0(&local_70,*(undefined8 *)(param_2 + 0x10)), plVar35 = (long *)PTR_DAT_02710848,
     fVar38 = DAT_01d4bd0c, local_70 == 0)) {
    do {
      fVar36 = (float)FUN_01029020(DAT_02a6e924 - DAT_02a6e920,*(undefined8 *)(*plVar35 + 0x98));
      fVar36 = fVar36 + DAT_02a6e920;
      fVar37 = (float)FUN_01029020(DAT_02a6e92c - DAT_02a6e928,*(undefined8 *)(*plVar35 + 0x98));
      fVar19 = (float)*(undefined8 *)(param_1 + 0xe0) - fVar36;
      fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20) - 0.0;
      fVar22 = (float)*(undefined8 *)(param_1 + 0xe8) - (fVar37 + DAT_02a6e928);
      fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) - 0.0;
      fVar19 = fVar19 * fVar19;
      fVar21 = fVar21 * fVar21;
      uVar39 = (undefined1)((uint)fVar21 >> 8);
      uVar40 = (undefined1)((uint)fVar21 >> 0x10);
      uVar41 = (undefined1)((uint)fVar21 >> 0x18);
      fVar22 = fVar22 * fVar22;
      uVar42 = (undefined1)((uint)fVar22 >> 8);
      uVar43 = (undefined1)((uint)fVar22 >> 0x10);
      uVar44 = (undefined1)((uint)fVar22 >> 0x18);
      fVar23 = fVar23 * fVar23;
      uVar45 = (undefined1)((uint)fVar23 >> 8);
      uVar46 = (undefined1)((uint)fVar23 >> 0x10);
      uVar47 = (undefined1)((uint)fVar23 >> 0x18);
      auVar54[4] = SUB41(fVar21,0);
      auVar54._0_4_ = fVar19;
      auVar54[5] = uVar39;
      auVar54[6] = uVar40;
      auVar54[7] = uVar41;
      auVar54[8] = SUB41(fVar22,0);
      auVar54[9] = uVar42;
      auVar54[10] = uVar43;
      auVar54[0xb] = uVar44;
      auVar54[0xc] = SUB41(fVar23,0);
      auVar54[0xd] = uVar45;
      auVar54[0xe] = uVar46;
      auVar54[0xf] = uVar47;
      auVar12[4] = SUB41(fVar21,0);
      auVar12._0_4_ = fVar19;
      auVar12[5] = uVar39;
      auVar12[6] = uVar40;
      auVar12[7] = uVar41;
      auVar12[8] = SUB41(fVar22,0);
      auVar12[9] = uVar42;
      auVar12[10] = uVar43;
      auVar12[0xb] = uVar44;
      auVar12[0xc] = SUB41(fVar23,0);
      auVar12[0xd] = uVar45;
      auVar12[0xe] = uVar46;
      auVar12[0xf] = uVar47;
      auVar54 = NEON_ext(auVar54,auVar12,8,1);
    } while (SQRT(auVar54._0_4_ + fVar19 + auVar54._4_4_ + fVar21) < fVar38);
    uStack_68 = CONCAT44((float)((ulong)uRam0000000002a6e948 >> 0x20) + 0.0,
                         fVar37 + DAT_02a6e928 + (float)uRam0000000002a6e948);
    local_70 = CONCAT44((float)((ulong)_DAT_02a6e940 >> 0x20) + 0.0,fVar36 + (float)_DAT_02a6e940);
    FUN_012dc9c0(*(undefined8 *)(param_2 + 0x10),&local_70);
    *(undefined1 *)(param_2 + 0x18) = 1;
    fVar38 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*plVar35 + 0x98));
    uVar61 = *(undefined8 *)(param_2 + 0x10);
    FUN_00a92cd0(fVar38 * DAT_01d4bb38 + fVar38 * DAT_01d4bb38,0,ZEXT816(0));
    uStack_78 = CONCAT44(extraout_var_04,extraout_var_02);
    local_80 = CONCAT44(extraout_var_00,extraout_s0_00);
    plVar35 = &local_80;
  }
  else {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    FUN_012e54a0(&local_70,*(undefined8 *)(param_2 + 0x10));
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    uVar32 = DAT_01cd5418;
    uVar31 = DAT_01cd5270;
    uVar30 = DAT_01cd5120;
    uVar53 = DAT_01cd50f8;
    uVar29 = DAT_01cd50b0;
    uVar52 = DAT_01cd4f90;
    auVar54 = *(undefined1 (*) [16])(local_70 + 0xa0);
    uVar58 = (undefined4)_UNK_01d4b378;
    uVar59 = (undefined4)((ulong)_UNK_01d4b378 >> 0x20);
    auVar24._8_4_ = uVar58;
    auVar24._0_8_ = _DAT_01d4b370;
    auVar24._12_4_ = uVar59;
    uVar60 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
    fVar37 = auVar54._0_4_;
    fVar19 = fVar37 * (float)_DAT_01d4ae80;
    fVar55 = auVar54._4_4_;
    fVar21 = fVar55 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar39 = SUB41(fVar21,0);
    uVar40 = (undefined1)((uint)fVar21 >> 8);
    uVar41 = (undefined1)((uint)fVar21 >> 0x10);
    uVar42 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = auVar54._8_4_ * (float)_UNK_01d4ae88;
    uVar43 = SUB41(fVar22,0);
    uVar44 = (undefined1)((uint)fVar22 >> 8);
    uVar45 = (undefined1)((uint)fVar22 >> 0x10);
    uVar46 = (undefined1)((uint)fVar22 >> 0x18);
    fVar23 = auVar54._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar47 = SUB41(fVar23,0);
    uVar48 = (undefined1)((uint)fVar23 >> 8);
    uVar49 = (undefined1)((uint)fVar23 >> 0x10);
    uVar50 = (undefined1)((uint)fVar23 >> 0x18);
    auVar25._8_4_ = uVar58;
    auVar25._0_8_ = _DAT_01d4b370;
    auVar25._12_4_ = uVar59;
    uVar61 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
    auVar26._8_4_ = uVar58;
    auVar26._0_8_ = _DAT_01d4b370;
    auVar26._12_4_ = uVar59;
    uVar51 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
    fVar36 = (float)((ulong)uVar51 >> 0x20);
    auVar13[4] = uVar39;
    auVar13._0_4_ = fVar19;
    auVar13[5] = uVar40;
    auVar13[6] = uVar41;
    auVar13[7] = uVar42;
    auVar13[8] = uVar43;
    auVar13[9] = uVar44;
    auVar13[10] = uVar45;
    auVar13[0xb] = uVar46;
    auVar13[0xc] = uVar47;
    auVar13[0xd] = uVar48;
    auVar13[0xe] = uVar49;
    auVar13[0xf] = uVar50;
    uVar64 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
    auVar14[4] = uVar39;
    auVar14._0_4_ = fVar19;
    auVar14[5] = uVar40;
    auVar14[6] = uVar41;
    auVar14[7] = uVar42;
    auVar14[8] = uVar43;
    auVar14[9] = uVar44;
    auVar14[10] = uVar45;
    auVar14[0xb] = uVar46;
    auVar14[0xc] = uVar47;
    auVar14[0xd] = uVar48;
    auVar14[0xe] = uVar49;
    auVar14[0xf] = uVar50;
    uVar66 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5120);
    fVar62 = (float)((ulong)uVar60 >> 0x20);
    auVar15[4] = uVar39;
    auVar15._0_4_ = fVar19;
    auVar15[5] = uVar40;
    auVar15[6] = uVar41;
    auVar15[7] = uVar42;
    auVar15[8] = uVar43;
    auVar15[9] = uVar44;
    auVar15[10] = uVar45;
    auVar15[0xb] = uVar46;
    auVar15[0xc] = uVar47;
    auVar15[0xd] = uVar48;
    auVar15[0xe] = uVar49;
    auVar15[0xf] = uVar50;
    uVar68 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
    auVar16[4] = uVar39;
    auVar16._0_4_ = fVar19;
    auVar16[5] = uVar40;
    auVar16[6] = uVar41;
    auVar16[7] = uVar42;
    auVar16[8] = uVar43;
    auVar16[9] = uVar44;
    auVar16[10] = uVar45;
    auVar16[0xb] = uVar46;
    auVar16[0xc] = uVar47;
    auVar16[0xd] = uVar48;
    auVar16[0xe] = uVar49;
    auVar16[0xf] = uVar50;
    uVar67 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    fVar38 = (float)((ulong)uVar61 >> 0x20);
    auVar17[4] = uVar39;
    auVar17._0_4_ = fVar19;
    auVar17[5] = uVar40;
    auVar17[6] = uVar41;
    auVar17[7] = uVar42;
    auVar17[8] = uVar43;
    auVar17[9] = uVar44;
    auVar17[10] = uVar45;
    auVar17[0xb] = uVar46;
    auVar17[0xc] = uVar47;
    auVar17[0xd] = uVar48;
    auVar17[0xe] = uVar49;
    auVar17[0xf] = uVar50;
    uVar65 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18[4] = uVar39;
    auVar18._0_4_ = fVar19;
    auVar18[5] = uVar40;
    auVar18[6] = uVar41;
    auVar18[7] = uVar42;
    auVar18[8] = SUB41(fVar19,0);
    auVar18[9] = (char)((uint)fVar19 >> 8);
    auVar18[10] = (char)((uint)fVar19 >> 0x10);
    auVar18[0xb] = (char)((uint)fVar19 >> 0x18);
    auVar18[0xc] = uVar39;
    auVar18[0xd] = uVar40;
    auVar18[0xe] = uVar41;
    auVar18[0xf] = uVar42;
    uVar20 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
    fVar69 = (float)_DAT_01d4ae90;
    fVar70 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar71 = (float)_UNK_01d4ae98;
    fVar72 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    uVar27 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd50f8);
    fVar56 = (float)uVar27;
    fVar57 = (float)((ulong)uVar27 >> 0x20);
    uVar27 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd4f90);
    fVar19 = (fVar19 * (float)uVar61 + fVar69 * (float)uVar64 * 0.0 +
             fVar69 * (float)uVar51 * (float)uVar65) - (float)uVar60 * (float)uVar67;
    fVar21 = (fVar21 * fVar38 + fVar70 * (float)((ulong)uVar64 >> 0x20) * 0.0 +
             fVar70 * fVar36 * (float)((ulong)uVar65 >> 0x20)) -
             fVar62 * (float)((ulong)uVar67 >> 0x20);
    uVar39 = SUB41(fVar21,0);
    uVar40 = (undefined1)((uint)fVar21 >> 8);
    uVar41 = (undefined1)((uint)fVar21 >> 0x10);
    uVar42 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (fVar22 * (float)uVar61 + fVar71 * (float)uVar60 * (float)uVar66 +
             fVar71 * (float)uVar20 * 0.0) - (float)uVar51 * (float)uVar68;
    uVar43 = SUB41(fVar22,0);
    uVar44 = (undefined1)((uint)fVar22 >> 8);
    uVar45 = (undefined1)((uint)fVar22 >> 0x10);
    uVar46 = (undefined1)((uint)fVar22 >> 0x18);
    fVar38 = (fVar23 * fVar38 + fVar72 * fVar62 * (float)((ulong)uVar66 >> 0x20) +
             fVar72 * (float)((ulong)uVar20 >> 0x20) * 0.0) -
             fVar36 * (float)((ulong)uVar68 >> 0x20);
    uVar47 = SUB41(fVar38,0);
    uVar48 = (undefined1)((uint)fVar38 >> 8);
    uVar49 = (undefined1)((uint)fVar38 >> 0x10);
    uVar50 = (undefined1)((uint)fVar38 >> 0x18);
    auVar7[4] = uVar39;
    auVar7._0_4_ = fVar19;
    auVar7[5] = uVar40;
    auVar7[6] = uVar41;
    auVar7[7] = uVar42;
    auVar7[8] = uVar43;
    auVar7[9] = uVar44;
    auVar7[10] = uVar45;
    auVar7[0xb] = uVar46;
    auVar7[0xc] = uVar47;
    auVar7[0xd] = uVar48;
    auVar7[0xe] = uVar49;
    auVar7[0xf] = uVar50;
    uVar20 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
    fVar23 = (float)uVar27;
    fVar36 = (float)((ulong)uVar27 >> 0x20);
    auVar8[4] = uVar39;
    auVar8._0_4_ = fVar19;
    auVar8[5] = uVar40;
    auVar8[6] = uVar41;
    auVar8[7] = uVar42;
    auVar8[8] = uVar43;
    auVar8[9] = uVar44;
    auVar8[10] = uVar45;
    auVar8[0xb] = uVar46;
    auVar8[0xc] = uVar47;
    auVar8[0xd] = uVar48;
    auVar8[0xe] = uVar49;
    auVar8[0xf] = uVar50;
    uVar60 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
    uVar61 = a64_TBL(ZEXT816(0),auVar54,DAT_01cd5418);
    fVar62 = (float)uVar61;
    fVar63 = (float)((ulong)uVar61 >> 0x20);
    auVar9[4] = uVar39;
    auVar9._0_4_ = fVar19;
    auVar9[5] = uVar40;
    auVar9[6] = uVar41;
    auVar9[7] = uVar42;
    auVar9[8] = uVar43;
    auVar9[9] = uVar44;
    auVar9[10] = uVar45;
    auVar9[0xb] = uVar46;
    auVar9[0xc] = uVar47;
    auVar9[0xd] = uVar48;
    auVar9[0xe] = uVar49;
    auVar9[0xf] = uVar50;
    uVar51 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    auVar28._4_4_ =
         (int)(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar19)))) >> 0x20);
    auVar28._0_4_ = fVar19;
    auVar28._8_4_ = fVar19;
    auVar28._12_4_ =
         (int)(CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,fVar19)))) >> 0x20);
    uVar27 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50b0);
    auVar10[4] = uVar39;
    auVar10._0_4_ = fVar19;
    auVar10[5] = uVar40;
    auVar10[6] = uVar41;
    auVar10[7] = uVar42;
    auVar10[8] = uVar43;
    auVar10[9] = uVar44;
    auVar10[10] = uVar45;
    auVar10[0xb] = uVar46;
    auVar10[0xc] = uVar47;
    auVar10[0xd] = uVar48;
    auVar10[0xe] = uVar49;
    auVar10[0xf] = uVar50;
    uVar64 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
    auVar11[4] = uVar39;
    auVar11._0_4_ = fVar19;
    auVar11[5] = uVar40;
    auVar11[6] = uVar41;
    auVar11[7] = uVar42;
    auVar11[8] = uVar43;
    auVar11[9] = uVar44;
    auVar11[10] = uVar45;
    auVar11[0xb] = uVar46;
    auVar11[0xc] = uVar47;
    auVar11[0xd] = uVar48;
    auVar11[0xe] = uVar49;
    auVar11[0xf] = uVar50;
    uVar61 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
    fVar19 = (fVar23 * fVar19 + fVar69 * fVar37 * (float)uVar20 + fVar69 * fVar62 * (float)uVar51) -
             fVar56 * (float)uVar64;
    fVar21 = (fVar36 * fVar21 + fVar70 * fVar55 * (float)((ulong)uVar20 >> 0x20) +
             fVar70 * fVar63 * (float)((ulong)uVar51 >> 0x20)) -
             fVar57 * (float)((ulong)uVar64 >> 0x20);
    fVar22 = (fVar23 * fVar22 + fVar71 * fVar56 * (float)uVar60 + fVar71 * fVar37 * (float)uVar27) -
             fVar62 * (float)uVar61;
    fVar38 = (fVar36 * fVar38 + fVar72 * fVar57 * (float)((ulong)uVar60 >> 0x20) +
             fVar72 * fVar55 * (float)((ulong)uVar27 >> 0x20)) -
             fVar63 * (float)((ulong)uVar61 >> 0x20);
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(local_70 + 0xb8) >> 0x20) +
                         (float)CONCAT13((byte)((uint)fVar38 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x38),
                                         CONCAT12((byte)((uint)fVar38 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                                  CONCAT11((byte)((uint)fVar38 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                           SUB41(fVar38,0) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x20)))),
                         (float)*(undefined8 *)(local_70 + 0xb8) +
                         (float)CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                         CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar22 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar22,0) & (byte)DAT_01d4ab58))));
    local_70 = CONCAT44((float)((ulong)*(undefined8 *)(local_70 + 0xb0) >> 0x20) +
                        (float)CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x38),
                                        CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                                 CONCAT11((byte)((uint)fVar21 >> 8) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                                          SUB41(fVar21,0) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x20)))),
                        (float)*(undefined8 *)(local_70 + 0xb0) +
                        (float)CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                        CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar19 >> 8) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 8),
                                                          SUB41(fVar19,0) & (byte)DAT_01d4ab50))));
    FUN_012dc9c0(*(undefined8 *)(param_2 + 0x10),&local_70);
    *(undefined1 *)(param_2 + 0x18) = 1;
    uVar60 = *(undefined8 *)(param_2 + 0x10);
    FUN_00a92cd0(DAT_01d4bb38,0,ZEXT816(0));
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_4_ = extraout_var_01;
    auVar1._12_4_ = extraout_var_03;
    uVar52 = a64_TBL(ZEXT816(0),auVar1,uVar52);
    auVar2._4_4_ = extraout_var;
    auVar2._0_4_ = extraout_s0;
    auVar2._8_4_ = extraout_var_01;
    auVar2._12_4_ = extraout_var_03;
    uVar20 = a64_TBL(ZEXT816(0),auVar2,uVar30);
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_4_ = extraout_var_01;
    auVar3._12_4_ = extraout_var_03;
    uVar51 = a64_TBL(ZEXT816(0),auVar3,uVar31);
    auVar4._4_4_ = extraout_var;
    auVar4._0_4_ = extraout_s0;
    auVar4._8_4_ = extraout_var_01;
    auVar4._12_4_ = extraout_var_03;
    uVar27 = a64_TBL(ZEXT816(0),auVar4,uVar32);
    auVar5._4_4_ = extraout_var;
    auVar5._0_4_ = extraout_s0;
    auVar5._8_4_ = extraout_var_01;
    auVar5._12_4_ = extraout_var_03;
    uVar53 = a64_TBL(ZEXT816(0),auVar5,uVar53);
    auVar6._4_4_ = extraout_var;
    auVar6._0_4_ = extraout_s0;
    auVar6._8_4_ = extraout_s0;
    auVar6._12_4_ = extraout_var;
    uVar61 = a64_TBL(ZEXT816(0),auVar6,uVar29);
    fVar38 = (fVar36 * extraout_var + fVar70 * fVar55 * (float)((ulong)uVar52 >> 0x20) +
             fVar70 * fVar63 * (float)((ulong)uVar53 >> 0x20)) -
             fVar57 * (float)((ulong)uVar27 >> 0x20);
    fVar19 = (fVar36 * extraout_var_03 + fVar72 * fVar57 * (float)((ulong)uVar20 >> 0x20) +
             fVar72 * fVar55 * (float)((ulong)uVar61 >> 0x20)) -
             fVar63 * (float)((ulong)uVar51 >> 0x20);
    uStack_78 = CONCAT17((char)((uint)fVar19 >> 0x18),
                         CONCAT16((char)((uint)fVar19 >> 0x10),
                                  CONCAT15((char)((uint)fVar19 >> 8),
                                           CONCAT14(SUB41(fVar19,0),
                                                    (fVar23 * extraout_var_01 +
                                                     fVar71 * fVar56 * (float)uVar20 +
                                                    fVar71 * fVar37 * (float)uVar61) -
                                                    fVar62 * (float)uVar51))));
    local_80 = CONCAT17((char)((uint)fVar38 >> 0x18),
                        CONCAT16((char)((uint)fVar38 >> 0x10),
                                 CONCAT15((char)((uint)fVar38 >> 8),
                                          CONCAT14(SUB41(fVar38,0),
                                                   (fVar23 * extraout_s0 +
                                                    fVar69 * fVar37 * (float)uVar52 +
                                                   fVar69 * fVar62 * (float)uVar53) -
                                                   fVar56 * (float)uVar27))));
    FUN_012dc7f0(uVar60,&local_80);
    uVar61 = *(undefined8 *)(param_2 + 0x10);
    FUN_012e54a0(&local_88,uVar61);
    FUN_012e60b0(uVar61,&local_88);
    if (local_88 != 0) {
      (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
      local_88 = 0;
    }
    FUN_012e54a0(&local_70,*(undefined8 *)(param_2 + 0x10));
    lVar33 = local_70;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    }
    uStack_68 = *(undefined8 *)(lVar33 + 0xa8);
    local_70 = *(long *)(lVar33 + 0xa0);
    uVar61 = *(undefined8 *)(param_2 + 0x10);
    plVar35 = &local_70;
  }
  FUN_012dc7f0(uVar61,plVar35);
  return;
}


