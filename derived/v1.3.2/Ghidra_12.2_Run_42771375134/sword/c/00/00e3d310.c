/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3d310; name: FUN_00e3d310
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3d310(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long *plVar28;
  long lVar29;
  ulong uVar30;
  long *plVar31;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar32;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar33;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar34;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar35;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar36;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar37;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar38;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar39;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  float fVar40;
  float fVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(char *)(param_1 + 0x46a) == '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x3b0);
    uVar7 = *(undefined4 *)(param_1 + 0x4c0);
    FUN_00e3c4a0(param_1);
    uVar16 = *(undefined8 *)(param_1 + 0x3c8);
    uVar14 = *(undefined8 *)(param_1 + 0x3c0);
    FUN_00a92cd0((char)*(undefined4 *)(param_1 + 0x3d0),0,*(undefined4 *)(param_1 + 0x3d8));
    auVar27._8_4_ = uVar7;
    auVar27._0_8_ = uVar6;
    auVar25._8_4_ = uVar7;
    auVar25._0_8_ = uVar6;
    auVar24._8_4_ = uVar7;
    auVar24._0_8_ = uVar6;
    fVar53 = (float)((ulong)uVar6 >> 0x20);
    fVar45 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
             (float)_DAT_01d4ae80;
    fVar47 = (float)CONCAT13(extraout_var_08,
                             CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar48 = (float)CONCAT13(extraout_var_16,
                             CONCAT12(extraout_var_14,CONCAT11(extraout_var_12,extraout_var_10))) *
             (float)_UNK_01d4ae88;
    fVar50 = (float)CONCAT13(extraout_var_20,
                             CONCAT12(extraout_var_19,CONCAT11(extraout_var_18,extraout_var_17))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar24._12_4_ = 0;
    uVar15 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
    fVar41 = (float)((ulong)uVar15 >> 0x20);
    auVar25._12_4_ = 0;
    uVar52 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar17._4_4_ = fVar47;
    auVar17._0_4_ = fVar45;
    auVar17._8_4_ = fVar48;
    auVar17._12_4_ = fVar50;
    uVar42 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd4f90);
    auVar18._4_4_ = fVar47;
    auVar18._0_4_ = fVar45;
    auVar18._8_4_ = fVar48;
    auVar18._12_4_ = fVar50;
    uVar54 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5120);
    fVar44 = (float)((ulong)uVar52 >> 0x20);
    auVar27._12_4_ = 0;
    uVar55 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
    auVar19._4_4_ = fVar47;
    auVar19._0_4_ = fVar45;
    auVar19._8_4_ = fVar48;
    auVar19._12_4_ = fVar50;
    uVar57 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
    auVar20._4_4_ = fVar47;
    auVar20._0_4_ = fVar45;
    auVar20._8_4_ = fVar48;
    auVar20._12_4_ = fVar50;
    uVar43 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar21._4_4_ = fVar47;
    auVar21._0_4_ = fVar45;
    auVar21._8_4_ = fVar48;
    auVar21._12_4_ = fVar50;
    uVar58 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5270);
    auVar22._4_4_ = fVar47;
    auVar22._0_4_ = fVar45;
    auVar22._8_4_ = fVar45;
    auVar22._12_4_ = fVar47;
    uVar23 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50b0);
    fVar49 = (float)_UNK_01d4ae98;
    fVar51 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar46 = (float)_DAT_01d4ae90;
    fVar40 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar56 = (float)((ulong)uVar55 >> 0x20);
    auVar3[1] = extraout_var_00;
    auVar3[0] = extraout_b0_00;
    auVar3[2] = extraout_var_02;
    auVar3[3] = extraout_var_04;
    auVar3[4] = extraout_var_05;
    auVar3[5] = extraout_var_06;
    auVar3[6] = extraout_var_07;
    auVar3[7] = extraout_var_08;
    auVar3[8] = extraout_var_10;
    auVar3[9] = extraout_var_12;
    auVar3[10] = extraout_var_14;
    auVar3[0xb] = extraout_var_16;
    auVar3[0xc] = extraout_var_17;
    auVar3[0xd] = extraout_var_18;
    auVar3[0xe] = extraout_var_19;
    auVar3[0xf] = extraout_var_20;
    uVar26 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
    fVar45 = (fVar45 * (float)uVar15 + fVar46 * (float)uVar6 * (float)uVar42 +
             fVar46 * (float)uVar55 * (float)uVar43) - (float)uVar52 * (float)uVar57;
    fVar47 = (fVar47 * fVar41 + fVar40 * fVar53 * (float)((ulong)uVar42 >> 0x20) +
             fVar40 * fVar56 * (float)((ulong)uVar43 >> 0x20)) -
             fVar44 * (float)((ulong)uVar57 >> 0x20);
    fVar40 = (fVar48 * (float)uVar15 + fVar49 * (float)uVar52 * (float)uVar54 +
             fVar49 * (float)uVar6 * (float)uVar23) - (float)uVar55 * (float)uVar58;
    fVar41 = (fVar50 * fVar41 + fVar51 * fVar44 * (float)((ulong)uVar54 >> 0x20) +
             fVar51 * fVar53 * (float)((ulong)uVar23 >> 0x20)) -
             fVar56 * (float)((ulong)uVar58 >> 0x20);
    auVar8._4_4_ = fVar47;
    auVar8._0_4_ = fVar45;
    auVar8._8_4_ = fVar40;
    auVar8._12_4_ = fVar41;
    uVar43 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
    auVar9._4_4_ = fVar47;
    auVar9._0_4_ = fVar45;
    auVar9._8_4_ = fVar40;
    auVar9._12_4_ = fVar41;
    uVar54 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
    auVar4[1] = extraout_var_00;
    auVar4[0] = extraout_b0_00;
    auVar4[2] = extraout_var_02;
    auVar4[3] = extraout_var_04;
    auVar4[4] = extraout_var_05;
    auVar4[5] = extraout_var_06;
    auVar4[6] = extraout_var_07;
    auVar4[7] = extraout_var_08;
    auVar4[8] = extraout_var_10;
    auVar4[9] = extraout_var_12;
    auVar4[10] = extraout_var_14;
    auVar4[0xb] = extraout_var_16;
    auVar4[0xc] = extraout_var_17;
    auVar4[0xd] = extraout_var_18;
    auVar4[0xe] = extraout_var_19;
    auVar4[0xf] = extraout_var_20;
    uVar23 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    auVar5[1] = extraout_var_00;
    auVar5[0] = extraout_b0_00;
    auVar5[2] = extraout_var_02;
    auVar5[3] = extraout_var_04;
    auVar5[4] = extraout_var_05;
    auVar5[5] = extraout_var_06;
    auVar5[6] = extraout_var_07;
    auVar5[7] = extraout_var_08;
    auVar5[8] = extraout_var_10;
    auVar5[9] = extraout_var_12;
    auVar5[10] = extraout_var_14;
    auVar5[0xb] = extraout_var_16;
    auVar5[0xc] = extraout_var_17;
    auVar5[0xd] = extraout_var_18;
    auVar5[0xe] = extraout_var_19;
    auVar5[0xf] = extraout_var_20;
    uVar55 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
    auVar10._4_4_ = fVar47;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar40;
    auVar10._12_4_ = fVar41;
    uVar6 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar11._4_4_ = fVar47;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar40;
    auVar11._12_4_ = fVar41;
    uVar42 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    auVar12._4_4_ = fVar47;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar40;
    auVar12._12_4_ = fVar41;
    uVar52 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
    auVar13._4_4_ = fVar47;
    auVar13._0_4_ = fVar45;
    auVar13._8_4_ = fVar45;
    auVar13._12_4_ = fVar47;
    uVar15 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
    fVar45 = ((float)uVar26 * fVar45 +
              fVar46 * (float)CONCAT13(extraout_var_04,
                                       CONCAT12(extraout_var_02,
                                                CONCAT11(extraout_var_00,extraout_b0_00))) *
                       (float)uVar43 + fVar46 * (float)uVar55 * (float)uVar6) -
             (float)uVar23 * (float)uVar42;
    fVar41 = ((float)uVar26 * fVar40 + fVar49 * (float)uVar23 * (float)uVar54 +
             fVar49 * (float)CONCAT13(extraout_var_04,
                                      CONCAT12(extraout_var_02,
                                               CONCAT11(extraout_var_00,extraout_b0_00))) *
                      (float)uVar15) - (float)uVar55 * (float)uVar52;
    fVar45 = (float)uVar14 +
             (float)CONCAT13(extraout_var_03,
                             CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) +
             (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar45 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar45,0) & (byte)DAT_01d4ab50)));
    uVar32 = SUB41(fVar45,0);
    uVar33 = (undefined1)((uint)fVar45 >> 8);
    uVar34 = (undefined1)((uint)fVar45 >> 0x10);
    uVar35 = (undefined1)((uint)fVar45 >> 0x18);
    fVar45 = (float)uVar16 +
             (float)CONCAT13(extraout_var_15,
                             CONCAT12(extraout_var_13,CONCAT11(extraout_var_11,extraout_var_09))) +
             (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                             CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar41 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 8),
                                               SUB41(fVar41,0) & (byte)DAT_01d4ab58)));
    uVar36 = SUB41(fVar45,0);
    uVar37 = (undefined1)((uint)fVar45 >> 8);
    uVar38 = (undefined1)((uint)fVar45 >> 0x10);
    uVar39 = (undefined1)((uint)fVar45 >> 0x18);
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xb8);
    uVar36 = (undefined1)uVar6;
    uVar37 = (undefined1)((ulong)uVar6 >> 8);
    uVar38 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar39 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar6 = *(undefined8 *)(param_1 + 0xb0);
    uVar32 = (undefined1)uVar6;
    uVar33 = (undefined1)((ulong)uVar6 >> 8);
    uVar34 = (undefined1)((ulong)uVar6 >> 0x10);
    uVar35 = (undefined1)((ulong)uVar6 >> 0x18);
  }
  fVar41 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
  fVar45 = (float)CONCAT13(uVar35,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
  fVar47 = (float)((ulong)_DAT_01d4b600 >> 0x20) + 0.0;
  fVar40 = (float)((ulong)_UNK_01d4b608 >> 0x20) + 0.0;
  uStack_48 = CONCAT17((char)((uint)fVar40 >> 0x18),
                       CONCAT16((char)((uint)fVar40 >> 0x10),
                                CONCAT15((char)((uint)fVar40 >> 8),
                                         CONCAT14(SUB41(fVar40,0),fVar41 + (float)_UNK_01d4b608))));
  local_50 = CONCAT17((char)((uint)fVar47 >> 0x18),
                      CONCAT16((char)((uint)fVar47 >> 0x10),
                               CONCAT15((char)((uint)fVar47 >> 8),
                                        CONCAT14(SUB41(fVar47,0),fVar45 + (float)_DAT_01d4b600))));
  fVar47 = (float)((ulong)_DAT_01d4a890 >> 0x20) + 0.0;
  fVar40 = (float)((ulong)_UNK_01d4a898 >> 0x20) + 0.0;
  uStack_58 = CONCAT17((char)((uint)fVar40 >> 0x18),
                       CONCAT16((char)((uint)fVar40 >> 0x10),
                                CONCAT15((char)((uint)fVar40 >> 8),
                                         CONCAT14(SUB41(fVar40,0),fVar41 + (float)_UNK_01d4a898))));
  local_60 = CONCAT17((char)((uint)fVar47 >> 0x18),
                      CONCAT16((char)((uint)fVar47 >> 0x10),
                               CONCAT15((char)((uint)fVar47 >> 8),
                                        CONCAT14(SUB41(fVar47,0),fVar45 + (float)_DAT_01d4a890))));
  puVar1 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  puVar2 = *(undefined8 **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (puVar1 == puVar2) {
      plVar31 = (long *)0x0;
LAB_00e3d56c:
      *(long **)(param_1 + 0x630) = plVar31;
      return;
    }
    plVar31 = (long *)*puVar1;
    plVar28 = (long *)(**(code **)plVar31[10])(plVar31 + 10);
    lVar29 = FUN_015bed20();
    for (; plVar28 != (long *)0x0; plVar28 = (long *)*plVar28) {
      if (plVar28 == (long *)lVar29) {
        if ((((char)plVar31[0x77] != '\0') &&
            (uVar30 = (**(code **)(*plVar31 + 0x178))(plVar31,&local_50,&local_60),
            (uVar30 & 1) != 0)) &&
           (uVar30 = (**(code **)(*(long *)*puVar1 + 0x88))(), (uVar30 & 1) == 0))
        goto LAB_00e3d56c;
        break;
      }
    }
    puVar1 = puVar1 + 1;
  } while( true );
}


