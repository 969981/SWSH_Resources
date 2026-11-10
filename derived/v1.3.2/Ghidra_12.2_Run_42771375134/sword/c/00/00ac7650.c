/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac7650; name: FUN_00ac7650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00ac7650(long param_1)

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
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte bVar19;
  undefined1 extraout_b0;
  byte bVar21;
  undefined1 extraout_var;
  byte bVar22;
  undefined1 extraout_var_00;
  byte bVar23;
  undefined1 extraout_var_01;
  byte bVar24;
  undefined1 uVar25;
  undefined1 extraout_var_02;
  byte bVar26;
  undefined1 uVar27;
  undefined1 extraout_var_03;
  byte bVar28;
  undefined1 uVar29;
  undefined1 extraout_var_04;
  byte bVar30;
  undefined1 uVar31;
  undefined1 extraout_var_05;
  byte bVar32;
  undefined1 extraout_var_06;
  byte bVar33;
  undefined1 uVar34;
  undefined1 extraout_var_07;
  byte bVar35;
  undefined1 uVar36;
  undefined1 extraout_var_08;
  byte bVar37;
  undefined1 uVar38;
  undefined1 extraout_var_09;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  undefined1 auVar20 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined4 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar62;
  undefined8 uVar57;
  float fVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  float fVar69;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined8 uVar70;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    auVar3 = *(undefined1 (*) [16])(param_1 + 0xa0);
    bVar19 = auVar3[0] & (byte)DAT_01d4ab50;
    bVar21 = auVar3[1] & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar22 = auVar3[2] & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar23 = auVar3[3] & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar24 = auVar3[4] & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar26 = auVar3[5] & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar28 = auVar3[6] & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar30 = auVar3[7] & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar32 = auVar3[8] & (byte)DAT_01d4ab58;
    bVar33 = auVar3[9] & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar35 = auVar3[10] & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar37 = auVar3[0xb] & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar39 = auVar3[0xc] & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar41 = auVar3[0xd] & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar43 = auVar3[0xe] & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar45 = auVar3[0xf] & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar57 = NEON_ext(CONCAT17(bVar30,CONCAT16(bVar28,CONCAT15(bVar26,CONCAT14(bVar24,CONCAT13(
                                                  bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar19)))))
                                              )),
                      CONCAT17(bVar30,CONCAT16(bVar28,CONCAT15(bVar26,CONCAT14(bVar24,CONCAT13(
                                                  bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar19)))))
                                              )),4,1);
    fVar69 = (float)((ulong)uVar57 >> 0x20);
    auVar59[1] = bVar21;
    auVar59[0] = bVar19;
    auVar59[2] = bVar22;
    auVar59[3] = bVar23;
    auVar59[4] = bVar24;
    auVar59[5] = bVar26;
    auVar59[6] = bVar28;
    auVar59[7] = bVar30;
    auVar59[8] = bVar32;
    auVar59[9] = bVar33;
    auVar59[10] = bVar35;
    auVar59[0xb] = bVar37;
    auVar59[0xc] = bVar39;
    auVar59[0xd] = bVar41;
    auVar59[0xe] = bVar43;
    auVar59[0xf] = bVar45;
    uVar10 = a64_TBL(ZEXT816(0),auVar59,DAT_01cd5188);
    fVar63 = (float)uVar10;
    fVar65 = (float)((ulong)uVar10 >> 0x20);
    auVar77[1] = bVar21;
    auVar77[0] = bVar19;
    auVar77[2] = bVar22;
    auVar77[3] = bVar23;
    auVar77[4] = bVar24;
    auVar77[5] = bVar26;
    auVar77[6] = bVar28;
    auVar77[7] = bVar30;
    auVar77[8] = bVar32;
    auVar77[9] = bVar33;
    auVar77[10] = bVar35;
    auVar77[0xb] = bVar37;
    auVar77[0xc] = bVar39;
    auVar77[0xd] = bVar41;
    auVar77[0xe] = bVar43;
    auVar77[0xf] = bVar45;
    uVar56 = a64_TBL(ZEXT816(0),auVar77,DAT_01cd5048);
    auVar71[1] = bVar21;
    auVar71[0] = bVar19;
    auVar71[2] = bVar22;
    auVar71[3] = bVar23;
    auVar71[4] = bVar24;
    auVar71[5] = bVar26;
    auVar71[6] = bVar28;
    auVar71[7] = bVar30;
    auVar71[8] = bVar32;
    auVar71[9] = bVar33;
    auVar71[10] = bVar35;
    auVar71[0xb] = bVar37;
    auVar71[0xc] = bVar39;
    auVar71[0xd] = bVar41;
    auVar71[0xe] = bVar43;
    auVar71[0xf] = bVar45;
    uVar70 = a64_TBL(ZEXT816(0),auVar71,DAT_01cd5418);
    auVar1[1] = bVar21;
    auVar1[0] = bVar19;
    auVar1[2] = bVar22;
    auVar1[3] = bVar23;
    auVar1[4] = bVar24;
    auVar1[5] = bVar26;
    auVar1[6] = bVar28;
    auVar1[7] = bVar30;
    auVar1[8] = bVar32;
    auVar1[9] = bVar33;
    auVar1[10] = bVar35;
    auVar1[0xb] = bVar37;
    auVar1[0xc] = bVar39;
    auVar1[0xd] = bVar41;
    auVar1[0xe] = bVar43;
    auVar1[0xf] = bVar45;
    uVar66 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5158);
    auVar2[1] = bVar21;
    auVar2[0] = bVar19;
    auVar2[2] = bVar22;
    auVar2[3] = bVar23;
    auVar2[4] = bVar24;
    auVar2[5] = bVar26;
    auVar2[6] = bVar28;
    auVar2[7] = bVar30;
    auVar2[8] = bVar32;
    auVar2[9] = bVar33;
    auVar2[10] = bVar35;
    auVar2[0xb] = bVar37;
    auVar2[0xc] = bVar39;
    auVar2[0xd] = bVar41;
    auVar2[0xe] = bVar43;
    auVar2[0xf] = bVar45;
    uVar10 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    fVar73 = (float)uVar66;
    fVar72 = (float)((ulong)uVar66 >> 0x20);
    fVar64 = (float)uVar57 * (float)uVar57;
    fVar69 = fVar69 * fVar69;
    fVar53 = (float)uVar56 * (float)uVar56;
    fVar62 = (float)((ulong)uVar56 >> 0x20);
    fVar62 = fVar62 * fVar62;
    fVar48 = (float)uVar70 * (float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar21,bVar19)));
    fVar54 = (float)((ulong)uVar70 >> 0x20) *
             (float)CONCAT13(bVar30,CONCAT12(bVar28,CONCAT11(bVar26,bVar24)));
    fVar82 = fVar63 * (float)CONCAT13(bVar37,CONCAT12(bVar35,CONCAT11(bVar33,bVar32)));
    fVar55 = fVar65 * (float)CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar39)));
    fVar51 = auVar3._12_4_;
    fVar47 = (float)uVar10 * fVar51;
    fVar49 = (float)((ulong)uVar10 >> 0x20) * fVar51;
    fVar48 = fVar48 + fVar48;
    fVar54 = fVar54 + fVar54;
    fVar82 = fVar82 + fVar82;
    fVar55 = fVar55 + fVar55;
    fVar47 = fVar47 + fVar47;
    fVar49 = fVar49 + fVar49;
    fVar50 = fVar73 * fVar51 + fVar73 * fVar51;
    fVar51 = fVar72 * fVar51 + fVar72 * fVar51;
    auVar75._0_4_ = fVar48 + fVar47;
    auVar75._4_4_ = fVar54 + fVar49;
    auVar75._8_4_ = fVar82 + fVar50;
    auVar75._12_4_ = fVar55 + fVar51;
    auVar78._0_4_ = fVar48 - fVar47;
    auVar78._4_4_ = fVar54 - fVar49;
    auVar78._8_4_ = fVar82 - fVar50;
    auVar78._12_4_ = fVar55 - fVar51;
    fVar48 = (float)_DAT_01d4a130 - (fVar53 + fVar53 + fVar64 + fVar64);
    fVar54 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar62 + fVar62 + fVar69 + fVar69);
    uVar25 = SUB41(fVar54,0);
    uVar27 = (undefined1)((uint)fVar54 >> 8);
    uVar29 = (undefined1)((uint)fVar54 >> 0x10);
    uVar31 = (undefined1)((uint)fVar54 >> 0x18);
    fVar54 = (float)_UNK_01d4a138 -
             (fVar73 * fVar73 + fVar73 * fVar73 + fVar63 * fVar63 + fVar63 * fVar63);
    uVar34 = (undefined1)((uint)fVar54 >> 8);
    uVar36 = (undefined1)((uint)fVar54 >> 0x10);
    uVar38 = (undefined1)((uint)fVar54 >> 0x18);
    fVar82 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar72 * fVar72 + fVar72 * fVar72 + fVar65 * fVar65 + fVar65 * fVar65);
    uVar40 = SUB41(fVar82,0);
    uVar42 = (undefined1)((uint)fVar82 >> 8);
    uVar44 = (undefined1)((uint)fVar82 >> 0x10);
    uVar46 = (undefined1)((uint)fVar82 >> 0x18);
    uVar10 = a64_TBL(ZEXT816(0),auVar75,auVar78,DAT_01cd5250);
    uVar57 = a64_TBL(ZEXT816(0),auVar75,auVar78,DAT_01cd51f8);
    uVar56 = a64_TBL(ZEXT816(0),auVar75,auVar78,DAT_01cd5430);
    uVar70 = a64_TBL(ZEXT816(0),auVar75,auVar78,DAT_01cd5050);
    uVar52 = (undefined4)((ulong)uVar57 >> 0x20);
    auVar3[4] = uVar25;
    auVar3._0_4_ = fVar48;
    auVar3[5] = uVar27;
    auVar3[6] = uVar29;
    auVar3[7] = uVar31;
    auVar3[8] = SUB41(fVar54,0);
    auVar3[9] = uVar34;
    auVar3[10] = uVar36;
    auVar3[0xb] = uVar38;
    auVar3[0xc] = uVar40;
    auVar3[0xd] = uVar42;
    auVar3[0xe] = uVar44;
    auVar3[0xf] = uVar46;
    auVar5._8_4_ = (int)uVar57;
    auVar5._0_8_ = uVar10;
    auVar5._12_4_ = uVar52;
    uVar74 = a64_TBL(ZEXT816(0),auVar3,auVar5,DAT_01cd50d8);
    uVar84 = (undefined4)
             (CONCAT17(uVar46,CONCAT16(uVar44,CONCAT15(uVar42,CONCAT14(uVar40,fVar54)))) >> 0x20);
    uVar83 = (undefined4)
             (CONCAT17(uVar31,CONCAT16(uVar29,CONCAT15(uVar27,CONCAT14(uVar25,fVar48)))) >> 0x20);
    auVar4[4] = uVar25;
    auVar4._0_4_ = fVar48;
    auVar4[5] = uVar27;
    auVar4[6] = uVar29;
    auVar4[7] = uVar31;
    auVar4[8] = SUB41(fVar54,0);
    auVar4[9] = uVar34;
    auVar4[10] = uVar36;
    auVar4[0xb] = uVar38;
    auVar4[0xc] = uVar40;
    auVar4[0xd] = uVar42;
    auVar4[0xe] = uVar44;
    auVar4[0xf] = uVar46;
    auVar6._8_4_ = (int)uVar57;
    auVar6._0_8_ = uVar10;
    auVar6._12_4_ = uVar52;
    uVar67 = a64_TBL(ZEXT816(0),auVar4,auVar6,DAT_01cd4fb8);
    auVar11._4_4_ = uVar83;
    auVar11._0_4_ = fVar48;
    auVar11._8_4_ = fVar54;
    auVar11._12_4_ = uVar84;
    auVar15._8_8_ = uVar70;
    auVar15._0_8_ = uVar56;
    uVar10 = a64_TBL(ZEXT816(0),auVar11,auVar15,DAT_01cd50b8);
    auVar12._4_4_ = uVar83;
    auVar12._0_4_ = fVar48;
    auVar12._8_4_ = fVar54;
    auVar12._12_4_ = uVar84;
    auVar16._8_8_ = uVar70;
    auVar16._0_8_ = uVar56;
    uVar66 = a64_TBL(ZEXT816(0),auVar12,auVar16,DAT_01cd5308);
    auVar13._4_4_ = uVar83;
    auVar13._0_4_ = fVar48;
    auVar13._8_4_ = fVar54;
    auVar13._12_4_ = uVar84;
    auVar17._8_8_ = uVar70;
    auVar17._0_8_ = uVar56;
    uVar57 = a64_TBL(ZEXT816(0),auVar13,auVar17,DAT_01cd5008);
    auVar14._4_4_ = uVar83;
    auVar14._0_4_ = fVar48;
    auVar14._8_4_ = fVar54;
    auVar14._12_4_ = uVar84;
    auVar18._8_8_ = uVar70;
    auVar18._0_8_ = uVar56;
    uVar56 = a64_TBL(ZEXT816(0),auVar14,auVar18,DAT_01cd4fb0);
    fVar82 = *(float *)(param_1 + 0xd0);
    fVar55 = *(float *)(param_1 + 0xd4);
    fVar63 = *(float *)(param_1 + 0xd8);
    fVar48 = (float)((ulong)uVar10 >> 0x20) * fVar82;
    fVar54 = (float)((ulong)uVar66 >> 0x20) * fVar82;
    *(float *)(param_1 + 0x88) = (float)uVar67 * fVar63;
    *(float *)(param_1 + 0x8c) = (float)((ulong)uVar67 >> 0x20) * fVar63;
    *(float *)(param_1 + 0x80) = (float)uVar74 * fVar63;
    *(float *)(param_1 + 0x84) = (float)((ulong)uVar74 >> 0x20) * fVar63;
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xb4);
    *(ulong *)(param_1 + 0x68) =
         CONCAT17((char)((uint)fVar54 >> 0x18),
                  CONCAT16((char)((uint)fVar54 >> 0x10),
                           CONCAT15((char)((uint)fVar54 >> 8),
                                    CONCAT14(SUB41(fVar54,0),(float)uVar66 * fVar82))));
    *(ulong *)(param_1 + 0x60) =
         CONCAT17((char)((uint)fVar48 >> 0x18),
                  CONCAT16((char)((uint)fVar48 >> 0x10),
                           CONCAT15((char)((uint)fVar48 >> 8),
                                    CONCAT14(SUB41(fVar48,0),(float)uVar10 * fVar82))));
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)uVar56 >> 0x20) * fVar55,(float)uVar56 * fVar55);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44((float)((ulong)uVar57 >> 0x20) * fVar55,(float)uVar57 * fVar55);
  }
  NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
  fVar82 = *(float *)PTR_FloatDegree180_027194f0;
  FUN_00ac7ad0(param_1 + 0xa0);
  fVar48 = *(float *)PTR_FloatPi_02715160;
  fVar54 = fVar82 / fVar48;
  fVar82 = fVar48 / fVar82;
  fVar49 = fVar82 * (fVar54 * (float)CONCAT13(extraout_var_01,
                                              CONCAT12(extraout_var_00,
                                                       CONCAT11(extraout_var,extraout_b0))) +
                    (float)_DAT_01d4af60);
  fVar73 = fVar82 * (fVar54 * (float)CONCAT13(extraout_var_05,
                                              CONCAT12(extraout_var_04,
                                                       CONCAT11(extraout_var_03,extraout_var_02))) +
                    (float)((ulong)_DAT_01d4af60 >> 0x20));
  fVar82 = fVar82 * (fVar54 * (float)CONCAT13(extraout_var_09,
                                              CONCAT12(extraout_var_08,
                                                       CONCAT11(extraout_var_07,extraout_var_06))) +
                    (float)_UNK_01d4af68);
  fVar54 = *(float *)PTR_Float1Divided2Pi_02715148;
  fVar55 = fVar49 * fVar54;
  fVar63 = fVar73 * fVar54;
  fVar47 = fVar82 * fVar54;
  fVar65 = *(float *)PTR_Float2Pi_02715150;
  auVar58._0_4_ = (int)(fVar55 + (float)(-(uint)(0.0 <= fVar55) & 0x80000000 ^ 0xbf000000));
  auVar58._4_4_ = (int)(fVar63 + (float)(-(uint)(0.0 <= fVar63) & 0x80000000 ^ 0xbf000000));
  auVar58._8_4_ = (int)(fVar47 + (float)(-(uint)(0.0 <= fVar47) & 0x80000000 ^ 0xbf000000));
  auVar58._12_4_ =
       (int)(fVar54 * 0.0 + (float)(-(uint)(0.0 <= fVar54 * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar59 = NEON_scvtf(auVar58,4);
  auVar80._0_4_ = fVar49 - auVar59._0_4_ * fVar65;
  auVar80._4_4_ = fVar73 - auVar59._4_4_ * fVar65;
  auVar80._8_4_ = fVar82 - auVar59._8_4_ * fVar65;
  auVar80._12_4_ = 0.0 - auVar59._12_4_ * fVar65;
  fVar54 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar82 = -fVar54;
  auVar76._0_8_ = CONCAT44(-(uint)(fVar54 < auVar80._4_4_),-(uint)(fVar54 < auVar80._0_4_));
  auVar76._8_4_ = -(uint)(fVar54 < auVar80._8_4_);
  auVar76._12_4_ = -(uint)(fVar54 < auVar80._12_4_);
  fVar54 = -fVar48;
  auVar60._0_4_ = fVar48 - auVar80._0_4_;
  auVar60._4_4_ = fVar48 - auVar80._4_4_;
  auVar60._8_4_ = fVar48 - auVar80._8_4_;
  auVar60._12_4_ = fVar48 - auVar80._12_4_;
  auVar79._8_8_ = auVar76._8_8_;
  auVar79._0_8_ = auVar76._0_8_;
  auVar80 = auVar80 ^ (auVar80 ^ auVar60) & auVar79;
  auVar71 = NEON_fmov(0xbf800000,4);
  auVar68._0_8_ = CONCAT44(-(uint)(auVar80._4_4_ < fVar82),-(uint)(auVar80._0_4_ < fVar82));
  auVar68._8_4_ = -(uint)(auVar80._8_4_ < fVar82);
  auVar68._12_4_ = -(uint)(auVar80._12_4_ < fVar82);
  auVar59 = NEON_fmov(0x3f800000,4);
  auVar81._8_8_ = auVar68._8_8_;
  auVar81._0_8_ = auVar68._0_8_;
  auVar77 = auVar59 ^ (auVar59 ^ auVar71) & auVar76;
  auVar77 = auVar77 ^ (auVar77 ^ auVar71) & auVar68;
  fVar51 = *(float *)PTR_SinCoefficients_02715168;
  auVar7._4_4_ = fVar54 - auVar80._4_4_;
  auVar7._0_4_ = fVar54 - auVar80._0_4_;
  auVar7._8_4_ = fVar54 - auVar80._8_4_;
  auVar7._12_4_ = fVar54 - auVar80._12_4_;
  auVar80 = auVar80 ^ (auVar80 ^ auVar7) & auVar81;
  fVar48 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar55 = auVar80._0_4_;
  fVar49 = fVar55 * fVar55;
  fVar63 = auVar80._4_4_;
  fVar73 = fVar63 * fVar63;
  fVar47 = auVar80._8_4_;
  fVar50 = fVar47 * fVar47;
  fVar65 = auVar80._12_4_;
  fVar72 = fVar65 * fVar65;
  fVar53 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar54 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar62 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar82 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar64 = *(float *)PTR_CosCoefficients_02715170;
  fVar55 = (auVar59._0_4_ +
           fVar49 * (fVar62 + fVar49 * (fVar54 + fVar49 * (fVar53 + fVar49 * (fVar48 - fVar49 * 
                                                  fVar51))))) * fVar55;
  fVar63 = (auVar59._4_4_ +
           fVar73 * (fVar62 + fVar73 * (fVar54 + fVar73 * (fVar53 + fVar73 * (fVar48 - fVar73 * 
                                                  fVar51))))) * fVar63;
  fVar47 = (auVar59._8_4_ +
           fVar50 * (fVar62 + fVar50 * (fVar54 + fVar50 * (fVar53 + fVar50 * (fVar48 - fVar50 * 
                                                  fVar51))))) * fVar47;
  fVar65 = (auVar59._12_4_ +
           fVar72 * (fVar62 + fVar72 * (fVar54 + fVar72 * (fVar53 + fVar72 * (fVar48 - fVar72 * 
                                                  fVar51))))) * fVar65;
  fVar54 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar48 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar51 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar61._0_4_ =
       (auVar59._0_4_ +
       fVar49 * (fVar51 + fVar49 * (fVar48 + fVar49 * (fVar54 + fVar49 * (fVar82 - fVar49 * fVar64))
                                   ))) * auVar77._0_4_;
  auVar61._4_4_ =
       (auVar59._4_4_ +
       fVar73 * (fVar51 + fVar73 * (fVar48 + fVar73 * (fVar54 + fVar73 * (fVar82 - fVar73 * fVar64))
                                   ))) * auVar77._4_4_;
  auVar61._8_4_ =
       (auVar59._8_4_ +
       fVar50 * (fVar51 + fVar50 * (fVar48 + fVar50 * (fVar54 + fVar50 * (fVar82 - fVar50 * fVar64))
                                   ))) * auVar77._8_4_;
  auVar61._12_4_ =
       (auVar59._12_4_ +
       fVar72 * (fVar51 + fVar72 * (fVar48 + fVar72 * (fVar54 + fVar72 * (fVar82 - fVar72 * fVar64))
                                   ))) * auVar77._12_4_;
  auVar8._4_4_ = fVar63;
  auVar8._0_4_ = fVar55;
  auVar8._8_4_ = fVar47;
  auVar8._12_4_ = fVar65;
  auVar9._4_4_ = fVar63;
  auVar9._0_4_ = fVar55;
  auVar9._8_4_ = fVar47;
  auVar9._12_4_ = fVar65;
  auVar59 = NEON_ext(auVar8,auVar9,8,1);
  auVar77 = NEON_ext(auVar61,auVar61,8,1);
  fVar54 = (float)*(undefined8 *)(param_1 + 0x400) * (float)*(undefined8 *)(param_1 + 0x410);
  fVar48 = auVar61._4_4_ * auVar59._0_4_ * fVar54;
  auVar20[4] = SUB41(fVar48,0);
  auVar20[5] = (undefined1)((uint)fVar48 >> 8);
  auVar20[6] = (undefined1)((uint)fVar48 >> 0x10);
  auVar20[7] = (undefined1)((uint)fVar48 >> 0x18);
  fVar48 = (float)DAT_01cd53f0 * fVar63 * fVar54;
  auVar20[8] = SUB41(fVar48,0);
  auVar20[9] = (undefined1)((uint)fVar48 >> 8);
  auVar20[10] = (undefined1)((uint)fVar48 >> 0x10);
  auVar20[0xb] = (undefined1)((uint)fVar48 >> 0x18);
  fVar48 = (float)((ulong)DAT_01cd53f0 >> 0x20) * 0.0 * fVar54;
  auVar20[0xc] = SUB41(fVar48,0);
  auVar20[0xd] = (undefined1)((uint)fVar48 >> 8);
  auVar20[0xe] = (undefined1)((uint)fVar48 >> 0x10);
  auVar20[0xf] = (undefined1)((uint)fVar48 >> 0x18);
  auVar20._0_4_ = auVar61._4_4_ * auVar77._0_4_ * fVar54;
  return auVar20;
}


