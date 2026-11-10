/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014b1b0; name: FUN_0014b1b0
 */


void FUN_0014b1b0(long param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  byte bVar12;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined8 uVar13;
  undefined8 uVar17;
  byte bVar18;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar19;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  undefined8 uVar50;
  float fVar52;
  float fVar54;
  undefined8 uVar53;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
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
  undefined1 auVar71 [16];
  byte bVar83;
  undefined1 auVar84 [16];
  byte bVar85;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [12];
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  int iVar122;
  float fVar123;
  int iVar125;
  float fVar126;
  int iVar127;
  float fVar128;
  int iVar129;
  undefined1 auVar124 [16];
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  int iVar134;
  float fVar135;
  int iVar136;
  
  puVar6 = PTR_DAT_02710df8;
  puVar5 = PTR_DAT_02710d80;
  uVar13 = *(undefined8 *)*param_2;
  auVar11 = NEON_ext(*param_2,*param_2,8,1);
  uVar7 = CONCAT13(auVar11[7] | (byte)((ulong)uVar13 >> 0x38) |
                   auVar11[3] | (byte)((ulong)uVar13 >> 0x18),
                   CONCAT12(auVar11[6] | (byte)((ulong)uVar13 >> 0x30) |
                            auVar11[2] | (byte)((ulong)uVar13 >> 0x10),
                            CONCAT11(auVar11[5] | (byte)((ulong)uVar13 >> 0x28) |
                                     auVar11[1] | (byte)((ulong)uVar13 >> 8),
                                     auVar11[4] | (byte)((ulong)uVar13 >> 0x20) |
                                     auVar11[0] | (byte)uVar13)));
  if (uVar7 != 0) {
    lVar8 = *(long *)(param_1 + 0x1a0);
    lVar9 = *(long *)(param_1 + 0x1b0);
    auVar11 = NEON_fmov(0x3f800000,4);
    fVar3 = *(float *)(*(long *)(param_1 + 0x1c0) + 0x188);
    do {
      uVar17 = param_4[1];
      uVar13 = *param_4;
      uVar23 = param_4[3];
      uVar19 = param_4[2];
      uVar25 = param_4[5];
      uVar24 = param_4[4];
      fVar55 = *(float *)puVar5;
      while( true ) {
        uVar10 = (ulong)((int)LZCOUNT(uVar7 & -uVar7) * -0x10 + 0x1f0);
        puVar1 = (undefined8 *)(lVar8 + uVar10);
        uVar53 = puVar1[1];
        uVar50 = *puVar1;
        pfVar2 = (float *)(lVar9 + uVar10);
        fVar131 = *pfVar2;
        fVar132 = pfVar2[1];
        fVar133 = pfVar2[2];
        fVar135 = pfVar2[3];
        fVar62 = (float)uVar50;
        fVar97 = (float)*param_3 - fVar62;
        fVar98 = (float)((ulong)*param_3 >> 0x20) - fVar62;
        fVar99 = (float)param_3[1] - fVar62;
        fVar100 = (float)((ulong)param_3[1] >> 0x20) - fVar62;
        fVar65 = (float)((ulong)uVar50 >> 0x20);
        fVar92 = (float)param_3[2] - fVar65;
        fVar94 = (float)((ulong)param_3[2] >> 0x20) - fVar65;
        fVar95 = (float)param_3[3] - fVar65;
        fVar96 = (float)((ulong)param_3[3] >> 0x20) - fVar65;
        fVar68 = (float)uVar53;
        fVar56 = (float)uVar13 - fVar131;
        fVar57 = (float)((ulong)uVar13 >> 0x20) - fVar131;
        fVar58 = (float)uVar17 - fVar131;
        fVar59 = (float)((ulong)uVar17 >> 0x20) - fVar131;
        fVar101 = (float)param_3[4] - fVar68;
        fVar102 = (float)((ulong)param_3[4] >> 0x20) - fVar68;
        fVar103 = (float)param_3[5] - fVar68;
        fVar104 = (float)((ulong)param_3[5] >> 0x20) - fVar68;
        fVar26 = (float)uVar19 - fVar132;
        fVar27 = (float)((ulong)uVar19 >> 0x20) - fVar132;
        fVar28 = (float)uVar23 - fVar132;
        fVar29 = (float)((ulong)uVar23 >> 0x20) - fVar132;
        fVar30 = (float)uVar24 - fVar133;
        fVar31 = (float)((ulong)uVar24 >> 0x20) - fVar133;
        fVar32 = (float)uVar25 - fVar133;
        fVar33 = (float)((ulong)uVar25 >> 0x20) - fVar133;
        auVar86._0_4_ = fVar30 * fVar30 + fVar26 * fVar26 + fVar56 * fVar56 + fVar55;
        auVar86._4_4_ = fVar31 * fVar31 + fVar27 * fVar27 + fVar57 * fVar57 + fVar55;
        auVar86._8_4_ = fVar32 * fVar32 + fVar28 * fVar28 + fVar58 * fVar58 + fVar55;
        auVar86._12_4_ = fVar33 * fVar33 + fVar29 * fVar29 + fVar59 * fVar59 + fVar55;
        fVar54 = (float)((ulong)uVar53 >> 0x20);
        fVar114 = fVar54 * fVar54;
        fVar60 = (fVar97 * fVar97 + fVar92 * fVar92 + fVar101 * fVar101) - fVar114;
        fVar63 = (fVar98 * fVar98 + fVar94 * fVar94 + fVar102 * fVar102) - fVar114;
        fVar66 = (fVar99 * fVar99 + fVar95 * fVar95 + fVar103 * fVar103) - fVar114;
        fVar114 = (fVar100 * fVar100 + fVar96 * fVar96 + fVar104 * fVar104) - fVar114;
        fVar119 = fVar54 * fVar135;
        fVar105 = (fVar97 * fVar56 + fVar92 * fVar26 + fVar101 * fVar30) - fVar119;
        fVar110 = (fVar98 * fVar57 + fVar94 * fVar27 + fVar102 * fVar31) - fVar119;
        fVar112 = (fVar99 * fVar58 + fVar95 * fVar28 + fVar103 * fVar32) - fVar119;
        fVar119 = (fVar100 * fVar59 + fVar96 * fVar29 + fVar104 * fVar33) - fVar119;
        fVar120 = fVar135 * fVar135;
        fVar61 = fVar105 - fVar60;
        fVar64 = fVar110 - fVar63;
        fVar67 = fVar112 - fVar66;
        fVar69 = fVar119 - fVar114;
        fVar60 = fVar105 * fVar105 - fVar60 * (auVar86._0_4_ - fVar120);
        fVar63 = fVar110 * fVar110 - fVar63 * (auVar86._4_4_ - fVar120);
        fVar66 = fVar112 * fVar112 - fVar66 * (auVar86._8_4_ - fVar120);
        fVar114 = fVar119 * fVar119 - fVar114 * (auVar86._12_4_ - fVar120);
        auVar46[4] = SUB41(fVar63,0);
        auVar46._0_4_ = fVar60;
        auVar46[5] = (char)((uint)fVar63 >> 8);
        auVar46[6] = (char)((uint)fVar63 >> 0x10);
        auVar46[7] = (char)((uint)fVar63 >> 0x18);
        auVar46[8] = SUB41(fVar66,0);
        auVar46[9] = (char)((uint)fVar66 >> 8);
        auVar46[10] = (char)((uint)fVar66 >> 0x10);
        auVar46[0xb] = (char)((uint)fVar66 >> 0x18);
        auVar46[0xc] = SUB41(fVar114,0);
        auVar46[0xd] = (char)((uint)fVar114 >> 8);
        auVar46[0xe] = (char)((uint)fVar114 >> 0x10);
        auVar46[0xf] = (char)((uint)fVar114 >> 0x18);
        auVar46 = NEON_frsqrte(auVar46,4);
        fVar116 = fVar61 + (fVar105 - (auVar86._0_4_ - fVar120));
        fVar117 = fVar64 + (fVar110 - (auVar86._4_4_ - fVar120));
        fVar118 = fVar67 + (fVar112 - (auVar86._8_4_ - fVar120));
        fVar121 = fVar69 + (fVar119 - (auVar86._12_4_ - fVar120));
        auVar108._4_4_ = fVar117;
        auVar108._0_4_ = fVar116;
        auVar108._8_4_ = fVar118;
        auVar108._12_4_ = fVar121;
        auVar108 = NEON_frecpe(auVar108,4);
        auVar47._0_4_ = auVar46._0_4_ * fVar60;
        auVar47._4_4_ = auVar46._4_4_ * fVar63;
        auVar47._8_4_ = auVar46._8_4_ * fVar66;
        auVar47._12_4_ = auVar46._12_4_ * fVar114;
        iVar122 = -(uint)(0.0 < fVar60);
        iVar125 = -(uint)(0.0 < fVar63);
        iVar127 = -(uint)(0.0 < fVar66);
        iVar129 = -(uint)(0.0 < fVar114);
        auVar48 = NEON_frsqrts(auVar47,auVar46,4);
        auVar4._4_4_ = fVar117;
        auVar4._0_4_ = fVar116;
        auVar4._8_4_ = fVar118;
        auVar4._12_4_ = fVar121;
        auVar49 = NEON_frecps(auVar4,auVar108,4);
        fVar105 = auVar46._0_4_ * auVar48._0_4_ * fVar60;
        fVar110 = auVar46._4_4_ * auVar48._4_4_ * fVar63;
        fVar112 = auVar46._8_4_ * auVar48._8_4_ * fVar66;
        fVar119 = auVar46._12_4_ * auVar48._12_4_ * fVar114;
        fVar106 = (float)CONCAT13((byte)((uint)fVar105 >> 0x18) & (byte)((uint)iVar122 >> 0x18),
                                  CONCAT12((byte)((uint)fVar105 >> 0x10) &
                                           (byte)((uint)iVar122 >> 0x10),
                                           CONCAT11((byte)((uint)fVar105 >> 8) &
                                                    (byte)((uint)iVar122 >> 8),
                                                    SUB41(fVar105,0) & (byte)iVar122)));
        auVar107._0_8_ =
             CONCAT17((byte)((uint)fVar110 >> 0x18) & (byte)((uint)iVar125 >> 0x18),
                      CONCAT16((byte)((uint)fVar110 >> 0x10) & (byte)((uint)iVar125 >> 0x10),
                               CONCAT15((byte)((uint)fVar110 >> 8) & (byte)((uint)iVar125 >> 8),
                                        CONCAT14(SUB41(fVar110,0) & (byte)iVar125,fVar106))));
        auVar107[8] = SUB41(fVar112,0) & (byte)iVar127;
        auVar107[9] = (byte)((uint)fVar112 >> 8) & (byte)((uint)iVar127 >> 8);
        auVar107[10] = (byte)((uint)fVar112 >> 0x10) & (byte)((uint)iVar127 >> 0x10);
        auVar107[0xb] = (byte)((uint)fVar112 >> 0x18) & (byte)((uint)iVar127 >> 0x18);
        auVar109[0xc] = SUB41(fVar119,0) & (byte)iVar129;
        auVar109._0_12_ = auVar107;
        auVar109[0xd] = (byte)((uint)fVar119 >> 8) & (byte)((uint)iVar129 >> 8);
        auVar109[0xe] = (byte)((uint)fVar119 >> 0x10) & (byte)((uint)iVar129 >> 0x10);
        auVar109[0xf] = (byte)((uint)fVar119 >> 0x18) & (byte)((uint)iVar129 >> 0x18);
        auVar124._0_4_ = fVar61 + fVar106;
        fVar111 = (float)((ulong)auVar107._0_8_ >> 0x20);
        auVar124._4_4_ = fVar64 + fVar111;
        fVar113 = auVar107._8_4_;
        auVar124._8_4_ = fVar67 + fVar113;
        fVar115 = auVar109._12_4_;
        auVar124._12_4_ = fVar69 + fVar115;
        auVar46 = NEON_fmin(ZEXT816(0),auVar124,4);
        fVar123 = auVar108._0_4_ * auVar49._0_4_ * auVar46._0_4_;
        fVar126 = auVar108._4_4_ * auVar49._4_4_ * auVar46._4_4_;
        fVar128 = auVar108._8_4_ * auVar49._8_4_ * auVar46._8_4_;
        fVar130 = auVar108._12_4_ * auVar49._12_4_ * auVar46._12_4_;
        fVar62 = fVar131 - fVar62;
        fVar65 = fVar132 - fVar65;
        fVar68 = fVar133 - fVar68;
        fVar70 = fVar135 - fVar54;
        fVar105 = auVar11._0_4_;
        fVar110 = auVar11._4_4_;
        fVar112 = auVar11._8_4_;
        fVar119 = auVar11._12_4_;
        fVar120 = fVar54 + fVar61 * fVar116 * fVar70;
        fVar51 = fVar54 + fVar64 * fVar117 * fVar70;
        fVar52 = fVar54 + fVar67 * fVar118 * fVar70;
        fVar54 = fVar54 + fVar69 * fVar121 * fVar70;
        uVar53 = *(undefined8 *)(puVar6 + 8);
        uVar50 = *(undefined8 *)puVar6;
        uVar10 = CONCAT26(-(ushort)(fVar121 < -fVar55),
                          CONCAT24(-(ushort)(fVar118 < -fVar55),
                                   CONCAT22(-(ushort)(fVar117 < -fVar55),
                                            -(ushort)(fVar116 < -fVar55)))) &
                 CONCAT26(-(ushort)(fVar130 < fVar119),
                          CONCAT24(-(ushort)(fVar128 < fVar112),
                                   CONCAT22(-(ushort)(fVar126 < fVar110),
                                            -(ushort)(fVar123 < fVar105)))) &
                 (ulong)CONCAT16(-(fVar69 < fVar115),
                                 (uint6)CONCAT14(-(fVar67 < fVar113),
                                                 (uint)CONCAT12(-(fVar64 < fVar111),
                                                                -(ushort)(fVar61 < fVar106)))) &
                 CONCAT26(-(ushort)((float)((ulong)uVar53 >> 0x20) * fVar54 * fVar121 * fVar54 <
                                   fVar114),
                          CONCAT24(-(ushort)((float)uVar53 * fVar52 * fVar118 * fVar52 < fVar66),
                                   CONCAT22(-(ushort)((float)((ulong)uVar50 >> 0x20) *
                                                      fVar51 * fVar117 * fVar51 < fVar63),
                                            -(ushort)((float)uVar50 * fVar120 * fVar116 * fVar120 <
                                                     fVar60))));
        iVar127 = (uint)(ushort)uVar10 << 0x1f;
        iVar129 = (uint)(ushort)(uVar10 >> 0x10) << 0x1f;
        iVar134 = (uint)(ushort)(uVar10 >> 0x20) << 0x1f;
        iVar136 = (uint)(ushort)(uVar10 >> 0x30) << 0x1f;
        iVar122 = -(uint)((float)(iVar127 >> 0x1f) == 0.0);
        iVar125 = -(uint)((float)(iVar129 >> 0x1f) == 0.0);
        uVar34 = (undefined1)iVar125;
        uVar35 = (undefined1)((uint)iVar125 >> 8);
        uVar36 = (undefined1)((uint)iVar125 >> 0x10);
        uVar37 = (undefined1)((uint)iVar125 >> 0x18);
        iVar125 = -(uint)((float)(iVar134 >> 0x1f) == 0.0);
        uVar38 = (undefined1)iVar125;
        uVar39 = (undefined1)((uint)iVar125 >> 8);
        uVar40 = (undefined1)((uint)iVar125 >> 0x10);
        uVar41 = (undefined1)((uint)iVar125 >> 0x18);
        iVar125 = -(uint)((float)(iVar136 >> 0x1f) == 0.0);
        uVar42 = (undefined1)iVar125;
        uVar43 = (undefined1)((uint)iVar125 >> 8);
        uVar44 = (undefined1)((uint)iVar125 >> 0x10);
        uVar45 = (undefined1)((uint)iVar125 >> 0x18);
        auVar48[4] = uVar34;
        auVar48._0_4_ = iVar122;
        auVar48[5] = uVar35;
        auVar48[6] = uVar36;
        auVar48[7] = uVar37;
        auVar48[8] = uVar38;
        auVar48[9] = uVar39;
        auVar48[10] = uVar40;
        auVar48[0xb] = uVar41;
        auVar48[0xc] = uVar42;
        auVar48[0xd] = uVar43;
        auVar48[0xe] = uVar44;
        auVar48[0xf] = uVar45;
        auVar49[4] = uVar34;
        auVar49._0_4_ = iVar122;
        auVar49[5] = uVar35;
        auVar49[6] = uVar36;
        auVar49[7] = uVar37;
        auVar49[8] = uVar38;
        auVar49[9] = uVar39;
        auVar49[10] = uVar40;
        auVar49[0xb] = uVar41;
        auVar49[0xc] = uVar42;
        auVar49[0xd] = uVar43;
        auVar49[0xe] = uVar44;
        auVar49[0xf] = uVar45;
        NEON_ext(auVar48,auVar49,8,1);
        if (CONCAT13(uVar42,CONCAT12(uVar38,CONCAT11(uVar34,(char)iVar122))) != -1) {
          fVar123 = fVar105 - fVar123;
          fVar126 = fVar110 - fVar126;
          fVar128 = fVar112 - fVar128;
          fVar130 = fVar119 - fVar130;
          bVar85 = (byte)(iVar127 >> 0x1f);
          fVar60 = (float)CONCAT13(bVar85 & (byte)((uint)fVar123 >> 0x18),
                                   CONCAT12(bVar85 & (byte)((uint)fVar123 >> 0x10),
                                            CONCAT11(bVar85 & (byte)((uint)fVar123 >> 8),
                                                     bVar85 & SUB41(fVar123,0))));
          bVar85 = (byte)(iVar129 >> 0x1f);
          bVar89 = (byte)(iVar134 >> 0x1f);
          fVar66 = (float)CONCAT13(bVar89 & (byte)((uint)fVar128 >> 0x18),
                                   CONCAT12(bVar89 & (byte)((uint)fVar128 >> 0x10),
                                            CONCAT11(bVar89 & (byte)((uint)fVar128 >> 8),
                                                     bVar89 & SUB41(fVar128,0))));
          bVar89 = (byte)(iVar136 >> 0x1f);
          auVar87._0_4_ = fVar116 * fVar60;
          fVar63 = (float)(CONCAT17(bVar85 & (byte)((uint)fVar126 >> 0x18),
                                    CONCAT16(bVar85 & (byte)((uint)fVar126 >> 0x10),
                                             CONCAT15(bVar85 & (byte)((uint)fVar126 >> 8),
                                                      CONCAT14(bVar85 & SUB41(fVar126,0),fVar60))))
                          >> 0x20);
          auVar87._4_4_ = fVar117 * fVar63;
          auVar87._8_4_ = fVar118 * fVar66;
          fVar114 = (float)(CONCAT17(bVar89 & (byte)((uint)fVar130 >> 0x18),
                                     CONCAT16(bVar89 & (byte)((uint)fVar130 >> 0x10),
                                              CONCAT15(bVar89 & (byte)((uint)fVar130 >> 8),
                                                       CONCAT14(bVar89 & SUB41(fVar130,0),fVar66))))
                           >> 0x20);
          auVar87._12_4_ = fVar121 * fVar114;
          auVar48 = NEON_frecpe(auVar87,4);
          auVar46 = NEON_frecps(auVar87,auVar48,4);
          auVar93._0_4_ = -(uint)(fVar55 < fVar60);
          auVar93._4_4_ = -(uint)(fVar55 < fVar63);
          auVar93._8_4_ = -(uint)(fVar55 < fVar66);
          auVar93._12_4_ = -(uint)(fVar55 < fVar114);
          auVar88._0_4_ = fVar105 - fVar106 * auVar48._0_4_ * auVar46._0_4_;
          auVar88._4_4_ = fVar110 - fVar111 * auVar48._4_4_ * auVar46._4_4_;
          auVar88._8_4_ = fVar112 - fVar113 * auVar48._8_4_ * auVar46._8_4_;
          auVar88._12_4_ = fVar119 - fVar115 * auVar48._12_4_ * auVar46._12_4_;
          auVar48 = auVar11 ^ (auVar11 ^ auVar88) & auVar93;
          auVar46 = NEON_frecpe(auVar48,4);
          auVar48 = NEON_frecps(auVar48,auVar46,4);
          fVar60 = auVar46._0_4_ * auVar48._0_4_ * fVar60;
          fVar63 = auVar46._4_4_ * auVar48._4_4_ * fVar63;
          fVar66 = auVar46._8_4_ * auVar48._8_4_ * fVar66;
          fVar114 = auVar46._12_4_ * auVar48._12_4_ * fVar114;
          fVar56 = fVar56 + (fVar97 - fVar56) * fVar60;
          fVar57 = fVar57 + (fVar98 - fVar57) * fVar63;
          fVar58 = fVar58 + (fVar99 - fVar58) * fVar66;
          fVar59 = fVar59 + (fVar100 - fVar59) * fVar114;
          fVar26 = fVar26 + (fVar92 - fVar26) * fVar60;
          fVar27 = fVar27 + (fVar94 - fVar27) * fVar63;
          fVar28 = fVar28 + (fVar95 - fVar28) * fVar66;
          fVar29 = fVar29 + (fVar96 - fVar29) * fVar114;
          fVar30 = fVar30 + (fVar101 - fVar30) * fVar60;
          fVar31 = fVar31 + (fVar102 - fVar31) * fVar63;
          fVar32 = fVar32 + (fVar103 - fVar32) * fVar66;
          fVar33 = fVar33 + (fVar104 - fVar33) * fVar114;
          uVar13 = CONCAT44(fVar131 + fVar57,fVar131 + fVar56);
          uVar17 = CONCAT44(fVar131 + fVar59,fVar131 + fVar58);
          uVar19 = CONCAT44(fVar132 + fVar27,fVar132 + fVar26);
          uVar23 = CONCAT44(fVar132 + fVar29,fVar132 + fVar28);
          uVar24 = CONCAT44(fVar133 + fVar31,fVar133 + fVar30);
          uVar25 = CONCAT44(fVar133 + fVar33,fVar133 + fVar32);
          param_4[1] = uVar17;
          *param_4 = uVar13;
          param_4[3] = uVar23;
          param_4[2] = uVar19;
          param_4[5] = uVar25;
          param_4[4] = uVar24;
          fVar55 = *(float *)puVar5;
          auVar86._0_4_ = fVar30 * fVar30 + fVar26 * fVar26 + fVar56 * fVar56 + fVar55;
          auVar86._4_4_ = fVar31 * fVar31 + fVar27 * fVar27 + fVar57 * fVar57 + fVar55;
          auVar86._8_4_ = fVar32 * fVar32 + fVar28 * fVar28 + fVar58 * fVar58 + fVar55;
          auVar86._12_4_ = fVar33 * fVar33 + fVar29 * fVar29 + fVar59 * fVar59 + fVar55;
        }
        auVar46 = NEON_frsqrte(auVar86,4);
        uVar7 = uVar7 - 1 & uVar7;
        auVar84._0_4_ = auVar86._0_4_ * auVar46._0_4_;
        auVar84._4_4_ = auVar86._4_4_ * auVar46._4_4_;
        auVar84._8_4_ = auVar86._8_4_ * auVar46._8_4_;
        auVar84._12_4_ = auVar86._12_4_ * auVar46._12_4_;
        auVar48 = NEON_frsqrts(auVar84,auVar46,4);
        fVar105 = fVar105 - fVar135 * auVar46._0_4_ * auVar48._0_4_;
        fVar110 = fVar110 - fVar135 * auVar46._4_4_ * auVar48._4_4_;
        fVar112 = fVar112 - fVar135 * auVar46._8_4_ * auVar48._8_4_;
        fVar119 = fVar119 - fVar135 * auVar46._12_4_ * auVar48._12_4_;
        auVar71._0_4_ = -(uint)(fVar105 < 0.0);
        auVar71._4_4_ = -(uint)(fVar110 < 0.0);
        auVar71._8_4_ = -(uint)(fVar112 < 0.0);
        auVar71._12_4_ = -(uint)(fVar119 < 0.0);
        NEON_ext(auVar71,auVar71,8,1);
        bVar85 = (byte)auVar71._0_4_;
        bVar89 = (byte)auVar71._4_4_;
        bVar90 = (byte)auVar71._8_4_;
        bVar91 = (byte)auVar71._12_4_;
        if (CONCAT13(bVar91,CONCAT12(bVar90,CONCAT11(bVar89,bVar85))) != 0) break;
        if (uVar7 == 0) {
          return;
        }
      }
      bVar72 = (byte)((uint)auVar71._0_4_ >> 8);
      bVar73 = (byte)((uint)auVar71._0_4_ >> 0x10);
      bVar74 = (byte)((uint)auVar71._0_4_ >> 0x18);
      fVar114 = (float)CONCAT13(bVar74 & auVar11[3],
                                CONCAT12(bVar73 & auVar11[2],
                                         CONCAT11(bVar72 & auVar11[1],bVar85 & auVar11[0])));
      bVar75 = (byte)((uint)auVar71._4_4_ >> 8);
      bVar76 = (byte)((uint)auVar71._4_4_ >> 0x10);
      bVar77 = (byte)((uint)auVar71._4_4_ >> 0x18);
      bVar78 = (byte)((uint)auVar71._8_4_ >> 8);
      bVar79 = (byte)((uint)auVar71._8_4_ >> 0x10);
      bVar80 = (byte)((uint)auVar71._8_4_ >> 0x18);
      fVar120 = (float)CONCAT13(bVar80 & auVar11[0xb],
                                CONCAT12(bVar79 & auVar11[10],
                                         CONCAT11(bVar78 & auVar11[9],bVar90 & auVar11[8])));
      bVar81 = (byte)((uint)auVar71._12_4_ >> 8);
      bVar82 = (byte)((uint)auVar71._12_4_ >> 0x10);
      bVar83 = (byte)((uint)auVar71._12_4_ >> 0x18);
      fVar55 = (float)CONCAT13(bVar74 & (byte)((uint)fVar105 >> 0x18),
                               CONCAT12(bVar73 & (byte)((uint)fVar105 >> 0x10),
                                        CONCAT11(bVar72 & (byte)((uint)fVar105 >> 8),
                                                 bVar85 & SUB41(fVar105,0))));
      fVar63 = (float)CONCAT13(bVar80 & (byte)((uint)fVar112 >> 0x18),
                               CONCAT12(bVar79 & (byte)((uint)fVar112 >> 0x10),
                                        CONCAT11(bVar78 & (byte)((uint)fVar112 >> 8),
                                                 bVar90 & SUB41(fVar112,0))));
      fVar60 = (float)(CONCAT17(bVar77 & (byte)((uint)fVar110 >> 0x18),
                                CONCAT16(bVar76 & (byte)((uint)fVar110 >> 0x10),
                                         CONCAT15(bVar75 & (byte)((uint)fVar110 >> 8),
                                                  CONCAT14(bVar89 & SUB41(fVar110,0),fVar55)))) >>
                      0x20);
      fVar66 = (float)(CONCAT17(bVar83 & (byte)((uint)fVar119 >> 0x18),
                                CONCAT16(bVar82 & (byte)((uint)fVar119 >> 0x10),
                                         CONCAT15(bVar81 & (byte)((uint)fVar119 >> 8),
                                                  CONCAT14(bVar91 & SUB41(fVar119,0),fVar63)))) >>
                      0x20);
      param_5[0xd] = CONCAT44((float)((ulong)param_5[0xd] >> 0x20) +
                              (float)(CONCAT17(bVar83 & auVar11[0xf],
                                               CONCAT16(bVar82 & auVar11[0xe],
                                                        CONCAT15(bVar81 & auVar11[0xd],
                                                                 CONCAT14(bVar91 & auVar11[0xc],
                                                                          fVar120)))) >> 0x20),
                              (float)param_5[0xd] + fVar120);
      param_5[0xc] = CONCAT44((float)((ulong)param_5[0xc] >> 0x20) +
                              (float)(CONCAT17(bVar77 & auVar11[7],
                                               CONCAT16(bVar76 & auVar11[6],
                                                        CONCAT15(bVar75 & auVar11[5],
                                                                 CONCAT14(bVar89 & auVar11[4],
                                                                          fVar114)))) >> 0x20),
                              (float)param_5[0xc] + fVar114);
      param_5[1] = CONCAT44((float)((ulong)param_5[1] >> 0x20) - fVar59 * fVar66,
                            (float)param_5[1] - fVar58 * fVar63);
      *param_5 = CONCAT44((float)((ulong)*param_5 >> 0x20) - fVar57 * fVar60,
                          (float)*param_5 - fVar56 * fVar55);
      param_5[3] = CONCAT44((float)((ulong)param_5[3] >> 0x20) - fVar29 * fVar66,
                            (float)param_5[3] - fVar28 * fVar63);
      param_5[2] = CONCAT44((float)((ulong)param_5[2] >> 0x20) - fVar27 * fVar60,
                            (float)param_5[2] - fVar26 * fVar55);
      param_5[5] = CONCAT44((float)((ulong)param_5[5] >> 0x20) - fVar33 * fVar66,
                            (float)param_5[5] - fVar32 * fVar63);
      param_5[4] = CONCAT44((float)((ulong)param_5[4] >> 0x20) - fVar31 * fVar60,
                            (float)param_5[4] - fVar30 * fVar55);
      if (0.0 < fVar3) {
        bVar18 = SUB41(fVar65,0);
        bVar20 = (byte)((uint)fVar65 >> 8);
        bVar21 = (byte)((uint)fVar65 >> 0x10);
        bVar22 = (byte)((uint)fVar65 >> 0x18);
        fVar63 = (float)CONCAT13(bVar74 & bVar22,
                                 CONCAT12(bVar73 & bVar21,CONCAT11(bVar72 & bVar20,bVar85 & bVar18))
                                );
        fVar66 = (float)CONCAT13(bVar80 & bVar22,
                                 CONCAT12(bVar79 & bVar21,CONCAT11(bVar78 & bVar20,bVar90 & bVar18))
                                );
        bVar12 = SUB41(fVar62,0);
        bVar14 = (byte)((uint)fVar62 >> 8);
        bVar15 = (byte)((uint)fVar62 >> 0x10);
        bVar16 = (byte)((uint)fVar62 >> 0x18);
        fVar55 = (float)CONCAT13(bVar74 & bVar16,
                                 CONCAT12(bVar73 & bVar15,CONCAT11(bVar72 & bVar14,bVar85 & bVar12))
                                );
        fVar60 = (float)CONCAT13(bVar80 & bVar16,
                                 CONCAT12(bVar79 & bVar15,CONCAT11(bVar78 & bVar14,bVar90 & bVar12))
                                );
        param_5[7] = CONCAT44((float)((ulong)param_5[7] >> 0x20) +
                              (float)(CONCAT17(bVar83 & bVar16,
                                               CONCAT16(bVar82 & bVar15,
                                                        CONCAT15(bVar81 & bVar14,
                                                                 CONCAT14(bVar91 & bVar12,fVar60))))
                                     >> 0x20),(float)param_5[7] + fVar60);
        param_5[6] = CONCAT44((float)((ulong)param_5[6] >> 0x20) +
                              (float)(CONCAT17(bVar77 & bVar16,
                                               CONCAT16(bVar76 & bVar15,
                                                        CONCAT15(bVar75 & bVar14,
                                                                 CONCAT14(bVar89 & bVar12,fVar55))))
                                     >> 0x20),(float)param_5[6] + fVar55);
        param_5[9] = CONCAT44((float)((ulong)param_5[9] >> 0x20) +
                              (float)(CONCAT17(bVar83 & bVar22,
                                               CONCAT16(bVar82 & bVar21,
                                                        CONCAT15(bVar81 & bVar20,
                                                                 CONCAT14(bVar91 & bVar18,fVar66))))
                                     >> 0x20),(float)param_5[9] + fVar66);
        param_5[8] = CONCAT44((float)((ulong)param_5[8] >> 0x20) +
                              (float)(CONCAT17(bVar77 & bVar22,
                                               CONCAT16(bVar76 & bVar21,
                                                        CONCAT15(bVar75 & bVar20,
                                                                 CONCAT14(bVar89 & bVar18,fVar63))))
                                     >> 0x20),(float)param_5[8] + fVar63);
        bVar12 = SUB41(fVar68,0);
        bVar14 = (byte)((uint)fVar68 >> 8);
        bVar15 = (byte)((uint)fVar68 >> 0x10);
        bVar16 = (byte)((uint)fVar68 >> 0x18);
        fVar55 = (float)CONCAT13(bVar74 & bVar16,
                                 CONCAT12(bVar73 & bVar15,CONCAT11(bVar72 & bVar14,bVar85 & bVar12))
                                );
        fVar60 = (float)CONCAT13(bVar80 & bVar16,
                                 CONCAT12(bVar79 & bVar15,CONCAT11(bVar78 & bVar14,bVar90 & bVar12))
                                );
        param_5[0xb] = CONCAT44((float)((ulong)param_5[0xb] >> 0x20) +
                                (float)(CONCAT17(bVar83 & bVar16,
                                                 CONCAT16(bVar82 & bVar15,
                                                          CONCAT15(bVar81 & bVar14,
                                                                   CONCAT14(bVar91 & bVar12,fVar60))
                                                         )) >> 0x20),(float)param_5[0xb] + fVar60);
        param_5[10] = CONCAT44((float)((ulong)param_5[10] >> 0x20) +
                               (float)(CONCAT17(bVar77 & bVar16,
                                                CONCAT16(bVar76 & bVar15,
                                                         CONCAT15(bVar75 & bVar14,
                                                                  CONCAT14(bVar89 & bVar12,fVar55)))
                                               ) >> 0x20),(float)param_5[10] + fVar55);
      }
    } while (uVar7 != 0);
  }
  return;
}


