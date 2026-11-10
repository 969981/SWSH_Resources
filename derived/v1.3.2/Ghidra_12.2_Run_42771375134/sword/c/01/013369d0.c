/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013369d0; name: FUN_013369d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013369d0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  int iVar33;
  long *plVar34;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_b0_03;
  undefined1 extraout_b0_04;
  undefined1 uVar35;
  byte bVar36;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar37;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar38;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar39;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 uVar40;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar41;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 uVar42;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar43;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 uVar44;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 uVar45;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 uVar46;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 uVar47;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined1 uVar48;
  undefined1 extraout_var_44;
  undefined1 extraout_var_45;
  undefined1 extraout_var_46;
  undefined1 uVar49;
  undefined1 extraout_var_47;
  undefined1 extraout_var_48;
  undefined1 extraout_var_49;
  undefined1 uVar50;
  undefined1 extraout_var_50;
  undefined1 extraout_var_51;
  undefined1 extraout_var_52;
  undefined1 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  float fVar77;
  undefined8 uVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined1 auStack_b8 [136];
  long local_28;
  
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0x68) == 1) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    return;
  }
  FUN_012b6ae0(auStack_b8);
  lVar3 = *(long *)(param_1 + 0x78);
  for (lVar2 = *(long *)(param_1 + 0x70); lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
    plVar34 = (long *)FUN_01326580(*(undefined8 *)(lVar2 + 8));
    local_28 = *plVar34;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_012ba920(auStack_b8,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      local_28 = 0;
    }
  }
  iVar33 = FUN_012ba9b0(auStack_b8);
  iVar1 = 4;
  if (*(int *)(param_1 + 0x68) != 3) {
    iVar1 = iVar33;
  }
  *(int *)(param_1 + 0x6c) = iVar1;
  if (iVar1 == 1) {
    FUN_01029020(0,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    FUN_00a92cd0(SUB41(((float)CONCAT13(extraout_var_13,
                                        CONCAT12(extraout_var_07,
                                                 CONCAT11(extraout_var_01,extraout_b0_01))) + -0.5)
                       * DAT_01d4c608,0),0,0);
    fVar56 = (float)_UNK_01d4ae88;
    fVar58 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar52 = (float)_DAT_01d4ae80;
    fVar54 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar75 = (undefined4)_UNK_01d4af08;
    uVar76 = (undefined4)((ulong)_UNK_01d4af08 >> 0x20);
    uVar72 = (undefined4)_DAT_01d4af00;
    uVar73 = (undefined4)((ulong)_DAT_01d4af00 >> 0x20);
    uVar35 = extraout_b0_02;
    uVar37 = extraout_var_02;
    uVar38 = extraout_var_08;
    uVar39 = extraout_var_14;
    uVar40 = extraout_var_18;
    uVar41 = extraout_var_21;
    uVar42 = extraout_var_24;
    uVar43 = extraout_var_27;
    uVar44 = extraout_var_30;
    uVar45 = extraout_var_33;
    uVar46 = extraout_var_36;
    uVar47 = extraout_var_39;
    uVar48 = extraout_var_42;
    uVar49 = extraout_var_45;
    uVar50 = extraout_var_48;
    uVar51 = extraout_var_51;
  }
  else if (iVar1 == 2) {
    FUN_01029020(0,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    FUN_00a92cd0(SUB41(((float)CONCAT13(extraout_var_15,
                                        CONCAT12(extraout_var_09,
                                                 CONCAT11(extraout_var_03,extraout_b0_03))) + -0.5)
                       * DAT_01d4c608,0),0,0);
    fVar56 = (float)_UNK_01d4ae88;
    fVar58 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar52 = (float)_DAT_01d4ae80;
    fVar54 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar75 = (undefined4)_UNK_01d4ae08;
    uVar76 = (undefined4)((ulong)_UNK_01d4ae08 >> 0x20);
    uVar72 = (undefined4)_DAT_01d4ae00;
    uVar73 = (undefined4)((ulong)_DAT_01d4ae00 >> 0x20);
    uVar35 = extraout_b0_04;
    uVar37 = extraout_var_04;
    uVar38 = extraout_var_10;
    uVar39 = extraout_var_16;
    uVar40 = extraout_var_19;
    uVar41 = extraout_var_22;
    uVar42 = extraout_var_25;
    uVar43 = extraout_var_28;
    uVar44 = extraout_var_31;
    uVar45 = extraout_var_34;
    uVar46 = extraout_var_37;
    uVar47 = extraout_var_40;
    uVar48 = extraout_var_43;
    uVar49 = extraout_var_46;
    uVar50 = extraout_var_49;
    uVar51 = extraout_var_52;
  }
  else {
    if (iVar1 != 4) goto LAB_01336cac;
    FUN_01029020(0,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    FUN_00a92cd0(SUB41(((float)CONCAT13(extraout_var_11,
                                        CONCAT12(extraout_var_05,CONCAT11(extraout_var,extraout_b0))
                                       ) + -0.5) * DAT_01d4c058,0),0,0);
    fVar56 = (float)_UNK_01d4ae88;
    fVar58 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar52 = (float)_DAT_01d4ae80;
    fVar54 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar75 = (undefined4)_UNK_01d4a4d8;
    uVar76 = (undefined4)((ulong)_UNK_01d4a4d8 >> 0x20);
    uVar72 = (undefined4)_DAT_01d4a4d0;
    uVar73 = (undefined4)((ulong)_DAT_01d4a4d0 >> 0x20);
    uVar35 = extraout_b0_00;
    uVar37 = extraout_var_00;
    uVar38 = extraout_var_06;
    uVar39 = extraout_var_12;
    uVar40 = extraout_var_17;
    uVar41 = extraout_var_20;
    uVar42 = extraout_var_23;
    uVar43 = extraout_var_26;
    uVar44 = extraout_var_29;
    uVar45 = extraout_var_32;
    uVar46 = extraout_var_35;
    uVar47 = extraout_var_38;
    uVar48 = extraout_var_41;
    uVar49 = extraout_var_44;
    uVar50 = extraout_var_47;
    uVar51 = extraout_var_50;
  }
  fVar52 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar35))) * fVar52;
  fVar54 = (float)CONCAT13(uVar43,CONCAT12(uVar42,CONCAT11(uVar41,uVar40))) * fVar54;
  uVar60 = SUB41(fVar54,0);
  uVar61 = (undefined1)((uint)fVar54 >> 8);
  uVar62 = (undefined1)((uint)fVar54 >> 0x10);
  uVar63 = (undefined1)((uint)fVar54 >> 0x18);
  fVar56 = (float)CONCAT13(uVar47,CONCAT12(uVar46,CONCAT11(uVar45,uVar44))) * fVar56;
  uVar64 = SUB41(fVar56,0);
  uVar65 = (undefined1)((uint)fVar56 >> 8);
  uVar66 = (undefined1)((uint)fVar56 >> 0x10);
  uVar67 = (undefined1)((uint)fVar56 >> 0x18);
  fVar58 = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar49,uVar48))) * fVar58;
  uVar68 = SUB41(fVar58,0);
  uVar69 = (undefined1)((uint)fVar58 >> 8);
  uVar70 = (undefined1)((uint)fVar58 >> 0x10);
  uVar71 = (undefined1)((uint)fVar58 >> 0x18);
  auVar21._4_4_ = uVar73;
  auVar21._0_4_ = uVar72;
  auVar21._8_4_ = uVar75;
  auVar21._12_4_ = uVar76;
  uVar12 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd4f90);
  fVar59 = (float)((ulong)uVar12 >> 0x20);
  auVar22._4_4_ = uVar73;
  auVar22._0_4_ = uVar72;
  auVar22._8_4_ = uVar75;
  auVar22._12_4_ = uVar76;
  uVar78 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  auVar23._4_4_ = uVar73;
  auVar23._0_4_ = uVar72;
  auVar23._8_4_ = uVar75;
  auVar23._12_4_ = uVar76;
  uVar24 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
  fVar74 = (float)((ulong)uVar24 >> 0x20);
  auVar13[4] = uVar60;
  auVar13._0_4_ = fVar52;
  auVar13[5] = uVar61;
  auVar13[6] = uVar62;
  auVar13[7] = uVar63;
  auVar13[8] = uVar64;
  auVar13[9] = uVar65;
  auVar13[10] = uVar66;
  auVar13[0xb] = uVar67;
  auVar13[0xc] = uVar68;
  auVar13[0xd] = uVar69;
  auVar13[0xe] = uVar70;
  auVar13[0xf] = uVar71;
  uVar83 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  auVar14[4] = uVar60;
  auVar14._0_4_ = fVar52;
  auVar14[5] = uVar61;
  auVar14[6] = uVar62;
  auVar14[7] = uVar63;
  auVar14[8] = uVar64;
  auVar14[9] = uVar65;
  auVar14[10] = uVar66;
  auVar14[0xb] = uVar67;
  auVar14[0xc] = uVar68;
  auVar14[0xd] = uVar69;
  auVar14[0xe] = uVar70;
  auVar14[0xf] = uVar71;
  uVar85 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5120);
  auVar15[4] = uVar60;
  auVar15._0_4_ = fVar52;
  auVar15[5] = uVar61;
  auVar15[6] = uVar62;
  auVar15[7] = uVar63;
  auVar15[8] = uVar64;
  auVar15[9] = uVar65;
  auVar15[10] = uVar66;
  auVar15[0xb] = uVar67;
  auVar15[0xc] = uVar68;
  auVar15[0xd] = uVar69;
  auVar15[0xe] = uVar70;
  auVar15[0xf] = uVar71;
  uVar86 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
  auVar16[4] = uVar60;
  auVar16._0_4_ = fVar52;
  auVar16[5] = uVar61;
  auVar16[6] = uVar62;
  auVar16[7] = uVar63;
  auVar16[8] = uVar64;
  auVar16[9] = uVar65;
  auVar16[10] = uVar66;
  auVar16[0xb] = uVar67;
  auVar16[0xc] = uVar68;
  auVar16[0xd] = uVar69;
  auVar16[0xe] = uVar70;
  auVar16[0xf] = uVar71;
  uVar87 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
  fVar77 = (float)((ulong)uVar78 >> 0x20);
  auVar17[4] = uVar60;
  auVar17._0_4_ = fVar52;
  auVar17[5] = uVar61;
  auVar17[6] = uVar62;
  auVar17[7] = uVar63;
  auVar17[8] = uVar64;
  auVar17[9] = uVar65;
  auVar17[10] = uVar66;
  auVar17[0xb] = uVar67;
  auVar17[0xc] = uVar68;
  auVar17[0xd] = uVar69;
  auVar17[0xe] = uVar70;
  auVar17[0xf] = uVar71;
  uVar84 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar60;
  auVar18._0_4_ = fVar52;
  auVar18[5] = uVar61;
  auVar18[6] = uVar62;
  auVar18[7] = uVar63;
  auVar18[8] = SUB41(fVar52,0);
  auVar18[9] = (char)((uint)fVar52 >> 8);
  auVar18[10] = (char)((uint)fVar52 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar52 >> 0x18);
  auVar18[0xc] = uVar60;
  auVar18[0xd] = uVar61;
  auVar18[0xe] = uVar62;
  auVar18[0xf] = uVar63;
  uVar19 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar79 = (float)_DAT_01d4ae90;
  fVar80 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar81 = (float)_UNK_01d4ae98;
  fVar82 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar4[1] = uVar37;
  auVar4[0] = uVar35;
  auVar4[2] = uVar38;
  auVar4[3] = uVar39;
  auVar4[4] = uVar40;
  auVar4[5] = uVar41;
  auVar4[6] = uVar42;
  auVar4[7] = uVar43;
  auVar4[8] = uVar44;
  auVar4[9] = uVar45;
  auVar4[10] = uVar46;
  auVar4[0xb] = uVar47;
  auVar4[0xc] = uVar48;
  auVar4[0xd] = uVar49;
  auVar4[0xe] = uVar50;
  auVar4[0xf] = uVar51;
  uVar20 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  fVar53 = (fVar52 * (float)uVar12 + fVar79 * (float)uVar83 * 0.0 +
           fVar79 * (float)uVar24 * (float)uVar84) - (float)uVar78 * (float)uVar86;
  fVar55 = (fVar54 * fVar59 + fVar80 * (float)((ulong)uVar83 >> 0x20) * 0.0 +
           fVar80 * fVar74 * (float)((ulong)uVar84 >> 0x20)) -
           fVar77 * (float)((ulong)uVar86 >> 0x20);
  fVar57 = (fVar56 * (float)uVar12 + fVar81 * (float)uVar78 * (float)uVar85 +
           fVar81 * (float)uVar19 * 0.0) - (float)uVar24 * (float)uVar87;
  fVar59 = (fVar58 * fVar59 + fVar82 * fVar77 * (float)((ulong)uVar85 >> 0x20) +
           fVar82 * (float)((ulong)uVar19 >> 0x20) * 0.0) - fVar74 * (float)((ulong)uVar87 >> 0x20);
  auVar5[1] = uVar37;
  auVar5[0] = uVar35;
  auVar5[2] = uVar38;
  auVar5[3] = uVar39;
  auVar5[4] = uVar40;
  auVar5[5] = uVar41;
  auVar5[6] = uVar42;
  auVar5[7] = uVar43;
  auVar5[8] = uVar44;
  auVar5[9] = uVar45;
  auVar5[10] = uVar46;
  auVar5[0xb] = uVar47;
  auVar5[0xc] = uVar48;
  auVar5[0xd] = uVar49;
  auVar5[0xe] = uVar50;
  auVar5[0xf] = uVar51;
  uVar78 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
  fVar74 = (float)((ulong)uVar78 >> 0x20);
  fVar54 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar35)));
  auVar7._4_4_ = fVar55;
  auVar7._0_4_ = fVar53;
  auVar7._8_4_ = fVar57;
  auVar7._12_4_ = fVar59;
  uVar84 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  auVar8._4_4_ = fVar55;
  auVar8._0_4_ = fVar53;
  auVar8._8_4_ = fVar57;
  auVar8._12_4_ = fVar59;
  uVar86 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
  fVar56 = (float)((ulong)uVar20 >> 0x20);
  auVar6[1] = uVar37;
  auVar6[0] = uVar35;
  auVar6[2] = uVar38;
  auVar6[3] = uVar39;
  auVar6[4] = uVar40;
  auVar6[5] = uVar41;
  auVar6[6] = uVar42;
  auVar6[7] = uVar43;
  auVar6[8] = uVar44;
  auVar6[9] = uVar45;
  auVar6[10] = uVar46;
  auVar6[0xb] = uVar47;
  auVar6[0xc] = uVar48;
  auVar6[0xd] = uVar49;
  auVar6[0xe] = uVar50;
  auVar6[0xf] = uVar51;
  uVar85 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
  fVar77 = (float)((ulong)uVar85 >> 0x20);
  fVar52 = (float)CONCAT13(uVar39,CONCAT12(uVar38,CONCAT11(uVar37,uVar35)));
  auVar9._4_4_ = fVar55;
  auVar9._0_4_ = fVar53;
  auVar9._8_4_ = fVar57;
  auVar9._12_4_ = fVar59;
  uVar12 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  auVar25._4_4_ = fVar55;
  auVar25._0_4_ = fVar53;
  auVar25._12_4_ = fVar55;
  auVar25._8_4_ = fVar53;
  uVar83 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
  auVar10._4_4_ = fVar55;
  auVar10._0_4_ = fVar53;
  auVar10._8_4_ = fVar57;
  auVar10._12_4_ = fVar59;
  uVar19 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
  auVar11._4_4_ = fVar55;
  auVar11._0_4_ = fVar53;
  auVar11._8_4_ = fVar57;
  auVar11._12_4_ = fVar59;
  uVar24 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
  fVar58 = ((float)uVar20 * fVar53 + fVar79 * fVar54 * (float)uVar84 +
           fVar79 * (float)uVar85 * (float)uVar12) - (float)uVar78 * (float)uVar19;
  fVar54 = (fVar56 * fVar55 +
            fVar80 * (float)(CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,fVar54)
                                                                     ))) >> 0x20) *
                     (float)((ulong)uVar84 >> 0x20) +
           fVar80 * fVar77 * (float)((ulong)uVar12 >> 0x20)) -
           fVar74 * (float)((ulong)uVar19 >> 0x20);
  fVar53 = ((float)uVar20 * fVar57 + fVar81 * (float)uVar78 * (float)uVar86 +
           fVar81 * fVar52 * (float)uVar83) - (float)uVar85 * (float)uVar24;
  fVar52 = (fVar56 * fVar59 + fVar82 * fVar74 * (float)((ulong)uVar86 >> 0x20) +
           fVar82 * (float)(CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(uVar40,fVar52))
                                                    )) >> 0x20) * (float)((ulong)uVar83 >> 0x20)) -
           fVar77 * (float)((ulong)uVar24 >> 0x20);
  bVar36 = (byte)DAT_01d4ab50;
  uVar26 = (ulong)DAT_01d4ab50 >> 8;
  uVar27 = (ulong)DAT_01d4ab50 >> 0x10;
  uVar28 = (ulong)DAT_01d4ab50 >> 0x18;
  uVar29 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar30 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar31 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar32 = (ulong)DAT_01d4ab50 >> 0x38;
  *(ulong *)(param_1 + 0xe8) =
       CONCAT17((byte)((uint)fVar52 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                CONCAT16((byte)((uint)fVar52 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                         CONCAT15((byte)((uint)fVar52 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                  CONCAT14(SUB41(fVar52,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                           CONCAT13((byte)((uint)fVar53 >> 0x18) &
                                                    (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                                             (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar53 >> 8) &
                                                                      (byte)((ulong)DAT_01d4ab58 >>
                                                                            8),SUB41(fVar53,0) &
                                                                               (byte)DAT_01d4ab58)))
                                          ))));
  *(ulong *)(param_1 + 0xe0) =
       CONCAT17((byte)((uint)fVar54 >> 0x18) & (byte)uVar32,
                CONCAT16((byte)((uint)fVar54 >> 0x10) & (byte)uVar31,
                         CONCAT15((byte)((uint)fVar54 >> 8) & (byte)uVar30,
                                  CONCAT14(SUB41(fVar54,0) & (byte)uVar29,
                                           CONCAT13((byte)((uint)fVar58 >> 0x18) & (byte)uVar28,
                                                    CONCAT12((byte)((uint)fVar58 >> 0x10) &
                                                             (byte)uVar27,
                                                             CONCAT11((byte)((uint)fVar58 >> 8) &
                                                                      (byte)uVar26,
                                                                      SUB41(fVar58,0) & bVar36))))))
               );
LAB_01336cac:
  FUN_0133a3c0(auStack_b8);
  return;
}


