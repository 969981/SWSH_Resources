/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013d55d0; name: FUN_013d55d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013d55d0(long *param_1)

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
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined4 uVar30;
  long *plVar31;
  long lVar32;
  code *pcVar33;
  undefined8 *puVar34;
  undefined1 extraout_b0;
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
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
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
  undefined1 uVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined8 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  undefined1 auStack_120 [104];
  long local_b8;
  undefined *local_b0;
  code *pcStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 *local_90 [12];
  
  FUN_013d5a10();
  pcVar33 = (code *)param_1[0x9b];
  *(undefined4 *)(param_1 + 0x97) = 0;
  if (pcVar33 != (code *)0x0) {
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9a] = 0;
    param_1[0x9b] = 0;
    (*pcVar33)(param_1 + 0x9e);
  }
  puVar27 = PTR_LAB_02729318;
  param_1[0x9e] = (long)param_1;
  puVar29 = PTR_LAB_02729328;
  puVar28 = PTR_LAB_02729320;
  param_1[0x9f] = 0x90;
  param_1[0xa0] = 1;
  param_1[0x9a] = (long)puVar27;
  param_1[0x9b] = (long)puVar28;
  param_1[0x9c] = (long)puVar29;
  param_1[0x9d] = (long)PTR_LAB_02729330;
  FUN_013d5d60(param_1);
  FUN_013d60d0(param_1);
  (**(code **)(*param_1 + 0xa8))(param_1);
  puVar34 = *(undefined8 **)(param_1[0xd] + 0x60);
  plVar31 = (long *)(**(code **)*puVar34)(puVar34);
  lVar32 = FUN_0132d9a0();
  for (; plVar31 != (long *)lVar32; plVar31 = (long *)*plVar31) {
  }
  lVar32 = puVar34[0x6e];
  if (lVar32 == 0) {
    FUN_013c3ff0(0);
  }
  else {
    plVar31 = (long *)(lVar32 + 0x48);
    (**(code **)(*plVar31 + 0x10))(plVar31);
    FUN_013c3ff0(lVar32);
    (**(code **)(*plVar31 + 0x18))(plVar31);
  }
  puVar27 = PTR_DAT_02710848;
  uVar30 = FUN_0106aec0(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0xd0));
  *(undefined4 *)(param_1 + 0xaf) = uVar30;
  local_b0 = (undefined *)0x804af2ac17449e9a;
  pcStack_a8 = (code *)0x1cdb6a1;
  local_a0 = (undefined *)0x15;
  local_98 = (undefined *)0x0;
  FUN_012d6d20(&local_b0);
  if (local_98 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_98 + 0x48) + 0x18))();
    local_98 = (undefined *)0x0;
  }
  lVar32 = *(long *)(*(long *)puVar27 + 0x90);
  if (lVar32 == 0) {
    FUN_01009f60(&local_b8,0);
  }
  else {
    plVar31 = (long *)(lVar32 + 0x48);
    (**(code **)(*plVar31 + 0x10))(plVar31);
    FUN_01009f60(&local_b8,lVar32);
    (**(code **)(*plVar31 + 0x18))(plVar31);
  }
  FUN_00a92cd0(0,DAT_01d4c448,0);
  uVar30 = (undefined4)_UNK_01d49df8;
  uVar54 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
  fVar17 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
           (float)_DAT_01d4ae80;
  fVar20 = (float)CONCAT13(extraout_var_05,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
           (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar40 = SUB41(fVar20,0);
  uVar41 = (undefined1)((uint)fVar20 >> 8);
  uVar42 = (undefined1)((uint)fVar20 >> 0x10);
  uVar43 = (undefined1)((uint)fVar20 >> 0x18);
  fVar21 = (float)CONCAT13(extraout_var_09,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
           (float)_UNK_01d4ae88;
  uVar44 = SUB41(fVar21,0);
  uVar45 = (undefined1)((uint)fVar21 >> 8);
  uVar46 = (undefined1)((uint)fVar21 >> 0x10);
  uVar47 = (undefined1)((uint)fVar21 >> 0x18);
  fVar22 = (float)CONCAT13(extraout_var_13,
                           CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
           (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar48 = SUB41(fVar22,0);
  uVar49 = (undefined1)((uint)fVar22 >> 8);
  uVar50 = (undefined1)((uint)fVar22 >> 0x10);
  uVar51 = (undefined1)((uint)fVar22 >> 0x18);
  auVar23._8_4_ = uVar30;
  auVar23._0_8_ = _DAT_01d49df0;
  auVar23._12_4_ = uVar54;
  uVar10 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
  fVar38 = (float)((ulong)uVar10 >> 0x20);
  auVar11[4] = uVar40;
  auVar11._0_4_ = fVar17;
  auVar11[5] = uVar41;
  auVar11[6] = uVar42;
  auVar11[7] = uVar43;
  auVar11[8] = uVar44;
  auVar11[9] = uVar45;
  auVar11[10] = uVar46;
  auVar11[0xb] = uVar47;
  auVar11[0xc] = uVar48;
  auVar11[0xd] = uVar49;
  auVar11[0xe] = uVar50;
  auVar11[0xf] = uVar51;
  uVar61 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  auVar24._8_4_ = uVar30;
  auVar24._0_8_ = _DAT_01d49df0;
  auVar24._12_4_ = uVar54;
  uVar55 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  auVar25._8_4_ = uVar30;
  auVar25._0_8_ = _DAT_01d49df0;
  auVar25._12_4_ = uVar54;
  uVar39 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5418);
  fVar52 = (float)((ulong)uVar39 >> 0x20);
  auVar12[4] = uVar40;
  auVar12._0_4_ = fVar17;
  auVar12[5] = uVar41;
  auVar12[6] = uVar42;
  auVar12[7] = uVar43;
  auVar12[8] = uVar44;
  auVar12[9] = uVar45;
  auVar12[10] = uVar46;
  auVar12[0xb] = uVar47;
  auVar12[0xc] = uVar48;
  auVar12[0xd] = uVar49;
  auVar12[0xe] = uVar50;
  auVar12[0xf] = uVar51;
  uVar63 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
  auVar13[4] = uVar40;
  auVar13._0_4_ = fVar17;
  auVar13[5] = uVar41;
  auVar13[6] = uVar42;
  auVar13[7] = uVar43;
  auVar13[8] = uVar44;
  auVar13[9] = uVar45;
  auVar13[10] = uVar46;
  auVar13[0xb] = uVar47;
  auVar13[0xc] = uVar48;
  auVar13[0xd] = uVar49;
  auVar13[0xe] = uVar50;
  auVar13[0xf] = uVar51;
  uVar64 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
  auVar14[4] = uVar40;
  auVar14._0_4_ = fVar17;
  auVar14[5] = uVar41;
  auVar14[6] = uVar42;
  auVar14[7] = uVar43;
  auVar14[8] = uVar44;
  auVar14[9] = uVar45;
  auVar14[10] = uVar46;
  auVar14[0xb] = uVar47;
  auVar14[0xc] = uVar48;
  auVar14[0xd] = uVar49;
  auVar14[0xe] = uVar50;
  auVar14[0xf] = uVar51;
  uVar65 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5270);
  fVar56 = (float)((ulong)uVar55 >> 0x20);
  auVar15[4] = uVar40;
  auVar15._0_4_ = fVar17;
  auVar15[5] = uVar41;
  auVar15[6] = uVar42;
  auVar15[7] = uVar43;
  auVar15[8] = uVar44;
  auVar15[9] = uVar45;
  auVar15[10] = uVar46;
  auVar15[0xb] = uVar47;
  auVar15[0xc] = uVar48;
  auVar15[0xd] = uVar49;
  auVar15[0xe] = uVar50;
  auVar15[0xf] = uVar51;
  uVar62 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
  auVar16[4] = uVar40;
  auVar16._0_4_ = fVar17;
  auVar16[5] = uVar41;
  auVar16[6] = uVar42;
  auVar16[7] = uVar43;
  auVar16[8] = SUB41(fVar17,0);
  auVar16[9] = (char)((uint)fVar17 >> 8);
  auVar16[10] = (char)((uint)fVar17 >> 0x10);
  auVar16[0xb] = (char)((uint)fVar17 >> 0x18);
  auVar16[0xc] = uVar40;
  auVar16[0xd] = uVar41;
  auVar16[0xe] = uVar42;
  auVar16[0xf] = uVar43;
  uVar18 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50b0);
  auVar1[1] = extraout_var;
  auVar1[0] = extraout_b0;
  auVar1[2] = extraout_var_00;
  auVar1[3] = extraout_var_01;
  auVar1[4] = extraout_var_02;
  auVar1[5] = extraout_var_03;
  auVar1[6] = extraout_var_04;
  auVar1[7] = extraout_var_05;
  auVar1[8] = extraout_var_06;
  auVar1[9] = extraout_var_07;
  auVar1[10] = extraout_var_08;
  auVar1[0xb] = extraout_var_09;
  auVar1[0xc] = extraout_var_10;
  auVar1[0xd] = extraout_var_11;
  auVar1[0xe] = extraout_var_12;
  auVar1[0xf] = extraout_var_13;
  uVar26 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd50f8);
  fVar53 = (float)((ulong)uVar26 >> 0x20);
  fVar57 = (float)_DAT_01d4ae90;
  fVar58 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar59 = (float)_UNK_01d4ae98;
  fVar60 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar2[1] = extraout_var;
  auVar2[0] = extraout_b0;
  auVar2[2] = extraout_var_00;
  auVar2[3] = extraout_var_01;
  auVar2[4] = extraout_var_02;
  auVar2[5] = extraout_var_03;
  auVar2[6] = extraout_var_04;
  auVar2[7] = extraout_var_05;
  auVar2[8] = extraout_var_06;
  auVar2[9] = extraout_var_07;
  auVar2[10] = extraout_var_08;
  auVar2[0xb] = extraout_var_09;
  auVar2[0xc] = extraout_var_10;
  auVar2[0xd] = extraout_var_11;
  auVar2[0xe] = extraout_var_12;
  auVar2[0xf] = extraout_var_13;
  uVar19 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  fVar35 = (fVar17 * (float)uVar10 + fVar57 * (float)uVar61 * 0.0 +
           fVar57 * (float)uVar39 * (float)uVar62) - (float)uVar55 * (float)uVar64;
  fVar36 = (fVar20 * fVar38 + fVar58 * (float)((ulong)uVar61 >> 0x20) * 0.0 +
           fVar58 * fVar52 * (float)((ulong)uVar62 >> 0x20)) -
           fVar56 * (float)((ulong)uVar64 >> 0x20);
  fVar37 = (fVar21 * (float)uVar10 + fVar59 * (float)uVar55 * (float)uVar63 +
           fVar59 * (float)uVar18 * 0.0) - (float)uVar39 * (float)uVar65;
  fVar38 = (fVar22 * fVar38 + fVar60 * fVar56 * (float)((ulong)uVar63 >> 0x20) +
           fVar60 * (float)((ulong)uVar18 >> 0x20) * 0.0) - fVar52 * (float)((ulong)uVar65 >> 0x20);
  fVar20 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  auVar4._4_4_ = fVar36;
  auVar4._0_4_ = fVar35;
  auVar4._8_4_ = fVar37;
  auVar4._12_4_ = fVar38;
  uVar55 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  auVar5._4_4_ = fVar36;
  auVar5._0_4_ = fVar35;
  auVar5._8_4_ = fVar37;
  auVar5._12_4_ = fVar38;
  uVar63 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
  fVar21 = (float)((ulong)uVar19 >> 0x20);
  auVar3[1] = extraout_var;
  auVar3[0] = extraout_b0;
  auVar3[2] = extraout_var_00;
  auVar3[3] = extraout_var_01;
  auVar3[4] = extraout_var_02;
  auVar3[5] = extraout_var_03;
  auVar3[6] = extraout_var_04;
  auVar3[7] = extraout_var_05;
  auVar3[8] = extraout_var_06;
  auVar3[9] = extraout_var_07;
  auVar3[10] = extraout_var_08;
  auVar3[0xb] = extraout_var_09;
  auVar3[0xc] = extraout_var_10;
  auVar3[0xd] = extraout_var_11;
  auVar3[0xe] = extraout_var_12;
  auVar3[0xf] = extraout_var_13;
  uVar62 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  fVar52 = (float)((ulong)uVar62 >> 0x20);
  fVar17 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  auVar6._4_4_ = fVar36;
  auVar6._0_4_ = fVar35;
  auVar6._8_4_ = fVar37;
  auVar6._12_4_ = fVar38;
  uVar10 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
  auVar7._4_4_ = fVar36;
  auVar7._0_4_ = fVar35;
  auVar7._8_4_ = fVar37;
  auVar7._12_4_ = fVar38;
  uVar39 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar8._4_4_ = fVar36;
  auVar8._0_4_ = fVar35;
  auVar8._8_4_ = fVar37;
  auVar8._12_4_ = fVar38;
  uVar61 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
  auVar9._4_4_ = fVar36;
  auVar9._0_4_ = fVar35;
  auVar9._8_4_ = fVar35;
  auVar9._12_4_ = fVar36;
  uVar18 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50b0);
  fVar22 = ((float)uVar19 * fVar35 + fVar57 * fVar20 * (float)uVar55 +
           fVar57 * (float)uVar62 * (float)uVar10) - (float)uVar26 * (float)uVar39;
  fVar20 = (fVar21 * fVar36 +
            fVar58 * (float)(CONCAT17(extraout_var_05,
                                      CONCAT16(extraout_var_04,
                                               CONCAT15(extraout_var_03,
                                                        CONCAT14(extraout_var_02,fVar20)))) >> 0x20)
                     * (float)((ulong)uVar55 >> 0x20) +
           fVar58 * fVar52 * (float)((ulong)uVar10 >> 0x20)) -
           fVar53 * (float)((ulong)uVar39 >> 0x20);
  fVar35 = ((float)uVar19 * fVar37 + fVar59 * (float)uVar26 * (float)uVar63 +
           fVar59 * fVar17 * (float)uVar18) - (float)uVar62 * (float)uVar61;
  fVar17 = (fVar21 * fVar38 + fVar60 * fVar53 * (float)((ulong)uVar63 >> 0x20) +
           fVar60 * (float)(CONCAT17(extraout_var_05,
                                     CONCAT16(extraout_var_04,
                                              CONCAT15(extraout_var_03,
                                                       CONCAT14(extraout_var_02,fVar17)))) >> 0x20)
                    * (float)((ulong)uVar18 >> 0x20)) - fVar52 * (float)((ulong)uVar61 >> 0x20);
  pcStack_a8 = (code *)CONCAT17((byte)((uint)fVar17 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                                CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                         CONCAT15((byte)((uint)fVar17 >> 8) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                  CONCAT14(SUB41(fVar17,0) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                           CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                    (byte)((ulong)DAT_01d4ab58 >>
                                                                          0x18),
                                                                    CONCAT12((byte)((uint)fVar35 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)
                                                  DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar35 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar35,0) & (byte)DAT_01d4ab58)))))
                                        ));
  local_b0 = (undefined *)
             CONCAT17((byte)((uint)fVar20 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                      CONCAT16((byte)((uint)fVar20 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                               CONCAT15((byte)((uint)fVar20 >> 8) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                        CONCAT14(SUB41(fVar20,0) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                   (byte)((ulong)DAT_01d4ab50 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar22 >> 8
                                                                                  ) & (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar22,0) & (byte)DAT_01d4ab50)))))));
  FUN_00dab570(local_b8,1,&local_b0);
  puVar34 = *(undefined8 **)(param_1[0xd] + 0x60);
  plVar31 = (long *)(**(code **)*puVar34)(puVar34);
  lVar32 = FUN_0132d9a0();
  for (; plVar31 != (long *)lVar32; plVar31 = (long *)*plVar31) {
  }
  lVar32 = puVar34[0x61];
  if (lVar32 != 0) {
    (**(code **)(*(long *)(lVar32 + 0x48) + 0x10))();
  }
  local_140 = &LAB_013dcc00;
  local_138 = FUN_013dcc10;
  local_130 = &LAB_013dcc20;
  puStack_128 = &LAB_013dcc30;
  local_b0 = PTR_LAB_027292d8;
  pcStack_a8 = (code *)PTR_FUN_027292e0;
  local_a0 = PTR_LAB_027292e8;
  local_98 = PTR_LAB_027292f0;
  local_90[0] = (undefined1 *)&local_140;
  FUN_01306a00(lVar32,&local_b0);
  pcVar33 = pcStack_a8;
  if (pcStack_a8 != (code *)0x0) {
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0x0;
    (*pcVar33)(local_90);
  }
  pcVar33 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (undefined1 *)0x0;
    puStack_128 = (undefined1 *)0x0;
    local_140 = (undefined1 *)0x0;
    local_138 = (code *)0x0;
    (*pcVar33)(auStack_120);
  }
  if (lVar32 != 0) {
    (**(code **)(*(long *)(lVar32 + 0x48) + 0x18))((long *)(lVar32 + 0x48));
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
  }
  return;
}


