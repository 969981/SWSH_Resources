/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e92090; name: FUN_00e92090
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e92090(long param_1)

{
  undefined1 (*pauVar1) [12];
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  int iVar38;
  long lVar39;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  byte bVar40;
  undefined1 uVar41;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar42;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar43;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar44;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar45;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar46;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar47;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 uVar48;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 uVar49;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar50;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar51;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 uVar52;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar53;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar54;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar55;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  float fVar72;
  float fVar73;
  undefined4 uVar74;
  float fVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  long local_38;
  long *local_28;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x58) + 0x54) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) == 0) {
    local_38 = 0;
    cVar3 = *(char *)(param_1 + 0x114);
  }
  else {
    FUN_00e93040(&local_38);
    cVar3 = *(char *)(param_1 + 0x114);
  }
  if ((cVar3 == '\0') ||
     ((*(long *)(param_1 + 0xf8) != 0 && (*(int *)(*(long *)(param_1 + 0xf8) + 0x54) != 0)))) {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x188);
    FUN_00e93040(&local_28,*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*local_28 + 0x178))();
    fVar66 = (float)*(undefined8 *)(param_1 + 0x70) +
             (float)CONCAT13(extraout_var_03,
                             CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
    fVar68 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) +
             (float)CONCAT13(extraout_var_11,
                             CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05)));
    uVar41 = (undefined1)((uint)fVar68 >> 8);
    uVar42 = (undefined1)((uint)fVar68 >> 0x10);
    uVar43 = (undefined1)((uint)fVar68 >> 0x18);
    fVar58 = (float)*(undefined8 *)(param_1 + 0x78) +
             (float)CONCAT13(extraout_var_19,
                             CONCAT12(extraout_var_17,CONCAT11(extraout_var_15,extraout_var_13)));
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) +
            (float)CONCAT13(extraout_var_27,
                            CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21)));
    uVar44 = (undefined1)((uint)fVar8 >> 8);
    uVar45 = (undefined1)((uint)fVar8 >> 0x10);
    uVar46 = (undefined1)((uint)fVar8 >> 0x18);
    *(ulong *)(param_1 + 0x78) =
         CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(SUB41(fVar8,0),fVar58))));
    *(ulong *)(param_1 + 0x70) =
         CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(SUB41(fVar68,0),fVar66))));
    FUN_00a92cd0((char)*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),0);
    uVar31 = DAT_01cd5418;
    uVar69 = DAT_01cd5270;
    uVar63 = DAT_01cd50f8;
    uVar30 = DAT_01cd50b0;
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x60);
    uVar74 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    fVar60 = (float)*(undefined8 *)*pauVar1;
    fVar72 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar62 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00))) *
             (float)_DAT_01d4ae80;
    fVar65 = (float)CONCAT13(extraout_var_12,
                             CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar47 = SUB41(fVar65,0);
    uVar48 = (undefined1)((uint)fVar65 >> 8);
    uVar49 = (undefined1)((uint)fVar65 >> 0x10);
    uVar50 = (undefined1)((uint)fVar65 >> 0x18);
    fVar21 = (float)CONCAT13(extraout_var_20,
                             CONCAT12(extraout_var_18,CONCAT11(extraout_var_16,extraout_var_14))) *
             (float)_UNK_01d4ae88;
    uVar51 = SUB41(fVar21,0);
    uVar52 = (undefined1)((uint)fVar21 >> 8);
    uVar53 = (undefined1)((uint)fVar21 >> 0x10);
    uVar54 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (float)CONCAT13(extraout_var_28,
                             CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar55 = SUB41(fVar22,0);
    uVar56 = (undefined1)((uint)fVar22 >> 8);
    uVar70 = (undefined1)((uint)fVar22 >> 0x10);
    uVar71 = (undefined1)((uint)fVar22 >> 0x18);
    auVar23._12_4_ = uVar74;
    auVar23._0_12_ = *pauVar1;
    uVar64 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    fVar61 = (float)((ulong)uVar64 >> 0x20);
    auVar24._12_4_ = uVar74;
    auVar24._0_12_ = *pauVar1;
    uVar77 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5418);
    auVar25._12_4_ = uVar74;
    auVar25._0_12_ = *pauVar1;
    uVar76 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar15[4] = uVar47;
    auVar15._0_4_ = fVar62;
    auVar15[5] = uVar48;
    auVar15[6] = uVar49;
    auVar15[7] = uVar50;
    auVar15[8] = uVar51;
    auVar15[9] = uVar52;
    auVar15[10] = uVar53;
    auVar15[0xb] = uVar54;
    auVar15[0xc] = uVar55;
    auVar15[0xd] = uVar56;
    auVar15[0xe] = uVar70;
    auVar15[0xf] = uVar71;
    uVar85 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5120);
    auVar16[4] = uVar47;
    auVar16._0_4_ = fVar62;
    auVar16[5] = uVar48;
    auVar16[6] = uVar49;
    auVar16[7] = uVar50;
    auVar16[8] = uVar51;
    auVar16[9] = uVar52;
    auVar16[10] = uVar53;
    auVar16[0xb] = uVar54;
    auVar16[0xc] = uVar55;
    auVar16[0xd] = uVar56;
    auVar16[0xe] = uVar70;
    auVar16[0xf] = uVar71;
    uVar83 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd4f90);
    fVar75 = (float)((ulong)uVar76 >> 0x20);
    auVar17[4] = uVar47;
    auVar17._0_4_ = fVar62;
    auVar17[5] = uVar48;
    auVar17[6] = uVar49;
    auVar17[7] = uVar50;
    auVar17[8] = uVar51;
    auVar17[9] = uVar52;
    auVar17[10] = uVar53;
    auVar17[0xb] = uVar54;
    auVar17[0xc] = uVar55;
    auVar17[0xd] = uVar56;
    auVar17[0xe] = uVar70;
    auVar17[0xf] = uVar71;
    uVar86 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
    auVar18[4] = uVar47;
    auVar18._0_4_ = fVar62;
    auVar18[5] = uVar48;
    auVar18[6] = uVar49;
    auVar18[7] = uVar50;
    auVar18[8] = uVar51;
    auVar18[9] = uVar52;
    auVar18[10] = uVar53;
    auVar18[0xb] = uVar54;
    auVar18[0xc] = uVar55;
    auVar18[0xd] = uVar56;
    auVar18[0xe] = uVar70;
    auVar18[0xf] = uVar71;
    uVar87 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
    auVar19[4] = uVar47;
    auVar19._0_4_ = fVar62;
    auVar19[5] = uVar48;
    auVar19[6] = uVar49;
    auVar19[7] = uVar50;
    auVar19[8] = uVar51;
    auVar19[9] = uVar52;
    auVar19[10] = uVar53;
    auVar19[0xb] = uVar54;
    auVar19[0xc] = uVar55;
    auVar19[0xd] = uVar56;
    auVar19[0xe] = uVar70;
    auVar19[0xf] = uVar71;
    uVar84 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50f8);
    auVar20[4] = uVar47;
    auVar20._0_4_ = fVar62;
    auVar20[5] = uVar48;
    auVar20[6] = uVar49;
    auVar20[7] = uVar50;
    auVar20[8] = SUB41(fVar62,0);
    auVar20[9] = (char)((uint)fVar62 >> 8);
    auVar20[10] = (char)((uint)fVar62 >> 0x10);
    auVar20[0xb] = (char)((uint)fVar62 >> 0x18);
    auVar20[0xc] = uVar47;
    auVar20[0xd] = uVar48;
    auVar20[0xe] = uVar49;
    auVar20[0xf] = uVar50;
    uVar67 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
    fVar79 = (float)((ulong)uVar77 >> 0x20);
    fVar78 = (float)_DAT_01d4ae90;
    fVar80 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar81 = (float)_UNK_01d4ae98;
    fVar82 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar5[1] = extraout_var_00;
    auVar5[0] = extraout_b0_00;
    auVar5[2] = extraout_var_02;
    auVar5[3] = extraout_var_04;
    auVar5[4] = extraout_var_06;
    auVar5[5] = extraout_var_08;
    auVar5[6] = extraout_var_10;
    auVar5[7] = extraout_var_12;
    auVar5[8] = extraout_var_14;
    auVar5[9] = extraout_var_16;
    auVar5[10] = extraout_var_18;
    auVar5[0xb] = extraout_var_20;
    auVar5[0xc] = extraout_var_22;
    auVar5[0xd] = extraout_var_24;
    auVar5[0xe] = extraout_var_26;
    auVar5[0xf] = extraout_var_28;
    uVar26 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    fVar73 = (float)((ulong)uVar26 >> 0x20);
    auVar6[1] = extraout_var_00;
    auVar6[0] = extraout_b0_00;
    auVar6[2] = extraout_var_02;
    auVar6[3] = extraout_var_04;
    auVar6[4] = extraout_var_06;
    auVar6[5] = extraout_var_08;
    auVar6[6] = extraout_var_10;
    auVar6[7] = extraout_var_12;
    auVar6[8] = extraout_var_14;
    auVar6[9] = extraout_var_16;
    auVar6[10] = extraout_var_18;
    auVar6[0xb] = extraout_var_20;
    auVar6[0xc] = extraout_var_22;
    auVar6[0xd] = extraout_var_24;
    auVar6[0xe] = extraout_var_26;
    auVar6[0xf] = extraout_var_28;
    uVar33 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
    fVar57 = (fVar62 * (float)uVar64 + fVar78 * fVar60 * (float)uVar83 +
             fVar78 * (float)uVar77 * (float)uVar84) - (float)uVar76 * (float)uVar86;
    fVar59 = (fVar65 * fVar61 + fVar80 * fVar72 * (float)((ulong)uVar83 >> 0x20) +
             fVar80 * fVar79 * (float)((ulong)uVar84 >> 0x20)) -
             fVar75 * (float)((ulong)uVar86 >> 0x20);
    fVar60 = (fVar21 * (float)uVar64 + fVar81 * (float)uVar76 * (float)uVar85 +
             fVar81 * fVar60 * (float)uVar67) - (float)uVar77 * (float)uVar87;
    fVar61 = (fVar22 * fVar61 + fVar82 * fVar75 * (float)((ulong)uVar85 >> 0x20) +
             fVar82 * fVar72 * (float)((ulong)uVar67 >> 0x20)) -
             fVar79 * (float)((ulong)uVar87 >> 0x20);
    fVar65 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    auVar9._4_4_ = fVar59;
    auVar9._0_4_ = fVar57;
    auVar9._8_4_ = fVar60;
    auVar9._12_4_ = fVar61;
    uVar76 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar10._4_4_ = fVar59;
    auVar10._0_4_ = fVar57;
    auVar10._8_4_ = fVar60;
    auVar10._12_4_ = fVar61;
    uVar83 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5120);
    auVar7[1] = extraout_var_00;
    auVar7[0] = extraout_b0_00;
    auVar7[2] = extraout_var_02;
    auVar7[3] = extraout_var_04;
    auVar7[4] = extraout_var_06;
    auVar7[5] = extraout_var_08;
    auVar7[6] = extraout_var_10;
    auVar7[7] = extraout_var_12;
    auVar7[8] = extraout_var_14;
    auVar7[9] = extraout_var_16;
    auVar7[10] = extraout_var_18;
    auVar7[0xb] = extraout_var_20;
    auVar7[0xc] = extraout_var_22;
    auVar7[0xd] = extraout_var_24;
    auVar7[0xe] = extraout_var_26;
    auVar7[0xf] = extraout_var_28;
    uVar77 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
    fVar21 = (float)((ulong)uVar33 >> 0x20);
    fVar72 = (float)((ulong)uVar77 >> 0x20);
    *(undefined8 *)(param_1 + 0x80) = 0;
    fVar62 = (float)CONCAT13(extraout_var_04,
                             CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
    auVar11._4_4_ = fVar59;
    auVar11._0_4_ = fVar57;
    auVar11._8_4_ = fVar60;
    auVar11._12_4_ = fVar61;
    uVar64 = a64_TBL(ZEXT816(0),auVar11,uVar63);
    auVar12._4_4_ = fVar59;
    auVar12._0_4_ = fVar57;
    auVar12._8_4_ = fVar60;
    auVar12._12_4_ = fVar61;
    uVar63 = a64_TBL(ZEXT816(0),auVar12,uVar31);
    auVar13._4_4_ = fVar59;
    auVar13._0_4_ = fVar57;
    auVar13._8_4_ = fVar60;
    auVar13._12_4_ = fVar61;
    uVar69 = a64_TBL(ZEXT816(0),auVar13,uVar69);
    auVar14._4_4_ = fVar59;
    auVar14._0_4_ = fVar57;
    auVar14._8_4_ = fVar57;
    auVar14._12_4_ = fVar59;
    uVar67 = a64_TBL(ZEXT816(0),auVar14,uVar30);
    bVar40 = (byte)DAT_01d4ab50;
    uVar27 = (ulong)DAT_01d4ab50 >> 8;
    uVar28 = (ulong)DAT_01d4ab50 >> 0x10;
    uVar29 = (ulong)DAT_01d4ab50 >> 0x18;
    fVar22 = ((float)uVar33 * fVar57 + fVar78 * fVar65 * (float)uVar76 +
             fVar78 * (float)uVar77 * (float)uVar64) - (float)uVar26 * (float)uVar63;
    fVar65 = (fVar21 * fVar59 +
              fVar80 * (float)(CONCAT17(extraout_var_12,
                                        CONCAT16(extraout_var_10,
                                                 CONCAT15(extraout_var_08,
                                                          CONCAT14(extraout_var_06,fVar65)))) >>
                              0x20) * (float)((ulong)uVar76 >> 0x20) +
             fVar80 * fVar72 * (float)((ulong)uVar64 >> 0x20)) -
             fVar73 * (float)((ulong)uVar63 >> 0x20);
    fVar57 = ((float)uVar33 * fVar60 + fVar81 * (float)uVar26 * (float)uVar83 +
             fVar81 * fVar62 * (float)uVar67) - (float)uVar77 * (float)uVar69;
    fVar21 = (fVar21 * fVar61 + fVar82 * fVar73 * (float)((ulong)uVar83 >> 0x20) +
             fVar82 * (float)(CONCAT17(extraout_var_12,
                                       CONCAT16(extraout_var_10,
                                                CONCAT15(extraout_var_08,
                                                         CONCAT14(extraout_var_06,fVar62)))) >> 0x20
                             ) * (float)((ulong)uVar67 >> 0x20)) -
             fVar72 * (float)((ulong)uVar69 >> 0x20);
    fVar62 = (float)(CONCAT17(uVar43,CONCAT16(uVar42,CONCAT15(uVar41,CONCAT14(SUB41(fVar68,0),fVar66
                                                                             )))) >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar65 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                             CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                      CONCAT11((byte)((uint)fVar65 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                               SUB41(fVar65,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)
                                              )));
    fVar65 = (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(SUB41(fVar8,0),fVar58)
                                                             ))) >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                             CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                      CONCAT11((byte)((uint)fVar21 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                               SUB41(fVar21,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)
                                              )));
    *(ulong *)(param_1 + 0x68) =
         CONCAT17((char)((uint)fVar65 >> 0x18),
                  CONCAT16((char)((uint)fVar65 >> 0x10),
                           CONCAT15((char)((uint)fVar65 >> 8),
                                    CONCAT14(SUB41(fVar65,0),
                                             fVar58 + (float)CONCAT13((byte)((uint)fVar57 >> 0x18) &
                                                                      (byte)((ulong)DAT_01d4ab58 >>
                                                                            0x18),
                                                                      CONCAT12((byte)((uint)fVar57
                                                                                     >> 0x10) &
                                                                               (byte)((ulong)
                                                  DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar57 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar57,0) & (byte)DAT_01d4ab58)))))
                          ));
    *(ulong *)(param_1 + 0x60) =
         CONCAT17((char)((uint)fVar62 >> 0x18),
                  CONCAT16((char)((uint)fVar62 >> 0x10),
                           CONCAT15((char)((uint)fVar62 >> 8),
                                    CONCAT14(SUB41(fVar62,0),
                                             fVar66 + (float)CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                                      (byte)uVar29,
                                                                      CONCAT12((byte)((uint)fVar22
                                                                                     >> 0x10) &
                                                                               (byte)uVar28,
                                                                               CONCAT11((byte)((uint
                                                  )fVar22 >> 8) & (byte)uVar27,
                                                  SUB41(fVar22,0) & bVar40)))))));
    if (local_28 != (long *)0x0) {
      (**(code **)(local_28[9] + 0x18))();
      local_28 = (long *)0x0;
    }
    uVar67 = *(undefined8 *)(param_1 + 0x78);
    uVar64 = *(undefined8 *)(param_1 + 0x70);
    if (*(char *)(param_1 + 0x114) == '\0') {
      uVar33 = *(undefined8 *)(param_1 + 0x108);
      uVar49 = (undefined1)uVar33;
      uVar50 = (undefined1)((ulong)uVar33 >> 8);
      uVar51 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar52 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar53 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar54 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar55 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar56 = (undefined1)((ulong)uVar33 >> 0x38);
      uVar33 = *(undefined8 *)(param_1 + 0x100);
      uVar41 = (undefined1)uVar33;
      uVar42 = (undefined1)((ulong)uVar33 >> 8);
      uVar43 = (undefined1)((ulong)uVar33 >> 0x10);
      uVar44 = (undefined1)((ulong)uVar33 >> 0x18);
      uVar45 = (undefined1)((ulong)uVar33 >> 0x20);
      uVar46 = (undefined1)((ulong)uVar33 >> 0x28);
      uVar47 = (undefined1)((ulong)uVar33 >> 0x30);
      uVar48 = (undefined1)((ulong)uVar33 >> 0x38);
    }
    else {
      lVar39 = *(long *)(param_1 + 0xf8);
      piVar2 = (int *)(lVar39 + 0x54);
      puVar34 = (undefined8 *)PTR_DAT_02719500;
      pbVar37 = PTR_DAT_027194f8;
      iVar38 = *(int *)(lVar39 + 0x54);
      do {
        while( true ) {
          puVar36 = *(undefined8 **)(lVar39 + 0x58);
          if ((*pbVar37 & 1) != 0) goto LAB_00e92370;
          iVar32 = __cxa_guard_acquire(PTR_DAT_027194f8);
          puVar34 = (undefined8 *)PTR_DAT_02719500;
          pbVar37 = PTR_DAT_027194f8;
          if (iVar32 == 0) goto LAB_00e92370;
          if (((*PTR_DAT_02715078 & 1) == 0) &&
             (iVar32 = __cxa_guard_acquire(PTR_DAT_02715078), iVar32 != 0)) {
            uVar33 = FUN_00a87090();
            *(undefined8 *)PTR_DAT_02715080 = uVar33;
            __cxa_guard_release(PTR_DAT_02715078);
          }
          puVar34 = (undefined8 *)PTR_DAT_02719500;
          *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
          pbVar37 = PTR_DAT_027194f8;
          __cxa_guard_release(PTR_DAT_027194f8);
          if (puVar36 != puVar34) {
            do {
              puVar36 = (undefined8 *)*puVar36;
LAB_00e92370:
            } while (puVar36 != puVar34);
          }
          iVar32 = *piVar2;
          if (iVar32 == iVar38) break;
          ClearExclusiveLocal();
          iVar38 = iVar32;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar38 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar38 = iVar32;
      } while (cVar3 != '\0');
      lVar35 = *(long *)(lVar39 + 0x60);
      lVar39 = 0;
      if (lVar35 != 0) {
        lVar39 = lVar35 + -0x50;
      }
      fVar62 = (float)*(undefined8 *)(lVar39 + 0xb0) + 0.0;
      uVar41 = SUB41(fVar62,0);
      uVar42 = (undefined1)((uint)fVar62 >> 8);
      uVar43 = (undefined1)((uint)fVar62 >> 0x10);
      uVar44 = (undefined1)((uint)fVar62 >> 0x18);
      fVar62 = (float)((ulong)*(undefined8 *)(lVar39 + 0xb0) >> 0x20) + *(float *)(param_1 + 0x174);
      uVar45 = SUB41(fVar62,0);
      uVar46 = (undefined1)((uint)fVar62 >> 8);
      uVar47 = (undefined1)((uint)fVar62 >> 0x10);
      uVar48 = (undefined1)((uint)fVar62 >> 0x18);
      fVar62 = (float)*(undefined8 *)(lVar39 + 0xb8) + 0.0;
      uVar49 = SUB41(fVar62,0);
      uVar50 = (undefined1)((uint)fVar62 >> 8);
      uVar51 = (undefined1)((uint)fVar62 >> 0x10);
      uVar52 = (undefined1)((uint)fVar62 >> 0x18);
      fVar62 = (float)((ulong)*(undefined8 *)(lVar39 + 0xb8) >> 0x20) + 0.0;
      uVar53 = SUB41(fVar62,0);
      uVar54 = (undefined1)((uint)fVar62 >> 8);
      uVar55 = (undefined1)((uint)fVar62 >> 0x10);
      uVar56 = (undefined1)((uint)fVar62 >> 0x18);
      if (lVar35 != 0) {
        (**(code **)(*(long *)(lVar39 + 0x48) + 0x18))();
      }
    }
    fVar62 = (float)uVar64;
    fVar65 = (float)((ulong)uVar64 >> 0x20);
    fVar66 = (float)uVar67;
    fVar68 = (float)((ulong)uVar67 >> 0x20);
    fVar58 = *(float *)(param_1 + 0x118);
    fVar62 = fVar62 + ((float)CONCAT13(uVar44,CONCAT12(uVar43,CONCAT11(uVar42,uVar41))) - fVar62) *
                      fVar58;
    fVar65 = fVar65 + ((float)CONCAT13(uVar48,CONCAT12(uVar47,CONCAT11(uVar46,uVar45))) - fVar65) *
                      fVar58;
    fVar66 = fVar66 + ((float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) - fVar66) *
                      fVar58;
    fVar68 = fVar68 + ((float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) - fVar68) *
                      fVar58;
    *(ulong *)(param_1 + 0xb8) =
         CONCAT17((char)((uint)fVar68 >> 0x18),
                  CONCAT16((char)((uint)fVar68 >> 0x10),
                           CONCAT15((char)((uint)fVar68 >> 8),CONCAT14(SUB41(fVar68,0),fVar66))));
    *(ulong *)(param_1 + 0xb0) =
         CONCAT17((char)((uint)fVar65 >> 0x18),
                  CONCAT16((char)((uint)fVar65 >> 0x10),
                           CONCAT15((char)((uint)fVar65 >> 8),CONCAT14(SUB41(fVar65,0),fVar62))));
    if (*(int *)(param_1 + 0x110) == 1) {
      fVar65 = fVar65 + ((float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20));
      fVar68 = fVar68 + ((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20));
      *(ulong *)(param_1 + 0xa8) =
           CONCAT17((char)((uint)fVar68 >> 0x18),
                    CONCAT16((char)((uint)fVar68 >> 0x10),
                             CONCAT15((char)((uint)fVar68 >> 8),
                                      CONCAT14(SUB41(fVar68,0),
                                               fVar66 + ((float)*(undefined8 *)(param_1 + 0x68) -
                                                        (float)*(undefined8 *)(param_1 + 0x78))))));
      *(ulong *)(param_1 + 0xa0) =
           CONCAT17((char)((uint)fVar65 >> 0x18),
                    CONCAT16((char)((uint)fVar65 >> 0x10),
                             CONCAT15((char)((uint)fVar65 >> 8),
                                      CONCAT14(SUB41(fVar65,0),
                                               fVar62 + ((float)*(undefined8 *)(param_1 + 0x60) -
                                                        (float)*(undefined8 *)(param_1 + 0x70))))));
    }
    else if (*(int *)(param_1 + 0x110) == 0) {
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


