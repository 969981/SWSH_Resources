/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e66af0; name: FUN_00e66af0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e66af0(long param_1,byte param_2)

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
  undefined2 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined *puVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar36;
  undefined1 extraout_b0_01;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  byte bVar37;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  byte bVar38;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar39;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar40;
  undefined1 extraout_var_09;
  byte bVar41;
  undefined1 extraout_var_10;
  byte bVar42;
  undefined1 extraout_var_11;
  byte bVar43;
  undefined1 extraout_var_12;
  byte bVar44;
  undefined1 extraout_var_13;
  byte bVar45;
  undefined1 extraout_var_14;
  byte bVar46;
  undefined1 extraout_var_15;
  byte bVar47;
  undefined1 extraout_var_16;
  byte bVar48;
  undefined1 extraout_var_17;
  byte bVar49;
  undefined1 extraout_var_18;
  byte bVar50;
  undefined1 extraout_var_19;
  byte bVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  *(byte *)(param_1 + 0x580) = param_2 & 1;
  puVar32 = PTR_DAT_02710848;
  if ((param_2 & 1) == 0) {
    local_40 = 0x5f17fc11021c480f;
    FUN_00dc0720(param_1,&local_40);
    local_40 = 0x538b73ebb59bd5b;
    FUN_00dc0720(param_1,&local_40);
  }
  else {
    FUN_01029020((char)DAT_01d4bef8,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    FUN_00a92cd0(SUB41(((float)CONCAT13(extraout_var_05,
                                        CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0))
                                       ) * DAT_01d4bb38) / DAT_01d4c284,0),0,ZEXT816(0));
    uVar72 = (undefined4)_UNK_01d49dc8;
    uVar73 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
    fVar22 = (float)CONCAT13(extraout_var_06,
                             CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00))) *
             (float)_DAT_01d4ae80;
    fVar25 = (float)CONCAT13(extraout_var_11,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_09,extraout_var_08))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar52 = SUB41(fVar25,0);
    uVar53 = (undefined1)((uint)fVar25 >> 8);
    uVar54 = (undefined1)((uint)fVar25 >> 0x10);
    uVar55 = (undefined1)((uint)fVar25 >> 0x18);
    fVar26 = (float)CONCAT13(extraout_var_15,
                             CONCAT12(extraout_var_14,CONCAT11(extraout_var_13,extraout_var_12))) *
             (float)_UNK_01d4ae88;
    uVar56 = SUB41(fVar26,0);
    uVar57 = (undefined1)((uint)fVar26 >> 8);
    uVar58 = (undefined1)((uint)fVar26 >> 0x10);
    uVar59 = (undefined1)((uint)fVar26 >> 0x18);
    fVar27 = (float)CONCAT13(extraout_var_19,
                             CONCAT12(extraout_var_18,CONCAT11(extraout_var_17,extraout_var_16))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar60 = SUB41(fVar27,0);
    uVar61 = (undefined1)((uint)fVar27 >> 8);
    uVar62 = (undefined1)((uint)fVar27 >> 0x10);
    uVar63 = (undefined1)((uint)fVar27 >> 0x18);
    auVar28._8_4_ = uVar72;
    auVar28._0_8_ = _DAT_01d49dc0;
    auVar28._12_4_ = uVar73;
    uVar33 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd4f90);
    auVar16[4] = uVar52;
    auVar16._0_4_ = fVar22;
    auVar16[5] = uVar53;
    auVar16[6] = uVar54;
    auVar16[7] = uVar55;
    auVar16[8] = uVar56;
    auVar16[9] = uVar57;
    auVar16[10] = uVar58;
    auVar16[0xb] = uVar59;
    auVar16[0xc] = uVar60;
    auVar16[0xd] = uVar61;
    auVar16[0xe] = uVar62;
    auVar16[0xf] = uVar63;
    uVar80 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd4f90);
    auVar29._8_4_ = uVar72;
    auVar29._0_8_ = _DAT_01d49dc0;
    auVar29._12_4_ = uVar73;
    uVar75 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
    auVar30._8_4_ = uVar72;
    auVar30._0_8_ = _DAT_01d49dc0;
    auVar30._12_4_ = uVar73;
    uVar64 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5418);
    fVar70 = (float)((ulong)uVar64 >> 0x20);
    auVar17[4] = uVar52;
    auVar17._0_4_ = fVar22;
    auVar17[5] = uVar53;
    auVar17[6] = uVar54;
    auVar17[7] = uVar55;
    auVar17[8] = uVar56;
    auVar17[9] = uVar57;
    auVar17[10] = uVar58;
    auVar17[0xb] = uVar59;
    auVar17[0xc] = uVar60;
    auVar17[0xd] = uVar61;
    auVar17[0xe] = uVar62;
    auVar17[0xf] = uVar63;
    uVar82 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5120);
    auVar18[4] = uVar52;
    auVar18._0_4_ = fVar22;
    auVar18[5] = uVar53;
    auVar18[6] = uVar54;
    auVar18[7] = uVar55;
    auVar18[8] = uVar56;
    auVar18[9] = uVar57;
    auVar18[10] = uVar58;
    auVar18[0xb] = uVar59;
    auVar18[0xc] = uVar60;
    auVar18[0xd] = uVar61;
    auVar18[0xe] = uVar62;
    auVar18[0xf] = uVar63;
    uVar83 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
    auVar19[4] = uVar52;
    auVar19._0_4_ = fVar22;
    auVar19[5] = uVar53;
    auVar19[6] = uVar54;
    auVar19[7] = uVar55;
    auVar19[8] = uVar56;
    auVar19[9] = uVar57;
    auVar19[10] = uVar58;
    auVar19[0xb] = uVar59;
    auVar19[0xc] = uVar60;
    auVar19[0xd] = uVar61;
    auVar19[0xe] = uVar62;
    auVar19[0xf] = uVar63;
    uVar84 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5270);
    fVar35 = (float)((ulong)uVar33 >> 0x20);
    fVar74 = (float)((ulong)uVar75 >> 0x20);
    auVar20[4] = uVar52;
    auVar20._0_4_ = fVar22;
    auVar20[5] = uVar53;
    auVar20[6] = uVar54;
    auVar20[7] = uVar55;
    auVar20[8] = uVar56;
    auVar20[9] = uVar57;
    auVar20[10] = uVar58;
    auVar20[0xb] = uVar59;
    auVar20[0xc] = uVar60;
    auVar20[0xd] = uVar61;
    auVar20[0xe] = uVar62;
    auVar20[0xf] = uVar63;
    uVar81 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar21[4] = uVar52;
    auVar21._0_4_ = fVar22;
    auVar21[5] = uVar53;
    auVar21[6] = uVar54;
    auVar21[7] = uVar55;
    auVar21[8] = SUB41(fVar22,0);
    auVar21[9] = (char)((uint)fVar22 >> 8);
    auVar21[10] = (char)((uint)fVar22 >> 0x10);
    auVar21[0xb] = (char)((uint)fVar22 >> 0x18);
    auVar21[0xc] = uVar52;
    auVar21[0xd] = uVar53;
    auVar21[0xe] = uVar54;
    auVar21[0xf] = uVar55;
    uVar23 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50b0);
    auVar65[1] = extraout_var_00;
    auVar65[0] = extraout_b0_00;
    auVar65[2] = extraout_var_03;
    auVar65[3] = extraout_var_06;
    auVar65[4] = extraout_var_08;
    auVar65[5] = extraout_var_09;
    auVar65[6] = extraout_var_10;
    auVar65[7] = extraout_var_11;
    auVar65[8] = extraout_var_12;
    auVar65[9] = extraout_var_13;
    auVar65[10] = extraout_var_14;
    auVar65[0xb] = extraout_var_15;
    auVar65[0xc] = extraout_var_16;
    auVar65[0xd] = extraout_var_17;
    auVar65[0xe] = extraout_var_18;
    auVar65[0xf] = extraout_var_19;
    uVar31 = a64_TBL(ZEXT816(0),auVar65,DAT_01cd50f8);
    fVar71 = (float)((ulong)uVar31 >> 0x20);
    fVar76 = (float)_DAT_01d4ae90;
    fVar77 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar78 = (float)_UNK_01d4ae98;
    fVar79 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar68[1] = extraout_var_00;
    auVar68[0] = extraout_b0_00;
    auVar68[2] = extraout_var_03;
    auVar68[3] = extraout_var_06;
    auVar68[4] = extraout_var_08;
    auVar68[5] = extraout_var_09;
    auVar68[6] = extraout_var_10;
    auVar68[7] = extraout_var_11;
    auVar68[8] = extraout_var_12;
    auVar68[9] = extraout_var_13;
    auVar68[10] = extraout_var_14;
    auVar68[0xb] = extraout_var_15;
    auVar68[0xc] = extraout_var_16;
    auVar68[0xd] = extraout_var_17;
    auVar68[0xe] = extraout_var_18;
    auVar68[0xf] = extraout_var_19;
    uVar24 = a64_TBL(ZEXT816(0),auVar68,DAT_01cd4f90);
    fVar34 = (fVar22 * (float)uVar33 + fVar76 * (float)uVar80 * 0.0 +
             fVar76 * (float)uVar64 * (float)uVar81) - (float)uVar75 * (float)uVar83;
    fVar25 = (fVar25 * fVar35 + fVar77 * (float)((ulong)uVar80 >> 0x20) * 0.0 +
             fVar77 * fVar70 * (float)((ulong)uVar81 >> 0x20)) -
             fVar74 * (float)((ulong)uVar83 >> 0x20);
    uVar52 = SUB41(fVar25,0);
    uVar53 = (undefined1)((uint)fVar25 >> 8);
    uVar54 = (undefined1)((uint)fVar25 >> 0x10);
    uVar55 = (undefined1)((uint)fVar25 >> 0x18);
    fVar26 = (fVar26 * (float)uVar33 + fVar78 * (float)uVar75 * (float)uVar82 +
             fVar78 * (float)uVar23 * 0.0) - (float)uVar64 * (float)uVar84;
    uVar56 = SUB41(fVar26,0);
    uVar57 = (undefined1)((uint)fVar26 >> 8);
    uVar58 = (undefined1)((uint)fVar26 >> 0x10);
    uVar59 = (undefined1)((uint)fVar26 >> 0x18);
    fVar27 = (fVar27 * fVar35 + fVar79 * fVar74 * (float)((ulong)uVar82 >> 0x20) +
             fVar79 * (float)((ulong)uVar23 >> 0x20) * 0.0) -
             fVar70 * (float)((ulong)uVar84 >> 0x20);
    uVar60 = SUB41(fVar27,0);
    uVar61 = (undefined1)((uint)fVar27 >> 8);
    uVar62 = (undefined1)((uint)fVar27 >> 0x10);
    uVar63 = (undefined1)((uint)fVar27 >> 0x18);
    fVar22 = (float)CONCAT13(extraout_var_06,
                             CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
    auVar2[4] = uVar52;
    auVar2._0_4_ = fVar34;
    auVar2[5] = uVar53;
    auVar2[6] = uVar54;
    auVar2[7] = uVar55;
    auVar2[8] = uVar56;
    auVar2[9] = uVar57;
    auVar2[10] = uVar58;
    auVar2[0xb] = uVar59;
    auVar2[0xc] = uVar60;
    auVar2[0xd] = uVar61;
    auVar2[0xe] = uVar62;
    auVar2[0xf] = uVar63;
    uVar75 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    auVar3[4] = uVar52;
    auVar3._0_4_ = fVar34;
    auVar3[5] = uVar53;
    auVar3[6] = uVar54;
    auVar3[7] = uVar55;
    auVar3[8] = uVar56;
    auVar3[9] = uVar57;
    auVar3[10] = uVar58;
    auVar3[0xb] = uVar59;
    auVar3[0xc] = uVar60;
    auVar3[0xd] = uVar61;
    auVar3[0xe] = uVar62;
    auVar3[0xf] = uVar63;
    uVar82 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
    fVar70 = (float)((ulong)uVar24 >> 0x20);
    auVar1[1] = extraout_var_00;
    auVar1[0] = extraout_b0_00;
    auVar1[2] = extraout_var_03;
    auVar1[3] = extraout_var_06;
    auVar1[4] = extraout_var_08;
    auVar1[5] = extraout_var_09;
    auVar1[6] = extraout_var_10;
    auVar1[7] = extraout_var_11;
    auVar1[8] = extraout_var_12;
    auVar1[9] = extraout_var_13;
    auVar1[10] = extraout_var_14;
    auVar1[0xb] = extraout_var_15;
    auVar1[0xc] = extraout_var_16;
    auVar1[0xd] = extraout_var_17;
    auVar1[0xe] = extraout_var_18;
    auVar1[0xf] = extraout_var_19;
    uVar81 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5418);
    fVar74 = (float)((ulong)uVar81 >> 0x20);
    fVar35 = (float)CONCAT13(extraout_var_06,
                             CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
    auVar4[4] = uVar52;
    auVar4._0_4_ = fVar34;
    auVar4[5] = uVar53;
    auVar4[6] = uVar54;
    auVar4[7] = uVar55;
    auVar4[8] = uVar56;
    auVar4[9] = uVar57;
    auVar4[10] = uVar58;
    auVar4[0xb] = uVar59;
    auVar4[0xc] = uVar60;
    auVar4[0xd] = uVar61;
    auVar4[0xe] = uVar62;
    auVar4[0xf] = uVar63;
    uVar33 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    auVar5[4] = uVar52;
    auVar5._0_4_ = fVar34;
    auVar5[5] = uVar53;
    auVar5[6] = uVar54;
    auVar5[7] = uVar55;
    auVar5[8] = uVar56;
    auVar5[9] = uVar57;
    auVar5[10] = uVar58;
    auVar5[0xb] = uVar59;
    auVar5[0xc] = uVar60;
    auVar5[0xd] = uVar61;
    auVar5[0xe] = uVar62;
    auVar5[0xf] = uVar63;
    uVar64 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
    auVar6[4] = uVar52;
    auVar6._0_4_ = fVar34;
    auVar6[5] = uVar53;
    auVar6[6] = uVar54;
    auVar6[7] = uVar55;
    auVar6[8] = uVar56;
    auVar6[9] = uVar57;
    auVar6[10] = uVar58;
    auVar6[0xb] = uVar59;
    auVar6[0xc] = uVar60;
    auVar6[0xd] = uVar61;
    auVar6[0xe] = uVar62;
    auVar6[0xf] = uVar63;
    uVar80 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
    auVar7[4] = uVar52;
    auVar7._0_4_ = fVar34;
    auVar7[5] = uVar53;
    auVar7[6] = uVar54;
    auVar7[7] = uVar55;
    auVar7[8] = SUB41(fVar34,0);
    auVar7[9] = (char)((uint)fVar34 >> 8);
    auVar7[10] = (char)((uint)fVar34 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar34 >> 0x18);
    auVar7[0xc] = uVar52;
    auVar7[0xd] = uVar53;
    auVar7[0xe] = uVar54;
    auVar7[0xf] = uVar55;
    uVar23 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar34 = ((float)uVar24 * fVar34 + fVar76 * fVar22 * (float)uVar75 +
             fVar76 * (float)uVar81 * (float)uVar33) - (float)uVar31 * (float)uVar64;
    fVar22 = (fVar70 * fVar25 +
              fVar77 * (float)(CONCAT17(extraout_var_11,
                                        CONCAT16(extraout_var_10,
                                                 CONCAT15(extraout_var_09,
                                                          CONCAT14(extraout_var_08,fVar22)))) >>
                              0x20) * (float)((ulong)uVar75 >> 0x20) +
             fVar77 * fVar74 * (float)((ulong)uVar33 >> 0x20)) -
             fVar71 * (float)((ulong)uVar64 >> 0x20);
    fVar25 = ((float)uVar24 * fVar26 + fVar78 * (float)uVar31 * (float)uVar82 +
             fVar78 * fVar35 * (float)uVar23) - (float)uVar81 * (float)uVar80;
    fVar35 = (fVar70 * fVar27 + fVar79 * fVar71 * (float)((ulong)uVar82 >> 0x20) +
             fVar79 * (float)(CONCAT17(extraout_var_11,
                                       CONCAT16(extraout_var_10,
                                                CONCAT15(extraout_var_09,
                                                         CONCAT14(extraout_var_08,fVar35)))) >> 0x20
                             ) * (float)((ulong)uVar23 >> 0x20)) -
             fVar74 * (float)((ulong)uVar80 >> 0x20);
    bVar36 = SUB41(fVar34,0) & (byte)DAT_01d4ab50;
    bVar37 = (byte)((uint)fVar34 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar38 = (byte)((uint)fVar34 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar39 = (byte)((uint)fVar34 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar40 = SUB41(fVar22,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar41 = (byte)((uint)fVar22 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar42 = (byte)((uint)fVar22 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar43 = (byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar44 = SUB41(fVar25,0) & (byte)DAT_01d4ab58;
    bVar45 = (byte)((uint)fVar25 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar46 = (byte)((uint)fVar25 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar47 = (byte)((uint)fVar25 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar48 = SUB41(fVar35,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar49 = (byte)((uint)fVar35 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar50 = (byte)((uint)fVar35 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar51 = (byte)((uint)fVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar35 = (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36))) *
             (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
    fVar22 = (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40))) *
             (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40)));
    uVar52 = (undefined1)((uint)fVar22 >> 8);
    uVar53 = (undefined1)((uint)fVar22 >> 0x10);
    uVar54 = (undefined1)((uint)fVar22 >> 0x18);
    fVar34 = (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) *
             (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44)));
    uVar55 = (undefined1)((uint)fVar34 >> 8);
    uVar56 = (undefined1)((uint)fVar34 >> 0x10);
    uVar57 = (undefined1)((uint)fVar34 >> 0x18);
    fVar25 = (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) *
             (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)));
    uVar58 = (undefined1)((uint)fVar25 >> 8);
    uVar59 = (undefined1)((uint)fVar25 >> 0x10);
    uVar60 = (undefined1)((uint)fVar25 >> 0x18);
    auVar8[4] = SUB41(fVar22,0);
    auVar8._0_4_ = fVar35;
    auVar8[5] = uVar52;
    auVar8[6] = uVar53;
    auVar8[7] = uVar54;
    auVar8[8] = SUB41(fVar34,0);
    auVar8[9] = uVar55;
    auVar8[10] = uVar56;
    auVar8[0xb] = uVar57;
    auVar8[0xc] = SUB41(fVar25,0);
    auVar8[0xd] = uVar58;
    auVar8[0xe] = uVar59;
    auVar8[0xf] = uVar60;
    auVar9[4] = SUB41(fVar22,0);
    auVar9._0_4_ = fVar35;
    auVar9[5] = uVar52;
    auVar9[6] = uVar53;
    auVar9[7] = uVar54;
    auVar9[8] = SUB41(fVar34,0);
    auVar9[9] = uVar55;
    auVar9[10] = uVar56;
    auVar9[0xb] = uVar57;
    auVar9[0xc] = SUB41(fVar25,0);
    auVar9[0xd] = uVar58;
    auVar9[0xe] = uVar59;
    auVar9[0xf] = uVar60;
    auVar65 = NEON_ext(auVar8,auVar9,8,1);
    fVar35 = auVar65._0_4_ + fVar35;
    fVar22 = auVar65._4_4_ + fVar22;
    fVar34 = fVar35 + fVar22;
    fVar35 = fVar35 + fVar22;
    uVar52 = SUB41(fVar35,0);
    uVar53 = (undefined1)((uint)fVar35 >> 8);
    uVar54 = (undefined1)((uint)fVar35 >> 0x10);
    uVar55 = (undefined1)((uint)fVar35 >> 0x18);
    auVar10[4] = uVar52;
    auVar10._0_4_ = fVar34;
    auVar10[5] = uVar53;
    auVar10[6] = uVar54;
    auVar10[7] = uVar55;
    auVar10[8] = SUB41(fVar34,0);
    auVar10[9] = (char)((uint)fVar34 >> 8);
    auVar10[10] = (char)((uint)fVar34 >> 0x10);
    auVar10[0xb] = (char)((uint)fVar34 >> 0x18);
    auVar10[0xc] = uVar52;
    auVar10[0xd] = uVar53;
    auVar10[0xe] = uVar54;
    auVar10[0xf] = uVar55;
    auVar65 = NEON_frsqrte(auVar10,4);
    auVar67._0_4_ = auVar65._0_4_ * fVar34;
    auVar67._4_4_ = auVar65._4_4_ * fVar35;
    auVar67._8_4_ = auVar65._8_4_ * fVar34;
    uVar11 = (undefined2)(CONCAT15(uVar53,CONCAT14(uVar52,fVar34)) >> 0x20);
    auVar67._12_4_ = auVar65._12_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar11));
    auVar68 = NEON_frsqrts(auVar65,auVar67,4);
    auVar66._0_4_ = auVar65._0_4_ * auVar68._0_4_;
    auVar66._4_4_ = auVar65._4_4_ * auVar68._4_4_;
    auVar66._8_4_ = auVar65._8_4_ * auVar68._8_4_;
    auVar66._12_4_ = auVar65._12_4_ * auVar68._12_4_;
    auVar69._0_4_ = fVar34 * auVar66._0_4_;
    auVar69._4_4_ = fVar35 * auVar66._4_4_;
    auVar69._8_4_ = fVar34 * auVar66._8_4_;
    auVar69._12_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar11)) * auVar66._12_4_;
    iVar12 = -(uint)(fVar34 == 0.0);
    iVar13 = -(uint)(fVar35 == 0.0);
    iVar14 = -(uint)(fVar34 == 0.0);
    iVar15 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar54,uVar11)) == 0.0);
    auVar65 = NEON_frsqrts(auVar66,auVar69,4);
    fVar35 = auVar66._0_4_ * auVar65._0_4_ *
             (float)CONCAT13(bVar39,CONCAT12(bVar38,CONCAT11(bVar37,bVar36)));
    fVar25 = auVar66._4_4_ * auVar65._4_4_ *
             (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40)));
    fVar22 = auVar66._8_4_ * auVar65._8_4_ *
             (float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44)));
    fVar26 = auVar66._12_4_ * auVar65._12_4_ *
             (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)));
    fVar34 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                             CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                      CONCAT11((byte)((uint)fVar22 >> 8) &
                                               ~(byte)((uint)iVar14 >> 8),
                                               SUB41(fVar22,0) & ~(byte)iVar14)));
    fVar22 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                             CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                      CONCAT11((byte)((uint)fVar35 >> 8) &
                                               ~(byte)((uint)iVar12 >> 8),
                                               SUB41(fVar35,0) & ~(byte)iVar12)));
    FUN_01029020((char)*(undefined4 *)(param_1 + 0x4c0),*(undefined8 *)(*(long *)puVar32 + 0x98));
    fVar35 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
    fVar25 = (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                              CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                       CONCAT15((byte)((uint)fVar25 >> 8) &
                                                ~(byte)((uint)iVar13 >> 8),
                                                CONCAT14(SUB41(fVar25,0) & ~(byte)iVar13,fVar22))))
                    >> 0x20) * fVar35;
    fVar26 = (float)(CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                              CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                       CONCAT15((byte)((uint)fVar26 >> 8) &
                                                ~(byte)((uint)iVar15 >> 8),
                                                CONCAT14(SUB41(fVar26,0) & ~(byte)iVar15,fVar34))))
                    >> 0x20) * fVar35;
    *(ulong *)(param_1 + 0x598) =
         CONCAT17((char)((uint)fVar26 >> 0x18),
                  CONCAT16((char)((uint)fVar26 >> 0x10),
                           CONCAT15((char)((uint)fVar26 >> 8),
                                    CONCAT14(SUB41(fVar26,0),fVar34 * fVar35))));
    *(ulong *)(param_1 + 0x590) =
         CONCAT17((char)((uint)fVar25 >> 0x18),
                  CONCAT16((char)((uint)fVar25 >> 0x10),
                           CONCAT15((char)((uint)fVar25 >> 8),
                                    CONCAT14(SUB41(fVar25,0),fVar22 * fVar35))));
    local_40 = 0x5f17fc11021c480f;
    FUN_00dc0720(param_1,&local_40);
    local_40 = 0x5f17fc11021c480f;
    FUN_00dc04c0(param_1,&local_40,0,0,0);
    local_40 = 0x5f17fc11021c480f;
    FUN_00dc0bf0(param_1,&local_40,(undefined8 *)(param_1 + 0x590));
    if (*(char *)(param_1 + 0x572) != '\0') {
      uStack_38 = *(undefined8 *)(param_1 + 0x598);
      uVar33 = *(undefined8 *)(param_1 + 0x590);
      fVar35 = (float)((ulong)uVar33 >> 0x20) + 20.0;
      local_28 = 0x538b73ebb59bd5b;
      local_40 = CONCAT17((char)((uint)fVar35 >> 0x18),
                          CONCAT16((char)((uint)fVar35 >> 0x10),
                                   CONCAT15((char)((uint)fVar35 >> 8),
                                            CONCAT14(SUB41(fVar35,0),(int)uVar33))));
      FUN_00dc04c0(param_1,&local_28,0,0,0);
      local_28 = 0x538b73ebb59bd5b;
      FUN_00dc0bf0(param_1,&local_28,&local_40);
    }
  }
  return;
}


