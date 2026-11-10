/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e0610; name: FUN_002e0610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e0610(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
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
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar30;
  float extraout_var;
  float extraout_var_00;
  float fVar31;
  float extraout_var_02;
  float extraout_var_03;
  float extraout_var_05;
  float extraout_var_06;
  undefined1 auVar20 [16];
  float extraout_var_01;
  float extraout_var_04;
  float extraout_var_07;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  byte bVar32;
  byte bVar45;
  byte bVar46;
  uint uVar33;
  undefined1 auVar35 [12];
  float fVar48;
  undefined1 auVar36 [16];
  float fVar49;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar34;
  byte bVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  ulong uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  int iVar62;
  undefined8 uVar63;
  float fVar71;
  undefined8 uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  undefined8 uVar74;
  float fVar81;
  undefined1 auVar75 [16];
  float fVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar82;
  float fVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
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
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined8 uVar106;
  undefined8 local_210;
  ulong uStack_208;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  float local_150 [4];
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_110 [2];
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  uint local_b4;
  float local_b0 [4];
  
  uVar74 = *(undefined8 *)*param_7;
  uVar82 = *(undefined8 *)(*param_7 + 8);
  uVar87 = *(undefined8 *)param_6;
  uVar106 = *(undefined8 *)(param_6 + 2);
  local_b4 = 1;
  fVar13 = *param_4;
  fVar15 = param_4[1];
  fVar60 = param_4[2];
  fVar71 = param_4[3];
  auVar105._0_4_ = fVar13 * fVar13;
  auVar105._4_4_ = fVar15 * fVar15;
  auVar105._8_4_ = fVar60 * fVar60;
  auVar105._12_4_ = fVar71 * fVar71;
  auVar51 = NEON_ext(auVar105,auVar105,8,1);
  uVar33 = -(uint)(1.1920929e-07 < auVar105._0_4_ + auVar105._4_4_ + auVar51._0_4_ + auVar51._4_4_);
  fVar30 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar13) & uVar33);
  fVar31 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar15) & uVar33);
  fVar86 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar60) & uVar33);
  fVar13 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar71) & uVar33);
  auVar75._0_4_ = fVar30 * fVar30;
  auVar75._4_4_ = fVar31 * fVar31;
  auVar75._8_4_ = fVar86 * fVar86;
  auVar75._12_4_ = fVar13 * fVar13;
  auVar51 = NEON_ext(auVar75,auVar75,8,1);
  fVar15 = auVar51._0_4_ + auVar51._4_4_;
  fVar13 = auVar75._0_4_ + auVar75._4_4_ + fVar15;
  fVar15 = auVar75._0_4_ + auVar75._4_4_ + fVar15;
  uVar6 = CONCAT44(fVar15,fVar13);
  uVar63 = NEON_frsqrte(uVar6,4);
  fVar60 = (float)uVar63;
  fVar71 = (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar60 * fVar60),uVar6,4);
  fVar60 = fVar60 * (float)uVar63;
  fVar71 = fVar71 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar60 * fVar60),uVar6,4);
  fVar60 = fVar60 * (float)uVar63;
  fVar71 = fVar71 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar60 * fVar60),uVar6,4);
  fVar60 = fVar60 * (float)uVar63;
  fVar71 = fVar71 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frsqrts(CONCAT44(fVar71 * fVar71,fVar60 * fVar60),uVar6,4);
  uVar50 = CONCAT44(fVar15 * fVar71 * (float)((ulong)uVar63 >> 0x20),fVar13 * fVar60 * (float)uVar63
                   );
  uVar50 = uVar50 ^ (uVar50 ^ uVar6) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar63 = NEON_frecpe(uVar50,4);
  uVar64 = NEON_frecps(uVar50,uVar63,4);
  fVar13 = (float)uVar63 * (float)uVar64;
  fVar15 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar64 >> 0x20);
  uVar63 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar63;
  fVar15 = fVar15 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar63;
  fVar15 = fVar15 * (float)((ulong)uVar63 >> 0x20);
  uVar63 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar63;
  uVar63 = NEON_frecps(uVar50,CONCAT44(fVar15 * (float)((ulong)uVar63 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar63;
  local_d0 = CONCAT44(fVar31 * fVar13,fVar30 * fVar13);
  uStack_c8 = (ulong)(uint)(fVar86 * fVar13);
  fVar15 = -(fVar30 * fVar13);
  fVar60 = -(fVar31 * fVar13);
  fVar13 = -(fVar86 * fVar13);
  lVar1 = *(long *)(param_2 + 8);
  pfVar8 = *(float **)(param_2 + 0x10);
  uVar64 = 0;
  fVar71 = *(float *)(param_2 + 0x40) * fVar13 +
           *(float *)(param_2 + 0x20) * fVar15 + *(float *)(param_2 + 0x30) * fVar60;
  fVar30 = *(float *)(param_2 + 0x44) * fVar13 +
           *(float *)(param_2 + 0x24) * fVar15 + *(float *)(param_2 + 0x34) * fVar60;
  fVar31 = *(float *)(param_2 + 0x48) * fVar13 +
           *(float *)(param_2 + 0x28) * fVar15 + *(float *)(param_2 + 0x38) * fVar60;
  fVar13 = *(float *)(lVar1 + 0x40);
  fVar15 = *(float *)(lVar1 + 0x44);
  fVar60 = *(float *)(lVar1 + 0x48);
  auVar65._0_4_ = *(float *)(lVar1 + 0x30) * fVar71;
  auVar65._4_4_ = *(float *)(lVar1 + 0x34) * fVar30;
  auVar65._8_4_ = *(float *)(lVar1 + 0x38) * fVar31;
  auVar65._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar51 = NEON_ext(auVar65,auVar65,8,1);
  auVar84._0_4_ = fVar71 * fVar13;
  auVar84._4_4_ = fVar30 * fVar15;
  auVar84._8_4_ = fVar31 * fVar60;
  auVar84._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar75 = NEON_ext(auVar84,auVar84,8,1);
  uVar33 = -(uint)(auVar84._0_4_ + auVar84._4_4_ + auVar75._0_4_ + auVar75._4_4_ <
                  auVar65._0_4_ + auVar65._4_4_ + auVar51._0_4_ + auVar51._4_4_);
  auVar51 = *(undefined1 (*) [16])(pfVar8 + 8);
  auVar75 = *(undefined1 (*) [16])(pfVar8 + 0xc);
  fVar13 = (float)((uint)fVar13 ^ ((uint)fVar13 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar33);
  fVar15 = (float)((uint)fVar15 ^ ((uint)fVar15 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar33);
  fVar60 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar33);
  fVar71 = auVar75._0_4_ + auVar51._0_4_ * fVar60 + *pfVar8 * fVar13 + pfVar8[4] * fVar15;
  fVar30 = auVar75._4_4_ + auVar51._4_4_ * fVar60 + pfVar8[1] * fVar13 + pfVar8[5] * fVar15;
  fVar15 = auVar75._8_4_ + auVar51._8_4_ * fVar60 + pfVar8[2] * fVar13 + pfVar8[6] * fVar15;
  fVar60 = auVar75._12_4_ + 0.0;
  FUN_00261680(param_3,&local_d0);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  local_110[0] = fVar71 - extraout_s0;
  local_110[1] = fVar30 - extraout_var;
  auVar51._0_8_ = CONCAT44(local_110[1],local_110[0]);
  auVar51._8_4_ = fVar15 - extraout_var_02;
  auVar51._12_4_ = fVar60 - extraout_var_05;
  fVar13 = -local_110[0];
  fVar86 = -local_110[1];
  auVar83._0_8_ = CONCAT44(fVar86,fVar13);
  auVar83._8_4_ = -auVar51._8_4_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
  auVar97._8_8_ = 0xffffffffffffffff;
  auVar97._0_8_ = 0xffffffffffffffff;
  fStack_138 = 0.0;
  fStack_134 = 0.0;
  local_140 = 0.0;
  fStack_13c = 0.0;
  auVar83._12_4_ = 0;
  fStack_128 = 0.0;
  fStack_124 = 0.0;
  local_130 = 0.0;
  fStack_12c = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_188 = CONCAT44(extraout_var_05,extraout_var_02);
  local_190 = CONCAT44(extraout_var,extraout_s0);
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uVar2 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x18);
  uVar63 = NEON_fmin(0,CONCAT44(uVar2,uVar2),4);
  fVar31 = (float)uVar63 * 0.1;
  auVar52._0_4_ = fVar13 * fVar13;
  auVar52._4_4_ = fVar86 * fVar86;
  auVar52._8_4_ = auVar83._8_4_ * auVar83._8_4_;
  auVar52._12_4_ = 0;
  auVar75 = NEON_ext(auVar52,auVar52,8,1);
  fVar13 = auVar52._0_4_ + auVar52._4_4_ + auVar75._0_4_ + auVar75._4_4_;
  bVar5 = fVar31 * fVar31 < fVar13;
  auVar53._0_4_ = -(uint)bVar5;
  auVar53._4_4_ = -(uint)bVar5;
  auVar53._8_4_ = -(uint)bVar5;
  auVar53._12_4_ = -(uint)bVar5;
  NEON_ext(auVar53,auVar53,8,1);
  uStack_208 = (ulong)(uint)auVar83._8_4_;
  local_150[0] = fVar71;
  local_150[1] = fVar30;
  local_150[2] = fVar15;
  local_150[3] = fVar60;
  uStack_108._0_4_ = auVar51._8_4_;
  uStack_108._4_4_ = auVar51._12_4_;
  if (CONCAT13((char)auVar53._12_4_,
               CONCAT12((char)auVar53._8_4_,CONCAT11((char)auVar53._4_4_,(char)auVar53._0_4_))) ==
      -1) {
    local_1d0._0_4_ = (float)uVar74;
    local_1d0._4_4_ = (float)((ulong)uVar74 >> 0x20);
    fStack_1c8 = (float)uVar82;
    fStack_1c4 = (float)((ulong)uVar82 >> 0x20);
    local_1e0 = (float)uVar87;
    fStack_1dc = (float)((ulong)uVar87 >> 0x20);
    fStack_1d8 = (float)uVar106;
    fStack_1d4 = (float)((ulong)uVar106 >> 0x20);
    auVar66._0_8_ = CONCAT44(local_1d0._4_4_ * 0.0 + fStack_1dc,(float)local_1d0 * 0.0 + local_1e0);
    auVar66._8_4_ = fStack_1c8 * 0.0 + fStack_1d8;
    auVar66._12_4_ = fStack_1c4 * 0.0 + fStack_1d4;
    fVar60 = param_1 + fVar31;
    auVar75 = NEON_ext(auVar66,auVar66,8,1);
    fVar15 = auVar75._0_4_;
    uVar64 = 0;
    local_210 = auVar83._0_8_;
    local_1d0 = auVar66._0_8_;
    do {
      auVar101 = auVar51;
      fVar73 = auVar83._0_4_;
      auVar36._0_4_ = fVar73 * fVar73;
      fVar80 = auVar83._4_4_;
      auVar36._4_4_ = fVar80 * fVar80;
      fVar81 = auVar83._8_4_;
      auVar36._8_4_ = fVar81 * fVar81;
      auVar36._12_4_ = auVar83._12_4_ * auVar83._12_4_;
      auVar51 = NEON_ext(auVar36,auVar36,8,1);
      fVar30 = auVar51._0_4_ + auVar51._4_4_;
      fVar71 = auVar36._0_4_ + auVar36._4_4_ + fVar30;
      fVar30 = auVar36._0_4_ + auVar36._4_4_ + fVar30;
      uVar6 = CONCAT44(fVar30,fVar71);
      uVar74 = NEON_frsqrte(uVar6,4);
      fVar86 = (float)uVar74;
      fVar72 = (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(CONCAT44(fVar72 * fVar72,fVar86 * fVar86),uVar6,4);
      fVar86 = fVar86 * (float)uVar74;
      fVar72 = fVar72 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(CONCAT44(fVar72 * fVar72,fVar86 * fVar86),uVar6,4);
      fVar86 = fVar86 * (float)uVar74;
      fVar72 = fVar72 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(CONCAT44(fVar72 * fVar72,fVar86 * fVar86),uVar6,4);
      fVar86 = fVar86 * (float)uVar74;
      fVar72 = fVar72 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frsqrts(CONCAT44(fVar72 * fVar72,fVar86 * fVar86),uVar6,4);
      uVar50 = CONCAT44(fVar30 * fVar72 * (float)((ulong)uVar74 >> 0x20),
                        fVar71 * fVar86 * (float)uVar74);
      uVar50 = uVar50 ^ (uVar50 ^ uVar6) & CONCAT44(-(uint)(fVar71 == 0.0),-(uint)(fVar71 == 0.0));
      uVar74 = NEON_frecpe(uVar50,4);
      uVar82 = NEON_frecps(uVar50,uVar74,4);
      fVar71 = (float)uVar74 * (float)uVar82;
      fVar30 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
      uVar74 = NEON_frecps(uVar50,CONCAT44(fVar30,fVar71),4);
      fVar71 = fVar71 * (float)uVar74;
      fVar30 = fVar30 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frecps(uVar50,CONCAT44(fVar30,fVar71),4);
      fVar71 = fVar71 * (float)uVar74;
      fVar30 = fVar30 * (float)((ulong)uVar74 >> 0x20);
      uVar74 = NEON_frecps(uVar50,CONCAT44(fVar30,fVar71),4);
      fVar71 = fVar71 * (float)uVar74;
      uVar74 = NEON_frecps(uVar50,CONCAT44(fVar30 * (float)((ulong)uVar74 >> 0x20),fVar71),4);
      fVar71 = fVar71 * (float)uVar74;
      fVar73 = fVar73 * fVar71;
      fVar80 = fVar80 * fVar71;
      fVar81 = fVar81 * fVar71;
      local_1a0 = CONCAT44(-fVar80,-fVar73);
      uStack_198 = (ulong)(uint)-fVar81;
      lVar1 = *(long *)(param_2 + 8);
      pfVar8 = *(float **)(param_2 + 0x10);
      fVar72 = *(float *)(param_2 + 0x20) * fVar73 + *(float *)(param_2 + 0x30) * fVar80 +
               *(float *)(param_2 + 0x40) * fVar81;
      fVar48 = *(float *)(param_2 + 0x24) * fVar73 + *(float *)(param_2 + 0x34) * fVar80 +
               *(float *)(param_2 + 0x44) * fVar81;
      fVar49 = *(float *)(param_2 + 0x28) * fVar73 + *(float *)(param_2 + 0x38) * fVar80 +
               *(float *)(param_2 + 0x48) * fVar81;
      fVar71 = *(float *)(lVar1 + 0x40);
      fVar30 = *(float *)(lVar1 + 0x44);
      fVar86 = *(float *)(lVar1 + 0x48);
      auVar76._0_4_ = *(float *)(lVar1 + 0x30) * fVar72;
      auVar76._4_4_ = *(float *)(lVar1 + 0x34) * fVar48;
      auVar76._8_4_ = *(float *)(lVar1 + 0x38) * fVar49;
      auVar76._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
      auVar51 = NEON_ext(auVar76,auVar76,8,1);
      auVar37._0_4_ = fVar72 * fVar71;
      auVar37._4_4_ = fVar48 * fVar30;
      auVar37._8_4_ = fVar49 * fVar86;
      auVar37._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
      auVar75 = NEON_ext(auVar37,auVar37,8,1);
      uVar33 = -(uint)(auVar37._0_4_ + auVar37._4_4_ + auVar75._0_4_ + auVar75._4_4_ <
                      auVar76._0_4_ + auVar76._4_4_ + auVar51._0_4_ + auVar51._4_4_);
      auVar51 = *(undefined1 (*) [16])(pfVar8 + 8);
      auVar75 = *(undefined1 (*) [16])(pfVar8 + 0xc);
      fVar71 = (float)((uint)fVar71 ^ ((uint)fVar71 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar33);
      fVar30 = (float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar33);
      fVar86 = (float)((uint)fVar86 ^ ((uint)fVar86 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar33);
      fVar72 = auVar75._0_4_ + auVar51._0_4_ * fVar86 + *pfVar8 * fVar71 + pfVar8[4] * fVar30;
      fVar48 = auVar75._4_4_ + auVar51._4_4_ * fVar86 + pfVar8[1] * fVar71 + pfVar8[5] * fVar30;
      fVar86 = auVar75._8_4_ + auVar51._8_4_ * fVar86 + pfVar8[2] * fVar71 + pfVar8[6] * fVar30;
      fVar49 = auVar75._12_4_ + 0.0;
      FUN_00261680(param_3,&local_1a0);
      auVar38._0_4_ = (float)local_1d0 + extraout_s0_00;
      auVar38._4_4_ = local_1d0._4_4_ + extraout_var_00;
      auVar38._8_4_ = fVar15 + extraout_var_03;
      auVar38._12_4_ = extraout_var_06 + 0.0;
      auVar51._0_4_ = fVar72 - auVar38._0_4_;
      auVar51._4_4_ = fVar48 - auVar38._4_4_;
      auVar51._8_4_ = fVar86 - auVar38._8_4_;
      auVar51._12_4_ = fVar49 - auVar38._12_4_;
      auVar54._0_4_ = fVar73 * -auVar51._0_4_;
      auVar54._4_4_ = fVar80 * -auVar51._4_4_;
      auVar54._8_4_ = fVar81 * -auVar51._8_4_;
      auVar54._12_4_ = 0;
      auVar75 = NEON_ext(auVar54,auVar54,8,1);
      fVar30 = auVar75._0_4_ + auVar75._4_4_;
      fVar61 = (auVar54._0_4_ + auVar54._4_4_ + fVar30) - fVar60;
      fVar71 = fVar13;
      if (0.0 < fVar61) {
        auVar75 = *param_7;
        auVar77._0_4_ = fVar73 * auVar75._0_4_;
        auVar77._4_4_ = fVar80 * auVar75._4_4_;
        auVar77._8_4_ = fVar81 * auVar75._8_4_;
        auVar77._12_4_ = auVar75._12_4_ * 0.0;
        auVar84 = NEON_ext(auVar77,auVar77,8,1);
        fVar73 = auVar84._0_4_ + auVar84._4_4_;
        fVar13 = auVar77._0_4_ + auVar77._4_4_ + fVar73;
        uVar74 = CONCAT44(auVar77._0_4_ + auVar77._4_4_ + fVar73,fVar13);
        if (0.0 <= fVar13) {
          return 0;
        }
        uVar82 = NEON_frecpe(uVar74,4);
        uVar87 = NEON_frecps(uVar74,uVar82,4);
        fVar13 = (float)uVar82 * (float)uVar87;
        fVar73 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar73,fVar13),4);
        fVar13 = fVar13 * (float)uVar82;
        fVar73 = fVar73 * (float)((ulong)uVar82 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar73,fVar13),4);
        fVar13 = fVar13 * (float)uVar82;
        fVar73 = fVar73 * (float)((ulong)uVar82 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar73,fVar13),4);
        fVar13 = fVar13 * (float)uVar82;
        fVar73 = fVar73 * (float)((ulong)uVar82 >> 0x20);
        uVar74 = NEON_frecps(uVar74,CONCAT44(fVar73,fVar13),4);
        fVar80 = (float)uVar64;
        fVar13 = fVar80 - fVar61 * fVar13 * (float)uVar74;
        uVar64 = CONCAT44((float)((ulong)uVar64 >> 0x20) -
                          ((auVar54._0_4_ + auVar54._4_4_ + fVar30) -
                          (param_1 + (float)((ulong)uVar63 >> 0x20) * 0.1)) *
                          fVar73 * (float)((ulong)uVar74 >> 0x20),fVar13);
        if (fVar80 < fVar13) {
          uVar74 = NEON_fmov(0x3f800000,4);
          if ((float)uVar74 < fVar13) {
            return 0;
          }
          auVar39._0_4_ = auVar75._0_4_ * fVar13 + *param_6;
          auVar39._4_4_ = auVar75._4_4_ * fVar13 + param_6[1];
          auVar39._8_4_ = auVar75._8_4_ * fVar13 + param_6[2];
          auVar39._12_4_ = auVar75._12_4_ * fVar13 + param_6[3];
          auVar51 = NEON_ext(auVar39,auVar39,8,1);
          fVar13 = auVar51._0_4_;
          local_1d0._0_4_ = auVar39._0_4_ - (float)local_1d0;
          local_1d0._4_4_ = auVar39._4_4_ - local_1d0._4_4_;
          fVar15 = fVar13 - fVar15;
          local_180._0_4_ = (float)local_180 + (float)local_1d0;
          local_180._4_4_ = local_180._4_4_ + local_1d0._4_4_;
          uStack_178._0_4_ = (float)uStack_178 + fVar15;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_190._0_4_ = (float)local_190 + (float)local_1d0;
          local_190._4_4_ = local_190._4_4_ + local_1d0._4_4_;
          uStack_188._0_4_ = (float)uStack_188 + fVar15;
          uStack_188._4_4_ = uStack_188._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + (float)local_1d0;
          local_170._4_4_ = local_170._4_4_ + local_1d0._4_4_;
          uStack_168._0_4_ = (float)uStack_168 + fVar15;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_110[0] = local_150[0] - (float)local_190;
          local_110[1] = local_150[1] - local_190._4_4_;
          uStack_108._0_4_ = local_150[2] - (float)uStack_188;
          uStack_108._4_4_ = local_150[3] - uStack_188._4_4_;
          local_100 = local_140 - (float)local_180;
          fStack_fc = fStack_13c - local_180._4_4_;
          fStack_f8 = fStack_138 - (float)uStack_178;
          fStack_f4 = fStack_134 - uStack_178._4_4_;
          auVar20._0_8_ = CONCAT44(fStack_12c - local_170._4_4_,local_130 - (float)local_170);
          auVar20._8_4_ = fStack_128 - (float)uStack_168;
          auVar20._12_4_ = fStack_124 - uStack_168._4_4_;
          uStack_e8 = auVar20._8_8_;
          local_f0 = auVar20._0_8_;
          FUN_00261680(param_3,&local_1a0);
          local_1d0 = CONCAT44(auVar39._4_4_,auVar39._0_4_);
          auVar38._0_4_ = auVar39._0_4_ + extraout_s0_01;
          auVar38._4_4_ = auVar39._4_4_ + extraout_var_01;
          auVar38._8_4_ = fVar13 + extraout_var_04;
          auVar38._12_4_ = extraout_var_07 + 0.0;
          auVar51._0_4_ = fVar72 - auVar38._0_4_;
          auVar51._4_4_ = fVar48 - auVar38._4_4_;
          auVar51._8_4_ = fVar86 - auVar38._8_4_;
          auVar51._12_4_ = fVar49 - auVar38._12_4_;
          fVar71 = 3.4028235e+38;
          local_210 = auVar83._0_8_;
          uStack_208 = auVar83._8_8_;
          fVar15 = fVar13;
        }
      }
      uVar33 = local_b4;
      uVar6 = (ulong)local_b4;
      bVar5 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_150[uVar6 * 4 + 2] = fVar86;
      local_150[uVar6 * 4 + 3] = fVar49;
      local_150[uVar6 * 4] = fVar72;
      local_150[uVar6 * 4 + 1] = fVar48;
      *(long *)(local_150 + uVar6 * 4 + -0xe) = auVar38._8_8_;
      *(long *)(local_150 + uVar6 * 4 + -0x10) = auVar38._0_8_;
      *(long *)(local_b0 + uVar6 * 4 + -0x16) = auVar51._8_8_;
      *(long *)(local_b0 + uVar6 * 4 + -0x18) = auVar51._0_8_;
      if (bVar5) {
        auVar51 = FUN_00237120(local_110,local_150,&local_190,&local_b4);
      }
      else if (uVar33 == 2) {
        auVar51._4_4_ = local_110[1];
        auVar51._0_4_ = local_110[0];
        auVar51._8_4_ = (float)uStack_108;
        auVar51._12_4_ = uStack_108._4_4_;
        auVar3._4_4_ = fStack_fc;
        auVar3._0_4_ = local_100;
        auVar3._8_4_ = fStack_f8;
        auVar3._12_4_ = fStack_f4;
        auVar4._8_8_ = uStack_e8;
        auVar4._0_8_ = local_f0;
        fVar86 = (float)local_f0;
        auVar69._0_4_ = fVar86 - local_110[0];
        fVar72 = (float)((ulong)local_f0 >> 0x20);
        auVar69._4_4_ = fVar72 - local_110[1];
        fVar48 = (float)uStack_e8;
        auVar69._8_4_ = fVar48 - (float)uStack_108;
        fVar49 = (float)((ulong)uStack_e8 >> 0x20);
        auVar69._12_4_ = fVar49 - uStack_108._4_4_;
        auVar78._0_4_ = local_100 - local_110[0];
        auVar78._4_4_ = fStack_fc - local_110[1];
        auVar78._8_4_ = fStack_f8 - (float)uStack_108;
        auVar78._12_4_ = fStack_f4 - uStack_108._4_4_;
        auVar75 = NEON_ext(auVar78,auVar78,8,1);
        auVar84 = NEON_ext(auVar69,auVar69,8,1);
        fVar80 = auVar78._0_4_ * auVar69._4_4_ - auVar78._4_4_ * auVar69._0_4_;
        uVar74 = NEON_ext(CONCAT44(auVar78._4_4_ * auVar69._8_4_ - auVar78._8_4_ * auVar69._4_4_,
                                   fVar80),
                          CONCAT44(auVar75._4_4_ * auVar69._4_4_ - auVar78._4_4_ * auVar84._4_4_,
                                   auVar75._0_4_ * auVar69._0_4_ - auVar78._0_4_ * auVar84._0_4_),4,
                          1);
        fVar61 = (float)uVar74;
        auVar88._0_4_ = fVar61 * fVar61;
        fVar73 = (float)((ulong)uVar74 >> 0x20);
        auVar88._4_4_ = fVar73 * fVar73;
        auVar88._8_4_ = fVar80 * fVar80;
        auVar88._12_4_ = 0;
        auVar75 = NEON_ext(auVar88,auVar88,8,1);
        fVar30 = auVar75._0_4_ + auVar75._4_4_;
        fVar13 = auVar88._0_4_ + auVar88._4_4_ + fVar30;
        uVar74 = CONCAT44(auVar88._0_4_ + auVar88._4_4_ + fVar30,fVar13);
        local_b4 = 3;
        if (1.1920929e-07 < fVar13) {
          if (fVar13 != 0.0) {
            auVar75 = NEON_ext(auVar3,auVar3,8,1);
            auVar84 = NEON_ext(auVar4,auVar4,8,1);
            fVar81 = local_100 * fVar72 - fStack_fc * fVar86;
            auVar105 = NEON_ext(auVar51,auVar51,8,1);
            uVar87 = NEON_ext(CONCAT44(fStack_fc * fVar48 - fStack_f8 * fVar72,fVar81),
                              CONCAT44(auVar75._4_4_ * fVar72 - fStack_fc * auVar84._4_4_,
                                       auVar75._0_4_ * fVar86 - local_100 * auVar84._0_4_),4,1);
            fVar13 = local_110[1] * fVar86 - local_110[0] * fVar72;
            uVar106 = NEON_ext(CONCAT44((float)uStack_108 * fVar72 - local_110[1] * fVar48,fVar13),
                               CONCAT44(local_110[1] * auVar84._4_4_ - auVar105._4_4_ * fVar72,
                                        local_110[0] * auVar84._0_4_ - auVar105._0_4_ * fVar86),4,1)
            ;
            fVar30 = local_110[0] * fStack_fc - local_110[1] * local_100;
            uVar82 = NEON_ext(CONCAT44(local_110[1] * fStack_f8 - (float)uStack_108 * fStack_fc,
                                       fVar30),
                              CONCAT44(auVar105._4_4_ * fStack_fc - local_110[1] * auVar75._4_4_,
                                       auVar105._0_4_ * local_100 - local_110[0] * auVar75._0_4_),4,
                              1);
            auVar92._0_4_ = (float)uVar87 * fVar61;
            auVar92._4_4_ = (float)((ulong)uVar87 >> 0x20) * fVar73;
            auVar92._8_4_ = fVar81 * fVar80;
            auVar92._12_4_ = 0;
            auVar75 = NEON_ext(auVar92,auVar92,8,1);
            auVar98._0_4_ = (float)uVar106 * fVar61;
            auVar98._4_4_ = (float)((ulong)uVar106 >> 0x20) * fVar73;
            auVar98._8_4_ = fVar13 * fVar80;
            auVar98._12_4_ = 0;
            auVar84 = NEON_ext(auVar98,auVar98,8,1);
            fVar13 = auVar92._0_4_ + auVar92._4_4_ + auVar75._0_4_ + auVar75._4_4_;
            auVar102._0_4_ = (float)uVar82 * fVar61;
            auVar102._4_4_ = (float)((ulong)uVar82 >> 0x20) * fVar73;
            auVar102._8_4_ = fVar30 * fVar80;
            auVar102._12_4_ = 0;
            fVar30 = auVar98._0_4_ + auVar98._4_4_ + auVar84._0_4_ + auVar84._4_4_;
            auVar75 = NEON_ext(auVar102,auVar102,8,1);
            fVar81 = auVar102._0_4_ + auVar102._4_4_ + auVar75._0_4_ + auVar75._4_4_;
            bVar5 = (0.0 <= fVar13 && 0.0 <= fVar30) && 0.0 <= fVar81;
            auVar103._0_4_ = -(uint)bVar5;
            auVar103._4_4_ = -(uint)bVar5;
            auVar103._8_4_ = -(uint)bVar5;
            auVar103._12_4_ = -(uint)bVar5;
            NEON_ext(auVar103,auVar103,8,1);
            if (CONCAT13((char)auVar103._12_4_,
                         CONCAT12((char)auVar103._8_4_,
                                  CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_))) == -1) {
              auVar24._0_4_ = local_110[0] * fVar61;
              auVar24._4_4_ = local_110[1] * fVar73;
              auVar24._8_4_ = (float)uStack_108 * fVar80;
              auVar24._12_4_ = uStack_108._4_4_ * 0.0;
              auVar51 = NEON_ext(auVar24,auVar24,8,1);
              uVar82 = NEON_frecpe(uVar74,4);
              uVar87 = NEON_frecps(uVar74,uVar82,4);
              fVar13 = (float)uVar82 * (float)uVar87;
              fVar30 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
              uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
              fVar13 = fVar13 * (float)uVar82;
              fVar30 = fVar30 * (float)((ulong)uVar82 >> 0x20);
              uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
              fVar13 = fVar13 * (float)uVar82;
              fVar30 = fVar30 * (float)((ulong)uVar82 >> 0x20);
              uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
              fVar13 = fVar13 * (float)uVar82;
              uVar74 = NEON_frecps(uVar74,CONCAT44(fVar30 * (float)((ulong)uVar82 >> 0x20),fVar13),4
                                  );
              fVar13 = (auVar24._0_4_ + auVar24._4_4_ + auVar51._0_4_ + auVar51._4_4_) *
                       fVar13 * (float)uVar74;
              auVar51._0_4_ = fVar61 * fVar13;
              auVar51._4_4_ = fVar73 * fVar13;
              auVar51._8_4_ = fVar80 * fVar13;
              auVar51._12_4_ = 0.0;
            }
            else {
              auVar85._0_4_ = -local_110[0] * auVar78._0_4_;
              auVar85._4_4_ = -local_110[1] * auVar78._4_4_;
              auVar85._8_4_ = -(float)uStack_108 * auVar78._8_4_;
              auVar85._12_4_ = auVar78._12_4_ * 0.0;
              auVar75 = NEON_ext(auVar85,auVar85,8,1);
              fVar80 = auVar75._0_4_ + auVar75._4_4_;
              auVar89._0_4_ = -local_100 * auVar78._0_4_;
              auVar89._4_4_ = -fStack_fc * auVar78._4_4_;
              auVar89._8_4_ = -fStack_f8 * auVar78._8_4_;
              auVar89._12_4_ = auVar78._12_4_ * 0.0;
              auVar75 = NEON_ext(auVar89,auVar89,8,1);
              fVar16 = auVar75._0_4_ + auVar75._4_4_;
              fVar61 = auVar85._0_4_ + auVar85._4_4_ + fVar80;
              fVar73 = auVar89._0_4_ + auVar89._4_4_ + fVar16;
              fVar16 = auVar89._0_4_ + auVar89._4_4_ + fVar16;
              bVar5 = (0.0 <= fVar61 && fVar81 <= 0.0) && fVar73 <= 0.0;
              auVar99._0_4_ = -(uint)bVar5;
              auVar99._4_4_ = -(uint)bVar5;
              auVar99._8_4_ = -(uint)bVar5;
              auVar99._12_4_ = -(uint)bVar5;
              NEON_ext(auVar99,auVar99,8,1);
              if (CONCAT13((char)auVar99._12_4_,
                           CONCAT12((char)auVar99._8_4_,
                                    CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))) == -1) {
                uVar74 = CONCAT44((auVar85._0_4_ + auVar85._4_4_ + fVar80) - fVar16,fVar61 - fVar73)
                ;
                uVar82 = NEON_frecpe(uVar74,4);
                uVar87 = NEON_frecps(uVar74,uVar82,4);
                fVar13 = (float)uVar82 * (float)uVar87;
                fVar30 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
                fVar13 = fVar13 * (float)uVar82;
                fVar30 = fVar30 * (float)((ulong)uVar82 >> 0x20);
                uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
                fVar13 = fVar13 * (float)uVar82;
                fVar30 = fVar30 * (float)((ulong)uVar82 >> 0x20);
                uVar82 = NEON_frecps(uVar74,CONCAT44(fVar30,fVar13),4);
                fVar13 = fVar13 * (float)uVar82;
                uVar74 = NEON_frecps(uVar74,CONCAT44(fVar30 * (float)((ulong)uVar82 >> 0x20),fVar13)
                                     ,4);
                fVar61 = fVar61 * (float)(-(uint)(1.1920929e-07 < ABS(fVar61 - fVar73)) &
                                         (uint)(fVar13 * (float)uVar74));
                puVar7 = &local_190;
                pfVar8 = local_150;
                auVar25._0_8_ =
                     CONCAT44(local_110[1] + auVar78._4_4_ * fVar61,
                              local_110[0] + auVar78._0_4_ * fVar61);
                auVar25._8_4_ = (float)uStack_108 + auVar78._8_4_ * fVar61;
                auVar25._12_4_ = uStack_108._4_4_ + auVar78._12_4_ * fVar61;
                auVar51 = NEON_ext(auVar25,auVar25,8,1);
                pfVar9 = local_110;
                auVar51._8_4_ = (float)auVar51._0_4_;
                auVar51._0_8_ = auVar25._0_8_;
                auVar51._12_4_ = 0.0;
                local_b4 = 2;
LAB_002e1214:
                puVar10 = &local_180;
                pfVar11 = local_150 + 4;
                pfVar12 = &local_100;
              }
              else {
                auVar100._0_4_ = -local_100 * auVar69._0_4_;
                auVar100._4_4_ = -fStack_fc * auVar69._4_4_;
                auVar100._8_4_ = -fStack_f8 * auVar69._8_4_;
                auVar100._12_4_ = auVar69._12_4_ * 0.0;
                auVar75 = NEON_ext(auVar100,auVar100,8,1);
                fVar17 = auVar75._0_4_ + auVar75._4_4_;
                auVar79._0_4_ = auVar78._0_4_ * -fVar86;
                auVar79._4_4_ = auVar78._4_4_ * -fVar72;
                auVar79._8_4_ = auVar78._8_4_ * -fVar48;
                auVar79._12_4_ = auVar78._12_4_ * 0.0;
                auVar104._0_4_ = auVar69._0_4_ * -fVar86;
                auVar104._4_4_ = auVar69._4_4_ * -fVar72;
                auVar104._8_4_ = auVar69._8_4_ * -fVar48;
                auVar104._12_4_ = auVar69._12_4_ * 0.0;
                fVar80 = auVar100._0_4_ + auVar100._4_4_ + fVar17;
                auVar75 = NEON_ext(auVar79,auVar79,8,1);
                fVar18 = auVar75._0_4_ + auVar75._4_4_;
                fVar81 = auVar79._0_4_ + auVar79._4_4_ + fVar18;
                auVar75 = NEON_ext(auVar104,auVar104,8,1);
                fVar19 = auVar75._0_4_ + auVar75._4_4_;
                fVar14 = auVar104._0_4_ + auVar104._4_4_ + fVar19;
                fVar19 = auVar104._0_4_ + auVar104._4_4_ + fVar19;
                bVar5 = (fVar73 <= fVar80 && fVar13 <= 0.0) && fVar14 <= fVar81;
                auVar93._0_4_ = -(uint)bVar5;
                auVar93._4_4_ = -(uint)bVar5;
                auVar93._8_4_ = -(uint)bVar5;
                auVar93._12_4_ = -(uint)bVar5;
                NEON_ext(auVar93,auVar93,8,1);
                puVar10 = &local_170;
                pfVar11 = local_150 + 8;
                pfVar12 = (float *)&local_f0;
                if (CONCAT13((char)auVar93._12_4_,
                             CONCAT12((char)auVar93._8_4_,
                                      CONCAT11((char)auVar93._4_4_,(char)auVar93._0_4_))) == -1) {
                  local_b4 = 2;
                  fVar13 = (fVar80 - fVar73) + (fVar81 - fVar14);
                  uVar74 = CONCAT44(((auVar100._0_4_ + auVar100._4_4_ + fVar17) - fVar16) +
                                    ((auVar79._0_4_ + auVar79._4_4_ + fVar18) - fVar19),fVar13);
                  uVar82 = NEON_frecpe(uVar74,4);
                  uVar87 = NEON_frecps(uVar74,uVar82,4);
                  fVar30 = (float)uVar82 * (float)uVar87;
                  fVar61 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  fVar61 = fVar61 * (float)((ulong)uVar82 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  fVar61 = fVar61 * (float)((ulong)uVar82 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  uVar74 = NEON_frecps(uVar74,CONCAT44(fVar61 * (float)((ulong)uVar82 >> 0x20),
                                                       fVar30),4);
                  fVar13 = (fVar80 - fVar73) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) &
                                  (uint)(fVar30 * (float)uVar74));
                  auVar26._0_8_ =
                       CONCAT44(fStack_fc + (fVar72 - fStack_fc) * fVar13,
                                local_100 + (fVar86 - local_100) * fVar13);
                  auVar26._8_4_ = fStack_f8 + (fVar48 - fStack_f8) * fVar13;
                  auVar26._12_4_ = fStack_f4 + (fVar49 - fStack_f4) * fVar13;
                  auVar51 = NEON_ext(auVar26,auVar26,8,1);
                  auVar51._8_4_ = (float)auVar51._0_4_;
                  auVar51._0_8_ = auVar26._0_8_;
                  auVar51._12_4_ = 0.0;
                  puVar7 = &local_180;
                  pfVar8 = local_150 + 4;
                  pfVar9 = &local_100;
                }
                else {
                  auVar94._0_4_ = -local_110[0] * auVar69._0_4_;
                  auVar94._4_4_ = -local_110[1] * auVar69._4_4_;
                  auVar94._8_4_ = -(float)uStack_108 * auVar69._8_4_;
                  auVar94._12_4_ = auVar69._12_4_ * 0.0;
                  auVar75 = NEON_ext(auVar94,auVar94,8,1);
                  fVar86 = auVar75._0_4_ + auVar75._4_4_;
                  fVar13 = auVar94._0_4_ + auVar94._4_4_ + fVar86;
                  bVar5 = (fVar30 <= 0.0 && 0.0 <= fVar13) && fVar14 <= 0.0;
                  auVar91._0_4_ = -(uint)bVar5;
                  auVar91._4_4_ = -(uint)bVar5;
                  auVar91._8_4_ = -(uint)bVar5;
                  auVar91._12_4_ = -(uint)bVar5;
                  NEON_ext(auVar91,auVar91,8,1);
                  if (CONCAT13((char)auVar91._12_4_,
                               CONCAT12((char)auVar91._8_4_,
                                        CONCAT11((char)auVar91._4_4_,(char)auVar91._0_4_))) != -1) {
                    bVar5 = fVar61 <= 0.0 && fVar13 <= 0.0;
                    auVar70._0_4_ = -(uint)bVar5;
                    auVar70._4_4_ = -(uint)bVar5;
                    auVar70._8_4_ = -(uint)bVar5;
                    auVar70._12_4_ = -(uint)bVar5;
                    NEON_ext(auVar70,auVar70,8,1);
                    if (CONCAT13((char)auVar70._12_4_,
                                 CONCAT12((char)auVar70._8_4_,
                                          CONCAT11((char)auVar70._4_4_,(char)auVar70._0_4_))) == -1)
                    {
                      puVar7 = &local_190;
                      pfVar8 = local_150;
                      pfVar9 = local_110;
                    }
                    else {
                      bVar5 = 0.0 <= fVar73 && fVar80 <= fVar73;
                      auVar22._0_4_ = -(uint)bVar5;
                      auVar22._4_4_ = -(uint)bVar5;
                      auVar22._8_4_ = -(uint)bVar5;
                      auVar22._12_4_ = -(uint)bVar5;
                      NEON_ext(auVar22,auVar22,8,1);
                      iVar34 = CONCAT13((char)auVar22._12_4_,
                                        CONCAT12((char)auVar22._8_4_,
                                                 CONCAT11((char)auVar22._4_4_,(char)auVar22._0_4_)))
                      ;
                      iVar62 = -(uint)(iVar34 == -1);
                      auVar23._4_4_ = iVar62;
                      auVar23._0_4_ = iVar62;
                      auVar23._8_4_ = iVar62;
                      auVar23._12_4_ = iVar62;
                      lVar1 = 0x10;
                      if (iVar34 != -1) {
                        lVar1 = 0x20;
                      }
                      auVar51 = auVar4 ^ (auVar4 ^ auVar3) & auVar23;
                      pfVar9 = (float *)((long)local_b0 + lVar1 + -0x60);
                      pfVar8 = (float *)((long)local_150 + lVar1);
                      puVar7 = (undefined8 *)((long)local_150 + lVar1 + -0x40);
                    }
                    local_b4 = 1;
                    goto LAB_002e1214;
                  }
                  uVar74 = CONCAT44((auVar94._0_4_ + auVar94._4_4_ + fVar86) - fVar19,
                                    fVar13 - fVar14);
                  uVar82 = NEON_frecpe(uVar74,4);
                  uVar87 = NEON_frecps(uVar74,uVar82,4);
                  fVar30 = (float)uVar82 * (float)uVar87;
                  fVar86 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
                  uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
                  fVar30 = fVar30 * (float)uVar82;
                  uVar74 = NEON_frecps(uVar74,CONCAT44(fVar86 * (float)((ulong)uVar82 >> 0x20),
                                                       fVar30),4);
                  fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar14)) &
                                           (uint)(fVar30 * (float)uVar74));
                  auVar27._0_8_ =
                       CONCAT44(local_110[1] + auVar69._4_4_ * fVar13,
                                local_110[0] + auVar69._0_4_ * fVar13);
                  auVar27._8_4_ = (float)uStack_108 + auVar69._8_4_ * fVar13;
                  auVar27._12_4_ = uStack_108._4_4_ + auVar69._12_4_ * fVar13;
                  auVar51 = NEON_ext(auVar27,auVar27,8,1);
                  auVar51._8_4_ = (float)auVar51._0_4_;
                  auVar51._0_8_ = auVar27._0_8_;
                  auVar51._12_4_ = 0.0;
                  local_b4 = 2;
                  puVar7 = &local_190;
                  pfVar8 = local_150;
                  pfVar9 = local_110;
                }
              }
              uStack_108._0_4_ = (float)*(undefined8 *)(pfVar9 + 2);
              uStack_108._4_4_ = (float)((ulong)*(undefined8 *)(pfVar9 + 2) >> 0x20);
              local_110[0] = (float)*(undefined8 *)pfVar9;
              local_110[1] = (float)((ulong)*(undefined8 *)pfVar9 >> 0x20);
              fStack_f8 = (float)*(undefined8 *)(pfVar12 + 2);
              fStack_f4 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
              local_100 = (float)*(undefined8 *)pfVar12;
              fStack_fc = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              local_180 = *puVar10;
              uStack_178 = puVar10[1];
              local_150[2] = (float)*(undefined8 *)(pfVar8 + 2);
              local_150[3] = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
              local_150[0] = (float)*(undefined8 *)pfVar8;
              local_150[1] = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
              fStack_138 = (float)*(undefined8 *)(pfVar11 + 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
              local_140 = (float)*(undefined8 *)pfVar11;
              fStack_13c = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
              local_190 = *puVar7;
              uStack_188 = puVar7[1];
            }
          }
        }
        else {
          auVar40._0_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar40._4_4_ = auVar78._4_4_ * auVar78._4_4_;
          auVar40._8_4_ = auVar78._8_4_ * auVar78._8_4_;
          auVar40._12_4_ = auVar78._12_4_ * auVar78._12_4_;
          auVar75 = NEON_ext(auVar40,auVar40,8,1);
          fVar30 = auVar75._0_4_ + auVar75._4_4_;
          fVar13 = auVar40._0_4_ + auVar40._4_4_ + fVar30;
          uVar74 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar30,fVar13);
          bVar5 = fVar13 <= 1.1920929e-07;
          auVar56._0_4_ = -(uint)bVar5;
          auVar56._4_4_ = -(uint)bVar5;
          auVar56._8_4_ = -(uint)bVar5;
          auVar56._12_4_ = -(uint)bVar5;
          NEON_ext(auVar56,auVar56,8,1);
          local_b4 = 2;
          if (CONCAT13((char)auVar56._12_4_,
                       CONCAT12((char)auVar56._8_4_,
                                CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_))) != -1) {
            auVar57._0_4_ = -local_110[0] * auVar78._0_4_;
            auVar57._4_4_ = -local_110[1] * auVar78._4_4_;
            auVar57._8_4_ = -(float)uStack_108 * auVar78._8_4_;
            auVar57._12_4_ = auVar78._12_4_ * 0.0;
            auVar75 = NEON_ext(auVar57,auVar57,8,1);
            fVar13 = auVar75._0_4_ + auVar75._4_4_;
            uVar82 = NEON_frecpe(uVar74,4);
            uVar87 = NEON_frecps(uVar74,uVar82,4);
            fVar30 = (float)uVar82 * (float)uVar87;
            fVar86 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
            uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
            fVar30 = fVar30 * (float)uVar82;
            fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
            uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
            fVar30 = fVar30 * (float)uVar82;
            fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
            uVar82 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
            fVar30 = fVar30 * (float)uVar82;
            fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
            uVar74 = NEON_frecps(uVar74,CONCAT44(fVar86,fVar30),4);
            uVar82 = NEON_fmov(0x3f800000,4);
            uVar74 = NEON_fmin(CONCAT44((auVar57._0_4_ + auVar57._4_4_ + fVar13) *
                                        fVar86 * (float)((ulong)uVar74 >> 0x20),
                                        (auVar57._0_4_ + auVar57._4_4_ + fVar13) *
                                        fVar30 * (float)uVar74),uVar82,4);
            uVar74 = NEON_fmax(uVar74,0,4);
            fVar13 = (float)uVar74;
            fVar30 = auVar78._0_4_ * fVar13;
            fVar86 = auVar78._4_4_ * fVar13;
            fVar72 = auVar78._8_4_ * fVar13;
            fVar13 = auVar78._12_4_ * fVar13;
            goto LAB_002e0d90;
          }
