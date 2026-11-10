/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014d530; name: FUN_0014d530
 */


void FUN_0014d530(long param_1)

{
  ushort *puVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  ushort *puVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  float fVar48;
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar96;
  undefined8 uVar92;
  undefined1 auVar93 [12];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar97;
  float fVar102;
  undefined8 uVar98;
  float fVar103;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar105 [16];
  float fVar108;
  int iVar109;
  float fVar111;
  int iVar112;
  float fVar113;
  int iVar114;
  float fVar115;
  int iVar116;
  undefined1 auVar110 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined8 uVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  
  lVar34 = *(long *)(param_1 + 8);
  fVar37 = *(float *)(lVar34 + 0xc4);
  if (fVar37 == 0.0) {
    fVar38 = *(float *)(lVar34 + 200);
    if (fVar38 == 0.0) {
      return;
    }
  }
  else {
    fVar38 = *(float *)(lVar34 + 200);
  }
  lVar2 = *(long *)(lVar34 + 8);
  lVar3 = *(long *)(lVar34 + 0x10);
  puVar33 = *(ushort **)(lVar34 + 0xb8);
  uVar32 = *(int *)(lVar34 + 0xc0) * 3;
  puVar1 = puVar33 + uVar32;
  fVar39 = (float)*(undefined8 *)(param_1 + 0x2a0);
  fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a0) >> 0x20);
  fVar41 = (float)*(undefined8 *)(param_1 + 0x2a8);
  fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a8) >> 0x20);
  if (*(char *)(param_1 + 0x32c) == '\0') {
    if (uVar32 != 0) {
      auVar49 = NEON_fmov(0x3f800000,4);
      fVar5 = *(float *)PTR_DAT_02710d80;
      do {
        lVar34 = (ulong)*puVar33 * 0x10;
        lVar35 = (ulong)puVar33[1] * 0x10;
        uVar67 = ((undefined8 *)(lVar2 + lVar34))[1];
        fVar52 = (float)uVar67;
        fVar53 = (float)((ulong)uVar67 >> 0x20);
        uVar67 = *(undefined8 *)(lVar2 + lVar34);
        fVar50 = (float)uVar67;
        fVar51 = (float)((ulong)uVar67 >> 0x20);
        uVar92 = ((undefined8 *)(lVar2 + lVar35))[1];
        uVar98 = *(undefined8 *)(lVar2 + lVar35);
        uVar119 = ((undefined8 *)(lVar3 + lVar34))[1];
        uVar67 = *(undefined8 *)(lVar3 + lVar34);
        lVar36 = (ulong)puVar33[2] * 0x10;
        uVar47 = ((undefined8 *)(lVar3 + lVar35))[1];
        uVar44 = *(undefined8 *)(lVar3 + lVar35);
        puVar33 = puVar33 + 3;
        fVar43 = (float)uVar98;
        fVar45 = (float)((ulong)uVar98 >> 0x20);
        fVar46 = (float)uVar92;
        fVar48 = (float)((ulong)uVar92 >> 0x20);
        pfVar4 = (float *)(lVar2 + lVar36);
        fVar111 = *pfVar4;
        fVar113 = pfVar4[1];
        fVar115 = pfVar4[2];
        fVar63 = pfVar4[3];
        uVar92 = ((undefined8 *)(lVar3 + lVar36))[1];
        uVar98 = *(undefined8 *)(lVar3 + lVar36);
        fVar64 = fVar111 - fVar50;
        fVar86 = fVar113 - fVar51;
        fVar88 = fVar115 - fVar52;
        auVar121._4_4_ = fVar86;
        auVar121._0_4_ = fVar64;
        auVar121._8_4_ = fVar88;
        auVar121._12_4_ = fVar63 - fVar53;
        auVar10._4_4_ = fVar86;
        auVar10._0_4_ = fVar64;
        auVar10._8_4_ = fVar88;
        auVar10._12_4_ = fVar63 - fVar53;
        auVar94 = NEON_ext(auVar121,auVar10,8,1);
        fVar16 = fVar43 - fVar50;
        fVar6 = fVar45 - fVar51;
        uVar54 = (undefined1)((uint)fVar6 >> 8);
        uVar55 = (undefined1)((uint)fVar6 >> 0x10);
        uVar56 = (undefined1)((uint)fVar6 >> 0x18);
        fVar18 = fVar46 - fVar52;
        uVar57 = (undefined1)((uint)fVar18 >> 8);
        uVar58 = (undefined1)((uint)fVar18 >> 0x10);
        uVar59 = (undefined1)((uint)fVar18 >> 0x18);
        fVar20 = fVar48 - fVar53;
        uVar60 = (undefined1)((uint)fVar20 >> 8);
        uVar61 = (undefined1)((uint)fVar20 >> 0x10);
        uVar62 = (undefined1)((uint)fVar20 >> 0x18);
        auVar13[4] = SUB41(fVar6,0);
        auVar13._0_4_ = fVar16;
        auVar13[5] = uVar54;
        auVar13[6] = uVar55;
        auVar13[7] = uVar56;
        auVar13[8] = SUB41(fVar18,0);
        auVar13[9] = uVar57;
        auVar13[10] = uVar58;
        auVar13[0xb] = uVar59;
        auVar13[0xc] = SUB41(fVar20,0);
        auVar13[0xd] = uVar60;
        auVar13[0xe] = uVar61;
        auVar13[0xf] = uVar62;
        auVar14[4] = SUB41(fVar6,0);
        auVar14._0_4_ = fVar16;
        auVar14[5] = uVar54;
        auVar14[6] = uVar55;
        auVar14[7] = uVar56;
        auVar14[8] = SUB41(fVar18,0);
        auVar14[9] = uVar57;
        auVar14[10] = uVar58;
        auVar14[0xb] = uVar59;
        auVar14[0xc] = SUB41(fVar20,0);
        auVar14[0xd] = uVar60;
        auVar14[0xe] = uVar61;
        auVar14[0xf] = uVar62;
        auVar105 = NEON_ext(auVar13,auVar14,8,1);
        fVar20 = fVar39 + ((fVar50 + fVar43 + fVar111) * 0.33333334 -
                          ((float)uVar67 + (float)uVar44 + (float)uVar98) * 0.33333334);
        fVar7 = fVar40 + ((fVar51 + fVar45 + fVar113) * 0.33333334 -
                         ((float)((ulong)uVar67 >> 0x20) + (float)((ulong)uVar44 >> 0x20) +
                         (float)((ulong)uVar98 >> 0x20)) * 0.33333334);
        uVar54 = (undefined1)((uint)fVar7 >> 8);
        uVar55 = (undefined1)((uint)fVar7 >> 0x10);
        uVar56 = (undefined1)((uint)fVar7 >> 0x18);
        fVar8 = fVar41 + ((fVar52 + fVar46 + fVar115) * 0.33333334 -
                         ((float)uVar119 + (float)uVar47 + (float)uVar92) * 0.33333334);
        uVar57 = (undefined1)((uint)fVar8 >> 8);
        uVar58 = (undefined1)((uint)fVar8 >> 0x10);
        uVar59 = (undefined1)((uint)fVar8 >> 0x18);
        fVar9 = fVar42 + ((fVar53 + fVar48 + fVar63) * 0.33333334 -
                         ((float)((ulong)uVar119 >> 0x20) + (float)((ulong)uVar47 >> 0x20) +
                         (float)((ulong)uVar92 >> 0x20)) * 0.33333334);
        uVar60 = (undefined1)((uint)fVar9 >> 8);
        uVar61 = (undefined1)((uint)fVar9 >> 0x10);
        uVar62 = (undefined1)((uint)fVar9 >> 0x18);
        fVar65 = fVar6 * fVar64 - fVar16 * fVar86;
        fVar91 = fVar18 * fVar86 - fVar6 * fVar88;
        uVar67 = NEON_ext(CONCAT44(fVar91,fVar65),
                          CONCAT44(fVar6 * auVar94._4_4_ - auVar105._4_4_ * fVar86,
                                   fVar16 * auVar94._0_4_ - auVar105._0_4_ * fVar64),4,1);
        fVar16 = fVar20 * fVar20;
        fVar18 = fVar7 * fVar7;
        fVar86 = fVar8 * fVar8;
        fVar90 = (float)uVar67;
        fVar96 = fVar90 * fVar90;
        fVar69 = (float)((ulong)uVar67 >> 0x20);
        fVar97 = fVar69 * fVar69;
        fVar102 = fVar65 * fVar65;
        fVar87 = fVar90 * fVar20;
        fVar89 = fVar69 * fVar7;
        fVar108 = fVar65 * fVar8;
        fVar6 = (fVar102 + fVar96 + fVar97) * (fVar86 + fVar16 + fVar18);
        fVar64 = (fVar102 + fVar96 + fVar97) * (fVar86 + fVar16 + fVar18);
        fVar88 = (fVar102 + fVar96 + fVar97) * (fVar86 + fVar16 + fVar18);
        fVar16 = (fVar102 + fVar96 + fVar97) * (fVar86 + fVar16 + fVar18);
        uVar67 = NEON_ext(uVar67,CONCAT44(fVar91,fVar65),4,1);
        auVar15[4] = SUB41(fVar64,0);
        auVar15._0_4_ = fVar6;
        auVar15[5] = (char)((uint)fVar64 >> 8);
        auVar15[6] = (char)((uint)fVar64 >> 0x10);
        auVar15[7] = (char)((uint)fVar64 >> 0x18);
        auVar15[8] = SUB41(fVar88,0);
        auVar15[9] = (char)((uint)fVar88 >> 8);
        auVar15[10] = (char)((uint)fVar88 >> 0x10);
        auVar15[0xb] = (char)((uint)fVar88 >> 0x18);
        auVar15[0xc] = SUB41(fVar16,0);
        auVar15[0xd] = (char)((uint)fVar16 >> 8);
        auVar15[0xe] = (char)((uint)fVar16 >> 0x10);
        auVar15[0xf] = (char)((uint)fVar16 >> 0x18);
        auVar121 = NEON_frsqrte(auVar15,4);
        auVar94[4] = SUB41(fVar7,0);
        auVar94._0_4_ = fVar20;
        auVar94[5] = uVar54;
        auVar94[6] = uVar55;
        auVar94[7] = uVar56;
        auVar94[8] = SUB41(fVar8,0);
        auVar94[9] = uVar57;
        auVar94[10] = uVar58;
        auVar94[0xb] = uVar59;
        auVar94[0xc] = SUB41(fVar9,0);
        auVar94[0xd] = uVar60;
        auVar94[0xe] = uVar61;
        auVar94[0xf] = uVar62;
        auVar105[4] = SUB41(fVar7,0);
        auVar105._0_4_ = fVar20;
        auVar105[5] = uVar54;
        auVar105[6] = uVar55;
        auVar105[7] = uVar56;
        auVar105[8] = SUB41(fVar8,0);
        auVar105[9] = uVar57;
        auVar105[10] = uVar58;
        auVar105[0xb] = uVar59;
        auVar105[0xc] = SUB41(fVar9,0);
        auVar105[0xd] = uVar60;
        auVar105[0xe] = uVar61;
        auVar105[0xf] = uVar62;
        auVar94 = NEON_ext(auVar94,auVar105,8,1);
        auVar110._0_4_ = auVar121._0_4_ * fVar6;
        auVar110._4_4_ = auVar121._4_4_ * fVar64;
        auVar110._8_4_ = auVar121._8_4_ * fVar88;
        auVar110._12_4_ = auVar121._12_4_ * fVar16;
        iVar28 = -(uint)(fVar6 < fVar5);
        iVar29 = -(uint)(fVar64 < fVar5);
        iVar30 = -(uint)(fVar88 < fVar5);
        iVar31 = -(uint)(fVar16 < fVar5);
        auVar105 = NEON_frsqrts(auVar110,auVar121,4);
        fVar97 = auVar121._0_4_ * auVar105._0_4_;
        fVar102 = auVar121._4_4_ * auVar105._4_4_;
        fVar103 = auVar121._8_4_ * auVar105._8_4_;
        fVar104 = auVar121._12_4_ * auVar105._12_4_;
        fVar88 = (float)uVar67 * fVar20 - fVar90 * fVar7;
        fVar96 = (float)((ulong)uVar67 >> 0x20) * fVar7 - fVar69 * fVar8;
        uVar119 = CONCAT44(fVar96,fVar88);
        fVar16 = fVar97 * (fVar108 + fVar87 + fVar89);
        fVar6 = fVar102 * (fVar108 + fVar87 + fVar89);
        fVar18 = fVar103 * (fVar108 + fVar87 + fVar89);
        fVar64 = fVar104 * (fVar108 + fVar87 + fVar89);
        fVar97 = fVar97 * fVar20;
        fVar102 = fVar102 * fVar7;
        fVar103 = fVar103 * fVar8;
        fVar104 = fVar104 * fVar9;
        uVar67 = NEON_ext(uVar119,CONCAT44(fVar69 * auVar94._4_4_ - fVar91 * fVar7,
                                           fVar90 * auVar94._0_4_ - fVar65 * fVar20),4,1);
        fVar86 = (float)((ulong)uVar67 >> 0x20);
        uVar119 = NEON_ext(uVar67,uVar119,4,1);
        auVar101._0_4_ = auVar49._0_4_ - fVar16 * fVar16;
        auVar101._4_4_ = auVar49._4_4_ - fVar6 * fVar6;
        auVar101._8_4_ = auVar49._8_4_ - fVar18 * fVar18;
        auVar101._12_4_ = auVar49._12_4_ - fVar64 * fVar64;
        auVar94 = NEON_fmax(ZEXT816(0),auVar101,4);
        auVar23._4_4_ = fVar102;
        auVar23._0_4_ = fVar97;
        auVar23._8_4_ = fVar103;
        auVar23._12_4_ = fVar104;
        auVar24._4_4_ = fVar102;
        auVar24._0_4_ = fVar97;
        auVar24._8_4_ = fVar103;
        auVar24._12_4_ = fVar104;
        auVar105 = NEON_ext(auVar23,auVar24,8,1);
        auVar121 = NEON_frsqrte(auVar94,4);
        fVar108 = auVar94._0_4_;
        auVar118._0_4_ = fVar108 * auVar121._0_4_;
        fVar65 = auVar94._4_4_;
        auVar118._4_4_ = fVar65 * auVar121._4_4_;
        fVar91 = auVar94._8_4_;
        auVar118._8_4_ = fVar91 * auVar121._8_4_;
        fVar104 = auVar94._12_4_;
        auVar118._12_4_ = fVar104 * auVar121._12_4_;
        auVar94 = NEON_frsqrts(auVar118,auVar121,4);
        fVar87 = fVar102 * (float)uVar67 - fVar97 * (float)uVar119;
        fVar89 = fVar103 * fVar86 - fVar102 * (float)((ulong)uVar119 >> 0x20);
        uVar67 = NEON_ext(CONCAT44(fVar89,fVar87),
                          CONCAT44(fVar102 * fVar96 - auVar105._4_4_ * fVar86,
                                   fVar97 * fVar88 - auVar105._0_4_ * (float)uVar67),4,1);
        fVar86 = fVar108 * auVar121._0_4_ * auVar94._0_4_;
        fVar88 = fVar65 * auVar121._4_4_ * auVar94._4_4_;
        fVar90 = fVar91 * auVar121._8_4_ * auVar94._8_4_;
        fVar69 = fVar104 * auVar121._12_4_ * auVar94._12_4_;
        iVar109 = -(uint)(0.0 < fVar108);
        iVar112 = -(uint)(0.0 < fVar65);
        iVar114 = -(uint)(0.0 < fVar91);
        iVar116 = -(uint)(0.0 < fVar104);
        fVar86 = (float)CONCAT13((byte)((uint)fVar86 >> 0x18) & (byte)((uint)iVar109 >> 0x18),
                                 CONCAT12((byte)((uint)fVar86 >> 0x10) &
                                          (byte)((uint)iVar109 >> 0x10),
                                          CONCAT11((byte)((uint)fVar86 >> 8) &
                                                   (byte)((uint)iVar109 >> 8),
                                                   SUB41(fVar86,0) & (byte)iVar109)));
        fVar90 = (float)CONCAT13((byte)((uint)fVar90 >> 0x18) & (byte)((uint)iVar114 >> 0x18),
                                 CONCAT12((byte)((uint)fVar90 >> 0x10) &
                                          (byte)((uint)iVar114 >> 0x10),
                                          CONCAT11((byte)((uint)fVar90 >> 8) &
                                                   (byte)((uint)iVar114 >> 8),
                                                   SUB41(fVar90,0) & (byte)iVar114)));
        fVar20 = fVar20 * fVar37 * ABS(fVar16) + fVar86 * fVar38 * fVar16 * (float)uVar67;
        fVar7 = fVar7 * fVar37 * ABS(fVar6) +
                (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) & (byte)((uint)iVar112 >> 0x18),
                                 CONCAT16((byte)((uint)fVar88 >> 0x10) &
                                          (byte)((uint)iVar112 >> 0x10),
                                          CONCAT15((byte)((uint)fVar88 >> 8) &
                                                   (byte)((uint)iVar112 >> 8),
                                                   CONCAT14(SUB41(fVar88,0) & (byte)iVar112,fVar86))
                                         )) >> 0x20) * fVar38 * fVar6 *
                (float)((ulong)uVar67 >> 0x20);
        fVar8 = fVar8 * fVar37 * ABS(fVar18) + fVar90 * fVar38 * fVar18 * fVar87;
        fVar9 = fVar9 * fVar37 * ABS(fVar64) +
                (float)(CONCAT17((byte)((uint)fVar69 >> 0x18) & (byte)((uint)iVar116 >> 0x18),
                                 CONCAT16((byte)((uint)fVar69 >> 0x10) &
                                          (byte)((uint)iVar116 >> 0x10),
                                          CONCAT15((byte)((uint)fVar69 >> 8) &
                                                   (byte)((uint)iVar116 >> 8),
                                                   CONCAT14(SUB41(fVar69,0) & (byte)iVar116,fVar90))
                                         )) >> 0x20) * fVar38 * fVar64 * fVar89;
        bVar70 = SUB41(fVar20,0) & ~(byte)iVar28;
        bVar71 = (byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar28 >> 8);
        bVar72 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
        bVar73 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
        bVar74 = SUB41(fVar7,0) & ~(byte)iVar29;
        bVar75 = (byte)((uint)fVar7 >> 8) & ~(byte)((uint)iVar29 >> 8);
        bVar76 = (byte)((uint)fVar7 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
        bVar77 = (byte)((uint)fVar7 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
        bVar78 = SUB41(fVar8,0) & ~(byte)iVar30;
        bVar79 = (byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar30 >> 8);
        bVar80 = (byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
        bVar81 = (byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
        bVar82 = SUB41(fVar9,0) & ~(byte)iVar31;
        bVar83 = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar31 >> 8);
        bVar84 = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
        bVar85 = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
        ((undefined8 *)(lVar2 + lVar34))[1] =
             CONCAT44(fVar53 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                               fVar53,
                      fVar52 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78))) *
                               fVar53);
        *(undefined8 *)(lVar2 + lVar34) =
             CONCAT44(fVar51 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                               fVar53,
                      fVar50 - (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) *
                               fVar53);
        ((undefined8 *)(lVar2 + lVar35))[1] =
             CONCAT44(fVar48 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                               fVar48,
                      fVar46 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78))) *
                               fVar48);
        *(undefined8 *)(lVar2 + lVar35) =
             CONCAT44(fVar45 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                               fVar48,
                      fVar43 - (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) *
                               fVar48);
        pfVar4 = (float *)(lVar2 + lVar36);
        pfVar4[2] = fVar115 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78))) *
                              fVar63;
        pfVar4[3] = fVar63 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                             fVar63;
        *pfVar4 = fVar111 - (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) *
                            fVar63;
        pfVar4[1] = fVar113 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                              fVar63;
      } while (puVar33 < puVar1);
    }
  }
  else if (uVar32 != 0) {
    uVar47 = *(undefined8 *)(param_1 + 0x278);
    uVar44 = *(undefined8 *)(param_1 + 0x270);
    fVar5 = *(float *)PTR_DAT_02710d80;
    uVar119 = *(undefined8 *)(param_1 + 600);
    uVar67 = *(undefined8 *)(param_1 + 0x250);
    fVar20 = *(float *)(param_1 + 0x260);
    fVar7 = *(float *)(param_1 + 0x264);
    fVar8 = *(float *)(param_1 + 0x268);
    fVar9 = *(float *)(param_1 + 0x26c);
    auVar49 = NEON_fmov(0x3f800000,4);
    do {
      lVar34 = (ulong)*puVar33 * 0x10;
      lVar35 = (ulong)puVar33[1] * 0x10;
      uVar68 = ((undefined8 *)(lVar2 + lVar34))[1];
      uVar66 = *(undefined8 *)(lVar2 + lVar34);
      uVar92 = ((undefined8 *)(lVar2 + lVar35))[1];
      uVar98 = *(undefined8 *)(lVar2 + lVar35);
      uVar19 = ((undefined8 *)(lVar3 + lVar34))[1];
      uVar17 = *(undefined8 *)(lVar3 + lVar34);
      lVar36 = (ulong)puVar33[2] * 0x10;
      uVar26 = ((undefined8 *)(lVar3 + lVar35))[1];
      uVar25 = *(undefined8 *)(lVar3 + lVar35);
      puVar33 = puVar33 + 3;
      fVar16 = (float)uVar98;
      fVar48 = (float)uVar66;
      fVar6 = (float)((ulong)uVar98 >> 0x20);
      fVar50 = (float)((ulong)uVar66 >> 0x20);
      fVar18 = (float)uVar92;
      fVar51 = (float)uVar68;
      fVar64 = (float)((ulong)uVar92 >> 0x20);
      fVar52 = (float)((ulong)uVar68 >> 0x20);
      uVar98 = ((undefined8 *)(lVar2 + lVar36))[1];
      fVar45 = (float)uVar98;
      fVar46 = (float)((ulong)uVar98 >> 0x20);
      uVar98 = *(undefined8 *)(lVar2 + lVar36);
      fVar63 = (float)uVar98;
      fVar43 = (float)((ulong)uVar98 >> 0x20);
      uVar66 = ((undefined8 *)(lVar3 + lVar36))[1];
      uVar92 = *(undefined8 *)(lVar3 + lVar36);
      auVar99._0_4_ = fVar16 - fVar48;
      auVar99._4_4_ = fVar6 - fVar50;
      auVar99._8_4_ = fVar18 - fVar51;
      auVar99._12_4_ = fVar64 - fVar52;
      auVar105 = NEON_ext(auVar99,auVar99,8,1);
      fVar69 = (fVar48 + fVar16 + fVar63) * 0.33333334;
      fVar87 = (fVar50 + fVar6 + fVar43) * 0.33333334;
      fVar89 = (fVar51 + fVar18 + fVar45) * 0.33333334;
      fVar108 = (fVar52 + fVar64 + fVar46) * 0.33333334;
      fVar86 = fVar63 - fVar48;
      fVar88 = fVar43 - fVar50;
      fVar90 = fVar45 - fVar51;
      auVar21._4_4_ = fVar88;
      auVar21._0_4_ = fVar86;
      auVar21._8_4_ = fVar90;
      auVar21._12_4_ = fVar46 - fVar52;
      auVar22._4_4_ = fVar88;
      auVar22._0_4_ = fVar86;
      auVar22._8_4_ = fVar90;
      auVar22._12_4_ = fVar46 - fVar52;
      auVar94 = NEON_ext(auVar21,auVar22,8,1);
      fVar91 = auVar99._4_4_ * fVar86 - auVar99._0_4_ * fVar88;
      fVar96 = auVar99._8_4_ * fVar88 - auVar99._4_4_ * fVar90;
      uVar68 = CONCAT44(fVar96,fVar91);
      uVar98 = NEON_ext(uVar68,CONCAT44(auVar99._4_4_ * auVar94._4_4_ - auVar105._4_4_ * fVar88,
                                        auVar99._0_4_ * auVar94._0_4_ - auVar105._0_4_ * fVar86),4,1
                       );
      fVar53 = (float)uVar98;
      fVar65 = (float)((ulong)uVar98 >> 0x20);
      fVar86 = (float)uVar44 * fVar89 +
               fVar20 * fVar87 +
               (float)uVar67 * fVar69 +
               ((fVar39 + (fVar69 - ((float)uVar17 + (float)uVar25 + (float)uVar92) * 0.33333334)) -
               fVar69);
      fVar88 = (float)((ulong)uVar44 >> 0x20) * fVar89 +
               fVar7 * fVar87 +
               (float)((ulong)uVar67 >> 0x20) * fVar69 +
               ((fVar40 + (fVar87 - ((float)((ulong)uVar17 >> 0x20) + (float)((ulong)uVar25 >> 0x20)
                                    + (float)((ulong)uVar92 >> 0x20)) * 0.33333334)) - fVar87);
      uVar54 = (undefined1)((uint)fVar88 >> 8);
      uVar55 = (undefined1)((uint)fVar88 >> 0x10);
      uVar56 = (undefined1)((uint)fVar88 >> 0x18);
      fVar90 = (float)uVar47 * fVar89 +
               fVar8 * fVar87 +
               (float)uVar119 * fVar69 +
               ((fVar41 + (fVar89 - ((float)uVar19 + (float)uVar26 + (float)uVar66) * 0.33333334)) -
               fVar89);
      uVar57 = (undefined1)((uint)fVar90 >> 8);
      uVar58 = (undefined1)((uint)fVar90 >> 0x10);
      uVar59 = (undefined1)((uint)fVar90 >> 0x18);
      fVar69 = (float)((ulong)uVar47 >> 0x20) * fVar89 +
               fVar9 * fVar87 +
               (float)((ulong)uVar119 >> 0x20) * fVar69 +
               ((fVar42 + (fVar108 -
                          ((float)((ulong)uVar19 >> 0x20) + (float)((ulong)uVar26 >> 0x20) +
                          (float)((ulong)uVar66 >> 0x20)) * 0.33333334)) - fVar108);
      uVar60 = (undefined1)((uint)fVar69 >> 8);
      uVar61 = (undefined1)((uint)fVar69 >> 0x10);
      uVar62 = (undefined1)((uint)fVar69 >> 0x18);
      fVar87 = fVar86 * fVar86;
      fVar108 = fVar88 * fVar88;
      fVar113 = fVar90 * fVar90;
      fVar97 = fVar53 * fVar53;
      fVar102 = fVar65 * fVar65;
      fVar103 = fVar91 * fVar91;
      fVar104 = fVar53 * fVar86;
      fVar106 = fVar65 * fVar88;
      fVar107 = fVar91 * fVar90;
      fVar89 = (fVar103 + fVar97 + fVar102) * (fVar113 + fVar87 + fVar108);
      fVar111 = (fVar103 + fVar97 + fVar102) * (fVar113 + fVar87 + fVar108);
      fVar115 = (fVar103 + fVar97 + fVar102) * (fVar113 + fVar87 + fVar108);
      fVar87 = (fVar103 + fVar97 + fVar102) * (fVar113 + fVar87 + fVar108);
      uVar98 = NEON_ext(uVar98,uVar68,4,1);
      auVar27[4] = SUB41(fVar111,0);
      auVar27._0_4_ = fVar89;
      auVar27[5] = (char)((uint)fVar111 >> 8);
      auVar27[6] = (char)((uint)fVar111 >> 0x10);
      auVar27[7] = (char)((uint)fVar111 >> 0x18);
      auVar27[8] = SUB41(fVar115,0);
      auVar27[9] = (char)((uint)fVar115 >> 8);
      auVar27[10] = (char)((uint)fVar115 >> 0x10);
      auVar27[0xb] = (char)((uint)fVar115 >> 0x18);
      auVar27[0xc] = SUB41(fVar87,0);
      auVar27[0xd] = (char)((uint)fVar87 >> 8);
      auVar27[0xe] = (char)((uint)fVar87 >> 0x10);
      auVar27[0xf] = (char)((uint)fVar87 >> 0x18);
      auVar94 = NEON_frsqrte(auVar27,4);
      auVar11[4] = SUB41(fVar88,0);
      auVar11._0_4_ = fVar86;
      auVar11[5] = uVar54;
      auVar11[6] = uVar55;
      auVar11[7] = uVar56;
      auVar11[8] = SUB41(fVar90,0);
      auVar11[9] = uVar57;
      auVar11[10] = uVar58;
      auVar11[0xb] = uVar59;
      auVar11[0xc] = SUB41(fVar69,0);
      auVar11[0xd] = uVar60;
      auVar11[0xe] = uVar61;
      auVar11[0xf] = uVar62;
      auVar12[4] = SUB41(fVar88,0);
      auVar12._0_4_ = fVar86;
      auVar12[5] = uVar54;
      auVar12[6] = uVar55;
      auVar12[7] = uVar56;
      auVar12[8] = SUB41(fVar90,0);
      auVar12[9] = uVar57;
      auVar12[10] = uVar58;
      auVar12[0xb] = uVar59;
      auVar12[0xc] = SUB41(fVar69,0);
      auVar12[0xd] = uVar60;
      auVar12[0xe] = uVar61;
      auVar12[0xf] = uVar62;
      auVar105 = NEON_ext(auVar11,auVar12,8,1);
      auVar120._0_4_ = auVar94._0_4_ * fVar89;
      auVar120._4_4_ = auVar94._4_4_ * fVar111;
      auVar120._8_4_ = auVar94._8_4_ * fVar115;
      auVar120._12_4_ = auVar94._12_4_ * fVar87;
      iVar28 = -(uint)(fVar89 < fVar5);
      iVar29 = -(uint)(fVar111 < fVar5);
      iVar30 = -(uint)(fVar115 < fVar5);
      iVar31 = -(uint)(fVar87 < fVar5);
      auVar121 = NEON_frsqrts(auVar120,auVar94,4);
      fVar108 = auVar94._0_4_ * auVar121._0_4_;
      fVar111 = auVar94._4_4_ * auVar121._4_4_;
      fVar113 = auVar94._8_4_ * auVar121._8_4_;
      fVar115 = auVar94._12_4_ * auVar121._12_4_;
      fVar87 = (float)uVar98 * fVar86 - fVar53 * fVar88;
      fVar89 = (float)((ulong)uVar98 >> 0x20) * fVar88 - fVar65 * fVar90;
      fVar97 = fVar108 * (fVar107 + fVar104 + fVar106);
      fVar102 = fVar111 * (fVar107 + fVar104 + fVar106);
      fVar103 = fVar113 * (fVar107 + fVar104 + fVar106);
      fVar104 = fVar115 * (fVar107 + fVar104 + fVar106);
      auVar100._0_4_ = fVar108 * fVar86;
      auVar100._4_4_ = fVar111 * fVar88;
      auVar100._8_4_ = fVar113 * fVar90;
      auVar100._12_4_ = fVar115 * fVar69;
      uVar92 = NEON_ext(CONCAT44(fVar89,fVar87),
                        CONCAT44(fVar65 * auVar105._4_4_ - fVar96 * fVar88,
                                 fVar53 * auVar105._0_4_ - fVar91 * fVar86),4,1);
      uVar98 = NEON_ext(uVar92,CONCAT44(fVar89,fVar87),4,1);
      auVar117._0_4_ = auVar49._0_4_ - fVar97 * fVar97;
      auVar117._4_4_ = auVar49._4_4_ - fVar102 * fVar102;
      auVar117._8_4_ = auVar49._8_4_ - fVar103 * fVar103;
      auVar117._12_4_ = auVar49._12_4_ - fVar104 * fVar104;
      auVar94 = NEON_fmax(ZEXT816(0),auVar117,4);
      auVar105 = NEON_ext(auVar100,auVar100,8,1);
      auVar121 = NEON_frsqrte(auVar94,4);
      fVar108 = (float)((ulong)uVar92 >> 0x20);
      fVar53 = auVar94._0_4_;
      auVar122._0_4_ = fVar53 * auVar121._0_4_;
      fVar65 = auVar94._4_4_;
      auVar122._4_4_ = fVar65 * auVar121._4_4_;
      fVar91 = auVar94._8_4_;
      auVar122._8_4_ = fVar91 * auVar121._8_4_;
      fVar96 = auVar94._12_4_;
      auVar122._12_4_ = fVar96 * auVar121._12_4_;
      auVar94 = NEON_frsqrts(auVar122,auVar121,4);
      fVar113 = auVar100._4_4_ * (float)uVar92 - auVar100._0_4_ * (float)uVar98;
      fVar115 = auVar100._8_4_ * fVar108 - auVar100._4_4_ * (float)((ulong)uVar98 >> 0x20);
      uVar98 = NEON_ext(CONCAT44(fVar115,fVar113),
                        CONCAT44(auVar100._4_4_ * fVar89 - auVar105._4_4_ * fVar108,
                                 auVar100._0_4_ * fVar87 - auVar105._0_4_ * (float)uVar92),4,1);
      fVar87 = fVar53 * auVar121._0_4_ * auVar94._0_4_;
      fVar89 = fVar65 * auVar121._4_4_ * auVar94._4_4_;
      fVar108 = fVar91 * auVar121._8_4_ * auVar94._8_4_;
      fVar111 = fVar96 * auVar121._12_4_ * auVar94._12_4_;
      iVar109 = -(uint)(0.0 < fVar53);
      iVar112 = -(uint)(0.0 < fVar65);
      iVar114 = -(uint)(0.0 < fVar91);
      iVar116 = -(uint)(0.0 < fVar96);
      fVar87 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & (byte)((uint)iVar109 >> 0x18),
                               CONCAT12((byte)((uint)fVar87 >> 0x10) & (byte)((uint)iVar109 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar87 >> 8) &
                                                  (byte)((uint)iVar109 >> 8),
                                                  SUB41(fVar87,0) & (byte)iVar109)));
      auVar93._0_8_ =
           CONCAT17((byte)((uint)fVar89 >> 0x18) & (byte)((uint)iVar112 >> 0x18),
                    CONCAT16((byte)((uint)fVar89 >> 0x10) & (byte)((uint)iVar112 >> 0x10),
                             CONCAT15((byte)((uint)fVar89 >> 8) & (byte)((uint)iVar112 >> 8),
                                      CONCAT14(SUB41(fVar89,0) & (byte)iVar112,fVar87))));
      auVar93[8] = SUB41(fVar108,0) & (byte)iVar114;
      auVar93[9] = (byte)((uint)fVar108 >> 8) & (byte)((uint)iVar114 >> 8);
      auVar93[10] = (byte)((uint)fVar108 >> 0x10) & (byte)((uint)iVar114 >> 0x10);
      auVar93[0xb] = (byte)((uint)fVar108 >> 0x18) & (byte)((uint)iVar114 >> 0x18);
      auVar95[0xc] = SUB41(fVar111,0) & (byte)iVar116;
      auVar95._0_12_ = auVar93;
      auVar95[0xd] = (byte)((uint)fVar111 >> 8) & (byte)((uint)iVar116 >> 8);
      auVar95[0xe] = (byte)((uint)fVar111 >> 0x10) & (byte)((uint)iVar116 >> 0x10);
      auVar95[0xf] = (byte)((uint)fVar111 >> 0x18) & (byte)((uint)iVar116 >> 0x18);
      fVar86 = fVar86 * fVar37 * ABS(fVar97) + fVar87 * fVar38 * fVar97 * (float)uVar98;
      fVar88 = fVar88 * fVar37 * ABS(fVar102) +
               (float)((ulong)auVar93._0_8_ >> 0x20) * fVar38 * fVar102 *
               (float)((ulong)uVar98 >> 0x20);
      fVar90 = fVar90 * fVar37 * ABS(fVar103) + auVar93._8_4_ * fVar38 * fVar103 * fVar113;
      fVar69 = fVar69 * fVar37 * ABS(fVar104) + auVar95._12_4_ * fVar38 * fVar104 * fVar115;
      bVar70 = SUB41(fVar86,0) & ~(byte)iVar28;
      bVar71 = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar28 >> 8);
      bVar72 = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
      bVar73 = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
      bVar74 = SUB41(fVar88,0) & ~(byte)iVar29;
      bVar75 = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar29 >> 8);
      bVar76 = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
      bVar77 = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
      bVar78 = SUB41(fVar90,0) & ~(byte)iVar30;
      bVar79 = (byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar30 >> 8);
      bVar80 = (byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar30 >> 0x10);
      bVar81 = (byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar30 >> 0x18);
      bVar82 = SUB41(fVar69,0) & ~(byte)iVar31;
      bVar83 = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar31 >> 8);
      bVar84 = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10);
      bVar85 = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18);
      fVar6 = fVar6 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) * fVar64;
      fVar86 = fVar64 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) * fVar64;
      ((undefined8 *)(lVar2 + lVar34))[1] =
           CONCAT44(fVar52 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                             fVar52,
                    fVar51 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78))) *
                             fVar52);
      *(undefined8 *)(lVar2 + lVar34) =
           CONCAT44(fVar50 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                             fVar52,
                    fVar48 - (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) *
                             fVar52);
      ((undefined8 *)(lVar2 + lVar35))[1] =
           CONCAT17((char)((uint)fVar86 >> 0x18),
                    CONCAT16((char)((uint)fVar86 >> 0x10),
                             CONCAT15((char)((uint)fVar86 >> 8),
                                      CONCAT14(SUB41(fVar86,0),
                                               fVar18 - (float)CONCAT13(bVar81,CONCAT12(bVar80,
                                                  CONCAT11(bVar79,bVar78))) * fVar64))));
      *(undefined8 *)(lVar2 + lVar35) =
           CONCAT17((char)((uint)fVar6 >> 0x18),
                    CONCAT16((char)((uint)fVar6 >> 0x10),
                             CONCAT15((char)((uint)fVar6 >> 8),
                                      CONCAT14(SUB41(fVar6,0),
                                               fVar16 - (float)CONCAT13(bVar73,CONCAT12(bVar72,
                                                  CONCAT11(bVar71,bVar70))) * fVar64))));
      ((undefined8 *)(lVar2 + lVar36))[1] =
           CONCAT44(fVar46 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                             fVar46,
                    fVar45 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,bVar78))) *
                             fVar46);
      *(undefined8 *)(lVar2 + lVar36) =
           CONCAT44(fVar43 - (float)CONCAT13(bVar77,CONCAT12(bVar76,CONCAT11(bVar75,bVar74))) *
                             fVar46,
                    fVar63 - (float)CONCAT13(bVar73,CONCAT12(bVar72,CONCAT11(bVar71,bVar70))) *
                             fVar46);
    } while (puVar33 < puVar1);
  }
  return;
}


