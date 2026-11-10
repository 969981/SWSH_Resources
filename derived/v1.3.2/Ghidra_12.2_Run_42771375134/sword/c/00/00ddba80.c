/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ddba80; name: FUN_00ddba80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ddba80(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  undefined1 uVar55;
  byte bVar56;
  undefined1 uVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar69;
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  float fVar83;
  undefined1 auVar82 [16];
  float fVar84;
  float fVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined8 uVar100;
  
  FUN_0070f3c0(*(undefined8 *)(param_1 + 0x3a0));
  fVar28 = *(float *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd0) * 0.5;
  fVar58 = fVar28 * *(float *)PTR_Float1Divided2Pi_02715148;
  fVar65 = *(float *)PTR_Float2Pi_02715150;
  auVar29._0_4_ = (int)(fVar58 + (float)(-(uint)(0.0 <= fVar58) & 0x80000000 ^ 0xbf000000));
  auVar29._4_4_ = (int)(fVar58 + (float)(-(uint)(0.0 <= fVar58) & 0x80000000 ^ 0xbf000000));
  auVar29._8_4_ = (int)(fVar58 + (float)(-(uint)(0.0 <= fVar58) & 0x80000000 ^ 0xbf000000));
  auVar29._12_4_ = (int)(fVar58 + (float)(-(uint)(0.0 <= fVar58) & 0x80000000 ^ 0xbf000000));
  auVar62 = NEON_scvtf(auVar29,4);
  auVar80._0_4_ = fVar28 - auVar62._0_4_ * fVar65;
  auVar80._4_4_ = fVar28 - auVar62._4_4_ * fVar65;
  auVar80._8_4_ = fVar28 - auVar62._8_4_ * fVar65;
  auVar80._12_4_ = fVar28 - auVar62._12_4_ * fVar65;
  fVar28 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar65 = *(float *)PTR_FloatPi_02715160;
  fVar58 = -fVar28;
  auVar67._0_8_ = CONCAT44(-(uint)(fVar28 < auVar80._4_4_),-(uint)(fVar28 < auVar80._0_4_));
  auVar67._8_4_ = -(uint)(fVar28 < auVar80._8_4_);
  auVar67._12_4_ = -(uint)(fVar28 < auVar80._12_4_);
  fVar28 = -fVar65;
  auVar72._0_4_ = fVar65 - auVar80._0_4_;
  auVar72._4_4_ = fVar65 - auVar80._4_4_;
  auVar72._8_4_ = fVar65 - auVar80._8_4_;
  auVar72._12_4_ = fVar65 - auVar80._12_4_;
  auVar79._8_8_ = auVar67._8_8_;
  auVar79._0_8_ = auVar67._0_8_;
  auVar80 = auVar80 ^ (auVar80 ^ auVar72) & auVar79;
  auVar29 = NEON_fmov(0x3f800000,4);
  auVar62 = NEON_fmov(0xbf800000,4);
  auVar63._0_8_ = CONCAT44(-(uint)(auVar80._4_4_ < fVar58),-(uint)(auVar80._0_4_ < fVar58));
  auVar63._8_4_ = -(uint)(auVar80._8_4_ < fVar58);
  auVar63._12_4_ = -(uint)(auVar80._12_4_ < fVar58);
  auVar68 = auVar29 ^ (auVar29 ^ auVar62) & auVar67;
  auVar82._8_8_ = auVar63._8_8_;
  auVar82._0_8_ = auVar63._0_8_;
  auVar68 = auVar68 ^ (auVar68 ^ auVar62) & auVar63;
  auVar62._4_4_ = fVar28 - auVar80._4_4_;
  auVar62._0_4_ = fVar28 - auVar80._0_4_;
  auVar62._8_4_ = fVar28 - auVar80._8_4_;
  auVar62._12_4_ = fVar28 - auVar80._12_4_;
  auVar80 = auVar80 ^ (auVar80 ^ auVar62) & auVar82;
  fVar73 = *(float *)PTR_SinCoefficients_02715168;
  fVar28 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar81 = auVar80._0_4_;
  fVar66 = fVar81 * fVar81;
  fVar85 = auVar80._4_4_;
  fVar69 = fVar85 * fVar85;
  fVar83 = auVar80._8_4_;
  fVar70 = fVar83 * fVar83;
  fVar84 = auVar80._12_4_;
  fVar71 = fVar84 * fVar84;
  fVar74 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar58 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar75 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar76 = *(float *)PTR_CosCoefficients_02715170;
  fVar65 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar59 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  fVar77 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar78 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar30._0_4_ =
       ((auVar29._0_4_ +
        fVar66 * (fVar75 + fVar66 * (fVar58 + fVar66 * (fVar74 + fVar66 * (fVar28 - fVar66 * fVar73)
                                                       )))) * fVar81) /
       ((auVar29._0_4_ +
        fVar66 * (fVar78 + fVar66 * (fVar59 + fVar66 * (fVar77 + fVar66 * (fVar65 - fVar66 * fVar76)
                                                       )))) * auVar68._0_4_);
  auVar30._4_4_ =
       ((auVar29._4_4_ +
        fVar69 * (fVar75 + fVar69 * (fVar58 + fVar69 * (fVar74 + fVar69 * (fVar28 - fVar69 * fVar73)
                                                       )))) * fVar85) /
       ((auVar29._4_4_ +
        fVar69 * (fVar78 + fVar69 * (fVar59 + fVar69 * (fVar77 + fVar69 * (fVar65 - fVar69 * fVar76)
                                                       )))) * auVar68._4_4_);
  auVar30._8_4_ =
       ((auVar29._8_4_ +
        fVar70 * (fVar75 + fVar70 * (fVar58 + fVar70 * (fVar74 + fVar70 * (fVar28 - fVar70 * fVar73)
                                                       )))) * fVar83) /
       ((auVar29._8_4_ +
        fVar70 * (fVar78 + fVar70 * (fVar59 + fVar70 * (fVar77 + fVar70 * (fVar65 - fVar70 * fVar76)
                                                       )))) * auVar68._8_4_);
  auVar30._12_4_ =
       ((auVar29._12_4_ +
        fVar71 * (fVar75 + fVar71 * (fVar58 + fVar71 * (fVar74 + fVar71 * (fVar28 - fVar71 * fVar73)
                                                       )))) * fVar84) /
       ((auVar29._12_4_ +
        fVar71 * (fVar78 + fVar71 * (fVar59 + fVar71 * (fVar77 + fVar71 * (fVar65 - fVar71 * fVar76)
                                                       )))) * auVar68._12_4_);
  auVar62 = NEON_frecpe(auVar30,4);
  auVar80 = NEON_frecps(auVar62,auVar30,4);
  auVar68._0_4_ = auVar62._0_4_ * auVar80._0_4_;
  auVar68._4_4_ = auVar62._4_4_ * auVar80._4_4_;
  auVar68._8_4_ = auVar62._8_4_ * auVar80._8_4_;
  auVar68._12_4_ = auVar62._12_4_ * auVar80._12_4_;
  NEON_frecps(auVar68,auVar30,4);
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    uVar8 = *(undefined8 *)(param_1 + 0xa0);
    bVar31 = (byte)uVar8 & (byte)DAT_01d4ab50;
    bVar32 = (byte)((ulong)uVar8 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar33 = (byte)((ulong)uVar8 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar34 = (byte)((ulong)uVar8 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar35 = (byte)((ulong)uVar8 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar37 = (byte)((ulong)uVar8 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar39 = (byte)((ulong)uVar8 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar41 = (byte)((ulong)uVar8 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar43 = (byte)uVar9 & (byte)DAT_01d4ab58;
    bVar44 = (byte)((ulong)uVar9 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar46 = (byte)((ulong)uVar9 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar48 = (byte)((ulong)uVar9 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar50 = (byte)((ulong)uVar9 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar52 = (byte)((ulong)uVar9 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar54 = (byte)((ulong)uVar9 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar56 = (byte)((ulong)uVar9 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar23 = NEON_ext(CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(
                                                  bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)))))
                                              )),
                      CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(
                                                  bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)))))
                                              )),4,1);
    fVar85 = (float)((ulong)uVar23 >> 0x20);
    auVar1[1] = bVar32;
    auVar1[0] = bVar31;
    auVar1[2] = bVar33;
    auVar1[3] = bVar34;
    auVar1[4] = bVar35;
    auVar1[5] = bVar37;
    auVar1[6] = bVar39;
    auVar1[7] = bVar41;
    auVar1[8] = bVar43;
    auVar1[9] = bVar44;
    auVar1[10] = bVar46;
    auVar1[0xb] = bVar48;
    auVar1[0xc] = bVar50;
    auVar1[0xd] = bVar52;
    auVar1[0xe] = bVar54;
    auVar1[0xf] = bVar56;
    uVar60 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5188);
    auVar2[1] = bVar32;
    auVar2[0] = bVar31;
    auVar2[2] = bVar33;
    auVar2[3] = bVar34;
    auVar2[4] = bVar35;
    auVar2[5] = bVar37;
    auVar2[6] = bVar39;
    auVar2[7] = bVar41;
    auVar2[8] = bVar43;
    auVar2[9] = bVar44;
    auVar2[10] = bVar46;
    auVar2[0xb] = bVar48;
    auVar2[0xc] = bVar50;
    auVar2[0xd] = bVar52;
    auVar2[0xe] = bVar54;
    auVar2[0xf] = bVar56;
    uVar8 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5048);
    fVar76 = (float)((ulong)uVar8 >> 0x20);
    auVar3[1] = bVar32;
    auVar3[0] = bVar31;
    auVar3[2] = bVar33;
    auVar3[3] = bVar34;
    auVar3[4] = bVar35;
    auVar3[5] = bVar37;
    auVar3[6] = bVar39;
    auVar3[7] = bVar41;
    auVar3[8] = bVar43;
    auVar3[9] = bVar44;
    auVar3[10] = bVar46;
    auVar3[0xb] = bVar48;
    auVar3[0xc] = bVar50;
    auVar3[0xd] = bVar52;
    auVar3[0xe] = bVar54;
    auVar3[0xf] = bVar56;
    uVar61 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
    fVar83 = (float)uVar60;
    fVar84 = (float)((ulong)uVar60 >> 0x20);
    auVar4[1] = bVar32;
    auVar4[0] = bVar31;
    auVar4[2] = bVar33;
    auVar4[3] = bVar34;
    auVar4[4] = bVar35;
    auVar4[5] = bVar37;
    auVar4[6] = bVar39;
    auVar4[7] = bVar41;
    auVar4[8] = bVar43;
    auVar4[9] = bVar44;
    auVar4[10] = bVar46;
    auVar4[0xb] = bVar48;
    auVar4[0xc] = bVar50;
    auVar4[0xd] = bVar52;
    auVar4[0xe] = bVar54;
    auVar4[0xf] = bVar56;
    uVar60 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5158);
    fVar77 = (float)uVar60;
    fVar81 = (float)((ulong)uVar60 >> 0x20);
    auVar5[1] = bVar32;
    auVar5[0] = bVar31;
    auVar5[2] = bVar33;
    auVar5[3] = bVar34;
    auVar5[4] = bVar35;
    auVar5[5] = bVar37;
    auVar5[6] = bVar39;
    auVar5[7] = bVar41;
    auVar5[8] = bVar43;
    auVar5[9] = bVar44;
    auVar5[10] = bVar46;
    auVar5[0xb] = bVar48;
    auVar5[0xc] = bVar50;
    auVar5[0xd] = bVar52;
    auVar5[0xe] = bVar54;
    auVar5[0xf] = bVar56;
    uVar60 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    *(undefined1 *)(param_1 + 0xc0) = 0;
    fVar78 = (float)uVar23 * (float)uVar23;
    fVar85 = fVar85 * fVar85;
    fVar75 = (float)uVar8 * (float)uVar8;
    fVar76 = fVar76 * fVar76;
    fVar28 = (float)uVar61 * (float)CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(bVar32,bVar31)));
    fVar65 = (float)((ulong)uVar61 >> 0x20) *
             (float)CONCAT13(bVar41,CONCAT12(bVar39,CONCAT11(bVar37,bVar35)));
    fVar66 = fVar83 * (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar44,bVar43)));
    fVar69 = fVar84 * (float)CONCAT13(bVar56,CONCAT12(bVar54,CONCAT11(bVar52,bVar50)));
    fVar58 = (float)((ulong)uVar9 >> 0x20);
    fVar59 = (float)uVar60 * fVar58;
    fVar70 = (float)((ulong)uVar60 >> 0x20) * fVar58;
    fVar28 = fVar28 + fVar28;
    fVar65 = fVar65 + fVar65;
    fVar66 = fVar66 + fVar66;
    fVar69 = fVar69 + fVar69;
    fVar59 = fVar59 + fVar59;
    fVar70 = fVar70 + fVar70;
    fVar73 = fVar77 * fVar58 + fVar77 * fVar58;
    fVar74 = fVar81 * fVar58 + fVar81 * fVar58;
    fVar71 = fVar28 + fVar59;
    fVar58 = fVar65 + fVar70;
    uVar86 = SUB41(fVar58,0);
    uVar87 = (undefined1)((uint)fVar58 >> 8);
    uVar88 = (undefined1)((uint)fVar58 >> 0x10);
    uVar89 = (undefined1)((uint)fVar58 >> 0x18);
    fVar58 = fVar66 + fVar73;
    uVar90 = SUB41(fVar58,0);
    uVar91 = (undefined1)((uint)fVar58 >> 8);
    uVar92 = (undefined1)((uint)fVar58 >> 0x10);
    uVar93 = (undefined1)((uint)fVar58 >> 0x18);
    fVar58 = fVar69 + fVar74;
    uVar94 = SUB41(fVar58,0);
    uVar95 = (undefined1)((uint)fVar58 >> 8);
    uVar96 = (undefined1)((uint)fVar58 >> 0x10);
    uVar97 = (undefined1)((uint)fVar58 >> 0x18);
    fVar28 = fVar28 - fVar59;
    fVar65 = fVar65 - fVar70;
    fVar66 = fVar66 - fVar73;
    fVar69 = fVar69 - fVar74;
    fVar58 = (float)_DAT_01d4a130 - (fVar75 + fVar75 + fVar78 + fVar78);
    fVar59 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar76 + fVar76 + fVar85 + fVar85);
    uVar36 = SUB41(fVar59,0);
    uVar38 = (undefined1)((uint)fVar59 >> 8);
    uVar40 = (undefined1)((uint)fVar59 >> 0x10);
    uVar42 = (undefined1)((uint)fVar59 >> 0x18);
    fVar59 = (float)_UNK_01d4a138 -
             (fVar77 * fVar77 + fVar77 * fVar77 + fVar83 * fVar83 + fVar83 * fVar83);
    uVar45 = (undefined1)((uint)fVar59 >> 8);
    uVar47 = (undefined1)((uint)fVar59 >> 0x10);
    uVar49 = (undefined1)((uint)fVar59 >> 0x18);
    fVar70 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar81 * fVar81 + fVar81 * fVar81 + fVar84 * fVar84 + fVar84 * fVar84);
    uVar51 = SUB41(fVar70,0);
    uVar53 = (undefined1)((uint)fVar70 >> 8);
    uVar55 = (undefined1)((uint)fVar70 >> 0x10);
    uVar57 = (undefined1)((uint)fVar70 >> 0x18);
    auVar10[4] = uVar86;
    auVar10._0_4_ = fVar71;
    auVar10[5] = uVar87;
    auVar10[6] = uVar88;
    auVar10[7] = uVar89;
    auVar10[8] = uVar90;
    auVar10[9] = uVar91;
    auVar10[10] = uVar92;
    auVar10[0xb] = uVar93;
    auVar10[0xc] = uVar94;
    auVar10[0xd] = uVar95;
    auVar10[0xe] = uVar96;
    auVar10[0xf] = uVar97;
    auVar15._4_4_ = fVar65;
    auVar15._0_4_ = fVar28;
    auVar15._8_4_ = fVar66;
    auVar15._12_4_ = fVar69;
    auVar64._0_8_ = a64_TBL(ZEXT816(0),auVar10,auVar15,DAT_01cd5250);
    auVar11[4] = uVar86;
    auVar11._0_4_ = fVar71;
    auVar11[5] = uVar87;
    auVar11[6] = uVar88;
    auVar11[7] = uVar89;
    auVar11[8] = uVar90;
    auVar11[9] = uVar91;
    auVar11[10] = uVar92;
    auVar11[0xb] = uVar93;
    auVar11[0xc] = uVar94;
    auVar11[0xd] = uVar95;
    auVar11[0xe] = uVar96;
    auVar11[0xf] = uVar97;
    auVar16._4_4_ = fVar65;
    auVar16._0_4_ = fVar28;
    auVar16._8_4_ = fVar66;
    auVar16._12_4_ = fVar69;
    uVar8 = a64_TBL(ZEXT816(0),auVar11,auVar16,DAT_01cd51f8);
    auVar12[4] = uVar86;
    auVar12._0_4_ = fVar71;
    auVar12[5] = uVar87;
    auVar12[6] = uVar88;
    auVar12[7] = uVar89;
    auVar12[8] = uVar90;
    auVar12[9] = uVar91;
    auVar12[10] = uVar92;
    auVar12[0xb] = uVar93;
    auVar12[0xc] = uVar94;
    auVar12[0xd] = uVar95;
    auVar12[0xe] = uVar96;
    auVar12[0xf] = uVar97;
    auVar17._4_4_ = fVar65;
    auVar17._0_4_ = fVar28;
    auVar17._8_4_ = fVar66;
    auVar17._12_4_ = fVar69;
    uVar100 = a64_TBL(ZEXT816(0),auVar12,auVar17,DAT_01cd5430);
    auVar13[4] = uVar86;
    auVar13._0_4_ = fVar71;
    auVar13[5] = uVar87;
    auVar13[6] = uVar88;
    auVar13[7] = uVar89;
    auVar13[8] = uVar90;
    auVar13[9] = uVar91;
    auVar13[10] = uVar92;
    auVar13[0xb] = uVar93;
    auVar13[0xc] = uVar94;
    auVar13[0xd] = uVar95;
    auVar13[0xe] = uVar96;
    auVar13[0xf] = uVar97;
    auVar18._4_4_ = fVar65;
    auVar18._0_4_ = fVar28;
    auVar18._8_4_ = fVar66;
    auVar18._12_4_ = fVar69;
    uVar61 = a64_TBL(ZEXT816(0),auVar13,auVar18,DAT_01cd5050);
    auVar64._8_8_ = uVar8;
    auVar6[4] = uVar36;
    auVar6._0_4_ = fVar58;
    auVar6[5] = uVar38;
    auVar6[6] = uVar40;
    auVar6[7] = uVar42;
    auVar6[8] = SUB41(fVar59,0);
    auVar6[9] = uVar45;
    auVar6[10] = uVar47;
    auVar6[0xb] = uVar49;
    auVar6[0xc] = uVar51;
    auVar6[0xd] = uVar53;
    auVar6[0xe] = uVar55;
    auVar6[0xf] = uVar57;
    uVar14 = a64_TBL(ZEXT816(0),auVar6,auVar64,DAT_01cd50d8);
    auVar7[4] = uVar36;
    auVar7._0_4_ = fVar58;
    auVar7[5] = uVar38;
    auVar7[6] = uVar40;
    auVar7[7] = uVar42;
    auVar7[8] = SUB41(fVar59,0);
    auVar7[9] = uVar45;
    auVar7[10] = uVar47;
    auVar7[0xb] = uVar49;
    auVar7[0xc] = uVar51;
    auVar7[0xd] = uVar53;
    auVar7[0xe] = uVar55;
    auVar7[0xf] = uVar57;
    uVar9 = a64_TBL(ZEXT816(0),auVar7,auVar64,DAT_01cd4fb8);
    uVar99 = (undefined4)
             (CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,fVar59)))) >> 0x20);
    uVar98 = (undefined4)
             (CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar38,CONCAT14(uVar36,fVar58)))) >> 0x20);
    auVar19._4_4_ = uVar98;
    auVar19._0_4_ = fVar58;
    auVar19._8_4_ = fVar59;
    auVar19._12_4_ = uVar99;
    auVar24._8_8_ = uVar61;
    auVar24._0_8_ = uVar100;
    uVar8 = a64_TBL(ZEXT816(0),auVar19,auVar24,DAT_01cd50b8);
    auVar20._4_4_ = uVar98;
    auVar20._0_4_ = fVar58;
    auVar20._8_4_ = fVar59;
    auVar20._12_4_ = uVar99;
    auVar25._8_8_ = uVar61;
    auVar25._0_8_ = uVar100;
    uVar60 = a64_TBL(ZEXT816(0),auVar20,auVar25,DAT_01cd5308);
    auVar21._4_4_ = uVar98;
    auVar21._0_4_ = fVar58;
    auVar21._8_4_ = fVar59;
    auVar21._12_4_ = uVar99;
    auVar26._8_8_ = uVar61;
    auVar26._0_8_ = uVar100;
    uVar23 = a64_TBL(ZEXT816(0),auVar21,auVar26,DAT_01cd5008);
    fVar66 = (float)*(undefined8 *)(param_1 + 0xd8);
    fVar28 = (float)*(undefined8 *)(param_1 + 0xd0);
    fVar65 = (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
    auVar22._4_4_ = uVar98;
    auVar22._0_4_ = fVar58;
    auVar22._8_4_ = fVar59;
    auVar22._12_4_ = uVar99;
    auVar27._8_8_ = uVar61;
    auVar27._0_8_ = uVar100;
    uVar61 = a64_TBL(ZEXT816(0),auVar22,auVar27,DAT_01cd4fb0);
    *(ulong *)(param_1 + 0x88) =
         CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar66,(float)uVar9 * fVar66);
    *(ulong *)(param_1 + 0x80) =
         CONCAT44((float)((ulong)uVar14 >> 0x20) * fVar66,(float)uVar14 * fVar66);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xb0);
    *(float *)(param_1 + 0x68) = (float)uVar60 * fVar28;
    *(float *)(param_1 + 0x6c) = (float)((ulong)uVar60 >> 0x20) * fVar28;
    *(float *)(param_1 + 0x60) = (float)uVar8 * fVar28;
    *(float *)(param_1 + 100) = (float)((ulong)uVar8 >> 0x20) * fVar28;
    *(ulong *)(param_1 + 0x78) =
         CONCAT44((float)((ulong)uVar61 >> 0x20) * fVar65,(float)uVar61 * fVar65);
    *(ulong *)(param_1 + 0x70) =
         CONCAT44((float)((ulong)uVar23 >> 0x20) * fVar65,(float)uVar23 * fVar65);
  }
  return;
}


