/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028cba0; name: FUN_0028cba0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028cba0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4,undefined4 param_5,long param_6,undefined1 (*param_7) [12],
                 long *param_8,long param_9,uint *param_10,undefined8 *param_11,
                 undefined1 (*param_12) [16])

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  float fVar24;
  undefined8 extraout_d0;
  byte bVar32;
  float fVar34;
  undefined8 extraout_var;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar35;
  undefined1 auVar36 [12];
  byte bVar49;
  undefined1 auVar38 [16];
  float fVar51;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar37 [12];
  byte bVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  int iVar52;
  undefined1 auVar53 [12];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar65;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined8 uVar76;
  ulong uVar77;
  undefined8 uVar78;
  undefined1 auVar79 [16];
  float fVar80;
  float fVar82;
  undefined1 auVar81 [16];
  ulong uVar83;
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  ulong uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  ulong uVar92;
  undefined1 auVar93 [16];
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  float fVar112;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  ulong local_278;
  ulong local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  ulong uStack_248;
  byte *local_238;
  long local_230;
  long *local_228;
  long local_220;
  ulong local_218;
  ulong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  float local_1f0;
  float fStack_1ec;
  undefined8 uStack_1e8;
  float local_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  uint local_1cc;
  long local_1c8;
  undefined8 local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  long local_198;
  undefined8 local_190;
  ulong uStack_188;
  long local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 (*local_f8) [16];
  undefined4 local_ec;
  ulong local_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  
  local_e8 = (ulong)*param_10;
  local_f8 = param_12;
  local_ec = param_5;
  FUN_0028f1d0();
  uStack_118 = param_2._8_8_;
  local_120 = param_2._0_8_;
  uStack_128 = param_3._8_8_;
  local_130 = param_3._0_8_;
  bVar32 = param_7[1][6];
  local_238 = (byte *)(*(long *)(param_6 + 0x28) + (ulong)*(ushort *)(param_7[1] + 4));
  lVar21 = (long)&local_2a0 - ((ulong)((uint)bVar32 * 0x10 + 0x1f) & 0x1ff0);
  lVar22 = lVar21 - ((ulong)((uint)bVar32 * 8 + 0x1f) & 0xff0);
  lVar18 = lVar22 - ((ulong)(bVar32 + 0xf) & 0x1f0);
  fStack_158 = (float)*(undefined8 *)(param_4 + 0x38);
  fStack_154 = (float)((ulong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
  local_160 = (float)*(undefined8 *)(param_4 + 0x30);
  fStack_15c = (float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
  fStack_148 = (float)*(undefined8 *)(param_4 + 0x48);
  fStack_144 = (float)((ulong)*(undefined8 *)(param_4 + 0x48) >> 0x20);
  local_150 = (float)*(undefined8 *)(param_4 + 0x40);
  fStack_14c = (float)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
  uStack_138 = SUB168(*(undefined1 (*) [16])(param_4 + 0x50),8);
  local_140 = SUB168(*(undefined1 (*) [16])(param_4 + 0x50),0);
  local_220 = param_4;
  local_110 = extraout_d0;
  uStack_108 = extraout_var;
  (**(code **)(*param_8 + 0x20))(param_8,local_238,bVar32,*(undefined8 *)(param_6 + 0x20),lVar21);
  lVar20 = local_220;
  fVar103 = (float)local_110;
  fVar104 = (float)((ulong)local_110 >> 0x20);
  fVar112 = (float)uStack_108;
  fVar85 = (float)local_120;
  fVar86 = (float)((ulong)local_120 >> 0x20);
  fVar73 = (float)uStack_118;
  fVar62 = (float)local_130;
  fVar64 = (float)((ulong)local_130 >> 0x20);
  fVar51 = (float)uStack_128;
  auVar25._8_8_ = _UNK_01d4b8f8;
  auVar25._0_8_ = _DAT_01d4b8f0;
  auVar38._8_8_ = _UNK_01d4a628;
  auVar38._0_8_ = _DAT_01d4a620;
  local_178 = param_9;
  fVar105 = (float)local_140;
  fVar61 = (float)((ulong)local_140 >> 0x20);
  fVar100 = fVar62 * fStack_158 + fVar103 * local_160 + fVar85 * fStack_15c;
  fVar101 = fVar64 * fStack_158 + fVar104 * local_160 + fVar86 * fStack_15c;
  fVar102 = fVar51 * fStack_158 + fVar112 * local_160 + fVar73 * fStack_15c;
  fVar111 = (float)uStack_138;
  fVar80 = fVar62 * fStack_148 + fVar103 * local_150 + fVar85 * fStack_14c;
  fVar82 = fVar64 * fStack_148 + fVar104 * local_150 + fVar86 * fStack_14c;
  auVar26._0_8_ = CONCAT44(fVar82,fVar80);
  auVar26._8_4_ = fVar51 * fStack_148 + fVar112 * local_150 + fVar73 * fStack_14c;
  auVar26._12_4_ = 0;
  fVar103 = fVar62 * fVar111 + fVar103 * fVar105 + fVar85 * fVar61;
  fVar104 = fVar64 * fVar111 + fVar104 * fVar105 + fVar86 * fVar61;
  fVar105 = fVar51 * fVar111 + fVar112 * fVar105 + fVar73 * fVar61;
  uStack_d8 = (ulong)(uint)fVar102;
  local_e0 = CONCAT44(fVar101,fVar100);
  uStack_c8 = (ulong)(uint)auVar26._8_4_;
  uStack_d0 = auVar26._0_8_;
  uStack_188 = (ulong)(uint)fVar102;
  local_190 = CONCAT44(fVar101,fVar100);
  uStack_b8 = (ulong)(uint)fVar105;
  local_c0 = CONCAT44(fVar104,fVar103);
  local_228 = param_8;
  local_230 = param_6;
  if (param_7[1][6] != '\0') {
    auVar70._4_4_ = fVar101;
    auVar70._0_4_ = fVar100;
    auVar70._8_4_ = fVar102;
    auVar70._12_4_ = 0;
    auVar25 = NEON_fmin(auVar25,auVar70,4);
    auVar5._4_4_ = fVar101;
    auVar5._0_4_ = fVar100;
    auVar5._8_4_ = fVar102;
    auVar5._12_4_ = 0;
    auVar38 = NEON_fmax(auVar38,auVar5,4);
    auVar108._8_8_ = _UNK_01d4a628;
    auVar108._0_8_ = _DAT_01d4a620;
    fVar61 = fVar82 - fVar101;
    auVar110._8_8_ = _UNK_01d4b8f8;
    auVar110._0_8_ = _DAT_01d4b8f0;
    uVar76 = *param_11;
    local_1c8 = param_9 + local_e8 * 0x40;
    local_1cc = (int)local_e8 + 5;
    fVar73 = fVar104 - fVar82;
    auVar25 = NEON_fmin(auVar25,auVar26,4);
    uStack_248 = (ulong)(uint)auVar26._8_4_;
    local_250 = auVar26._0_8_;
    auVar38 = NEON_fmax(auVar38,auVar26,4);
    fVar62 = SUB164(ZEXT816(0x3400000034000000),0);
    fVar64 = SUB164(ZEXT816(0x3400000034000000),4);
    local_1f8 = CONCAT44(fVar80 - fVar100,fVar80 - fVar100);
    local_258 = CONCAT44(fVar103 - fVar80,fVar103 - fVar80);
    local_208 = CONCAT44((fVar100 + fVar64) * fVar61,(fVar100 + fVar62) * fVar61);
    iVar52 = -(uint)(0.0 < fVar61);
    auVar6._4_4_ = fVar104;
    auVar6._0_4_ = fVar103;
    auVar6._8_4_ = fVar105;
    auVar6._12_4_ = 0;
    auVar26 = NEON_fmin(auVar25,auVar6,4);
    local_200 = CONCAT44(fVar61,fVar61);
    fVar111 = auVar26._0_4_ + (float)_DAT_01d4a140;
    fVar112 = auVar26._4_4_ + (float)((ulong)_DAT_01d4a140 >> 0x20);
    uStack_288 = _UNK_01d4a148;
    local_290 = _DAT_01d4a140;
    auVar7._4_4_ = fVar104;
    auVar7._0_4_ = fVar103;
    auVar7._8_4_ = fVar105;
    auVar7._12_4_ = 0;
    auVar25 = NEON_fmax(auVar38,auVar7,4);
    bVar32 = (byte)((uint)iVar52 >> 8);
    bVar49 = (byte)((uint)iVar52 >> 0x10);
    bVar50 = (byte)((uint)iVar52 >> 0x18);
    local_210 = CONCAT44(iVar52,iVar52);
    fVar85 = auVar25._0_4_ + (float)_DAT_01d4a480;
    fVar86 = auVar25._4_4_ + (float)((ulong)_DAT_01d4a480 >> 0x20);
    local_218 = CONCAT17(~bVar50,CONCAT16(~bVar49,CONCAT15(~bVar32,CONCAT14(~(byte)iVar52,
                                                                            CONCAT13(~bVar50,
                                                  CONCAT12(~bVar49,CONCAT11(~bVar32,~(byte)iVar52)))
                                                  ))));
    local_170 = CONCAT44(fVar80,fVar80);
    local_268 = CONCAT44((fVar80 + fVar64) * fVar73,(fVar80 + fVar62) * fVar73);
    iVar52 = -(uint)(0.0 < fVar73);
    local_260 = CONCAT44(fVar73,fVar73);
    local_270 = CONCAT44(iVar52,iVar52);
    bVar32 = (byte)((uint)iVar52 >> 8);
    bVar49 = (byte)((uint)iVar52 >> 0x10);
    bVar50 = (byte)((uint)iVar52 >> 0x18);
    local_278 = CONCAT17(~bVar50,CONCAT16(~bVar49,CONCAT15(~bVar32,CONCAT14(~(byte)iVar52,
                                                                            CONCAT13(~bVar50,
                                                  CONCAT12(~bVar49,CONCAT11(~bVar32,~(byte)iVar52)))
                                                  ))));
    fVar61 = fVar101 - fVar104;
    local_198 = CONCAT44(fVar100 - fVar103,fVar100 - fVar103);
    local_1a8 = CONCAT44((fVar103 + fVar64) * fVar61,(fVar103 + fVar62) * fVar61);
    uVar23 = -(uint)(0.0 < fVar61);
    bVar32 = (byte)(uVar23 >> 8);
    bVar49 = (byte)(uVar23 >> 0x10);
    bVar50 = (byte)(uVar23 >> 0x18);
    local_1a0 = CONCAT44(fVar61,fVar61);
    local_1b0 = CONCAT17(~bVar50,CONCAT16(~bVar49,CONCAT15(~bVar32,CONCAT14(~(byte)uVar23,
                                                                            CONCAT13(~bVar50,
                                                  CONCAT12(~bVar49,CONCAT11(~bVar32,~(byte)uVar23)))
                                                  ))));
    uStack_298 = _UNK_01d4a488;
    local_2a0 = _DAT_01d4a480;
    uStack_1b8 = (ulong)(uint)fVar105;
    local_1c0 = CONCAT44(fVar104,fVar103);
    uVar17 = 0;
    uVar19 = 0;
    uStack_1d8 = CONCAT44(auVar26._12_4_ + (float)((ulong)_UNK_01d4a148 >> 0x20),
                          auVar26._8_4_ + (float)_UNK_01d4a148);
    local_1e0 = fVar111;
    fStack_1dc = fVar112;
    uStack_1e8 = CONCAT44(auVar25._12_4_ + (float)((ulong)_UNK_01d4a488 >> 0x20),
                          auVar25._8_4_ + (float)_UNK_01d4a488);
    local_1f0 = fVar85;
    fStack_1ec = fVar86;
    uVar94 = local_110;
    uVar95 = uStack_108;
    uVar96 = local_120;
    uVar97 = uStack_118;
    uVar98 = local_130;
    uVar99 = uStack_128;
    fVar61 = fVar101;
    fVar105 = fVar102;
    fVar80 = fVar104;
    do {
      auVar26 = *(undefined1 (*) [16])(lVar21 + uVar17 * 0x10);
      fVar24 = auVar26._0_4_;
      fVar33 = auVar26._4_4_;
      fVar34 = auVar26._8_4_;
      fVar73 = (float)uVar98 * fVar34 + (float)uVar94 * fVar24 + (float)uVar96 * fVar33;
      fVar62 = (float)((ulong)uVar98 >> 0x20) * fVar34 +
               (float)((ulong)uVar94 >> 0x20) * fVar24 + (float)((ulong)uVar96 >> 0x20) * fVar33;
      fVar63 = (float)uVar99 * fVar34 + (float)uVar95 * fVar24 + (float)uVar97 * fVar33;
      fVar64 = 0.0;
      fVar51 = fVar63 - fVar105;
      *(ulong *)(lVar22 + uVar17 * 8) = CONCAT44(fVar51,fVar51);
      puVar2 = (undefined8 *)(lVar21 + uVar17 * 0x10);
      puVar2[1] = (ulong)(uint)fVar105;
      *puVar2 = CONCAT44(fVar62,fVar73);
      fVar51 = fVar105;
      if (fVar102 + (float)uVar76 <= fVar63) {
        uVar13 = 0;
      }
      else {
        bVar49 = -(fVar86 < fVar62) | -(fVar62 < fVar112);
        bVar32 = (byte)(((uint)bVar49 << 0x1f) >> 0x18);
        bVar49 = (byte)(((uint)CONCAT12(bVar49,(ushort)(byte)(-(fVar85 < fVar73) |
                                                             -(fVar73 < fVar111))) << 0x1f) >> 0x18)
        ;
        iVar52 = CONCAT13((char)(bVar32 | bVar49) >> 7,
                          CONCAT12((char)(bVar32 | bVar49) >> 7,
                                   CONCAT11((char)(bVar32 | bVar49) >> 7,
                                            (char)(bVar32 | bVar49) >> 7)));
        auVar36._0_8_ =
             CONCAT17((char)(bVar32 | bVar49) >> 7,
                      CONCAT16((char)(bVar32 | bVar49) >> 7,
                               CONCAT15((char)(bVar32 | bVar49) >> 7,
                                        CONCAT14((char)(bVar32 | bVar49) >> 7,iVar52))));
        auVar36[8] = (char)(bVar32 | bVar49) >> 7;
        auVar36[9] = (char)(bVar32 | bVar49) >> 7;
        auVar36[10] = (char)(bVar32 | bVar49) >> 7;
        auVar36[0xb] = (char)(bVar32 | bVar49) >> 7;
        auVar39[0xc] = (char)(bVar32 | bVar49) >> 7;
        auVar39._0_12_ = auVar36;
        auVar39[0xd] = (char)(bVar32 | bVar49) >> 7;
        auVar39[0xe] = (char)(bVar32 | bVar49) >> 7;
        auVar39[0xf] = (char)(bVar32 | bVar49) >> 7;
        auVar40._0_4_ = -(uint)(iVar52 == -1);
        auVar40._4_4_ = -(uint)((int)((ulong)auVar36._0_8_ >> 0x20) == -1);
        auVar40._8_4_ = -(uint)(auVar36._8_4_ == -1);
        auVar40._12_4_ = -(uint)(auVar39._12_4_ == -1);
        NEON_ext(auVar40,auVar40,8,1);
        if (CONCAT13((char)auVar40._12_4_,
                     CONCAT12((char)auVar40._8_4_,CONCAT11((char)auVar40._4_4_,(char)auVar40._0_4_))
                    ) != -1) {
          iVar52 = -(uint)(fVar73 == fVar103 && fVar62 == fVar104);
          iVar35 = -(uint)(fVar73 == fVar100 && fVar62 == fVar101);
          bVar32 = (byte)((uint)iVar35 >> 8);
          bVar49 = (byte)((uint)iVar35 >> 0x10);
          bVar50 = (byte)((uint)iVar35 >> 0x18);
          iVar65 = CONCAT13(bVar50 | (byte)((uint)iVar52 >> 0x18),
                            CONCAT12(bVar49 | (byte)((uint)iVar52 >> 0x10),
                                     CONCAT11(bVar32 | (byte)((uint)iVar52 >> 8),
                                              (byte)iVar35 | (byte)iVar52)));
          auVar66._0_4_ = -(uint)(iVar65 == -1);
          auVar66._4_4_ = -(uint)(iVar65 == -1);
          auVar66._8_4_ = -(uint)(iVar65 == -1);
          auVar66._12_4_ = -(uint)(iVar65 == -1);
          NEON_ext(auVar66,auVar66,8,1);
          if (CONCAT13((char)auVar66._12_4_,
                       CONCAT12((char)auVar66._8_4_,
                                CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))) != -1) {
            fVar87 = fVar73 * (float)local_1a0;
            fVar63 = (float)local_198 * (fVar62 - fVar80) + (float)local_1a8;
            uVar92 = local_1b0 & (uint)fVar87;
            uVar1 = uVar23 & (uint)fVar87;
            uVar11 = uVar23 & (uint)fVar63;
            uVar77 = (uint)fVar63 & local_1b0;
            bVar12 = fVar62 < fVar104 != fVar62 < fVar101 &&
                     (float)CONCAT13((byte)(uVar77 >> 0x18) | (byte)(uVar1 >> 0x18),
                                     CONCAT12((byte)(uVar77 >> 0x10) | (byte)(uVar1 >> 0x10),
                                              CONCAT11((byte)(uVar77 >> 8) | (byte)(uVar1 >> 8),
                                                       (byte)uVar77 | (byte)uVar1))) <=
                     (float)CONCAT13((byte)(uVar92 >> 0x18) | (byte)(uVar11 >> 0x18),
                                     CONCAT12((byte)(uVar92 >> 0x10) | (byte)(uVar11 >> 0x10),
                                              CONCAT11((byte)(uVar92 >> 8) | (byte)(uVar11 >> 8),
                                                       (byte)uVar92 | (byte)uVar11)));
            iVar65 = -(uint)(fVar62 == fVar82 && fVar73 == (float)local_170);
            iVar35 = CONCAT13((byte)((uint)iVar65 >> 0x18) | bVar50,
                              CONCAT12((byte)((uint)iVar65 >> 0x10) | bVar49,
                                       CONCAT11((byte)((uint)iVar65 >> 8) | bVar32,
                                                (byte)iVar65 | (byte)iVar35)));
            auVar81._0_4_ = -(uint)(iVar35 == -1);
            auVar81._4_4_ = -(uint)(iVar35 == -1);
            auVar81._8_4_ = -(uint)(iVar35 == -1);
            auVar81._12_4_ = -(uint)(iVar35 == -1);
            NEON_ext(auVar81,auVar81,8,1);
            if (CONCAT13((char)auVar81._12_4_,
                         CONCAT12((char)auVar81._8_4_,
                                  CONCAT11((char)auVar81._4_4_,(char)auVar81._0_4_))) != -1) {
              if (fVar62 < fVar101 != fVar62 < fVar82) {
                uVar92 = (ulong)(uint)(fVar73 * (float)local_200);
                uVar77 = (ulong)(uint)((float)local_1f8 * (fVar62 - fVar61) + (float)local_208);
                uVar88 = local_218 & uVar92;
                uVar92 = local_210 & uVar92;
                uVar83 = local_210 & uVar77;
                uVar77 = uVar77 & local_218;
                if ((float)CONCAT13((byte)(uVar77 >> 0x18) | (byte)(uVar92 >> 0x18),
                                    CONCAT12((byte)(uVar77 >> 0x10) | (byte)(uVar92 >> 0x10),
                                             CONCAT11((byte)(uVar77 >> 8) | (byte)(uVar92 >> 8),
                                                      (byte)uVar77 | (byte)uVar92))) <=
                    (float)CONCAT13((byte)(uVar88 >> 0x18) | (byte)(uVar83 >> 0x18),
                                    CONCAT12((byte)(uVar88 >> 0x10) | (byte)(uVar83 >> 0x10),
                                             CONCAT11((byte)(uVar88 >> 8) | (byte)(uVar83 >> 8),
                                                      (byte)uVar88 | (byte)uVar83)))) {
                  if (bVar12) goto LAB_0028d300;
                  bVar12 = true;
                }
              }
              iVar52 = (uint)(byte)((byte)iVar52 | (byte)iVar65) << 0x1f;
              auVar54._0_4_ = -(uint)(iVar52 < 0);
              auVar54._4_4_ = -(uint)(iVar52 < 0);
              auVar54._8_4_ = -(uint)(iVar52 < 0);
              auVar54._12_4_ = -(uint)(iVar52 < 0);
              NEON_ext(auVar54,auVar54,8,1);
              if (CONCAT13((char)auVar54._12_4_,
                           CONCAT12((char)auVar54._8_4_,
                                    CONCAT11((char)auVar54._4_4_,(char)auVar54._0_4_))) != -1) {
                if (fVar62 < fVar82 != fVar62 < fVar104) {
                  uVar77 = (ulong)(uint)(fVar73 * (float)local_260);
                  uVar92 = (ulong)(uint)((float)local_258 * (fVar62 - local_250._4_4_) +
                                        (float)local_268);
                  uVar88 = local_278 & uVar77;
                  uVar77 = local_270 & uVar77;
                  uVar83 = local_270 & uVar92;
                  uVar92 = uVar92 & local_278;
                  if ((float)CONCAT13((byte)(uVar92 >> 0x18) | (byte)(uVar77 >> 0x18),
                                      CONCAT12((byte)(uVar92 >> 0x10) | (byte)(uVar77 >> 0x10),
                                               CONCAT11((byte)(uVar92 >> 8) | (byte)(uVar77 >> 8),
                                                        (byte)uVar92 | (byte)uVar77))) <=
                      (float)CONCAT13((byte)(uVar88 >> 0x18) | (byte)(uVar83 >> 0x18),
                                      CONCAT12((byte)(uVar88 >> 0x10) | (byte)(uVar83 >> 0x10),
                                               CONCAT11((byte)(uVar88 >> 8) | (byte)(uVar83 >> 8),
                                                        (byte)uVar88 | (byte)uVar83)))) {
                    if (bVar12) {
                      uVar13 = 1;
                      goto LAB_0028d304;
                    }
                    goto LAB_0028d1ec;
                  }
                }
                if (!bVar12) goto LAB_0028d300;
              }
            }
          }
LAB_0028d1ec:
          uVar19 = uVar19 + 1;
          auVar25 = *local_f8;
          uVar1 = *param_10 + 1;
          auVar55._0_4_ = auVar25._0_4_ * (*(float *)(lVar20 + 0x30) - fVar24);
          auVar55._4_4_ = auVar25._4_4_ * (*(float *)(lVar20 + 0x34) - fVar33);
          auVar55._8_4_ = auVar25._8_4_ * (*(float *)(lVar20 + 0x38) - fVar34);
          auVar55._12_4_ = auVar25._12_4_ * (*(float *)(lVar20 + 0x3c) - auVar26._12_4_);
          auVar38 = NEON_ext(auVar55,auVar55,8,1);
          fVar87 = auVar38._0_4_ + auVar38._4_4_;
          fVar63 = auVar55._0_4_ + auVar55._4_4_ + fVar87;
          puVar2 = (undefined8 *)(param_9 + (ulong)*param_10 * 0x40);
          puVar2[1] = auVar26._8_8_;
          *puVar2 = auVar26._0_8_;
          auVar41._0_12_ = auVar25._0_12_;
          auVar41._12_4_ = -(auVar55._0_4_ + auVar55._4_4_ + fVar87);
          *(undefined4 *)(puVar2 + 6) = local_ec;
          auVar67._0_8_ = CONCAT44(fVar33 + auVar25._4_4_ * fVar63,fVar24 + auVar25._0_4_ * fVar63);
          auVar67._8_4_ = fVar34 + auVar25._8_4_ * fVar63;
          auVar67._12_4_ = auVar26._12_4_ + auVar25._12_4_ * fVar63;
          auVar26 = NEON_ext(auVar67,auVar67,8,1);
          puVar2[3] = (ulong)auVar26._0_4_;
          puVar2[2] = auVar67._0_8_;
          puVar2[5] = auVar41._8_8_;
          puVar2[4] = auVar25._0_8_;
          *param_10 = uVar1;
          if (0xf < uVar1 - (int)local_e8) {
            uStack_138 = auVar108._8_8_;
            local_140 = auVar108._0_8_;
            fStack_148 = auVar110._8_4_;
            fStack_144 = auVar110._12_4_;
            local_150 = auVar110._0_4_;
            fStack_14c = auVar110._4_4_;
            fStack_154 = 0.0;
            local_160 = fVar73;
            fStack_15c = fVar62;
            fStack_158 = fVar105;
            FUN_00292310(local_1c8);
            auVar110._4_4_ = fStack_14c;
            auVar110._0_4_ = local_150;
            auVar110._8_4_ = fStack_148;
            auVar110._12_4_ = fStack_144;
            auVar108._8_8_ = uStack_138;
            auVar108._0_8_ = local_140;
            fVar80 = (float)((ulong)local_1c0 >> 0x20);
            fVar61 = (float)((ulong)local_190 >> 0x20);
            *param_10 = local_1cc;
            param_9 = local_178;
            fVar73 = local_160;
            fVar62 = fStack_15c;
            fVar105 = fStack_158;
            fVar64 = fStack_154;
            uVar94 = local_110;
            uVar95 = uStack_108;
            uVar96 = local_120;
            uVar97 = uStack_118;
            uVar98 = local_130;
            uVar99 = uStack_128;
            fVar51 = (float)uStack_188;
            fVar111 = local_1e0;
            fVar112 = fStack_1dc;
            fVar85 = local_1f0;
            fVar86 = fStack_1ec;
          }
        }
LAB_0028d300:
        uVar13 = 1;
      }
LAB_0028d304:
      *(undefined1 *)(lVar18 + uVar17) = uVar13;
      uVar17 = uVar17 + 1;
      auVar3._4_4_ = fVar62;
      auVar3._0_4_ = fVar73;
      auVar3._8_4_ = fVar105;
      auVar3._12_4_ = fVar64;
      auVar110 = NEON_fmin(auVar110,auVar3,4);
      auVar4._4_4_ = fVar62;
      auVar4._0_4_ = fVar73;
      auVar4._8_4_ = fVar105;
      auVar4._12_4_ = fVar64;
      auVar108 = NEON_fmax(auVar108,auVar4,4);
      fVar105 = fVar51;
    } while (uVar17 < (byte)param_7[1][6]);
    auVar106._0_8_ = CONCAT44(auVar110._4_4_ + local_290._4_4_,auVar110._0_4_ + (float)local_290);
    auVar106._8_4_ = auVar110._8_4_ + (float)uStack_288;
    auVar106._12_4_ = auVar110._12_4_ + uStack_288._4_4_;
    auVar109._0_4_ = auVar108._0_4_ + (float)local_2a0;
    auVar109._4_4_ = auVar108._4_4_ + local_2a0._4_4_;
    auVar109._8_4_ = auVar108._8_4_ + (float)uStack_298;
    auVar109._12_4_ = auVar108._12_4_ + uStack_298._4_4_;
    if (uVar19 != (byte)param_7[1][6]) {
      pfVar15 = (float *)local_228[6];
      lVar20 = 0;
      iVar52 = 0;
      auVar36 = *param_7;
      fVar80 = auVar36._0_4_;
      auVar56._0_4_ = *pfVar15 * fVar80;
      fVar82 = auVar36._4_4_;
      auVar56._4_4_ = pfVar15[1] * fVar82;
      fVar111 = auVar36._8_4_;
      auVar56._8_4_ = pfVar15[2] * fVar111;
      auVar56._12_4_ = pfVar15[3] * 0.0;
      auVar26 = NEON_ext(auVar56,auVar56,8,1);
      auVar68._0_4_ = fVar80 * pfVar15[4];
      auVar68._4_4_ = fVar82 * pfVar15[5];
      auVar68._8_4_ = fVar111 * pfVar15[6];
      auVar68._12_4_ = pfVar15[7] * 0.0;
      fVar105 = auVar26._0_4_ + auVar26._4_4_;
      auVar26 = NEON_ext(auVar68,auVar68,8,1);
      fVar61 = auVar26._0_4_ + auVar26._4_4_;
      pfVar16 = (float *)local_228[5];
      auVar42._0_4_ = fVar80 * pfVar15[8];
      auVar42._4_4_ = fVar82 * pfVar15[9];
      auVar42._8_4_ = fVar111 * pfVar15[10];
      auVar42._12_4_ = pfVar15[0xb] * 0.0;
      auVar26 = NEON_ext(auVar42,auVar42,8,1);
      uVar76 = NEON_ext(CONCAT44(auVar56._0_4_ + auVar56._4_4_ + fVar105,
                                 auVar56._0_4_ + auVar56._4_4_ + fVar105),
                        CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar61,
                                 auVar68._0_4_ + auVar68._4_4_ + fVar61),4,1);
      fStack_158 = auVar42._0_4_ + auVar42._4_4_ + auVar26._0_4_ + auVar26._4_4_;
      local_160 = (float)uVar76;
      auVar43._0_4_ = local_160 * local_160;
      fStack_15c = (float)((ulong)uVar76 >> 0x20);
      auVar43._4_4_ = fStack_15c * fStack_15c;
      auVar43._8_4_ = fStack_158 * fStack_158;
      auVar43._12_4_ = 0;
      auVar26 = NEON_ext(auVar43,auVar43,8,1);
      fVar61 = auVar26._0_4_ + auVar26._4_4_;
      fVar105 = auVar43._0_4_ + auVar43._4_4_ + fVar61;
      fVar61 = auVar43._0_4_ + auVar43._4_4_ + fVar61;
      uVar17 = CONCAT44(fVar61,fVar105);
      uVar76 = NEON_frsqrte(uVar17,4);
      fVar80 = (float)uVar76;
      fVar82 = (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar80 * fVar80),uVar17,4);
      fVar80 = fVar80 * (float)uVar76;
      fVar82 = fVar82 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar80 * fVar80),uVar17,4);
      fVar80 = fVar80 * (float)uVar76;
      fVar82 = fVar82 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar80 * fVar80),uVar17,4);
      fVar80 = fVar80 * (float)uVar76;
      fVar82 = fVar82 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar80 * fVar80),uVar17,4);
      uVar77 = CONCAT44(fVar61 * fVar82 * (float)((ulong)uVar76 >> 0x20),
                        fVar105 * fVar80 * (float)uVar76);
      uVar77 = uVar77 ^ (uVar77 ^ uVar17) &
                        CONCAT44(-(uint)(fVar105 == 0.0),-(uint)(fVar105 == 0.0));
      uVar76 = NEON_frecpe(uVar77,4);
      uVar74 = NEON_frecps(uVar77,uVar76,4);
      fVar105 = (float)uVar76 * (float)uVar74;
      fVar61 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
      uVar76 = NEON_frecps(uVar77,CONCAT44(fVar61,fVar105),4);
      fVar105 = fVar105 * (float)uVar76;
      fVar61 = fVar61 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frecps(uVar77,CONCAT44(fVar61,fVar105),4);
      fVar105 = fVar105 * (float)uVar76;
      fVar61 = fVar61 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frecps(uVar77,CONCAT44(fVar61,fVar105),4);
      fVar105 = fVar105 * (float)uVar76;
      auVar36 = *(undefined1 (*) [12])(*(long *)(local_230 + 0x20) + (ulong)*local_238 * 0xc);
      uVar76 = NEON_frecps(uVar77,CONCAT44(fVar61 * (float)((ulong)uVar76 >> 0x20),fVar105),4);
      fVar105 = fVar105 * (float)uVar76;
      auVar26 = *(undefined1 (*) [16])(pfVar16 + 8);
      local_160 = local_160 * fVar105;
      fStack_15c = fStack_15c * fVar105;
      fStack_158 = fStack_158 * fVar105;
      local_198 = param_9 + local_e8 * 0x40;
      fVar61 = auVar36._4_4_;
      local_1a0 = CONCAT44(local_1a0._4_4_,(int)local_e8 + 5);
      fVar105 = auVar36._0_4_;
      fVar80 = auVar36._8_4_;
      uStack_138 = auVar106._8_8_;
      local_140 = auVar106._0_8_;
      fStack_148 = auVar109._8_4_;
      fStack_144 = auVar109._12_4_;
      local_150 = auVar109._0_4_;
      fStack_14c = auVar109._4_4_;
      fStack_154 = 0.0;
      auVar27._0_4_ =
           local_160 * (*pfVar16 * fVar105 + pfVar16[4] * fVar61 + auVar26._0_4_ * fVar80);
      auVar27._4_4_ =
           fStack_15c * (pfVar16[1] * fVar105 + pfVar16[5] * fVar61 + auVar26._4_4_ * fVar80);
      auVar27._8_4_ =
           fStack_158 * (pfVar16[2] * fVar105 + pfVar16[6] * fVar61 + auVar26._8_4_ * fVar80);
      auVar27._12_4_ = 0;
      auVar26 = NEON_ext(auVar27,auVar27,8,1);
      fVar105 = local_160;
      fVar61 = fStack_15c;
      fVar80 = fStack_158;
      fVar82 = 0.0;
      do {
        while( true ) {
          auVar25 = *(undefined1 (*) [16])(&local_e0 + lVar20 * 2);
          bVar32 = param_7[1][6];
          fVar111 = auVar25._0_4_;
          fVar103 = auVar25._4_4_;
          fVar104 = auVar25._8_4_;
          fVar112 = auVar25._12_4_;
          bVar50 = -(auVar109._4_4_ < fVar103) | -(fVar103 < auVar106._4_4_);
          bVar49 = (byte)(((uint)bVar50 << 0x1f) >> 0x18);
          bVar50 = (byte)(((uint)CONCAT12(bVar50,(ushort)(byte)(-(auVar109._0_4_ < fVar111) |
                                                               -(fVar111 < auVar106._0_4_))) << 0x1f
                          ) >> 0x18);
          iVar35 = CONCAT13((char)(bVar49 | bVar50) >> 7,
                            CONCAT12((char)(bVar49 | bVar50) >> 7,
                                     CONCAT11((char)(bVar49 | bVar50) >> 7,
                                              (char)(bVar49 | bVar50) >> 7)));
          auVar37._0_8_ =
               CONCAT17((char)(bVar49 | bVar50) >> 7,
                        CONCAT16((char)(bVar49 | bVar50) >> 7,
                                 CONCAT15((char)(bVar49 | bVar50) >> 7,
                                          CONCAT14((char)(bVar49 | bVar50) >> 7,iVar35))));
          auVar37[8] = (char)(bVar49 | bVar50) >> 7;
          auVar37[9] = (char)(bVar49 | bVar50) >> 7;
          auVar37[10] = (char)(bVar49 | bVar50) >> 7;
          auVar37[0xb] = (char)(bVar49 | bVar50) >> 7;
          auVar44[0xc] = (char)(bVar49 | bVar50) >> 7;
          auVar44._0_12_ = auVar37;
          auVar44[0xd] = (char)(bVar49 | bVar50) >> 7;
          auVar44[0xe] = (char)(bVar49 | bVar50) >> 7;
          auVar44[0xf] = (char)(bVar49 | bVar50) >> 7;
          auVar45._0_4_ = -(uint)(iVar35 == -1);
          auVar45._4_4_ = -(uint)((int)((ulong)auVar37._0_8_ >> 0x20) == -1);
          auVar45._8_4_ = -(uint)(auVar37._8_4_ == -1);
          auVar45._12_4_ = -(uint)(auVar44._12_4_ == -1);
          NEON_ext(auVar45,auVar45,8,1);
          if (CONCAT13((char)auVar45._12_4_,
                       CONCAT12((char)auVar45._8_4_,
                                CONCAT11((char)auVar45._4_4_,(char)auVar45._0_4_))) != -1 &&
              bVar32 != 0) break;
LAB_0028d55c:
          lVar20 = lVar20 + 1;
          if (lVar20 == 3) goto LAB_0028d78c;
        }
        iVar35 = 0;
        uVar17 = (ulong)bVar32 + 0xffffffff;
        uVar77 = 0;
        do {
          auVar25 = *(undefined1 (*) [16])(lVar21 + (uVar17 & 0xffffffff) * 0x10);
          auVar38 = *(undefined1 (*) [16])(lVar21 + uVar77 * 0x10);
          fVar86 = auVar25._4_4_;
          fVar85 = auVar25._0_4_;
          fVar62 = auVar38._4_4_;
          fVar73 = auVar38._0_4_;
          iVar65 = -(uint)(fVar111 == fVar85 && fVar103 == fVar86);
          iVar14 = -(uint)(fVar111 == fVar73 && fVar103 == fVar62);
          iVar65 = CONCAT13((byte)((uint)iVar14 >> 0x18) | (byte)((uint)iVar65 >> 0x18),
                            CONCAT12((byte)((uint)iVar14 >> 0x10) | (byte)((uint)iVar65 >> 0x10),
                                     CONCAT11((byte)((uint)iVar14 >> 8) | (byte)((uint)iVar65 >> 8),
                                              (byte)iVar14 | (byte)iVar65)));
          auVar89._0_4_ = -(uint)(iVar65 == -1);
          auVar89._4_4_ = -(uint)(iVar65 == -1);
          auVar89._8_4_ = -(uint)(iVar65 == -1);
          auVar89._12_4_ = -(uint)(iVar65 == -1);
          NEON_ext(auVar89,auVar89,8,1);
          if (CONCAT13((char)auVar89._12_4_,
                       CONCAT12((char)auVar89._8_4_,
                                CONCAT11((char)auVar89._4_4_,(char)auVar89._0_4_))) == -1)
          goto LAB_0028d658;
          if (fVar103 < fVar86 != fVar103 < fVar62) {
            fVar62 = fVar62 - fVar86;
            fVar85 = (fVar103 - fVar86) * (fVar73 - fVar85) + (fVar85 + 1.1920929e-07) * fVar62;
            fVar86 = fVar111 * fVar62;
            if ((float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)fVar86) & -(uint)(0.0 < fVar62)) <=
                (float)((uint)fVar86 ^ ((uint)fVar86 ^ (uint)fVar85) & -(uint)(0.0 < fVar62))) {
              if (iVar35 == 1) goto LAB_0028d55c;
              iVar35 = iVar35 + 1;
            }
          }
          uVar92 = uVar77 + 1;
          uVar17 = uVar77;
          uVar77 = uVar92;
        } while (uVar92 < bVar32);
        if (iVar35 == 0) goto LAB_0028d55c;
