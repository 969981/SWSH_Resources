/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002ec140; name: FUN_002ec140
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002ec140(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar28;
  float fVar29;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte bVar30;
  byte bVar47;
  byte bVar48;
  uint uVar31;
  float fVar32;
  uint uVar33;
  undefined1 auVar35 [12];
  float fVar50;
  float fVar51;
  uint uVar52;
  float fVar53;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  int iVar34;
  byte bVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar57 [16];
  float fVar66;
  undefined8 uVar56;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar67;
  ulong uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  uint uVar74;
  float fVar75;
  undefined8 uVar76;
  float fVar84;
  undefined1 auVar77 [16];
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined8 uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar111;
  float fVar112;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined8 uVar121;
  undefined8 local_200;
  ulong uStack_1f8;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1c0;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float local_150 [2];
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  float local_130 [8];
  undefined8 local_110;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint local_c4;
  float local_c0 [4];
  undefined8 local_b0;
  ulong uStack_a8;
  
  uVar76 = *(undefined8 *)*param_7;
  uVar85 = *(undefined8 *)(*param_7 + 8);
  uVar92 = *(undefined8 *)param_6;
  uVar121 = *(undefined8 *)(param_6 + 2);
  local_c4 = 1;
  fVar14 = *param_4;
  fVar15 = param_4[1];
  fVar54 = param_4[2];
  fVar66 = param_4[3];
  auVar99._0_4_ = fVar14 * fVar14;
  auVar99._4_4_ = fVar15 * fVar15;
  auVar99._8_4_ = fVar54 * fVar54;
  auVar99._12_4_ = fVar66 * fVar66;
  auVar57 = NEON_ext(auVar99,auVar99,8,1);
  uVar31 = -(uint)(1.1920929e-07 < auVar99._0_4_ + auVar99._4_4_ + auVar57._0_4_ + auVar57._4_4_);
  fVar16 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar14) & uVar31);
  fVar28 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar15) & uVar31);
  fVar29 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar54) & uVar31);
  fVar14 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar66) & uVar31);
  auVar96._0_4_ = fVar16 * fVar16;
  auVar96._4_4_ = fVar28 * fVar28;
  auVar96._8_4_ = fVar29 * fVar29;
  auVar96._12_4_ = fVar14 * fVar14;
  auVar57 = NEON_ext(auVar96,auVar96,8,1);
  fVar15 = auVar57._0_4_ + auVar57._4_4_;
  fVar14 = auVar96._0_4_ + auVar96._4_4_ + fVar15;
  fVar15 = auVar96._0_4_ + auVar96._4_4_ + fVar15;
  uVar5 = CONCAT44(fVar15,fVar14);
  uVar55 = NEON_frsqrte(uVar5,4);
  fVar54 = (float)uVar55;
  fVar66 = (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar54 * fVar54),uVar5,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar66 = fVar66 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar54 * fVar54),uVar5,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar66 = fVar66 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar54 * fVar54),uVar5,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar66 = fVar66 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar66 * fVar66,fVar54 * fVar54),uVar5,4);
  uVar68 = CONCAT44(fVar15 * fVar66 * (float)((ulong)uVar55 >> 0x20),fVar14 * fVar54 * (float)uVar55
                   );
  uVar68 = uVar68 ^ (uVar68 ^ uVar5) & CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar55 = NEON_frecpe(uVar68,4);
  uVar56 = NEON_frecps(uVar68,uVar55,4);
  fVar14 = (float)uVar55 * (float)uVar56;
  fVar15 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
  uVar55 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar55;
  fVar15 = fVar15 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar55;
  fVar15 = fVar15 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar55;
  uVar55 = NEON_frecps(uVar68,CONCAT44(fVar15 * (float)((ulong)uVar55 >> 0x20),fVar14),4);
  fVar14 = fVar14 * (float)uVar55;
  fVar16 = fVar16 * fVar14;
  fVar28 = fVar28 * fVar14;
  fVar29 = fVar29 * fVar14;
  lVar13 = *(long *)(param_2 + 8);
  pfVar7 = *(float **)(param_2 + 0x10);
  fVar14 = *(float *)(lVar13 + 0x50);
  fVar15 = *(float *)(lVar13 + 0x54);
  fVar54 = *(float *)(lVar13 + 0x58);
  fVar66 = -fVar16;
  fVar50 = -fVar28;
  fVar53 = -fVar29;
  lVar12 = *(long *)(param_3 + 8);
  fVar32 = *(float *)(param_2 + 0x40) * fVar53 +
           *(float *)(param_2 + 0x20) * fVar66 + *(float *)(param_2 + 0x30) * fVar50;
  fVar51 = *(float *)(param_2 + 0x44) * fVar53 +
           *(float *)(param_2 + 0x24) * fVar66 + *(float *)(param_2 + 0x34) * fVar50;
  fVar66 = *(float *)(param_2 + 0x48) * fVar53 +
           *(float *)(param_2 + 0x28) * fVar66 + *(float *)(param_2 + 0x38) * fVar50;
  auVar86._0_4_ = *(float *)(lVar13 + 0x40) * fVar32;
  auVar86._4_4_ = *(float *)(lVar13 + 0x44) * fVar51;
  auVar86._8_4_ = *(float *)(lVar13 + 0x48) * fVar66;
  auVar86._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
  auVar77._0_4_ = *(float *)(lVar13 + 0x30) * fVar32;
  auVar77._4_4_ = *(float *)(lVar13 + 0x34) * fVar51;
  auVar77._8_4_ = *(float *)(lVar13 + 0x38) * fVar66;
  auVar77._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
  auVar57 = NEON_ext(auVar77,auVar77,8,1);
  auVar100._0_4_ = fVar14 * fVar32;
  auVar100._4_4_ = fVar15 * fVar51;
  auVar100._8_4_ = fVar54 * fVar66;
  auVar100._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
  auVar96 = NEON_ext(auVar86,auVar86,8,1);
  auVar97 = NEON_ext(auVar100,auVar100,8,1);
  fVar66 = auVar77._0_4_ + auVar77._4_4_ + auVar57._0_4_ + auVar57._4_4_;
  fVar32 = auVar86._0_4_ + auVar86._4_4_ + auVar96._0_4_ + auVar96._4_4_;
  fVar50 = auVar100._0_4_ + auVar100._4_4_ + auVar97._0_4_ + auVar97._4_4_;
  uVar31 = -(uint)(fVar50 < fVar32);
  uVar74 = -(uint)(fVar32 < fVar66 && fVar50 < fVar66);
  uVar33 = (uint)fVar14 ^ ((uint)fVar14 ^ (uint)*(float *)(lVar13 + 0x40)) & uVar31;
  uVar52 = (uint)fVar15 ^ ((uint)fVar15 ^ (uint)*(float *)(lVar13 + 0x44)) & uVar31;
  uVar31 = (uint)fVar54 ^ ((uint)fVar54 ^ (uint)*(float *)(lVar13 + 0x48)) & uVar31;
  auVar57 = *(undefined1 (*) [16])(pfVar7 + 0xc);
  auVar98._0_4_ = fVar16 * *(float *)(lVar12 + 0x40);
  auVar98._4_4_ = fVar28 * *(float *)(lVar12 + 0x44);
  auVar98._8_4_ = fVar29 * *(float *)(lVar12 + 0x48);
  auVar98._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
  fVar54 = (float)(uVar33 ^ (uVar33 ^ (uint)*(float *)(lVar13 + 0x30)) & uVar74);
  fVar50 = (float)(uVar52 ^ (uVar52 ^ (uint)*(float *)(lVar13 + 0x34)) & uVar74);
  fVar51 = (float)(uVar31 ^ (uVar31 ^ (uint)*(float *)(lVar13 + 0x38)) & uVar74);
  auVar87._0_4_ = fVar16 * *(float *)(lVar12 + 0x30);
  auVar87._4_4_ = fVar28 * *(float *)(lVar12 + 0x34);
  auVar87._8_4_ = fVar29 * *(float *)(lVar12 + 0x38);
  auVar87._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
  auVar96 = NEON_ext(auVar87,auVar87,8,1);
  fVar14 = auVar96._0_4_ + auVar96._4_4_;
  auVar96 = NEON_ext(auVar98,auVar98,8,1);
  fVar15 = auVar96._0_4_ + auVar96._4_4_;
  fVar66 = auVar57._0_4_ + pfVar7[8] * fVar51 + *pfVar7 * fVar54 + pfVar7[4] * fVar50;
  fVar32 = auVar57._4_4_ + pfVar7[9] * fVar51 + pfVar7[1] * fVar54 + pfVar7[5] * fVar50;
  fVar50 = auVar57._8_4_ + pfVar7[10] * fVar51 + pfVar7[2] * fVar54 + pfVar7[6] * fVar50;
  fVar51 = auVar57._12_4_ + 0.0;
  auVar97._0_4_ = fVar16 * *(float *)(lVar12 + 0x50);
  auVar97._4_4_ = fVar28 * *(float *)(lVar12 + 0x54);
  auVar97._8_4_ = fVar29 * *(float *)(lVar12 + 0x58);
  auVar97._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
  auVar57 = NEON_ext(auVar97,auVar97,8,1);
  fStack_108 = auVar97._0_4_ + auVar97._4_4_ + auVar57._0_4_ + auVar57._4_4_;
  uVar55 = NEON_ext(CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar14,
                             auVar87._0_4_ + auVar87._4_4_ + fVar14),
                    CONCAT44(auVar98._0_4_ + auVar98._4_4_ + fVar15,
                             auVar98._0_4_ + auVar98._4_4_ + fVar15),4,1);
  fStack_104 = 0.0;
  local_110._0_4_ = (float)uVar55;
  local_110._4_4_ = (float)((ulong)uVar55 >> 0x20);
  uVar5 = FUN_00222070(lVar12,&local_110);
  pfVar7 = (float *)(*(long *)(lVar12 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
  fVar14 = *pfVar7;
  fVar15 = pfVar7[1];
  fVar54 = pfVar7[2];
  auVar105._8_8_ = 0xffffffffffffffff;
  auVar105._0_8_ = 0xffffffffffffffff;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_130[2] = 0.0;
  local_130[3] = 0.0;
  local_130[0] = 0.0;
  local_130[1] = 0.0;
  local_130[6] = 0.0;
  local_130[7] = 0.0;
  local_130[4] = 0.0;
  local_130[5] = 0.0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  local_110._0_4_ =
       *(float *)(lVar12 + 0x30) * fVar14 + *(float *)(lVar12 + 0x40) * fVar15 +
       *(float *)(lVar12 + 0x50) * fVar54;
  local_110._4_4_ =
       *(float *)(lVar12 + 0x34) * fVar14 + *(float *)(lVar12 + 0x44) * fVar15 +
       *(float *)(lVar12 + 0x54) * fVar54;
  local_190 = CONCAT44(local_110._4_4_,(float)local_110);
  fVar14 = *(float *)(lVar12 + 0x38) * fVar14 + *(float *)(lVar12 + 0x48) * fVar15 +
           *(float *)(lVar12 + 0x58) * fVar54;
  local_110._0_4_ = fVar66 - (float)local_110;
  local_110._4_4_ = fVar32 - local_110._4_4_;
  auVar110._0_8_ = CONCAT44(local_110._4_4_,(float)local_110);
  auVar110._8_4_ = fVar50 - fVar14;
  auVar110._12_4_ = fVar51 - 0.0;
  fVar54 = -(float)local_110;
  fVar16 = -local_110._4_4_;
  auVar57._0_8_ = CONCAT44(fVar16,fVar54);
  auVar57._8_4_ = -auVar110._8_4_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_188 = (ulong)(uint)fVar14;
  uStack_178 = 0;
  local_180 = 0;
  auVar57._12_4_ = 0;
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x18);
  uVar55 = NEON_fmin(0x7f7fffff7f7fffff,CONCAT44(uVar1,uVar1),4);
  fVar15 = (float)uVar55 * 0.1;
  auVar106._0_4_ = fVar54 * fVar54;
  auVar106._4_4_ = fVar16 * fVar16;
  auVar106._8_4_ = auVar57._8_4_ * auVar57._8_4_;
  auVar106._12_4_ = 0;
  auVar96 = NEON_ext(auVar106,auVar106,8,1);
  fVar14 = auVar106._0_4_ + auVar106._4_4_ + auVar96._0_4_ + auVar96._4_4_;
  bVar4 = fVar15 * fVar15 < fVar14;
  auVar36._0_4_ = -(uint)bVar4;
  auVar36._4_4_ = -(uint)bVar4;
  auVar36._8_4_ = -(uint)bVar4;
  auVar36._12_4_ = -(uint)bVar4;
  NEON_ext(auVar36,auVar36,8,1);
  uStack_1f8 = (ulong)(uint)auVar57._8_4_;
  local_150[0] = fVar66;
  local_150[1] = fVar32;
  uStack_148._0_4_ = fVar50;
  uStack_148._4_4_ = fVar51;
  fStack_108 = auVar110._8_4_;
  fStack_104 = auVar110._12_4_;
  if (CONCAT13((char)auVar36._12_4_,
               CONCAT12((char)auVar36._8_4_,CONCAT11((char)auVar36._4_4_,(char)auVar36._0_4_))) ==
      -1) {
    uVar56 = 0;
    local_1d0 = (float)uVar76;
    fStack_1cc = (float)((ulong)uVar76 >> 0x20);
    fStack_1c8 = (float)uVar85;
    fStack_1c4 = (float)((ulong)uVar85 >> 0x20);
    local_1c0._0_4_ = (float)uVar92;
    local_1c0._4_4_ = (float)((ulong)uVar92 >> 0x20);
    fStack_1b8 = (float)uVar121;
    fStack_1b4 = (float)((ulong)uVar121 >> 0x20);
    auVar69._0_8_ = CONCAT44(fStack_1cc * 0.0 + local_1c0._4_4_,local_1d0 * 0.0 + (float)local_1c0);
    auVar69._8_4_ = fStack_1c8 * 0.0 + fStack_1b8;
    auVar69._12_4_ = fStack_1c4 * 0.0 + fStack_1b4;
    auVar96 = NEON_ext(auVar69,auVar69,8,1);
    fVar54 = auVar96._0_4_;
    fVar66 = param_1 + fVar15;
    auVar88._8_4_ = auVar57._8_4_;
    auVar88._0_8_ = auVar57._0_8_;
    auVar88._12_4_ = 0;
    auVar21._8_8_ = auVar110._8_8_;
    auVar21._0_8_ = auVar110._0_8_;
    local_200 = auVar57._0_8_;
    local_1c0 = auVar69._0_8_;
    do {
      auVar110 = auVar21;
      fVar75 = auVar88._0_4_;
      auVar37._0_4_ = fVar75 * fVar75;
      fVar83 = auVar88._4_4_;
      auVar37._4_4_ = fVar83 * fVar83;
      fVar84 = auVar88._8_4_;
      auVar37._8_4_ = fVar84 * fVar84;
      auVar37._12_4_ = auVar88._12_4_ * auVar88._12_4_;
      lVar12 = *(long *)(param_3 + 8);
      auVar57 = NEON_ext(auVar37,auVar37,8,1);
      fVar50 = auVar57._0_4_ + auVar57._4_4_;
      fVar32 = auVar37._0_4_ + auVar37._4_4_ + fVar50;
      fVar50 = auVar37._0_4_ + auVar37._4_4_ + fVar50;
      uVar5 = CONCAT44(fVar50,fVar32);
      uVar76 = NEON_frsqrte(uVar5,4);
      fVar16 = (float)uVar76;
      fVar28 = (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar16 * fVar16),uVar5,4);
      fVar16 = fVar16 * (float)uVar76;
      fVar28 = fVar28 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar16 * fVar16),uVar5,4);
      fVar16 = fVar16 * (float)uVar76;
      fVar28 = fVar28 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar16 * fVar16),uVar5,4);
      fVar16 = fVar16 * (float)uVar76;
      fVar28 = fVar28 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frsqrts(CONCAT44(fVar28 * fVar28,fVar16 * fVar16),uVar5,4);
      uVar68 = CONCAT44(fVar50 * fVar28 * (float)((ulong)uVar76 >> 0x20),
                        fVar32 * fVar16 * (float)uVar76);
      uVar68 = uVar68 ^ (uVar68 ^ uVar5) & CONCAT44(-(uint)(fVar32 == 0.0),-(uint)(fVar32 == 0.0));
      uVar76 = NEON_frecpe(uVar68,4);
      uVar85 = NEON_frecps(uVar68,uVar76,4);
      fVar32 = (float)uVar76 * (float)uVar85;
      fVar50 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
      uVar76 = NEON_frecps(uVar68,CONCAT44(fVar50,fVar32),4);
      fVar32 = fVar32 * (float)uVar76;
      fVar50 = fVar50 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frecps(uVar68,CONCAT44(fVar50,fVar32),4);
      fVar32 = fVar32 * (float)uVar76;
      fVar50 = fVar50 * (float)((ulong)uVar76 >> 0x20);
      uVar76 = NEON_frecps(uVar68,CONCAT44(fVar50,fVar32),4);
      fVar32 = fVar32 * (float)uVar76;
      uVar76 = NEON_frecps(uVar68,CONCAT44(fVar50 * (float)((ulong)uVar76 >> 0x20),fVar32),4);
      fVar32 = fVar32 * (float)uVar76;
      fVar75 = fVar75 * fVar32;
      fVar83 = fVar83 * fVar32;
      fVar84 = fVar84 * fVar32;
      lVar13 = *(long *)(param_2 + 8);
      pfVar7 = *(float **)(param_2 + 0x10);
      auVar57 = *(undefined1 (*) [16])(lVar13 + 0x50);
      fVar32 = *(float *)(param_2 + 0x40) * fVar84 +
               *(float *)(param_2 + 0x20) * fVar75 + *(float *)(param_2 + 0x30) * fVar83;
      fVar50 = *(float *)(param_2 + 0x44) * fVar84 +
               *(float *)(param_2 + 0x24) * fVar75 + *(float *)(param_2 + 0x34) * fVar83;
      fVar16 = *(float *)(param_2 + 0x48) * fVar84 +
               *(float *)(param_2 + 0x28) * fVar75 + *(float *)(param_2 + 0x38) * fVar83;
      auVar96 = *(undefined1 (*) [16])(lVar13 + 0x30);
      auVar97 = *(undefined1 (*) [16])(lVar13 + 0x40);
      auVar89._0_4_ = auVar97._0_4_ * fVar32;
      auVar89._4_4_ = auVar97._4_4_ * fVar50;
      auVar89._8_4_ = auVar97._8_4_ * fVar16;
      auVar89._12_4_ = auVar97._12_4_ * 0.0;
      auVar106 = NEON_ext(auVar89,auVar89,8,1);
      auVar78._0_4_ = auVar96._0_4_ * fVar32;
      auVar78._4_4_ = auVar96._4_4_ * fVar50;
      auVar78._8_4_ = auVar96._8_4_ * fVar16;
      auVar78._12_4_ = auVar96._12_4_ * 0.0;
      auVar99 = NEON_ext(auVar78,auVar78,8,1);
      auVar38._0_4_ = auVar57._0_4_ * fVar32;
      auVar38._4_4_ = auVar57._4_4_ * fVar50;
      auVar38._8_4_ = auVar57._8_4_ * fVar16;
      auVar38._12_4_ = auVar57._12_4_ * 0.0;
      fVar104 = -fVar75;
      fVar111 = -fVar83;
      fVar112 = -fVar84;
      auVar100 = NEON_ext(auVar38,auVar38,8,1);
      fVar32 = auVar89._0_4_ + auVar89._4_4_ + auVar106._0_4_ + auVar106._4_4_;
      fVar50 = auVar78._0_4_ + auVar78._4_4_ + auVar99._0_4_ + auVar99._4_4_;
      fVar16 = auVar38._0_4_ + auVar38._4_4_ + auVar100._0_4_ + auVar100._4_4_;
      auVar39._0_4_ = -(uint)(fVar16 < fVar32);
      auVar79._0_4_ = -(uint)(fVar32 < fVar50 && fVar16 < fVar50);
      auVar39._4_4_ = auVar39._0_4_;
      auVar39._8_4_ = auVar39._0_4_;
      auVar39._12_4_ = auVar39._0_4_;
      auVar79._4_4_ = auVar79._0_4_;
      auVar79._8_4_ = auVar79._0_4_;
      auVar79._12_4_ = auVar79._0_4_;
      auVar57 = auVar57 ^ (auVar57 ^ auVar97) & auVar39;
      auVar97 = *(undefined1 (*) [16])(pfVar7 + 0xc);
      auVar101._0_4_ = fVar104 * *(float *)(lVar12 + 0x40);
      auVar101._4_4_ = fVar111 * *(float *)(lVar12 + 0x44);
      auVar101._8_4_ = fVar112 * *(float *)(lVar12 + 0x48);
      auVar101._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
      auVar57 = auVar57 ^ (auVar57 ^ auVar96) & auVar79;
      fVar16 = auVar57._4_4_;
      fVar51 = auVar57._8_4_;
      fVar50 = auVar57._0_4_;
      auVar90._0_4_ = fVar104 * *(float *)(lVar12 + 0x30);
      auVar90._4_4_ = fVar111 * *(float *)(lVar12 + 0x34);
      auVar90._8_4_ = fVar112 * *(float *)(lVar12 + 0x38);
      auVar90._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
      auVar57 = NEON_ext(auVar90,auVar90,8,1);
      fVar32 = auVar57._0_4_ + auVar57._4_4_;
      auVar57 = NEON_ext(auVar101,auVar101,8,1);
      fVar28 = auVar97._0_4_ + pfVar7[8] * fVar51 + *pfVar7 * fVar50 + pfVar7[4] * fVar16;
      fVar29 = auVar97._4_4_ + pfVar7[9] * fVar51 + pfVar7[1] * fVar50 + pfVar7[5] * fVar16;
      fVar51 = auVar97._8_4_ + pfVar7[10] * fVar51 + pfVar7[2] * fVar50 + pfVar7[6] * fVar16;
      fVar53 = auVar97._12_4_ + 0.0;
      fVar50 = auVar57._0_4_ + auVar57._4_4_;
      auVar58._0_4_ = fVar104 * *(float *)(lVar12 + 0x50);
      auVar58._4_4_ = fVar111 * *(float *)(lVar12 + 0x54);
      auVar58._8_4_ = fVar112 * *(float *)(lVar12 + 0x58);
      auVar58._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
      auVar57 = NEON_ext(auVar58,auVar58,8,1);
      uStack_a8 = (ulong)(uint)(auVar58._0_4_ + auVar58._4_4_ + auVar57._0_4_ + auVar57._4_4_);
      local_b0 = NEON_ext(CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar32,
                                   auVar90._0_4_ + auVar90._4_4_ + fVar32),
                          CONCAT44(auVar101._0_4_ + auVar101._4_4_ + fVar50,
                                   auVar101._0_4_ + auVar101._4_4_ + fVar50),4,1);
      uVar5 = FUN_00222070(lVar12,&local_b0);
      pfVar7 = (float *)(*(long *)(lVar12 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
      fVar32 = *pfVar7;
      fVar50 = pfVar7[1];
      fVar16 = pfVar7[2];
      auVar102._4_4_ = fVar29;
      auVar102._0_4_ = fVar28;
      auVar102._8_4_ = fVar51;
      auVar102._12_4_ = fVar53;
      auVar40._0_4_ =
           (float)local_1c0 +
           *(float *)(lVar12 + 0x30) * fVar32 + *(float *)(lVar12 + 0x40) * fVar50 +
           *(float *)(lVar12 + 0x50) * fVar16;
      auVar40._4_4_ =
           local_1c0._4_4_ +
           *(float *)(lVar12 + 0x34) * fVar32 + *(float *)(lVar12 + 0x44) * fVar50 +
           *(float *)(lVar12 + 0x54) * fVar16;
      auVar40._8_4_ =
           fVar54 + *(float *)(lVar12 + 0x38) * fVar32 + *(float *)(lVar12 + 0x48) * fVar50 +
                    *(float *)(lVar12 + 0x58) * fVar16;
      auVar40._12_4_ = 0;
      auVar21._0_4_ = fVar28 - auVar40._0_4_;
      auVar21._4_4_ = fVar29 - auVar40._4_4_;
      auVar21._8_4_ = fVar51 - auVar40._8_4_;
      auVar21._12_4_ = fVar53 - 0.0;
      auVar59._0_4_ = fVar75 * -auVar21._0_4_;
      auVar59._4_4_ = fVar83 * -auVar21._4_4_;
      auVar59._8_4_ = fVar84 * -auVar21._8_4_;
      auVar59._12_4_ = 0;
      auVar57 = NEON_ext(auVar59,auVar59,8,1);
      fVar50 = auVar57._0_4_ + auVar57._4_4_;
      fVar16 = (auVar59._0_4_ + auVar59._4_4_ + fVar50) - fVar66;
      fVar32 = fVar14;
      if (0.0 < fVar16) {
        auVar57 = *param_7;
        auVar80._0_4_ = fVar75 * auVar57._0_4_;
        auVar80._4_4_ = fVar83 * auVar57._4_4_;
        auVar80._8_4_ = fVar84 * auVar57._8_4_;
        auVar80._12_4_ = auVar57._12_4_ * 0.0;
        auVar96 = NEON_ext(auVar80,auVar80,8,1);
        fVar75 = auVar96._0_4_ + auVar96._4_4_;
        fVar14 = auVar80._0_4_ + auVar80._4_4_ + fVar75;
        uVar76 = CONCAT44(auVar80._0_4_ + auVar80._4_4_ + fVar75,fVar14);
        if (0.0 <= fVar14) {
          return 0;
        }
        uVar85 = NEON_frecpe(uVar76,4);
        uVar92 = NEON_frecps(uVar76,uVar85,4);
        fVar14 = (float)uVar85 * (float)uVar92;
        fVar75 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar75,fVar14),4);
        fVar14 = fVar14 * (float)uVar85;
        fVar75 = fVar75 * (float)((ulong)uVar85 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar75,fVar14),4);
        fVar14 = fVar14 * (float)uVar85;
        fVar75 = fVar75 * (float)((ulong)uVar85 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar75,fVar14),4);
        fVar14 = fVar14 * (float)uVar85;
        fVar75 = fVar75 * (float)((ulong)uVar85 >> 0x20);
        uVar76 = NEON_frecps(uVar76,CONCAT44(fVar75,fVar14),4);
        fVar83 = (float)uVar56;
        fVar14 = fVar83 - fVar16 * fVar14 * (float)uVar76;
        fVar50 = (float)((ulong)uVar56 >> 0x20) -
                 ((auVar59._0_4_ + auVar59._4_4_ + fVar50) -
                 (param_1 + (float)((ulong)uVar55 >> 0x20) * 0.1)) *
                 fVar75 * (float)((ulong)uVar76 >> 0x20);
        uVar56 = CONCAT44(fVar50,fVar14);
        if (fVar83 < fVar14) {
          uVar76 = NEON_fmov(0x3f800000,4);
          if ((float)uVar76 < fVar14) {
            return 0;
          }
          auVar41._0_4_ = auVar57._0_4_ * fVar14 + *param_6;
          auVar41._4_4_ = auVar57._4_4_ * fVar14 + param_6[1];
          auVar41._8_4_ = auVar57._8_4_ * fVar14 + param_6[2];
          auVar41._12_4_ = auVar57._12_4_ * fVar14 + param_6[3];
          auVar57 = NEON_ext(auVar41,auVar41,8,1);
          fVar75 = auVar57._0_4_;
          local_1c0._0_4_ = auVar41._0_4_ - (float)local_1c0;
          local_1c0._4_4_ = auVar41._4_4_ - local_1c0._4_4_;
          fVar54 = fVar75 - fVar54;
          local_180._0_4_ = (float)local_180 + (float)local_1c0;
          local_180._4_4_ = local_180._4_4_ + local_1c0._4_4_;
          uStack_178._0_4_ = (float)uStack_178 + fVar54;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_190._0_4_ = (float)local_190 + (float)local_1c0;
          local_190._4_4_ = local_190._4_4_ + local_1c0._4_4_;
          uStack_188._0_4_ = (float)uStack_188 + fVar54;
          uStack_188._4_4_ = uStack_188._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + (float)local_1c0;
          local_170._4_4_ = local_170._4_4_ + local_1c0._4_4_;
          uStack_168._0_4_ = (float)uStack_168 + fVar54;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_110._0_4_ = local_150[0] - (float)local_190;
          local_110._4_4_ = local_150[1] - local_190._4_4_;
          fStack_108 = (float)uStack_148 - (float)uStack_188;
          fStack_104 = uStack_148._4_4_ - uStack_188._4_4_;
          local_100 = (float)local_140 - (float)local_180;
          fStack_fc = local_140._4_4_ - local_180._4_4_;
          fStack_f8 = (float)uStack_138 - (float)uStack_178;
          fStack_f4 = uStack_138._4_4_ - uStack_178._4_4_;
          local_f0 = local_130[0] - (float)local_170;
          fStack_ec = local_130[1] - local_170._4_4_;
          fStack_e8 = local_130[2] - (float)uStack_168;
          fStack_e4 = local_130[3] - uStack_168._4_4_;
          lVar13 = *(long *)(param_3 + 8);
          auVar42._0_4_ = fVar104 * *(float *)(lVar13 + 0x40);
          auVar42._4_4_ = fVar111 * *(float *)(lVar13 + 0x44);
          auVar42._8_4_ = fVar112 * *(float *)(lVar13 + 0x48);
          auVar42._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
          auVar17._0_4_ = fVar104 * *(float *)(lVar13 + 0x30);
          auVar17._4_4_ = fVar111 * *(float *)(lVar13 + 0x34);
          auVar17._8_4_ = fVar112 * *(float *)(lVar13 + 0x38);
          auVar17._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
          auVar57 = NEON_ext(auVar17,auVar17,8,1);
          fVar54 = auVar57._0_4_ + auVar57._4_4_;
          auVar57 = NEON_ext(auVar42,auVar42,8,1);
          fVar32 = auVar57._0_4_ + auVar57._4_4_;
          auVar60._0_4_ = fVar104 * *(float *)(lVar13 + 0x50);
          auVar60._4_4_ = fVar111 * *(float *)(lVar13 + 0x54);
          auVar60._8_4_ = fVar112 * *(float *)(lVar13 + 0x58);
          auVar60._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
          auVar57 = NEON_ext(auVar60,auVar60,8,1);
          uStack_a8 = (ulong)(uint)(auVar60._0_4_ + auVar60._4_4_ + auVar57._0_4_ + auVar57._4_4_);
          local_b0 = NEON_ext(CONCAT44(auVar17._0_4_ + auVar17._4_4_ + fVar54,
                                       auVar17._0_4_ + auVar17._4_4_ + fVar54),
                              CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar32,
                                       auVar42._0_4_ + auVar42._4_4_ + fVar32),4,1);
          uVar5 = FUN_00222070(lVar13,&local_b0);
          pfVar7 = (float *)(*(long *)(lVar13 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
          fVar54 = *pfVar7;
          fVar32 = pfVar7[1];
          fVar16 = pfVar7[2];
          local_1c0 = CONCAT44(auVar41._4_4_,auVar41._0_4_);
          uVar56 = CONCAT44(fVar50,fVar14);
          auVar40._0_4_ =
               auVar41._0_4_ +
               *(float *)(lVar13 + 0x30) * fVar54 + *(float *)(lVar13 + 0x40) * fVar32 +
               *(float *)(lVar13 + 0x50) * fVar16;
          auVar40._4_4_ =
               auVar41._4_4_ +
               *(float *)(lVar13 + 0x34) * fVar54 + *(float *)(lVar13 + 0x44) * fVar32 +
               *(float *)(lVar13 + 0x54) * fVar16;
          auVar40._8_4_ =
               fVar75 + *(float *)(lVar13 + 0x38) * fVar54 + *(float *)(lVar13 + 0x48) * fVar32 +
                        *(float *)(lVar13 + 0x58) * fVar16;
          auVar40._12_4_ = 0;
          auVar21._0_4_ = fVar28 - auVar40._0_4_;
          auVar21._4_4_ = fVar29 - auVar40._4_4_;
          auVar21._8_4_ = fVar51 - auVar40._8_4_;
          auVar21._12_4_ = fVar53 - 0.0;
          fVar32 = 3.4028235e+38;
          local_200 = auVar88._0_8_;
          uStack_1f8 = auVar88._8_8_;
          fVar54 = fVar75;
        }
      }
      uVar31 = local_c4;
      uVar5 = (ulong)local_c4;
      (&uStack_148)[uVar5 * 2] = auVar102._8_8_;
      *(long *)(local_150 + uVar5 * 4) = auVar102._0_8_;
      (&uStack_188)[uVar5 * 2] = auVar40._8_8_;
      (&local_190)[uVar5 * 2] = auVar40._0_8_;
      bVar4 = local_c4 == 3;
      local_c4 = local_c4 + 1;
      *(long *)(local_c0 + uVar5 * 4 + -0x12) = auVar21._8_8_;
      *(long *)(local_c0 + uVar5 * 4 + -0x14) = auVar21._0_8_;
      if (bVar4) {
        auVar21 = FUN_00237120(&local_110,local_150,&local_190,&local_c4);
      }
      else if (uVar31 == 2) {
        auVar21._4_4_ = local_110._4_4_;
        auVar21._0_4_ = (float)local_110;
        auVar21._8_4_ = fStack_108;
        auVar21._12_4_ = fStack_104;
        auVar2._4_4_ = fStack_fc;
        auVar2._0_4_ = local_100;
        auVar2._8_4_ = fStack_f8;
        auVar2._12_4_ = fStack_f4;
        auVar3._4_4_ = fStack_ec;
        auVar3._0_4_ = local_f0;
        auVar3._8_4_ = fStack_e8;
        auVar3._12_4_ = fStack_e4;
        auVar72._0_4_ = local_f0 - (float)local_110;
        auVar72._4_4_ = fStack_ec - local_110._4_4_;
        auVar72._8_4_ = fStack_e8 - fStack_108;
        auVar72._12_4_ = fStack_e4 - fStack_104;
        auVar81._0_4_ = local_100 - (float)local_110;
        auVar81._4_4_ = fStack_fc - local_110._4_4_;
        auVar81._8_4_ = fStack_f8 - fStack_108;
        auVar81._12_4_ = fStack_f4 - fStack_104;
        auVar57 = NEON_ext(auVar81,auVar81,8,1);
        auVar96 = NEON_ext(auVar72,auVar72,8,1);
        fVar29 = auVar81._0_4_ * auVar72._4_4_ - auVar81._4_4_ * auVar72._0_4_;
        uVar76 = NEON_ext(CONCAT44(auVar81._4_4_ * auVar72._8_4_ - auVar81._8_4_ * auVar72._4_4_,
                                   fVar29),
                          CONCAT44(auVar57._4_4_ * auVar72._4_4_ - auVar81._4_4_ * auVar96._4_4_,
                                   auVar57._0_4_ * auVar72._0_4_ - auVar81._0_4_ * auVar96._0_4_),4,
                          1);
        fVar16 = (float)uVar76;
        auVar93._0_4_ = fVar16 * fVar16;
        fVar28 = (float)((ulong)uVar76 >> 0x20);
        auVar93._4_4_ = fVar28 * fVar28;
        auVar93._8_4_ = fVar29 * fVar29;
        auVar93._12_4_ = 0;
        auVar57 = NEON_ext(auVar93,auVar93,8,1);
        fVar50 = auVar57._0_4_ + auVar57._4_4_;
        fVar14 = auVar93._0_4_ + auVar93._4_4_ + fVar50;
        uVar76 = CONCAT44(auVar93._0_4_ + auVar93._4_4_ + fVar50,fVar14);
        local_c4 = 3;
        if (1.1920929e-07 < fVar14) {
          if (fVar14 != 0.0) {
            auVar57 = NEON_ext(auVar2,auVar2,8,1);
            auVar96 = NEON_ext(auVar3,auVar3,8,1);
            fVar51 = local_100 * fStack_ec - fStack_fc * local_f0;
            auVar97 = NEON_ext(auVar21,auVar21,8,1);
            uVar92 = NEON_ext(CONCAT44(fStack_fc * fStack_e8 - fStack_f8 * fStack_ec,fVar51),
                              CONCAT44(auVar57._4_4_ * fStack_ec - fStack_fc * auVar96._4_4_,
                                       auVar57._0_4_ * local_f0 - local_100 * auVar96._0_4_),4,1);
            fVar14 = local_110._4_4_ * local_f0 - (float)local_110 * fStack_ec;
            uVar121 = NEON_ext(CONCAT44(fStack_108 * fStack_ec - local_110._4_4_ * fStack_e8,fVar14)
                               ,CONCAT44(local_110._4_4_ * auVar96._4_4_ - auVar97._4_4_ * fStack_ec
                                         ,(float)local_110 * auVar96._0_4_ -
                                          auVar97._0_4_ * local_f0),4,1);
            fVar50 = (float)local_110 * fStack_fc - local_110._4_4_ * local_100;
            uVar85 = NEON_ext(CONCAT44(local_110._4_4_ * fStack_f8 - fStack_108 * fStack_fc,fVar50),
                              CONCAT44(auVar97._4_4_ * fStack_fc - local_110._4_4_ * auVar57._4_4_,
                                       auVar97._0_4_ * local_100 - (float)local_110 * auVar57._0_4_)
                              ,4,1);
            auVar107._0_4_ = (float)uVar92 * fVar16;
            auVar107._4_4_ = (float)((ulong)uVar92 >> 0x20) * fVar28;
            auVar107._8_4_ = fVar51 * fVar29;
            auVar107._12_4_ = 0;
            auVar57 = NEON_ext(auVar107,auVar107,8,1);
            auVar113._0_4_ = (float)uVar121 * fVar16;
            auVar113._4_4_ = (float)((ulong)uVar121 >> 0x20) * fVar28;
            auVar113._8_4_ = fVar14 * fVar29;
            auVar113._12_4_ = 0;
            auVar96 = NEON_ext(auVar113,auVar113,8,1);
            fVar14 = auVar107._0_4_ + auVar107._4_4_ + auVar57._0_4_ + auVar57._4_4_;
            auVar118._0_4_ = (float)uVar85 * fVar16;
            auVar118._4_4_ = (float)((ulong)uVar85 >> 0x20) * fVar28;
            auVar118._8_4_ = fVar50 * fVar29;
            auVar118._12_4_ = 0;
            fVar50 = auVar113._0_4_ + auVar113._4_4_ + auVar96._0_4_ + auVar96._4_4_;
            auVar57 = NEON_ext(auVar118,auVar118,8,1);
            fVar51 = auVar118._0_4_ + auVar118._4_4_ + auVar57._0_4_ + auVar57._4_4_;
            bVar4 = (0.0 <= fVar14 && 0.0 <= fVar50) && 0.0 <= fVar51;
            auVar119._0_4_ = -(uint)bVar4;
            auVar119._4_4_ = -(uint)bVar4;
            auVar119._8_4_ = -(uint)bVar4;
            auVar119._12_4_ = -(uint)bVar4;
            NEON_ext(auVar119,auVar119,8,1);
            if (CONCAT13((char)auVar119._12_4_,
                         CONCAT12((char)auVar119._8_4_,
                                  CONCAT11((char)auVar119._4_4_,(char)auVar119._0_4_))) == -1) {
              auVar22._0_4_ = (float)local_110 * fVar16;
              auVar22._4_4_ = local_110._4_4_ * fVar28;
              auVar22._8_4_ = fStack_108 * fVar29;
              auVar22._12_4_ = fStack_104 * 0.0;
              auVar57 = NEON_ext(auVar22,auVar22,8,1);
              uVar85 = NEON_frecpe(uVar76,4);
              uVar92 = NEON_frecps(uVar76,uVar85,4);
              fVar14 = (float)uVar85 * (float)uVar92;
              fVar50 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
              uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
              fVar14 = fVar14 * (float)uVar85;
              fVar50 = fVar50 * (float)((ulong)uVar85 >> 0x20);
              uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
              fVar14 = fVar14 * (float)uVar85;
              fVar50 = fVar50 * (float)((ulong)uVar85 >> 0x20);
              uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
              fVar14 = fVar14 * (float)uVar85;
              uVar76 = NEON_frecps(uVar76,CONCAT44(fVar50 * (float)((ulong)uVar85 >> 0x20),fVar14),4
                                  );
              fVar14 = (auVar22._0_4_ + auVar22._4_4_ + auVar57._0_4_ + auVar57._4_4_) *
                       fVar14 * (float)uVar76;
              auVar21._0_4_ = fVar16 * fVar14;
              auVar21._4_4_ = fVar28 * fVar14;
              auVar21._8_4_ = fVar29 * fVar14;
              auVar21._12_4_ = 0.0;
            }
            else {
              auVar91._0_4_ = -(float)local_110 * auVar81._0_4_;
              auVar91._4_4_ = -local_110._4_4_ * auVar81._4_4_;
              auVar91._8_4_ = -fStack_108 * auVar81._8_4_;
              auVar91._12_4_ = auVar81._12_4_ * 0.0;
              auVar57 = NEON_ext(auVar91,auVar91,8,1);
              fVar29 = auVar57._0_4_ + auVar57._4_4_;
              auVar94._0_4_ = -local_100 * auVar81._0_4_;
              auVar94._4_4_ = -fStack_fc * auVar81._4_4_;
              auVar94._8_4_ = -fStack_f8 * auVar81._8_4_;
              auVar94._12_4_ = auVar81._12_4_ * 0.0;
              auVar57 = NEON_ext(auVar94,auVar94,8,1);
              fVar53 = auVar57._0_4_ + auVar57._4_4_;
              fVar16 = auVar91._0_4_ + auVar91._4_4_ + fVar29;
              fVar28 = auVar94._0_4_ + auVar94._4_4_ + fVar53;
              fVar53 = auVar94._0_4_ + auVar94._4_4_ + fVar53;
              bVar4 = (0.0 <= fVar16 && fVar51 <= 0.0) && fVar28 <= 0.0;
              auVar114._0_4_ = -(uint)bVar4;
              auVar114._4_4_ = -(uint)bVar4;
              auVar114._8_4_ = -(uint)bVar4;
              auVar114._12_4_ = -(uint)bVar4;
              NEON_ext(auVar114,auVar114,8,1);
              if (CONCAT13((char)auVar114._12_4_,
                           CONCAT12((char)auVar114._8_4_,
                                    CONCAT11((char)auVar114._4_4_,(char)auVar114._0_4_))) == -1) {
                uVar76 = CONCAT44((auVar91._0_4_ + auVar91._4_4_ + fVar29) - fVar53,fVar16 - fVar28)
                ;
                uVar85 = NEON_frecpe(uVar76,4);
                uVar92 = NEON_frecps(uVar76,uVar85,4);
                fVar14 = (float)uVar85 * (float)uVar92;
                fVar50 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
                uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
                fVar14 = fVar14 * (float)uVar85;
                fVar50 = fVar50 * (float)((ulong)uVar85 >> 0x20);
                uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
                fVar14 = fVar14 * (float)uVar85;
                fVar50 = fVar50 * (float)((ulong)uVar85 >> 0x20);
                uVar85 = NEON_frecps(uVar76,CONCAT44(fVar50,fVar14),4);
                fVar14 = fVar14 * (float)uVar85;
                uVar76 = NEON_frecps(uVar76,CONCAT44(fVar50 * (float)((ulong)uVar85 >> 0x20),fVar14)
                                     ,4);
                fVar16 = fVar16 * (float)(-(uint)(1.1920929e-07 < ABS(fVar16 - fVar28)) &
                                         (uint)(fVar14 * (float)uVar76));
                puVar6 = &local_190;
                pfVar7 = local_150;
                auVar23._0_8_ =
                     CONCAT44(local_110._4_4_ + auVar81._4_4_ * fVar16,
                              (float)local_110 + auVar81._0_4_ * fVar16);
                auVar23._8_4_ = fStack_108 + auVar81._8_4_ * fVar16;
                auVar23._12_4_ = fStack_104 + auVar81._12_4_ * fVar16;
                auVar57 = NEON_ext(auVar23,auVar23,8,1);
                pfVar8 = (float *)&local_110;
                auVar21._8_4_ = (float)auVar57._0_4_;
                auVar21._0_8_ = auVar23._0_8_;
                auVar21._12_4_ = 0.0;
                local_c4 = 2;
LAB_002ecf34:
                puVar9 = &local_180;
                pfVar10 = (float *)&local_140;
                pfVar11 = &local_100;
              }
              else {
                auVar115._0_4_ = -local_100 * auVar72._0_4_;
                auVar115._4_4_ = -fStack_fc * auVar72._4_4_;
                auVar115._8_4_ = -fStack_f8 * auVar72._8_4_;
                auVar115._12_4_ = auVar72._12_4_ * 0.0;
                auVar57 = NEON_ext(auVar115,auVar115,8,1);
                fVar83 = auVar57._0_4_ + auVar57._4_4_;
                auVar82._0_4_ = auVar81._0_4_ * -local_f0;
                auVar82._4_4_ = auVar81._4_4_ * -fStack_ec;
                auVar82._8_4_ = auVar81._8_4_ * -fStack_e8;
                auVar82._12_4_ = auVar81._12_4_ * 0.0;
                auVar120._0_4_ = auVar72._0_4_ * -local_f0;
                auVar120._4_4_ = auVar72._4_4_ * -fStack_ec;
                auVar120._8_4_ = auVar72._8_4_ * -fStack_e8;
                auVar120._12_4_ = auVar72._12_4_ * 0.0;
                fVar29 = auVar115._0_4_ + auVar115._4_4_ + fVar83;
                auVar57 = NEON_ext(auVar82,auVar82,8,1);
                fVar84 = auVar57._0_4_ + auVar57._4_4_;
                fVar51 = auVar82._0_4_ + auVar82._4_4_ + fVar84;
                auVar57 = NEON_ext(auVar120,auVar120,8,1);
                fVar104 = auVar57._0_4_ + auVar57._4_4_;
                fVar75 = auVar120._0_4_ + auVar120._4_4_ + fVar104;
                fVar104 = auVar120._0_4_ + auVar120._4_4_ + fVar104;
                bVar4 = (fVar28 <= fVar29 && fVar14 <= 0.0) && fVar75 <= fVar51;
                auVar108._0_4_ = -(uint)bVar4;
                auVar108._4_4_ = -(uint)bVar4;
                auVar108._8_4_ = -(uint)bVar4;
                auVar108._12_4_ = -(uint)bVar4;
                NEON_ext(auVar108,auVar108,8,1);
                puVar9 = &local_170;
                pfVar10 = local_130;
                pfVar11 = &local_f0;
                if (CONCAT13((char)auVar108._12_4_,
                             CONCAT12((char)auVar108._8_4_,
                                      CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) == -1) {
                  local_c4 = 2;
                  fVar14 = (fVar29 - fVar28) + (fVar51 - fVar75);
                  uVar76 = CONCAT44(((auVar115._0_4_ + auVar115._4_4_ + fVar83) - fVar53) +
                                    ((auVar82._0_4_ + auVar82._4_4_ + fVar84) - fVar104),fVar14);
                  uVar85 = NEON_frecpe(uVar76,4);
                  uVar92 = NEON_frecps(uVar76,uVar85,4);
                  fVar50 = (float)uVar85 * (float)uVar92;
                  fVar16 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar16 * (float)((ulong)uVar85 >> 0x20),
                                                       fVar50),4);
                  fVar14 = (fVar29 - fVar28) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar14)) &
                                  (uint)(fVar50 * (float)uVar76));
                  auVar24._0_8_ =
                       CONCAT44(fStack_fc + (fStack_ec - fStack_fc) * fVar14,
                                local_100 + (local_f0 - local_100) * fVar14);
                  auVar24._8_4_ = fStack_f8 + (fStack_e8 - fStack_f8) * fVar14;
                  auVar24._12_4_ = fStack_f4 + (fStack_e4 - fStack_f4) * fVar14;
                  auVar57 = NEON_ext(auVar24,auVar24,8,1);
                  auVar21._8_4_ = (float)auVar57._0_4_;
                  auVar21._0_8_ = auVar24._0_8_;
                  auVar21._12_4_ = 0.0;
                  puVar6 = &local_180;
                  pfVar7 = (float *)&local_140;
                  pfVar8 = &local_100;
                }
                else {
                  auVar109._0_4_ = -(float)local_110 * auVar72._0_4_;
                  auVar109._4_4_ = -local_110._4_4_ * auVar72._4_4_;
                  auVar109._8_4_ = -fStack_108 * auVar72._8_4_;
                  auVar109._12_4_ = auVar72._12_4_ * 0.0;
                  auVar57 = NEON_ext(auVar109,auVar109,8,1);
                  fVar51 = auVar57._0_4_ + auVar57._4_4_;
                  fVar14 = auVar109._0_4_ + auVar109._4_4_ + fVar51;
                  bVar4 = (fVar50 <= 0.0 && 0.0 <= fVar14) && fVar75 <= 0.0;
                  auVar103._0_4_ = -(uint)bVar4;
                  auVar103._4_4_ = -(uint)bVar4;
                  auVar103._8_4_ = -(uint)bVar4;
                  auVar103._12_4_ = -(uint)bVar4;
                  NEON_ext(auVar103,auVar103,8,1);
                  if (CONCAT13((char)auVar103._12_4_,
                               CONCAT12((char)auVar103._8_4_,
                                        CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_))) != -1)
                  {
                    bVar4 = fVar16 <= 0.0 && fVar14 <= 0.0;
                    auVar73._0_4_ = -(uint)bVar4;
                    auVar73._4_4_ = -(uint)bVar4;
                    auVar73._8_4_ = -(uint)bVar4;
                    auVar73._12_4_ = -(uint)bVar4;
                    NEON_ext(auVar73,auVar73,8,1);
                    if (CONCAT13((char)auVar73._12_4_,
                                 CONCAT12((char)auVar73._8_4_,
                                          CONCAT11((char)auVar73._4_4_,(char)auVar73._0_4_))) == -1)
                    {
                      puVar6 = &local_190;
                      pfVar7 = local_150;
                      pfVar8 = (float *)&local_110;
                    }
                    else {
                      bVar4 = 0.0 <= fVar28 && fVar29 <= fVar28;
                      auVar19._0_4_ = -(uint)bVar4;
                      auVar19._4_4_ = -(uint)bVar4;
                      auVar19._8_4_ = -(uint)bVar4;
                      auVar19._12_4_ = -(uint)bVar4;
                      NEON_ext(auVar19,auVar19,8,1);
                      iVar34 = CONCAT13((char)auVar19._12_4_,
                                        CONCAT12((char)auVar19._8_4_,
                                                 CONCAT11((char)auVar19._4_4_,(char)auVar19._0_4_)))
                      ;
                      iVar67 = -(uint)(iVar34 == -1);
                      auVar20._4_4_ = iVar67;
                      auVar20._0_4_ = iVar67;
                      auVar20._8_4_ = iVar67;
                      auVar20._12_4_ = iVar67;
                      lVar13 = 0x10;
                      if (iVar34 != -1) {
                        lVar13 = 0x20;
                      }
                      auVar21 = auVar3 ^ (auVar3 ^ auVar2) & auVar20;
                      pfVar8 = (float *)((long)local_c0 + lVar13 + -0x50);
                      pfVar7 = (float *)((long)local_150 + lVar13);
                      puVar6 = (undefined8 *)((long)&local_190 + lVar13);
                    }
                    local_c4 = 1;
                    goto LAB_002ecf34;
                  }
                  uVar76 = CONCAT44((auVar109._0_4_ + auVar109._4_4_ + fVar51) - fVar104,
                                    fVar14 - fVar75);
                  uVar85 = NEON_frecpe(uVar76,4);
                  uVar92 = NEON_frecps(uVar76,uVar85,4);
                  fVar50 = (float)uVar85 * (float)uVar92;
                  fVar16 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
                  uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
                  fVar50 = fVar50 * (float)uVar85;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar16 * (float)((ulong)uVar85 >> 0x20),
                                                       fVar50),4);
                  fVar14 = fVar14 * (float)(-(uint)(1.1920929e-07 < ABS(fVar14 - fVar75)) &
                                           (uint)(fVar50 * (float)uVar76));
                  auVar25._0_8_ =
                       CONCAT44(local_110._4_4_ + auVar72._4_4_ * fVar14,
                                (float)local_110 + auVar72._0_4_ * fVar14);
                  auVar25._8_4_ = fStack_108 + auVar72._8_4_ * fVar14;
                  auVar25._12_4_ = fStack_104 + auVar72._12_4_ * fVar14;
                  auVar57 = NEON_ext(auVar25,auVar25,8,1);
                  auVar21._8_4_ = (float)auVar57._0_4_;
                  auVar21._0_8_ = auVar25._0_8_;
                  auVar21._12_4_ = 0.0;
                  local_c4 = 2;
                  puVar6 = &local_190;
                  pfVar7 = local_150;
                  pfVar8 = (float *)&local_110;
                }
              }
              fStack_108 = (float)*(undefined8 *)(pfVar8 + 2);
              fStack_104 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
              local_110._0_4_ = (float)*(undefined8 *)pfVar8;
              local_110._4_4_ = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
              fStack_f8 = (float)*(undefined8 *)(pfVar11 + 2);
              fStack_f4 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
              local_100 = (float)*(undefined8 *)pfVar11;
              fStack_fc = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
              local_180 = *puVar9;
              uStack_178 = puVar9[1];
              uStack_148._0_4_ = (float)*(undefined8 *)(pfVar7 + 2);
              uStack_148._4_4_ = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
              local_150[0] = (float)*(undefined8 *)pfVar7;
              local_150[1] = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
              uStack_138 = *(undefined8 *)(pfVar10 + 2);
              local_140 = *(undefined8 *)pfVar10;
              local_190 = *puVar6;
              uStack_188 = puVar6[1];
            }
          }
        }
        else {
          auVar43._0_4_ = auVar81._0_4_ * auVar81._0_4_;
          auVar43._4_4_ = auVar81._4_4_ * auVar81._4_4_;
          auVar43._8_4_ = auVar81._8_4_ * auVar81._8_4_;
          auVar43._12_4_ = auVar81._12_4_ * auVar81._12_4_;
          auVar57 = NEON_ext(auVar43,auVar43,8,1);
          fVar50 = auVar57._0_4_ + auVar57._4_4_;
          fVar14 = auVar43._0_4_ + auVar43._4_4_ + fVar50;
          uVar76 = CONCAT44(auVar43._0_4_ + auVar43._4_4_ + fVar50,fVar14);
          bVar4 = fVar14 <= 1.1920929e-07;
          auVar62._0_4_ = -(uint)bVar4;
          auVar62._4_4_ = -(uint)bVar4;
          auVar62._8_4_ = -(uint)bVar4;
          auVar62._12_4_ = -(uint)bVar4;
          NEON_ext(auVar62,auVar62,8,1);
          local_c4 = 2;
          if (CONCAT13((char)auVar62._12_4_,
                       CONCAT12((char)auVar62._8_4_,
                                CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) != -1) {
            auVar63._0_4_ = -(float)local_110 * auVar81._0_4_;
            auVar63._4_4_ = -local_110._4_4_ * auVar81._4_4_;
            auVar63._8_4_ = -fStack_108 * auVar81._8_4_;
            auVar63._12_4_ = auVar81._12_4_ * 0.0;
            auVar57 = NEON_ext(auVar63,auVar63,8,1);
            fVar14 = auVar57._0_4_ + auVar57._4_4_;
            uVar85 = NEON_frecpe(uVar76,4);
            uVar92 = NEON_frecps(uVar76,uVar85,4);
            fVar50 = (float)uVar85 * (float)uVar92;
            fVar16 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
            uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
            fVar50 = fVar50 * (float)uVar85;
            fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
            uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
            fVar50 = fVar50 * (float)uVar85;
            fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
            uVar85 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
            fVar50 = fVar50 * (float)uVar85;
            fVar16 = fVar16 * (float)((ulong)uVar85 >> 0x20);
            uVar76 = NEON_frecps(uVar76,CONCAT44(fVar16,fVar50),4);
            uVar85 = NEON_fmov(0x3f800000,4);
            uVar76 = NEON_fmin(CONCAT44((auVar63._0_4_ + auVar63._4_4_ + fVar14) *
                                        fVar16 * (float)((ulong)uVar76 >> 0x20),
                                        (auVar63._0_4_ + auVar63._4_4_ + fVar14) *
                                        fVar50 * (float)uVar76),uVar85,4);
            uVar76 = NEON_fmax(uVar76,0,4);
            fVar14 = (float)uVar76;
            fVar50 = auVar81._0_4_ * fVar14;
            fVar16 = auVar81._4_4_ * fVar14;
            fVar28 = auVar81._8_4_ * fVar14;
            fVar14 = auVar81._12_4_ * fVar14;
            goto LAB_002ecab4;
          }
LAB_002ecac8:
          local_c4 = 1;
        }
      }
      else if (uVar31 == 1) {
        auVar21._4_4_ = local_110._4_4_;
        auVar21._0_4_ = (float)local_110;
        auVar21._8_4_ = fStack_108;
        auVar21._12_4_ = fStack_104;
        fVar50 = local_100 - (float)local_110;
        fVar16 = fStack_fc - local_110._4_4_;
        fVar28 = fStack_f8 - fStack_108;
        fVar14 = fStack_f4 - fStack_104;
        auVar61._0_4_ = fVar50 * fVar50;
        auVar61._4_4_ = fVar16 * fVar16;
        auVar61._8_4_ = fVar28 * fVar28;
        auVar61._12_4_ = fVar14 * fVar14;
        auVar57 = NEON_ext(auVar61,auVar61,8,1);
        fVar51 = auVar57._0_4_ + auVar57._4_4_;
        fVar29 = auVar61._0_4_ + auVar61._4_4_ + fVar51;
        uVar76 = CONCAT44(auVar61._0_4_ + auVar61._4_4_ + fVar51,fVar29);
        bVar4 = fVar29 <= 1.1920929e-07;
        auVar70._0_4_ = -(uint)bVar4;
        auVar70._4_4_ = -(uint)bVar4;
        auVar70._8_4_ = -(uint)bVar4;
        auVar70._12_4_ = -(uint)bVar4;
        NEON_ext(auVar70,auVar70,8,1);
        if (CONCAT13((char)auVar70._12_4_,
                     CONCAT12((char)auVar70._8_4_,CONCAT11((char)auVar70._4_4_,(char)auVar70._0_4_))
                    ) == -1) goto LAB_002ecac8;
        auVar71._0_4_ = -(float)local_110 * fVar50;
        auVar71._4_4_ = -local_110._4_4_ * fVar16;
        auVar71._8_4_ = -fStack_108 * fVar28;
        auVar71._12_4_ = fVar14 * 0.0;
        auVar57 = NEON_ext(auVar71,auVar71,8,1);
        fVar29 = auVar57._0_4_ + auVar57._4_4_;
        uVar85 = NEON_frecpe(uVar76,4);
        uVar92 = NEON_frecps(uVar76,uVar85,4);
        fVar51 = (float)uVar85 * (float)uVar92;
        fVar53 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar92 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar53,fVar51),4);
        fVar51 = fVar51 * (float)uVar85;
        fVar53 = fVar53 * (float)((ulong)uVar85 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar53,fVar51),4);
        fVar51 = fVar51 * (float)uVar85;
        fVar53 = fVar53 * (float)((ulong)uVar85 >> 0x20);
        uVar85 = NEON_frecps(uVar76,CONCAT44(fVar53,fVar51),4);
        fVar51 = fVar51 * (float)uVar85;
        fVar53 = fVar53 * (float)((ulong)uVar85 >> 0x20);
        uVar76 = NEON_frecps(uVar76,CONCAT44(fVar53,fVar51),4);
        uVar85 = NEON_fmov(0x3f800000,4);
        uVar76 = NEON_fmin(CONCAT44((auVar71._0_4_ + auVar71._4_4_ + fVar29) *
                                    fVar53 * (float)((ulong)uVar76 >> 0x20),
                                    (auVar71._0_4_ + auVar71._4_4_ + fVar29) *
                                    fVar51 * (float)uVar76),uVar85,4);
        uVar76 = NEON_fmax(uVar76,0,4);
        fVar29 = (float)uVar76;
        fVar50 = fVar50 * fVar29;
        fVar16 = fVar16 * fVar29;
        fVar28 = fVar28 * fVar29;
        fVar14 = fVar14 * fVar29;