LAB_002e0da4:
          local_b4 = 1;
        }
      }
      else if (uVar33 == 1) {
        auVar51._4_4_ = local_110[1];
        auVar51._0_4_ = local_110[0];
        auVar51._8_4_ = (float)uStack_108;
        auVar51._12_4_ = uStack_108._4_4_;
        fVar30 = local_100 - local_110[0];
        fVar86 = fStack_fc - local_110[1];
        fVar72 = fStack_f8 - (float)uStack_108;
        fVar13 = fStack_f4 - uStack_108._4_4_;
        auVar55._0_4_ = fVar30 * fVar30;
        auVar55._4_4_ = fVar86 * fVar86;
        auVar55._8_4_ = fVar72 * fVar72;
        auVar55._12_4_ = fVar13 * fVar13;
        auVar75 = NEON_ext(auVar55,auVar55,8,1);
        fVar49 = auVar75._0_4_ + auVar75._4_4_;
        fVar48 = auVar55._0_4_ + auVar55._4_4_ + fVar49;
        uVar74 = CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar49,fVar48);
        bVar5 = fVar48 <= 1.1920929e-07;
        auVar67._0_4_ = -(uint)bVar5;
        auVar67._4_4_ = -(uint)bVar5;
        auVar67._8_4_ = -(uint)bVar5;
        auVar67._12_4_ = -(uint)bVar5;
        NEON_ext(auVar67,auVar67,8,1);
        if (CONCAT13((char)auVar67._12_4_,
                     CONCAT12((char)auVar67._8_4_,CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))
                    ) == -1) goto LAB_002e0da4;
        auVar68._0_4_ = -local_110[0] * fVar30;
        auVar68._4_4_ = -local_110[1] * fVar86;
        auVar68._8_4_ = -(float)uStack_108 * fVar72;
        auVar68._12_4_ = fVar13 * 0.0;
        auVar75 = NEON_ext(auVar68,auVar68,8,1);
        fVar48 = auVar75._0_4_ + auVar75._4_4_;
        uVar82 = NEON_frecpe(uVar74,4);
        uVar87 = NEON_frecps(uVar74,uVar82,4);
        fVar49 = (float)uVar82 * (float)uVar87;
        fVar61 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar49),4);
        fVar49 = fVar49 * (float)uVar82;
        fVar61 = fVar61 * (float)((ulong)uVar82 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar49),4);
        fVar49 = fVar49 * (float)uVar82;
        fVar61 = fVar61 * (float)((ulong)uVar82 >> 0x20);
        uVar82 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar49),4);
        fVar49 = fVar49 * (float)uVar82;
        fVar61 = fVar61 * (float)((ulong)uVar82 >> 0x20);
        uVar74 = NEON_frecps(uVar74,CONCAT44(fVar61,fVar49),4);
        uVar82 = NEON_fmov(0x3f800000,4);
        uVar74 = NEON_fmin(CONCAT44((auVar68._0_4_ + auVar68._4_4_ + fVar48) *
                                    fVar61 * (float)((ulong)uVar74 >> 0x20),
                                    (auVar68._0_4_ + auVar68._4_4_ + fVar48) *
                                    fVar49 * (float)uVar74),uVar82,4);
        uVar74 = NEON_fmax(uVar74,0,4);
        fVar48 = (float)uVar74;
        fVar30 = fVar30 * fVar48;
        fVar86 = fVar86 * fVar48;
        fVar72 = fVar72 * fVar48;
        fVar13 = fVar13 * fVar48;