LAB_0028d658:
        auVar46._0_4_ = (float)uVar94 * fVar111;
        auVar46._4_4_ = (float)((ulong)uVar94 >> 0x20) * fVar103;
        auVar46._8_4_ = (float)uVar95 * fVar104;
        auVar46._12_4_ = (float)((ulong)uVar95 >> 0x20) * fVar112;
        auVar25 = NEON_ext(auVar46,auVar46,8,1);
        fVar85 = auVar25._0_4_ + auVar25._4_4_;
        auVar57._0_4_ = (float)uVar96 * fVar111;
        auVar57._4_4_ = (float)((ulong)uVar96 >> 0x20) * fVar103;
        auVar57._8_4_ = (float)uVar97 * fVar104;
        auVar57._12_4_ = (float)((ulong)uVar97 >> 0x20) * fVar112;
        auVar28._0_4_ = (float)uVar98 * fVar111;
        auVar28._4_4_ = (float)((ulong)uVar98 >> 0x20) * fVar103;
        auVar28._8_4_ = (float)uVar99 * fVar104;
        auVar28._12_4_ = (float)((ulong)uVar99 >> 0x20) * fVar112;
        auVar25 = NEON_ext(auVar57,auVar57,8,1);
        fVar103 = auVar25._0_4_ + auVar25._4_4_;
        auVar25 = NEON_ext(auVar28,auVar28,8,1);
        fVar111 = auVar28._0_4_ + auVar28._4_4_ + auVar25._0_4_ + auVar25._4_4_;
        uVar76 = NEON_ext(CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar85,
                                   auVar46._0_4_ + auVar46._4_4_ + fVar85),
                          CONCAT44(auVar57._0_4_ + auVar57._4_4_ + fVar103,
                                   auVar57._0_4_ + auVar57._4_4_ + fVar103),4,1);
        iVar52 = iVar52 + 1;
        fVar103 = (float)uVar76;
        auVar47._0_4_ = fVar105 * fVar103;
        fVar104 = (float)((ulong)uVar76 >> 0x20);
        auVar47._4_4_ = fVar61 * fVar104;
        auVar47._8_4_ = fVar80 * fVar111;
        auVar47._12_4_ = fVar82 * 0.0;
        auVar25 = NEON_ext(auVar47,auVar47,8,1);
        fVar112 = (auVar47._0_4_ + auVar47._4_4_ + auVar25._0_4_ + auVar25._4_4_) -
                  (auVar27._0_4_ + auVar27._4_4_ + auVar26._0_4_ + auVar26._4_4_);
        if ((float)*param_11 < fVar112) goto LAB_0028d55c;
        auVar25 = *local_f8;
        uVar19 = *param_10;
        puVar2 = (undefined8 *)(param_9 + (ulong)uVar19 * 0x40);
        fVar85 = fVar103 - fVar105 * fVar112;
        fVar86 = fVar104 - fVar61 * fVar112;
        auVar48._0_8_ = CONCAT44(fVar86,fVar85);
        auVar48._8_4_ = fVar111 - fVar80 * fVar112;
        auVar48._12_4_ = 0.0 - fVar82 * fVar112;
        auVar38 = NEON_ext(auVar48,auVar48,8,1);
        *(undefined4 *)(puVar2 + 6) = local_ec;
        uVar19 = uVar19 + 1;
        puVar2[1] = (ulong)(uint)auVar38._0_4_;
        *puVar2 = auVar48._0_8_;
        puVar2[3] = (ulong)(uint)fVar111;
        puVar2[2] = uVar76;
        auVar69._0_4_ = (fVar85 - fVar103) * auVar25._0_4_;
        auVar69._4_4_ = (fVar86 - fVar104) * auVar25._4_4_;
        auVar69._8_4_ = (auVar38._0_4_ - fVar111) * auVar25._8_4_;
        auVar69._12_4_ = auVar25._12_4_ * 0.0;
        auVar38 = NEON_ext(auVar69,auVar69,8,1);
        fVar111 = auVar38._0_4_ + auVar38._4_4_;
        fVar103 = auVar69._0_4_ + auVar69._4_4_ + fVar111;
        auVar29._4_4_ = fVar103;
        auVar29._0_4_ = auVar69._0_4_ + auVar69._4_4_ + fVar111;
        auVar29._8_8_ = 0;
        auVar58._0_12_ = auVar25._0_12_;
        auVar58._12_4_ = fVar103;
        puVar2[5] = auVar58._8_8_;
        puVar2[4] = auVar25._0_8_;
        *param_10 = uVar19;
        if (uVar19 - (int)local_e8 < 0x10) goto LAB_0028d55c;
        FUN_00292310(auVar29,local_198);
        auVar109._4_4_ = fStack_14c;
        auVar109._0_4_ = local_150;
        auVar109._8_4_ = fStack_148;
        auVar109._12_4_ = fStack_144;
        auVar106._8_8_ = uStack_138;
        auVar106._0_8_ = local_140;
        fVar51 = (float)uStack_188;
        *param_10 = (uint)local_1a0;
        lVar20 = lVar20 + 1;
        param_9 = local_178;
        uVar94 = local_110;
        uVar95 = uStack_108;
        uVar96 = local_120;
        uVar97 = uStack_118;
        uVar98 = local_130;
        uVar99 = uStack_128;
        fVar105 = local_160;
        fVar61 = fStack_15c;
        fVar80 = fStack_158;
        fVar82 = fStack_154;
      } while (lVar20 != 3);
