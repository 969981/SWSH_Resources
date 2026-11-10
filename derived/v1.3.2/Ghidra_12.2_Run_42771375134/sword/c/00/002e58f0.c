/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e58f0; name: FUN_002e58f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e58f0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_05;
  float extraout_var_06;
  undefined1 auVar23 [16];
  float extraout_var_01;
  float extraout_var_04;
  float extraout_var_07;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar43;
  int iVar44;
  ulong uVar45;
  float fVar61;
  undefined1 auVar46 [12];
  byte bVar58;
  byte bVar59;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  byte bVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar62;
  int iVar63;
  undefined8 uVar64;
  float fVar71;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar75;
  undefined1 auVar72 [16];
  float fVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined8 uVar101;
  undefined8 local_210;
  ulong uStack_208;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  float local_140 [4];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float local_100 [2];
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  uint local_ac;
  float local_a8 [2];
  
  uVar87 = *(undefined8 *)*param_7;
  uVar78 = *(undefined8 *)(*param_7 + 8);
  local_ac = 1;
  fStack_1d8 = (float)*(undefined8 *)(param_6 + 2);
  fStack_1d4 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
  local_1e0 = (float)*(undefined8 *)param_6;
  fStack_1dc = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar13 = *param_4;
  fVar17 = param_4[1];
  fVar75 = param_4[2];
  fVar62 = param_4[3];
  auVar100._0_4_ = fVar13 * fVar13;
  auVar100._4_4_ = fVar17 * fVar17;
  auVar100._8_4_ = fVar75 * fVar75;
  auVar100._12_4_ = fVar62 * fVar62;
  auVar47 = NEON_ext(auVar100,auVar100,8,1);
  uVar34 = -(uint)(1.1920929e-07 < auVar100._0_4_ + auVar100._4_4_ + auVar47._0_4_ + auVar47._4_4_);
  fVar61 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar13) & uVar34);
  fVar77 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar17) & uVar34);
  fVar75 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar75) & uVar34);
  fVar13 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar62) & uVar34);
  auVar48._0_4_ = fVar61 * fVar61;
  auVar48._4_4_ = fVar77 * fVar77;
  auVar48._8_4_ = fVar75 * fVar75;
  auVar48._12_4_ = fVar13 * fVar13;
  auVar47 = NEON_ext(auVar48,auVar48,8,1);
  fVar17 = auVar47._0_4_ + auVar47._4_4_;
  fVar13 = auVar48._0_4_ + auVar48._4_4_ + fVar17;
  fVar17 = auVar48._0_4_ + auVar48._4_4_ + fVar17;
  uVar6 = CONCAT44(fVar17,fVar13);
  uVar64 = NEON_frsqrte(uVar6,4);
  fVar62 = (float)uVar64;
  fVar71 = (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar62 * fVar62),uVar6,4);
  fVar62 = fVar62 * (float)uVar64;
  fVar71 = fVar71 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar62 * fVar62),uVar6,4);
  fVar62 = fVar62 * (float)uVar64;
  fVar71 = fVar71 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar62 * fVar62),uVar6,4);
  fVar62 = fVar62 * (float)uVar64;
  fVar71 = fVar71 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar62 * fVar62),uVar6,4);
  uVar45 = CONCAT44(fVar17 * fVar71 * (float)((ulong)uVar64 >> 0x20),fVar13 * fVar62 * (float)uVar64
                   );
  uVar45 = uVar45 ^ (uVar45 ^ uVar6) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar64 = NEON_frecpe(uVar45,4);
  uVar65 = NEON_frecps(uVar45,uVar64,4);
  fVar13 = (float)uVar64 * (float)uVar65;
  fVar17 = (float)((ulong)uVar64 >> 0x20) * (float)((ulong)uVar65 >> 0x20);
  uVar64 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar64;
  fVar17 = fVar17 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar64;
  fVar17 = fVar17 * (float)((ulong)uVar64 >> 0x20);
  uVar64 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar64;
  uVar64 = NEON_frecps(uVar45,CONCAT44(fVar17 * (float)((ulong)uVar64 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar64;
  local_c0 = CONCAT44(fVar77 * fVar13,fVar61 * fVar13);
  uStack_b8 = (ulong)(uint)(fVar75 * fVar13);
  local_100[0] = -(fVar61 * fVar13);
  local_100[1] = -(fVar77 * fVar13);
  uStack_f8._0_4_ = -(fVar75 * fVar13);
  uStack_f8._4_4_ = 0.0;
  auVar47 = FUN_0027c460(param_2,local_100);
  fStack_1a8 = auVar47._8_4_;
  fStack_1a4 = auVar47._12_4_;
  local_1b0 = auVar47._0_4_;
  fStack_1ac = auVar47._4_4_;
  FUN_00261680(param_3,&local_c0);
  local_100[0] = local_1b0 - extraout_s0;
  local_100[1] = fStack_1ac - extraout_var;
  auVar42._0_8_ = CONCAT44(local_100[1],local_100[0]);
  auVar42._8_4_ = fStack_1a8 - extraout_var_02;
  auVar42._12_4_ = fStack_1a4 - extraout_var_05;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_140[2] = fStack_1a8;
  local_140[3] = fStack_1a4;
  local_140[0] = local_1b0;
  local_140[1] = fStack_1ac;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  local_130 = 0.0;
  fStack_12c = 0.0;
  fVar13 = -local_100[0];
  fVar75 = -local_100[1];
  auVar47._0_8_ = CONCAT44(fVar75,fVar13);
  auVar47._8_4_ = -auVar42._8_4_;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  auVar47._12_4_ = 0;
  fStack_118 = 0.0;
  fStack_114 = 0.0;
  local_120 = 0.0;
  fStack_11c = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_178 = CONCAT44(extraout_var_05,extraout_var_02);
  local_180 = CONCAT44(extraout_var,extraout_s0);
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lVar5 = *(long *)(param_2 + 8);
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x18);
  uVar64 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x18)),
                     CONCAT44(uVar1,uVar1),4);
  fVar17 = (float)uVar64 * 0.1;
  auVar35._0_4_ = fVar13 * fVar13;
  auVar35._4_4_ = fVar75 * fVar75;
  auVar35._8_4_ = auVar47._8_4_ * auVar47._8_4_;
  auVar35._12_4_ = 0;
  auVar48 = NEON_ext(auVar35,auVar35,8,1);
  fVar13 = auVar35._0_4_ + auVar35._4_4_ + auVar48._0_4_ + auVar48._4_4_;
  bVar4 = fVar17 * fVar17 < fVar13;
  auVar36._8_8_ = 0xffffffffffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar49._0_4_ = -(uint)bVar4;
  auVar49._4_4_ = -(uint)bVar4;
  auVar49._8_4_ = -(uint)bVar4;
  auVar49._12_4_ = -(uint)bVar4;
  NEON_ext(auVar49,auVar49,8,1);
  uStack_208 = (ulong)(uint)auVar47._8_4_;
  uStack_f8._0_4_ = auVar42._8_4_;
  uStack_f8._4_4_ = auVar42._12_4_;
  if (CONCAT13((char)auVar49._12_4_,
               CONCAT12((char)auVar49._8_4_,CONCAT11((char)auVar49._4_4_,(char)auVar49._0_4_))) ==
      -1) {
    local_1d0 = (float)uVar87;
    fStack_1cc = (float)((ulong)uVar87 >> 0x20);
    fStack_1c8 = (float)uVar78;
    fStack_1c4 = (float)((ulong)uVar78 >> 0x20);
    auVar50._0_4_ = local_1d0 * 0.0 + local_1e0;
    auVar50._4_4_ = fStack_1cc * 0.0 + fStack_1dc;
    auVar50._8_4_ = fStack_1c8 * 0.0 + fStack_1d8;
    auVar50._12_4_ = fStack_1c4 * 0.0 + fStack_1d4;
    fVar75 = param_1 + fVar17;
    auVar48 = NEON_ext(auVar50,auVar50,8,1);
    fStack_1b8 = auVar48._0_4_;
    uVar87 = 0;
    auVar79._8_4_ = auVar47._8_4_;
    auVar79._0_8_ = auVar47._0_8_;
    auVar79._12_4_ = 0;
    auVar27._8_8_ = auVar42._8_8_;
    auVar27._0_8_ = auVar42._0_8_;
    local_210 = auVar47._0_8_;
    local_1c0 = auVar50._0_4_;
    fStack_1bc = auVar50._4_4_;
    do {
      auVar42 = auVar27;
      local_190._0_4_ = auVar79._0_4_;
      auVar37._0_4_ = (float)local_190 * (float)local_190;
      local_190._4_4_ = auVar79._4_4_;
      auVar37._4_4_ = local_190._4_4_ * local_190._4_4_;
      fVar14 = auVar79._8_4_;
      auVar37._8_4_ = fVar14 * fVar14;
      auVar37._12_4_ = auVar79._12_4_ * auVar79._12_4_;
      auVar47 = NEON_ext(auVar37,auVar37,8,1);
      fVar61 = auVar47._0_4_ + auVar47._4_4_;
      fVar62 = auVar37._0_4_ + auVar37._4_4_ + fVar61;
      fVar61 = auVar37._0_4_ + auVar37._4_4_ + fVar61;
      uVar6 = CONCAT44(fVar61,fVar62);
      uVar78 = NEON_frsqrte(uVar6,4);
      fVar77 = (float)uVar78;
      fVar71 = (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
      fVar77 = fVar77 * (float)uVar78;
      fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
      fVar77 = fVar77 * (float)uVar78;
      fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
      fVar77 = fVar77 * (float)uVar78;
      fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
      uVar45 = CONCAT44(fVar61 * fVar71 * (float)((ulong)uVar78 >> 0x20),
                        fVar62 * fVar77 * (float)uVar78);
      uVar45 = uVar45 ^ (uVar45 ^ uVar6) & CONCAT44(-(uint)(fVar62 == 0.0),-(uint)(fVar62 == 0.0));
      uVar78 = NEON_frecpe(uVar45,4);
      uVar65 = NEON_frecps(uVar45,uVar78,4);
      fVar62 = (float)uVar78 * (float)uVar65;
      fVar61 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar65 >> 0x20);
      uVar78 = NEON_frecps(uVar45,CONCAT44(fVar61,fVar62),4);
      fVar62 = fVar62 * (float)uVar78;
      fVar61 = fVar61 * (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frecps(uVar45,CONCAT44(fVar61,fVar62),4);
      fVar62 = fVar62 * (float)uVar78;
      fVar61 = fVar61 * (float)((ulong)uVar78 >> 0x20);
      uVar78 = NEON_frecps(uVar45,CONCAT44(fVar61,fVar62),4);
      fVar62 = fVar62 * (float)uVar78;
      uVar78 = NEON_frecps(uVar45,CONCAT44(fVar61 * (float)((ulong)uVar78 >> 0x20),fVar62),4);
      fVar62 = fVar62 * (float)uVar78;
      local_190._0_4_ = (float)local_190 * fVar62;
      local_190._4_4_ = local_190._4_4_ * fVar62;
      local_1a0 = CONCAT44(-local_190._4_4_,-(float)local_190);
      uStack_198 = (ulong)(uint)-(fVar14 * fVar62);
      uStack_188 = (ulong)(uint)(fVar14 * fVar62);
      auVar47 = FUN_0027c460(param_2,&local_190);
      fStack_1a8 = auVar47._8_4_;
      fStack_1a4 = auVar47._12_4_;
      local_1b0 = auVar47._0_4_;
      fStack_1ac = auVar47._4_4_;
      FUN_00261680(param_3,&local_1a0);
      auVar38._0_4_ = local_1c0 + extraout_s0_00;
      auVar38._4_4_ = fStack_1bc + extraout_var_00;
      auVar38._8_4_ = fStack_1b8 + extraout_var_03;
      auVar38._12_4_ = extraout_var_06 + 0.0;
      auVar27._0_4_ = local_1b0 - auVar38._0_4_;
      auVar27._4_4_ = fStack_1ac - auVar38._4_4_;
      auVar27._8_4_ = fStack_1a8 - auVar38._8_4_;
      auVar27._12_4_ = fStack_1a4 - auVar38._12_4_;
      auVar51._0_4_ = (float)local_190 * -auVar27._0_4_;
      auVar51._4_4_ = local_190._4_4_ * -auVar27._4_4_;
      auVar51._8_4_ = (float)uStack_188 * -auVar27._8_4_;
      auVar51._12_4_ = uStack_188._4_4_ * 0.0;
      auVar47 = NEON_ext(auVar51,auVar51,8,1);
      fVar61 = auVar47._0_4_ + auVar47._4_4_;
      fVar77 = (auVar51._0_4_ + auVar51._4_4_ + fVar61) - fVar75;
      fVar62 = fVar13;
      if (0.0 < fVar77) {
        auVar47 = *param_7;
        auVar72._0_4_ = (float)local_190 * auVar47._0_4_;
        auVar72._4_4_ = local_190._4_4_ * auVar47._4_4_;
        auVar72._8_4_ = (float)uStack_188 * auVar47._8_4_;
        auVar72._12_4_ = uStack_188._4_4_ * auVar47._12_4_;
        auVar48 = NEON_ext(auVar72,auVar72,8,1);
        fVar71 = auVar48._0_4_ + auVar48._4_4_;
        fVar13 = auVar72._0_4_ + auVar72._4_4_ + fVar71;
        uVar78 = CONCAT44(auVar72._0_4_ + auVar72._4_4_ + fVar71,fVar13);
        if (0.0 <= fVar13) {
          return 0;
        }
        uVar65 = NEON_frecpe(uVar78,4);
        uVar82 = NEON_frecps(uVar78,uVar65,4);
        fVar13 = (float)uVar65 * (float)uVar82;
        fVar71 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar71,fVar13),4);
        fVar13 = fVar13 * (float)uVar65;
        fVar71 = fVar71 * (float)((ulong)uVar65 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar71,fVar13),4);
        fVar13 = fVar13 * (float)uVar65;
        fVar71 = fVar71 * (float)((ulong)uVar65 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar71,fVar13),4);
        fVar13 = fVar13 * (float)uVar65;
        fVar71 = fVar71 * (float)((ulong)uVar65 >> 0x20);
        uVar78 = NEON_frecps(uVar78,CONCAT44(fVar71,fVar13),4);
        fVar14 = (float)uVar87;
        fVar13 = fVar14 - fVar77 * fVar13 * (float)uVar78;
        uVar87 = CONCAT44((float)((ulong)uVar87 >> 0x20) -
                          ((auVar51._0_4_ + auVar51._4_4_ + fVar61) -
                          (param_1 + (float)((ulong)uVar64 >> 0x20) * 0.1)) *
                          fVar71 * (float)((ulong)uVar78 >> 0x20),fVar13);
        if (fVar14 < fVar13) {
          uVar78 = NEON_fmov(0x3f800000,4);
          if ((float)uVar78 < fVar13) {
            return 0;
          }
          auVar39._0_4_ = auVar47._0_4_ * fVar13 + *param_6;
          auVar39._4_4_ = auVar47._4_4_ * fVar13 + param_6[1];
          auVar39._8_4_ = auVar47._8_4_ * fVar13 + param_6[2];
          auVar39._12_4_ = auVar47._12_4_ * fVar13 + param_6[3];
          auVar47 = NEON_ext(auVar39,auVar39,8,1);
          fVar13 = auVar47._0_4_;
          local_1c0 = auVar39._0_4_ - local_1c0;
          fStack_1bc = auVar39._4_4_ - fStack_1bc;
          fStack_1b8 = fVar13 - fStack_1b8;
          local_170._0_4_ = (float)local_170 + local_1c0;
          local_170._4_4_ = local_170._4_4_ + fStack_1bc;
          uStack_168._0_4_ = (float)uStack_168 + fStack_1b8;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_180._0_4_ = (float)local_180 + local_1c0;
          local_180._4_4_ = local_180._4_4_ + fStack_1bc;
          uStack_178._0_4_ = (float)uStack_178 + fStack_1b8;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + local_1c0;
          local_160._4_4_ = local_160._4_4_ + fStack_1bc;
          uStack_158._0_4_ = (float)uStack_158 + fStack_1b8;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          local_100[0] = local_140[0] - (float)local_180;
          local_100[1] = local_140[1] - local_180._4_4_;
          uStack_f8._0_4_ = local_140[2] - (float)uStack_178;
          uStack_f8._4_4_ = local_140[3] - uStack_178._4_4_;
          local_f0 = local_130 - (float)local_170;
          fStack_ec = fStack_12c - local_170._4_4_;
          fStack_e8 = fStack_128 - (float)uStack_168;
          fStack_e4 = fStack_124 - uStack_168._4_4_;
          auVar23._0_8_ = CONCAT44(fStack_11c - local_160._4_4_,local_120 - (float)local_160);
          auVar23._8_4_ = fStack_118 - (float)uStack_158;
          auVar23._12_4_ = fStack_114 - uStack_158._4_4_;
          uStack_d8 = auVar23._8_8_;
          local_e0 = auVar23._0_8_;
          FUN_00261680(param_3,&local_1a0);
          auVar38._0_4_ = auVar39._0_4_ + extraout_s0_01;
          auVar38._4_4_ = auVar39._4_4_ + extraout_var_01;
          auVar38._8_4_ = fVar13 + extraout_var_04;
          auVar38._12_4_ = extraout_var_07 + 0.0;
          auVar27._0_4_ = local_1b0 - auVar38._0_4_;
          auVar27._4_4_ = fStack_1ac - auVar38._4_4_;
          auVar27._8_4_ = fStack_1a8 - auVar38._8_4_;
          auVar27._12_4_ = fStack_1a4 - auVar38._12_4_;
          fVar62 = 3.4028235e+38;
          local_210 = auVar79._0_8_;
          uStack_208 = auVar79._8_8_;
          local_1c0 = auVar39._0_4_;
          fStack_1bc = auVar39._4_4_;
          fStack_1b8 = fVar13;
        }
      }
      uVar34 = local_ac;
      uVar6 = (ulong)local_ac;
      bVar4 = local_ac == 3;
      local_ac = local_ac + 1;
      local_140[uVar6 * 4 + 2] = fStack_1a8;
      local_140[uVar6 * 4 + 3] = fStack_1a4;
      local_140[uVar6 * 4] = local_1b0;
      local_140[uVar6 * 4 + 1] = fStack_1ac;
      *(long *)(local_140 + uVar6 * 4 + -0xe) = auVar38._8_8_;
      *(long *)(local_140 + uVar6 * 4 + -0x10) = auVar38._0_8_;
      *(long *)(local_a8 + uVar6 * 4 + -0x14) = auVar27._8_8_;
      *(long *)(local_a8 + uVar6 * 4 + -0x16) = auVar27._0_8_;
      if (bVar4) {
        auVar27 = FUN_00237120(local_100,local_140,&local_180,&local_ac);
      }
      else if (uVar34 == 2) {
        auVar27._4_4_ = local_100[1];
        auVar27._0_4_ = local_100[0];
        auVar27._8_4_ = (float)uStack_f8;
        auVar27._12_4_ = uStack_f8._4_4_;
        auVar2._4_4_ = fStack_ec;
        auVar2._0_4_ = local_f0;
        auVar2._8_4_ = fStack_e8;
        auVar2._12_4_ = fStack_e4;
        auVar3._8_8_ = uStack_d8;
        auVar3._0_8_ = local_e0;
        fVar77 = (float)local_e0;
        auVar68._0_4_ = fVar77 - local_100[0];
        fVar71 = (float)((ulong)local_e0 >> 0x20);
        auVar68._4_4_ = fVar71 - local_100[1];
        fVar14 = (float)uStack_d8;
        auVar68._8_4_ = fVar14 - (float)uStack_f8;
        fVar18 = (float)((ulong)uStack_d8 >> 0x20);
        auVar68._12_4_ = fVar18 - uStack_f8._4_4_;
        auVar73._0_4_ = local_f0 - local_100[0];
        auVar73._4_4_ = fStack_ec - local_100[1];
        auVar73._8_4_ = fStack_e8 - (float)uStack_f8;
        auVar73._12_4_ = fStack_e4 - uStack_f8._4_4_;
        auVar47 = NEON_ext(auVar73,auVar73,8,1);
        auVar48 = NEON_ext(auVar68,auVar68,8,1);
        fVar81 = auVar73._0_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar68._0_4_;
        uVar78 = NEON_ext(CONCAT44(auVar73._4_4_ * auVar68._8_4_ - auVar73._8_4_ * auVar68._4_4_,
                                   fVar81),
                          CONCAT44(auVar47._4_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar48._4_4_,
                                   auVar47._0_4_ * auVar68._0_4_ - auVar73._0_4_ * auVar48._0_4_),4,
                          1);
        fVar76 = (float)uVar78;
        auVar83._0_4_ = fVar76 * fVar76;
        fVar15 = (float)((ulong)uVar78 >> 0x20);
        auVar83._4_4_ = fVar15 * fVar15;
        auVar83._8_4_ = fVar81 * fVar81;
        auVar83._12_4_ = 0;
        auVar47 = NEON_ext(auVar83,auVar83,8,1);
        fVar61 = auVar47._0_4_ + auVar47._4_4_;
        fVar13 = auVar83._0_4_ + auVar83._4_4_ + fVar61;
        uVar78 = CONCAT44(auVar83._0_4_ + auVar83._4_4_ + fVar61,fVar13);
        local_ac = 3;
        if (1.1920929e-07 < fVar13) {
          if (fVar13 != 0.0) {
            auVar47 = NEON_ext(auVar2,auVar2,8,1);
            auVar48 = NEON_ext(auVar3,auVar3,8,1);
            fVar98 = local_f0 * fVar71 - fStack_ec * fVar77;
            auVar100 = NEON_ext(auVar27,auVar27,8,1);
            uVar82 = NEON_ext(CONCAT44(fStack_ec * fVar14 - fStack_e8 * fVar71,fVar98),
                              CONCAT44(auVar47._4_4_ * fVar71 - fStack_ec * auVar48._4_4_,
                                       auVar47._0_4_ * fVar77 - local_f0 * auVar48._0_4_),4,1);
            fVar13 = local_100[1] * fVar77 - local_100[0] * fVar71;
            uVar101 = NEON_ext(CONCAT44((float)uStack_f8 * fVar71 - local_100[1] * fVar14,fVar13),
                               CONCAT44(local_100[1] * auVar48._4_4_ - auVar100._4_4_ * fVar71,
                                        local_100[0] * auVar48._0_4_ - auVar100._0_4_ * fVar77),4,1)
            ;
            fVar61 = local_100[0] * fStack_ec - local_100[1] * local_f0;
            uVar65 = NEON_ext(CONCAT44(local_100[1] * fStack_e8 - (float)uStack_f8 * fStack_ec,
                                       fVar61),
                              CONCAT44(auVar100._4_4_ * fStack_ec - local_100[1] * auVar47._4_4_,
                                       auVar100._0_4_ * local_f0 - local_100[0] * auVar47._0_4_),4,1
                             );
            auVar88._0_4_ = (float)uVar82 * fVar76;
            auVar88._4_4_ = (float)((ulong)uVar82 >> 0x20) * fVar15;
            auVar88._8_4_ = fVar98 * fVar81;
            auVar88._12_4_ = 0;
            auVar47 = NEON_ext(auVar88,auVar88,8,1);
            auVar91._0_4_ = (float)uVar101 * fVar76;
            auVar91._4_4_ = (float)((ulong)uVar101 >> 0x20) * fVar15;
            auVar91._8_4_ = fVar13 * fVar81;
            auVar91._12_4_ = 0;
            auVar48 = NEON_ext(auVar91,auVar91,8,1);
            fVar13 = auVar88._0_4_ + auVar88._4_4_ + auVar47._0_4_ + auVar47._4_4_;
            auVar96._0_4_ = (float)uVar65 * fVar76;
            auVar96._4_4_ = (float)((ulong)uVar65 >> 0x20) * fVar15;
            auVar96._8_4_ = fVar61 * fVar81;
            auVar96._12_4_ = 0;
            fVar61 = auVar91._0_4_ + auVar91._4_4_ + auVar48._0_4_ + auVar48._4_4_;
            auVar47 = NEON_ext(auVar96,auVar96,8,1);
            fVar98 = auVar96._0_4_ + auVar96._4_4_ + auVar47._0_4_ + auVar47._4_4_;
            bVar4 = (0.0 <= fVar13 && 0.0 <= fVar61) && 0.0 <= fVar98;
            auVar97._0_4_ = -(uint)bVar4;
            auVar97._4_4_ = -(uint)bVar4;
            auVar97._8_4_ = -(uint)bVar4;
            auVar97._12_4_ = -(uint)bVar4;
            NEON_ext(auVar97,auVar97,8,1);
            if (CONCAT13((char)auVar97._12_4_,
                         CONCAT12((char)auVar97._8_4_,
                                  CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) == -1) {
              auVar28._0_4_ = local_100[0] * fVar76;
              auVar28._4_4_ = local_100[1] * fVar15;
              auVar28._8_4_ = (float)uStack_f8 * fVar81;
              auVar28._12_4_ = uStack_f8._4_4_ * 0.0;
              auVar47 = NEON_ext(auVar28,auVar28,8,1);
              uVar65 = NEON_frecpe(uVar78,4);
              uVar82 = NEON_frecps(uVar78,uVar65,4);
              fVar13 = (float)uVar65 * (float)uVar82;
              fVar61 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
              uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
              fVar13 = fVar13 * (float)uVar65;
              fVar61 = fVar61 * (float)((ulong)uVar65 >> 0x20);
              uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
              fVar13 = fVar13 * (float)uVar65;
              fVar61 = fVar61 * (float)((ulong)uVar65 >> 0x20);
              uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
              fVar13 = fVar13 * (float)uVar65;
              uVar78 = NEON_frecps(uVar78,CONCAT44(fVar61 * (float)((ulong)uVar65 >> 0x20),fVar13),4
                                  );
              fVar13 = (auVar28._0_4_ + auVar28._4_4_ + auVar47._0_4_ + auVar47._4_4_) *
                       fVar13 * (float)uVar78;
              auVar27._0_4_ = fVar76 * fVar13;
              auVar27._4_4_ = fVar15 * fVar13;
              auVar27._8_4_ = fVar81 * fVar13;
              auVar27._12_4_ = 0.0;
            }
            else {
              auVar80._0_4_ = -local_100[0] * auVar73._0_4_;
              auVar80._4_4_ = -local_100[1] * auVar73._4_4_;
              auVar80._8_4_ = -(float)uStack_f8 * auVar73._8_4_;
              auVar80._12_4_ = auVar73._12_4_ * 0.0;
              auVar47 = NEON_ext(auVar80,auVar80,8,1);
              fVar81 = auVar47._0_4_ + auVar47._4_4_;
              auVar84._0_4_ = -local_f0 * auVar73._0_4_;
              auVar84._4_4_ = -fStack_ec * auVar73._4_4_;
              auVar84._8_4_ = -fStack_e8 * auVar73._8_4_;
              auVar84._12_4_ = auVar73._12_4_ * 0.0;
              auVar47 = NEON_ext(auVar84,auVar84,8,1);
              fVar19 = auVar47._0_4_ + auVar47._4_4_;
              fVar76 = auVar80._0_4_ + auVar80._4_4_ + fVar81;
              fVar15 = auVar84._0_4_ + auVar84._4_4_ + fVar19;
              fVar19 = auVar84._0_4_ + auVar84._4_4_ + fVar19;
              bVar4 = (0.0 <= fVar76 && fVar98 <= 0.0) && fVar15 <= 0.0;
              auVar92._0_4_ = -(uint)bVar4;
              auVar92._4_4_ = -(uint)bVar4;
              auVar92._8_4_ = -(uint)bVar4;
              auVar92._12_4_ = -(uint)bVar4;
              NEON_ext(auVar92,auVar92,8,1);
              if (CONCAT13((char)auVar92._12_4_,
                           CONCAT12((char)auVar92._8_4_,
                                    CONCAT11((char)auVar92._4_4_,(char)auVar92._0_4_))) == -1) {
                uVar78 = CONCAT44((auVar80._0_4_ + auVar80._4_4_ + fVar81) - fVar19,fVar76 - fVar15)
                ;
                uVar65 = NEON_frecpe(uVar78,4);
                uVar82 = NEON_frecps(uVar78,uVar65,4);
                fVar13 = (float)uVar65 * (float)uVar82;
                fVar61 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
                fVar13 = fVar13 * (float)uVar65;
                fVar61 = fVar61 * (float)((ulong)uVar65 >> 0x20);
                uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
                fVar13 = fVar13 * (float)uVar65;
                fVar61 = fVar61 * (float)((ulong)uVar65 >> 0x20);
                uVar65 = NEON_frecps(uVar78,CONCAT44(fVar61,fVar13),4);
                fVar13 = fVar13 * (float)uVar65;
                uVar78 = NEON_frecps(uVar78,CONCAT44(fVar61 * (float)((ulong)uVar65 >> 0x20),fVar13)
                                     ,4);
                fVar76 = fVar76 * (float)(-(uint)(1.1920929e-07 < ABS(fVar76 - fVar15)) &
                                         (uint)(fVar13 * (float)uVar78));
                puVar7 = &local_180;
                pfVar8 = local_140;
                auVar29._0_8_ =
                     CONCAT44(local_100[1] + auVar73._4_4_ * fVar76,
                              local_100[0] + auVar73._0_4_ * fVar76);
                auVar29._8_4_ = (float)uStack_f8 + auVar73._8_4_ * fVar76;
                auVar29._12_4_ = uStack_f8._4_4_ + auVar73._12_4_ * fVar76;
                auVar47 = NEON_ext(auVar29,auVar29,8,1);
                pfVar9 = local_100;
                auVar27._8_4_ = (float)auVar47._0_4_;
                auVar27._0_8_ = auVar29._0_8_;
                auVar27._12_4_ = 0.0;
                local_ac = 2;
LAB_002e6404:
                puVar10 = &local_170;
                pfVar11 = local_140 + 4;
                pfVar12 = &local_f0;
              }
              else {
                auVar93._0_4_ = -local_f0 * auVar68._0_4_;
                auVar93._4_4_ = -fStack_ec * auVar68._4_4_;
                auVar93._8_4_ = -fStack_e8 * auVar68._8_4_;
                auVar93._12_4_ = auVar68._12_4_ * 0.0;
                auVar47 = NEON_ext(auVar93,auVar93,8,1);
                fVar20 = auVar47._0_4_ + auVar47._4_4_;
                auVar74._0_4_ = auVar73._0_4_ * -fVar77;
                auVar74._4_4_ = auVar73._4_4_ * -fVar71;
                auVar74._8_4_ = auVar73._8_4_ * -fVar14;
                auVar74._12_4_ = auVar73._12_4_ * 0.0;
                auVar99._0_4_ = auVar68._0_4_ * -fVar77;
                auVar99._4_4_ = auVar68._4_4_ * -fVar71;
                auVar99._8_4_ = auVar68._8_4_ * -fVar14;
                auVar99._12_4_ = auVar68._12_4_ * 0.0;
                fVar81 = auVar93._0_4_ + auVar93._4_4_ + fVar20;
                auVar47 = NEON_ext(auVar74,auVar74,8,1);
                fVar21 = auVar47._0_4_ + auVar47._4_4_;
                fVar98 = auVar74._0_4_ + auVar74._4_4_ + fVar21;
                auVar47 = NEON_ext(auVar99,auVar99,8,1);
                fVar22 = auVar47._0_4_ + auVar47._4_4_;
                fVar16 = auVar99._0_4_ + auVar99._4_4_ + fVar22;
                fVar22 = auVar99._0_4_ + auVar99._4_4_ + fVar22;
                bVar4 = (fVar15 <= fVar81 && fVar13 <= 0.0) && fVar16 <= fVar98;
                auVar89._0_4_ = -(uint)bVar4;
                auVar89._4_4_ = -(uint)bVar4;
                auVar89._8_4_ = -(uint)bVar4;
                auVar89._12_4_ = -(uint)bVar4;
                NEON_ext(auVar89,auVar89,8,1);
                puVar10 = &local_160;
                pfVar11 = local_140 + 8;
                pfVar12 = (float *)&local_e0;
                if (CONCAT13((char)auVar89._12_4_,
                             CONCAT12((char)auVar89._8_4_,
                                      CONCAT11((char)auVar89._4_4_,(char)auVar89._0_4_))) == -1) {
                  local_ac = 2;
                  fVar13 = (fVar81 - fVar15) + (fVar98 - fVar16);
                  uVar78 = CONCAT44(((auVar93._0_4_ + auVar93._4_4_ + fVar20) - fVar19) +
                                    ((auVar74._0_4_ + auVar74._4_4_ + fVar21) - fVar22),fVar13);
                  uVar65 = NEON_frecpe(uVar78,4);
                  uVar82 = NEON_frecps(uVar78,uVar65,4);
                  fVar61 = (float)uVar65 * (float)uVar82;
                  fVar76 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  fVar76 = fVar76 * (float)((ulong)uVar65 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  fVar76 = fVar76 * (float)((ulong)uVar65 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  uVar78 = NEON_frecps(uVar78,CONCAT44(fVar76 * (float)((ulong)uVar65 >> 0x20),
                                                       fVar61),4);
                  fVar13 = (fVar81 - fVar15) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) &
                                  (uint)(fVar61 * (float)uVar78));
                  auVar30._0_8_ =
                       CONCAT44(fStack_ec + (fVar71 - fStack_ec) * fVar13,
                                local_f0 + (fVar77 - local_f0) * fVar13);
                  auVar30._8_4_ = fStack_e8 + (fVar14 - fStack_e8) * fVar13;
                  auVar30._12_4_ = fStack_e4 + (fVar18 - fStack_e4) * fVar13;
                  auVar47 = NEON_ext(auVar30,auVar30,8,1);
                  auVar27._8_4_ = (float)auVar47._0_4_;
                  auVar27._0_8_ = auVar30._0_8_;
                  auVar27._12_4_ = 0.0;
                  puVar7 = &local_170;
                  pfVar8 = local_140 + 4;
                  pfVar9 = &local_f0;
                }
                else {
                  auVar90._0_4_ = -local_100[0] * auVar68._0_4_;
                  auVar90._4_4_ = -local_100[1] * auVar68._4_4_;
                  auVar90._8_4_ = -(float)uStack_f8 * auVar68._8_4_;
                  auVar90._12_4_ = auVar68._12_4_ * 0.0;
                  auVar47 = NEON_ext(auVar90,auVar90,8,1);
                  fVar77 = auVar47._0_4_ + auVar47._4_4_;
                  fVar13 = auVar90._0_4_ + auVar90._4_4_ + fVar77;
                  bVar4 = (fVar61 <= 0.0 && 0.0 <= fVar13) && fVar16 <= 0.0;
                  auVar85._0_4_ = -(uint)bVar4;
                  auVar85._4_4_ = -(uint)bVar4;
                  auVar85._8_4_ = -(uint)bVar4;
                  auVar85._12_4_ = -(uint)bVar4;
                  NEON_ext(auVar85,auVar85,8,1);
                  if (CONCAT13((char)auVar85._12_4_,
                               CONCAT12((char)auVar85._8_4_,
                                        CONCAT11((char)auVar85._4_4_,(char)auVar85._0_4_))) != -1) {
                    bVar4 = fVar76 <= 0.0 && fVar13 <= 0.0;
                    auVar69._0_4_ = -(uint)bVar4;
                    auVar69._4_4_ = -(uint)bVar4;
                    auVar69._8_4_ = -(uint)bVar4;
                    auVar69._12_4_ = -(uint)bVar4;
                    NEON_ext(auVar69,auVar69,8,1);
                    if (CONCAT13((char)auVar69._12_4_,
                                 CONCAT12((char)auVar69._8_4_,
                                          CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_))) == -1)
                    {
                      puVar7 = &local_180;
                      pfVar8 = local_140;
                      pfVar9 = local_100;
                    }
                    else {
                      bVar4 = 0.0 <= fVar15 && fVar81 <= fVar15;
                      auVar25._0_4_ = -(uint)bVar4;
                      auVar25._4_4_ = -(uint)bVar4;
                      auVar25._8_4_ = -(uint)bVar4;
                      auVar25._12_4_ = -(uint)bVar4;
                      NEON_ext(auVar25,auVar25,8,1);
                      iVar44 = CONCAT13((char)auVar25._12_4_,
                                        CONCAT12((char)auVar25._8_4_,
                                                 CONCAT11((char)auVar25._4_4_,(char)auVar25._0_4_)))
                      ;
                      iVar63 = -(uint)(iVar44 == -1);
                      auVar26._4_4_ = iVar63;
                      auVar26._0_4_ = iVar63;
                      auVar26._8_4_ = iVar63;
                      auVar26._12_4_ = iVar63;
                      lVar5 = 0x10;
                      if (iVar44 != -1) {
                        lVar5 = 0x20;
                      }
                      auVar27 = auVar3 ^ (auVar3 ^ auVar2) & auVar26;
                      pfVar9 = (float *)((long)local_a8 + lVar5 + -0x58);
                      pfVar8 = (float *)((long)local_140 + lVar5);
                      puVar7 = (undefined8 *)((long)local_140 + lVar5 + -0x40);
                    }
                    local_ac = 1;
                    goto LAB_002e6404;
                  }
                  uVar78 = CONCAT44((auVar90._0_4_ + auVar90._4_4_ + fVar77) - fVar22,
                                    fVar13 - fVar16);
                  uVar65 = NEON_frecpe(uVar78,4);
                  uVar82 = NEON_frecps(uVar78,uVar65,4);
                  fVar61 = (float)uVar65 * (float)uVar82;
                  fVar77 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  fVar77 = fVar77 * (float)((ulong)uVar65 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  fVar77 = fVar77 * (float)((ulong)uVar65 >> 0x20);
                  uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
                  fVar61 = fVar61 * (float)uVar65;
                  uVar78 = NEON_frecps(uVar78,CONCAT44(fVar77 * (float)((ulong)uVar65 >> 0x20),
                                                       fVar61),4);
                  fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar16)) &
                                           (uint)(fVar61 * (float)uVar78));
                  auVar31._0_8_ =
                       CONCAT44(local_100[1] + auVar68._4_4_ * fVar13,
                                local_100[0] + auVar68._0_4_ * fVar13);
                  auVar31._8_4_ = (float)uStack_f8 + auVar68._8_4_ * fVar13;
                  auVar31._12_4_ = uStack_f8._4_4_ + auVar68._12_4_ * fVar13;
                  auVar47 = NEON_ext(auVar31,auVar31,8,1);
                  auVar27._8_4_ = (float)auVar47._0_4_;
                  auVar27._0_8_ = auVar31._0_8_;
                  auVar27._12_4_ = 0.0;
                  local_ac = 2;
                  puVar7 = &local_180;
                  pfVar8 = local_140;
                  pfVar9 = local_100;
                }
              }
              uStack_f8._0_4_ = (float)*(undefined8 *)(pfVar9 + 2);
              uStack_f8._4_4_ = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
              local_100[0] = (float)*(undefined8 *)pfVar9;
              local_100[1] = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
              fStack_e8 = (float)*(undefined8 *)(pfVar12 + 2);
              fStack_e4 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
              local_f0 = (float)*(undefined8 *)pfVar12;
              fStack_ec = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              local_170 = *puVar10;
              uStack_168 = puVar10[1];
              local_140[2] = (float)*(undefined8 *)(pfVar8 + 2);
              local_140[3] = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
              local_140[0] = (float)*(undefined8 *)pfVar8;
              local_140[1] = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
              fStack_128 = (float)*(undefined8 *)(pfVar11 + 2);
              fStack_124 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
              local_130 = (float)*(undefined8 *)pfVar11;
              fStack_12c = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
              local_180 = *puVar7;
              uStack_178 = puVar7[1];
            }
          }
        }
        else {
          auVar40._0_4_ = auVar73._0_4_ * auVar73._0_4_;
          auVar40._4_4_ = auVar73._4_4_ * auVar73._4_4_;
          auVar40._8_4_ = auVar73._8_4_ * auVar73._8_4_;
          auVar40._12_4_ = auVar73._12_4_ * auVar73._12_4_;
          auVar47 = NEON_ext(auVar40,auVar40,8,1);
          fVar61 = auVar47._0_4_ + auVar47._4_4_;
          fVar13 = auVar40._0_4_ + auVar40._4_4_ + fVar61;
          uVar78 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar61,fVar13);
          bVar4 = fVar13 <= 1.1920929e-07;
          auVar53._0_4_ = -(uint)bVar4;
          auVar53._4_4_ = -(uint)bVar4;
          auVar53._8_4_ = -(uint)bVar4;
          auVar53._12_4_ = -(uint)bVar4;
          NEON_ext(auVar53,auVar53,8,1);
          local_ac = 2;
          if (CONCAT13((char)auVar53._12_4_,
                       CONCAT12((char)auVar53._8_4_,
                                CONCAT11((char)auVar53._4_4_,(char)auVar53._0_4_))) != -1) {
            auVar54._0_4_ = -local_100[0] * auVar73._0_4_;
            auVar54._4_4_ = -local_100[1] * auVar73._4_4_;
            auVar54._8_4_ = -(float)uStack_f8 * auVar73._8_4_;
            auVar54._12_4_ = auVar73._12_4_ * 0.0;
            auVar47 = NEON_ext(auVar54,auVar54,8,1);
            fVar13 = auVar47._0_4_ + auVar47._4_4_;
            uVar65 = NEON_frecpe(uVar78,4);
            uVar82 = NEON_frecps(uVar78,uVar65,4);
            fVar61 = (float)uVar65 * (float)uVar82;
            fVar77 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
            uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
            fVar61 = fVar61 * (float)uVar65;
            fVar77 = fVar77 * (float)((ulong)uVar65 >> 0x20);
            uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
            fVar61 = fVar61 * (float)uVar65;
            fVar77 = fVar77 * (float)((ulong)uVar65 >> 0x20);
            uVar65 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
            fVar61 = fVar61 * (float)uVar65;
            fVar77 = fVar77 * (float)((ulong)uVar65 >> 0x20);
            uVar78 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar61),4);
            uVar65 = NEON_fmov(0x3f800000,4);
            uVar78 = NEON_fmin(CONCAT44((auVar54._0_4_ + auVar54._4_4_ + fVar13) *
                                        fVar77 * (float)((ulong)uVar78 >> 0x20),
                                        (auVar54._0_4_ + auVar54._4_4_ + fVar13) *
                                        fVar61 * (float)uVar78),uVar65,4);
            uVar78 = NEON_fmax(uVar78,0,4);
            fVar13 = (float)uVar78;
            fVar61 = auVar73._0_4_ * fVar13;
            fVar77 = auVar73._4_4_ * fVar13;
            fVar71 = auVar73._8_4_ * fVar13;
            fVar13 = auVar73._12_4_ * fVar13;
            goto LAB_002e5f80;
          }