LAB_002e0d90:
        auVar21._0_8_ = CONCAT44(auVar51._4_4_ + fVar86,auVar51._0_4_ + fVar30);
        auVar21._8_4_ = auVar51._8_4_ + fVar72;
        auVar21._12_4_ = auVar51._12_4_ + fVar13;
        auVar51 = NEON_ext(auVar21,auVar21,8,1);
        auVar51._8_4_ = (float)auVar51._0_4_;
        auVar51._0_8_ = auVar21._0_8_;
        auVar51._12_4_ = 0.0;
      }
      fVar30 = auVar51._0_4_;
      auVar41._0_4_ = fVar30 * fVar30;
      fVar86 = auVar51._4_4_;
      auVar41._4_4_ = fVar86 * fVar86;
      fVar72 = auVar51._8_4_;
      auVar41._8_4_ = fVar72 * fVar72;
      auVar41._12_4_ = auVar51._12_4_ * auVar51._12_4_;
      auVar75 = NEON_ext(auVar41,auVar41,8,1);
      fVar13 = auVar41._0_4_ + auVar41._4_4_ + auVar75._0_4_ + auVar75._4_4_;
      iVar34 = -(uint)(fVar13 < fVar71);
      bVar5 = fVar60 * fVar60 < fVar13 && fVar13 < fVar71;
      auVar58._0_4_ = -(uint)bVar5;
      auVar58._4_4_ = -(uint)bVar5;
      auVar58._8_4_ = -(uint)bVar5;
      auVar58._12_4_ = -(uint)bVar5;
      NEON_ext(auVar58,auVar58,8,1);
      auVar83._0_4_ = -fVar30;
      auVar83._4_4_ = -fVar86;
      auVar83._8_4_ = -fVar72;
      auVar83._12_4_ = 0;
    } while (CONCAT13((char)auVar58._12_4_,
                      CONCAT12((char)auVar58._8_4_,CONCAT11((char)auVar58._4_4_,(char)auVar58._0_4_)
                              )) == -1);
    auVar43._8_8_ = uStack_208;
    auVar43._0_8_ = local_210;
    auVar97._4_4_ = iVar34;
    auVar97._0_4_ = iVar34;
    auVar97._8_4_ = iVar34;
    auVar97._12_4_ = iVar34;
  }
  else {
    auVar43._8_4_ = auVar83._8_4_;
    auVar43._0_8_ = auVar83._0_8_;
    auVar43._12_4_ = 0;
    auVar101._8_8_ = auVar51._8_8_;
    auVar101._0_8_ = auVar51._0_8_;
  }
  auVar96 = ZEXT816(0);
  iVar34 = -(uint)(fVar31 * fVar31 < fVar13);
  bVar32 = (byte)iVar34;
  auVar42[0] = bVar32 & auVar97[0];
  bVar45 = (byte)((uint)iVar34 >> 8);
  auVar42[1] = bVar45 & auVar97[1];
  bVar46 = (byte)((uint)iVar34 >> 0x10);
  auVar42[2] = bVar46 & auVar97[2];
  bVar47 = (byte)((uint)iVar34 >> 0x18);
  auVar42[3] = bVar47 & auVar97[3];
  auVar42[4] = bVar32 & auVar97[4];
  auVar42[5] = bVar45 & auVar97[5];
  auVar42[6] = bVar46 & auVar97[6];
  auVar42[7] = bVar47 & auVar97[7];
  auVar42[8] = bVar32 & auVar97[8];
  auVar42[9] = bVar45 & auVar97[9];
  auVar42[10] = bVar46 & auVar97[10];
  auVar42[0xb] = bVar47 & auVar97[0xb];
  auVar42[0xc] = bVar32 & auVar97[0xc];
  auVar42[0xd] = bVar45 & auVar97[0xd];
  auVar42[0xe] = bVar46 & auVar97[0xe];
  auVar42[0xf] = bVar47 & auVar97[0xf];
  auVar101 = auVar101 ^ (auVar101 ^ auVar51) & auVar97;
  auVar43 = auVar43 ^ (auVar43 ^ auVar83) & auVar42;
  fVar60 = auVar43._0_4_;
  auVar59._0_4_ = fVar60 * fVar60;
  fVar71 = auVar43._4_4_;
  auVar59._4_4_ = fVar71 * fVar71;
  fVar30 = auVar43._8_4_;
  auVar59._8_4_ = fVar30 * fVar30;
  auVar59._12_4_ = auVar43._12_4_ * auVar43._12_4_;
  auVar51 = NEON_ext(auVar59,auVar59,8,1);
  fVar15 = auVar51._0_4_ + auVar51._4_4_;
  fVar13 = auVar59._0_4_ + auVar59._4_4_ + fVar15;
  fVar15 = auVar59._0_4_ + auVar59._4_4_ + fVar15;
  uVar6 = CONCAT44(fVar15,fVar13);
  uVar74 = NEON_frsqrte(uVar6,4);
  fVar31 = (float)uVar74;
  fVar86 = (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar31 * fVar31),uVar6,4);
  fVar31 = fVar31 * (float)uVar74;
  fVar86 = fVar86 * (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar31 * fVar31),uVar6,4);
  fVar31 = fVar31 * (float)uVar74;
  fVar86 = fVar86 * (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar31 * fVar31),uVar6,4);
  fVar31 = fVar31 * (float)uVar74;
  fVar86 = fVar86 * (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar31 * fVar31),uVar6,4);
  uVar50 = CONCAT44(fVar15 * fVar86 * (float)((ulong)uVar74 >> 0x20),fVar13 * fVar31 * (float)uVar74
                   );
  uVar50 = uVar50 ^ (uVar50 ^ uVar6) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar74 = NEON_frecpe(uVar50,4);
  uVar82 = NEON_frecps(uVar50,uVar74,4);
  fVar13 = (float)uVar74 * (float)uVar82;
  fVar15 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
  uVar74 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar74;
  fVar15 = fVar15 * (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar74;
  fVar15 = fVar15 * (float)((ulong)uVar74 >> 0x20);
  uVar74 = NEON_frecps(uVar50,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar74;
  iVar34 = -(uint)(0.0 < (float)uVar50);
  uVar74 = NEON_frecps(uVar50,CONCAT44(fVar15 * (float)((ulong)uVar74 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar74;
  fVar60 = fVar60 * fVar13;
  fVar71 = fVar71 * fVar13;
  fVar30 = fVar30 * fVar13;
  bVar32 = (byte)iVar34;
  bVar45 = (byte)((uint)iVar34 >> 8);
  bVar46 = (byte)((uint)iVar34 >> 0x10);
  bVar47 = (byte)((uint)iVar34 >> 0x18);
  fVar13 = (float)CONCAT13(bVar47 & (byte)((uint)fVar60 >> 0x18),
                           CONCAT12(bVar46 & (byte)((uint)fVar60 >> 0x10),
                                    CONCAT11(bVar45 & (byte)((uint)fVar60 >> 8),
                                             bVar32 & SUB41(fVar60,0))));
  auVar35._0_8_ =
       CONCAT17(bVar47 & (byte)((uint)fVar71 >> 0x18),
                CONCAT16(bVar46 & (byte)((uint)fVar71 >> 0x10),
                         CONCAT15(bVar45 & (byte)((uint)fVar71 >> 8),
                                  CONCAT14(bVar32 & SUB41(fVar71,0),fVar13))));
  auVar35[8] = bVar32 & SUB41(fVar30,0);
  auVar35[9] = bVar45 & (byte)((uint)fVar30 >> 8);
  auVar35[10] = bVar46 & (byte)((uint)fVar30 >> 0x10);
  auVar35[0xb] = bVar47 & (byte)((uint)fVar30 >> 0x18);
  fVar13 = -fVar13;
  fVar15 = -(float)((ulong)auVar35._0_8_ >> 0x20);
  auVar44._0_8_ = CONCAT44(fVar15,fVar13);
  auVar44._8_4_ = -auVar35._8_4_;
  iVar34 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar44._12_4_ = 0;
  auVar95._4_4_ = iVar34;
  auVar95._0_4_ = iVar34;
  auVar95._8_4_ = iVar34;
  auVar95._12_4_ = iVar34;
  param_9[1] = (ulong)(uint)auVar44._8_4_;
  *param_9 = auVar44._0_8_;
  *param_8 = uVar64;
  uStack_198 = auVar101._8_8_;
  local_1a0 = auVar101._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_1a0,local_110,&local_100,&local_f0,local_b0 + 2,local_b0);
    auVar96._0_4_ =
         local_150[0] +
         (local_140 - local_150[0]) * local_b0[2] + (local_130 - local_150[0]) * local_b0[0];
    auVar96._4_4_ =
         local_150[1] +
         (fStack_13c - local_150[1]) * local_b0[2] + (fStack_12c - local_150[1]) * local_b0[0];
    auVar96._8_4_ =
         local_150[2] +
         (fStack_138 - local_150[2]) * local_b0[2] + (fStack_128 - local_150[2]) * local_b0[0];
    auVar96._12_4_ = local_150[3] + 0.0;
    auVar44._4_4_ = fVar15;
    auVar44._0_4_ = fVar13;
    auVar44._12_4_ = 0;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_1a0,local_110,&local_100,local_b0 + 2);
    auVar90._0_8_ =
         CONCAT44(local_150[1] + (fStack_13c - local_150[1]) * local_b0[2],
                  local_150[0] + (local_140 - local_150[0]) * local_b0[2]);
    auVar90._8_4_ = local_150[2] + (fStack_138 - local_150[2]) * local_b0[2];
    auVar90._12_4_ = local_150[3] + (fStack_134 - local_150[3]) * local_b0[2];
    auVar51 = NEON_ext(auVar90,auVar90,8,1);
    auVar44._4_4_ = fVar15;
    auVar44._0_4_ = fVar13;
    auVar44._12_4_ = 0;
    auVar96._8_4_ = (float)auVar51._0_4_;
    auVar96._0_8_ = auVar90._0_8_;
    auVar96._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar96._4_4_ = local_150[1];
    auVar96._0_4_ = local_150[0];
    auVar96._8_4_ = local_150[2];
    auVar96._12_4_ = local_150[3];
  }
  fVar13 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar28._0_8_ =
       CONCAT44(auVar96._4_4_ - auVar44._4_4_ * fVar13,auVar96._0_4_ - auVar44._0_4_ * fVar13);
  auVar28._8_4_ = auVar96._8_4_ - auVar44._8_4_ * fVar13;
  auVar28._12_4_ = auVar96._12_4_ - auVar44._12_4_ * fVar13;
  auVar51 = NEON_ext(auVar28,auVar28,8,1);
  auVar29._8_4_ = auVar51._0_4_;
  auVar29._0_8_ = auVar28._0_8_;
  auVar29._12_4_ = 0;
  auVar96 = auVar96 ^ (auVar96 ^ auVar29) & auVar95;
  param_10[1] = auVar96._8_8_;
  *param_10 = auVar96._0_8_;
  return 1;
}