LAB_0028d78c:
      if (iVar52 != 3) {
        uVar83 = (ulong)(byte)param_7[1][6];
        uVar17 = 0;
        uVar77 = 2;
        uVar92 = uVar83;
        do {
          while (uVar88 = uVar17, (int)uVar92 == 0) {
            uVar92 = 0;
            uVar17 = uVar88 + 1;
            uVar77 = uVar88;
            if (uVar88 + 1 == 3) {
              return;
            }
          }
          auVar90 = *(undefined1 (*) [16])(&local_e0 + uVar88 * 2);
          auVar91 = *(undefined1 (*) [16])(&local_e0 + (uVar77 & 0xffffffff) * 2);
          auVar93 = NEON_fmin(auVar90,auVar91,4);
          auVar107 = NEON_fmax(auVar90,auVar91,4);
          uStack_138 = auVar90._8_8_;
          local_140 = auVar90._0_8_;
          fStack_148 = auVar91._8_4_;
          fStack_144 = auVar91._12_4_;
          local_150 = auVar91._0_4_;
          fStack_14c = auVar91._4_4_;
          fStack_158 = auVar93._8_4_;
          fStack_154 = auVar93._12_4_;
          local_160 = auVar93._0_4_;
          fStack_15c = auVar93._4_4_;
          uStack_168 = auVar107._8_8_;
          local_170 = auVar107._0_8_;
          uVar17 = 0;
          uVar77 = uVar83 + 0xffffffff;
          do {
            uVar92 = uVar17;
            uVar77 = uVar77 & 0xffffffff;
            if ((*(char *)(lVar18 + uVar92) != '\0') || (*(char *)(lVar18 + uVar77) != '\0')) {
              auVar26 = *(undefined1 (*) [16])(lVar21 + uVar92 * 0x10);
              auVar25 = *(undefined1 (*) [16])(lVar21 + uVar77 * 0x10);
              auVar38 = NEON_fmin(auVar26,auVar25,4);
              auVar70 = NEON_fmax(auVar26,auVar25,4);
              bVar49 = -(auVar70._4_4_ < auVar93._4_4_) | -(auVar107._4_4_ < auVar38._4_4_);
              bVar32 = (byte)(((uint)bVar49 << 0x1f) >> 0x18);
              bVar49 = (byte)(((uint)CONCAT12(bVar49,(ushort)(byte)(-(auVar70._0_4_ < auVar93._0_4_)
                                                                   | -(auVar107._0_4_ <
                                                                      auVar38._0_4_))) << 0x1f) >>
                             0x18);
              iVar52 = CONCAT13((char)(bVar32 | bVar49) >> 7,
                                CONCAT12((char)(bVar32 | bVar49) >> 7,
                                         CONCAT11((char)(bVar32 | bVar49) >> 7,
                                                  (char)(bVar32 | bVar49) >> 7)));
              auVar53._0_8_ =
                   CONCAT17((char)(bVar32 | bVar49) >> 7,
                            CONCAT16((char)(bVar32 | bVar49) >> 7,
                                     CONCAT15((char)(bVar32 | bVar49) >> 7,
                                              CONCAT14((char)(bVar32 | bVar49) >> 7,iVar52))));
              auVar53[8] = (char)(bVar32 | bVar49) >> 7;
              auVar53[9] = (char)(bVar32 | bVar49) >> 7;
              auVar53[10] = (char)(bVar32 | bVar49) >> 7;
              auVar53[0xb] = (char)(bVar32 | bVar49) >> 7;
              auVar59[0xc] = (char)(bVar32 | bVar49) >> 7;
              auVar59._0_12_ = auVar53;
              auVar59[0xd] = (char)(bVar32 | bVar49) >> 7;
              auVar59[0xe] = (char)(bVar32 | bVar49) >> 7;
              auVar59[0xf] = (char)(bVar32 | bVar49) >> 7;
              auVar60._0_4_ = -(uint)(iVar52 == -1);
              auVar60._4_4_ = -(uint)((int)((ulong)auVar53._0_8_ >> 0x20) == -1);
              auVar60._8_4_ = -(uint)(auVar53._8_4_ == -1);
              auVar60._12_4_ = -(uint)(auVar59._12_4_ == -1);
              NEON_ext(auVar60,auVar60,8,1);
              if (CONCAT13((char)auVar60._12_4_,
                           CONCAT12((char)auVar60._8_4_,
                                    CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_))) != -1) {
                fVar105 = auVar26._0_4_;
                fVar104 = auVar90._0_4_;
                fVar61 = auVar26._4_4_;
                fVar112 = auVar90._4_4_;
                fVar85 = auVar91._0_4_;
                fVar86 = auVar91._4_4_;
                fVar80 = auVar25._0_4_;
                fVar82 = auVar25._4_4_;
                fVar111 = (fVar104 - fVar105) * (fVar86 - fVar61) -
                          (fVar112 - fVar61) * (fVar85 - fVar105);
                fVar103 = (fVar104 - fVar80) * (fVar86 - fVar82) -
                          (fVar112 - fVar82) * (fVar85 - fVar80);
                if ((fVar111 * fVar103 < 0.0) &&
                   (((fVar105 - fVar104) * (fVar82 - fVar112) -
                    (fVar61 - fVar112) * (fVar80 - fVar104)) *
                    ((fVar105 - fVar85) * (fVar82 - fVar86) - (fVar61 - fVar86) * (fVar80 - fVar85))
                    < 0.0)) {
                  uVar76 = CONCAT44(((fVar104 - fVar80) * (fVar86 - fVar82) -
                                    (fVar112 - fVar82) * (fVar85 - fVar80)) -
                                    ((fVar104 - fVar105) * (fVar86 - fVar61) -
                                    (fVar112 - fVar61) * (fVar85 - fVar105)),fVar103 - fVar111);
                  uVar74 = NEON_frecpe(uVar76,4);
                  uVar78 = NEON_frecps(uVar76,uVar74,4);
                  fVar103 = (float)uVar74 * (float)uVar78;
                  fVar104 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
                  uVar74 = NEON_frecps(uVar76,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar74;
                  fVar104 = fVar104 * (float)((ulong)uVar74 >> 0x20);
                  uVar74 = NEON_frecps(uVar76,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar74;
                  fVar104 = fVar104 * (float)((ulong)uVar74 >> 0x20);
                  uVar74 = NEON_frecps(uVar76,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar74;
                  fVar112 = fVar102 + (float)*(undefined8 *)(lVar22 + uVar92 * 8);
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar104 * (float)((ulong)uVar74 >> 0x20),
                                                       fVar103),4);
                  fVar111 = fVar111 * fVar103 * (float)uVar76;
                  auVar30._0_4_ = fVar105 - (fVar80 - fVar105) * fVar111;
                  auVar30._4_4_ = fVar61 - (fVar82 - fVar61) * fVar111;
                  auVar30._8_4_ =
                       fVar112 - ((fVar102 + (float)*(undefined8 *)(lVar22 + uVar77 * 8)) - fVar112)
                                 * fVar111;
                  auVar30._12_4_ = auVar26._12_4_ - (auVar25._12_4_ - auVar26._12_4_) * fVar111;
                  auVar26 = NEON_ext(auVar30,auVar30,8,1);
                  fVar105 = auVar26._0_4_;
                  if (fVar105 - fVar102 <= (float)*param_11) {
                    uVar8 = *(undefined4 *)*local_f8;
                    uVar9 = *(undefined4 *)(*local_f8 + 4);
                    uVar10 = *(undefined4 *)(*local_f8 + 8);
                    uVar19 = *param_10;
                    auVar75._0_4_ = (float)uVar98 * auVar30._0_4_;
                    fVar104 = (float)((ulong)uVar98 >> 0x20);
                    auVar75._4_4_ = fVar104 * auVar30._4_4_;
                    auVar75._8_4_ = (float)uVar99 * fVar105;
                    fVar112 = (float)((ulong)uVar99 >> 0x20);
                    auVar75._12_4_ = fVar112 * 0.0;
                    puVar2 = (undefined8 *)(param_9 + (ulong)uVar19 * 0x40);
                    *(undefined4 *)(puVar2 + 6) = local_ec;
                    auVar71._0_4_ = (float)uVar94 * auVar30._0_4_;
                    fVar80 = (float)((ulong)uVar94 >> 0x20);
                    auVar71._4_4_ = fVar80 * auVar30._4_4_;
                    auVar71._8_4_ = (float)uVar95 * fVar105;
                    fVar82 = (float)((ulong)uVar95 >> 0x20);
                    auVar71._12_4_ = fVar82 * 0.0;
                    auVar26 = NEON_ext(auVar71,auVar71,8,1);
                    auVar31._0_4_ = (float)uVar96 * auVar30._0_4_;
                    fVar111 = (float)((ulong)uVar96 >> 0x20);
                    auVar31._4_4_ = fVar111 * auVar30._4_4_;
                    auVar31._8_4_ = (float)uVar97 * fVar105;
                    fVar103 = (float)((ulong)uVar97 >> 0x20);
                    auVar31._12_4_ = fVar103 * 0.0;
                    auVar25 = NEON_ext(auVar31,auVar31,8,1);
                    fVar61 = auVar26._0_4_ + auVar26._4_4_;
                    auVar84._0_4_ = (float)uVar94 * auVar30._0_4_;
                    auVar84._4_4_ = fVar80 * auVar30._4_4_;
                    auVar84._8_4_ = (float)uVar95 * fVar51;
                    auVar84._12_4_ = fVar82 * 0.0;
                    *(undefined4 *)(puVar2 + 5) = uVar10;
                    *(float *)((long)puVar2 + 0x2c) = fVar105 - fVar102;
                    *(undefined4 *)(puVar2 + 4) = uVar8;
                    *(undefined4 *)((long)puVar2 + 0x24) = uVar9;
                    auVar26 = NEON_ext(auVar75,auVar75,8,1);
                    auVar72._0_4_ = (float)uVar96 * auVar30._0_4_;
                    auVar72._4_4_ = fVar111 * auVar30._4_4_;
                    auVar72._8_4_ = (float)uVar97 * fVar51;
                    auVar72._12_4_ = fVar103 * 0.0;
                    fVar105 = auVar25._0_4_ + auVar25._4_4_;
                    auVar79._0_4_ = (float)uVar98 * auVar30._0_4_;
                    auVar79._4_4_ = fVar104 * auVar30._4_4_;
                    auVar79._8_4_ = (float)uVar99 * fVar51;
                    auVar79._12_4_ = fVar112 * 0.0;
                    auVar25 = NEON_ext(auVar84,auVar84,8,1);
                    auVar38 = NEON_ext(auVar72,auVar72,8,1);
                    fVar80 = auVar25._0_4_ + auVar25._4_4_;
                    auVar25 = NEON_ext(auVar79,auVar79,8,1);
                    fVar82 = auVar38._0_4_ + auVar38._4_4_;
                    uVar76 = NEON_ext(CONCAT44(auVar71._0_4_ + auVar71._4_4_ + fVar61,
                                               auVar71._0_4_ + auVar71._4_4_ + fVar61),
                                      CONCAT44(auVar31._0_4_ + auVar31._4_4_ + fVar105,
                                               auVar31._0_4_ + auVar31._4_4_ + fVar105),4,1);
                    uVar74 = NEON_ext(CONCAT44(auVar84._0_4_ + auVar84._4_4_ + fVar80,
                                               auVar84._0_4_ + auVar84._4_4_ + fVar80),
                                      CONCAT44(auVar72._0_4_ + auVar72._4_4_ + fVar82,
                                               auVar72._0_4_ + auVar72._4_4_ + fVar82),4,1);
                    puVar2[1] = (ulong)(uint)(auVar75._0_4_ + auVar75._4_4_ +
                                             auVar26._0_4_ + auVar26._4_4_);
                    *puVar2 = uVar76;
                    puVar2[3] = (ulong)(uint)(auVar79._0_4_ + auVar79._4_4_ +
                                             auVar25._0_4_ + auVar25._4_4_);
                    puVar2[2] = uVar74;
                    uVar19 = uVar19 + 1;
                    *param_10 = uVar19;
                    if (0xf < uVar19 - (int)local_e8) {
                      FUN_00292310(local_198);
                      auVar107._8_8_ = uStack_168;
                      auVar107._0_8_ = local_170;
                      auVar93._4_4_ = fStack_15c;
                      auVar93._0_4_ = local_160;
                      auVar93._8_4_ = fStack_158;
                      auVar93._12_4_ = fStack_154;
                      auVar91._4_4_ = fStack_14c;
                      auVar91._0_4_ = local_150;
                      auVar91._8_4_ = fStack_148;
                      auVar91._12_4_ = fStack_144;
                      auVar90._8_8_ = uStack_138;
                      auVar90._0_8_ = local_140;
                      fVar51 = (float)uStack_188;
                      *param_10 = (uint)local_1a0;
                      param_9 = local_178;
                      uVar94 = local_110;
                      uVar95 = uStack_108;
                      uVar96 = local_120;
                      uVar97 = uStack_118;
                      uVar98 = local_130;
                      uVar99 = uStack_128;
                    }
                  }
                }
              }
            }
            uVar83 = (ulong)(byte)param_7[1][6];
            uVar17 = uVar92 + 1;
            uVar77 = uVar92;
          } while (uVar92 + 1 < uVar83);
          uVar17 = uVar88 + 1;
          uVar77 = uVar88;
          uVar92 = uVar83;
        } while (uVar88 + 1 != 3);
      }
    }
  }
  return;
}