LAB_002ecab4:
        auVar18._0_8_ = CONCAT44(auVar21._4_4_ + fVar16,auVar21._0_4_ + fVar50);
        auVar18._8_4_ = auVar21._8_4_ + fVar28;
        auVar18._12_4_ = auVar21._12_4_ + fVar14;
        auVar57 = NEON_ext(auVar18,auVar18,8,1);
        auVar21._8_4_ = (float)auVar57._0_4_;
        auVar21._0_8_ = auVar18._0_8_;
        auVar21._12_4_ = 0.0;
      }
      fVar50 = auVar21._0_4_;
      auVar44._0_4_ = fVar50 * fVar50;
      fVar16 = auVar21._4_4_;
      auVar44._4_4_ = fVar16 * fVar16;
      fVar28 = auVar21._8_4_;
      auVar44._8_4_ = fVar28 * fVar28;
      auVar44._12_4_ = auVar21._12_4_ * auVar21._12_4_;
      auVar57 = NEON_ext(auVar44,auVar44,8,1);
      fVar14 = auVar44._0_4_ + auVar44._4_4_ + auVar57._0_4_ + auVar57._4_4_;
      iVar34 = -(uint)(fVar14 < fVar32);
      bVar4 = fVar66 * fVar66 < fVar14 && fVar14 < fVar32;
      auVar64._0_4_ = -(uint)bVar4;
      auVar64._4_4_ = -(uint)bVar4;
      auVar64._8_4_ = -(uint)bVar4;
      auVar64._12_4_ = -(uint)bVar4;
      NEON_ext(auVar64,auVar64,8,1);
      auVar88._0_4_ = -fVar50;
      auVar88._4_4_ = -fVar16;
      auVar88._8_4_ = -fVar28;
      auVar88._12_4_ = 0;
    } while (CONCAT13((char)auVar64._12_4_,
                      CONCAT12((char)auVar64._8_4_,CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_)
                              )) == -1);
    auVar57._8_8_ = uStack_1f8;
    auVar57._0_8_ = local_200;
    auVar105._4_4_ = iVar34;
    auVar105._0_4_ = iVar34;
    auVar105._8_4_ = iVar34;
    auVar105._12_4_ = iVar34;
  }
  else {
    uVar56 = 0;
    auVar21._8_8_ = auVar110._8_8_;
    auVar21._0_8_ = auVar110._0_8_;
    auVar88._8_4_ = auVar57._8_4_;
    auVar88._0_8_ = auVar57._0_8_;
    auVar88._12_4_ = 0;
  }
  auVar117 = ZEXT816(0);
  iVar34 = -(uint)(fVar15 * fVar15 < fVar14);
  bVar30 = (byte)iVar34;
  auVar45[0] = bVar30 & auVar105[0];
  bVar47 = (byte)((uint)iVar34 >> 8);
  auVar45[1] = bVar47 & auVar105[1];
  bVar48 = (byte)((uint)iVar34 >> 0x10);
  auVar45[2] = bVar48 & auVar105[2];
  bVar49 = (byte)((uint)iVar34 >> 0x18);
  auVar45[3] = bVar49 & auVar105[3];
  auVar45[4] = bVar30 & auVar105[4];
  auVar45[5] = bVar47 & auVar105[5];
  auVar45[6] = bVar48 & auVar105[6];
  auVar45[7] = bVar49 & auVar105[7];
  auVar45[8] = bVar30 & auVar105[8];
  auVar45[9] = bVar47 & auVar105[9];
  auVar45[10] = bVar48 & auVar105[10];
  auVar45[0xb] = bVar49 & auVar105[0xb];
  auVar45[0xc] = bVar30 & auVar105[0xc];
  auVar45[0xd] = bVar47 & auVar105[0xd];
  auVar45[0xe] = bVar48 & auVar105[0xe];
  auVar45[0xf] = bVar49 & auVar105[0xf];
  auVar110 = auVar110 ^ (auVar110 ^ auVar21) & auVar105;
  auVar57 = auVar57 ^ (auVar57 ^ auVar88) & auVar45;
  fVar54 = auVar57._0_4_;
  auVar65._0_4_ = fVar54 * fVar54;
  fVar66 = auVar57._4_4_;
  auVar65._4_4_ = fVar66 * fVar66;
  fVar32 = auVar57._8_4_;
  auVar65._8_4_ = fVar32 * fVar32;
  auVar65._12_4_ = auVar57._12_4_ * auVar57._12_4_;
  auVar57 = NEON_ext(auVar65,auVar65,8,1);
  fVar15 = auVar57._0_4_ + auVar57._4_4_;
  fVar14 = auVar65._0_4_ + auVar65._4_4_ + fVar15;
  fVar15 = auVar65._0_4_ + auVar65._4_4_ + fVar15;
  uVar5 = CONCAT44(fVar15,fVar14);
  uVar76 = NEON_frsqrte(uVar5,4);
  fVar50 = (float)uVar76;
  fVar16 = (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar16 * fVar16,fVar50 * fVar50),uVar5,4);
  fVar50 = fVar50 * (float)uVar76;
  fVar16 = fVar16 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar16 * fVar16,fVar50 * fVar50),uVar5,4);
  fVar50 = fVar50 * (float)uVar76;
  fVar16 = fVar16 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar16 * fVar16,fVar50 * fVar50),uVar5,4);
  fVar50 = fVar50 * (float)uVar76;
  fVar16 = fVar16 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar16 * fVar16,fVar50 * fVar50),uVar5,4);
  uVar68 = CONCAT44(fVar15 * fVar16 * (float)((ulong)uVar76 >> 0x20),fVar14 * fVar50 * (float)uVar76
                   );
  uVar68 = uVar68 ^ (uVar68 ^ uVar5) & CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar76 = NEON_frecpe(uVar68,4);
  uVar85 = NEON_frecps(uVar68,uVar76,4);
  fVar14 = (float)uVar76 * (float)uVar85;
  fVar15 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
  uVar76 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar76;
  fVar15 = fVar15 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar76;
  fVar15 = fVar15 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar68,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar76;
  iVar34 = -(uint)(0.0 < (float)uVar68);
  uVar76 = NEON_frecps(uVar68,CONCAT44(fVar15 * (float)((ulong)uVar76 >> 0x20),fVar14),4);
  fVar14 = fVar14 * (float)uVar76;
  fVar54 = fVar54 * fVar14;
  fVar66 = fVar66 * fVar14;
  fVar32 = fVar32 * fVar14;
  bVar30 = (byte)iVar34;
  bVar47 = (byte)((uint)iVar34 >> 8);
  bVar48 = (byte)((uint)iVar34 >> 0x10);
  bVar49 = (byte)((uint)iVar34 >> 0x18);
  fVar14 = (float)CONCAT13(bVar49 & (byte)((uint)fVar54 >> 0x18),
                           CONCAT12(bVar48 & (byte)((uint)fVar54 >> 0x10),
                                    CONCAT11(bVar47 & (byte)((uint)fVar54 >> 8),
                                             bVar30 & SUB41(fVar54,0))));
  auVar35._0_8_ =
       CONCAT17(bVar49 & (byte)((uint)fVar66 >> 0x18),
                CONCAT16(bVar48 & (byte)((uint)fVar66 >> 0x10),
                         CONCAT15(bVar47 & (byte)((uint)fVar66 >> 8),
                                  CONCAT14(bVar30 & SUB41(fVar66,0),fVar14))));
  auVar35[8] = bVar30 & SUB41(fVar32,0);
  auVar35[9] = bVar47 & (byte)((uint)fVar32 >> 8);
  auVar35[10] = bVar48 & (byte)((uint)fVar32 >> 0x10);
  auVar35[0xb] = bVar49 & (byte)((uint)fVar32 >> 0x18);
  fVar14 = -fVar14;
  fVar15 = -(float)((ulong)auVar35._0_8_ >> 0x20);
  auVar46._0_8_ = CONCAT44(fVar15,fVar14);
  auVar46._8_4_ = -auVar35._8_4_;
  iVar34 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar46._12_4_ = 0;
  auVar116._4_4_ = iVar34;
  auVar116._0_4_ = iVar34;
  auVar116._8_4_ = iVar34;
  auVar116._12_4_ = iVar34;
  param_9[1] = (ulong)(uint)auVar46._8_4_;
  *param_9 = auVar46._0_8_;
  *param_8 = uVar56;
  uStack_a8 = auVar110._8_8_;
  local_b0 = auVar110._0_8_;
  if (local_c4 == 3) {
    FUN_00231940(&local_b0,&local_110,&local_100,&local_f0,local_c0 + 2,local_c0);
    auVar117._0_4_ =
         local_150[0] +
         ((float)local_140 - local_150[0]) * local_c0[2] +
         (local_130[0] - local_150[0]) * local_c0[0];
    auVar117._4_4_ =
         local_150[1] +
         (local_140._4_4_ - local_150[1]) * local_c0[2] +
         (local_130[1] - local_150[1]) * local_c0[0];
    auVar117._8_4_ =
         (float)uStack_148 +
         ((float)uStack_138 - (float)uStack_148) * local_c0[2] +
         (local_130[2] - (float)uStack_148) * local_c0[0];
    auVar117._12_4_ = uStack_148._4_4_ + 0.0;
    auVar46._4_4_ = fVar15;
    auVar46._0_4_ = fVar14;
    auVar46._12_4_ = 0;
  }
  else if (local_c4 == 2) {
    FUN_002318c0(&local_b0,&local_110,&local_100,local_c0 + 2);
    auVar95._0_8_ =
         CONCAT44(local_150[1] + (local_140._4_4_ - local_150[1]) * local_c0[2],
                  local_150[0] + ((float)local_140 - local_150[0]) * local_c0[2]);
    auVar95._8_4_ = (float)uStack_148 + ((float)uStack_138 - (float)uStack_148) * local_c0[2];
    auVar95._12_4_ = uStack_148._4_4_ + (uStack_138._4_4_ - uStack_148._4_4_) * local_c0[2];
    auVar57 = NEON_ext(auVar95,auVar95,8,1);
    auVar46._4_4_ = fVar15;
    auVar46._0_4_ = fVar14;
    auVar46._12_4_ = 0;
    auVar117._8_4_ = (float)auVar57._0_4_;
    auVar117._0_8_ = auVar95._0_8_;
    auVar117._12_4_ = 0.0;
  }
  else if (local_c4 == 1) {
    auVar117._4_4_ = local_150[1];
    auVar117._0_4_ = local_150[0];
    auVar117._8_4_ = (float)uStack_148;
    auVar117._12_4_ = uStack_148._4_4_;
  }
  fVar14 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar26._0_8_ =
       CONCAT44(auVar117._4_4_ - auVar46._4_4_ * fVar14,auVar117._0_4_ - auVar46._0_4_ * fVar14);
  auVar26._8_4_ = auVar117._8_4_ - auVar46._8_4_ * fVar14;
  auVar26._12_4_ = auVar117._12_4_ - auVar46._12_4_ * fVar14;
  auVar57 = NEON_ext(auVar26,auVar26,8,1);
  auVar27._8_4_ = auVar57._0_4_;
  auVar27._0_8_ = auVar26._0_8_;
  auVar27._12_4_ = 0;
  auVar117 = auVar117 ^ (auVar117 ^ auVar27) & auVar116;
  param_10[1] = auVar117._8_8_;
  *param_10 = auVar117._0_8_;
  return 1;
}


