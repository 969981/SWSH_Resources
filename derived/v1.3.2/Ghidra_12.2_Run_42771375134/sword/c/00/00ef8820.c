/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef8820; name: FUN_00ef8820
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef8820(long param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long *plVar40;
  long lVar41;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
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
  undefined1 extraout_var_16;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_38;
  
  lVar41 = *(long *)(param_1 + 0x88);
  if (lVar41 != 0) {
    (**(code **)(*(long *)(lVar41 + 0x48) + 0x10))();
  }
  FUN_00a92cd0((char)*(undefined4 *)(lVar41 + 0x504),0,0);
  uVar65 = (undefined4)_UNK_01d49dc8;
  uVar66 = (undefined4)((ulong)_UNK_01d49dc8 >> 0x20);
  fVar21 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) *
           (float)_DAT_01d4ae80;
  fVar24 = (float)CONCAT13(extraout_var_08,
                           CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05))) *
           (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar46 = SUB41(fVar24,0);
  uVar47 = (undefined1)((uint)fVar24 >> 8);
  uVar48 = (undefined1)((uint)fVar24 >> 0x10);
  uVar49 = (undefined1)((uint)fVar24 >> 0x18);
  fVar25 = (float)CONCAT13(extraout_var_12,
                           CONCAT12(extraout_var_11,CONCAT11(extraout_var_10,extraout_var_09))) *
           (float)_UNK_01d4ae88;
  uVar50 = SUB41(fVar25,0);
  uVar52 = (undefined1)((uint)fVar25 >> 8);
  uVar54 = (undefined1)((uint)fVar25 >> 0x10);
  uVar56 = (undefined1)((uint)fVar25 >> 0x18);
  fVar26 = (float)CONCAT13(extraout_var_16,
                           CONCAT12(extraout_var_15,CONCAT11(extraout_var_14,extraout_var_13))) *
           (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar58 = SUB41(fVar26,0);
  uVar59 = (undefined1)((uint)fVar26 >> 8);
  uVar60 = (undefined1)((uint)fVar26 >> 0x10);
  uVar61 = (undefined1)((uint)fVar26 >> 0x18);
  auVar27._8_4_ = uVar65;
  auVar27._0_8_ = _DAT_01d49dc0;
  auVar27._12_4_ = uVar66;
  uVar14 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd4f90);
  auVar15[4] = uVar46;
  auVar15._0_4_ = fVar21;
  auVar15[5] = uVar47;
  auVar15[6] = uVar48;
  auVar15[7] = uVar49;
  auVar15[8] = uVar50;
  auVar15[9] = uVar52;
  auVar15[10] = uVar54;
  auVar15[0xb] = uVar56;
  auVar15[0xc] = uVar58;
  auVar15[0xd] = uVar59;
  auVar15[0xe] = uVar60;
  auVar15[0xf] = uVar61;
  uVar73 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar28._8_4_ = uVar65;
  auVar28._0_8_ = _DAT_01d49dc0;
  auVar28._12_4_ = uVar66;
  uVar68 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50f8);
  auVar29._8_4_ = uVar65;
  auVar29._0_8_ = _DAT_01d49dc0;
  auVar29._12_4_ = uVar66;
  uVar62 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5418);
  fVar63 = (float)((ulong)uVar62 >> 0x20);
  auVar16[4] = uVar46;
  auVar16._0_4_ = fVar21;
  auVar16[5] = uVar47;
  auVar16[6] = uVar48;
  auVar16[7] = uVar49;
  auVar16[8] = uVar50;
  auVar16[9] = uVar52;
  auVar16[10] = uVar54;
  auVar16[0xb] = uVar56;
  auVar16[0xc] = uVar58;
  auVar16[0xd] = uVar59;
  auVar16[0xe] = uVar60;
  auVar16[0xf] = uVar61;
  uVar75 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
  auVar17[4] = uVar46;
  auVar17._0_4_ = fVar21;
  auVar17[5] = uVar47;
  auVar17[6] = uVar48;
  auVar17[7] = uVar49;
  auVar17[8] = uVar50;
  auVar17[9] = uVar52;
  auVar17[10] = uVar54;
  auVar17[0xb] = uVar56;
  auVar17[0xc] = uVar58;
  auVar17[0xd] = uVar59;
  auVar17[0xe] = uVar60;
  auVar17[0xf] = uVar61;
  uVar76 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
  auVar18[4] = uVar46;
  auVar18._0_4_ = fVar21;
  auVar18[5] = uVar47;
  auVar18[6] = uVar48;
  auVar18[7] = uVar49;
  auVar18[8] = uVar50;
  auVar18[9] = uVar52;
  auVar18[10] = uVar54;
  auVar18[0xb] = uVar56;
  auVar18[0xc] = uVar58;
  auVar18[0xd] = uVar59;
  auVar18[0xe] = uVar60;
  auVar18[0xf] = uVar61;
  uVar77 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
  fVar3 = (float)((ulong)uVar14 >> 0x20);
  fVar67 = (float)((ulong)uVar68 >> 0x20);
  auVar19[4] = uVar46;
  auVar19._0_4_ = fVar21;
  auVar19[5] = uVar47;
  auVar19[6] = uVar48;
  auVar19[7] = uVar49;
  auVar19[8] = uVar50;
  auVar19[9] = uVar52;
  auVar19[10] = uVar54;
  auVar19[0xb] = uVar56;
  auVar19[0xc] = uVar58;
  auVar19[0xd] = uVar59;
  auVar19[0xe] = uVar60;
  auVar19[0xf] = uVar61;
  uVar74 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
  auVar20[4] = uVar46;
  auVar20._0_4_ = fVar21;
  auVar20[5] = uVar47;
  auVar20[6] = uVar48;
  auVar20[7] = uVar49;
  auVar20[8] = SUB41(fVar21,0);
  auVar20[9] = (char)((uint)fVar21 >> 8);
  auVar20[10] = (char)((uint)fVar21 >> 0x10);
  auVar20[0xb] = (char)((uint)fVar21 >> 0x18);
  auVar20[0xc] = uVar46;
  auVar20[0xd] = uVar47;
  auVar20[0xe] = uVar48;
  auVar20[0xf] = uVar49;
  uVar22 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
  auVar4[1] = extraout_var;
  auVar4[0] = extraout_b0;
  auVar4[2] = extraout_var_01;
  auVar4[3] = extraout_var_03;
  auVar4[4] = extraout_var_05;
  auVar4[5] = extraout_var_06;
  auVar4[6] = extraout_var_07;
  auVar4[7] = extraout_var_08;
  auVar4[8] = extraout_var_09;
  auVar4[9] = extraout_var_10;
  auVar4[10] = extraout_var_11;
  auVar4[0xb] = extraout_var_12;
  auVar4[0xc] = extraout_var_13;
  auVar4[0xd] = extraout_var_14;
  auVar4[0xe] = extraout_var_15;
  auVar4[0xf] = extraout_var_16;
  uVar30 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  fVar64 = (float)((ulong)uVar30 >> 0x20);
  fVar69 = (float)_DAT_01d4ae90;
  fVar70 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar71 = (float)_UNK_01d4ae98;
  fVar72 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar5[1] = extraout_var;
  auVar5[0] = extraout_b0;
  auVar5[2] = extraout_var_01;
  auVar5[3] = extraout_var_03;
  auVar5[4] = extraout_var_05;
  auVar5[5] = extraout_var_06;
  auVar5[6] = extraout_var_07;
  auVar5[7] = extraout_var_08;
  auVar5[8] = extraout_var_09;
  auVar5[9] = extraout_var_10;
  auVar5[10] = extraout_var_11;
  auVar5[0xb] = extraout_var_12;
  auVar5[0xc] = extraout_var_13;
  auVar5[0xd] = extraout_var_14;
  auVar5[0xe] = extraout_var_15;
  auVar5[0xf] = extraout_var_16;
  uVar23 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
  fVar13 = (fVar21 * (float)uVar14 + fVar69 * (float)uVar73 * 0.0 +
           fVar69 * (float)uVar62 * (float)uVar74) - (float)uVar68 * (float)uVar76;
  fVar24 = (fVar24 * fVar3 + fVar70 * (float)((ulong)uVar73 >> 0x20) * 0.0 +
           fVar70 * fVar63 * (float)((ulong)uVar74 >> 0x20)) -
           fVar67 * (float)((ulong)uVar76 >> 0x20);
  uVar46 = SUB41(fVar24,0);
  uVar47 = (undefined1)((uint)fVar24 >> 8);
  uVar48 = (undefined1)((uint)fVar24 >> 0x10);
  uVar49 = (undefined1)((uint)fVar24 >> 0x18);
  fVar25 = (fVar25 * (float)uVar14 + fVar71 * (float)uVar68 * (float)uVar75 +
           fVar71 * (float)uVar22 * 0.0) - (float)uVar62 * (float)uVar77;
  uVar50 = SUB41(fVar25,0);
  uVar52 = (undefined1)((uint)fVar25 >> 8);
  uVar54 = (undefined1)((uint)fVar25 >> 0x10);
  uVar56 = (undefined1)((uint)fVar25 >> 0x18);
  fVar26 = (fVar26 * fVar3 + fVar72 * fVar67 * (float)((ulong)uVar75 >> 0x20) +
           fVar72 * (float)((ulong)uVar22 >> 0x20) * 0.0) - fVar63 * (float)((ulong)uVar77 >> 0x20);
  uVar58 = SUB41(fVar26,0);
  uVar59 = (undefined1)((uint)fVar26 >> 8);
  uVar60 = (undefined1)((uint)fVar26 >> 0x10);
  uVar61 = (undefined1)((uint)fVar26 >> 0x18);
  fVar21 = (float)CONCAT13(extraout_var_03,
                           CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  auVar7[4] = uVar46;
  auVar7._0_4_ = fVar13;
  auVar7[5] = uVar47;
  auVar7[6] = uVar48;
  auVar7[7] = uVar49;
  auVar7[8] = uVar50;
  auVar7[9] = uVar52;
  auVar7[10] = uVar54;
  auVar7[0xb] = uVar56;
  auVar7[0xc] = uVar58;
  auVar7[0xd] = uVar59;
  auVar7[0xe] = uVar60;
  auVar7[0xf] = uVar61;
  uVar68 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
  auVar8[4] = uVar46;
  auVar8._0_4_ = fVar13;
  auVar8[5] = uVar47;
  auVar8[6] = uVar48;
  auVar8[7] = uVar49;
  auVar8[8] = uVar50;
  auVar8[9] = uVar52;
  auVar8[10] = uVar54;
  auVar8[0xb] = uVar56;
  auVar8[0xc] = uVar58;
  auVar8[0xd] = uVar59;
  auVar8[0xe] = uVar60;
  auVar8[0xf] = uVar61;
  uVar75 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
  fVar63 = (float)((ulong)uVar23 >> 0x20);
  auVar6[1] = extraout_var;
  auVar6[0] = extraout_b0;
  auVar6[2] = extraout_var_01;
  auVar6[3] = extraout_var_03;
  auVar6[4] = extraout_var_05;
  auVar6[5] = extraout_var_06;
  auVar6[6] = extraout_var_07;
  auVar6[7] = extraout_var_08;
  auVar6[8] = extraout_var_09;
  auVar6[9] = extraout_var_10;
  auVar6[10] = extraout_var_11;
  auVar6[0xb] = extraout_var_12;
  auVar6[0xc] = extraout_var_13;
  auVar6[0xd] = extraout_var_14;
  auVar6[0xe] = extraout_var_15;
  auVar6[0xf] = extraout_var_16;
  uVar74 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
  fVar67 = (float)((ulong)uVar74 >> 0x20);
  fVar3 = (float)CONCAT13(extraout_var_03,
                          CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
  auVar9[4] = uVar46;
  auVar9._0_4_ = fVar13;
  auVar9[5] = uVar47;
  auVar9[6] = uVar48;
  auVar9[7] = uVar49;
  auVar9[8] = uVar50;
  auVar9[9] = uVar52;
  auVar9[10] = uVar54;
  auVar9[0xb] = uVar56;
  auVar9[0xc] = uVar58;
  auVar9[0xd] = uVar59;
  auVar9[0xe] = uVar60;
  auVar9[0xf] = uVar61;
  uVar14 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
  auVar10[4] = uVar46;
  auVar10._0_4_ = fVar13;
  auVar10[5] = uVar47;
  auVar10[6] = uVar48;
  auVar10[7] = uVar49;
  auVar10[8] = uVar50;
  auVar10[9] = uVar52;
  auVar10[10] = uVar54;
  auVar10[0xb] = uVar56;
  auVar10[0xc] = uVar58;
  auVar10[0xd] = uVar59;
  auVar10[0xe] = uVar60;
  auVar10[0xf] = uVar61;
  uVar62 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
  auVar11[4] = uVar46;
  auVar11._0_4_ = fVar13;
  auVar11[5] = uVar47;
  auVar11[6] = uVar48;
  auVar11[7] = uVar49;
  auVar11[8] = uVar50;
  auVar11[9] = uVar52;
  auVar11[10] = uVar54;
  auVar11[0xb] = uVar56;
  auVar11[0xc] = uVar58;
  auVar11[0xd] = uVar59;
  auVar11[0xe] = uVar60;
  auVar11[0xf] = uVar61;
  uVar73 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
  auVar12[4] = uVar46;
  auVar12._0_4_ = fVar13;
  auVar12[5] = uVar47;
  auVar12[6] = uVar48;
  auVar12[7] = uVar49;
  auVar12[8] = SUB41(fVar13,0);
  auVar12[9] = (char)((uint)fVar13 >> 8);
  auVar12[10] = (char)((uint)fVar13 >> 0x10);
  auVar12[0xb] = (char)((uint)fVar13 >> 0x18);
  auVar12[0xc] = uVar46;
  auVar12[0xd] = uVar47;
  auVar12[0xe] = uVar48;
  auVar12[0xf] = uVar49;
  uVar22 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50b0);
  uVar35 = (ulong)DAT_01d4ab58 >> 0x20;
  uVar36 = (ulong)DAT_01d4ab58 >> 0x28;
  uVar37 = (ulong)DAT_01d4ab58 >> 0x30;
  uVar38 = (ulong)DAT_01d4ab58 >> 0x38;
  uVar31 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar32 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar33 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar34 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar13 = ((float)uVar23 * fVar13 + fVar69 * fVar21 * (float)uVar68 +
           fVar69 * (float)uVar74 * (float)uVar14) - (float)uVar30 * (float)uVar62;
  fVar24 = (fVar63 * fVar24 +
            fVar70 * (float)(CONCAT17(extraout_var_08,
                                      CONCAT16(extraout_var_07,
                                               CONCAT15(extraout_var_06,
                                                        CONCAT14(extraout_var_05,fVar21)))) >> 0x20)
                     * (float)((ulong)uVar68 >> 0x20) +
           fVar70 * fVar67 * (float)((ulong)uVar14 >> 0x20)) -
           fVar64 * (float)((ulong)uVar62 >> 0x20);
  fVar21 = ((float)uVar23 * fVar25 + fVar71 * (float)uVar30 * (float)uVar75 +
           fVar71 * fVar3 * (float)uVar22) - (float)uVar74 * (float)uVar73;
  fVar25 = (fVar63 * fVar26 + fVar72 * fVar64 * (float)((ulong)uVar75 >> 0x20) +
           fVar72 * (float)(CONCAT17(extraout_var_08,
                                     CONCAT16(extraout_var_07,
                                              CONCAT15(extraout_var_06,
                                                       CONCAT14(extraout_var_05,fVar3)))) >> 0x20) *
                    (float)((ulong)uVar22 >> 0x20)) - fVar67 * (float)((ulong)uVar73 >> 0x20);
  bVar42 = SUB41(fVar13,0) & (byte)DAT_01d4ab50;
  bVar43 = (byte)((uint)fVar13 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar44 = (byte)((uint)fVar13 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar45 = (byte)((uint)fVar13 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar51 = SUB41(fVar21,0) & (byte)DAT_01d4ab58;
  bVar53 = (byte)((uint)fVar21 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar55 = (byte)((uint)fVar21 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar57 = (byte)((uint)fVar21 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
  uVar23 = *(undefined8 *)(lVar41 + 0x4e8);
  uVar14 = *(undefined8 *)(lVar41 + 0x4e0);
  fVar21 = (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51)));
  fVar3 = (float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42)));
  uVar62 = *(undefined8 *)(lVar41 + 0xb8);
  uVar22 = *(undefined8 *)(lVar41 + 0xb0);
  FUN_00a92fd0(SUB41(-(float)CONCAT13(bVar45,CONCAT12(bVar44,CONCAT11(bVar43,bVar42))),0),
               SUB41(-(float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51))),0));
  local_70 = 0x4120000000000000;
  local_60 = 0xcbf29ce484222645;
  local_68 = 0;
  local_66 = 0;
  local_64 = 0;
  local_58 = &DAT_01d38550;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(*(long *)(param_1 + 0x88) + 0x514) == 3) {
    lVar39 = FUN_00e7e260();
    local_80 = *(undefined8 *)(lVar39 + 0xb0);
    uStack_78 = *(undefined8 *)(lVar39 + 0xb8);
  }
  else {
    fVar13 = (float)((ulong)uVar14 >> 0x20) + (float)((ulong)uVar22 >> 0x20) +
             (float)(CONCAT17((byte)((uint)fVar24 >> 0x18) & (byte)uVar34,
                              CONCAT16((byte)((uint)fVar24 >> 0x10) & (byte)uVar33,
                                       CONCAT15((byte)((uint)fVar24 >> 8) & (byte)uVar32,
                                                CONCAT14(SUB41(fVar24,0) & (byte)uVar31,fVar3)))) >>
                    0x20) * 43.0;
    fVar24 = (float)((ulong)uVar23 >> 0x20) + (float)((ulong)uVar62 >> 0x20) +
             (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & (byte)uVar38,
                              CONCAT16((byte)((uint)fVar25 >> 0x10) & (byte)uVar37,
                                       CONCAT15((byte)((uint)fVar25 >> 8) & (byte)uVar36,
                                                CONCAT14(SUB41(fVar25,0) & (byte)uVar35,fVar21))))
                    >> 0x20) * 43.0;
    uStack_78 = CONCAT17((char)((uint)fVar24 >> 0x18),
                         CONCAT16((char)((uint)fVar24 >> 0x10),
                                  CONCAT15((char)((uint)fVar24 >> 8),
                                           CONCAT14(SUB41(fVar24,0),
                                                    (float)uVar23 + (float)uVar62 + fVar21 * 43.0)))
                        );
    local_80 = CONCAT17((char)((uint)fVar13 >> 0x18),
                        CONCAT16((char)((uint)fVar13 >> 0x10),
                                 CONCAT15((char)((uint)fVar13 >> 8),
                                          CONCAT14(SUB41(fVar13,0),
                                                   (float)uVar14 + (float)uVar22 + fVar3 * 43.0))));
  }
  local_70 = CONCAT44(local_70._4_4_,
                      CONCAT13(extraout_var_04,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))));
  local_68 = 1;
  lVar39 = FUN_00e7e260();
  local_38 = *(undefined8 *)(lVar39 + 0x1a0);
  FUN_00e79270(&local_38,&local_80);
  iVar2 = *(int *)(*(long *)(param_1 + 0x88) + 0x514);
  if (iVar2 - 1U < 3) {
    iVar1 = iVar2;
    if (iVar2 != 3) {
      iVar1 = 1;
    }
    if (iVar2 != 2) {
      iVar2 = iVar1;
    }
    plVar40 = (long *)FUN_00e7e260();
    (**(code **)(*plVar40 + 0x180))((char)*(undefined4 *)PTR_DAT_0271ecd0,plVar40,PTR_DAT_0271e870);
    (**(code **)(*plVar40 + 400))(plVar40,PTR_DAT_0271ed28,iVar2);
    (**(code **)(*plVar40 + 0x1b0))(plVar40,PTR_DAT_0271ed30);
    FUN_00de6550(*(undefined8 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  (**(code **)(*(long *)(lVar41 + 0x48) + 0x18))((long *)(lVar41 + 0x48));
  return;
}


