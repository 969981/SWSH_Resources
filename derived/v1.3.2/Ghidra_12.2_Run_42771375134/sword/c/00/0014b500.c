/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014b500; name: FUN_0014b500
 */


undefined1  [16]
FUN_0014b500(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,undefined8 *param_4,
            float *param_5,float *param_6)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  byte bVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  byte bVar31;
  byte bVar32;
  byte bVar34;
  float fVar35;
  byte bVar36;
  byte bVar37;
  undefined1 auVar25 [16];
  byte bVar33;
  byte bVar38;
  undefined1 auVar26 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  byte bVar55;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  float fVar59;
  undefined1 auVar60 [12];
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  int iVar72;
  int iVar75;
  int iVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  int iVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar84;
  undefined8 uVar83;
  float fVar85;
  float fVar87;
  undefined8 uVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  byte bVar96;
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
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined1 auVar119 [16];
  byte bVar123;
  byte bVar127;
  byte bVar128;
  float fVar124;
  float fVar125;
  byte bVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  undefined1 auVar126 [16];
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  int iVar148;
  int iVar149;
  int iVar150;
  byte bVar151;
  byte bVar153;
  byte bVar154;
  int iVar152;
  byte bVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar164;
  float fVar166;
  float fVar167;
  undefined1 auVar165 [16];
  uint uVar168;
  float fVar173;
  float fVar174;
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float fVar169;
  float fVar175;
  undefined1 auVar172 [16];
  float fVar176;
  float fVar177;
  float fVar178;
  float fVar179;
  byte bVar180;
  float fVar181;
  byte bVar184;
  float fVar185;
  byte bVar186;
  float fVar187;
  byte bVar188;
  float fVar189;
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  int iVar190;
  byte bVar192;
  byte bVar193;
  int iVar191;
  byte bVar194;
  byte bVar195;
  byte bVar197;
  byte bVar198;
  int iVar196;
  byte bVar199;
  byte bVar200;
  byte bVar202;
  byte bVar203;
  int iVar201;
  byte bVar204;
  ulong uVar205;
  byte bStack_128;
  uint local_120;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  
  lVar2 = *(long *)(param_3 + 0x1b8);
  fVar22 = *(float *)(*(long *)(param_3 + 0x1c0) + 0x188);
  lVar17 = *(long *)(param_3 + 0x1a8);
  auVar25 = FUN_0014aa70();
  puVar15 = PTR_DAT_02710df8;
  puVar14 = PTR_DAT_02710da0;
  puVar13 = PTR_DAT_02710d80;
  puVar12 = PTR_DAT_02710d68;
  auVar47 = NEON_ext(auVar25,auVar25,8,1);
  bVar21 = auVar47[0] | auVar25[0];
  bVar31 = auVar47[1] | auVar25[1];
  bVar32 = auVar47[2] | auVar25[2];
  bVar33 = auVar47[3] | auVar25[3];
  bVar34 = auVar47[4] | auVar25[4];
  bVar36 = auVar47[5] | auVar25[5];
  bVar37 = auVar47[6] | auVar25[6];
  bVar38 = auVar47[7] | auVar25[7];
  uVar43 = NEON_rev64(CONCAT17(bVar38,CONCAT16(bVar37,CONCAT15(bVar36,CONCAT14(bVar34,CONCAT13(
                                                  bVar33,CONCAT12(bVar32,CONCAT11(bVar31,bVar21)))))
                                              )),4);
  uVar168 = CONCAT13((byte)((ulong)uVar43 >> 0x18) | bVar33,
                     CONCAT12((byte)((ulong)uVar43 >> 0x10) | bVar32,
                              CONCAT11((byte)((ulong)uVar43 >> 8) | bVar31,(byte)uVar43 | bVar21)));
  auVar47._0_8_ =
       CONCAT17((byte)((ulong)uVar43 >> 0x38) | bVar38,
                CONCAT16((byte)((ulong)uVar43 >> 0x30) | bVar37,
                         CONCAT15((byte)((ulong)uVar43 >> 0x28) | bVar36,
                                  CONCAT14((byte)((ulong)uVar43 >> 0x20) | bVar34,uVar168))));
  if (uVar168 != 0) {
    auVar47._8_8_ = auVar47._0_8_;
    auVar26 = NEON_fmov(0x3f800000,4);
    bStack_128 = auVar26[8];
    auVar62 = param_2;
    do {
      uVar3 = 0x1f - (int)LZCOUNT(uVar168 & -uVar168);
      fVar42 = *(float *)puVar13;
      uVar16 = (ulong)(uVar3 * 0x30);
      iVar152 = *(int *)puVar14;
      pfVar4 = (float *)(lVar17 + uVar16);
      fVar116 = *pfVar4;
      fVar100 = pfVar4[1];
      fVar108 = pfVar4[2];
      fVar58 = pfVar4[3];
      pfVar4 = (float *)(lVar17 + 0x10 + uVar16);
      fVar173 = *pfVar4;
      fVar174 = pfVar4[1];
      fVar175 = pfVar4[2];
      fVar57 = pfVar4[3];
      pfVar4 = (float *)(lVar2 + uVar16);
      fVar8 = *pfVar4;
      fVar9 = pfVar4[1];
      fVar10 = pfVar4[2];
      fVar11 = pfVar4[3];
      fVar110 = (float)*param_4 - fVar116;
      fVar112 = (float)((ulong)*param_4 >> 0x20) - fVar116;
      fVar114 = (float)param_4[1] - fVar116;
      fVar116 = (float)((ulong)param_4[1] >> 0x20) - fVar116;
      fVar97 = (float)param_4[2] - fVar100;
      fVar98 = (float)((ulong)param_4[2] >> 0x20) - fVar100;
      fVar99 = (float)param_4[3] - fVar100;
      fVar100 = (float)((ulong)param_4[3] >> 0x20) - fVar100;
      fVar102 = (float)param_4[4] - fVar108;
      fVar104 = (float)((ulong)param_4[4] >> 0x20) - fVar108;
      fVar106 = (float)param_4[5] - fVar108;
      fVar108 = (float)((ulong)param_4[5] >> 0x20) - fVar108;
      fVar59 = fVar97 * fVar175 - fVar102 * fVar174;
      fVar64 = fVar98 * fVar175 - fVar104 * fVar174;
      fVar65 = fVar99 * fVar175 - fVar106 * fVar174;
      fVar66 = fVar100 * fVar175 - fVar108 * fVar174;
      fVar124 = fVar102 * fVar173 - fVar110 * fVar175;
      fVar130 = fVar104 * fVar173 - fVar112 * fVar175;
      fVar132 = fVar106 * fVar173 - fVar114 * fVar175;
      fVar134 = fVar108 * fVar173 - fVar116 * fVar175;
      fVar136 = fVar110 * fVar174 - fVar97 * fVar173;
      fVar137 = fVar112 * fVar174 - fVar98 * fVar173;
      fVar138 = fVar114 * fVar174 - fVar99 * fVar173;
      fVar139 = fVar116 * fVar174 - fVar100 * fVar173;
      fVar78 = (float)*(undefined8 *)param_5 - fVar8;
      fVar79 = (float)((ulong)*(undefined8 *)param_5 >> 0x20) - fVar8;
      fVar80 = (float)*(undefined8 *)(param_5 + 2) - fVar8;
      fVar81 = (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) - fVar8;
      fVar82 = (float)*(undefined8 *)(param_5 + 4) - fVar9;
      fVar84 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) - fVar9;
      fVar85 = (float)*(undefined8 *)(param_5 + 6) - fVar9;
      fVar87 = (float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20) - fVar9;
      auVar48._0_4_ = fVar58 + (fVar110 * fVar173 + fVar97 * fVar174 + fVar102 * fVar175) * fVar57;
      auVar48._4_4_ = fVar58 + (fVar112 * fVar173 + fVar98 * fVar174 + fVar104 * fVar175) * fVar57;
      auVar48._8_4_ = fVar58 + (fVar114 * fVar173 + fVar99 * fVar174 + fVar106 * fVar175) * fVar57;
      auVar48._12_4_ = fVar58 + (fVar116 * fVar173 + fVar100 * fVar174 + fVar108 * fVar175) * fVar57
      ;
      puVar5 = (undefined8 *)(lVar2 + 0x10 + uVar16);
      uVar70 = puVar5[1];
      uVar43 = *puVar5;
      fVar88 = (float)*(undefined8 *)(param_5 + 8) - fVar10;
      fVar89 = (float)((ulong)*(undefined8 *)(param_5 + 8) >> 0x20) - fVar10;
      fVar90 = (float)*(undefined8 *)(param_5 + 10) - fVar10;
      fVar91 = (float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20) - fVar10;
      fVar69 = (float)uVar70;
      local_120 = auVar25._0_4_;
      uStack_11c = auVar25._4_4_;
      uStack_118 = auVar25._8_4_;
      uStack_114 = auVar25._12_4_;
      auVar49 = NEON_fmax(auVar48,ZEXT816(0),4);
      fVar68 = (float)((ulong)uVar43 >> 0x20);
      fVar58 = fVar82 * fVar69 - fVar88 * fVar68;
      fVar41 = fVar84 * fVar69 - fVar89 * fVar68;
      fVar169 = fVar85 * fVar69 - fVar90 * fVar68;
      fVar56 = fVar87 * fVar69 - fVar91 * fVar68;
      fVar67 = (float)uVar43;
      fVar156 = fVar88 * fVar67 - fVar78 * fVar69;
      fVar158 = fVar89 * fVar67 - fVar79 * fVar69;
      fVar160 = fVar90 * fVar67 - fVar80 * fVar69;
      fVar162 = fVar91 * fVar67 - fVar81 * fVar69;
      fVar181 = fVar78 * fVar68 - fVar82 * fVar67;
      fVar185 = fVar79 * fVar68 - fVar84 * fVar67;
      fVar187 = fVar80 * fVar68 - fVar85 * fVar67;
      fVar189 = fVar81 * fVar68 - fVar87 * fVar67;
      fVar118 = fVar78 * fVar67 + fVar82 * fVar68 + fVar88 * fVar69;
      fVar120 = fVar79 * fVar67 + fVar84 * fVar68 + fVar89 * fVar69;
      fVar121 = fVar80 * fVar67 + fVar85 * fVar68 + fVar90 * fVar69;
      fVar122 = fVar81 * fVar67 + fVar87 * fVar68 + fVar91 * fVar69;
      fVar71 = (float)((ulong)uVar70 >> 0x20);
      auVar141._0_4_ = fVar11 + fVar118 * fVar71;
      auVar141._4_4_ = fVar11 + fVar120 * fVar71;
      auVar141._8_4_ = fVar11 + fVar121 * fVar71;
      auVar141._12_4_ = fVar11 + fVar122 * fVar71;
      auVar142 = NEON_fmax(auVar141,ZEXT816(0),4);
      fVar176 = fVar181 * fVar181 + fVar156 * fVar156 + fVar42 + fVar58 * fVar58;
      fVar177 = fVar185 * fVar185 + fVar158 * fVar158 + fVar42 + fVar41 * fVar41;
      fVar178 = fVar187 * fVar187 + fVar160 * fVar160 + fVar42 + fVar169 * fVar169;
      fVar179 = fVar189 * fVar189 + fVar162 * fVar162 + fVar42 + fVar56 * fVar56;
      iVar148 = auVar47._0_4_ - iVar152;
      iVar149 = auVar47._4_4_ - iVar152;
      iVar150 = auVar47._8_4_ - iVar152;
      iVar152 = auVar47._12_4_ - iVar152;
      bVar21 = (byte)((uint)iVar148 >> 8);
      bVar31 = (byte)((uint)iVar148 >> 0x10);
      bVar32 = (byte)((uint)iVar148 >> 0x18);
      bVar33 = (byte)((uint)iVar149 >> 8);
      bVar34 = (byte)((uint)iVar149 >> 0x10);
      bVar36 = (byte)((uint)iVar149 >> 0x18);
      bVar37 = (byte)((uint)iVar150 >> 8);
      bVar38 = (byte)((uint)iVar150 >> 0x10);
      bVar151 = (byte)((uint)iVar150 >> 0x18);
      bVar153 = (byte)((uint)iVar152 >> 8);
      bVar154 = (byte)((uint)iVar152 >> 0x10);
      bVar155 = (byte)((uint)iVar152 >> 0x18);
      iVar190 = -(uint)((local_120 &
                        CONCAT13(~bVar32,CONCAT12(~bVar31,CONCAT11(~bVar21,~(byte)iVar148)))) != 0);
      iVar191 = -(uint)((uStack_11c &
                        CONCAT13(~bVar36,CONCAT12(~bVar34,CONCAT11(~bVar33,~(byte)iVar149)))) != 0);
      iVar196 = -(uint)((uStack_118 &
                        CONCAT13(~bVar151,CONCAT12(~bVar38,CONCAT11(~bVar37,~(byte)iVar150)))) != 0)
      ;
      iVar201 = -(uint)((uStack_114 &
                        CONCAT13(~bVar155,CONCAT12(~bVar154,CONCAT11(~bVar153,~(byte)iVar152)))) !=
                       0);
      bVar55 = (byte)iVar190;
      bVar123 = (byte)((uint)iVar190 >> 8);
      bVar127 = (byte)((uint)iVar190 >> 0x10);
      bVar128 = (byte)((uint)iVar190 >> 0x18);
      fVar125 = (float)CONCAT13(auVar49[3] & bVar128,
                                CONCAT12(auVar49[2] & bVar127,
                                         CONCAT11(auVar49[1] & bVar123,auVar49[0] & bVar55)));
      bVar129 = (byte)iVar191;
      bVar192 = (byte)((uint)iVar191 >> 8);
      bVar193 = (byte)((uint)iVar191 >> 0x10);
      bVar194 = (byte)((uint)iVar191 >> 0x18);
      auVar44._0_8_ =
           CONCAT17(auVar49[7] & bVar194,
                    CONCAT16(auVar49[6] & bVar193,
                             CONCAT15(auVar49[5] & bVar192,CONCAT14(auVar49[4] & bVar129,fVar125))))
      ;
      bVar195 = (byte)iVar196;
      auVar44[8] = auVar49[8] & bVar195;
      bVar197 = (byte)((uint)iVar196 >> 8);
      auVar44[9] = auVar49[9] & bVar197;
      bVar198 = (byte)((uint)iVar196 >> 0x10);
      auVar44[10] = auVar49[10] & bVar198;
      bVar199 = (byte)((uint)iVar196 >> 0x18);
      auVar44[0xb] = auVar49[0xb] & bVar199;
      bVar200 = (byte)iVar201;
      auVar50[0xc] = auVar49[0xc] & bVar200;
      auVar50._0_12_ = auVar44;
      bVar202 = (byte)((uint)iVar201 >> 8);
      auVar50[0xd] = auVar49[0xd] & bVar202;
      bVar203 = (byte)((uint)iVar201 >> 0x10);
      auVar50[0xe] = auVar49[0xe] & bVar203;
      bVar204 = (byte)((uint)iVar201 >> 0x18);
      auVar50[0xf] = auVar49[0xf] & bVar204;
      fVar157 = (float)CONCAT13(auVar142[3] & bVar128,
                                CONCAT12(auVar142[2] & bVar127,
                                         CONCAT11(auVar142[1] & bVar123,auVar142[0] & bVar55)));
      fVar159 = (float)CONCAT13(auVar142[7] & bVar194,
                                CONCAT12(auVar142[6] & bVar193,
                                         CONCAT11(auVar142[5] & bVar192,auVar142[4] & bVar129)));
      fVar161 = (float)CONCAT13(auVar142[0xb] & bVar199,
                                CONCAT12(auVar142[10] & bVar198,
                                         CONCAT11(auVar142[9] & bVar197,auVar142[8] & bVar195)));
      fVar163 = (float)CONCAT13(auVar142[0xf] & bVar204,
                                CONCAT12(auVar142[0xe] & bVar203,
                                         CONCAT11(auVar142[0xd] & bVar202,auVar142[0xc] & bVar200)))
      ;
      fVar131 = (float)((ulong)auVar44._0_8_ >> 0x20);
      fVar133 = auVar44._8_4_;
      fVar135 = auVar50._12_4_;
      fVar92 = fVar157 * fVar157;
      fVar93 = fVar159 * fVar159;
      fVar94 = fVar161 * fVar161;
      fVar95 = fVar163 * fVar163;
      fVar23 = (fVar136 * fVar136 + fVar59 * fVar59 + fVar124 * fVar124) - fVar125 * fVar125;
      fVar35 = (fVar137 * fVar137 + fVar64 * fVar64 + fVar130 * fVar130) - fVar131 * fVar131;
      fVar39 = (fVar138 * fVar138 + fVar65 * fVar65 + fVar132 * fVar132) - fVar133 * fVar133;
      fVar40 = (fVar139 * fVar139 + fVar66 * fVar66 + fVar134 * fVar134) - fVar135 * fVar135;
      fVar124 = (fVar136 * fVar181 + fVar59 * fVar58 + fVar124 * fVar156) - fVar125 * fVar157;
      fVar130 = (fVar137 * fVar185 + fVar64 * fVar41 + fVar130 * fVar158) - fVar131 * fVar159;
      fVar132 = (fVar138 * fVar187 + fVar65 * fVar169 + fVar132 * fVar160) - fVar133 * fVar161;
      fVar134 = (fVar139 * fVar189 + fVar66 * fVar56 + fVar134 * fVar162) - fVar135 * fVar163;
      fVar59 = fVar124 - fVar23;
      fVar64 = fVar130 - fVar35;
      fVar65 = fVar132 - fVar39;
      fVar66 = fVar134 - fVar40;
      fVar58 = fVar124 * fVar124 - fVar23 * (fVar176 - fVar92);
      fVar41 = fVar130 * fVar130 - fVar35 * (fVar177 - fVar93);
      fVar169 = fVar132 * fVar132 - fVar39 * (fVar178 - fVar94);
      fVar56 = fVar134 * fVar134 - fVar40 * (fVar179 - fVar95);
      auVar143._4_2_ = SUB42(fVar41,0);
      auVar143._0_4_ = fVar58;
      auVar143._6_2_ = (short)((uint)fVar41 >> 0x10);
      auVar143._8_2_ = SUB42(fVar169,0);
      auVar143._10_2_ = (short)((uint)fVar169 >> 0x10);
      auVar143._12_2_ = SUB42(fVar56,0);
      auVar143._14_2_ = (short)((uint)fVar56 >> 0x10);
      auVar143 = NEON_frsqrte(auVar143,4);
      auVar182._0_4_ = auVar143._0_4_ * fVar58;
      auVar182._4_4_ = auVar143._4_4_ * fVar41;
      auVar182._8_4_ = auVar143._8_4_ * fVar169;
      auVar182._12_4_ = auVar143._12_4_ * fVar56;
      fVar124 = (fVar124 - (fVar176 - fVar92)) + fVar59;
      fVar130 = (fVar130 - (fVar177 - fVar93)) + fVar64;
      fVar132 = (fVar132 - (fVar178 - fVar94)) + fVar65;
      fVar134 = (fVar134 - (fVar179 - fVar95)) + fVar66;
      auVar183 = NEON_frsqrts(auVar182,auVar143,4);
      auVar49._4_4_ = fVar130;
      auVar49._0_4_ = fVar124;
      auVar49._8_4_ = fVar132;
      auVar49._12_4_ = fVar134;
      auVar49 = NEON_frecpe(auVar49,4);
      auVar142._4_4_ = fVar130;
      auVar142._0_4_ = fVar124;
      auVar142._8_4_ = fVar132;
      auVar142._12_4_ = fVar134;
      auVar142 = NEON_frecps(auVar142,auVar49,4);
      iVar190 = -(uint)(0.0 < fVar58);
      iVar191 = -(uint)(0.0 < fVar41);
      iVar196 = -(uint)(0.0 < fVar169);
      iVar201 = -(uint)(0.0 < fVar56);
      fVar23 = auVar143._0_4_ * auVar183._0_4_ * fVar58;
      fVar35 = auVar143._4_4_ * auVar183._4_4_ * fVar41;
      fVar39 = auVar143._8_4_ * auVar183._8_4_ * fVar169;
      fVar40 = auVar143._12_4_ * auVar183._12_4_ * fVar56;
      fVar136 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & (byte)((uint)iVar190 >> 0x18),
                                CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                         (byte)((uint)iVar190 >> 0x10),
                                         CONCAT11((byte)((uint)fVar23 >> 8) &
                                                  (byte)((uint)iVar190 >> 8),
                                                  SUB41(fVar23,0) & (byte)iVar190)));
      fVar138 = (float)CONCAT13((byte)((uint)fVar39 >> 0x18) & (byte)((uint)iVar196 >> 0x18),
                                CONCAT12((byte)((uint)fVar39 >> 0x10) &
                                         (byte)((uint)iVar196 >> 0x10),
                                         CONCAT11((byte)((uint)fVar39 >> 8) &
                                                  (byte)((uint)iVar196 >> 8),
                                                  SUB41(fVar39,0) & (byte)iVar196)));
      auVar126._0_4_ = fVar59 + fVar136;
      fVar137 = (float)(CONCAT17((byte)((uint)fVar35 >> 0x18) & (byte)((uint)iVar191 >> 0x18),
                                 CONCAT16((byte)((uint)fVar35 >> 0x10) &
                                          (byte)((uint)iVar191 >> 0x10),
                                          CONCAT15((byte)((uint)fVar35 >> 8) &
                                                   (byte)((uint)iVar191 >> 8),
                                                   CONCAT14(SUB41(fVar35,0) & (byte)iVar191,fVar136)
                                                  ))) >> 0x20);
      auVar126._4_4_ = fVar64 + fVar137;
      auVar126._8_4_ = fVar65 + fVar138;
      fVar139 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & (byte)((uint)iVar201 >> 0x18),
                                 CONCAT16((byte)((uint)fVar40 >> 0x10) &
                                          (byte)((uint)iVar201 >> 0x10),
                                          CONCAT15((byte)((uint)fVar40 >> 8) &
                                                   (byte)((uint)iVar201 >> 8),
                                                   CONCAT14(SUB41(fVar40,0) & (byte)iVar201,fVar138)
                                                  ))) >> 0x20);
      auVar126._12_4_ = fVar66 + fVar139;
      auVar143 = NEON_fmin(ZEXT816(0),auVar126,4);
      fVar156 = auVar49._0_4_ * auVar142._0_4_ * auVar143._0_4_;
      fVar158 = auVar49._4_4_ * auVar142._4_4_ * auVar143._4_4_;
      fVar160 = auVar49._8_4_ * auVar142._8_4_ * auVar143._8_4_;
      fVar162 = auVar49._12_4_ * auVar142._12_4_ * auVar143._12_4_;
      fVar23 = auVar26._0_4_;
      fVar35 = auVar26._4_4_;
      fVar39 = auVar26._8_4_;
      fVar40 = auVar26._12_4_;
      fVar125 = (fVar157 - fVar125) * fVar59 * fVar124 + fVar125;
      fVar131 = (fVar159 - fVar131) * fVar64 * fVar130 + fVar131;
      fVar133 = (fVar161 - fVar133) * fVar65 * fVar132 + fVar133;
      fVar135 = (fVar163 - fVar135) * fVar66 * fVar134 + fVar135;
      puVar5 = (undefined8 *)(lVar2 + 0x20 + uVar16);
      uVar70 = puVar5[1];
      uVar43 = *puVar5;
      uVar205 = CONCAT26(-(ushort)(fVar134 < -fVar42),
                         CONCAT24(-(ushort)(fVar132 < -fVar42),
                                  CONCAT22(-(ushort)(fVar130 < -fVar42),-(ushort)(fVar124 < -fVar42)
                                          ))) &
                CONCAT26(-(ushort)(fVar162 < fVar40),
                         CONCAT24(-(ushort)(fVar160 < fVar39),
                                  CONCAT22(-(ushort)(fVar158 < fVar35),-(ushort)(fVar156 < fVar23)))
                        ) &
                CONCAT26(-(ushort)(fVar66 < fVar139),
                         CONCAT24(-(ushort)(fVar65 < fVar138),
                                  CONCAT22(-(ushort)(fVar64 < fVar137),-(ushort)(fVar59 < fVar136)))
                        ) &
                CONCAT26(-(ushort)(*(float *)(puVar15 + 0xc) * fVar135 * fVar134 * fVar135 < fVar56)
                         ,CONCAT24(-(ushort)(*(float *)(puVar15 + 8) * fVar133 * fVar132 * fVar133 <
                                            fVar169),
                                   CONCAT22(-(ushort)(*(float *)(puVar15 + 4) *
                                                      fVar131 * fVar130 * fVar131 < fVar41),
                                            -(ushort)(*(float *)puVar15 *
                                                      fVar125 * fVar124 * fVar125 < fVar58))));
      iVar190 = (uint)(ushort)uVar205 << 0x1f;
      iVar191 = (uint)(ushort)(uVar205 >> 0x10) << 0x1f;
      iVar196 = (uint)(ushort)(uVar205 >> 0x20) << 0x1f;
      iVar201 = (uint)(ushort)(uVar205 >> 0x30) << 0x1f;
      auVar183._0_4_ = -(uint)((float)(iVar190 >> 0x1f) == 0.0);
      auVar183._4_4_ = -(uint)((float)(iVar191 >> 0x1f) == 0.0);
      auVar183._8_4_ = -(uint)((float)(iVar196 >> 0x1f) == 0.0);
      auVar183._12_4_ = -(uint)((float)(iVar201 >> 0x1f) == 0.0);
      NEON_ext(auVar183,auVar183,8,1);
      bVar180 = (byte)(iVar190 >> 0x1f);
      bVar184 = (byte)(iVar191 >> 0x1f);
      bVar186 = (byte)(iVar196 >> 0x1f);
      bVar188 = (byte)(iVar201 >> 0x1f);
      fVar58 = (float)((ulong)uVar43 >> 0x20);
      if (CONCAT13((char)auVar183._12_4_,
                   CONCAT12((char)auVar183._8_4_,CONCAT11((char)auVar183._4_4_,(char)auVar183._0_4_)
                           )) != -1) {
        fVar181 = fVar67 * fVar58;
        fVar144 = fVar68 * fVar58;
        fVar146 = fVar69 * fVar58;
        fVar41 = fVar110 - (fVar110 - fVar78) * fVar156;
        fVar56 = fVar112 - (fVar112 - fVar79) * fVar158;
        fVar59 = fVar114 - (fVar114 - fVar80) * fVar160;
        fVar64 = fVar116 - (fVar116 - fVar81) * fVar162;
        fVar169 = (float)((ulong)*(undefined8 *)(lVar17 + 0x20 + uVar16) >> 0x20);
        fVar65 = fVar181 - fVar173 * fVar169;
        fVar66 = fVar144 - fVar174 * fVar169;
        fVar125 = fVar146 - fVar175 * fVar169;
        fVar111 = fVar97 - (fVar97 - fVar82) * fVar156;
        fVar113 = fVar98 - (fVar98 - fVar84) * fVar158;
        fVar115 = fVar99 - (fVar99 - fVar85) * fVar160;
        fVar117 = fVar100 - (fVar100 - fVar87) * fVar162;
        fVar103 = fVar102 - (fVar102 - fVar88) * fVar156;
        fVar105 = fVar104 - (fVar104 - fVar89) * fVar158;
        fVar107 = fVar106 - (fVar106 - fVar90) * fVar160;
        fVar109 = fVar108 - (fVar108 - fVar91) * fVar162;
        fVar185 = fVar23 - fVar156;
        fVar187 = fVar35 - fVar158;
        fVar189 = fVar39 - fVar160;
        fVar101 = fVar40 - fVar162;
        fVar131 = fVar181 - fVar185 * fVar65;
        fVar133 = fVar181 - fVar187 * fVar65;
        fVar135 = fVar181 - fVar189 * fVar65;
        fVar181 = fVar181 - fVar101 * fVar65;
        fVar164 = fVar144 - fVar185 * fVar66;
        fVar166 = fVar144 - fVar187 * fVar66;
        fVar167 = fVar144 - fVar189 * fVar66;
        fVar144 = fVar144 - fVar101 * fVar66;
        fVar140 = fVar146 - fVar185 * fVar125;
        fVar145 = fVar146 - fVar187 * fVar125;
        fVar147 = fVar146 - fVar189 * fVar125;
        fVar146 = fVar146 - fVar101 * fVar125;
        auVar170._0_4_ = fVar140 * fVar140 + fVar131 * fVar131 + fVar164 * fVar164;
        auVar170._4_4_ = fVar145 * fVar145 + fVar133 * fVar133 + fVar166 * fVar166;
        auVar170._8_4_ = fVar147 * fVar147 + fVar135 * fVar135 + fVar167 * fVar167;
        auVar170._12_4_ = fVar146 * fVar146 + fVar181 * fVar181 + fVar144 * fVar144;
        auVar49 = NEON_frsqrte(auVar170,4);
        auVar171._0_4_ = auVar49._0_4_ * auVar170._0_4_;
        auVar171._4_4_ = auVar49._4_4_ * auVar170._4_4_;
        auVar171._8_4_ = auVar49._8_4_ * auVar170._8_4_;
        auVar171._12_4_ = auVar49._12_4_ * auVar170._12_4_;
        auVar142 = NEON_frsqrts(auVar171,auVar49,4);
        fVar169 = auVar49._0_4_ * auVar142._0_4_;
        fVar173 = auVar49._4_4_ * auVar142._4_4_;
        fVar174 = auVar49._8_4_ * auVar142._8_4_;
        fVar175 = auVar49._12_4_ * auVar142._12_4_;
        fVar131 = fVar169 * (fVar103 * fVar140 + fVar41 * fVar131 + fVar111 * fVar164);
        fVar133 = fVar173 * (fVar105 * fVar145 + fVar56 * fVar133 + fVar113 * fVar166);
        fVar135 = fVar174 * (fVar107 * fVar147 + fVar59 * fVar135 + fVar115 * fVar167);
        fVar181 = fVar175 * (fVar109 * fVar146 + fVar64 * fVar181 + fVar117 * fVar144);
        auVar51._0_4_ =
             (fVar103 * fVar103 + fVar41 * fVar41 + fVar111 * fVar111) - fVar131 * fVar131;
        auVar51._4_4_ =
             (fVar105 * fVar105 + fVar56 * fVar56 + fVar113 * fVar113) - fVar133 * fVar133;
        auVar51._8_4_ =
             (fVar107 * fVar107 + fVar59 * fVar59 + fVar115 * fVar115) - fVar135 * fVar135;
        auVar51._12_4_ =
             (fVar109 * fVar109 + fVar64 * fVar64 + fVar117 * fVar117) - fVar181 * fVar181;
        auVar49 = NEON_frsqrte(auVar51,4);
        auVar165._0_4_ = auVar49._0_4_ * auVar51._0_4_;
        auVar165._4_4_ = auVar49._4_4_ * auVar51._4_4_;
        auVar165._8_4_ = auVar49._8_4_ * auVar51._8_4_;
        auVar165._12_4_ = auVar49._12_4_ * auVar51._12_4_;
        auVar142 = NEON_frsqrts(auVar165,auVar49,4);
        fVar56 = auVar49._0_4_ * auVar142._0_4_;
        fVar59 = auVar49._4_4_ * auVar142._4_4_;
        fVar41 = auVar49._8_4_ * auVar142._8_4_;
        fVar64 = auVar49._12_4_ * auVar142._12_4_;
        iVar190 = -(uint)(0.0 < auVar51._0_4_);
        iVar191 = -(uint)(0.0 < auVar51._4_4_);
        iVar196 = -(uint)(0.0 < auVar51._8_4_);
        iVar201 = -(uint)(0.0 < auVar51._12_4_);
        fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & (byte)((uint)iVar196 >> 0x18),
                                 CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                          (byte)((uint)iVar196 >> 0x10),
                                          CONCAT11((byte)((uint)fVar41 >> 8) &
                                                   (byte)((uint)iVar196 >> 8),
                                                   SUB41(fVar41,0) & (byte)iVar196)));
        fVar169 = fVar169 * (fVar131 +
                            (fVar71 * fVar156 + fVar57 * fVar185) * auVar51._0_4_ *
                            (float)CONCAT13((byte)((uint)fVar56 >> 0x18) &
                                            (byte)((uint)iVar190 >> 0x18),
                                            CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                                     (byte)((uint)iVar190 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar56 >> 8) &
                                                              (byte)((uint)iVar190 >> 8),
                                                              SUB41(fVar56,0) & (byte)iVar190))));
        fVar173 = fVar173 * (fVar133 +
                            (fVar71 * fVar158 + fVar57 * fVar187) * auVar51._4_4_ *
                            (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                            (byte)((uint)iVar191 >> 0x18),
                                            CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                     (byte)((uint)iVar191 >> 0x10),
                                                     CONCAT11((byte)((uint)fVar59 >> 8) &
                                                              (byte)((uint)iVar191 >> 8),
                                                              SUB41(fVar59,0) & (byte)iVar191))));
        fVar174 = fVar174 * (fVar135 +
                            (fVar71 * fVar160 + fVar57 * fVar189) * auVar51._8_4_ * fVar41);
        fVar175 = fVar175 * (fVar181 +
                            (fVar71 * fVar162 + fVar57 * fVar101) * auVar51._12_4_ *
                            (float)(CONCAT17((byte)((uint)fVar64 >> 0x18) &
                                             (byte)((uint)iVar201 >> 0x18),
                                             CONCAT16((byte)((uint)fVar64 >> 0x10) &
                                                      (byte)((uint)iVar201 >> 0x10),
                                                      CONCAT15((byte)((uint)fVar64 >> 8) &
                                                               (byte)((uint)iVar201 >> 8),
                                                               CONCAT14(SUB41(fVar64,0) &
                                                                        (byte)iVar201,fVar41)))) >>
                                   0x20));
        fVar41 = (float)CONCAT13((byte)((uint)fVar169 >> 0x18) & bVar180,
                                 CONCAT12((byte)((uint)fVar169 >> 0x10) & bVar180,
                                          CONCAT11((byte)((uint)fVar169 >> 8) & bVar180,
                                                   SUB41(fVar169,0) & bVar180)));
        fVar169 = (float)CONCAT13((byte)((uint)fVar173 >> 0x18) & bVar184,
                                  CONCAT12((byte)((uint)fVar173 >> 0x10) & bVar184,
                                           CONCAT11((byte)((uint)fVar173 >> 8) & bVar184,
                                                    SUB41(fVar173,0) & bVar184)));
        fVar56 = (float)CONCAT13((byte)((uint)fVar174 >> 0x18) & bVar186,
                                 CONCAT12((byte)((uint)fVar174 >> 0x10) & bVar186,
                                          CONCAT11((byte)((uint)fVar174 >> 8) & bVar186,
                                                   SUB41(fVar174,0) & bVar186)));
        fVar173 = (float)(CONCAT17((byte)((uint)fVar175 >> 0x18) & bVar188,
                                   CONCAT16((byte)((uint)fVar175 >> 0x10) & bVar188,
                                            CONCAT15((byte)((uint)fVar175 >> 8) & bVar188,
                                                     CONCAT14(SUB41(fVar175,0) & bVar188,fVar56))))
                         >> 0x20);
        uVar16 = CONCAT26(-(ushort)(ABS(fVar173) < fVar40),
                          CONCAT24(-(ushort)(ABS(fVar56) < fVar39),
                                   CONCAT22(-(ushort)(ABS(fVar169) < fVar35),
                                            -(ushort)(ABS(fVar41) < fVar23)))) & uVar205;
        iVar190 = (uint)(ushort)uVar16 << 0x1f;
        iVar191 = (uint)(ushort)(uVar16 >> 0x10) << 0x1f;
        iVar196 = (uint)(ushort)(uVar16 >> 0x20) << 0x1f;
        iVar201 = (uint)(ushort)(uVar16 >> 0x30) << 0x1f;
        auVar52._0_4_ = -(uint)((float)(iVar190 >> 0x1f) == 0.0);
        auVar52._4_4_ = -(uint)((float)(iVar191 >> 0x1f) == 0.0);
        auVar52._8_4_ = -(uint)((float)(iVar196 >> 0x1f) == 0.0);
        auVar52._12_4_ = -(uint)((float)(iVar201 >> 0x1f) == 0.0);
        NEON_ext(auVar52,auVar52,8,1);
        if (CONCAT13((char)auVar52._12_4_,
                     CONCAT12((char)auVar52._8_4_,CONCAT11((char)auVar52._4_4_,(char)auVar52._0_4_))
                    ) != -1) {
          bVar96 = (byte)(iVar190 >> 0x1f);
          fVar174 = (float)CONCAT13(bVar96 & (byte)((uint)fVar185 >> 0x18),
                                    CONCAT12(bVar96 & (byte)((uint)fVar185 >> 0x10),
                                             CONCAT11(bVar96 & (byte)((uint)fVar185 >> 8),
                                                      bVar96 & SUB41(fVar185,0))));
          bVar96 = (byte)(iVar191 >> 0x1f);
          auVar45._0_8_ =
               CONCAT17(bVar96 & (byte)((uint)fVar187 >> 0x18),
                        CONCAT16(bVar96 & (byte)((uint)fVar187 >> 0x10),
                                 CONCAT15(bVar96 & (byte)((uint)fVar187 >> 8),
                                          CONCAT14(bVar96 & SUB41(fVar187,0),fVar174))));
          bVar96 = (byte)(iVar196 >> 0x1f);
          auVar45[8] = bVar96 & SUB41(fVar189,0);
          auVar45[9] = bVar96 & (byte)((uint)fVar189 >> 8);
          auVar45[10] = bVar96 & (byte)((uint)fVar189 >> 0x10);
          auVar45[0xb] = bVar96 & (byte)((uint)fVar189 >> 0x18);
          bVar96 = (byte)(iVar201 >> 0x1f);
          auVar53[0xc] = bVar96 & SUB41(fVar101,0);
          auVar53._0_12_ = auVar45;
          auVar53[0xd] = bVar96 & (byte)((uint)fVar101 >> 8);
          auVar53[0xe] = bVar96 & (byte)((uint)fVar101 >> 0x10);
          auVar53[0xf] = bVar96 & (byte)((uint)fVar101 >> 0x18);
          auVar73._0_4_ = fVar124 * fVar174;
          fVar175 = (float)((ulong)auVar45._0_8_ >> 0x20);
          auVar73._4_4_ = fVar130 * fVar175;
          fVar57 = auVar45._8_4_;
          auVar73._8_4_ = fVar132 * fVar57;
          fVar59 = auVar53._12_4_;
          auVar73._12_4_ = fVar134 * fVar59;
          auVar142 = NEON_frecpe(auVar73,4);
          auVar49 = NEON_frecps(auVar73,auVar142,4);
          auVar119._0_4_ = -(uint)(fVar42 < fVar174);
          auVar119._4_4_ = -(uint)(fVar42 < fVar175);
          auVar119._8_4_ = -(uint)(fVar42 < fVar57);
          auVar119._12_4_ = -(uint)(fVar42 < fVar59);
          auVar74._0_4_ = fVar23 - fVar136 * auVar142._0_4_ * auVar49._0_4_;
          auVar74._4_4_ = fVar35 - fVar137 * auVar142._4_4_ * auVar49._4_4_;
          auVar74._8_4_ = fVar39 - fVar138 * auVar142._8_4_ * auVar49._8_4_;
          auVar74._12_4_ = fVar40 - fVar139 * auVar142._12_4_ * auVar49._12_4_;
          auVar142 = auVar26 ^ (auVar26 ^ auVar74) & auVar119;
          auVar49 = NEON_frecpe(auVar142,4);
          auVar142 = NEON_frecps(auVar142,auVar49,4);
          fVar174 = auVar49._0_4_ * auVar142._0_4_ * fVar174;
          fVar175 = auVar49._4_4_ * auVar142._4_4_ * fVar175;
          fVar57 = auVar49._8_4_ * auVar142._8_4_ * fVar57;
          fVar59 = auVar49._12_4_ * auVar142._12_4_ * fVar59;
          fVar78 = fVar78 + ((fVar110 - fVar78) + fVar65 * fVar41) * fVar174;
          fVar79 = fVar79 + ((fVar112 - fVar79) + fVar65 * fVar169) * fVar175;
          fVar80 = fVar80 + ((fVar114 - fVar80) + fVar65 * fVar56) * fVar57;
          fVar81 = fVar81 + ((fVar116 - fVar81) + fVar65 * fVar173) * fVar59;
          fVar88 = fVar88 + ((fVar102 - fVar88) + fVar125 * fVar41) * fVar174;
          fVar89 = fVar89 + ((fVar104 - fVar89) + fVar125 * fVar169) * fVar175;
          fVar90 = fVar90 + ((fVar106 - fVar90) + fVar125 * fVar56) * fVar57;
          fVar91 = fVar91 + ((fVar108 - fVar91) + fVar125 * fVar173) * fVar59;
          fVar82 = fVar82 + ((fVar97 - fVar82) + fVar66 * fVar41) * fVar174;
          fVar84 = fVar84 + ((fVar98 - fVar84) + fVar66 * fVar169) * fVar175;
          fVar85 = fVar85 + ((fVar99 - fVar85) + fVar66 * fVar56) * fVar57;
          fVar87 = fVar87 + ((fVar100 - fVar87) + fVar66 * fVar173) * fVar59;
          fVar118 = fVar69 * fVar88 + fVar67 * fVar78 + fVar68 * fVar82;
          fVar120 = fVar69 * fVar89 + fVar67 * fVar79 + fVar68 * fVar84;
          fVar121 = fVar69 * fVar90 + fVar67 * fVar80 + fVar68 * fVar85;
          fVar122 = fVar69 * fVar91 + fVar67 * fVar81 + fVar68 * fVar87;
          auVar27._0_4_ = fVar11 + fVar71 * fVar118;
          auVar27._4_4_ = fVar11 + fVar71 * fVar120;
          auVar27._8_4_ = fVar11 + fVar71 * fVar121;
          auVar27._12_4_ = fVar11 + fVar71 * fVar122;
          auVar49 = NEON_fmax(auVar27,ZEXT816(0),4);
          fVar157 = (float)CONCAT13(auVar49[3] & bVar128,
                                    CONCAT12(auVar49[2] & bVar127,
                                             CONCAT11(auVar49[1] & bVar123,auVar49[0] & bVar55)));
          fVar159 = (float)CONCAT13(auVar49[7] & bVar194,
                                    CONCAT12(auVar49[6] & bVar193,
                                             CONCAT11(auVar49[5] & bVar192,auVar49[4] & bVar129)));
          fVar161 = (float)CONCAT13(auVar49[0xb] & bVar199,
                                    CONCAT12(auVar49[10] & bVar198,
                                             CONCAT11(auVar49[9] & bVar197,auVar49[8] & bVar195)));
          fVar163 = (float)CONCAT13(auVar49[0xf] & bVar204,
                                    CONCAT12(auVar49[0xe] & bVar203,
                                             CONCAT11(auVar49[0xd] & bVar202,auVar49[0xc] & bVar200)
                                            ));
          fVar92 = fVar157 * fVar157;
          fVar93 = fVar159 * fVar159;
          fVar94 = fVar161 * fVar161;
          fVar95 = fVar163 * fVar163;
          fVar176 = (fVar88 * fVar88 + fVar78 * fVar78 + fVar82 * fVar82) - fVar118 * fVar118;
          fVar177 = (fVar89 * fVar89 + fVar79 * fVar79 + fVar84 * fVar84) - fVar120 * fVar120;
          fVar178 = (fVar90 * fVar90 + fVar80 * fVar80 + fVar85 * fVar85) - fVar121 * fVar121;
          fVar179 = (fVar91 * fVar91 + fVar81 * fVar81 + fVar87 * fVar87) - fVar122 * fVar122;
          param_5[2] = fVar8 + fVar80;
          param_5[3] = fVar8 + fVar81;
          *param_5 = fVar8 + fVar78;
          param_5[1] = fVar8 + fVar79;
          param_5[6] = fVar9 + fVar85;
          param_5[7] = fVar9 + fVar87;
          param_5[4] = fVar9 + fVar82;
          param_5[5] = fVar9 + fVar84;
          param_5[10] = fVar10 + fVar90;
          param_5[0xb] = fVar10 + fVar91;
          param_5[8] = fVar10 + fVar88;
          param_5[9] = fVar10 + fVar89;
        }
      }
      auVar28._0_4_ = -(uint)(fVar176 < fVar92);
      auVar28._4_4_ = -(uint)(fVar177 < fVar93);
      auVar28._8_4_ = -(uint)(fVar178 < fVar94);
      auVar28._12_4_ = -(uint)(fVar179 < fVar95);
      NEON_ext(auVar28,auVar28,8,1);
      uVar168 = uVar168 - 1 & uVar168;
      bVar55 = (byte)auVar28._4_4_ | (byte)(uVar205 >> 0x10);
      bVar123 = (byte)((ulong)uVar70 >> 0x20);
      bVar127 = (byte)((ulong)uVar70 >> 0x28);
      bVar128 = (byte)((ulong)uVar70 >> 0x30);
      bVar129 = (byte)((ulong)uVar70 >> 0x38);
      auVar172[0] = (byte)iVar148 & auVar47[0];
      auVar172[1] = bVar21 & auVar47[1];
      auVar172[2] = bVar31 & auVar47[2];
      auVar172[3] = bVar32 & auVar47[3];
      auVar172[4] = (byte)iVar149 & auVar47[4];
      auVar172[5] = bVar33 & auVar47[5];
      auVar172[6] = bVar34 & auVar47[6];
      auVar172[7] = bVar36 & auVar47[7];
      auVar172[8] = (byte)iVar150 & auVar47[8];
      auVar172[9] = bVar37 & auVar47[9];
      auVar172[10] = bVar38 & auVar47[10];
      auVar172[0xb] = bVar151 & auVar47[0xb];
      auVar172[0xc] = (byte)iVar152 & auVar47[0xc];
      auVar172[0xd] = bVar153 & auVar47[0xd];
      auVar172[0xe] = bVar154 & auVar47[0xe];
      auVar172[0xf] = bVar155 & auVar47[0xf];
      bVar21 = (byte)((int)((uint)CONCAT12(bVar55,(ushort)(byte)((byte)auVar28._0_4_ | (byte)uVar205
                                                                )) << 0x1f) >> 0x1f);
      bVar31 = (byte)((int)((uint)bVar55 << 0x1f) >> 0x1f);
      bVar32 = (byte)((int)((uint)(byte)((byte)auVar28._8_4_ | (byte)(uVar205 >> 0x20)) << 0x1f) >>
                     0x1f);
      bVar33 = (byte)((int)((uint)(byte)((byte)auVar28._12_4_ | (byte)(uVar205 >> 0x30)) << 0x1f) >>
                     0x1f);
      param_2[0] = (bVar21 | ~bVar123 & ~bVar21) & auVar62[0];
      param_2[1] = (bVar21 | ~bVar127 & ~bVar21) & auVar62[1];
      param_2[2] = (bVar21 | ~bVar128 & ~bVar21) & auVar62[2];
      param_2[3] = (bVar21 | ~bVar129 & ~bVar21) & auVar62[3];
      param_2[4] = (bVar31 | ~bVar123 & ~bVar31) & auVar62[4];
      param_2[5] = (bVar31 | ~bVar127 & ~bVar31) & auVar62[5];
      param_2[6] = (bVar31 | ~bVar128 & ~bVar31) & auVar62[6];
      param_2[7] = (bVar31 | ~bVar129 & ~bVar31) & auVar62[7];
      param_2[8] = (bVar32 | ~bVar123 & ~bVar32) & auVar62[8];
      param_2[9] = (bVar32 | ~bVar127 & ~bVar32) & auVar62[9];
      param_2[10] = (bVar32 | ~bVar128 & ~bVar32) & auVar62[10];
      param_2[0xb] = (bVar32 | ~bVar129 & ~bVar32) & auVar62[0xb];
      param_2[0xc] = (bVar33 | ~bVar123 & ~bVar33) & auVar62[0xc];
      param_2[0xd] = (bVar33 | ~bVar127 & ~bVar33) & auVar62[0xd];
      param_2[0xe] = (bVar33 | ~bVar128 & ~bVar33) & auVar62[0xe];
      param_2[0xf] = (bVar33 | ~bVar129 & ~bVar33) & auVar62[0xf];
      if (CONCAT13((byte)auVar28._12_4_,
                   CONCAT12((byte)auVar28._8_4_,CONCAT11((byte)auVar28._4_4_,(byte)auVar28._0_4_)))
          != 0) {
        auVar62._4_4_ = fVar177;
        auVar62._0_4_ = fVar176;
        auVar62._8_4_ = fVar178;
        auVar62._12_4_ = fVar179;
        auVar47 = NEON_frsqrte(auVar62,4);
        bVar21 = (byte)uVar70;
        bVar31 = (byte)((ulong)uVar70 >> 8);
        bVar32 = (byte)((ulong)uVar70 >> 0x10);
        bVar33 = (byte)((ulong)uVar70 >> 0x18);
        auVar61._0_4_ = fVar176 * auVar47._0_4_;
        auVar61._4_4_ = fVar177 * auVar47._4_4_;
        auVar61._8_4_ = fVar178 * auVar47._8_4_;
        auVar61._12_4_ = fVar179 * auVar47._12_4_;
        auVar62 = NEON_frsqrts(auVar61,auVar47,4);
        fVar42 = auVar47._0_4_ * auVar62._0_4_;
        fVar41 = auVar47._4_4_ * auVar62._4_4_;
        fVar169 = auVar47._8_4_ * auVar62._8_4_;
        fVar56 = auVar47._12_4_ * auVar62._12_4_;
        iVar152 = -(uint)(0.0 < fVar176);
        iVar190 = -(uint)(0.0 < fVar177);
        iVar191 = -(uint)(0.0 < fVar178);
        iVar196 = -(uint)(0.0 < fVar179);
        fVar23 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & (byte)((uint)iVar152 >> 0x18),
                                 CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                          (byte)((uint)iVar152 >> 0x10),
                                          CONCAT11((byte)((uint)fVar42 >> 8) &
                                                   (byte)((uint)iVar152 >> 8),
                                                   SUB41(fVar42,0) & (byte)iVar152)));
        fVar39 = (float)CONCAT13((byte)((uint)fVar169 >> 0x18) & (byte)((uint)iVar191 >> 0x18),
                                 CONCAT12((byte)((uint)fVar169 >> 0x10) &
                                          (byte)((uint)iVar191 >> 0x10),
                                          CONCAT11((byte)((uint)fVar169 >> 8) &
                                                   (byte)((uint)iVar191 >> 8),
                                                   SUB41(fVar169,0) & (byte)iVar191)));
        fVar35 = (float)(CONCAT17((byte)((uint)fVar41 >> 0x18) & (byte)((uint)iVar190 >> 0x18),
                                  CONCAT16((byte)((uint)fVar41 >> 0x10) &
                                           (byte)((uint)iVar190 >> 0x10),
                                           CONCAT15((byte)((uint)fVar41 >> 8) &
                                                    (byte)((uint)iVar190 >> 8),
                                                    CONCAT14(SUB41(fVar41,0) & (byte)iVar190,fVar23)
                                                   ))) >> 0x20);
        fVar40 = (float)(CONCAT17((byte)((uint)fVar56 >> 0x18) & (byte)((uint)iVar196 >> 0x18),
                                  CONCAT16((byte)((uint)fVar56 >> 0x10) &
                                           (byte)((uint)iVar196 >> 0x10),
                                           CONCAT15((byte)((uint)fVar56 >> 8) &
                                                    (byte)((uint)iVar196 >> 8),
                                                    CONCAT14(SUB41(fVar56,0) & (byte)iVar196,fVar39)
                                                   ))) >> 0x20);
        fVar42 = fVar118 + fVar71 * fVar176 * fVar23;
        fVar41 = fVar120 + fVar71 * fVar177 * fVar35;
        fVar169 = fVar121 + fVar71 * fVar178 * fVar39;
        fVar56 = fVar122 + fVar71 * fVar179 * fVar40;
        iVar201 = -(uint)(fVar58 < fVar42);
        iVar148 = -(uint)(fVar58 < fVar41);
        iVar149 = -(uint)(fVar58 < fVar169);
        iVar150 = -(uint)(fVar58 < fVar56);
        iVar72 = -(uint)(fVar42 < -fVar58);
        iVar75 = -(uint)(fVar41 < -fVar58);
        iVar76 = -(uint)(fVar169 < -fVar58);
        iVar77 = -(uint)(fVar56 < -fVar58);
        uVar16 = CONCAT26((short)auVar28._12_4_,
                          CONCAT24((short)auVar28._8_4_,
                                   CONCAT22((short)auVar28._4_4_,(short)auVar28._0_4_))) &
                 ((ulong)CONCAT16((byte)iVar150 | (byte)iVar77,
                                  (uint6)CONCAT14((byte)iVar149 | (byte)iVar76,
                                                  (uint)CONCAT12((byte)iVar148 | (byte)iVar75,
                                                                 (ushort)(byte)((byte)iVar201 |
                                                                               (byte)iVar72)))) ^
                 0x1000100010001);
        uVar18 = (ushort)(uVar16 >> 0x10);
        uVar19 = (ushort)(uVar16 >> 0x20);
        uVar20 = (ushort)(uVar16 >> 0x30);
        iVar152 = (uint)(ushort)uVar16 << 0x1f;
        iVar190 = (uint)uVar18 << 0x1f;
        iVar191 = (uint)uVar19 << 0x1f;
        iVar196 = (uint)uVar20 << 0x1f;
        auVar29._0_4_ = iVar152 >> 0x1f;
        auVar29._4_4_ = iVar190 >> 0x1f;
        auVar29._8_4_ = iVar191 >> 0x1f;
        auVar29._12_4_ = iVar196 >> 0x1f;
        NEON_ext(auVar29,auVar29,8,1);
        param_2[0] = param_2[0] &
                     ~(((bVar123 ^ bVar21) & ~(byte)iVar201 | bVar21 & ~(byte)iVar72) & bVar180);
        param_2[1] = param_2[1] &
                     ~(((bVar127 ^ bVar31) & ~(byte)((uint)iVar201 >> 8) |
                       bVar31 & ~(byte)((uint)iVar72 >> 8)) & bVar180);
        param_2[2] = param_2[2] &
                     ~(((bVar128 ^ bVar32) & ~(byte)((uint)iVar201 >> 0x10) |
                       bVar32 & ~(byte)((uint)iVar72 >> 0x10)) & bVar180);
        param_2[3] = param_2[3] &
                     ~(((bVar129 ^ bVar33) & ~(byte)((uint)iVar201 >> 0x18) |
                       bVar33 & ~(byte)((uint)iVar72 >> 0x18)) & bVar180);
        param_2[4] = param_2[4] &
                     ~(((bVar123 ^ bVar21) & ~(byte)iVar148 | bVar21 & ~(byte)iVar75) & bVar184);
        param_2[5] = param_2[5] &
                     ~(((bVar127 ^ bVar31) & ~(byte)((uint)iVar148 >> 8) |
                       bVar31 & ~(byte)((uint)iVar75 >> 8)) & bVar184);
        param_2[6] = param_2[6] &
                     ~(((bVar128 ^ bVar32) & ~(byte)((uint)iVar148 >> 0x10) |
                       bVar32 & ~(byte)((uint)iVar75 >> 0x10)) & bVar184);
        param_2[7] = param_2[7] &
                     ~(((bVar129 ^ bVar33) & ~(byte)((uint)iVar148 >> 0x18) |
                       bVar33 & ~(byte)((uint)iVar75 >> 0x18)) & bVar184);
        param_2[8] = param_2[8] &
                     ~(((bVar123 ^ bVar21) & ~(byte)iVar149 | bVar21 & ~(byte)iVar76) & bVar186);
        param_2[9] = param_2[9] &
                     ~(((bVar127 ^ bVar31) & ~(byte)((uint)iVar149 >> 8) |
                       bVar31 & ~(byte)((uint)iVar76 >> 8)) & bVar186);
        param_2[10] = param_2[10] &
                      ~(((bVar128 ^ bVar32) & ~(byte)((uint)iVar149 >> 0x10) |
                        bVar32 & ~(byte)((uint)iVar76 >> 0x10)) & bVar186);
        param_2[0xb] = param_2[0xb] &
                       ~(((bVar129 ^ bVar33) & ~(byte)((uint)iVar149 >> 0x18) |
                         bVar33 & ~(byte)((uint)iVar76 >> 0x18)) & bVar186);
        param_2[0xc] = param_2[0xc] &
                       ~(((bVar123 ^ bVar21) & ~(byte)iVar150 | bVar21 & ~(byte)iVar77) & bVar188);
        param_2[0xd] = param_2[0xd] &
                       ~(((bVar127 ^ bVar31) & ~(byte)((uint)iVar150 >> 8) |
                         bVar31 & ~(byte)((uint)iVar77 >> 8)) & bVar188);
        param_2[0xe] = param_2[0xe] &
                       ~(((bVar128 ^ bVar32) & ~(byte)((uint)iVar150 >> 0x10) |
                         bVar32 & ~(byte)((uint)iVar77 >> 0x10)) & bVar188);
        param_2[0xf] = param_2[0xf] &
                       ~(((bVar129 ^ bVar33) & ~(byte)((uint)iVar150 >> 0x18) |
                         bVar33 & ~(byte)((uint)iVar77 >> 0x18)) & bVar188);
        if (CONCAT13((char)((short)(uVar20 << 0xf) >> 0xf),
                     CONCAT12((char)((short)(uVar19 << 0xf) >> 0xf),
                              CONCAT11((char)((short)(uVar18 << 0xf) >> 0xf),
                                       (char)((short)((ushort)uVar16 << 0xf) >> 0xf)))) != 0) {
          fVar58 = (float)uVar43;
          fVar23 = fVar157 * fVar23 * fVar58 - fVar58;
          fVar35 = fVar159 * fVar35 * fVar58 - fVar58;
          fVar39 = fVar161 * fVar39 * fVar58 - fVar58;
          fVar58 = fVar163 * fVar40 * fVar58 - fVar58;
          bVar21 = (byte)(iVar152 >> 0x1f);
          fVar40 = (float)CONCAT13(bVar21 & auVar26[3],
                                   CONCAT12(bVar21 & auVar26[2],
                                            CONCAT11(bVar21 & auVar26[1],bVar21 & auVar26[0])));
          bVar31 = (byte)(iVar190 >> 0x1f);
          bVar32 = (byte)(iVar191 >> 0x1f);
          fVar116 = (float)CONCAT13(bVar32 & auVar26[0xb],
                                    CONCAT12(bVar32 & auVar26[10],
                                             CONCAT11(bVar32 & auVar26[9],bVar32 & bStack_128)));
          bVar33 = (byte)(iVar196 >> 0x1f);
          fVar23 = (float)CONCAT13(bVar21 & (byte)((uint)fVar23 >> 0x18),
                                   CONCAT12(bVar21 & (byte)((uint)fVar23 >> 0x10),
                                            CONCAT11(bVar21 & (byte)((uint)fVar23 >> 8),
                                                     bVar21 & SUB41(fVar23,0))));
          auVar46._0_8_ =
               CONCAT17(bVar31 & (byte)((uint)fVar35 >> 0x18),
                        CONCAT16(bVar31 & (byte)((uint)fVar35 >> 0x10),
                                 CONCAT15(bVar31 & (byte)((uint)fVar35 >> 8),
                                          CONCAT14(bVar31 & SUB41(fVar35,0),fVar23))));
          auVar46[8] = bVar32 & SUB41(fVar39,0);
          auVar46[9] = bVar32 & (byte)((uint)fVar39 >> 8);
          auVar46[10] = bVar32 & (byte)((uint)fVar39 >> 0x10);
          auVar46[0xb] = bVar32 & (byte)((uint)fVar39 >> 0x18);
          auVar54[0xc] = bVar33 & SUB41(fVar58,0);
          auVar54._0_12_ = auVar46;
          auVar54[0xd] = bVar33 & (byte)((uint)fVar58 >> 8);
          auVar54[0xe] = bVar33 & (byte)((uint)fVar58 >> 0x10);
          auVar54[0xf] = bVar33 & (byte)((uint)fVar58 >> 0x18);
          fVar58 = (float)((ulong)auVar46._0_8_ >> 0x20);
          fVar35 = auVar46._8_4_;
          fVar39 = auVar54._12_4_;
          *(ulong *)(param_6 + 0x1a) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x1a) >> 0x20) +
                        (float)(CONCAT17(bVar33 & auVar26[0xf],
                                         CONCAT16(bVar33 & auVar26[0xe],
                                                  CONCAT15(bVar33 & auVar26[0xd],
                                                           CONCAT14(bVar33 & auVar26[0xc],fVar116)))
                                        ) >> 0x20),(float)*(undefined8 *)(param_6 + 0x1a) + fVar116)
          ;
          *(ulong *)(param_6 + 0x18) =
               CONCAT44((float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20) +
                        (float)(CONCAT17(bVar31 & auVar26[7],
                                         CONCAT16(bVar31 & auVar26[6],
                                                  CONCAT15(bVar31 & auVar26[5],
                                                           CONCAT14(bVar31 & auVar26[4],fVar40))))
                               >> 0x20),(float)*(undefined8 *)(param_6 + 0x18) + fVar40);
          uVar70 = *(undefined8 *)(param_6 + 2);
          uVar43 = *(undefined8 *)param_6;
          param_6[2] = (fVar80 - fVar67 * fVar169) * fVar35 + (float)uVar70;
          param_6[3] = (fVar81 - fVar67 * fVar56) * fVar39 + (float)((ulong)uVar70 >> 0x20);
          *param_6 = (fVar78 - fVar67 * fVar42) * fVar23 + (float)uVar43;
          param_6[1] = (fVar79 - fVar67 * fVar41) * fVar58 + (float)((ulong)uVar43 >> 0x20);
          *(ulong *)(param_6 + 6) =
               CONCAT44((fVar87 - fVar68 * fVar56) * fVar39 +
                        (float)((ulong)*(undefined8 *)(param_6 + 6) >> 0x20),
                        (fVar85 - fVar68 * fVar169) * fVar35 + (float)*(undefined8 *)(param_6 + 6));
          *(ulong *)(param_6 + 4) =
               CONCAT44((fVar84 - fVar68 * fVar41) * fVar58 +
                        (float)((ulong)*(undefined8 *)(param_6 + 4) >> 0x20),
                        (fVar82 - fVar68 * fVar42) * fVar23 + (float)*(undefined8 *)(param_6 + 4));
          param_6[10] = (fVar90 - fVar69 * fVar169) * fVar35 + param_6[10];
          param_6[0xb] = (fVar91 - fVar69 * fVar56) * fVar39 + param_6[0xb];
          param_6[8] = (fVar88 - fVar69 * fVar42) * fVar23 + param_6[8];
          param_6[9] = (fVar89 - fVar69 * fVar41) * fVar58 + param_6[9];
          if (0.0 < fVar22) {
            fVar42 = *(float *)puVar12;
            piVar1 = (int *)(*(long *)(*(long *)(param_3 + 0x1c0) + 0x118) + (ulong)uVar3 * 8);
            uVar16 = (ulong)(uint)(*piVar1 << 4);
            uVar205 = (ulong)(uint)(piVar1[1] << 4);
            fVar58 = fVar42 + fVar118 * fVar42;
            fVar169 = fVar42 + fVar120 * fVar42;
            fVar23 = fVar42 + fVar121 * fVar42;
            fVar42 = fVar42 + fVar122 * fVar42;
            pfVar4 = (float *)(*(long *)(param_3 + 0x1a0) + uVar16);
            puVar5 = (undefined8 *)(*(long *)(param_3 + 0x1b0) + uVar16);
            uVar43 = *puVar5;
            pfVar6 = (float *)(*(long *)(param_3 + 0x1b0) + uVar205);
            puVar7 = (undefined8 *)(*(long *)(param_3 + 0x1a0) + uVar205);
            uVar70 = *puVar7;
            fVar40 = (float)uVar43 - *pfVar4;
            fVar116 = (float)((ulong)uVar43 >> 0x20) - pfVar4[1];
            fVar39 = (float)puVar5[1] - pfVar4[2];
            fVar41 = (*pfVar6 - (float)uVar70) - fVar40;
            fVar108 = (pfVar6[1] - (float)((ulong)uVar70 >> 0x20)) - fVar116;
            fVar174 = (pfVar6[2] - (float)puVar7[1]) - fVar39;
            fVar100 = fVar40 + fVar58 * fVar41;
            fVar173 = fVar40 + fVar169 * fVar41;
            fVar175 = fVar40 + fVar23 * fVar41;
            fVar40 = fVar40 + fVar42 * fVar41;
            fVar41 = fVar39 + fVar58 * fVar174;
            fVar56 = fVar39 + fVar169 * fVar174;
            fVar35 = fVar39 + fVar23 * fVar174;
            fVar39 = fVar39 + fVar42 * fVar174;
            fVar58 = fVar116 + fVar58 * fVar108;
            fVar169 = fVar116 + fVar169 * fVar108;
            fVar23 = fVar116 + fVar23 * fVar108;
            fVar116 = fVar116 + fVar42 * fVar108;
            uVar70 = *(undefined8 *)(param_6 + 0x16);
            uVar43 = *(undefined8 *)(param_6 + 0x14);
            uVar86 = *(undefined8 *)(param_6 + 0x12);
            uVar83 = *(undefined8 *)(param_6 + 0x10);
            fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) & bVar21,
                                      CONCAT12((byte)((uint)fVar100 >> 0x10) & bVar21,
                                               CONCAT11((byte)((uint)fVar100 >> 8) & bVar21,
                                                        SUB41(fVar100,0) & bVar21)));
            fVar108 = (float)CONCAT13((byte)((uint)fVar175 >> 0x18) & bVar32,
                                      CONCAT12((byte)((uint)fVar175 >> 0x10) & bVar32,
                                               CONCAT11((byte)((uint)fVar175 >> 8) & bVar32,
                                                        SUB41(fVar175,0) & bVar32)));
            fVar58 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & bVar21,
                                     CONCAT12((byte)((uint)fVar58 >> 0x10) & bVar21,
                                              CONCAT11((byte)((uint)fVar58 >> 8) & bVar21,
                                                       SUB41(fVar58,0) & bVar21)));
            auVar60._0_8_ =
                 CONCAT17((byte)((uint)fVar169 >> 0x18) & bVar31,
                          CONCAT16((byte)((uint)fVar169 >> 0x10) & bVar31,
                                   CONCAT15((byte)((uint)fVar169 >> 8) & bVar31,
                                            CONCAT14(SUB41(fVar169,0) & bVar31,fVar58))));
            auVar60[8] = SUB41(fVar23,0) & bVar32;
            auVar60[9] = (byte)((uint)fVar23 >> 8) & bVar32;
            auVar60[10] = (byte)((uint)fVar23 >> 0x10) & bVar32;
            auVar60[0xb] = (byte)((uint)fVar23 >> 0x18) & bVar32;
            auVar63[0xc] = SUB41(fVar116,0) & bVar33;
            auVar63._0_12_ = auVar60;
            auVar63[0xd] = (byte)((uint)fVar116 >> 8) & bVar33;
            auVar63[0xe] = (byte)((uint)fVar116 >> 0x10) & bVar33;
            auVar63[0xf] = (byte)((uint)fVar116 >> 0x18) & bVar33;
            fVar42 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & bVar21,
                                     CONCAT12((byte)((uint)fVar41 >> 0x10) & bVar21,
                                              CONCAT11((byte)((uint)fVar41 >> 8) & bVar21,
                                                       SUB41(fVar41,0) & bVar21)));
            auVar24._0_8_ =
                 CONCAT17((byte)((uint)fVar56 >> 0x18) & bVar31,
                          CONCAT16((byte)((uint)fVar56 >> 0x10) & bVar31,
                                   CONCAT15((byte)((uint)fVar56 >> 8) & bVar31,
                                            CONCAT14(SUB41(fVar56,0) & bVar31,fVar42))));
            auVar24[8] = SUB41(fVar35,0) & bVar32;
            auVar24[9] = (byte)((uint)fVar35 >> 8) & bVar32;
            auVar24[10] = (byte)((uint)fVar35 >> 0x10) & bVar32;
            auVar24[0xb] = (byte)((uint)fVar35 >> 0x18) & bVar32;
            auVar30[0xc] = SUB41(fVar39,0) & bVar33;
            auVar30._0_12_ = auVar24;
            auVar30[0xd] = (byte)((uint)fVar39 >> 8) & bVar33;
            auVar30[0xe] = (byte)((uint)fVar39 >> 0x10) & bVar33;
            auVar30[0xf] = (byte)((uint)fVar39 >> 0x18) & bVar33;
            *(ulong *)(param_6 + 0xe) =
                 CONCAT44(param_6[0xf] +
                          (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & bVar33,
                                           CONCAT16((byte)((uint)fVar40 >> 0x10) & bVar33,
                                                    CONCAT15((byte)((uint)fVar40 >> 8) & bVar33,
                                                             CONCAT14(SUB41(fVar40,0) & bVar33,
                                                                      fVar108)))) >> 0x20),
                          param_6[0xe] + fVar108);
            *(ulong *)(param_6 + 0xc) =
                 CONCAT44(param_6[0xd] +
                          (float)(CONCAT17((byte)((uint)fVar173 >> 0x18) & bVar31,
                                           CONCAT16((byte)((uint)fVar173 >> 0x10) & bVar31,
                                                    CONCAT15((byte)((uint)fVar173 >> 8) & bVar31,
                                                             CONCAT14(SUB41(fVar173,0) & bVar31,
                                                                      fVar100)))) >> 0x20),
                          param_6[0xc] + fVar100);
            param_6[0x12] = (float)uVar86 + auVar60._8_4_;
            param_6[0x13] = (float)((ulong)uVar86 >> 0x20) + auVar63._12_4_;
            param_6[0x10] = (float)uVar83 + fVar58;
            param_6[0x11] = (float)((ulong)uVar83 >> 0x20) + (float)((ulong)auVar60._0_8_ >> 0x20);
            param_6[0x16] = (float)uVar70 + auVar24._8_4_;
            param_6[0x17] = (float)((ulong)uVar70 >> 0x20) + auVar30._12_4_;
            param_6[0x14] = (float)uVar43 + fVar42;
            param_6[0x15] = (float)((ulong)uVar43 >> 0x20) + (float)((ulong)auVar24._0_8_ >> 0x20);
          }
        }
      }
      auVar62 = param_2;
      auVar47 = auVar172;
    } while (uVar168 != 0);
  }
  return param_2;
}


