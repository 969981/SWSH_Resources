/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b6140; name: FUN_002b6140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002b6140(float param_1,float param_2,long param_3,undefined1 (*param_4) [16],long param_5,
            undefined1 (*param_6) [12],long param_7,float *param_8,long param_9,ushort *param_10)

{
  float *pfVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  bool bVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar44;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar81;
  undefined1 auVar80 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar86;
  undefined8 uVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar93;
  float fVar94;
  undefined1 auVar92 [16];
  float fVar95;
  undefined8 uVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined8 local_290;
  ulong uStack_288;
  undefined *local_280;
  undefined8 *local_278;
  undefined *local_270;
  undefined8 *puStack_268;
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  float local_238 [2];
  undefined8 local_230;
  ulong uStack_228;
  undefined8 local_220;
  ulong uStack_218;
  float local_210;
  float local_20c;
  float local_208;
  undefined8 local_204;
  undefined1 local_1fc;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 local_188;
  long local_180;
  undefined1 local_178;
  undefined8 local_170;
  ulong uStack_168;
  float local_160;
  float local_15c;
  float local_158;
  undefined8 local_154;
  undefined1 local_14c;
  undefined8 local_140;
  ulong uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 local_120;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [36];
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  
  fVar107 = 0.0;
  fVar108 = 0.0;
  fVar71 = 0.0;
  lVar23 = *(long *)(param_3 + 0x20);
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  auVar25 = *param_4;
  fVar24 = auVar25._0_4_;
  fVar51 = -fVar24;
  fVar46 = auVar25._4_4_;
  fVar54 = -fVar46;
  auVar52._0_8_ = CONCAT44(fVar54,fVar51);
  fVar49 = auVar25._8_4_;
  auVar52._8_4_ = -fVar49;
  fVar57 = auVar25._12_4_;
  auVar52._12_4_ = -fVar57;
  auVar64._8_8_ = auVar52._8_8_;
  auVar64._0_8_ = auVar52._0_8_;
  fVar50 = (float)*(undefined8 *)(*param_6 + 8);
  fVar48 = (float)((ulong)*(undefined8 *)(*param_6 + 8) >> 0x20);
  fVar44 = (float)*(undefined8 *)*param_6;
  fVar47 = (float)((ulong)*(undefined8 *)*param_6 >> 0x20);
  auVar65._0_12_ = auVar64._0_12_;
  auVar16 = *(undefined1 (*) [12])param_4[1];
  auVar17 = *(undefined1 (*) [12])(param_6[1] + 4);
  fVar69 = fVar57 * fVar57 + -0.5;
  auVar65._12_4_ = 0;
  fVar89 = auVar16._0_4_;
  auVar42._0_4_ = auVar17._0_4_ - fVar89;
  fVar93 = auVar16._4_4_;
  auVar42._4_4_ = auVar17._4_4_ - fVar93;
  fVar94 = auVar16._8_4_;
  auVar42._8_4_ = auVar17._8_4_ - fVar94;
  auVar42._12_4_ = 0;
  auVar99 = NEON_ext(auVar42,auVar42,8,1);
  auVar92 = NEON_ext(auVar65,auVar65,8,1);
  fVar100 = fVar51 * auVar42._0_4_;
  fVar101 = fVar54 * auVar42._4_4_;
  auVar59._12_4_ = 0;
  auVar59._0_12_ = *param_6;
  auVar104._12_4_ = 0;
  auVar104._0_12_ = *param_6;
  auVar104 = NEON_ext(auVar59,auVar104,8,1);
  fVar105 = fVar44 * fVar51;
  fVar106 = fVar47 * fVar54;
  fVar55 = fVar47 * fVar51 - fVar44 * fVar54;
  auVar14._4_4_ = fVar106;
  auVar14._0_4_ = fVar105;
  auVar14._8_4_ = fVar50 * auVar52._8_4_;
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar106;
  auVar15._0_4_ = fVar105;
  auVar15._8_4_ = fVar50 * auVar52._8_4_;
  auVar15._12_4_ = 0;
  auVar59 = NEON_ext(auVar14,auVar15,8,1);
  fVar41 = fVar51 * auVar42._4_4_ - fVar54 * auVar42._0_4_;
  uVar56 = NEON_ext(CONCAT44(fVar50 * fVar54 - fVar47 * auVar52._8_4_,fVar55),
                    CONCAT44(fVar47 * auVar92._4_4_ - auVar104._4_4_ * fVar54,
                             fVar44 * auVar92._0_4_ - auVar104._0_4_ * fVar51),4,1);
  uVar90 = NEON_ext(CONCAT44(fVar54 * auVar42._8_4_ - auVar52._8_4_ * auVar42._4_4_,fVar41),
                    CONCAT44(auVar92._4_4_ * auVar42._4_4_ - fVar54 * auVar99._4_4_,
                             auVar92._0_4_ * auVar42._0_4_ - fVar51 * auVar99._0_4_),4,1);
  auVar92._4_4_ = fVar101;
  auVar92._0_4_ = fVar100;
  auVar92._8_4_ = auVar52._8_4_ * auVar42._8_4_;
  auVar92._12_4_ = 0;
  auVar99._4_4_ = fVar101;
  auVar99._0_4_ = fVar100;
  auVar99._8_4_ = auVar52._8_4_ * auVar42._8_4_;
  auVar99._12_4_ = 0;
  auVar104 = NEON_ext(auVar92,auVar99,8,1);
  fVar45 = fVar44 * fVar57 + fVar51 * fVar48 + (float)uVar56;
  fVar47 = fVar47 * fVar57 + fVar54 * fVar48 + (float)((ulong)uVar56 >> 0x20);
  fVar55 = fVar50 * fVar57 + auVar52._8_4_ * fVar48 + fVar55;
  fVar44 = fVar48 * fVar57 - (fVar105 + fVar106 + auVar59._0_4_ + auVar59._4_4_);
  auVar60._0_4_ = auVar42._0_4_ * fVar69 + (float)uVar90 * fVar57;
  auVar60._4_4_ = auVar42._4_4_ * fVar69 + (float)((ulong)uVar90 >> 0x20) * fVar57;
  auVar60._8_4_ = auVar42._8_4_ * fVar69 + fVar41 * fVar57;
  auVar60._12_4_ = fVar57 * 0.0 + 0.0;
  auVar59 = NEON_ext(auVar60,auVar60,8,1);
  fVar70 = fVar45 + fVar45;
  fVar72 = fVar47 + fVar47;
  fVar75 = fVar55 + fVar55;
  fVar48 = fVar47 * fVar72;
  fVar50 = fVar55 * fVar75;
  uVar56 = NEON_fmov(0x3f800000,4);
  fVar41 = fVar100 + fVar101 + auVar104._0_4_ + auVar104._4_4_;
  fVar106 = (float)uVar56;
  fVar102 = fVar106 - fVar45 * fVar70;
  fVar58 = (float)((ulong)uVar56 >> 0x20);
  uVar90 = NEON_ext(CONCAT44(fVar55 * fVar70 + fVar44 * fVar72,fVar55 * fVar70 + fVar44 * fVar72),
                    CONCAT44(fVar55 * fVar72 - fVar44 * fVar70,fVar55 * fVar72 - fVar44 * fVar70),4,
                    1);
  fVar82 = *(float *)(param_5 + 8);
  fVar69 = (float)_DAT_01d4ae50;
  fVar83 = fVar69 * fVar82;
  fVar100 = (float)((ulong)_DAT_01d4ae50 >> 0x20);
  fVar86 = fVar100 * fVar82;
  fVar101 = (float)_UNK_01d4ae58;
  fVar82 = fVar101 * fVar82;
  fVar105 = (float)((ulong)_UNK_01d4ae58 >> 0x20);
  auVar61._0_4_ = fVar51 * fVar41 + auVar60._0_4_;
  auVar61._4_4_ = fVar54 * fVar41 + auVar60._4_4_;
  auVar61._8_4_ = auVar52._8_4_ * fVar41 + auVar59._0_4_;
  auVar61._12_4_ = fVar41 * 0.0 + 0.0;
  uVar96 = NEON_ext(CONCAT44((fVar58 - fVar48) - fVar50,(fVar106 - fVar48) - fVar50),
                    CONCAT44(fVar47 * fVar70 + fVar44 * fVar75,fVar47 * fVar70 + fVar44 * fVar75),4,
                    1);
  uVar56 = NEON_ext(CONCAT44(fVar47 * fVar70 - fVar44 * fVar75,fVar47 * fVar70 - fVar44 * fVar75),
                    CONCAT44((fVar58 - fVar45 * fVar70) - fVar50,fVar102 - fVar50),4,1);
  auVar59 = NEON_ext(auVar61,auVar61,8,1);
  local_160 = *(float *)(param_7 + 0x18);
  local_190 = lVar23 + 0x20;
  fVar109 = param_8[2];
  fVar50 = auVar61._0_4_ + auVar61._0_4_;
  fVar51 = auVar61._4_4_ + auVar61._4_4_;
  fVar54 = auVar59._0_4_ + auVar59._0_4_;
  local_120 = CONCAT44(local_160,local_160);
  fVar75 = (float)uVar90 * fVar82 + (float)uVar96 * fVar83 + (float)uVar56 * fVar86;
  fVar63 = (float)((ulong)uVar90 >> 0x20) * fVar82 +
           (float)((ulong)uVar96 >> 0x20) * fVar83 + (float)((ulong)uVar56 >> 0x20) * fVar86;
  fVar55 = (fVar102 - fVar48) * fVar82 +
           (fVar55 * fVar70 - fVar44 * fVar72) * fVar83 +
           (fVar55 * fVar72 + fVar44 * fVar70) * fVar86;
  fVar41 = *(float *)(param_3 + 0x10);
  fVar44 = *(float *)(param_3 + 0x14);
  fVar45 = *(float *)(param_3 + 0x18);
  fVar47 = *(float *)(param_3 + 0x1c);
  local_140 = CONCAT44(fVar51 + fVar63,fVar50 + fVar75);
  uStack_130 = CONCAT44(fVar51 - fVar63,fVar50 - fVar75);
  auVar59 = *(undefined1 (*) [16])(param_3 + 4);
  fVar48 = auVar59._0_4_;
  uStack_168 = (ulong)(uint)fVar54;
  local_170 = CONCAT44(fVar51,fVar50);
  local_154 = 0x47f7fffff;
  uStack_138 = (ulong)(uint)(fVar54 + fVar55);
  uStack_128 = (ulong)(uint)(fVar54 - fVar55);
  auVar62._0_12_ = auVar59._0_12_;
  auVar62._12_4_ = 0;
  local_14c = 1;
  if ((fVar48 == 1.0) && (*(float *)(param_3 + 8) == 1.0)) {
    bVar18 = *(float *)(param_3 + 0xc) == 1.0;
  }
  else {
    bVar18 = false;
  }
  local_1fc = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_204 = 0x7f7fffff;
  local_180 = *(long *)(lVar23 + 0x48) + (ulong)*(byte *)(lVar23 + 0x47) * 0x14;
  local_178 = *(undefined1 *)(lVar23 + 0x46);
  auVar16 = *(undefined1 (*) [12])(lVar23 + 0x5c);
  fVar55 = auVar59._4_4_;
  fVar75 = auVar59._8_4_;
  fVar63 = fVar75 * auVar16._8_4_;
  uVar56 = NEON_fminp(CONCAT44(fVar63,fVar63),
                      CONCAT44(fVar55 * auVar16._4_4_,fVar48 * auVar16._0_4_),4);
  uVar56 = NEON_fminp(uVar56,uVar56,4);
  local_208 = (float)uVar56;
  local_210 = DAT_01d4bec4 * local_208;
  local_20c = DAT_01d4c158 * local_208;
  local_208 = DAT_01d4bb3c * local_208;
  if (bVar18) {
    uStack_1e8 = _UNK_01d4ae58;
    local_1f0 = _DAT_01d4ae50;
    uStack_1d8 = _UNK_01d4b588;
    uStack_1e0 = _DAT_01d4b580;
    uStack_1c8 = _UNK_01d49dc8;
    local_1d0 = _DAT_01d49dc0;
    uStack_1b8 = _UNK_01d4ae58;
    uStack_1c0 = _DAT_01d4ae50;
    uStack_1a8 = _UNK_01d4b588;
    local_1b0 = _DAT_01d4b580;
    uStack_198 = _UNK_01d49dc8;
    uStack_1a0 = _DAT_01d49dc0;
  }
  else {
    auVar59 = NEON_frecpe(auVar62,4);
    auVar104 = NEON_frecps(auVar59,auVar62,4);
    auVar66._0_4_ = auVar59._0_4_ * auVar104._0_4_;
    auVar66._4_4_ = auVar59._4_4_ * auVar104._4_4_;
    auVar66._8_4_ = auVar59._8_4_ * auVar104._8_4_;
    auVar66._12_4_ = auVar59._12_4_ * auVar104._12_4_;
    auVar59 = NEON_frecps(auVar66,auVar62,4);
    auVar67._0_4_ = auVar66._0_4_ * auVar59._0_4_;
    auVar67._4_4_ = auVar66._4_4_ * auVar59._4_4_;
    auVar67._8_4_ = auVar66._8_4_ * auVar59._8_4_;
    auVar67._12_4_ = auVar66._12_4_ * auVar59._12_4_;
    auVar59 = NEON_frecps(auVar67,auVar62,4);
    auVar68._0_4_ = auVar67._0_4_ * auVar59._0_4_;
    auVar68._4_4_ = auVar67._4_4_ * auVar59._4_4_;
    auVar68._8_4_ = auVar67._8_4_ * auVar59._8_4_;
    auVar68._12_4_ = auVar67._12_4_ * auVar59._12_4_;
    auVar59 = NEON_frecps(auVar68,auVar62,4);
    fVar63 = auVar68._0_4_ * auVar59._0_4_;
    fVar70 = auVar68._4_4_ * auVar59._4_4_;
    fVar72 = auVar68._8_4_ * auVar59._8_4_;
    auVar80._4_4_ = -(uint)(fVar48 == fVar55);
    auVar80._0_4_ = 0xffffffff;
    auVar80._8_4_ = -(uint)(fVar48 == fVar75);
    auVar80._12_4_ = 0xffffffff;
    NEON_ext(auVar80,auVar80,8,1);
    if (CONCAT12((char)auVar80._8_4_,CONCAT11((char)auVar80._4_4_,0xff)) == -1) {
      fVar71 = fVar48 * fVar69;
      fVar73 = fVar55 * fVar100;
      fVar76 = fVar75 * fVar101;
      fVar78 = fVar105 * 0.0;
      fVar41 = fVar48 * (float)_DAT_01d4b580;
      fVar81 = (float)((ulong)_DAT_01d4b580 >> 0x20);
      fVar44 = fVar55 * fVar81;
      fVar58 = fVar75 * (float)_UNK_01d4b588;
      fVar106 = (float)((ulong)_UNK_01d4b588 >> 0x20);
      fVar86 = fVar106 * 0.0;
      fVar69 = fVar63 * fVar69;
      fVar100 = fVar70 * fVar100;
      fVar101 = fVar72 * fVar101;
      fVar105 = fVar105 * 0.0;
      fVar79 = fVar63 * (float)_DAT_01d4b580;
      fVar81 = fVar70 * fVar81;
      fVar47 = fVar72 * (float)_UNK_01d4b588;
      fVar106 = fVar106 * 0.0;
      fVar48 = fVar48 * (float)_DAT_01d49dc0;
      fVar82 = (float)((ulong)_DAT_01d49dc0 >> 0x20);
      fVar55 = fVar55 * fVar82;
      fVar75 = fVar75 * (float)_UNK_01d49dc8;
      fVar45 = (float)((ulong)_UNK_01d49dc8 >> 0x20);
      fVar102 = fVar45 * 0.0;
      fVar63 = fVar63 * (float)_DAT_01d49dc0;
      fVar70 = fVar70 * fVar82;
      fVar72 = fVar72 * (float)_UNK_01d49dc8;
      fVar45 = fVar45 * 0.0;
    }
    else {
      fVar69 = fVar41 + fVar41;
      fVar100 = fVar44 + fVar44;
      fVar101 = fVar45 + fVar45;
      fVar86 = fVar44 * fVar100;
      fVar102 = fVar45 * fVar101;
      fVar82 = fVar45 * fVar100 + fVar47 * fVar69;
      fVar105 = fVar106 - fVar41 * fVar69;
      fVar103 = fVar45 * fVar69 - fVar47 * fVar100;
      uVar56 = NEON_ext(CONCAT44(fVar45 * fVar69 + fVar47 * fVar100,
                                 fVar45 * fVar69 + fVar47 * fVar100),
                        CONCAT44(fVar45 * fVar100 - fVar47 * fVar69,
                                 fVar45 * fVar100 - fVar47 * fVar69),4,1);
      fVar45 = (float)uVar56;
      fVar83 = (float)((ulong)uVar56 >> 0x20);
      fVar107 = fVar105 - fVar86;
      uVar56 = NEON_ext(CONCAT44((fVar58 - fVar86) - fVar102,(fVar106 - fVar86) - fVar102),
                        CONCAT44(fVar44 * fVar69 + fVar47 * fVar101,
                                 fVar44 * fVar69 + fVar47 * fVar101),4,1);
      uVar90 = NEON_ext(CONCAT44(fVar44 * fVar69 - fVar47 * fVar101,
                                 fVar44 * fVar69 - fVar47 * fVar101),
                        CONCAT44((fVar58 - fVar41 * fVar69) - fVar102,fVar105 - fVar102),4,1);
      fVar106 = (float)((ulong)uVar90 >> 0x20);
      fVar41 = (float)uVar56;
      uVar96 = NEON_ext(CONCAT44(fVar41,fVar41),uVar90,4,1);
      uVar85 = NEON_ext(uVar56,CONCAT44(fVar106,fVar106),4,1);
      uVar91 = NEON_ext(CONCAT44(fVar103,fVar103),(ulong)(uint)fVar82,4,1);
      fVar102 = (float)uVar96 * fVar48;
      fVar74 = (float)((ulong)uVar96 >> 0x20);
      fVar79 = fVar74 * fVar48;
      fVar81 = fVar45 * fVar48;
      fVar95 = (float)uVar85 * fVar55;
      fVar87 = (float)((ulong)uVar85 >> 0x20);
      fVar97 = fVar87 * fVar55;
      fVar98 = fVar83 * fVar55;
      fVar84 = (float)uVar85 * fVar70;
      fVar87 = fVar87 * fVar70;
      fVar88 = fVar83 * fVar70;
      fVar48 = (float)uVar91 * fVar75;
      fVar70 = (float)((ulong)uVar91 >> 0x20);
      fVar55 = fVar70 * fVar75;
      fVar75 = fVar107 * fVar75;
      fVar108 = (float)uVar96 * fVar63;
      fVar74 = fVar74 * fVar63;
      fVar77 = fVar45 * fVar63;
      fVar63 = (float)uVar91 * fVar72;
      fVar70 = fVar70 * fVar72;
      fVar72 = fVar107 * fVar72;
      fVar44 = (float)((ulong)uVar56 >> 0x20);
      fVar47 = (float)uVar90;
      fVar71 = fVar48 * fVar103 + fVar102 * fVar41 + fVar95 * fVar44;
      fVar73 = fVar55 * fVar103 + fVar79 * fVar41 + fVar97 * fVar44;
      fVar76 = fVar75 * fVar103 + fVar81 * fVar41 + fVar98 * fVar44;
      fVar78 = 0.0;
      fVar69 = fVar63 * fVar103 + fVar108 * fVar41 + fVar84 * fVar44;
      fVar100 = fVar70 * fVar103 + fVar74 * fVar41 + fVar87 * fVar44;
      fVar101 = fVar72 * fVar103 + fVar77 * fVar41 + fVar88 * fVar44;
      fVar105 = 0.0;
      fVar41 = fVar48 * fVar82 + fVar102 * fVar47 + fVar95 * fVar106;
      fVar44 = fVar55 * fVar82 + fVar79 * fVar47 + fVar97 * fVar106;
      fVar58 = fVar75 * fVar82 + fVar81 * fVar47 + fVar98 * fVar106;
      fVar86 = 0.0;
      fVar48 = fVar48 * fVar107 + fVar102 * fVar45 + fVar95 * fVar83;
      fVar55 = fVar55 * fVar107 + fVar79 * fVar45 + fVar97 * fVar83;
      fVar75 = fVar75 * fVar107 + fVar81 * fVar45 + fVar98 * fVar83;
      fVar102 = 0.0;
      fVar79 = fVar63 * fVar82 + fVar108 * fVar47 + fVar84 * fVar106;
      fVar81 = fVar70 * fVar82 + fVar74 * fVar47 + fVar87 * fVar106;
      fVar47 = fVar72 * fVar82 + fVar77 * fVar47 + fVar88 * fVar106;
      fVar106 = 0.0;
      fVar63 = fVar63 * fVar107 + fVar108 * fVar45 + fVar84 * fVar83;
      fVar70 = fVar70 * fVar107 + fVar74 * fVar45 + fVar87 * fVar83;
      fVar72 = fVar72 * fVar107 + fVar77 * fVar45 + fVar88 * fVar83;
      fVar45 = 0.0;
    }
    uStack_1e8 = CONCAT44(fVar78,fVar76);
    local_1f0 = CONCAT44(fVar73,fVar71);
    uStack_1d8 = CONCAT44(fVar86,fVar58);
    uStack_1e0 = CONCAT44(fVar44,fVar41);
    uStack_1c8 = CONCAT44(fVar102,fVar75);
    local_1d0 = CONCAT44(fVar55,fVar48);
    uStack_1b8 = CONCAT44(fVar105,fVar101);
    uStack_1c0 = CONCAT44(fVar100,fVar69);
    uStack_1a8 = CONCAT44(fVar106,fVar47);
    local_1b0 = CONCAT44(fVar81,fVar79);
    uStack_198 = CONCAT44(fVar45,fVar72);
    uStack_1a0 = CONCAT44(fVar70,fVar63);
    fVar107 = fVar48 * 0.0 + fVar41 * 0.0 + fVar71 * 0.0;
    fVar108 = fVar55 * 0.0 + fVar44 * 0.0 + fVar73 * 0.0;
    fVar71 = fVar75 * 0.0 + fVar58 * 0.0 + fVar76 * 0.0;
    uStack_218 = (ulong)(uint)fVar71;
    local_220 = CONCAT44(fVar108,fVar107);
  }
  fVar48 = (float)*(undefined8 *)param_8;
  fVar55 = (float)((ulong)*(undefined8 *)param_8 >> 0x20);
  auVar53._0_4_ = -(fVar48 * param_1);
  auVar53._4_4_ = -(fVar55 * param_1);
  auVar53._8_4_ = -(fVar109 * param_1);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar25._0_12_;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar25._0_12_;
  auVar104 = NEON_ext(auVar4,auVar5,8,1);
  fVar44 = fVar57 * fVar57 + -0.5;
  auVar53._12_4_ = 0;
  auVar59 = NEON_ext(auVar53,auVar53,8,1);
  fVar41 = auVar53._4_4_ * fVar24 - auVar53._0_4_ * fVar46;
  fVar45 = auVar104._0_4_;
  fVar47 = auVar104._4_4_;
  local_188 = *(undefined8 *)(lVar23 + 0x50);
  uVar56 = NEON_ext(CONCAT44(auVar53._8_4_ * fVar46 - auVar53._4_4_ * fVar49,fVar41),
                    CONCAT44(auVar53._4_4_ * fVar47 - auVar59._4_4_ * fVar46,
                             auVar53._0_4_ * fVar45 - auVar59._0_4_ * fVar24),4,1);
  auVar25._0_4_ = auVar53._0_4_ * fVar44 - fVar57 * (float)uVar56;
  auVar25._4_4_ = auVar53._4_4_ * fVar44 - fVar57 * (float)((ulong)uVar56 >> 0x20);
  auVar25._8_4_ = auVar53._8_4_ * fVar44 - fVar57 * fVar41;
  auVar25._12_4_ = 0.0 - fVar57 * 0.0;
  auVar34._0_4_ = auVar53._0_4_ * fVar24;
  auVar34._4_4_ = auVar53._4_4_ * fVar46;
  auVar34._8_4_ = auVar53._8_4_ * fVar49;
  auVar34._12_4_ = 0;
  auVar59 = NEON_ext(auVar25,auVar25,8,1);
  auVar104 = NEON_ext(auVar34,auVar34,8,1);
  fVar41 = auVar34._0_4_ + auVar34._4_4_ + auVar104._0_4_ + auVar104._4_4_;
  puStack_268 = &local_170;
  local_270 = PTR_DAT_02711e08 + 0x10;
  local_280 = PTR_DAT_02711e10 + 0x10;
  auVar26._0_4_ = auVar25._0_4_ + fVar24 * fVar41;
  auVar26._4_4_ = auVar25._4_4_ + fVar46 * fVar41;
  auVar26._8_4_ = auVar59._0_4_ + fVar49 * fVar41;
  auVar26._12_4_ = fVar41 * 0.0 + 0.0;
  auVar59 = NEON_ext(auVar26,auVar26,8,1);
  local_230 = CONCAT44(auVar26._4_4_ + auVar26._4_4_,auVar26._0_4_ + auVar26._0_4_);
  uStack_228 = (ulong)(uint)(auVar59._0_4_ + auVar59._0_4_);
  uVar3 = *param_10;
  local_278 = &local_220;
  uStack_288 = (ulong)(uint)(fVar54 - fVar71);
  local_290 = CONCAT44(fVar51 - fVar108,fVar50 - fVar107);
                    /* try { // try from 002b6878 to 002b68a7 has its CatchHandler @ 002b6fe0 */
  local_15c = local_160;
  local_158 = local_160;
  uVar19 = FUN_002b6ff0(local_160 + param_2,&local_270,&local_280,&local_290,&local_108,&local_100,
                        &local_230,local_238,local_260,local_250,(byte)(uVar3 >> 9) & 1);
  if ((uVar19 & 1) == 0) {
    uVar56 = 0;
  }
  else {
    fVar106 = param_8[2];
    fVar41 = *param_8;
    fVar69 = param_8[1];
    *(undefined2 *)(param_9 + 0x14) = 6;
    fVar50 = local_250._0_4_;
    fVar51 = local_250._4_4_;
    fVar54 = local_250._8_4_;
    fVar100 = local_260._0_4_;
    fVar101 = local_260._4_4_;
    fVar105 = local_260._8_4_;
    if (0.0 < local_238[0]) {
      *(undefined2 *)(param_9 + 0x14) = 7;
      auVar59 = NEON_ext(local_250,local_250,8,1);
      auVar31._0_4_ = fVar24 * fVar50;
      auVar31._4_4_ = fVar46 * fVar51;
      auVar31._8_4_ = fVar49 * fVar54;
      auVar31._12_4_ = local_250._12_4_ * 0.0;
      fVar41 = fVar24 * fVar51 - fVar46 * fVar50;
      uVar56 = NEON_ext(CONCAT44(fVar46 * fVar54 - fVar49 * fVar51,fVar41),
                        CONCAT44(fVar47 * fVar51 - fVar46 * auVar59._4_4_,
                                 fVar45 * fVar50 - fVar24 * auVar59._0_4_),4,1);
      auVar38._0_4_ = fVar44 * fVar50 + fVar57 * (float)uVar56;
      auVar38._4_4_ = fVar44 * fVar51 + fVar57 * (float)((ulong)uVar56 >> 0x20);
      auVar38._8_4_ = fVar44 * fVar54 + fVar57 * fVar41;
      auVar38._12_4_ = fVar57 * 0.0 + 0.0;
      auVar59 = NEON_ext(auVar38,auVar38,8,1);
      auVar104 = NEON_ext(auVar31,auVar31,8,1);
      fVar41 = auVar31._0_4_ + auVar31._4_4_ + auVar104._0_4_ + auVar104._4_4_;
      auVar32._0_4_ = fVar24 * fVar41 + auVar38._0_4_;
      auVar32._4_4_ = fVar46 * fVar41 + auVar38._4_4_;
      auVar32._8_4_ = fVar49 * fVar41 + auVar59._0_4_;
      auVar32._12_4_ = fVar41 * 0.0 + 0.0;
      auVar59 = NEON_ext(auVar32,auVar32,8,1);
      auVar33._0_4_ = fVar89 + auVar32._0_4_ + auVar32._0_4_;
      auVar33._4_4_ = fVar93 + auVar32._4_4_ + auVar32._4_4_;
      auVar33._8_4_ = fVar94 + auVar59._0_4_ + auVar59._0_4_;
      auVar33._12_4_ = 0;
      auVar59 = NEON_ext(auVar33,auVar33,8,1);
      auVar104 = NEON_ext(local_260,local_260,8,1);
      auVar39._0_4_ = fVar24 * fVar100;
      auVar39._4_4_ = fVar46 * fVar101;
      auVar39._8_4_ = fVar49 * fVar105;
      auVar39._12_4_ = local_260._12_4_ * 0.0;
      fVar41 = fVar24 * fVar101 - fVar46 * fVar100;
      uVar56 = NEON_ext(CONCAT44(fVar46 * fVar105 - fVar49 * fVar101,fVar41),
                        CONCAT44(fVar47 * fVar101 - fVar46 * auVar104._4_4_,
                                 fVar45 * fVar100 - fVar24 * auVar104._0_4_),4,1);
      fVar45 = fVar44 * fVar100 + fVar57 * (float)uVar56;
      fVar47 = fVar44 * fVar101 + fVar57 * (float)((ulong)uVar56 >> 0x20);
      fVar41 = fVar44 * fVar105 + fVar57 * fVar41;
      fVar44 = fVar57 * 0.0 + 0.0;
      auVar10._4_4_ = fVar47;
      auVar10._0_4_ = fVar45;
      auVar10._8_4_ = fVar41;
      auVar10._12_4_ = fVar44;
      auVar11._4_4_ = fVar47;
      auVar11._0_4_ = fVar45;
      auVar11._8_4_ = fVar41;
      auVar11._12_4_ = fVar44;
      auVar104 = NEON_ext(auVar10,auVar11,8,1);
      auVar92 = NEON_ext(auVar39,auVar39,8,1);
      fVar41 = auVar39._0_4_ + auVar39._4_4_ + auVar92._0_4_ + auVar92._4_4_;
      fVar45 = fVar24 * fVar41 + fVar45;
      fVar47 = fVar46 * fVar41 + fVar47;
      fVar44 = fVar49 * fVar41 + auVar104._0_4_;
      fVar41 = fVar41 * 0.0 + 0.0;
      auVar12._4_4_ = fVar47;
      auVar12._0_4_ = fVar45;
      auVar12._8_4_ = fVar44;
      auVar12._12_4_ = fVar41;
      auVar13._4_4_ = fVar47;
      auVar13._0_4_ = fVar45;
      auVar13._8_4_ = fVar44;
      auVar13._12_4_ = fVar41;
      auVar104 = NEON_ext(auVar12,auVar13,8,1);
      fVar45 = fVar45 + fVar45;
      fVar47 = fVar47 + fVar47;
      fVar24 = auVar104._0_4_ + auVar104._0_4_;
      auVar40._0_4_ = fVar45 * fVar45;
      auVar40._4_4_ = fVar47 * fVar47;
      auVar40._8_4_ = fVar24 * fVar24;
      auVar40._12_4_ = 0;
      auVar104 = NEON_ext(auVar40,auVar40,8,1);
      fVar44 = auVar104._0_4_ + auVar104._4_4_;
      fVar41 = auVar40._0_4_ + auVar40._4_4_ + fVar44;
      fVar44 = auVar40._0_4_ + auVar40._4_4_ + fVar44;
      uVar19 = CONCAT44(fVar44,fVar41);
      uVar56 = NEON_frsqrte(uVar19,4);
      fVar46 = (float)uVar56;
      fVar49 = (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
      fVar46 = fVar46 * (float)uVar56;
      fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
      fVar46 = fVar46 * (float)uVar56;
      fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
      fVar46 = fVar46 * (float)uVar56;
      fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
      fVar46 = fVar41 * fVar46 * (float)uVar56;
      fVar44 = fVar44 * fVar49 * (float)((ulong)uVar56 >> 0x20);
      uVar19 = CONCAT44(fVar44,fVar46) ^
               (CONCAT44(fVar44,fVar46) ^ uVar19) &
               CONCAT44(-(uint)(fVar41 == 0.0),-(uint)(fVar41 == 0.0));
      uVar90 = NEON_frecpe(uVar19,4);
      uVar56 = NEON_frecps(uVar19,uVar90,4);
      fVar41 = (float)uVar90 * (float)uVar56;
      fVar44 = (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
      fVar41 = fVar41 * (float)uVar56;
      fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
      fVar41 = fVar41 * (float)uVar56;
      fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
      uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
      fVar41 = fVar41 * (float)uVar56;
      uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44 * (float)((ulong)uVar56 >> 0x20),fVar41),4);
      fVar41 = fVar41 * (float)uVar56;
      param_1 = param_1 * local_238[0];
      fVar44 = fVar48 * param_1 + auVar33._0_4_;
      fVar46 = fVar55 * param_1 + auVar33._4_4_;
      auVar43._0_8_ = CONCAT44(fVar46,fVar44);
      auVar43._8_4_ = fVar109 * param_1 + auVar59._0_4_;
      auVar43._12_4_ = param_1 * 0.0 + 0.0;
      auVar59 = NEON_ext(auVar43,auVar43,8,1);
      *(undefined8 *)(param_9 + 0x18) = auVar43._0_8_;
      *(ulong *)(param_9 + 0x20) = CONCAT44(fVar45 * fVar41,auVar59._0_4_);
      *(ulong *)(param_9 + 0x28) = CONCAT44(fVar24 * fVar41,fVar47 * fVar41);
      *(float *)(param_9 + 0x30) = param_1;
      if ((*(byte *)((long)param_10 + 1) >> 2 & 1) != 0) {
        fVar54 = *(float *)(*param_4 + 0xc);
        fVar45 = *(float *)param_4[1];
        fVar48 = param_8[2];
        fVar57 = *param_8;
        fVar49 = param_8[1];
        fVar47 = *(float *)(param_4[1] + 4);
        fVar24 = *(float *)(param_4[1] + 8);
        fVar55 = *(float *)(*param_4 + 4);
        fVar50 = *(float *)(*param_4 + 8);
        fVar51 = *(float *)*param_4;
        bVar2 = *(byte *)(lVar23 + 0x47);
                    /* try { // try from 002b6cdc to 002b6ceb has its CatchHandler @ 002b6fdc */
        FUN_001b0f90(auStack_f0,(undefined1 (*) [16])(param_3 + 4),(float *)(param_3 + 0x10));
        fVar41 = DAT_01d4c4d4;
        if (bVar2 == 0) {
          uVar21 = 0;
        }
        else {
          fVar47 = (fVar46 - fVar49 * DAT_01d4c4d4) - fVar47;
          fVar46 = fVar57 + fVar57;
          fVar49 = fVar49 + fVar49;
          fVar69 = fVar48 + fVar48;
          fVar45 = (fVar44 - fVar57 * DAT_01d4c4d4) - fVar45;
          fVar57 = fVar54 * fVar54 + -0.5;
          fVar100 = fVar46 * fVar51 + fVar49 * fVar55 + fVar69 * fVar50;
          fVar24 = (auVar59._0_4_ - fVar48 * DAT_01d4c4d4) - fVar24;
          fVar45 = fVar45 + fVar45;
          fVar47 = fVar47 + fVar47;
          fVar24 = fVar24 + fVar24;
          fVar48 = fVar45 * fVar51 + fVar47 * fVar55 + fVar24 * fVar50;
          lVar22 = 0;
          uVar19 = 0;
          fVar44 = DAT_01d4c18c;
          uVar20 = 0;
          do {
            pfVar1 = (float *)(*(long *)(lVar23 + 0x48) + lVar22);
            fVar105 = *pfVar1;
            fVar106 = pfVar1[1];
            fVar101 = pfVar1[2];
            fVar75 = pfVar1[3];
            fVar63 = local_cc * fVar105 + fStack_c8 * fVar106 + local_c4 * fVar101;
            fVar58 = fVar105 * local_c0 + fVar106 * fStack_bc + fVar101 * local_b8;
            fVar106 = fVar105 * local_b4 + fVar106 * local_b0 + fVar101 * local_ac;
                    /* try { // try from 002b6ee8 to 002b6eeb has its CatchHandler @ 002b6fe4 */
            fVar105 = sqrtf(fVar63 * fVar63 + fVar58 * fVar58 + fVar106 * fVar106);
            fVar105 = 1.0 / fVar105;
            fVar101 = fVar75 * fVar105 +
                      ((fVar24 * fVar57 - fVar54 * (fVar47 * fVar51 - fVar45 * fVar55)) +
                      fVar50 * fVar48) * fVar106 * fVar105 +
                      (fVar51 * fVar48 +
                      (fVar45 * fVar57 - fVar54 * (fVar24 * fVar55 - fVar47 * fVar50))) *
                      fVar63 * fVar105 +
                      (fVar55 * fVar48 +
                      (fVar47 * fVar57 - fVar54 * (fVar45 * fVar50 - fVar24 * fVar51))) *
                      fVar58 * fVar105;
            uVar21 = uVar20;
            if (0.0 <= fVar101) {
              fVar101 = fVar101 + (((fVar69 * fVar57 - fVar54 * (fVar49 * fVar51 - fVar46 * fVar55))
                                   + fVar50 * fVar100) * fVar106 * fVar105 +
                                  (fVar51 * fVar100 +
                                  (fVar46 * fVar57 - fVar54 * (fVar69 * fVar55 - fVar49 * fVar50)))
                                  * fVar63 * fVar105 +
                                  (fVar55 * fVar100 +
                                  (fVar49 * fVar57 - fVar54 * (fVar46 * fVar50 - fVar69 * fVar51)))
                                  * fVar58 * fVar105) * fVar41;
              uVar21 = (int)uVar19;
              if (fVar44 <= fVar101) {
                uVar21 = uVar20;
                fVar101 = fVar44;
              }
              fVar44 = fVar101;
            }
            uVar19 = uVar19 + 1;
            lVar22 = lVar22 + 0x14;
            uVar20 = uVar21;
          } while (bVar2 != uVar19);
        }
        *(undefined4 *)(param_9 + 0x10) = uVar21;
        *(ushort *)(param_9 + 0x14) = *(ushort *)(param_9 + 0x14) | 0x400;
      }
    }
    else {
      if ((uVar3 >> 9 & 1) == 0) {
        *(undefined4 *)(param_9 + 0x30) = 0;
        *(float *)(param_9 + 0x24) = -fVar41;
        *(float *)(param_9 + 0x28) = -fVar69;
        *(float *)(param_9 + 0x2c) = -fVar106;
      }
      else {
        *(undefined2 *)(param_9 + 0x14) = 7;
        auVar59 = NEON_ext(local_250,local_250,8,1);
        auVar27._0_4_ = fVar24 * fVar50;
        auVar27._4_4_ = fVar46 * fVar51;
        auVar27._8_4_ = fVar49 * fVar54;
        auVar27._12_4_ = local_250._12_4_ * 0.0;
        fVar41 = fVar24 * fVar51 - fVar46 * fVar50;
        uVar56 = NEON_ext(CONCAT44(fVar46 * fVar54 - fVar49 * fVar51,fVar41),
                          CONCAT44(fVar47 * fVar51 - fVar46 * auVar59._4_4_,
                                   fVar45 * fVar50 - fVar24 * auVar59._0_4_),4,1);
        auVar35._0_4_ = fVar44 * fVar50 + fVar57 * (float)uVar56;
        auVar35._4_4_ = fVar44 * fVar51 + fVar57 * (float)((ulong)uVar56 >> 0x20);
        auVar35._8_4_ = fVar44 * fVar54 + fVar57 * fVar41;
        auVar35._12_4_ = fVar57 * 0.0 + 0.0;
        auVar59 = NEON_ext(auVar35,auVar35,8,1);
        auVar104 = NEON_ext(auVar27,auVar27,8,1);
        fVar41 = auVar27._0_4_ + auVar27._4_4_ + auVar104._0_4_ + auVar104._4_4_;
        auVar28._0_4_ = fVar24 * fVar41 + auVar35._0_4_;
        auVar28._4_4_ = fVar46 * fVar41 + auVar35._4_4_;
        auVar28._8_4_ = fVar49 * fVar41 + auVar59._0_4_;
        auVar28._12_4_ = fVar41 * 0.0 + 0.0;
        auVar59 = NEON_ext(auVar28,auVar28,8,1);
        auVar29._0_4_ = fVar89 + auVar28._0_4_ + auVar28._0_4_;
        auVar29._4_4_ = fVar93 + auVar28._4_4_ + auVar28._4_4_;
        auVar29._8_4_ = fVar94 + auVar59._0_4_ + auVar59._0_4_;
        auVar29._12_4_ = 0;
        auVar59 = NEON_ext(auVar29,auVar29,8,1);
        auVar104 = NEON_ext(local_260,local_260,8,1);
        auVar36._0_4_ = fVar24 * fVar100;
        auVar36._4_4_ = fVar46 * fVar101;
        auVar36._8_4_ = fVar49 * fVar105;
        auVar36._12_4_ = local_260._12_4_ * 0.0;
        fVar41 = fVar24 * fVar101 - fVar46 * fVar100;
        uVar56 = NEON_ext(CONCAT44(fVar46 * fVar105 - fVar49 * fVar101,fVar41),
                          CONCAT44(fVar47 * fVar101 - fVar46 * auVar104._4_4_,
                                   fVar45 * fVar100 - fVar24 * auVar104._0_4_),4,1);
        fVar45 = fVar44 * fVar100 + fVar57 * (float)uVar56;
        fVar47 = fVar44 * fVar101 + fVar57 * (float)((ulong)uVar56 >> 0x20);
        fVar41 = fVar44 * fVar105 + fVar57 * fVar41;
        fVar44 = fVar57 * 0.0 + 0.0;
        auVar6._4_4_ = fVar47;
        auVar6._0_4_ = fVar45;
        auVar6._8_4_ = fVar41;
        auVar6._12_4_ = fVar44;
        auVar7._4_4_ = fVar47;
        auVar7._0_4_ = fVar45;
        auVar7._8_4_ = fVar41;
        auVar7._12_4_ = fVar44;
        auVar104 = NEON_ext(auVar6,auVar7,8,1);
        auVar92 = NEON_ext(auVar36,auVar36,8,1);
        fVar41 = auVar36._0_4_ + auVar36._4_4_ + auVar92._0_4_ + auVar92._4_4_;
        fVar45 = fVar24 * fVar41 + fVar45;
        fVar47 = fVar46 * fVar41 + fVar47;
        fVar44 = fVar49 * fVar41 + auVar104._0_4_;
        fVar41 = fVar41 * 0.0 + 0.0;
        auVar8._4_4_ = fVar47;
        auVar8._0_4_ = fVar45;
        auVar8._8_4_ = fVar44;
        auVar8._12_4_ = fVar41;
        auVar9._4_4_ = fVar47;
        auVar9._0_4_ = fVar45;
        auVar9._8_4_ = fVar44;
        auVar9._12_4_ = fVar41;
        auVar104 = NEON_ext(auVar8,auVar9,8,1);
        fVar45 = fVar45 + fVar45;
        fVar47 = fVar47 + fVar47;
        fVar24 = auVar104._0_4_ + auVar104._0_4_;
        auVar37._0_4_ = fVar45 * fVar45;
        auVar37._4_4_ = fVar47 * fVar47;
        auVar37._8_4_ = fVar24 * fVar24;
        auVar37._12_4_ = 0;
        auVar104 = NEON_ext(auVar37,auVar37,8,1);
        fVar44 = auVar104._0_4_ + auVar104._4_4_;
        fVar41 = auVar37._0_4_ + auVar37._4_4_ + fVar44;
        fVar44 = auVar37._0_4_ + auVar37._4_4_ + fVar44;
        uVar19 = CONCAT44(fVar44,fVar41);
        uVar56 = NEON_frsqrte(uVar19,4);
        fVar46 = (float)uVar56;
        fVar49 = (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
        fVar46 = fVar46 * (float)uVar56;
        fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
        fVar46 = fVar46 * (float)uVar56;
        fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
        fVar46 = fVar46 * (float)uVar56;
        fVar49 = fVar49 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frsqrts(CONCAT44(fVar49 * fVar49,fVar46 * fVar46),uVar19,4);
        fVar46 = fVar41 * fVar46 * (float)uVar56;
        fVar44 = fVar44 * fVar49 * (float)((ulong)uVar56 >> 0x20);
        uVar19 = CONCAT44(fVar44,fVar46) ^
                 (CONCAT44(fVar44,fVar46) ^ uVar19) &
                 CONCAT44(-(uint)(fVar41 == 0.0),-(uint)(fVar41 == 0.0));
        uVar90 = NEON_frecpe(uVar19,4);
        uVar56 = NEON_frecps(uVar19,uVar90,4);
        fVar41 = (float)uVar90 * (float)uVar56;
        fVar44 = (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
        fVar41 = fVar41 * (float)uVar56;
        fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
        fVar41 = fVar41 * (float)uVar56;
        fVar44 = fVar44 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44,fVar41),4);
        fVar41 = fVar41 * (float)uVar56;
        uVar56 = NEON_frecps(uVar19,CONCAT44(fVar44 * (float)((ulong)uVar56 >> 0x20),fVar41),4);
        fVar41 = fVar41 * (float)uVar56;
        auVar30._0_8_ =
             CONCAT44(auVar29._4_4_ - fVar47 * fVar41 * local_238[0],
                      auVar29._0_4_ - fVar45 * fVar41 * local_238[0]);
        auVar30._8_4_ = auVar59._0_4_ - fVar24 * fVar41 * local_238[0];
        auVar30._12_4_ = 0.0 - local_238[0] * 0.0;
        auVar59 = NEON_ext(auVar30,auVar30,8,1);
        *(ulong *)(param_9 + 0x28) = CONCAT44(fVar24 * fVar41,fVar47 * fVar41);
        *(undefined8 *)(param_9 + 0x18) = auVar30._0_8_;
        *(ulong *)(param_9 + 0x20) = CONCAT44(fVar45 * fVar41,auVar59._0_4_);
        *(float *)(param_9 + 0x30) = local_238[0];
      }
      *(undefined4 *)(param_9 + 0x10) = 0xffffffff;
    }
    uVar56 = 1;
  }
  return uVar56;
}


