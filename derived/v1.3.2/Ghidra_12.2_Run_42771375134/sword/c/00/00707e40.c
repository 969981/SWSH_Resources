/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00707e40; name: FUN_00707e40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00707e40(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined5 uVar16;
  byte bVar17;
  undefined1 uVar18;
  byte bVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined1 uVar23;
  byte bVar24;
  undefined1 uVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  byte bVar36;
  undefined1 uVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  undefined1 auVar19 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar69;
  undefined8 uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar100;
  float fVar101;
  undefined1 auVar99 [16];
  float fVar102;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    fVar56 = (float)*(undefined8 *)(param_1 + 0x68);
    uVar59 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
    fVar51 = (float)*(undefined8 *)(param_1 + 0x60);
    fVar54 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
    fVar63 = (float)*(undefined8 *)(param_1 + 0x78);
    fVar87 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
    fVar58 = (float)*(undefined8 *)(param_1 + 0x70);
    fVar62 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x88);
    uVar35 = (undefined1)uVar5;
    uVar37 = (undefined1)((ulong)uVar5 >> 8);
    uVar39 = (undefined1)((ulong)uVar5 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar45 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar5 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar5 >> 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x80);
    uVar18 = (undefined1)uVar5;
    uVar21 = (undefined1)((ulong)uVar5 >> 8);
    uVar23 = (undefined1)((ulong)uVar5 >> 0x10);
    uVar25 = (undefined1)((ulong)uVar5 >> 0x18);
    uVar27 = (undefined1)((ulong)uVar5 >> 0x20);
    uVar29 = (undefined1)((ulong)uVar5 >> 0x28);
    uVar31 = (undefined1)((ulong)uVar5 >> 0x30);
    uVar33 = (undefined1)((ulong)uVar5 >> 0x38);
    auVar66 = SUB1612(*(undefined1 (*) [16])(param_1 + 0x90),0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    uVar5 = *(undefined8 *)(param_1 + 0xa0);
    auVar14 = *(undefined1 (*) [16])(param_1 + 0xb0);
    auVar66 = auVar14._0_12_;
    bVar17 = (byte)uVar5 & (byte)DAT_01d4ab50;
    bVar20 = (byte)((ulong)uVar5 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar22 = (byte)((ulong)uVar5 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar24 = (byte)((ulong)uVar5 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar26 = (byte)((ulong)uVar5 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar28 = (byte)((ulong)uVar5 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar30 = (byte)((ulong)uVar5 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar32 = (byte)((ulong)uVar5 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar34 = (byte)uVar9 & (byte)DAT_01d4ab58;
    bVar36 = (byte)((ulong)uVar9 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar38 = (byte)((ulong)uVar9 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar40 = (byte)((ulong)uVar9 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar42 = (byte)((ulong)uVar9 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar44 = (byte)((ulong)uVar9 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar46 = (byte)((ulong)uVar9 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar48 = (byte)((ulong)uVar9 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar15 = NEON_ext(CONCAT17(bVar32,CONCAT16(bVar30,CONCAT15(bVar28,CONCAT14(bVar26,CONCAT13(
                                                  bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar17)))))
                                              )),
                      CONCAT17(bVar32,CONCAT16(bVar30,CONCAT15(bVar28,CONCAT14(bVar26,CONCAT13(
                                                  bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar17)))))
                                              )),4,1);
    fVar65 = (float)((ulong)uVar15 >> 0x20);
    auVar82[1] = bVar20;
    auVar82[0] = bVar17;
    auVar82[2] = bVar22;
    auVar82[3] = bVar24;
    auVar82[4] = bVar26;
    auVar82[5] = bVar28;
    auVar82[6] = bVar30;
    auVar82[7] = bVar32;
    auVar82[8] = bVar34;
    auVar82[9] = bVar36;
    auVar82[10] = bVar38;
    auVar82[0xb] = bVar40;
    auVar82[0xc] = bVar42;
    auVar82[0xd] = bVar44;
    auVar82[0xe] = bVar46;
    auVar82[0xf] = bVar48;
    uVar5 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5188);
    fVar87 = (float)uVar5;
    fVar52 = (float)((ulong)uVar5 >> 0x20);
    auVar84[1] = bVar20;
    auVar84[0] = bVar17;
    auVar84[2] = bVar22;
    auVar84[3] = bVar24;
    auVar84[4] = bVar26;
    auVar84[5] = bVar28;
    auVar84[6] = bVar30;
    auVar84[7] = bVar32;
    auVar84[8] = bVar34;
    auVar84[9] = bVar36;
    auVar84[10] = bVar38;
    auVar84[0xb] = bVar40;
    auVar84[0xc] = bVar42;
    auVar84[0xd] = bVar44;
    auVar84[0xe] = bVar46;
    auVar84[0xf] = bVar48;
    uVar8 = a64_TBL(ZEXT816(0),auVar84,DAT_01cd5048);
    fVar61 = (float)((ulong)uVar8 >> 0x20);
    auVar91[1] = bVar20;
    auVar91[0] = bVar17;
    auVar91[2] = bVar22;
    auVar91[3] = bVar24;
    auVar91[4] = bVar26;
    auVar91[5] = bVar28;
    auVar91[6] = bVar30;
    auVar91[7] = bVar32;
    auVar91[8] = bVar34;
    auVar91[9] = bVar36;
    auVar91[10] = bVar38;
    auVar91[0xb] = bVar40;
    auVar91[0xc] = bVar42;
    auVar91[0xd] = bVar44;
    auVar91[0xe] = bVar46;
    auVar91[0xf] = bVar48;
    uVar69 = a64_TBL(ZEXT816(0),auVar91,DAT_01cd5418);
    auVar1[1] = bVar20;
    auVar1[0] = bVar17;
    auVar1[2] = bVar22;
    auVar1[3] = bVar24;
    auVar1[4] = bVar26;
    auVar1[5] = bVar28;
    auVar1[6] = bVar30;
    auVar1[7] = bVar32;
    auVar1[8] = bVar34;
    auVar1[9] = bVar36;
    auVar1[10] = bVar38;
    auVar1[0xb] = bVar40;
    auVar1[0xc] = bVar42;
    auVar1[0xd] = bVar44;
    auVar1[0xe] = bVar46;
    auVar1[0xf] = bVar48;
    uVar5 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5158);
    fVar92 = (float)uVar5;
    fVar94 = (float)((ulong)uVar5 >> 0x20);
    auVar2[1] = bVar20;
    auVar2[0] = bVar17;
    auVar2[2] = bVar22;
    auVar2[3] = bVar24;
    auVar2[4] = bVar26;
    auVar2[5] = bVar28;
    auVar2[6] = bVar30;
    auVar2[7] = bVar32;
    auVar2[8] = bVar34;
    auVar2[9] = bVar36;
    auVar2[10] = bVar38;
    auVar2[0xb] = bVar40;
    auVar2[0xc] = bVar42;
    auVar2[0xd] = bVar44;
    auVar2[0xe] = bVar46;
    auVar2[0xf] = bVar48;
    uVar5 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    fVar64 = (float)uVar15 * (float)uVar15;
    fVar65 = fVar65 * fVar65;
    fVar60 = (float)uVar8 * (float)uVar8;
    fVar61 = fVar61 * fVar61;
    fVar51 = (float)uVar69 * (float)CONCAT13(bVar24,CONCAT12(bVar22,CONCAT11(bVar20,bVar17)));
    fVar54 = (float)((ulong)uVar69 >> 0x20) *
             (float)CONCAT13(bVar32,CONCAT12(bVar30,CONCAT11(bVar28,bVar26)));
    fVar56 = fVar87 * (float)CONCAT13(bVar40,CONCAT12(bVar38,CONCAT11(bVar36,bVar34)));
    fVar58 = fVar52 * (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar42)));
    fVar62 = (float)((ulong)uVar9 >> 0x20);
    fVar50 = (float)uVar5 * fVar62;
    fVar53 = (float)((ulong)uVar5 >> 0x20) * fVar62;
    fVar51 = fVar51 + fVar51;
    fVar54 = fVar54 + fVar54;
    fVar56 = fVar56 + fVar56;
    fVar58 = fVar58 + fVar58;
    fVar50 = fVar50 + fVar50;
    fVar53 = fVar53 + fVar53;
    fVar55 = fVar92 * fVar62 + fVar92 * fVar62;
    fVar57 = fVar94 * fVar62 + fVar94 * fVar62;
    fVar62 = fVar51 + fVar50;
    fVar63 = fVar54 + fVar53;
    uVar18 = SUB41(fVar63,0);
    uVar21 = (undefined1)((uint)fVar63 >> 8);
    uVar23 = (undefined1)((uint)fVar63 >> 0x10);
    uVar25 = (undefined1)((uint)fVar63 >> 0x18);
    fVar63 = fVar56 + fVar55;
    uVar27 = SUB41(fVar63,0);
    uVar29 = (undefined1)((uint)fVar63 >> 8);
    uVar31 = (undefined1)((uint)fVar63 >> 0x10);
    uVar33 = (undefined1)((uint)fVar63 >> 0x18);
    fVar63 = fVar58 + fVar57;
    uVar35 = SUB41(fVar63,0);
    uVar37 = (undefined1)((uint)fVar63 >> 8);
    uVar39 = (undefined1)((uint)fVar63 >> 0x10);
    uVar41 = (undefined1)((uint)fVar63 >> 0x18);
    auVar72._0_4_ = fVar51 - fVar50;
    auVar72._4_4_ = fVar54 - fVar53;
    auVar72._8_4_ = fVar56 - fVar55;
    auVar72._12_4_ = fVar58 - fVar57;
    fVar51 = (float)_DAT_01d4a130 - (fVar60 + fVar60 + fVar64 + fVar64);
    fVar54 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar61 + fVar61 + fVar65 + fVar65);
    fVar56 = (float)_UNK_01d4a138 -
             (fVar92 * fVar92 + fVar92 * fVar92 + fVar87 * fVar87 + fVar87 * fVar87);
    fVar58 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar94 * fVar94 + fVar94 * fVar94 + fVar52 * fVar52 + fVar52 * fVar52);
    auVar10[4] = uVar18;
    auVar10._0_4_ = fVar62;
    auVar10[5] = uVar21;
    auVar10[6] = uVar23;
    auVar10[7] = uVar25;
    auVar10[8] = uVar27;
    auVar10[9] = uVar29;
    auVar10[10] = uVar31;
    auVar10[0xb] = uVar33;
    auVar10[0xc] = uVar35;
    auVar10[0xd] = uVar37;
    auVar10[0xe] = uVar39;
    auVar10[0xf] = uVar41;
    uVar9 = a64_TBL(ZEXT816(0),auVar10,auVar72,DAT_01cd5250);
    auVar11[4] = uVar18;
    auVar11._0_4_ = fVar62;
    auVar11[5] = uVar21;
    auVar11[6] = uVar23;
    auVar11[7] = uVar25;
    auVar11[8] = uVar27;
    auVar11[9] = uVar29;
    auVar11[10] = uVar31;
    auVar11[0xb] = uVar33;
    auVar11[0xc] = uVar35;
    auVar11[0xd] = uVar37;
    auVar11[0xe] = uVar39;
    auVar11[0xf] = uVar41;
    uVar5 = a64_TBL(ZEXT816(0),auVar11,auVar72,DAT_01cd51f8);
    auVar12[4] = uVar18;
    auVar12._0_4_ = fVar62;
    auVar12[5] = uVar21;
    auVar12[6] = uVar23;
    auVar12[7] = uVar25;
    auVar12[8] = uVar27;
    auVar12[9] = uVar29;
    auVar12[10] = uVar31;
    auVar12[0xb] = uVar33;
    auVar12[0xc] = uVar35;
    auVar12[0xd] = uVar37;
    auVar12[0xe] = uVar39;
    auVar12[0xf] = uVar41;
    auVar88._0_8_ = a64_TBL(ZEXT816(0),auVar12,auVar72,DAT_01cd5430);
    uVar59 = (undefined4)((ulong)uVar5 >> 0x20);
    auVar13[4] = uVar18;
    auVar13._0_4_ = fVar62;
    auVar13[5] = uVar21;
    auVar13[6] = uVar23;
    auVar13[7] = uVar25;
    auVar13[8] = uVar27;
    auVar13[9] = uVar29;
    auVar13[10] = uVar31;
    auVar13[0xb] = uVar33;
    auVar13[0xc] = uVar35;
    auVar13[0xd] = uVar37;
    auVar13[0xe] = uVar39;
    auVar13[0xf] = uVar41;
    uVar8 = a64_TBL(ZEXT816(0),auVar13,auVar72,DAT_01cd5050);
    auVar88._8_8_ = uVar8;
    auVar3._4_4_ = fVar54;
    auVar3._0_4_ = fVar51;
    auVar3._8_4_ = fVar56;
    auVar3._12_4_ = fVar58;
    auVar6._8_4_ = (int)uVar5;
    auVar6._0_8_ = uVar9;
    auVar6._12_4_ = uVar59;
    uVar8 = a64_TBL(ZEXT816(0),auVar3,auVar6,DAT_01cd50d8);
    uVar18 = (undefined1)uVar8;
    uVar21 = (undefined1)((ulong)uVar8 >> 8);
    uVar23 = (undefined1)((ulong)uVar8 >> 0x10);
    uVar25 = (undefined1)((ulong)uVar8 >> 0x18);
    uVar27 = (undefined1)((ulong)uVar8 >> 0x20);
    uVar29 = (undefined1)((ulong)uVar8 >> 0x28);
    uVar31 = (undefined1)((ulong)uVar8 >> 0x30);
    uVar33 = (undefined1)((ulong)uVar8 >> 0x38);
    auVar80._12_4_ = fVar58;
    auVar80._8_4_ = fVar56;
    auVar80._4_4_ = fVar54;
    auVar80._0_4_ = fVar51;
    auVar4._4_4_ = fVar54;
    auVar4._0_4_ = fVar51;
    auVar4._8_4_ = fVar56;
    auVar4._12_4_ = fVar58;
    auVar7._8_4_ = (int)uVar5;
    auVar7._0_8_ = uVar9;
    auVar7._12_4_ = uVar59;
    uVar70 = a64_TBL(ZEXT816(0),auVar4,auVar7,DAT_01cd4fb8);
    uVar15 = a64_TBL(ZEXT816(0),auVar80,auVar88,DAT_01cd5308);
    fVar56 = (float)uVar15;
    uVar59 = (undefined4)((ulong)uVar15 >> 0x20);
    uVar5 = a64_TBL(ZEXT816(0),auVar80,auVar88,DAT_01cd50b8);
    fVar51 = (float)uVar5;
    fVar54 = (float)((ulong)uVar5 >> 0x20);
    uVar69 = a64_TBL(ZEXT816(0),auVar80,auVar88,DAT_01cd4fb0);
    uVar9 = a64_TBL(ZEXT816(0),auVar80,auVar88,DAT_01cd5008);
    fVar58 = (float)uVar9;
    fVar62 = (float)((ulong)uVar9 >> 0x20);
    uVar35 = (undefined1)uVar70;
    uVar37 = (undefined1)((ulong)uVar70 >> 8);
    uVar39 = (undefined1)((ulong)uVar70 >> 0x10);
    uVar41 = (undefined1)((ulong)uVar70 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar70 >> 0x20);
    uVar45 = (undefined1)((ulong)uVar70 >> 0x28);
    uVar47 = (undefined1)((ulong)uVar70 >> 0x30);
    uVar49 = (undefined1)((ulong)uVar70 >> 0x38);
    *(undefined8 *)(param_1 + 0x88) = uVar70;
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    *(long *)(param_1 + 0x98) = auVar14._8_8_;
    *(long *)(param_1 + 0x90) = auVar14._0_8_;
    fVar63 = (float)uVar69;
    fVar87 = (float)((ulong)uVar69 >> 0x20);
    *(undefined8 *)(param_1 + 0x68) = uVar15;
    *(undefined8 *)(param_1 + 0x60) = uVar5;
    *(undefined8 *)(param_1 + 0x78) = uVar69;
    *(undefined8 *)(param_1 + 0x70) = uVar9;
  }
  fVar57 = (float)CONCAT13(uVar25,CONCAT12(uVar23,CONCAT11(uVar21,uVar18)));
  uVar16 = CONCAT14((char)((uint)uVar59 >> 0x18),
                    CONCAT13((char)((uint)uVar59 >> 0x10),
                             CONCAT12((char)((uint)uVar59 >> 8),CONCAT11((char)uVar59,uVar41))));
  fVar92 = auVar66._0_4_;
  fVar76 = *(float *)(param_1 + 0xd0) * 0.5;
  fVar94 = auVar66._4_4_;
  fVar60 = fVar76 * *(float *)PTR_Float1Divided2Pi_02715148;
  fVar50 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar65 = auVar66._8_4_;
  fVar52 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar53 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar55 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  auVar81._0_4_ = (int)(fVar60 + (float)(-(uint)(0.0 <= fVar60) & 0x80000000 ^ 0xbf000000));
  auVar81._4_4_ = (int)(fVar60 + (float)(-(uint)(0.0 <= fVar60) & 0x80000000 ^ 0xbf000000));
  auVar81._8_4_ = (int)(fVar60 + (float)(-(uint)(0.0 <= fVar60) & 0x80000000 ^ 0xbf000000));
  auVar81._12_4_ = (int)(fVar60 + (float)(-(uint)(0.0 <= fVar60) & 0x80000000 ^ 0xbf000000));
  auVar82 = NEON_scvtf(auVar81,4);
  fVar60 = *(float *)PTR_Float2Pi_02715150;
  fVar61 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar64 = *(float *)PTR_FloatPi_02715160;
  fVar77 = fVar76 - auVar82._0_4_ * fVar60;
  fVar78 = fVar76 - auVar82._4_4_ * fVar60;
  fVar79 = fVar76 - auVar82._8_4_ * fVar60;
  fVar76 = fVar76 - auVar82._12_4_ * fVar60;
  auVar83._0_8_ = CONCAT44(-(uint)(fVar61 < fVar78),-(uint)(fVar61 < fVar77));
  auVar83._8_4_ = -(uint)(fVar61 < fVar79);
  auVar83._12_4_ = -(uint)(fVar61 < fVar76);
  auVar67._0_4_ = fVar64 - fVar77;
  auVar67._4_4_ = fVar64 - fVar78;
  auVar67._8_4_ = fVar64 - fVar79;
  auVar67._12_4_ = fVar64 - fVar76;
  auVar89._8_8_ = auVar83._8_8_;
  auVar89._0_8_ = auVar83._0_8_;
  auVar14._4_4_ = fVar78;
  auVar14._0_4_ = fVar77;
  auVar14._8_4_ = fVar79;
  auVar14._12_4_ = fVar76;
  auVar90._4_4_ = fVar78;
  auVar90._0_4_ = fVar77;
  auVar90._8_4_ = fVar79;
  auVar90._12_4_ = fVar76;
  auVar90 = auVar90 ^ (auVar14 ^ auVar67) & auVar89;
  fVar61 = -fVar61;
  auVar73._0_8_ = CONCAT44(-(uint)(auVar90._4_4_ < fVar61),-(uint)(auVar90._0_4_ < fVar61));
  auVar73._8_4_ = -(uint)(auVar90._8_4_ < fVar61);
  auVar73._12_4_ = -(uint)(auVar90._12_4_ < fVar61);
  fVar64 = -fVar64;
  auVar99._8_8_ = auVar73._8_8_;
  auVar99._0_8_ = auVar73._0_8_;
  auVar68._0_4_ = fVar64 - auVar90._0_4_;
  auVar68._4_4_ = fVar64 - auVar90._4_4_;
  auVar68._8_4_ = fVar64 - auVar90._8_4_;
  auVar68._12_4_ = fVar64 - auVar90._12_4_;
  auVar90 = auVar90 ^ (auVar90 ^ auVar68) & auVar99;
  auVar91 = NEON_fmov(0xbf800000,4);
  auVar82 = NEON_fmov(0x3f800000,4);
  auVar84 = auVar82 ^ (auVar82 ^ auVar91) & auVar83;
  auVar84 = auVar84 ^ (auVar84 ^ auVar91) & auVar73;
  fVar79 = *(float *)PTR_SinCoefficients_02715168;
  fVar98 = auVar90._0_4_;
  fVar64 = fVar98 * fVar98;
  fVar100 = auVar90._4_4_;
  fVar76 = fVar100 * fVar100;
  fVar101 = auVar90._8_4_;
  fVar77 = fVar101 * fVar101;
  fVar102 = auVar90._12_4_;
  fVar78 = fVar102 * fVar102;
  fVar86 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar60 = 0.0 - (fVar51 * fVar92 + fVar54 * fVar94 + fVar56 * fVar65 +
                 (float)((uint5)uVar16 >> 8) * 1.0);
  fVar61 = 0.0 - (fVar58 * fVar92 + fVar62 * fVar94 + fVar63 * fVar65 + fVar87 * 1.0);
  fVar57 = 0.0 - (fVar57 * fVar92 +
                  (float)(CONCAT17(uVar33,CONCAT16(uVar31,CONCAT15(uVar29,CONCAT14(uVar27,fVar57))))
                         >> 0x20) * fVar94 +
                  (float)(CONCAT17(uVar41,CONCAT16(uVar39,CONCAT15(uVar37,CONCAT14(uVar35,fVar56))))
                         >> 0x20) * fVar65 +
                 (float)(CONCAT18(uVar49,CONCAT17(uVar47,CONCAT16(uVar45,CONCAT15(uVar43,uVar16))))
                        >> 0x28) * 1.0);
  fVar87 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar93 = auVar82._0_4_;
  fVar95 = auVar82._4_4_;
  fVar96 = auVar82._8_4_;
  fVar97 = auVar82._12_4_;
  fVar94 = *(float *)PTR_CosCoefficients_02715170;
  fVar65 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar92 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar74._0_4_ =
       ((fVar93 + fVar64 * (fVar87 + fVar64 * (fVar52 + fVar64 * (fVar86 + fVar64 * (fVar50 - fVar64
                                                                                              * 
                                                  fVar79))))) * fVar98) /
       ((fVar93 + fVar64 * (fVar92 + fVar64 * (fVar55 + fVar64 * (fVar65 + fVar64 * (fVar53 - fVar64
                                                                                              * 
                                                  fVar94))))) * auVar84._0_4_);
  auVar74._4_4_ =
       ((fVar95 + fVar76 * (fVar87 + fVar76 * (fVar52 + fVar76 * (fVar86 + fVar76 * (fVar50 - fVar76
                                                                                              * 
                                                  fVar79))))) * fVar100) /
       ((fVar95 + fVar76 * (fVar92 + fVar76 * (fVar55 + fVar76 * (fVar65 + fVar76 * (fVar53 - fVar76
                                                                                              * 
                                                  fVar94))))) * auVar84._4_4_);
  auVar74._8_4_ =
       ((fVar96 + fVar77 * (fVar87 + fVar77 * (fVar52 + fVar77 * (fVar86 + fVar77 * (fVar50 - fVar77
                                                                                              * 
                                                  fVar79))))) * fVar101) /
       ((fVar96 + fVar77 * (fVar92 + fVar77 * (fVar55 + fVar77 * (fVar65 + fVar77 * (fVar53 - fVar77
                                                                                              * 
                                                  fVar94))))) * auVar84._8_4_);
  auVar74._12_4_ =
       ((fVar97 + fVar78 * (fVar87 + fVar78 * (fVar52 + fVar78 * (fVar86 + fVar78 * (fVar50 - fVar78
                                                                                              * 
                                                  fVar79))))) * fVar102) /
       ((fVar97 + fVar78 * (fVar92 + fVar78 * (fVar55 + fVar78 * (fVar65 + fVar78 * (fVar53 - fVar78
                                                                                              * 
                                                  fVar94))))) * auVar84._12_4_);
  auVar82 = NEON_frecpe(auVar74,4);
  auVar84 = NEON_frecps(auVar82,auVar74,4);
  auVar85._0_4_ = auVar82._0_4_ * auVar84._0_4_;
  auVar85._4_4_ = auVar82._4_4_ * auVar84._4_4_;
  auVar85._8_4_ = auVar82._8_4_ * auVar84._8_4_;
  auVar85._12_4_ = auVar82._12_4_ * auVar84._12_4_;
  fVar87 = *(float *)(param_1 + 200);
  fVar50 = *(float *)(param_1 + 0xcc);
  auVar82 = NEON_frecps(auVar85,auVar74,4);
  auVar75._0_4_ = auVar85._0_4_ * auVar82._0_4_;
  auVar75._4_4_ = auVar85._4_4_ * auVar82._4_4_;
  auVar75._8_4_ = auVar85._8_4_ * auVar82._8_4_;
  auVar75._12_4_ = auVar85._12_4_ * auVar82._12_4_;
  fVar94 = auVar75._0_4_ / *(float *)(param_1 + 0xd4);
  fVar79 = -1.0 / (fVar50 - fVar87);
  auVar71._0_12_ = SUB1612(ZEXT816(0),0);
  auVar71._12_4_ = 0;
  auVar82 = NEON_ext(auVar71,auVar75,4,1);
  auVar82 = NEON_ext(auVar82,auVar82,8,1);
  fVar78 = (fVar87 + fVar50) * fVar79;
  fVar79 = (fVar87 * fVar50 + fVar87 * fVar50) * fVar79;
  fVar65 = auVar82._0_4_;
  fVar53 = auVar82._4_4_;
  fVar76 = auVar82._8_4_;
  fVar77 = auVar82._12_4_;
  fVar50 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar27)));
  fVar87 = (float)CONCAT13(uVar25,CONCAT12(uVar23,CONCAT11(uVar21,uVar18)));
  fVar52 = (float)CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar35)));
  fVar64 = (float)param_2[1];
  fVar55 = (float)*param_2;
  fVar92 = (float)((ulong)*param_2 >> 0x20);
  fVar53 = (fVar51 * 0.0 + fVar53 * fVar58 + fVar87 * 0.0 + 0.0) * fVar55 +
           (fVar54 * 0.0 + fVar53 * fVar62 + fVar50 * 0.0 + 0.0) * fVar92 +
           (fVar56 * 0.0 + fVar53 * fVar63 + fVar52 * 0.0 + 0.0) * fVar64 +
           fVar95 * (fVar60 * 0.0 + fVar53 * fVar61 + fVar57 * 0.0 + 0.0);
  auVar19[4] = SUB41(fVar53,0);
  auVar19[5] = (undefined1)((uint)fVar53 >> 8);
  auVar19[6] = (undefined1)((uint)fVar53 >> 0x10);
  auVar19[7] = (undefined1)((uint)fVar53 >> 0x18);
  fVar53 = (fVar51 * 0.0 + fVar76 * fVar58 + fVar78 * fVar87 + fVar79 * 0.0) * fVar55 +
           (fVar54 * 0.0 + fVar76 * fVar62 + fVar78 * fVar50 + fVar79 * 0.0) * fVar92 +
           (fVar56 * 0.0 + fVar76 * fVar63 + fVar78 * fVar52 + fVar79 * 0.0) * fVar64 +
           fVar96 * (fVar60 * 0.0 + fVar76 * fVar61 + fVar78 * fVar57 + fVar79 * 1.0);
  auVar19[8] = SUB41(fVar53,0);
  auVar19[9] = (undefined1)((uint)fVar53 >> 8);
  auVar19[10] = (undefined1)((uint)fVar53 >> 0x10);
  auVar19[0xb] = (undefined1)((uint)fVar53 >> 0x18);
  fVar53 = (fVar51 * 0.0 + fVar77 * fVar58 + fVar87 * -1.0 + 0.0) * fVar55 +
           (fVar54 * 0.0 + fVar77 * fVar62 + fVar50 * -1.0 + 0.0) * fVar92 +
           (fVar56 * 0.0 + fVar77 * fVar63 + fVar52 * -1.0 + 0.0) * fVar64 +
           fVar97 * (fVar60 * 0.0 + fVar77 * fVar61 + fVar57 * -1.0 + 0.0);
  auVar19[0xc] = SUB41(fVar53,0);
  auVar19[0xd] = (undefined1)((uint)fVar53 >> 8);
  auVar19[0xe] = (undefined1)((uint)fVar53 >> 0x10);
  auVar19[0xf] = (undefined1)((uint)fVar53 >> 0x18);
  auVar19._0_4_ =
       (fVar94 * fVar51 + fVar65 * fVar58 + fVar87 * 0.0 + 0.0) * fVar55 +
       (fVar94 * fVar54 + fVar65 * fVar62 + fVar50 * 0.0 + 0.0) * fVar92 +
       (fVar94 * fVar56 + fVar65 * fVar63 + fVar52 * 0.0 + 0.0) * fVar64 +
       fVar93 * (fVar94 * fVar60 + fVar65 * fVar61 + fVar57 * 0.0 + 0.0);
  return auVar19;
}


