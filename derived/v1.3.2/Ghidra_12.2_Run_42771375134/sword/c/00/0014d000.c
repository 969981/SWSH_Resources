/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014d000; name: FUN_0014d000
 */


void FUN_0014d000(long *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined5 uVar27;
  undefined5 uVar28;
  undefined5 uVar29;
  undefined1 auVar30 [16];
  undefined *puVar31;
  float *pfVar32;
  ushort *puVar33;
  long lVar34;
  ushort *puVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  float fVar41;
  undefined1 auVar42 [12];
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  float fVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  undefined1 uVar77;
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
  undefined1 auVar88 [12];
  undefined1 auVar89 [12];
  float fVar94;
  float fVar96;
  float fVar98;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  float fVar97;
  undefined1 auVar93 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar111;
  float fVar112;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar113;
  undefined1 auVar110 [16];
  int iVar114;
  int iVar116;
  int iVar117;
  int iVar118;
  undefined1 auVar115 [16];
  float fVar119;
  float fVar121;
  float fVar122;
  undefined1 auVar120 [16];
  float fVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  float fVar134;
  float fVar140;
  float fVar141;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar142;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar143;
  float fVar145;
  float fVar146;
  float fVar147;
  undefined1 auVar144 [16];
  undefined4 uVar150;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined8 uVar151;
  undefined8 uVar152;
  byte bVar153;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  undefined8 uVar154;
  byte bVar162;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  undefined8 uVar163;
  float fVar171;
  float fVar173;
  undefined8 uVar172;
  float fVar174;
  float fVar176;
  undefined8 uVar175;
  float fVar177;
  float fVar179;
  undefined8 uVar178;
  float fVar180;
  float fVar182;
  undefined8 uVar181;
  float fVar183;
  float fVar185;
  undefined8 uVar184;
  float fVar186;
  float fVar188;
  undefined8 uVar187;
  float fVar189;
  float fVar191;
  undefined8 uVar190;
  float fVar192;
  float fVar194;
  undefined8 uVar193;
  float fVar195;
  float fVar197;
  undefined8 uVar196;
  float fVar198;
  float fVar200;
  undefined8 uVar199;
  byte bVar201;
  byte bVar202;
  byte bVar203;
  byte bVar204;
  byte bVar205;
  byte bVar206;
  byte bVar207;
  byte bVar208;
  byte bVar209;
  byte bVar210;
  byte bVar211;
  byte bVar212;
  float fVar213;
  float fVar214;
  undefined1 auVar215 [12];
  float fVar217;
  float fVar218;
  float fVar219;
  undefined1 auVar216 [16];
  
  puVar31 = PTR_DAT_02710d80;
  lVar40 = param_1[1];
  puVar35 = *(ushort **)(lVar40 + 0x50);
  puVar6 = *(ushort **)(lVar40 + 0x58);
  if (puVar35 != puVar6) {
    fVar64 = *(float *)(*param_1 + 0xa0) * *(float *)(param_1 + 0x65);
    lVar36 = *(long *)(lVar40 + 0x80);
    lVar37 = *(long *)(lVar40 + 8);
    lVar38 = *(long *)(lVar40 + 0x60);
    lVar39 = *(long *)(lVar40 + 0x70);
    lVar40 = *(long *)(lVar40 + 0x90);
    auVar120 = NEON_fmov(0x3f800000,4);
    do {
      puVar1 = puVar35 + 2;
      uVar151 = *(undefined8 *)(puVar35 + 6);
      uVar54 = (undefined1)((ulong)uVar151 >> 8);
      uVar77 = (undefined1)((ulong)uVar151 >> 0x10);
      uVar124 = (undefined1)((ulong)uVar151 >> 0x18);
      uVar125 = (undefined1)((ulong)uVar151 >> 0x20);
      uVar126 = (undefined1)((ulong)uVar151 >> 0x28);
      uVar127 = (undefined1)((ulong)uVar151 >> 0x30);
      uVar128 = (undefined1)((ulong)uVar151 >> 0x38);
      auVar135._0_4_ = fVar64 * (float)*(undefined8 *)puVar1;
      auVar135._4_4_ = fVar64 * (float)((ulong)*(undefined8 *)puVar1 >> 0x20);
      auVar135._8_4_ = fVar64 * (float)uVar151;
      auVar135._12_4_ = fVar64 * (float)((ulong)uVar151 >> 0x20);
      auVar30._8_4_ = 0xc2fefff3;
      auVar30._0_8_ = 0xc2fefff3c2fefff3;
      auVar30._12_4_ = 0xc2fefff3;
      auVar136 = NEON_fmax(auVar30,auVar135,4);
      auVar137._8_4_ = 0x42fefff3;
      auVar137._0_8_ = 0x42fefff342fefff3;
      auVar137._12_4_ = 0x42fefff3;
      auVar137 = NEON_fmin(auVar136,auVar137,4);
      fVar134 = auVar137._0_4_ + 0.5;
      fVar140 = auVar137._4_4_ + 0.5;
      fVar141 = auVar137._8_4_ + 0.5;
      fVar142 = auVar137._12_4_ + 0.5;
      puVar2 = (uint *)(lVar39 + (ulong)*(uint *)(lVar38 + (ulong)*puVar35 * 4) * 4);
      uVar3 = *puVar2;
      uVar4 = (ulong)uVar3;
      uVar5 = puVar2[1];
      pfVar32 = (float *)(lVar36 + uVar4 * 4);
      puVar33 = (ushort *)(lVar40 + (ulong)(uVar3 << 1) * 2);
      iVar114 = (int)fVar134 + ((int)fVar134 >> 0x1f);
      iVar116 = (int)fVar140 + ((int)fVar140 >> 0x1f);
      iVar117 = (int)fVar141 + ((int)fVar141 >> 0x1f);
      iVar118 = (int)fVar142 + ((int)fVar142 >> 0x1f);
      auVar24[4] = (char)iVar116;
      auVar24._0_4_ = iVar114;
      auVar24[5] = (char)((uint)iVar116 >> 8);
      auVar24[6] = (char)((uint)iVar116 >> 0x10);
      auVar24[7] = (char)((uint)iVar116 >> 0x18);
      auVar24[8] = (char)iVar117;
      auVar24[9] = (char)((uint)iVar117 >> 8);
      auVar24[10] = (char)((uint)iVar117 >> 0x10);
      auVar24[0xb] = (char)((uint)iVar117 >> 0x18);
      auVar24[0xc] = (char)iVar118;
      auVar24[0xd] = (char)((uint)iVar118 >> 8);
      auVar24[0xe] = (char)((uint)iVar118 >> 0x10);
      auVar24[0xf] = (char)((uint)iVar118 >> 0x18);
      auVar136 = NEON_scvtf(auVar24,4);
      fVar119 = auVar120._0_4_;
      fVar121 = auVar120._4_4_;
      fVar122 = auVar120._8_4_;
      fVar123 = auVar120._12_4_;
      fVar134 = auVar137._0_4_ - auVar136._0_4_;
      fVar140 = auVar137._4_4_ - auVar136._4_4_;
      fVar141 = auVar137._8_4_ - auVar136._8_4_;
      fVar142 = auVar137._12_4_ - auVar136._12_4_;
      fVar143 = fVar134 * fVar134;
      fVar145 = fVar140 * fVar140;
      fVar146 = fVar141 * fVar141;
      fVar147 = fVar142 * fVar142;
      fVar134 = fVar134 * (fVar143 * (fVar143 * 0.023093348 + 20.202066) + 1513.9069);
      fVar140 = fVar140 * (fVar145 * (fVar145 * 0.023093348 + 20.202066) + 1513.9069);
      fVar141 = fVar141 * (fVar146 * (fVar146 * 0.023093348 + 20.202066) + 1513.9069);
      fVar142 = fVar142 * (fVar147 * (fVar147 * 0.023093348 + 20.202066) + 1513.9069);
      auVar144._0_4_ = (fVar143 * (fVar143 + 233.1842) + 4368.2114) - fVar134;
      auVar144._4_4_ = (fVar145 * (fVar145 + 233.1842) + 4368.2114) - fVar140;
      auVar144._8_4_ = (fVar146 * (fVar146 + 233.1842) + 4368.2114) - fVar141;
      auVar144._12_4_ = (fVar147 * (fVar147 + 233.1842) + 4368.2114) - fVar142;
      auVar136 = NEON_frecpe(auVar144,4);
      auVar137 = NEON_frecps(auVar144,auVar136,4);
      auVar148._8_8_ = DAT_027369c8;
      auVar148._0_8_ = DAT_027369c0;
      fVar134 = auVar136._0_4_ * auVar137._0_4_ * fVar134;
      fVar140 = auVar136._4_4_ * auVar137._4_4_ * fVar140;
      fVar141 = auVar136._8_4_ * auVar137._8_4_ * fVar141;
      fVar142 = auVar136._12_4_ * auVar137._12_4_ * fVar142;
      auVar138._0_4_ =
           fVar119 - (fVar134 + fVar134 + fVar119) * (float)(iVar114 * 0x800000 + (int)fVar119);
      auVar138._4_4_ =
           fVar121 - (fVar140 + fVar140 + fVar121) * (float)(iVar116 * 0x800000 + (int)fVar121);
      auVar138._8_4_ =
           fVar122 - (fVar141 + fVar141 + fVar122) * (float)(iVar117 * 0x800000 + (int)fVar122);
      auVar138._12_4_ =
           fVar123 - (fVar142 + fVar142 + fVar123) * (float)(iVar118 * 0x800000 + (int)fVar123);
      auVar136[9] = uVar54;
      auVar136._0_9_ = *(unkbyte9 *)puVar1;
      auVar136[10] = uVar77;
      auVar136[0xb] = uVar124;
      auVar136[0xc] = uVar125;
      auVar136[0xd] = uVar126;
      auVar136[0xe] = uVar127;
      auVar136[0xf] = uVar128;
      auVar149[9] = uVar54;
      auVar149._0_9_ = *(unkbyte9 *)puVar1;
      auVar149[10] = uVar77;
      auVar149[0xb] = uVar124;
      auVar149[0xc] = uVar125;
      auVar149[0xd] = uVar126;
      auVar149[0xe] = uVar127;
      auVar149[0xf] = uVar128;
      auVar149 = auVar149 ^ (auVar136 ^ auVar138) & auVar148;
      bVar65 = auVar149[0xc];
      bVar66 = auVar149[0xd];
      bVar67 = auVar149[0xe];
      bVar68 = auVar149[0xf];
      iVar114 = -(uint)((float)CONCAT13(auVar149[3] & (byte)((ulong)DAT_027369e0 >> 0x18),
                                        CONCAT12(auVar149[2] & (byte)((ulong)DAT_027369e0 >> 0x10),
                                                 CONCAT11(auVar149[1] &
                                                          (byte)((ulong)DAT_027369e0 >> 8),
                                                          auVar149[0] & (byte)DAT_027369e0))) == 0.0
                       );
      iVar116 = -(uint)((float)CONCAT13(auVar149[7] & (byte)((ulong)DAT_027369e0 >> 0x38),
                                        CONCAT12(auVar149[6] & (byte)((ulong)DAT_027369e0 >> 0x30),
                                                 CONCAT11(auVar149[5] &
                                                          (byte)((ulong)DAT_027369e0 >> 0x28),
                                                          auVar149[4] &
                                                          (byte)((ulong)DAT_027369e0 >> 0x20)))) ==
                       0.0);
      uVar54 = (undefined1)iVar116;
      uVar77 = (undefined1)((uint)iVar116 >> 8);
      uVar124 = (undefined1)((uint)iVar116 >> 0x10);
      uVar125 = (undefined1)((uint)iVar116 >> 0x18);
      iVar116 = -(uint)((float)CONCAT13(auVar149[0xb] & (byte)((ulong)DAT_027369e8 >> 0x18),
                                        CONCAT12(auVar149[10] & (byte)((ulong)DAT_027369e8 >> 0x10),
                                                 CONCAT11(auVar149[9] &
                                                          (byte)((ulong)DAT_027369e8 >> 8),
                                                          auVar149[8] & (byte)DAT_027369e8))) == 0.0
                       );
      uVar126 = (undefined1)iVar116;
      uVar127 = (undefined1)((uint)iVar116 >> 8);
      uVar128 = (undefined1)((uint)iVar116 >> 0x10);
      uVar129 = (undefined1)((uint)iVar116 >> 0x18);
      iVar116 = -(uint)((float)CONCAT13(bVar68 & (byte)((ulong)DAT_027369e8 >> 0x38),
                                        CONCAT12(bVar67 & (byte)((ulong)DAT_027369e8 >> 0x30),
                                                 CONCAT11(bVar66 & (byte)((ulong)DAT_027369e8 >>
                                                                         0x28),
                                                          bVar65 & (byte)((ulong)DAT_027369e8 >>
                                                                         0x20)))) == 0.0);
      uVar130 = (undefined1)iVar116;
      uVar131 = (undefined1)((uint)iVar116 >> 8);
      uVar132 = (undefined1)((uint)iVar116 >> 0x10);
      uVar133 = (undefined1)((uint)iVar116 >> 0x18);
      auVar115[4] = uVar54;
      auVar115._0_4_ = iVar114;
      auVar115[5] = uVar77;
      auVar115[6] = uVar124;
      auVar115[7] = uVar125;
      auVar115[8] = uVar126;
      auVar115[9] = uVar127;
      auVar115[10] = uVar128;
      auVar115[0xb] = uVar129;
      auVar115[0xc] = uVar130;
      auVar115[0xd] = uVar131;
      auVar115[0xe] = uVar132;
      auVar115[0xf] = uVar133;
      auVar22[4] = uVar54;
      auVar22._0_4_ = iVar114;
      auVar22[5] = uVar77;
      auVar22[6] = uVar124;
      auVar22[7] = uVar125;
      auVar22[8] = uVar126;
      auVar22[9] = uVar127;
      auVar22[10] = uVar128;
      auVar22[0xb] = uVar129;
      auVar22[0xc] = uVar130;
      auVar22[0xd] = uVar131;
      auVar22[0xe] = uVar132;
      auVar22[0xf] = uVar133;
      NEON_ext(auVar115,auVar22,8,1);
      fVar143 = auVar149._0_4_;
      bVar153 = (byte)DAT_027369d0;
      bVar155 = (byte)((ulong)DAT_027369d0 >> 8);
      bVar156 = (byte)((ulong)DAT_027369d0 >> 0x10);
      bVar157 = (byte)((ulong)DAT_027369d0 >> 0x18);
      bVar158 = (byte)((ulong)DAT_027369d0 >> 0x20);
      bVar159 = (byte)((ulong)DAT_027369d0 >> 0x28);
      bVar160 = (byte)((ulong)DAT_027369d0 >> 0x30);
      bVar161 = (byte)((ulong)DAT_027369d0 >> 0x38);
      bVar162 = (byte)DAT_027369d8;
      bVar164 = (byte)((ulong)DAT_027369d8 >> 8);
      bVar165 = (byte)((ulong)DAT_027369d8 >> 0x10);
      bVar166 = (byte)((ulong)DAT_027369d8 >> 0x18);
      bVar167 = (byte)((ulong)DAT_027369d8 >> 0x20);
      bVar168 = (byte)((ulong)DAT_027369d8 >> 0x28);
      bVar169 = (byte)((ulong)DAT_027369d8 >> 0x30);
      bVar170 = (byte)((ulong)DAT_027369d8 >> 0x38);
      fVar134 = (float)DAT_027369f0;
      fVar140 = (float)((ulong)DAT_027369f0 >> 0x20);
      fVar141 = (float)DAT_027369f8;
      fVar142 = (float)((ulong)DAT_027369f8 >> 0x20);
      if (CONCAT13(uVar130,CONCAT12(uVar126,CONCAT11(uVar54,(char)iVar114))) == -1) {
        if (uVar3 != uVar5) {
          fVar145 = *(float *)puVar31;
          lVar34 = (ulong)uVar5 * 4 + uVar4 * -4;
          do {
            uVar7 = *puVar33;
            uVar8 = puVar33[2];
            uVar9 = puVar33[4];
            uVar10 = puVar33[6];
            uVar11 = puVar33[1];
            uVar12 = puVar33[3];
            lVar34 = lVar34 + -0x10;
            uVar13 = puVar33[5];
            uVar14 = puVar33[7];
            puVar33 = puVar33 + 8;
            pfVar16 = (float *)(lVar37 + (ulong)uVar7 * 0x10);
            fVar96 = *pfVar16;
            fVar98 = pfVar16[1];
            fVar25 = pfVar16[3];
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar8 * 0x10);
            uVar163 = puVar15[1];
            uVar154 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar9 * 0x10);
            uVar175 = puVar15[1];
            uVar172 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar10 * 0x10);
            uVar181 = puVar15[1];
            uVar178 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar11 * 0x10);
            uVar152 = puVar15[1];
            uVar151 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar13 * 0x10);
            uVar187 = puVar15[1];
            uVar184 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar12 * 0x10);
            uVar199 = puVar15[1];
            uVar196 = *puVar15;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar14 * 0x10);
            uVar193 = puVar15[1];
            uVar190 = *puVar15;
            fVar106 = (float)uVar154;
            fVar99 = (float)((ulong)uVar154 >> 0x20);
            fVar100 = (float)uVar163;
            fVar101 = (float)((ulong)uVar163 >> 0x20);
            fVar102 = (float)uVar172;
            fVar171 = (float)((ulong)uVar172 >> 0x20);
            fVar173 = (float)uVar175;
            fVar174 = (float)((ulong)uVar175 >> 0x20);
            fVar176 = (float)uVar178;
            fVar177 = (float)((ulong)uVar178 >> 0x20);
            fVar180 = (float)uVar181;
            fVar182 = (float)((ulong)uVar181 >> 0x20);
            fVar103 = (float)uVar151;
            fVar214 = fVar103 + fVar96 * fVar134;
            fVar104 = (float)((ulong)uVar151 >> 0x20);
            fVar26 = fVar104 + fVar98 * fVar140;
            uVar124 = (undefined1)((uint)fVar26 >> 0x18);
            fVar105 = (float)uVar152;
            fVar86 = fVar105 + pfVar16[2] * fVar141;
            fVar113 = (float)((ulong)uVar152 >> 0x20);
            fVar94 = fVar113 + fVar25 * fVar142;
            fVar195 = (float)uVar196;
            fVar213 = fVar195 + fVar106 * fVar134;
            fVar197 = (float)((ulong)uVar196 >> 0x20);
            fVar217 = fVar197 + fVar99 * fVar140;
            fVar198 = (float)uVar199;
            fVar218 = fVar198 + fVar100 * fVar141;
            fVar200 = (float)((ulong)uVar199 >> 0x20);
            fVar219 = fVar200 + fVar101 * fVar142;
            fVar183 = (float)uVar184;
            fVar146 = fVar183 + fVar102 * fVar134;
            fVar185 = (float)((ulong)uVar184 >> 0x20);
            fVar147 = fVar185 + fVar171 * fVar140;
            uVar54 = (undefined1)((uint)fVar147 >> 0x18);
            fVar186 = (float)uVar187;
            fVar19 = fVar186 + fVar173 * fVar141;
            fVar188 = (float)((ulong)uVar187 >> 0x20);
            fVar179 = fVar188 + fVar174 * fVar142;
            fVar189 = (float)uVar190;
            fVar41 = fVar189 + fVar176 * fVar134;
            fVar191 = (float)((ulong)uVar190 >> 0x20);
            fVar46 = fVar191 + fVar177 * fVar140;
            uVar77 = (undefined1)((uint)fVar46 >> 0x18);
            fVar192 = (float)uVar193;
            fVar20 = fVar192 + fVar180 * fVar141;
            fVar194 = (float)((ulong)uVar193 >> 0x20);
            fVar21 = fVar194 + fVar182 * fVar142;
            fVar87 = (float)(CONCAT17(uVar124,CONCAT16((char)((uint)fVar26 >> 0x10),
                                                       CONCAT15((char)((uint)fVar26 >> 8),
                                                                CONCAT14(SUB41(fVar26,0),fVar214))))
                            >> 0x20);
            fVar97 = (float)(CONCAT17(uVar54,CONCAT16((char)((uint)fVar147 >> 0x10),
                                                      CONCAT15((char)((uint)fVar147 >> 8),
                                                               CONCAT14(SUB41(fVar147,0),fVar146))))
                            >> 0x20);
            fVar107 = (float)(CONCAT17(uVar77,CONCAT16((char)((uint)fVar46 >> 0x10),
                                                       CONCAT15((char)((uint)fVar46 >> 8),
                                                                CONCAT14(SUB41(fVar46,0),fVar41))))
                             >> 0x20);
            uVar27 = CONCAT14((char)((uint)fVar19 >> 0x18),
                              CONCAT13((char)((uint)fVar19 >> 0x10),
                                       CONCAT12((char)((uint)fVar19 >> 8),
                                                CONCAT11(SUB41(fVar19,0),uVar54))));
            uVar28 = CONCAT14((char)((uint)fVar86 >> 0x18),
                              CONCAT13((char)((uint)fVar86 >> 0x10),
                                       CONCAT12((char)((uint)fVar86 >> 8),
                                                CONCAT11(SUB41(fVar86,0),uVar124))));
            fVar95 = (float)((uint5)uVar28 >> 8);
            fVar111 = (float)((uint5)uVar27 >> 8);
            uVar29 = CONCAT14((char)((uint)fVar20 >> 0x18),
                              CONCAT13((char)((uint)fVar20 >> 0x10),
                                       CONCAT12((char)((uint)fVar20 >> 8),
                                                CONCAT11(SUB41(fVar20,0),uVar77))));
            fVar112 = (float)((uint5)uVar29 >> 8);
            auVar110._0_4_ =
                 fVar145 + (float)(CONCAT18((char)((uint)fVar94 >> 0x18),
                                            CONCAT17((char)((uint)fVar94 >> 0x10),
                                                     CONCAT16((char)((uint)fVar94 >> 8),
                                                              CONCAT15(SUB41(fVar94,0),uVar28)))) >>
                                  0x28);
            auVar110._4_4_ = fVar145 + fVar219;
            auVar110._8_4_ =
                 fVar145 + (float)(CONCAT18((char)((uint)fVar179 >> 0x18),
                                            CONCAT17((char)((uint)fVar179 >> 0x10),
                                                     CONCAT16((char)((uint)fVar179 >> 8),
                                                              CONCAT15(SUB41(fVar179,0),uVar27))))
                                  >> 0x28);
            auVar110._12_4_ =
                 fVar145 + (float)(CONCAT18((char)((uint)fVar21 >> 0x18),
                                            CONCAT17((char)((uint)fVar21 >> 0x10),
                                                     CONCAT16((char)((uint)fVar21 >> 8),
                                                              CONCAT15(SUB41(fVar21,0),uVar29)))) >>
                                  0x28);
            auVar91._0_4_ = fVar95 * fVar95 + fVar87 * fVar87 + fVar145 + fVar214 * fVar214;
            auVar91._4_4_ = fVar218 * fVar218 + fVar217 * fVar217 + fVar145 + fVar213 * fVar213;
            auVar91._8_4_ = fVar111 * fVar111 + fVar97 * fVar97 + fVar145 + fVar146 * fVar146;
            auVar91._12_4_ = fVar112 * fVar112 + fVar107 * fVar107 + fVar145 + fVar41 * fVar41;
            iVar114 = -(uint)(fVar145 < *pfVar32);
            iVar116 = -(uint)(fVar145 < pfVar32[1]);
            iVar117 = -(uint)(fVar145 < pfVar32[2]);
            iVar118 = -(uint)(fVar145 < pfVar32[3]);
            auVar136 = NEON_frsqrte(auVar91,4);
            auVar92._0_4_ = auVar136._0_4_ * auVar91._0_4_;
            auVar92._4_4_ = auVar136._4_4_ * auVar91._4_4_;
            auVar92._8_4_ = auVar136._8_4_ * auVar91._8_4_;
            auVar92._12_4_ = auVar136._12_4_ * auVar91._12_4_;
            auVar137 = NEON_frsqrts(auVar92,auVar136,4);
            auVar149 = NEON_frecpe(auVar110,4);
            auVar115 = NEON_frecps(auVar110,auVar149,4);
            fVar87 = fVar119 - *pfVar32 * auVar136._0_4_ * auVar137._0_4_;
            fVar95 = fVar121 - pfVar32[1] * auVar136._4_4_ * auVar137._4_4_;
            fVar97 = fVar122 - pfVar32[2] * auVar136._8_4_ * auVar137._8_4_;
            fVar107 = fVar123 - pfVar32[3] * auVar136._12_4_ * auVar137._12_4_;
            fVar87 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & (byte)((uint)iVar114 >> 0x18),
                                     CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                              (byte)((uint)iVar114 >> 0x10),
                                              CONCAT11((byte)((uint)fVar87 >> 8) &
                                                       (byte)((uint)iVar114 >> 8),
                                                       SUB41(fVar87,0) & (byte)iVar114)));
            auVar89._0_8_ =
                 CONCAT17((byte)((uint)fVar95 >> 0x18) & (byte)((uint)iVar116 >> 0x18),
                          CONCAT16((byte)((uint)fVar95 >> 0x10) & (byte)((uint)iVar116 >> 0x10),
                                   CONCAT15((byte)((uint)fVar95 >> 8) & (byte)((uint)iVar116 >> 8),
                                            CONCAT14(SUB41(fVar95,0) & (byte)iVar116,fVar87))));
            auVar89[8] = SUB41(fVar97,0) & (byte)iVar117;
            auVar89[9] = (byte)((uint)fVar97 >> 8) & (byte)((uint)iVar117 >> 8);
            auVar89[10] = (byte)((uint)fVar97 >> 0x10) & (byte)((uint)iVar117 >> 0x10);
            auVar89[0xb] = (byte)((uint)fVar97 >> 0x18) & (byte)((uint)iVar117 >> 0x18);
            auVar93[0xc] = SUB41(fVar107,0) & (byte)iVar118;
            auVar93._0_12_ = auVar89;
            auVar93[0xd] = (byte)((uint)fVar107 >> 8) & (byte)((uint)iVar118 >> 8);
            auVar93[0xe] = (byte)((uint)fVar107 >> 0x10) & (byte)((uint)iVar118 >> 0x10);
            auVar93[0xf] = (byte)((uint)fVar107 >> 0x18) & (byte)((uint)iVar118 >> 0x18);
            fVar87 = auVar149._0_4_ * auVar115._0_4_ * fVar143 * fVar87;
            fVar95 = auVar149._4_4_ * auVar115._4_4_ *
                     fVar143 * (float)((ulong)auVar89._0_8_ >> 0x20);
            fVar97 = auVar149._8_4_ * auVar115._8_4_ * fVar143 * auVar89._8_4_;
            fVar107 = auVar149._12_4_ * auVar115._12_4_ * fVar143 * auVar93._12_4_;
            fVar214 = fVar214 * fVar87;
            fVar26 = fVar26 * fVar87;
            fVar86 = fVar86 * fVar87;
            fVar94 = fVar94 * fVar87;
            bVar82 = bVar153 & SUB41(fVar214,0);
            bVar83 = bVar155 & (byte)((uint)fVar214 >> 8);
            bVar84 = bVar156 & (byte)((uint)fVar214 >> 0x10);
            bVar85 = bVar157 & (byte)((uint)fVar214 >> 0x18);
            bVar201 = bVar158 & SUB41(fVar26,0);
            bVar202 = bVar159 & (byte)((uint)fVar26 >> 8);
            bVar203 = bVar160 & (byte)((uint)fVar26 >> 0x10);
            bVar204 = bVar161 & (byte)((uint)fVar26 >> 0x18);
            bVar205 = bVar162 & SUB41(fVar86,0);
            bVar206 = bVar164 & (byte)((uint)fVar86 >> 8);
            bVar207 = bVar165 & (byte)((uint)fVar86 >> 0x10);
            bVar208 = bVar166 & (byte)((uint)fVar86 >> 0x18);
            bVar209 = bVar167 & SUB41(fVar94,0);
            bVar210 = bVar168 & (byte)((uint)fVar94 >> 8);
            bVar211 = bVar169 & (byte)((uint)fVar94 >> 0x10);
            bVar212 = bVar170 & (byte)((uint)fVar94 >> 0x18);
            fVar213 = fVar213 * fVar95;
            fVar217 = fVar217 * fVar95;
            fVar218 = fVar218 * fVar95;
            fVar219 = fVar219 * fVar95;
            fVar214 = (float)CONCAT13(bVar157 & (byte)((uint)fVar213 >> 0x18),
                                      CONCAT12(bVar156 & (byte)((uint)fVar213 >> 0x10),
                                               CONCAT11(bVar155 & (byte)((uint)fVar213 >> 8),
                                                        bVar153 & SUB41(fVar213,0))));
            auVar215._0_8_ =
                 CONCAT17(bVar161 & (byte)((uint)fVar217 >> 0x18),
                          CONCAT16(bVar160 & (byte)((uint)fVar217 >> 0x10),
                                   CONCAT15(bVar159 & (byte)((uint)fVar217 >> 8),
                                            CONCAT14(bVar158 & SUB41(fVar217,0),fVar214))));
            auVar215[8] = bVar162 & SUB41(fVar218,0);
            auVar215[9] = bVar164 & (byte)((uint)fVar218 >> 8);
            auVar215[10] = bVar165 & (byte)((uint)fVar218 >> 0x10);
            auVar215[0xb] = bVar166 & (byte)((uint)fVar218 >> 0x18);
            auVar216[0xc] = bVar167 & SUB41(fVar219,0);
            auVar216._0_12_ = auVar215;
            auVar216[0xd] = bVar168 & (byte)((uint)fVar219 >> 8);
            auVar216[0xe] = bVar169 & (byte)((uint)fVar219 >> 0x10);
            auVar216[0xf] = bVar170 & (byte)((uint)fVar219 >> 0x18);
            fVar146 = fVar146 * fVar97;
            fVar147 = fVar147 * fVar97;
            fVar19 = fVar19 * fVar97;
            fVar179 = fVar179 * fVar97;
            bVar65 = bVar153 & SUB41(fVar146,0);
            bVar66 = bVar155 & (byte)((uint)fVar146 >> 8);
            bVar67 = bVar156 & (byte)((uint)fVar146 >> 0x10);
            bVar68 = bVar157 & (byte)((uint)fVar146 >> 0x18);
            bVar47 = bVar158 & SUB41(fVar147,0);
            bVar48 = bVar159 & (byte)((uint)fVar147 >> 8);
            bVar49 = bVar160 & (byte)((uint)fVar147 >> 0x10);
            bVar50 = bVar161 & (byte)((uint)fVar147 >> 0x18);
            bVar51 = bVar162 & SUB41(fVar19,0);
            bVar52 = bVar164 & (byte)((uint)fVar19 >> 8);
            bVar53 = bVar165 & (byte)((uint)fVar19 >> 0x10);
            bVar55 = bVar166 & (byte)((uint)fVar19 >> 0x18);
            bVar56 = bVar167 & SUB41(fVar179,0);
            bVar57 = bVar168 & (byte)((uint)fVar179 >> 8);
            bVar58 = bVar169 & (byte)((uint)fVar179 >> 0x10);
            bVar59 = bVar170 & (byte)((uint)fVar179 >> 0x18);
            fVar41 = fVar41 * fVar107;
            fVar46 = fVar46 * fVar107;
            fVar20 = fVar20 * fVar107;
            fVar21 = fVar21 * fVar107;
            bVar60 = bVar153 & SUB41(fVar41,0);
            bVar61 = bVar155 & (byte)((uint)fVar41 >> 8);
            bVar62 = bVar156 & (byte)((uint)fVar41 >> 0x10);
            bVar63 = bVar157 & (byte)((uint)fVar41 >> 0x18);
            bVar69 = bVar158 & SUB41(fVar46,0);
            bVar70 = bVar159 & (byte)((uint)fVar46 >> 8);
            bVar71 = bVar160 & (byte)((uint)fVar46 >> 0x10);
            bVar72 = bVar161 & (byte)((uint)fVar46 >> 0x18);
            bVar73 = bVar162 & SUB41(fVar20,0);
            bVar74 = bVar164 & (byte)((uint)fVar20 >> 8);
            bVar75 = bVar165 & (byte)((uint)fVar20 >> 0x10);
            bVar76 = bVar166 & (byte)((uint)fVar20 >> 0x18);
            bVar78 = bVar167 & SUB41(fVar21,0);
            bVar79 = bVar168 & (byte)((uint)fVar21 >> 8);
            bVar80 = bVar169 & (byte)((uint)fVar21 >> 0x10);
            bVar81 = bVar170 & (byte)((uint)fVar21 >> 0x18);
            fVar146 = (float)((ulong)auVar215._0_8_ >> 0x20);
            pfVar17 = (float *)(lVar37 + (ulong)uVar7 * 0x10);
            pfVar17[2] = pfVar16[2] +
                         (float)CONCAT13(bVar208,CONCAT12(bVar207,CONCAT11(bVar206,bVar205))) *
                         fVar25;
            pfVar17[3] = fVar25 + (float)CONCAT13(bVar212,CONCAT12(bVar211,CONCAT11(bVar210,bVar209)
                                                                  )) * fVar25;
            *pfVar17 = fVar96 + (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,bVar82))) *
                                fVar25;
            pfVar17[1] = fVar98 + (float)CONCAT13(bVar204,CONCAT12(bVar203,CONCAT11(bVar202,bVar201)
                                                                  )) * fVar25;
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar11 * 0x10);
            puVar15[1] = CONCAT44(fVar113 - (float)CONCAT13(bVar212,CONCAT12(bVar211,CONCAT11(
                                                  bVar210,bVar209))) * fVar113,
                                  fVar105 - (float)CONCAT13(bVar208,CONCAT12(bVar207,CONCAT11(
                                                  bVar206,bVar205))) * fVar113);
            *puVar15 = CONCAT44(fVar104 - (float)CONCAT13(bVar204,CONCAT12(bVar203,CONCAT11(bVar202,
                                                  bVar201))) * fVar113,
                                fVar103 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,
                                                  bVar82))) * fVar113);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar8 * 0x10);
            puVar15[1] = CONCAT44(fVar101 + auVar216._12_4_ * fVar101,
                                  fVar100 + auVar215._8_4_ * fVar101);
            *puVar15 = CONCAT44(fVar99 + fVar146 * fVar101,fVar106 + fVar214 * fVar101);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar12 * 0x10);
            puVar15[1] = CONCAT44(fVar200 - auVar216._12_4_ * fVar200,
                                  fVar198 - auVar215._8_4_ * fVar200);
            *puVar15 = CONCAT44(fVar197 - fVar146 * fVar200,fVar195 - fVar214 * fVar200);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar9 * 0x10);
            puVar15[1] = CONCAT44(fVar174 + (float)CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,
                                                  bVar56))) * fVar174,
                                  fVar173 + (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))) * fVar174);
            *puVar15 = CONCAT44(fVar171 + (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,
                                                  bVar47))) * fVar174,
                                fVar102 + (float)CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,
                                                  bVar65))) * fVar174);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar13 * 0x10);
            puVar15[1] = CONCAT44(fVar188 - (float)CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,
                                                  bVar56))) * fVar188,
                                  fVar186 - (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))) * fVar188);
            *puVar15 = CONCAT44(fVar185 - (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,
                                                  bVar47))) * fVar188,
                                fVar183 - (float)CONCAT13(bVar68,CONCAT12(bVar67,CONCAT11(bVar66,
                                                  bVar65))) * fVar188);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar10 * 0x10);
            puVar15[1] = CONCAT44(fVar182 + (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,
                                                  bVar78))) * fVar182,
                                  fVar180 + (float)CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,
                                                  bVar73))) * fVar182);
            *puVar15 = CONCAT44(fVar177 + (float)CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,
                                                  bVar69))) * fVar182,
                                fVar176 + (float)CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,
                                                  bVar60))) * fVar182);
            puVar15 = (undefined8 *)(lVar37 + (ulong)uVar14 * 0x10);
            puVar15[1] = CONCAT44(fVar194 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,
                                                  bVar78))) * fVar194,
                                  fVar192 - (float)CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,
                                                  bVar73))) * fVar194);
            *puVar15 = CONCAT44(fVar191 - (float)CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,
                                                  bVar69))) * fVar194,
                                fVar189 - (float)CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,
                                                  bVar60))) * fVar194);
            pfVar32 = pfVar32 + 4;
          } while (lVar34 != 0);
        }
      }
      else if (uVar3 != uVar5) {
        fVar145 = *(float *)puVar31;
        uVar150 = auVar149._8_4_;
        auVar139._4_4_ = uVar150;
        auVar139._0_4_ = uVar150;
        auVar139._8_4_ = uVar150;
        auVar139._12_4_ = uVar150;
        fVar146 = auVar149._4_4_;
        lVar34 = (ulong)uVar5 * 4 + uVar4 * -4;
        do {
          uVar7 = *puVar33;
          uVar8 = puVar33[2];
          uVar9 = puVar33[4];
          uVar10 = puVar33[6];
          uVar11 = puVar33[1];
          uVar12 = puVar33[3];
          lVar34 = lVar34 + -0x10;
          uVar13 = puVar33[5];
          uVar14 = puVar33[7];
          puVar33 = puVar33 + 8;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar7 * 0x10);
          uVar152 = puVar15[1];
          uVar151 = *puVar15;
          fVar171 = (float)uVar151;
          fVar173 = (float)((ulong)uVar151 >> 0x20);
          fVar174 = (float)uVar152;
          fVar176 = (float)((ulong)uVar152 >> 0x20);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar8 * 0x10);
          uVar181 = puVar15[1];
          uVar178 = *puVar15;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar9 * 0x10);
          uVar187 = puVar15[1];
          uVar184 = *puVar15;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar10 * 0x10);
          uVar193 = puVar15[1];
          uVar190 = *puVar15;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar11 * 0x10);
          uVar175 = puVar15[1];
          uVar172 = *puVar15;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar13 * 0x10);
          uVar163 = puVar15[1];
          uVar154 = *puVar15;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar12 * 0x10);
          uVar152 = puVar15[1];
          uVar151 = *puVar15;
          pfVar16 = (float *)(lVar37 + (ulong)uVar14 * 0x10);
          fVar213 = pfVar16[3];
          fVar183 = (float)uVar178;
          fVar185 = (float)((ulong)uVar178 >> 0x20);
          fVar186 = (float)uVar181;
          fVar188 = (float)((ulong)uVar181 >> 0x20);
          fVar189 = (float)uVar184;
          fVar191 = (float)((ulong)uVar184 >> 0x20);
          fVar192 = (float)uVar187;
          fVar194 = (float)((ulong)uVar187 >> 0x20);
          fVar195 = (float)uVar190;
          fVar197 = (float)((ulong)uVar190 >> 0x20);
          fVar198 = (float)uVar193;
          fVar200 = (float)((ulong)uVar193 >> 0x20);
          fVar177 = (float)uVar172;
          fVar147 = fVar177 + fVar171 * fVar134;
          fVar179 = (float)((ulong)uVar172 >> 0x20);
          fVar19 = fVar179 + fVar173 * fVar140;
          uVar54 = (undefined1)((uint)fVar19 >> 0x18);
          fVar180 = (float)uVar175;
          fVar41 = fVar180 + fVar174 * fVar141;
          fVar182 = (float)((ulong)uVar175 >> 0x20);
          fVar46 = fVar182 + fVar176 * fVar142;
          fVar20 = (float)uVar151;
          fVar86 = fVar20 + fVar183 * fVar134;
          fVar21 = (float)((ulong)uVar151 >> 0x20);
          fVar94 = fVar21 + fVar185 * fVar140;
          fVar214 = (float)uVar152;
          fVar96 = fVar214 + fVar186 * fVar141;
          fVar26 = (float)((ulong)uVar152 >> 0x20);
          fVar98 = fVar26 + fVar188 * fVar142;
          fVar25 = (float)uVar154;
          fVar99 = fVar25 + fVar189 * fVar134;
          fVar87 = (float)((ulong)uVar154 >> 0x20);
          fVar100 = fVar87 + fVar191 * fVar140;
          fVar95 = (float)uVar163;
          fVar101 = fVar95 + fVar192 * fVar141;
          fVar97 = (float)((ulong)uVar163 >> 0x20);
          fVar102 = fVar97 + fVar194 * fVar142;
          fVar103 = *pfVar16 + fVar195 * fVar134;
          fVar104 = pfVar16[1] + fVar197 * fVar140;
          fVar105 = pfVar16[2] + fVar198 * fVar141;
          fVar106 = fVar213 + fVar200 * fVar142;
          fVar107 = (float)(CONCAT17(uVar54,CONCAT16((char)((uint)fVar19 >> 0x10),
                                                     CONCAT15((char)((uint)fVar19 >> 8),
                                                              CONCAT14(SUB41(fVar19,0),fVar147))))
                           >> 0x20);
          uVar27 = CONCAT14((char)((uint)fVar41 >> 0x18),
                            CONCAT13((char)((uint)fVar41 >> 0x10),
                                     CONCAT12((char)((uint)fVar41 >> 8),
                                              CONCAT11(SUB41(fVar41,0),uVar54))));
          fVar111 = (float)((uint5)uVar27 >> 8);
          uVar54 = (undefined1)((uint)fVar105 >> 0x18);
          fVar112 = (float)(CONCAT17(uVar54,CONCAT16((char)((uint)fVar105 >> 0x10),
                                                     CONCAT15((char)((uint)fVar105 >> 8),
                                                              CONCAT14(SUB41(fVar105,0),fVar96))))
                           >> 0x20);
          uVar28 = CONCAT14((char)((uint)fVar98 >> 0x18),
                            CONCAT13((char)((uint)fVar98 >> 0x10),
                                     CONCAT12((char)((uint)fVar98 >> 8),
                                              CONCAT11(SUB41(fVar98,0),uVar54))));
          auVar43._0_4_ =
               fVar145 + (float)(CONCAT18((char)((uint)fVar46 >> 0x18),
                                          CONCAT17((char)((uint)fVar46 >> 0x10),
                                                   CONCAT16((char)((uint)fVar46 >> 8),
                                                            CONCAT15(SUB41(fVar46,0),uVar27)))) >>
                                0x28);
          auVar43._4_4_ = fVar145 + (float)((uint5)uVar28 >> 8);
          auVar43._8_4_ = fVar145 + fVar102;
          auVar43._12_4_ =
               fVar145 + (float)(CONCAT18((char)((uint)fVar106 >> 0x18),
                                          CONCAT17((char)((uint)fVar106 >> 0x10),
                                                   CONCAT16((char)((uint)fVar106 >> 8),
                                                            CONCAT15(SUB41(fVar106,0),uVar28)))) >>
                                0x28);
          auVar108._0_4_ = fVar111 * fVar111 + fVar107 * fVar107 + fVar145 + fVar147 * fVar147;
          auVar108._4_4_ = fVar96 * fVar96 + fVar94 * fVar94 + fVar145 + fVar86 * fVar86;
          auVar108._8_4_ = fVar101 * fVar101 + fVar100 * fVar100 + fVar145 + fVar99 * fVar99;
          auVar108._12_4_ = fVar112 * fVar112 + fVar104 * fVar104 + fVar145 + fVar103 * fVar103;
          auVar136 = NEON_frsqrte(auVar108,4);
          auVar109._0_4_ = auVar136._0_4_ * auVar108._0_4_;
          auVar109._4_4_ = auVar136._4_4_ * auVar108._4_4_;
          auVar109._8_4_ = auVar136._8_4_ * auVar108._8_4_;
          auVar109._12_4_ = auVar136._12_4_ * auVar108._12_4_;
          auVar137 = NEON_frsqrts(auVar109,auVar136,4);
          iVar114 = -(uint)(fVar145 < *pfVar32);
          iVar116 = -(uint)(fVar145 < pfVar32[1]);
          iVar117 = -(uint)(fVar145 < pfVar32[2]);
          iVar118 = -(uint)(fVar145 < pfVar32[3]);
          fVar107 = fVar119 - *pfVar32 * auVar136._0_4_ * auVar137._0_4_;
          fVar111 = fVar121 - pfVar32[1] * auVar136._4_4_ * auVar137._4_4_;
          fVar112 = fVar122 - pfVar32[2] * auVar136._8_4_ * auVar137._8_4_;
          fVar113 = fVar123 - pfVar32[3] * auVar136._12_4_ * auVar137._12_4_;
          bVar47 = SUB41(fVar107,0) & (byte)iVar114;
          bVar48 = (byte)((uint)fVar107 >> 8) & (byte)((uint)iVar114 >> 8);
          bVar49 = (byte)((uint)fVar107 >> 0x10) & (byte)((uint)iVar114 >> 0x10);
          bVar50 = (byte)((uint)fVar107 >> 0x18) & (byte)((uint)iVar114 >> 0x18);
          bVar51 = SUB41(fVar111,0) & (byte)iVar116;
          bVar52 = (byte)((uint)fVar111 >> 8) & (byte)((uint)iVar116 >> 8);
          bVar53 = (byte)((uint)fVar111 >> 0x10) & (byte)((uint)iVar116 >> 0x10);
          bVar55 = (byte)((uint)fVar111 >> 0x18) & (byte)((uint)iVar116 >> 0x18);
          bVar56 = SUB41(fVar112,0) & (byte)iVar117;
          bVar57 = (byte)((uint)fVar112 >> 8) & (byte)((uint)iVar117 >> 8);
          bVar58 = (byte)((uint)fVar112 >> 0x10) & (byte)((uint)iVar117 >> 0x10);
          bVar59 = (byte)((uint)fVar112 >> 0x18) & (byte)((uint)iVar117 >> 0x18);
          bVar60 = SUB41(fVar113,0) & (byte)iVar118;
          bVar61 = (byte)((uint)fVar113 >> 8) & (byte)((uint)iVar118 >> 8);
          bVar62 = (byte)((uint)fVar113 >> 0x10) & (byte)((uint)iVar118 >> 0x10);
          bVar63 = (byte)((uint)fVar113 >> 0x18) & (byte)((uint)iVar118 >> 0x18);
          auVar115 = NEON_frecpe(auVar43,4);
          auVar18[1] = bVar48;
          auVar18[0] = bVar47;
          auVar18[2] = bVar49;
          auVar18[3] = bVar50;
          auVar18[4] = bVar51;
          auVar18[5] = bVar52;
          auVar18[6] = bVar53;
          auVar18[7] = bVar55;
          auVar18[8] = bVar56;
          auVar18[9] = bVar57;
          auVar18[10] = bVar58;
          auVar18[0xb] = bVar59;
          auVar18[0xc] = bVar60;
          auVar18[0xd] = bVar61;
          auVar18[0xe] = bVar62;
          auVar18[0xf] = bVar63;
          auVar23[4] = bVar65;
          auVar23._0_4_ = auVar149._12_4_;
          auVar23[5] = bVar66;
          auVar23[6] = bVar67;
          auVar23[7] = bVar68;
          auVar23[8] = bVar65;
          auVar23[9] = bVar66;
          auVar23[10] = bVar67;
          auVar23[0xb] = bVar68;
          auVar23[0xc] = bVar65;
          auVar23[0xd] = bVar66;
          auVar23[0xe] = bVar67;
          auVar23[0xf] = bVar68;
          auVar136 = NEON_fmin(auVar18,auVar23,4);
          auVar137 = NEON_frecps(auVar43,auVar115,4);
          auVar136 = NEON_fmax(auVar139,auVar136,4);
          fVar107 = auVar115._0_4_ * auVar137._0_4_ *
                    fVar143 * ((float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,bVar47))) -
                              fVar146 * auVar136._0_4_);
          fVar111 = auVar115._4_4_ * auVar137._4_4_ *
                    fVar143 * ((float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar52,bVar51))) -
                              fVar146 * auVar136._4_4_);
          fVar112 = auVar115._8_4_ * auVar137._8_4_ *
                    fVar143 * ((float)CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,bVar56))) -
                              fVar146 * auVar136._8_4_);
          fVar113 = auVar115._12_4_ * auVar137._12_4_ *
                    fVar143 * ((float)CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar60))) -
                              fVar146 * auVar136._12_4_);
          fVar147 = fVar147 * fVar107;
          fVar19 = fVar19 * fVar107;
          fVar41 = fVar41 * fVar107;
          fVar46 = fVar46 * fVar107;
          bVar47 = bVar153 & SUB41(fVar147,0);
          bVar48 = bVar155 & (byte)((uint)fVar147 >> 8);
          bVar49 = bVar156 & (byte)((uint)fVar147 >> 0x10);
          bVar50 = bVar157 & (byte)((uint)fVar147 >> 0x18);
          bVar51 = bVar158 & SUB41(fVar19,0);
          bVar52 = bVar159 & (byte)((uint)fVar19 >> 8);
          bVar53 = bVar160 & (byte)((uint)fVar19 >> 0x10);
          bVar55 = bVar161 & (byte)((uint)fVar19 >> 0x18);
          bVar56 = bVar162 & SUB41(fVar41,0);
          bVar57 = bVar164 & (byte)((uint)fVar41 >> 8);
          bVar58 = bVar165 & (byte)((uint)fVar41 >> 0x10);
          bVar59 = bVar166 & (byte)((uint)fVar41 >> 0x18);
          bVar60 = bVar167 & SUB41(fVar46,0);
          bVar61 = bVar168 & (byte)((uint)fVar46 >> 8);
          bVar62 = bVar169 & (byte)((uint)fVar46 >> 0x10);
          bVar63 = bVar170 & (byte)((uint)fVar46 >> 0x18);
          fVar86 = fVar86 * fVar111;
          fVar94 = fVar94 * fVar111;
          fVar96 = fVar96 * fVar111;
          fVar98 = fVar98 * fVar111;
          bVar69 = bVar153 & SUB41(fVar86,0);
          bVar70 = bVar155 & (byte)((uint)fVar86 >> 8);
          bVar71 = bVar156 & (byte)((uint)fVar86 >> 0x10);
          bVar72 = bVar157 & (byte)((uint)fVar86 >> 0x18);
          bVar73 = bVar158 & SUB41(fVar94,0);
          bVar74 = bVar159 & (byte)((uint)fVar94 >> 8);
          bVar75 = bVar160 & (byte)((uint)fVar94 >> 0x10);
          bVar76 = bVar161 & (byte)((uint)fVar94 >> 0x18);
          bVar78 = bVar162 & SUB41(fVar96,0);
          bVar79 = bVar164 & (byte)((uint)fVar96 >> 8);
          bVar80 = bVar165 & (byte)((uint)fVar96 >> 0x10);
          bVar81 = bVar166 & (byte)((uint)fVar96 >> 0x18);
          bVar82 = bVar167 & SUB41(fVar98,0);
          bVar83 = bVar168 & (byte)((uint)fVar98 >> 8);
          bVar84 = bVar169 & (byte)((uint)fVar98 >> 0x10);
          bVar85 = bVar170 & (byte)((uint)fVar98 >> 0x18);
          fVar99 = fVar99 * fVar112;
          fVar100 = fVar100 * fVar112;
          fVar101 = fVar101 * fVar112;
          fVar102 = fVar102 * fVar112;
          fVar86 = (float)CONCAT13(bVar157 & (byte)((uint)fVar99 >> 0x18),
                                   CONCAT12(bVar156 & (byte)((uint)fVar99 >> 0x10),
                                            CONCAT11(bVar155 & (byte)((uint)fVar99 >> 8),
                                                     bVar153 & SUB41(fVar99,0))));
          auVar88._0_8_ =
               CONCAT17(bVar161 & (byte)((uint)fVar100 >> 0x18),
                        CONCAT16(bVar160 & (byte)((uint)fVar100 >> 0x10),
                                 CONCAT15(bVar159 & (byte)((uint)fVar100 >> 8),
                                          CONCAT14(bVar158 & SUB41(fVar100,0),fVar86))));
          auVar88[8] = bVar162 & SUB41(fVar101,0);
          auVar88[9] = bVar164 & (byte)((uint)fVar101 >> 8);
          auVar88[10] = bVar165 & (byte)((uint)fVar101 >> 0x10);
          auVar88[0xb] = bVar166 & (byte)((uint)fVar101 >> 0x18);
          auVar90[0xc] = bVar167 & SUB41(fVar102,0);
          auVar90._0_12_ = auVar88;
          auVar90[0xd] = bVar168 & (byte)((uint)fVar102 >> 8);
          auVar90[0xe] = bVar169 & (byte)((uint)fVar102 >> 0x10);
          auVar90[0xf] = bVar170 & (byte)((uint)fVar102 >> 0x18);
          fVar103 = fVar103 * fVar113;
          fVar104 = fVar104 * fVar113;
          fVar105 = fVar105 * fVar113;
          fVar106 = fVar106 * fVar113;
          fVar41 = (float)CONCAT13(bVar157 & (byte)((uint)fVar103 >> 0x18),
                                   CONCAT12(bVar156 & (byte)((uint)fVar103 >> 0x10),
                                            CONCAT11(bVar155 & (byte)((uint)fVar103 >> 8),
                                                     bVar153 & SUB41(fVar103,0))));
          auVar42._0_8_ =
               CONCAT17(bVar161 & (byte)((uint)fVar104 >> 0x18),
                        CONCAT16(bVar160 & (byte)((uint)fVar104 >> 0x10),
                                 CONCAT15(bVar159 & (byte)((uint)fVar104 >> 8),
                                          CONCAT14(bVar158 & SUB41(fVar104,0),fVar41))));
          auVar42[8] = bVar162 & SUB41(fVar105,0);
          auVar42[9] = bVar164 & (byte)((uint)fVar105 >> 8);
          auVar42[10] = bVar165 & (byte)((uint)fVar105 >> 0x10);
          auVar42[0xb] = bVar166 & (byte)((uint)fVar105 >> 0x18);
          auVar44[0xc] = bVar167 & SUB41(fVar106,0);
          auVar44._0_12_ = auVar42;
          auVar44[0xd] = bVar168 & (byte)((uint)fVar106 >> 8);
          auVar44[0xe] = bVar169 & (byte)((uint)fVar106 >> 0x10);
          auVar44[0xf] = bVar170 & (byte)((uint)fVar106 >> 0x18);
          fVar94 = (float)((ulong)auVar88._0_8_ >> 0x20);
          fVar46 = (float)((ulong)auVar42._0_8_ >> 0x20);
          fVar179 = fVar179 - (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar52,bVar51))) *
                              fVar182;
          fVar147 = fVar182 - (float)CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,bVar60))) *
                              fVar182;
          fVar87 = fVar87 - fVar94 * fVar97;
          fVar19 = fVar97 - auVar90._12_4_ * fVar97;
          auVar45._0_8_ = CONCAT44(pfVar16[1] - fVar46 * fVar213,*pfVar16 - fVar41 * fVar213);
          auVar45._8_4_ = pfVar16[2] - auVar42._8_4_ * fVar213;
          auVar45._12_4_ = fVar213 - auVar44._12_4_ * fVar213;
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar7 * 0x10);
          puVar15[1] = CONCAT44(fVar176 + (float)CONCAT13(bVar63,CONCAT12(bVar62,CONCAT11(bVar61,
                                                  bVar60))) * fVar176,
                                fVar174 + (float)CONCAT13(bVar59,CONCAT12(bVar58,CONCAT11(bVar57,
                                                  bVar56))) * fVar176);
          *puVar15 = CONCAT44(fVar173 + (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar52,
                                                  bVar51))) * fVar176,
                              fVar171 + (float)CONCAT13(bVar50,CONCAT12(bVar49,CONCAT11(bVar48,
                                                  bVar47))) * fVar176);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar11 * 0x10);
          puVar15[1] = CONCAT17((char)((uint)fVar147 >> 0x18),
                                CONCAT16((char)((uint)fVar147 >> 0x10),
                                         CONCAT15((char)((uint)fVar147 >> 8),
                                                  CONCAT14(SUB41(fVar147,0),
                                                           fVar180 - (float)CONCAT13(bVar59,CONCAT12
                                                  (bVar58,CONCAT11(bVar57,bVar56))) * fVar182))));
          *puVar15 = CONCAT17((char)((uint)fVar179 >> 0x18),
                              CONCAT16((char)((uint)fVar179 >> 0x10),
                                       CONCAT15((char)((uint)fVar179 >> 8),
                                                CONCAT14(SUB41(fVar179,0),
                                                         fVar177 - (float)CONCAT13(bVar50,CONCAT12(
                                                  bVar49,CONCAT11(bVar48,bVar47))) * fVar182))));
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar8 * 0x10);
          puVar15[1] = CONCAT44(fVar188 + (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,
                                                  bVar82))) * fVar188,
                                fVar186 + (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,
                                                  bVar78))) * fVar188);
          *puVar15 = CONCAT44(fVar185 + (float)CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,
                                                  bVar73))) * fVar188,
                              fVar183 + (float)CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,
                                                  bVar69))) * fVar188);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar12 * 0x10);
          puVar15[1] = CONCAT44(fVar26 - (float)CONCAT13(bVar85,CONCAT12(bVar84,CONCAT11(bVar83,
                                                  bVar82))) * fVar26,
                                fVar214 - (float)CONCAT13(bVar81,CONCAT12(bVar80,CONCAT11(bVar79,
                                                  bVar78))) * fVar26);
          *puVar15 = CONCAT44(fVar21 - (float)CONCAT13(bVar76,CONCAT12(bVar75,CONCAT11(bVar74,bVar73
                                                                                      ))) * fVar26,
                              fVar20 - (float)CONCAT13(bVar72,CONCAT12(bVar71,CONCAT11(bVar70,bVar69
                                                                                      ))) * fVar26);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar9 * 0x10);
          puVar15[1] = CONCAT44(fVar194 + auVar90._12_4_ * fVar194,fVar192 + auVar88._8_4_ * fVar194
                               );
          *puVar15 = CONCAT44(fVar191 + fVar94 * fVar194,fVar189 + fVar86 * fVar194);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar13 * 0x10);
          puVar15[1] = CONCAT17((char)((uint)fVar19 >> 0x18),
                                CONCAT16((char)((uint)fVar19 >> 0x10),
                                         CONCAT15((char)((uint)fVar19 >> 8),
                                                  CONCAT14(SUB41(fVar19,0),
                                                           fVar95 - auVar88._8_4_ * fVar97))));
          *puVar15 = CONCAT17((char)((uint)fVar87 >> 0x18),
                              CONCAT16((char)((uint)fVar87 >> 0x10),
                                       CONCAT15((char)((uint)fVar87 >> 8),
                                                CONCAT14(SUB41(fVar87,0),fVar25 - fVar86 * fVar97)))
                             );
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar10 * 0x10);
          puVar15[1] = CONCAT44(fVar200 + auVar44._12_4_ * fVar200,fVar198 + auVar42._8_4_ * fVar200
                               );
          *puVar15 = CONCAT44(fVar197 + fVar46 * fVar200,fVar195 + fVar41 * fVar200);
          puVar15 = (undefined8 *)(lVar37 + (ulong)uVar14 * 0x10);
          puVar15[1] = auVar45._8_8_;
          *puVar15 = auVar45._0_8_;
          pfVar32 = pfVar32 + 4;
        } while (lVar34 != 0);
      }
      puVar35 = puVar35 + 10;
    } while (puVar35 != puVar6);
  }
  return;
}