LAB_002e5f94:
          local_ac = 1;
        }
      }
      else if (uVar34 == 1) {
        auVar27._4_4_ = local_100[1];
        auVar27._0_4_ = local_100[0];
        auVar27._8_4_ = (float)uStack_f8;
        auVar27._12_4_ = uStack_f8._4_4_;
        fVar61 = local_f0 - local_100[0];
        fVar77 = fStack_ec - local_100[1];
        fVar71 = fStack_e8 - (float)uStack_f8;
        fVar13 = fStack_e4 - uStack_f8._4_4_;
        auVar52._0_4_ = fVar61 * fVar61;
        auVar52._4_4_ = fVar77 * fVar77;
        auVar52._8_4_ = fVar71 * fVar71;
        auVar52._12_4_ = fVar13 * fVar13;
        auVar47 = NEON_ext(auVar52,auVar52,8,1);
        fVar18 = auVar47._0_4_ + auVar47._4_4_;
        fVar14 = auVar52._0_4_ + auVar52._4_4_ + fVar18;
        uVar78 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar18,fVar14);
        bVar4 = fVar14 <= 1.1920929e-07;
        auVar66._0_4_ = -(uint)bVar4;
        auVar66._4_4_ = -(uint)bVar4;
        auVar66._8_4_ = -(uint)bVar4;
        auVar66._12_4_ = -(uint)bVar4;
        NEON_ext(auVar66,auVar66,8,1);
        if (CONCAT13((char)auVar66._12_4_,
                     CONCAT12((char)auVar66._8_4_,CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))
                    ) == -1) goto LAB_002e5f94;
        auVar67._0_4_ = -local_100[0] * fVar61;
        auVar67._4_4_ = -local_100[1] * fVar77;
        auVar67._8_4_ = -(float)uStack_f8 * fVar71;
        auVar67._12_4_ = fVar13 * 0.0;
        auVar47 = NEON_ext(auVar67,auVar67,8,1);
        fVar14 = auVar47._0_4_ + auVar47._4_4_;
        uVar65 = NEON_frecpe(uVar78,4);
        uVar82 = NEON_frecps(uVar78,uVar65,4);
        fVar18 = (float)uVar65 * (float)uVar82;
        fVar76 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar18),4);
        fVar18 = fVar18 * (float)uVar65;
        fVar76 = fVar76 * (float)((ulong)uVar65 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar18),4);
        fVar18 = fVar18 * (float)uVar65;
        fVar76 = fVar76 * (float)((ulong)uVar65 >> 0x20);
        uVar65 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar18),4);
        fVar18 = fVar18 * (float)uVar65;
        fVar76 = fVar76 * (float)((ulong)uVar65 >> 0x20);
        uVar78 = NEON_frecps(uVar78,CONCAT44(fVar76,fVar18),4);
        uVar65 = NEON_fmov(0x3f800000,4);
        uVar78 = NEON_fmin(CONCAT44((auVar67._0_4_ + auVar67._4_4_ + fVar14) *
                                    fVar76 * (float)((ulong)uVar78 >> 0x20),
                                    (auVar67._0_4_ + auVar67._4_4_ + fVar14) *
                                    fVar18 * (float)uVar78),uVar65,4);
        uVar78 = NEON_fmax(uVar78,0,4);
        fVar14 = (float)uVar78;
        fVar61 = fVar61 * fVar14;
        fVar77 = fVar77 * fVar14;
        fVar71 = fVar71 * fVar14;
        fVar13 = fVar13 * fVar14;
