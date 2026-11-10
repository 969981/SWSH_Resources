/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb5a20; name: FUN_00eb5a20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00eb5a20(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  bool bVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 uVar30;
  undefined1 extraout_var_04;
  undefined1 uVar31;
  undefined1 extraout_var_05;
  undefined1 uVar32;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 uVar33;
  undefined1 extraout_var_12;
  undefined1 uVar34;
  undefined1 extraout_var_13;
  undefined1 uVar35;
  undefined1 extraout_var_14;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined4 uStack_144;
  undefined8 **local_138;
  undefined8 *local_130;
  uint *puStack_128;
  int *local_120;
  undefined8 *local_118;
  int *local_110;
  int local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_38;
  uint local_34;
  
  fVar24 = DAT_01d4c664;
  local_34 = 0;
  fVar49 = *(float *)(param_1 + 0x11e);
  if (fVar49 <= 0.0) {
    *(undefined4 *)(param_1 + 0x11f) = 1;
    param_1[0xfb] = param_1[0xdf];
    param_1[0xfa] = param_1[0xde];
    param_1[0xfd] = param_1[0xe1];
    param_1[0xfc] = param_1[0xe0];
    param_1[0xff] = param_1[0xe3];
    param_1[0xfe] = param_1[0xe2];
    param_1[0x11d] = 0;
    param_1[0x11c] = 0;
    param_1[0x11b] = 0;
    param_1[0x11a] = 0;
    param_1[0x119] = 0;
    param_1[0x118] = 0;
    param_1[0x117] = 0;
    param_1[0x116] = 0;
    param_1[0x115] = 0;
    param_1[0x114] = 0;
    param_1[0x113] = 0;
    param_1[0x112] = 0;
    param_1[0x111] = 0;
    param_1[0x110] = 0;
    param_1[0x10f] = 0;
    param_1[0x10e] = 0;
    param_1[0x10d] = 0;
    param_1[0x10c] = 0;
    param_1[0x10b] = 0;
    param_1[0x10a] = 0;
    param_1[0x109] = 0;
    param_1[0x108] = 0;
    param_1[0x107] = 0;
    param_1[0x106] = 0;
    param_1[0x105] = 0;
    param_1[0x104] = 0;
    param_1[0x103] = 0;
    param_1[0x102] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
  }
  else {
    uVar26 = 2;
    bVar25 = DAT_01d4c664 <= fVar49;
    *(undefined4 *)(param_1 + 0x11f) = 0;
    if (bVar25) {
      if (DAT_01d4c0a8 <= fVar49) {
        uVar26 = 6;
      }
      else {
        uVar26 = 4;
      }
    }
    *(undefined4 *)(param_1 + 0x11f) = uVar26;
    fVar49 = *(float *)(param_1 + 0xec) * *(float *)((long)param_1 + 0x764);
    fVar36 = *(float *)((long)param_1 + 0x8f4);
    local_60 = 0;
    local_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    fVar37 = (float)_DAT_01d49dc0 * fVar49 * fVar36;
    fVar48 = (float)((ulong)_DAT_01d49dc0 >> 0x20) * fVar49 * fVar36;
    uVar30 = (undefined1)((uint)fVar48 >> 8);
    uVar31 = (undefined1)((uint)fVar48 >> 0x10);
    uVar32 = (undefined1)((uint)fVar48 >> 0x18);
    fVar40 = (float)_UNK_01d49dc8 * fVar49 * fVar36;
    fVar36 = (float)((ulong)_UNK_01d49dc8 >> 0x20) * fVar49 * fVar36;
    uVar33 = (undefined1)((uint)fVar36 >> 8);
    uVar34 = (undefined1)((uint)fVar36 >> 0x10);
    uVar35 = (undefined1)((uint)fVar36 >> 0x18);
    uStack_144 = (undefined4)
                 (CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(SUB41(fVar36,0),fVar40)))
                          ) >> 0x20);
    uVar11 = CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(SUB41(fVar48,0),fVar37))));
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_48 = CONCAT17(uVar35,CONCAT16(uVar34,CONCAT15(uVar33,CONCAT14(SUB41(fVar36,0),fVar40))));
    local_50 = CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(SUB41(fVar48,0),fVar37))));
    FUN_007101c0(param_1 + 0x14);
    FUN_00a92cd0(extraout_var_02,0,0);
    auVar23._8_4_ = fVar40;
    auVar23._0_8_ = uVar11;
    auVar20._8_4_ = fVar40;
    auVar20._0_8_ = uVar11;
    auVar19._8_4_ = fVar40;
    auVar19._0_8_ = uVar11;
    fVar50 = (float)((ulong)uVar11 >> 0x20);
    fVar40 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
             (float)_DAT_01d4ae80;
    fVar36 = (float)CONCAT13(extraout_var_06,
                             CONCAT12(extraout_var_05,CONCAT11(extraout_var_04,extraout_var_03))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar43 = (float)CONCAT13(extraout_var_10,
                             CONCAT12(extraout_var_09,CONCAT11(extraout_var_08,extraout_var_07))) *
             (float)_UNK_01d4ae88;
    fVar45 = (float)CONCAT13(extraout_var_14,
                             CONCAT12(extraout_var_13,CONCAT11(extraout_var_12,extraout_var_11))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uStack_f8 = CONCAT17(extraout_var_14,
                         CONCAT16(extraout_var_13,
                                  CONCAT15(extraout_var_12,
                                           CONCAT14(extraout_var_11,
                                                    CONCAT13(extraout_var_10,
                                                             CONCAT12(extraout_var_09,
                                                                      CONCAT11(extraout_var_08,
                                                                               extraout_var_07))))))
                        );
    local_100 = CONCAT17(extraout_var_06,
                         CONCAT16(extraout_var_05,
                                  CONCAT15(extraout_var_04,
                                           CONCAT14(extraout_var_03,
                                                    CONCAT13(extraout_var_01,
                                                             CONCAT12(extraout_var_00,
                                                                      CONCAT11(extraout_var,
                                                                               extraout_b0)))))));
    auVar19._12_4_ = uStack_144;
    uVar11 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
    fVar49 = (float)((ulong)uVar11 >> 0x20);
    auVar20._12_4_ = uStack_144;
    uVar47 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar12._4_4_ = fVar36;
    auVar12._0_4_ = fVar40;
    auVar12._8_4_ = fVar43;
    auVar12._12_4_ = fVar45;
    uVar21 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
    auVar13._4_4_ = fVar36;
    auVar13._0_4_ = fVar40;
    auVar13._8_4_ = fVar43;
    auVar13._12_4_ = fVar45;
    uVar52 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
    local_38 = 2;
    fVar38 = (float)((ulong)uVar47 >> 0x20);
    auVar23._12_4_ = uStack_144;
    uVar53 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    auVar14._4_4_ = fVar36;
    auVar14._0_4_ = fVar40;
    auVar14._8_4_ = fVar43;
    auVar14._12_4_ = fVar45;
    uVar55 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
    auVar15._4_4_ = fVar36;
    auVar15._0_4_ = fVar40;
    auVar15._8_4_ = fVar43;
    auVar15._12_4_ = fVar45;
    uVar39 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
    auVar16._4_4_ = fVar36;
    auVar16._0_4_ = fVar40;
    auVar16._8_4_ = fVar43;
    auVar16._12_4_ = fVar45;
    uVar56 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
    auVar17._4_4_ = fVar36;
    auVar17._0_4_ = fVar40;
    auVar17._8_4_ = fVar40;
    auVar17._12_4_ = fVar36;
    uVar18 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
    fVar44 = (float)_UNK_01d4ae98;
    fVar46 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar41 = (float)_DAT_01d4ae90;
    fVar42 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar54 = (float)((ulong)uVar53 >> 0x20);
    fVar48 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar2[1] = extraout_var;
    auVar2[0] = extraout_b0;
    auVar2[2] = extraout_var_00;
    auVar2[3] = extraout_var_01;
    auVar2[4] = extraout_var_03;
    auVar2[5] = extraout_var_04;
    auVar2[6] = extraout_var_05;
    auVar2[7] = extraout_var_06;
    auVar2[8] = extraout_var_07;
    auVar2[9] = extraout_var_08;
    auVar2[10] = extraout_var_09;
    auVar2[0xb] = extraout_var_10;
    auVar2[0xc] = extraout_var_11;
    auVar2[0xd] = extraout_var_12;
    auVar2[0xe] = extraout_var_13;
    auVar2[0xf] = extraout_var_14;
    uVar22 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    fVar51 = (float)((ulong)uVar22 >> 0x20);
    fVar40 = (fVar40 * (float)uVar11 + fVar41 * fVar37 * (float)uVar21 +
             fVar41 * (float)uVar53 * (float)uVar39) - (float)uVar47 * (float)uVar55;
    fVar36 = (fVar36 * fVar49 + fVar42 * fVar50 * (float)((ulong)uVar21 >> 0x20) +
             fVar42 * fVar54 * (float)((ulong)uVar39 >> 0x20)) -
             fVar38 * (float)((ulong)uVar55 >> 0x20);
    fVar37 = (fVar43 * (float)uVar11 + fVar44 * (float)uVar47 * (float)uVar52 +
             fVar44 * fVar37 * (float)uVar18) - (float)uVar53 * (float)uVar56;
    fVar38 = (fVar45 * fVar49 + fVar46 * fVar38 * (float)((ulong)uVar52 >> 0x20) +
             fVar46 * fVar50 * (float)((ulong)uVar18 >> 0x20)) -
             fVar54 * (float)((ulong)uVar56 >> 0x20);
    auVar5._4_4_ = fVar36;
    auVar5._0_4_ = fVar40;
    auVar5._8_4_ = fVar37;
    auVar5._12_4_ = fVar38;
    uVar47 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
    auVar3[1] = extraout_var;
    auVar3[0] = extraout_b0;
    auVar3[2] = extraout_var_00;
    auVar3[3] = extraout_var_01;
    auVar3[4] = extraout_var_03;
    auVar3[5] = extraout_var_04;
    auVar3[6] = extraout_var_05;
    auVar3[7] = extraout_var_06;
    auVar3[8] = extraout_var_07;
    auVar3[9] = extraout_var_08;
    auVar3[10] = extraout_var_09;
    auVar3[0xb] = extraout_var_10;
    auVar3[0xc] = extraout_var_11;
    auVar3[0xd] = extraout_var_12;
    auVar3[0xe] = extraout_var_13;
    auVar3[0xf] = extraout_var_14;
    uVar21 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
    fVar43 = (float)((ulong)uVar21 >> 0x20);
    auVar6._4_4_ = fVar36;
    auVar6._0_4_ = fVar40;
    auVar6._8_4_ = fVar37;
    auVar6._12_4_ = fVar38;
    uVar53 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5120);
    auVar4[1] = extraout_var;
    auVar4[0] = extraout_b0;
    auVar4[2] = extraout_var_00;
    auVar4[3] = extraout_var_01;
    auVar4[4] = extraout_var_03;
    auVar4[5] = extraout_var_04;
    auVar4[6] = extraout_var_05;
    auVar4[7] = extraout_var_06;
    auVar4[8] = extraout_var_07;
    auVar4[9] = extraout_var_08;
    auVar4[10] = extraout_var_09;
    auVar4[0xb] = extraout_var_10;
    auVar4[0xc] = extraout_var_11;
    auVar4[0xd] = extraout_var_12;
    auVar4[0xe] = extraout_var_13;
    auVar4[0xf] = extraout_var_14;
    uVar55 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    fVar45 = (float)((ulong)uVar55 >> 0x20);
    fVar49 = (float)CONCAT13(extraout_var_01,
                             CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
    auVar7._4_4_ = fVar36;
    auVar7._0_4_ = fVar40;
    auVar7._8_4_ = fVar37;
    auVar7._12_4_ = fVar38;
    uVar11 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50f8);
    auVar8._4_4_ = fVar36;
    auVar8._0_4_ = fVar40;
    auVar8._8_4_ = fVar37;
    auVar8._12_4_ = fVar38;
    uVar39 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
    auVar9._4_4_ = fVar36;
    auVar9._0_4_ = fVar40;
    auVar9._8_4_ = fVar37;
    auVar9._12_4_ = fVar38;
    uVar52 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5270);
    auVar10._4_4_ = fVar36;
    auVar10._0_4_ = fVar40;
    auVar10._8_4_ = fVar40;
    auVar10._12_4_ = fVar36;
    uVar18 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50b0);
    local_104 = 8;
    fVar40 = ((float)uVar22 * fVar40 + fVar41 * fVar48 * (float)uVar47 +
             fVar41 * (float)uVar55 * (float)uVar11) - (float)uVar21 * (float)uVar39;
    fVar48 = (fVar51 * fVar36 +
              fVar42 * (float)(CONCAT17(extraout_var_06,
                                        CONCAT16(extraout_var_05,
                                                 CONCAT15(extraout_var_04,
                                                          CONCAT14(extraout_var_03,fVar48)))) >>
                              0x20) * (float)((ulong)uVar47 >> 0x20) +
             fVar42 * fVar45 * (float)((ulong)uVar11 >> 0x20)) -
             fVar43 * (float)((ulong)uVar39 >> 0x20);
    fVar37 = ((float)uVar22 * fVar37 + fVar44 * (float)uVar21 * (float)uVar53 +
             fVar44 * fVar49 * (float)uVar18) - (float)uVar55 * (float)uVar52;
    fVar49 = (fVar51 * fVar38 + fVar46 * fVar43 * (float)((ulong)uVar53 >> 0x20) +
             fVar46 * (float)(CONCAT17(extraout_var_06,
                                       CONCAT16(extraout_var_05,
                                                CONCAT15(extraout_var_04,
                                                         CONCAT14(extraout_var_03,fVar49)))) >> 0x20
                             ) * (float)((ulong)uVar18 >> 0x20)) -
             fVar45 * (float)((ulong)uVar52 >> 0x20);
    uStack_d8 = CONCAT17((byte)((uint)fVar49 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                         CONCAT16((byte)((uint)fVar49 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30)
                                  ,CONCAT15((byte)((uint)fVar49 >> 8) &
                                            (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                            CONCAT14(SUB41(fVar49,0) &
                                                     (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                     CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                              (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar37 >> 0x10)
                                                                       & (byte)((ulong)DAT_01d4ab58
                                                                               >> 0x10),
                                                                       CONCAT11((byte)((uint)fVar37
                                                                                      >> 8) &
                                                                                (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar37,0) & (byte)DAT_01d4ab58)))))));
    local_e0 = CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                        CONCAT16((byte)((uint)fVar48 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                 CONCAT15((byte)((uint)fVar48 >> 8) &
                                          (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                          CONCAT14(SUB41(fVar48,0) &
                                                   (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                   CONCAT13((byte)((uint)fVar40 >> 0x18) &
                                                            (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                                                     (byte)((ulong)DAT_01d4ab50 >>
                                                                           0x10),
                                                                     CONCAT11((byte)((uint)fVar40 >>
                                                                                    8) &
                                                                              (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar40,0) & (byte)DAT_01d4ab50)))))));
    local_130 = &local_100;
    local_120 = &local_38;
    local_118 = &local_50;
    local_110 = &local_104;
    puStack_128 = (uint *)&local_f0;
    local_60 = local_e0;
    local_58 = uStack_d8;
    if ((2 < *(int *)(param_1 + 0x11f)) &&
       (FUN_00eb5e70((char)DAT_01d4c1d4,&local_130), 4 < *(int *)(param_1 + 0x11f))) {
      FUN_00eb5e70(SUB41(fVar24,0),&local_130);
    }
    FUN_00eb5e70(SUB41(*(float *)(param_1 + 0x11e) * 0.5,0),&local_130);
    puStack_128 = &local_34;
    local_38 = 1;
    local_34 = 0;
    local_104 = 9;
    local_138 = &local_130;
    local_130 = param_1;
    local_120 = (int *)&local_f0;
    if (2 < *(int *)(param_1 + 0x11f)) {
      local_104 = 8;
      local_38 = 2;
      FUN_00eb6200(&local_138,9,1);
      if (4 < *(int *)(param_1 + 0x11f)) {
        local_104 = local_104 + -1;
        local_38 = local_38 + 1;
        FUN_00eb6200(&local_138);
      }
    }
    FUN_00eb6200(&local_138,local_104,local_38);
    uVar27 = (ulong)local_34;
    if (local_34 < 0x12) {
      uVar1 = 2 - local_34 & 3;
      if (uVar1 != 0) {
        iVar29 = -uVar1;
        uVar28 = (long)(int)local_34;
        do {
          uVar27 = uVar28 + 1;
          iVar29 = iVar29 + 1;
          param_1[uVar28 * 2 + 0xfb] = 0;
          param_1[uVar28 * 2 + 0xfa] = 0;
          uVar28 = uVar27;
        } while (iVar29 != 0);
      }
      if (2 < 0x11 - local_34) {
        param_1 = param_1 + (long)(int)uVar27 * 2 + 0x100;
        do {
          uVar1 = (int)uVar27 + 4;
          uVar27 = (ulong)uVar1;
          param_1[-5] = 0;
          param_1[-6] = 0;
          param_1[-3] = 0;
          param_1[-4] = 0;
          param_1[-1] = 0;
          param_1[-2] = 0;
          param_1[1] = 0;
          *param_1 = 0;
          param_1 = param_1 + 8;
        } while (uVar1 < 0x12);
      }
    }
  }
  return;
}