LAB_002e5f80:
        auVar24._0_8_ = CONCAT44(auVar27._4_4_ + fVar77,auVar27._0_4_ + fVar61);
        auVar24._8_4_ = auVar27._8_4_ + fVar71;
        auVar24._12_4_ = auVar27._12_4_ + fVar13;
        auVar47 = NEON_ext(auVar24,auVar24,8,1);
        auVar27._8_4_ = (float)auVar47._0_4_;
        auVar27._0_8_ = auVar24._0_8_;
        auVar27._12_4_ = 0.0;
      }
      fVar61 = auVar27._0_4_;
      auVar41._0_4_ = fVar61 * fVar61;
      fVar77 = auVar27._4_4_;
      auVar41._4_4_ = fVar77 * fVar77;
      fVar71 = auVar27._8_4_;
      auVar41._8_4_ = fVar71 * fVar71;
      auVar41._12_4_ = auVar27._12_4_ * auVar27._12_4_;
      auVar47 = NEON_ext(auVar41,auVar41,8,1);
      fVar13 = auVar41._0_4_ + auVar41._4_4_ + auVar47._0_4_ + auVar47._4_4_;
      auVar36._0_4_ = -(uint)(fVar13 < fVar62);
      bVar4 = fVar75 * fVar75 < fVar13 && fVar13 < fVar62;
      auVar55._0_4_ = -(uint)bVar4;
      auVar55._4_4_ = -(uint)bVar4;
      auVar55._8_4_ = -(uint)bVar4;
      auVar55._12_4_ = -(uint)bVar4;
      NEON_ext(auVar55,auVar55,8,1);
      auVar79._0_4_ = -fVar61;
      auVar79._4_4_ = -fVar77;
      auVar79._8_4_ = -fVar71;
      auVar79._12_4_ = 0;
    } while (CONCAT13((char)auVar55._12_4_,
                      CONCAT12((char)auVar55._8_4_,CONCAT11((char)auVar55._4_4_,(char)auVar55._0_4_)
                              )) == -1);
    auVar47._8_8_ = uStack_208;
    auVar47._0_8_ = local_210;
    auVar36._4_4_ = auVar36._0_4_;
    auVar36._8_4_ = auVar36._0_4_;
    auVar36._12_4_ = auVar36._0_4_;
    lVar5 = *(long *)(param_2 + 8);
  }
  else {
    uVar87 = 0;
    auVar27._8_8_ = auVar42._8_8_;
    auVar27._0_8_ = auVar42._0_8_;
    auVar79._8_4_ = auVar47._8_4_;
    auVar79._0_8_ = auVar47._0_8_;
    auVar79._12_4_ = 0;
  }
  auVar95 = ZEXT816(0);
  iVar44 = -(uint)(fVar17 * fVar17 < fVar13);
  bVar43 = (byte)iVar44;
  auVar56[0] = bVar43 & auVar36[0];
  bVar58 = (byte)((uint)iVar44 >> 8);
  auVar56[1] = bVar58 & auVar36[1];
  bVar59 = (byte)((uint)iVar44 >> 0x10);
  auVar56[2] = bVar59 & auVar36[2];
  bVar60 = (byte)((uint)iVar44 >> 0x18);
  auVar56[3] = bVar60 & auVar36[3];
  auVar56[4] = bVar43 & auVar36[4];
  auVar56[5] = bVar58 & auVar36[5];
  auVar56[6] = bVar59 & auVar36[6];
  auVar56[7] = bVar60 & auVar36[7];
  auVar56[8] = bVar43 & auVar36[8];
  auVar56[9] = bVar58 & auVar36[9];
  auVar56[10] = bVar59 & auVar36[10];
  auVar56[0xb] = bVar60 & auVar36[0xb];
  auVar56[0xc] = bVar43 & auVar36[0xc];
  auVar56[0xd] = bVar58 & auVar36[0xd];
  auVar56[0xe] = bVar59 & auVar36[0xe];
  auVar56[0xf] = bVar60 & auVar36[0xf];
  auVar42 = auVar42 ^ (auVar42 ^ auVar27) & auVar36;
  auVar47 = auVar47 ^ (auVar47 ^ auVar79) & auVar56;
  iVar44 = -(*(byte *)(lVar5 + 0x24) & 1);
  fVar75 = auVar47._0_4_;
  auVar70._0_4_ = fVar75 * fVar75;
  fVar62 = auVar47._4_4_;
  auVar70._4_4_ = fVar62 * fVar62;
  fVar61 = auVar47._8_4_;
  auVar70._8_4_ = fVar61 * fVar61;
  auVar70._12_4_ = auVar47._12_4_ * auVar47._12_4_;
  auVar47 = NEON_ext(auVar70,auVar70,8,1);
  auVar94._4_4_ = iVar44;
  auVar94._0_4_ = iVar44;
  auVar94._8_4_ = iVar44;
  auVar94._12_4_ = iVar44;
  fVar17 = auVar47._0_4_ + auVar47._4_4_;
  fVar13 = auVar70._0_4_ + auVar70._4_4_ + fVar17;
  fVar17 = auVar70._0_4_ + auVar70._4_4_ + fVar17;
  uVar6 = CONCAT44(fVar17,fVar13);
  uVar78 = NEON_frsqrte(uVar6,4);
  fVar77 = (float)uVar78;
  fVar71 = (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar71 = fVar71 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar77 * fVar77),uVar6,4);
  uVar45 = CONCAT44(fVar17 * fVar71 * (float)((ulong)uVar78 >> 0x20),fVar13 * fVar77 * (float)uVar78
                   );
  uVar45 = uVar45 ^ (uVar45 ^ uVar6) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar78 = NEON_frecpe(uVar45,4);
  uVar64 = NEON_frecps(uVar45,uVar78,4);
  fVar13 = (float)uVar78 * (float)uVar64;
  fVar17 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar64 >> 0x20);
  uVar78 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar78;
  fVar17 = fVar17 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar78;
  fVar17 = fVar17 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar45,CONCAT44(fVar17,fVar13),4);
  fVar13 = fVar13 * (float)uVar78;
  iVar63 = -(uint)(0.0 < (float)uVar45);
  uVar78 = NEON_frecps(uVar45,CONCAT44(fVar17 * (float)((ulong)uVar78 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar78;
  fVar75 = fVar75 * fVar13;
  fVar62 = fVar62 * fVar13;
  fVar61 = fVar61 * fVar13;
  bVar43 = (byte)iVar63;
  bVar58 = (byte)((uint)iVar63 >> 8);
  bVar59 = (byte)((uint)iVar63 >> 0x10);
  bVar60 = (byte)((uint)iVar63 >> 0x18);
  fVar13 = (float)CONCAT13(bVar60 & (byte)((uint)fVar75 >> 0x18),
                           CONCAT12(bVar59 & (byte)((uint)fVar75 >> 0x10),
                                    CONCAT11(bVar58 & (byte)((uint)fVar75 >> 8),
                                             bVar43 & SUB41(fVar75,0))));
  auVar46._0_8_ =
       CONCAT17(bVar60 & (byte)((uint)fVar62 >> 0x18),
                CONCAT16(bVar59 & (byte)((uint)fVar62 >> 0x10),
                         CONCAT15(bVar58 & (byte)((uint)fVar62 >> 8),
                                  CONCAT14(bVar43 & SUB41(fVar62,0),fVar13))));
  auVar46[8] = bVar43 & SUB41(fVar61,0);
  auVar46[9] = bVar58 & (byte)((uint)fVar61 >> 8);
  auVar46[10] = bVar59 & (byte)((uint)fVar61 >> 0x10);
  auVar46[0xb] = bVar60 & (byte)((uint)fVar61 >> 0x18);
  fVar13 = -fVar13;
  fVar17 = -(float)((ulong)auVar46._0_8_ >> 0x20);
  auVar57._0_8_ = CONCAT44(fVar17,fVar13);
  auVar57._8_4_ = -auVar46._8_4_;
  auVar57._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar57._8_4_;
  *param_9 = auVar57._0_8_;
  *param_8 = uVar87;
  uStack_188 = auVar42._8_8_;
  local_190 = auVar42._0_8_;
  if (local_ac == 3) {
    FUN_00231940(&local_190,local_100,&local_f0,&local_e0,&local_1a0,local_a8);
    fVar75 = (float)local_1a0;
    auVar57._4_4_ = fVar17;
    auVar57._0_4_ = fVar13;
    auVar57._12_4_ = 0;
    auVar95._0_4_ =
         local_140[0] +
         (local_130 - local_140[0]) * fVar75 + (local_120 - local_140[0]) * local_a8[0];
    auVar95._4_4_ =
         local_140[1] +
         (fStack_12c - local_140[1]) * fVar75 + (fStack_11c - local_140[1]) * local_a8[0];
    auVar95._8_4_ =
         local_140[2] +
         (fStack_128 - local_140[2]) * fVar75 + (fStack_118 - local_140[2]) * local_a8[0];
    auVar95._12_4_ = local_140[3] + 0.0;
  }
  else if (local_ac == 2) {
    FUN_002318c0(&local_190,local_100,&local_f0,&local_1a0);
    fVar75 = (float)local_1a0;
    auVar57._4_4_ = fVar17;
    auVar57._0_4_ = fVar13;
    auVar57._12_4_ = 0;
    auVar86._0_8_ =
         CONCAT44(local_140[1] + (fStack_12c - local_140[1]) * fVar75,
                  local_140[0] + (local_130 - local_140[0]) * fVar75);
    auVar86._8_4_ = local_140[2] + (fStack_128 - local_140[2]) * fVar75;
    auVar86._12_4_ = local_140[3] + (fStack_124 - local_140[3]) * fVar75;
    auVar47 = NEON_ext(auVar86,auVar86,8,1);
    auVar95._8_4_ = (float)auVar47._0_4_;
    auVar95._0_8_ = auVar86._0_8_;
    auVar95._12_4_ = 0.0;
  }
  else if (local_ac == 1) {
    auVar95._4_4_ = local_140[1];
    auVar95._0_4_ = local_140[0];
    auVar95._8_4_ = local_140[2];
    auVar95._12_4_ = local_140[3];
  }
  fVar13 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar32._0_8_ =
       CONCAT44(auVar95._4_4_ - auVar57._4_4_ * fVar13,auVar95._0_4_ - auVar57._0_4_ * fVar13);
  auVar32._8_4_ = auVar95._8_4_ - auVar57._8_4_ * fVar13;
  auVar32._12_4_ = auVar95._12_4_ - auVar57._12_4_ * fVar13;
  auVar47 = NEON_ext(auVar32,auVar32,8,1);
  auVar33._8_4_ = auVar47._0_4_;
  auVar33._0_8_ = auVar32._0_8_;
  auVar33._12_4_ = 0;
  auVar95 = auVar95 ^ (auVar95 ^ auVar33) & auVar94;
  param_10[1] = auVar95._8_8_;
  *param_10 = auVar95._0_8_;
  return 1;
}


