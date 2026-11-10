/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e47c0; name: FUN_002e47c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e47c0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 *puVar8;
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
  float extraout_var;
  float fVar32;
  float extraout_var_02;
  float extraout_var_05;
  undefined1 auVar20 [16];
  float extraout_s0_01;
  float extraout_var_00;
  float extraout_var_03;
  float extraout_var_06;
  undefined1 auVar21 [16];
  float extraout_var_01;
  float extraout_var_04;
  float extraout_var_07;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar33;
  float fVar43;
  undefined1 auVar35 [16];
  float fVar34;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar44;
  float fVar45;
  ulong uVar47;
  undefined1 auVar48 [12];
  byte bVar59;
  byte bVar60;
  undefined1 auVar49 [16];
  float fVar62;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar63;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar46;
  byte bVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar64;
  float fVar65;
  float fVar66;
  int iVar67;
  undefined8 uVar68;
  float fVar76;
  undefined8 uVar69;
  float fVar78;
  undefined1 auVar70 [16];
  float fVar77;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
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
  undefined8 uVar101;
  undefined8 uVar102;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  
  uVar102 = *(undefined8 *)*param_7;
  uVar82 = *(undefined8 *)(*param_7 + 8);
  local_b4 = 1;
  fStack_1d8 = (float)*(undefined8 *)(param_6 + 2);
  fStack_1d4 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
  local_1e0 = (float)*(undefined8 *)param_6;
  fStack_1dc = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar13 = *param_4;
  fVar15 = param_4[1];
  fVar45 = param_4[2];
  fVar64 = param_4[3];
  auVar35._0_4_ = fVar13 * fVar13;
  auVar35._4_4_ = fVar15 * fVar15;
  auVar35._8_4_ = fVar45 * fVar45;
  auVar35._12_4_ = fVar64 * fVar64;
  auVar49 = NEON_ext(auVar35,auVar35,8,1);
  uVar33 = -(uint)(1.1920929e-07 < auVar35._0_4_ + auVar35._4_4_ + auVar49._0_4_ + auVar49._4_4_);
  fVar62 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar13) & uVar33);
  fVar32 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar15) & uVar33);
  fVar45 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar45) & uVar33);
  fVar13 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar64) & uVar33);
  auVar50._0_4_ = fVar62 * fVar62;
  auVar50._4_4_ = fVar32 * fVar32;
  auVar50._8_4_ = fVar45 * fVar45;
  auVar50._12_4_ = fVar13 * fVar13;
  auVar49 = NEON_ext(auVar50,auVar50,8,1);
  fVar15 = auVar49._0_4_ + auVar49._4_4_;
  fVar13 = auVar50._0_4_ + auVar50._4_4_ + fVar15;
  fVar15 = auVar50._0_4_ + auVar50._4_4_ + fVar15;
  uVar7 = CONCAT44(fVar15,fVar13);
  uVar68 = NEON_frsqrte(uVar7,4);
  fVar64 = (float)uVar68;
  fVar76 = (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar64 * fVar64),uVar7,4);
  fVar64 = fVar64 * (float)uVar68;
  fVar76 = fVar76 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar64 * fVar64),uVar7,4);
  fVar64 = fVar64 * (float)uVar68;
  fVar76 = fVar76 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar64 * fVar64),uVar7,4);
  fVar64 = fVar64 * (float)uVar68;
  fVar76 = fVar76 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar64 * fVar64),uVar7,4);
  uVar47 = CONCAT44(fVar15 * fVar76 * (float)((ulong)uVar68 >> 0x20),fVar13 * fVar64 * (float)uVar68
                   );
  uVar47 = uVar47 ^ (uVar47 ^ uVar7) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar68 = NEON_frecpe(uVar47,4);
  uVar69 = NEON_frecps(uVar47,uVar68,4);
  fVar13 = (float)uVar68 * (float)uVar69;
  fVar15 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
  uVar68 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar68;
  fVar15 = fVar15 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar68;
  fVar15 = fVar15 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar68;
  uVar68 = NEON_frecps(uVar47,CONCAT44(fVar15 * (float)((ulong)uVar68 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar68;
  local_d0 = CONCAT44(fVar32 * fVar13,fVar62 * fVar13);
  uStack_c8 = (ulong)(uint)(fVar45 * fVar13);
  fVar15 = -(fVar62 * fVar13);
  fVar64 = -(fVar32 * fVar13);
  fVar32 = -(fVar45 * fVar13);
  lVar5 = *(long *)(param_2 + 8);
  pfVar6 = *(float **)(param_2 + 0x10);
  fVar13 = *(float *)(lVar5 + 0x10);
  auVar49 = *(undefined1 (*) [16])(pfVar6 + 8);
  auVar42 = *(undefined1 (*) [16])(pfVar6 + 0xc);
  fVar34 = *(float *)(lVar5 + 0x30) - fVar13;
  fVar43 = *(float *)(lVar5 + 0x34) - fVar13;
  fVar13 = *(float *)(lVar5 + 0x38) - fVar13;
  fVar45 = -fVar34;
  fVar62 = -fVar43;
  fVar76 = -fVar13;
  fVar45 = (float)((uint)fVar45 ^
                  ((uint)fVar45 ^ (uint)fVar34) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar32 +
                                *(float *)(param_2 + 0x20) * fVar15 +
                                *(float *)(param_2 + 0x30) * fVar64));
  fVar62 = (float)((uint)fVar62 ^
                  ((uint)fVar62 ^ (uint)fVar43) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar32 +
                                *(float *)(param_2 + 0x24) * fVar15 +
                                *(float *)(param_2 + 0x34) * fVar64));
  fVar76 = (float)((uint)fVar76 ^
                  ((uint)fVar76 ^ (uint)fVar13) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar32 +
                                *(float *)(param_2 + 0x28) * fVar15 +
                                *(float *)(param_2 + 0x38) * fVar64));
  fVar15 = auVar42._0_4_ + auVar49._0_4_ * fVar76 + *pfVar6 * fVar45 + pfVar6[4] * fVar62;
  fVar64 = auVar42._4_4_ + auVar49._4_4_ * fVar76 + pfVar6[1] * fVar45 + pfVar6[5] * fVar62;
  fVar62 = auVar42._8_4_ + auVar49._8_4_ * fVar76 + pfVar6[2] * fVar45 + pfVar6[6] * fVar62;
  fVar32 = auVar42._12_4_ + 0.0;
  FUN_00261680(param_3,&local_d0);
  local_110[0] = fVar15 - extraout_s0;
  local_110[1] = fVar64 - extraout_var;
  auVar42._0_8_ = CONCAT44(local_110[1],local_110[0]);
  auVar42._8_4_ = fVar62 - extraout_var_02;
  auVar42._12_4_ = fVar32 - extraout_var_05;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  fStack_138 = 0.0;
  fStack_134 = 0.0;
  local_140 = 0.0;
  fStack_13c = 0.0;
  fVar13 = -local_110[0];
  fVar76 = -local_110[1];
  auVar49._0_8_ = CONCAT44(fVar76,fVar13);
  auVar49._8_4_ = -auVar42._8_4_;
  auVar49._12_4_ = 0;
  uStack_1e8 = auVar42._8_8_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
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
  lVar5 = *(long *)(param_2 + 8);
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x18);
  uVar68 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x18)),
                     CONCAT44(uVar1,uVar1),4);
  fVar45 = (float)uVar68 * 0.1;
  auVar36._0_4_ = fVar13 * fVar13;
  auVar36._4_4_ = fVar76 * fVar76;
  auVar36._8_4_ = auVar49._8_4_ * auVar49._8_4_;
  auVar36._12_4_ = 0;
  auVar50 = NEON_ext(auVar36,auVar36,8,1);
  fVar13 = auVar36._0_4_ + auVar36._4_4_ + auVar50._0_4_ + auVar50._4_4_;
  bVar4 = fVar45 * fVar45 < fVar13;
  auVar37._8_8_ = 0xffffffffffffffff;
  auVar37._0_8_ = 0xffffffffffffffff;
  auVar51._0_4_ = -(uint)bVar4;
  auVar51._4_4_ = -(uint)bVar4;
  auVar51._8_4_ = -(uint)bVar4;
  auVar51._12_4_ = -(uint)bVar4;
  NEON_ext(auVar51,auVar51,8,1);
  uStack_208 = (ulong)(uint)auVar49._8_4_;
  local_150[0] = fVar15;
  local_150[1] = fVar64;
  local_150[2] = fVar62;
  local_150[3] = fVar32;
  uStack_108._0_4_ = auVar42._8_4_;
  uStack_108._4_4_ = auVar42._12_4_;
  if (CONCAT13((char)auVar51._12_4_,
               CONCAT12((char)auVar51._8_4_,CONCAT11((char)auVar51._4_4_,(char)auVar51._0_4_))) ==
      -1) {
    local_1d0._0_4_ = (float)uVar102;
    local_1d0._4_4_ = (float)((ulong)uVar102 >> 0x20);
    fStack_1c8 = (float)uVar82;
    fStack_1c4 = (float)((ulong)uVar82 >> 0x20);
    auVar70._0_8_ = CONCAT44(local_1d0._4_4_ * 0.0 + fStack_1dc,(float)local_1d0 * 0.0 + local_1e0);
    auVar70._8_4_ = fStack_1c8 * 0.0 + fStack_1d8;
    auVar70._12_4_ = fStack_1c4 * 0.0 + fStack_1d4;
    auVar50 = NEON_ext(auVar70,auVar70,8,1);
    fVar64 = param_1 + fVar45;
    fVar15 = auVar50._0_4_;
    uVar102 = 0;
    auVar83._8_4_ = auVar49._8_4_;
    auVar83._0_8_ = auVar49._0_8_;
    auVar83._12_4_ = 0;
    local_210 = auVar49._0_8_;
    local_1f0 = auVar42._0_8_;
    local_1d0 = auVar70._0_8_;
    do {
      fVar65 = auVar83._0_4_;
      auVar20._0_4_ = fVar65 * fVar65;
      fVar77 = auVar83._4_4_;
      auVar20._4_4_ = fVar77 * fVar77;
      fVar78 = auVar83._8_4_;
      auVar20._8_4_ = fVar78 * fVar78;
      auVar20._12_4_ = auVar83._12_4_ * auVar83._12_4_;
      auVar49 = NEON_ext(auVar20,auVar20,8,1);
      fVar32 = auVar49._0_4_ + auVar49._4_4_;
      fVar62 = auVar20._0_4_ + auVar20._4_4_ + fVar32;
      fVar32 = auVar20._0_4_ + auVar20._4_4_ + fVar32;
      uVar7 = CONCAT44(fVar32,fVar62);
      uVar82 = NEON_frsqrte(uVar7,4);
      fVar76 = (float)uVar82;
      fVar34 = (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar76 * fVar76),uVar7,4);
      fVar76 = fVar76 * (float)uVar82;
      fVar34 = fVar34 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar76 * fVar76),uVar7,4);
      fVar76 = fVar76 * (float)uVar82;
      fVar34 = fVar34 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar76 * fVar76),uVar7,4);
      fVar76 = fVar76 * (float)uVar82;
      fVar34 = fVar34 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar76 * fVar76),uVar7,4);
      uVar47 = CONCAT44(fVar32 * fVar34 * (float)((ulong)uVar82 >> 0x20),
                        fVar62 * fVar76 * (float)uVar82);
      uVar47 = uVar47 ^ (uVar47 ^ uVar7) & CONCAT44(-(uint)(fVar62 == 0.0),-(uint)(fVar62 == 0.0));
      uVar82 = NEON_frecpe(uVar47,4);
      uVar69 = NEON_frecps(uVar47,uVar82,4);
      fVar62 = (float)uVar82 * (float)uVar69;
      fVar32 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
      uVar82 = NEON_frecps(uVar47,CONCAT44(fVar32,fVar62),4);
      fVar62 = fVar62 * (float)uVar82;
      fVar32 = fVar32 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frecps(uVar47,CONCAT44(fVar32,fVar62),4);
      fVar62 = fVar62 * (float)uVar82;
      fVar32 = fVar32 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frecps(uVar47,CONCAT44(fVar32,fVar62),4);
      fVar62 = fVar62 * (float)uVar82;
      uVar82 = NEON_frecps(uVar47,CONCAT44(fVar32 * (float)((ulong)uVar82 >> 0x20),fVar62),4);
      fVar62 = fVar62 * (float)uVar82;
      fVar65 = fVar65 * fVar62;
      fVar77 = fVar77 * fVar62;
      fVar78 = fVar78 * fVar62;
      local_1a0 = CONCAT44(-fVar77,-fVar65);
      uStack_198 = (ulong)(uint)-fVar78;
      fVar62 = *(float *)(lVar5 + 0x10);
      pfVar6 = *(float **)(param_2 + 0x10);
      fVar76 = *(float *)(lVar5 + 0x30) - fVar62;
      fVar43 = *(float *)(lVar5 + 0x34) - fVar62;
      fVar62 = *(float *)(lVar5 + 0x38) - fVar62;
      auVar49 = *(undefined1 (*) [16])(pfVar6 + 8);
      auVar42 = *(undefined1 (*) [16])(pfVar6 + 0xc);
      fVar32 = -fVar76;
      fVar34 = -fVar43;
      fVar63 = -fVar62;
      fVar32 = (float)((uint)fVar32 ^
                      ((uint)fVar32 ^ (uint)fVar76) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x20) * fVar65 +
                                    *(float *)(param_2 + 0x30) * fVar77 +
                                    *(float *)(param_2 + 0x40) * fVar78));
      fVar34 = (float)((uint)fVar34 ^
                      ((uint)fVar34 ^ (uint)fVar43) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x24) * fVar65 +
                                    *(float *)(param_2 + 0x34) * fVar77 +
                                    *(float *)(param_2 + 0x44) * fVar78));
      fVar63 = (float)((uint)fVar63 ^
                      ((uint)fVar63 ^ (uint)fVar62) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x28) * fVar65 +
                                    *(float *)(param_2 + 0x38) * fVar77 +
                                    *(float *)(param_2 + 0x48) * fVar78));
      fVar76 = auVar42._0_4_ + auVar49._0_4_ * fVar63 + *pfVar6 * fVar32 + pfVar6[4] * fVar34;
      fVar43 = auVar42._4_4_ + auVar49._4_4_ * fVar63 + pfVar6[1] * fVar32 + pfVar6[5] * fVar34;
      fVar34 = auVar42._8_4_ + auVar49._8_4_ * fVar63 + pfVar6[2] * fVar32 + pfVar6[6] * fVar34;
      fVar63 = auVar42._12_4_ + 0.0;
      FUN_00261680(param_3,&local_1a0);
      auVar38._0_4_ = (float)local_1d0 + extraout_s0_00;
      auVar38._4_4_ = local_1d0._4_4_ + extraout_var_00;
      auVar38._8_4_ = fVar15 + extraout_var_03;
      auVar38._12_4_ = extraout_var_06 + 0.0;
      auVar25._0_4_ = fVar76 - auVar38._0_4_;
      auVar25._4_4_ = fVar43 - auVar38._4_4_;
      auVar25._8_4_ = fVar34 - auVar38._8_4_;
      auVar25._12_4_ = fVar63 - auVar38._12_4_;
      auVar52._0_4_ = fVar65 * -auVar25._0_4_;
      auVar52._4_4_ = fVar77 * -auVar25._4_4_;
      auVar52._8_4_ = fVar78 * -auVar25._8_4_;
      auVar52._12_4_ = 0;
      auVar49 = NEON_ext(auVar52,auVar52,8,1);
      fVar32 = auVar49._0_4_ + auVar49._4_4_;
      fVar66 = (auVar52._0_4_ + auVar52._4_4_ + fVar32) - fVar64;
      fVar62 = fVar13;
      if (0.0 < fVar66) {
        auVar49 = *param_7;
        auVar79._0_4_ = fVar65 * auVar49._0_4_;
        auVar79._4_4_ = fVar77 * auVar49._4_4_;
        auVar79._8_4_ = fVar78 * auVar49._8_4_;
        auVar79._12_4_ = auVar49._12_4_ * 0.0;
        auVar42 = NEON_ext(auVar79,auVar79,8,1);
        fVar65 = auVar42._0_4_ + auVar42._4_4_;
        fVar13 = auVar79._0_4_ + auVar79._4_4_ + fVar65;
        uVar82 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar65,fVar13);
        if (0.0 <= fVar13) {
          return 0;
        }
        uVar69 = NEON_frecpe(uVar82,4);
        uVar85 = NEON_frecps(uVar82,uVar69,4);
        fVar13 = (float)uVar69 * (float)uVar85;
        fVar65 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar13),4);
        fVar13 = fVar13 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar13),4);
        fVar13 = fVar13 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar13),4);
        fVar13 = fVar13 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar13),4);
        fVar77 = (float)uVar102;
        fVar13 = fVar77 - fVar66 * fVar13 * (float)uVar82;
        fVar32 = (float)((ulong)uVar102 >> 0x20) -
                 ((auVar52._0_4_ + auVar52._4_4_ + fVar32) -
                 (param_1 + (float)((ulong)uVar68 >> 0x20) * 0.1)) *
                 fVar65 * (float)((ulong)uVar82 >> 0x20);
        uVar102 = CONCAT44(fVar32,fVar13);
        if (fVar77 < fVar13) {
          uVar102 = NEON_fmov(0x3f800000,4);
          if ((float)uVar102 < fVar13) {
            return 0;
          }
          fVar62 = auVar49._0_4_ * fVar13 + *param_6;
          fVar66 = auVar49._4_4_ * fVar13 + param_6[1];
          auVar39._0_8_ = CONCAT44(fVar66,fVar62);
          auVar39._8_4_ = auVar49._8_4_ * fVar13 + param_6[2];
          auVar39._12_4_ = auVar49._12_4_ * fVar13 + param_6[3];
          auVar49 = NEON_ext(auVar39,auVar39,8,1);
          fVar65 = auVar49._0_4_;
          local_1d0._0_4_ = fVar62 - (float)local_1d0;
          local_1d0._4_4_ = fVar66 - local_1d0._4_4_;
          fVar15 = fVar65 - fVar15;
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
          auVar21._0_8_ = CONCAT44(fStack_12c - local_170._4_4_,local_130 - (float)local_170);
          auVar21._8_4_ = fStack_128 - (float)uStack_168;
          auVar21._12_4_ = fStack_124 - uStack_168._4_4_;
          uStack_e8 = auVar21._8_8_;
          local_f0 = auVar21._0_8_;
          FUN_00261680(param_3,&local_1a0);
          uVar102 = CONCAT44(fVar32,fVar13);
          auVar38._0_4_ = fVar62 + extraout_s0_01;
          auVar38._4_4_ = fVar66 + extraout_var_01;
          auVar38._8_4_ = fVar65 + extraout_var_04;
          auVar38._12_4_ = extraout_var_07 + 0.0;
          local_210 = auVar83._0_8_;
          auVar25._0_4_ = fVar76 - auVar38._0_4_;
          auVar25._4_4_ = fVar43 - auVar38._4_4_;
          auVar25._8_4_ = fVar34 - auVar38._8_4_;
          auVar25._12_4_ = fVar63 - auVar38._12_4_;
          fVar62 = 3.4028235e+38;
          uStack_208 = auVar83._8_8_;
          local_1d0 = auVar39._0_8_;
          fVar15 = fVar65;
        }
      }
      uVar33 = local_b4;
      uVar7 = (ulong)local_b4;
      bVar4 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_150[uVar7 * 4 + 2] = fVar34;
      local_150[uVar7 * 4 + 3] = fVar63;
      local_150[uVar7 * 4] = fVar76;
      local_150[uVar7 * 4 + 1] = fVar43;
      *(long *)(local_150 + uVar7 * 4 + -0xe) = auVar38._8_8_;
      *(long *)(local_150 + uVar7 * 4 + -0x10) = auVar38._0_8_;
      *(long *)(local_b0 + uVar7 * 4 + -0x16) = auVar25._8_8_;
      *(long *)(local_b0 + uVar7 * 4 + -0x18) = auVar25._0_8_;
      if (bVar4) {
        auVar25 = FUN_00237120(local_110,local_150,&local_190,&local_b4);
      }
      else if (uVar33 == 2) {
        auVar25._4_4_ = local_110[1];
        auVar25._0_4_ = local_110[0];
        auVar25._8_4_ = (float)uStack_108;
        auVar25._12_4_ = uStack_108._4_4_;
        auVar2._4_4_ = fStack_fc;
        auVar2._0_4_ = local_100;
        auVar2._8_4_ = fStack_f8;
        auVar2._12_4_ = fStack_f4;
        auVar3._8_8_ = uStack_e8;
        auVar3._0_8_ = local_f0;
        fVar76 = (float)local_f0;
        auVar73._0_4_ = fVar76 - local_110[0];
        fVar34 = (float)((ulong)local_f0 >> 0x20);
        auVar73._4_4_ = fVar34 - local_110[1];
        fVar43 = (float)uStack_e8;
        auVar73._8_4_ = fVar43 - (float)uStack_108;
        fVar63 = (float)((ulong)uStack_e8 >> 0x20);
        auVar73._12_4_ = fVar63 - uStack_108._4_4_;
        auVar80._0_4_ = local_100 - local_110[0];
        auVar80._4_4_ = fStack_fc - local_110[1];
        auVar80._8_4_ = fStack_f8 - (float)uStack_108;
        auVar80._12_4_ = fStack_f4 - uStack_108._4_4_;
        auVar49 = NEON_ext(auVar80,auVar80,8,1);
        auVar42 = NEON_ext(auVar73,auVar73,8,1);
        fVar77 = auVar80._0_4_ * auVar73._4_4_ - auVar80._4_4_ * auVar73._0_4_;
        uVar82 = NEON_ext(CONCAT44(auVar80._4_4_ * auVar73._8_4_ - auVar80._8_4_ * auVar73._4_4_,
                                   fVar77),
                          CONCAT44(auVar49._4_4_ * auVar73._4_4_ - auVar80._4_4_ * auVar42._4_4_,
                                   auVar49._0_4_ * auVar73._0_4_ - auVar80._0_4_ * auVar42._0_4_),4,
                          1);
        fVar65 = (float)uVar82;
        auVar86._0_4_ = fVar65 * fVar65;
        fVar66 = (float)((ulong)uVar82 >> 0x20);
        auVar86._4_4_ = fVar66 * fVar66;
        auVar86._8_4_ = fVar77 * fVar77;
        auVar86._12_4_ = 0;
        auVar49 = NEON_ext(auVar86,auVar86,8,1);
        fVar32 = auVar49._0_4_ + auVar49._4_4_;
        fVar13 = auVar86._0_4_ + auVar86._4_4_ + fVar32;
        uVar82 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar32,fVar13);
        local_b4 = 3;
        if (1.1920929e-07 < fVar13) {
          if (fVar13 != 0.0) {
            auVar49 = NEON_ext(auVar2,auVar2,8,1);
            auVar42 = NEON_ext(auVar3,auVar3,8,1);
            fVar78 = local_100 * fVar34 - fStack_fc * fVar76;
            auVar50 = NEON_ext(auVar25,auVar25,8,1);
            uVar85 = NEON_ext(CONCAT44(fStack_fc * fVar43 - fStack_f8 * fVar34,fVar78),
                              CONCAT44(auVar49._4_4_ * fVar34 - fStack_fc * auVar42._4_4_,
                                       auVar49._0_4_ * fVar76 - local_100 * auVar42._0_4_),4,1);
            fVar13 = local_110[1] * fVar76 - local_110[0] * fVar34;
            uVar101 = NEON_ext(CONCAT44((float)uStack_108 * fVar34 - local_110[1] * fVar43,fVar13),
                               CONCAT44(local_110[1] * auVar42._4_4_ - auVar50._4_4_ * fVar34,
                                        local_110[0] * auVar42._0_4_ - auVar50._0_4_ * fVar76),4,1);
            fVar32 = local_110[0] * fStack_fc - local_110[1] * local_100;
            uVar69 = NEON_ext(CONCAT44(local_110[1] * fStack_f8 - (float)uStack_108 * fStack_fc,
                                       fVar32),
                              CONCAT44(auVar50._4_4_ * fStack_fc - local_110[1] * auVar49._4_4_,
                                       auVar50._0_4_ * local_100 - local_110[0] * auVar49._0_4_),4,1
                             );
            auVar90._0_4_ = (float)uVar85 * fVar65;
            auVar90._4_4_ = (float)((ulong)uVar85 >> 0x20) * fVar66;
            auVar90._8_4_ = fVar78 * fVar77;
            auVar90._12_4_ = 0;
            auVar49 = NEON_ext(auVar90,auVar90,8,1);
            auVar93._0_4_ = (float)uVar101 * fVar65;
            auVar93._4_4_ = (float)((ulong)uVar101 >> 0x20) * fVar66;
            auVar93._8_4_ = fVar13 * fVar77;
            auVar93._12_4_ = 0;
            auVar42 = NEON_ext(auVar93,auVar93,8,1);
            fVar13 = auVar90._0_4_ + auVar90._4_4_ + auVar49._0_4_ + auVar49._4_4_;
            auVar98._0_4_ = (float)uVar69 * fVar65;
            auVar98._4_4_ = (float)((ulong)uVar69 >> 0x20) * fVar66;
            auVar98._8_4_ = fVar32 * fVar77;
            auVar98._12_4_ = 0;
            fVar32 = auVar93._0_4_ + auVar93._4_4_ + auVar42._0_4_ + auVar42._4_4_;
            auVar49 = NEON_ext(auVar98,auVar98,8,1);
            fVar78 = auVar98._0_4_ + auVar98._4_4_ + auVar49._0_4_ + auVar49._4_4_;
            bVar4 = (0.0 <= fVar13 && 0.0 <= fVar32) && 0.0 <= fVar78;
            auVar99._0_4_ = -(uint)bVar4;
            auVar99._4_4_ = -(uint)bVar4;
            auVar99._8_4_ = -(uint)bVar4;
            auVar99._12_4_ = -(uint)bVar4;
            NEON_ext(auVar99,auVar99,8,1);
            if (CONCAT13((char)auVar99._12_4_,
                         CONCAT12((char)auVar99._8_4_,
                                  CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))) == -1) {
              auVar26._0_4_ = local_110[0] * fVar65;
              auVar26._4_4_ = local_110[1] * fVar66;
              auVar26._8_4_ = (float)uStack_108 * fVar77;
              auVar26._12_4_ = uStack_108._4_4_ * 0.0;
              auVar49 = NEON_ext(auVar26,auVar26,8,1);
              uVar69 = NEON_frecpe(uVar82,4);
              uVar85 = NEON_frecps(uVar82,uVar69,4);
              fVar13 = (float)uVar69 * (float)uVar85;
              fVar32 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
              uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
              fVar13 = fVar13 * (float)uVar69;
              fVar32 = fVar32 * (float)((ulong)uVar69 >> 0x20);
              uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
              fVar13 = fVar13 * (float)uVar69;
              fVar32 = fVar32 * (float)((ulong)uVar69 >> 0x20);
              uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
              fVar13 = fVar13 * (float)uVar69;
              uVar82 = NEON_frecps(uVar82,CONCAT44(fVar32 * (float)((ulong)uVar69 >> 0x20),fVar13),4
                                  );
              fVar13 = (auVar26._0_4_ + auVar26._4_4_ + auVar49._0_4_ + auVar49._4_4_) *
                       fVar13 * (float)uVar82;
              auVar25._0_4_ = fVar65 * fVar13;
              auVar25._4_4_ = fVar66 * fVar13;
              auVar25._8_4_ = fVar77 * fVar13;
              auVar25._12_4_ = 0.0;
            }
            else {
              auVar84._0_4_ = -local_110[0] * auVar80._0_4_;
              auVar84._4_4_ = -local_110[1] * auVar80._4_4_;
              auVar84._8_4_ = -(float)uStack_108 * auVar80._8_4_;
              auVar84._12_4_ = auVar80._12_4_ * 0.0;
              auVar49 = NEON_ext(auVar84,auVar84,8,1);
              fVar77 = auVar49._0_4_ + auVar49._4_4_;
              auVar87._0_4_ = -local_100 * auVar80._0_4_;
              auVar87._4_4_ = -fStack_fc * auVar80._4_4_;
              auVar87._8_4_ = -fStack_f8 * auVar80._8_4_;
              auVar87._12_4_ = auVar80._12_4_ * 0.0;
              auVar49 = NEON_ext(auVar87,auVar87,8,1);
              fVar16 = auVar49._0_4_ + auVar49._4_4_;
              fVar65 = auVar84._0_4_ + auVar84._4_4_ + fVar77;
              fVar66 = auVar87._0_4_ + auVar87._4_4_ + fVar16;
              fVar16 = auVar87._0_4_ + auVar87._4_4_ + fVar16;
              bVar4 = (0.0 <= fVar65 && fVar78 <= 0.0) && fVar66 <= 0.0;
              auVar94._0_4_ = -(uint)bVar4;
              auVar94._4_4_ = -(uint)bVar4;
              auVar94._8_4_ = -(uint)bVar4;
              auVar94._12_4_ = -(uint)bVar4;
              NEON_ext(auVar94,auVar94,8,1);
              if (CONCAT13((char)auVar94._12_4_,
                           CONCAT12((char)auVar94._8_4_,
                                    CONCAT11((char)auVar94._4_4_,(char)auVar94._0_4_))) == -1) {
                uVar82 = CONCAT44((auVar84._0_4_ + auVar84._4_4_ + fVar77) - fVar16,fVar65 - fVar66)
                ;
                uVar69 = NEON_frecpe(uVar82,4);
                uVar85 = NEON_frecps(uVar82,uVar69,4);
                fVar13 = (float)uVar69 * (float)uVar85;
                fVar32 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
                fVar13 = fVar13 * (float)uVar69;
                fVar32 = fVar32 * (float)((ulong)uVar69 >> 0x20);
                uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
                fVar13 = fVar13 * (float)uVar69;
                fVar32 = fVar32 * (float)((ulong)uVar69 >> 0x20);
                uVar69 = NEON_frecps(uVar82,CONCAT44(fVar32,fVar13),4);
                fVar13 = fVar13 * (float)uVar69;
                uVar82 = NEON_frecps(uVar82,CONCAT44(fVar32 * (float)((ulong)uVar69 >> 0x20),fVar13)
                                     ,4);
                fVar65 = fVar65 * (float)(-(uint)(1.1920929e-07 < ABS(fVar65 - fVar66)) &
                                         (uint)(fVar13 * (float)uVar82));
                puVar8 = &local_190;
                pfVar6 = local_150;
                auVar27._0_8_ =
                     CONCAT44(local_110[1] + auVar80._4_4_ * fVar65,
                              local_110[0] + auVar80._0_4_ * fVar65);
                auVar27._8_4_ = (float)uStack_108 + auVar80._8_4_ * fVar65;
                auVar27._12_4_ = uStack_108._4_4_ + auVar80._12_4_ * fVar65;
                auVar49 = NEON_ext(auVar27,auVar27,8,1);
                pfVar9 = local_110;
                auVar25._8_4_ = (float)auVar49._0_4_;
                auVar25._0_8_ = auVar27._0_8_;
                auVar25._12_4_ = 0.0;
                local_b4 = 2;
LAB_002e53d0:
                puVar10 = &local_180;
                pfVar11 = local_150 + 4;
                pfVar12 = &local_100;
              }
              else {
                auVar95._0_4_ = -local_100 * auVar73._0_4_;
                auVar95._4_4_ = -fStack_fc * auVar73._4_4_;
                auVar95._8_4_ = -fStack_f8 * auVar73._8_4_;
                auVar95._12_4_ = auVar73._12_4_ * 0.0;
                auVar49 = NEON_ext(auVar95,auVar95,8,1);
                fVar17 = auVar49._0_4_ + auVar49._4_4_;
                auVar81._0_4_ = auVar80._0_4_ * -fVar76;
                auVar81._4_4_ = auVar80._4_4_ * -fVar34;
                auVar81._8_4_ = auVar80._8_4_ * -fVar43;
                auVar81._12_4_ = auVar80._12_4_ * 0.0;
                auVar100._0_4_ = auVar73._0_4_ * -fVar76;
                auVar100._4_4_ = auVar73._4_4_ * -fVar34;
                auVar100._8_4_ = auVar73._8_4_ * -fVar43;
                auVar100._12_4_ = auVar73._12_4_ * 0.0;
                fVar77 = auVar95._0_4_ + auVar95._4_4_ + fVar17;
                auVar49 = NEON_ext(auVar81,auVar81,8,1);
                fVar18 = auVar49._0_4_ + auVar49._4_4_;
                fVar78 = auVar81._0_4_ + auVar81._4_4_ + fVar18;
                auVar49 = NEON_ext(auVar100,auVar100,8,1);
                fVar19 = auVar49._0_4_ + auVar49._4_4_;
                fVar14 = auVar100._0_4_ + auVar100._4_4_ + fVar19;
                fVar19 = auVar100._0_4_ + auVar100._4_4_ + fVar19;
                bVar4 = (fVar66 <= fVar77 && fVar13 <= 0.0) && fVar14 <= fVar78;
                auVar91._0_4_ = -(uint)bVar4;
                auVar91._4_4_ = -(uint)bVar4;
                auVar91._8_4_ = -(uint)bVar4;
                auVar91._12_4_ = -(uint)bVar4;
                NEON_ext(auVar91,auVar91,8,1);
                puVar10 = &local_170;
                pfVar11 = local_150 + 8;
                pfVar12 = (float *)&local_f0;
                if (CONCAT13((char)auVar91._12_4_,
                             CONCAT12((char)auVar91._8_4_,
                                      CONCAT11((char)auVar91._4_4_,(char)auVar91._0_4_))) == -1) {
                  local_b4 = 2;
                  fVar13 = (fVar77 - fVar66) + (fVar78 - fVar14);
                  uVar82 = CONCAT44(((auVar95._0_4_ + auVar95._4_4_ + fVar17) - fVar16) +
                                    ((auVar81._0_4_ + auVar81._4_4_ + fVar18) - fVar19),fVar13);
                  uVar69 = NEON_frecpe(uVar82,4);
                  uVar85 = NEON_frecps(uVar82,uVar69,4);
                  fVar32 = (float)uVar69 * (float)uVar85;
                  fVar65 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65 * (float)((ulong)uVar69 >> 0x20),
                                                       fVar32),4);
                  fVar13 = (fVar77 - fVar66) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) &
                                  (uint)(fVar32 * (float)uVar82));
                  auVar28._0_8_ =
                       CONCAT44(fStack_fc + (fVar34 - fStack_fc) * fVar13,
                                local_100 + (fVar76 - local_100) * fVar13);
                  auVar28._8_4_ = fStack_f8 + (fVar43 - fStack_f8) * fVar13;
                  auVar28._12_4_ = fStack_f4 + (fVar63 - fStack_f4) * fVar13;
                  auVar49 = NEON_ext(auVar28,auVar28,8,1);
                  auVar25._8_4_ = (float)auVar49._0_4_;
                  auVar25._0_8_ = auVar28._0_8_;
                  auVar25._12_4_ = 0.0;
                  puVar8 = &local_180;
                  pfVar6 = local_150 + 4;
                  pfVar9 = &local_100;
                }
                else {
                  auVar92._0_4_ = -local_110[0] * auVar73._0_4_;
                  auVar92._4_4_ = -local_110[1] * auVar73._4_4_;
                  auVar92._8_4_ = -(float)uStack_108 * auVar73._8_4_;
                  auVar92._12_4_ = auVar73._12_4_ * 0.0;
                  auVar49 = NEON_ext(auVar92,auVar92,8,1);
                  fVar76 = auVar49._0_4_ + auVar49._4_4_;
                  fVar13 = auVar92._0_4_ + auVar92._4_4_ + fVar76;
                  bVar4 = (fVar32 <= 0.0 && 0.0 <= fVar13) && fVar14 <= 0.0;
                  auVar88._0_4_ = -(uint)bVar4;
                  auVar88._4_4_ = -(uint)bVar4;
                  auVar88._8_4_ = -(uint)bVar4;
                  auVar88._12_4_ = -(uint)bVar4;
                  NEON_ext(auVar88,auVar88,8,1);
                  if (CONCAT13((char)auVar88._12_4_,
                               CONCAT12((char)auVar88._8_4_,
                                        CONCAT11((char)auVar88._4_4_,(char)auVar88._0_4_))) != -1) {
                    bVar4 = fVar65 <= 0.0 && fVar13 <= 0.0;
                    auVar74._0_4_ = -(uint)bVar4;
                    auVar74._4_4_ = -(uint)bVar4;
                    auVar74._8_4_ = -(uint)bVar4;
                    auVar74._12_4_ = -(uint)bVar4;
                    NEON_ext(auVar74,auVar74,8,1);
                    if (CONCAT13((char)auVar74._12_4_,
                                 CONCAT12((char)auVar74._8_4_,
                                          CONCAT11((char)auVar74._4_4_,(char)auVar74._0_4_))) == -1)
                    {
                      puVar8 = &local_190;
                      pfVar6 = local_150;
                      pfVar9 = local_110;
                    }
                    else {
                      bVar4 = 0.0 <= fVar66 && fVar77 <= fVar66;
                      auVar23._0_4_ = -(uint)bVar4;
                      auVar23._4_4_ = -(uint)bVar4;
                      auVar23._8_4_ = -(uint)bVar4;
                      auVar23._12_4_ = -(uint)bVar4;
                      NEON_ext(auVar23,auVar23,8,1);
                      iVar46 = CONCAT13((char)auVar23._12_4_,
                                        CONCAT12((char)auVar23._8_4_,
                                                 CONCAT11((char)auVar23._4_4_,(char)auVar23._0_4_)))
                      ;
                      iVar67 = -(uint)(iVar46 == -1);
                      auVar24._4_4_ = iVar67;
                      auVar24._0_4_ = iVar67;
                      auVar24._8_4_ = iVar67;
                      auVar24._12_4_ = iVar67;
                      lVar5 = 0x10;
                      if (iVar46 != -1) {
                        lVar5 = 0x20;
                      }
                      auVar25 = auVar3 ^ (auVar3 ^ auVar2) & auVar24;
                      pfVar9 = (float *)((long)local_b0 + lVar5 + -0x60);
                      pfVar6 = (float *)((long)local_150 + lVar5);
                      puVar8 = (undefined8 *)((long)local_150 + lVar5 + -0x40);
                    }
                    local_b4 = 1;
                    goto LAB_002e53d0;
                  }
                  uVar82 = CONCAT44((auVar92._0_4_ + auVar92._4_4_ + fVar76) - fVar19,
                                    fVar13 - fVar14);
                  uVar69 = NEON_frecpe(uVar82,4);
                  uVar85 = NEON_frecps(uVar82,uVar69,4);
                  fVar32 = (float)uVar69 * (float)uVar85;
                  fVar76 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  fVar76 = fVar76 * (float)((ulong)uVar69 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  fVar76 = fVar76 * (float)((ulong)uVar69 >> 0x20);
                  uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
                  fVar32 = fVar32 * (float)uVar69;
                  uVar82 = NEON_frecps(uVar82,CONCAT44(fVar76 * (float)((ulong)uVar69 >> 0x20),
                                                       fVar32),4);
                  fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar14)) &
                                           (uint)(fVar32 * (float)uVar82));
                  auVar29._0_8_ =
                       CONCAT44(local_110[1] + auVar73._4_4_ * fVar13,
                                local_110[0] + auVar73._0_4_ * fVar13);
                  auVar29._8_4_ = (float)uStack_108 + auVar73._8_4_ * fVar13;
                  auVar29._12_4_ = uStack_108._4_4_ + auVar73._12_4_ * fVar13;
                  auVar49 = NEON_ext(auVar29,auVar29,8,1);
                  auVar25._8_4_ = (float)auVar49._0_4_;
                  auVar25._0_8_ = auVar29._0_8_;
                  auVar25._12_4_ = 0.0;
                  local_b4 = 2;
                  puVar8 = &local_190;
                  pfVar6 = local_150;
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
              local_150[2] = (float)*(undefined8 *)(pfVar6 + 2);
              local_150[3] = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
              local_150[0] = (float)*(undefined8 *)pfVar6;
              local_150[1] = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
              fStack_138 = (float)*(undefined8 *)(pfVar11 + 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
              local_140 = (float)*(undefined8 *)pfVar11;
              fStack_13c = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
              local_190 = *puVar8;
              uStack_188 = puVar8[1];
            }
          }
        }
        else {
          auVar40._0_4_ = auVar80._0_4_ * auVar80._0_4_;
          auVar40._4_4_ = auVar80._4_4_ * auVar80._4_4_;
          auVar40._8_4_ = auVar80._8_4_ * auVar80._8_4_;
          auVar40._12_4_ = auVar80._12_4_ * auVar80._12_4_;
          auVar49 = NEON_ext(auVar40,auVar40,8,1);
          fVar32 = auVar49._0_4_ + auVar49._4_4_;
          fVar13 = auVar40._0_4_ + auVar40._4_4_ + fVar32;
          uVar82 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar32,fVar13);
          bVar4 = fVar13 <= 1.1920929e-07;
          auVar54._0_4_ = -(uint)bVar4;
          auVar54._4_4_ = -(uint)bVar4;
          auVar54._8_4_ = -(uint)bVar4;
          auVar54._12_4_ = -(uint)bVar4;
          NEON_ext(auVar54,auVar54,8,1);
          local_b4 = 2;
          if (CONCAT13((char)auVar54._12_4_,
                       CONCAT12((char)auVar54._8_4_,
                                CONCAT11((char)auVar54._4_4_,(char)auVar54._0_4_))) != -1) {
            auVar55._0_4_ = -local_110[0] * auVar80._0_4_;
            auVar55._4_4_ = -local_110[1] * auVar80._4_4_;
            auVar55._8_4_ = -(float)uStack_108 * auVar80._8_4_;
            auVar55._12_4_ = auVar80._12_4_ * 0.0;
            auVar49 = NEON_ext(auVar55,auVar55,8,1);
            fVar13 = auVar49._0_4_ + auVar49._4_4_;
            uVar69 = NEON_frecpe(uVar82,4);
            uVar85 = NEON_frecps(uVar82,uVar69,4);
            fVar32 = (float)uVar69 * (float)uVar85;
            fVar76 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
            uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
            fVar32 = fVar32 * (float)uVar69;
            fVar76 = fVar76 * (float)((ulong)uVar69 >> 0x20);
            uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
            fVar32 = fVar32 * (float)uVar69;
            fVar76 = fVar76 * (float)((ulong)uVar69 >> 0x20);
            uVar69 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
            fVar32 = fVar32 * (float)uVar69;
            fVar76 = fVar76 * (float)((ulong)uVar69 >> 0x20);
            uVar82 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar32),4);
            uVar69 = NEON_fmov(0x3f800000,4);
            uVar82 = NEON_fmin(CONCAT44((auVar55._0_4_ + auVar55._4_4_ + fVar13) *
                                        fVar76 * (float)((ulong)uVar82 >> 0x20),
                                        (auVar55._0_4_ + auVar55._4_4_ + fVar13) *
                                        fVar32 * (float)uVar82),uVar69,4);
            uVar82 = NEON_fmax(uVar82,0,4);
            fVar13 = (float)uVar82;
            fVar32 = auVar80._0_4_ * fVar13;
            fVar76 = auVar80._4_4_ * fVar13;
            fVar34 = auVar80._8_4_ * fVar13;
            fVar13 = auVar80._12_4_ * fVar13;
            goto LAB_002e4f4c;
          }
LAB_002e4f60:
          local_b4 = 1;
        }
      }
      else if (uVar33 == 1) {
        auVar25._4_4_ = local_110[1];
        auVar25._0_4_ = local_110[0];
        auVar25._8_4_ = (float)uStack_108;
        auVar25._12_4_ = uStack_108._4_4_;
        fVar32 = local_100 - local_110[0];
        fVar76 = fStack_fc - local_110[1];
        fVar34 = fStack_f8 - (float)uStack_108;
        fVar13 = fStack_f4 - uStack_108._4_4_;
        auVar53._0_4_ = fVar32 * fVar32;
        auVar53._4_4_ = fVar76 * fVar76;
        auVar53._8_4_ = fVar34 * fVar34;
        auVar53._12_4_ = fVar13 * fVar13;
        auVar49 = NEON_ext(auVar53,auVar53,8,1);
        fVar63 = auVar49._0_4_ + auVar49._4_4_;
        fVar43 = auVar53._0_4_ + auVar53._4_4_ + fVar63;
        uVar82 = CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar63,fVar43);
        bVar4 = fVar43 <= 1.1920929e-07;
        auVar71._0_4_ = -(uint)bVar4;
        auVar71._4_4_ = -(uint)bVar4;
        auVar71._8_4_ = -(uint)bVar4;
        auVar71._12_4_ = -(uint)bVar4;
        NEON_ext(auVar71,auVar71,8,1);
        if (CONCAT13((char)auVar71._12_4_,
                     CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_))
                    ) == -1) goto LAB_002e4f60;
        auVar72._0_4_ = -local_110[0] * fVar32;
        auVar72._4_4_ = -local_110[1] * fVar76;
        auVar72._8_4_ = -(float)uStack_108 * fVar34;
        auVar72._12_4_ = fVar13 * 0.0;
        auVar49 = NEON_ext(auVar72,auVar72,8,1);
        fVar43 = auVar49._0_4_ + auVar49._4_4_;
        uVar69 = NEON_frecpe(uVar82,4);
        uVar85 = NEON_frecps(uVar82,uVar69,4);
        fVar63 = (float)uVar69 * (float)uVar85;
        fVar65 = (float)((ulong)uVar69 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar63),4);
        fVar63 = fVar63 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar63),4);
        fVar63 = fVar63 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar63),4);
        fVar63 = fVar63 * (float)uVar69;
        fVar65 = fVar65 * (float)((ulong)uVar69 >> 0x20);
        uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar63),4);
        uVar69 = NEON_fmov(0x3f800000,4);
        uVar82 = NEON_fmin(CONCAT44((auVar72._0_4_ + auVar72._4_4_ + fVar43) *
                                    fVar65 * (float)((ulong)uVar82 >> 0x20),
                                    (auVar72._0_4_ + auVar72._4_4_ + fVar43) *
                                    fVar63 * (float)uVar82),uVar69,4);
        uVar82 = NEON_fmax(uVar82,0,4);
        fVar43 = (float)uVar82;
        fVar32 = fVar32 * fVar43;
        fVar76 = fVar76 * fVar43;
        fVar34 = fVar34 * fVar43;
        fVar13 = fVar13 * fVar43;
LAB_002e4f4c:
        auVar22._0_8_ = CONCAT44(auVar25._4_4_ + fVar76,auVar25._0_4_ + fVar32);
        auVar22._8_4_ = auVar25._8_4_ + fVar34;
        auVar22._12_4_ = auVar25._12_4_ + fVar13;
        auVar49 = NEON_ext(auVar22,auVar22,8,1);
        auVar25._8_4_ = (float)auVar49._0_4_;
        auVar25._0_8_ = auVar22._0_8_;
        auVar25._12_4_ = 0.0;
      }
      fVar32 = auVar25._0_4_;
      auVar41._0_4_ = fVar32 * fVar32;
      fVar76 = auVar25._4_4_;
      auVar41._4_4_ = fVar76 * fVar76;
      fVar34 = auVar25._8_4_;
      auVar41._8_4_ = fVar34 * fVar34;
      auVar41._12_4_ = auVar25._12_4_ * auVar25._12_4_;
      auVar49 = NEON_ext(auVar41,auVar41,8,1);
      fVar13 = auVar41._0_4_ + auVar41._4_4_ + auVar49._0_4_ + auVar49._4_4_;
      auVar37._0_4_ = -(uint)(fVar13 < fVar62);
      bVar4 = fVar64 * fVar64 < fVar13 && fVar13 < fVar62;
      auVar56._0_4_ = -(uint)bVar4;
      auVar56._4_4_ = -(uint)bVar4;
      auVar56._8_4_ = -(uint)bVar4;
      auVar56._12_4_ = -(uint)bVar4;
      NEON_ext(auVar56,auVar56,8,1);
      auVar83._0_4_ = -fVar32;
      auVar83._4_4_ = -fVar76;
      auVar83._8_4_ = -fVar34;
      auVar83._12_4_ = 0;
      if (CONCAT13((char)auVar56._12_4_,
                   CONCAT12((char)auVar56._8_4_,CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_)))
          != -1) goto code_r0x002e5448;
      lVar5 = *(long *)(param_2 + 8);
      uStack_1e8 = auVar25._8_8_;
      local_1f0 = auVar25._0_8_;
    } while( true );
  }
  uVar102 = 0;
  auVar25._8_8_ = uStack_1e8;
  auVar25._0_8_ = auVar42._0_8_;
  auVar83._8_4_ = auVar49._8_4_;
  auVar83._0_8_ = auVar49._0_8_;
  auVar83._12_4_ = 0;
LAB_002e5460:
  auVar97 = ZEXT816(0);
  iVar46 = -(uint)(fVar45 * fVar45 < fVar13);
  bVar44 = (byte)iVar46;
  auVar57[0] = bVar44 & auVar37[0];
  bVar59 = (byte)((uint)iVar46 >> 8);
  auVar57[1] = bVar59 & auVar37[1];
  bVar60 = (byte)((uint)iVar46 >> 0x10);
  auVar57[2] = bVar60 & auVar37[2];
  bVar61 = (byte)((uint)iVar46 >> 0x18);
  auVar57[3] = bVar61 & auVar37[3];
  auVar57[4] = bVar44 & auVar37[4];
  auVar57[5] = bVar59 & auVar37[5];
  auVar57[6] = bVar60 & auVar37[6];
  auVar57[7] = bVar61 & auVar37[7];
  auVar57[8] = bVar44 & auVar37[8];
  auVar57[9] = bVar59 & auVar37[9];
  auVar57[10] = bVar60 & auVar37[10];
  auVar57[0xb] = bVar61 & auVar37[0xb];
  auVar57[0xc] = bVar44 & auVar37[0xc];
  auVar57[0xd] = bVar59 & auVar37[0xd];
  auVar57[0xe] = bVar60 & auVar37[0xe];
  auVar57[0xf] = bVar61 & auVar37[0xf];
  auVar42 = auVar42 ^ (auVar42 ^ auVar25) & auVar37;
  auVar49 = auVar49 ^ (auVar49 ^ auVar83) & auVar57;
  iVar46 = -(*(byte *)(lVar5 + 0x24) & 1);
  fVar45 = auVar49._0_4_;
  auVar75._0_4_ = fVar45 * fVar45;
  fVar64 = auVar49._4_4_;
  auVar75._4_4_ = fVar64 * fVar64;
  fVar62 = auVar49._8_4_;
  auVar75._8_4_ = fVar62 * fVar62;
  auVar75._12_4_ = auVar49._12_4_ * auVar49._12_4_;
  auVar49 = NEON_ext(auVar75,auVar75,8,1);
  auVar96._4_4_ = iVar46;
  auVar96._0_4_ = iVar46;
  auVar96._8_4_ = iVar46;
  auVar96._12_4_ = iVar46;
  fVar15 = auVar49._0_4_ + auVar49._4_4_;
  fVar13 = auVar75._0_4_ + auVar75._4_4_ + fVar15;
  fVar15 = auVar75._0_4_ + auVar75._4_4_ + fVar15;
  uVar7 = CONCAT44(fVar15,fVar13);
  uVar82 = NEON_frsqrte(uVar7,4);
  fVar32 = (float)uVar82;
  fVar76 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar32 * fVar32),uVar7,4);
  fVar32 = fVar32 * (float)uVar82;
  fVar76 = fVar76 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar32 * fVar32),uVar7,4);
  fVar32 = fVar32 * (float)uVar82;
  fVar76 = fVar76 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar32 * fVar32),uVar7,4);
  fVar32 = fVar32 * (float)uVar82;
  fVar76 = fVar76 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar32 * fVar32),uVar7,4);
  uVar47 = CONCAT44(fVar15 * fVar76 * (float)((ulong)uVar82 >> 0x20),fVar13 * fVar32 * (float)uVar82
                   );
  uVar47 = uVar47 ^ (uVar47 ^ uVar7) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar82 = NEON_frecpe(uVar47,4);
  uVar68 = NEON_frecps(uVar47,uVar82,4);
  fVar13 = (float)uVar82 * (float)uVar68;
  fVar15 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar68 >> 0x20);
  uVar82 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar15 = fVar15 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar15 = fVar15 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar47,CONCAT44(fVar15,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  iVar67 = -(uint)(0.0 < (float)uVar47);
  uVar82 = NEON_frecps(uVar47,CONCAT44(fVar15 * (float)((ulong)uVar82 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar45 = fVar45 * fVar13;
  fVar64 = fVar64 * fVar13;
  fVar62 = fVar62 * fVar13;
  bVar44 = (byte)iVar67;
  bVar59 = (byte)((uint)iVar67 >> 8);
  bVar60 = (byte)((uint)iVar67 >> 0x10);
  bVar61 = (byte)((uint)iVar67 >> 0x18);
  fVar13 = (float)CONCAT13(bVar61 & (byte)((uint)fVar45 >> 0x18),
                           CONCAT12(bVar60 & (byte)((uint)fVar45 >> 0x10),
                                    CONCAT11(bVar59 & (byte)((uint)fVar45 >> 8),
                                             bVar44 & SUB41(fVar45,0))));
  auVar48._0_8_ =
       CONCAT17(bVar61 & (byte)((uint)fVar64 >> 0x18),
                CONCAT16(bVar60 & (byte)((uint)fVar64 >> 0x10),
                         CONCAT15(bVar59 & (byte)((uint)fVar64 >> 8),
                                  CONCAT14(bVar44 & SUB41(fVar64,0),fVar13))));
  auVar48[8] = bVar44 & SUB41(fVar62,0);
  auVar48[9] = bVar59 & (byte)((uint)fVar62 >> 8);
  auVar48[10] = bVar60 & (byte)((uint)fVar62 >> 0x10);
  auVar48[0xb] = bVar61 & (byte)((uint)fVar62 >> 0x18);
  fVar13 = -fVar13;
  fVar15 = -(float)((ulong)auVar48._0_8_ >> 0x20);
  auVar58._0_8_ = CONCAT44(fVar15,fVar13);
  auVar58._8_4_ = -auVar48._8_4_;
  auVar58._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar58._8_4_;
  *param_9 = auVar58._0_8_;
  *param_8 = uVar102;
  uStack_198 = auVar42._8_8_;
  local_1a0 = auVar42._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_1a0,local_110,&local_100,&local_f0,local_b0 + 2,local_b0);
    auVar58._4_4_ = fVar15;
    auVar58._0_4_ = fVar13;
    auVar58._12_4_ = 0;
    auVar97._0_4_ =
         local_150[0] +
         (local_140 - local_150[0]) * local_b0[2] + (local_130 - local_150[0]) * local_b0[0];
    auVar97._4_4_ =
         local_150[1] +
         (fStack_13c - local_150[1]) * local_b0[2] + (fStack_12c - local_150[1]) * local_b0[0];
    auVar97._8_4_ =
         local_150[2] +
         (fStack_138 - local_150[2]) * local_b0[2] + (fStack_128 - local_150[2]) * local_b0[0];
    auVar97._12_4_ = local_150[3] + 0.0;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_1a0,local_110,&local_100,local_b0 + 2);
    auVar58._4_4_ = fVar15;
    auVar58._0_4_ = fVar13;
    auVar58._12_4_ = 0;
    auVar89._0_8_ =
         CONCAT44(local_150[1] + (fStack_13c - local_150[1]) * local_b0[2],
                  local_150[0] + (local_140 - local_150[0]) * local_b0[2]);
    auVar89._8_4_ = local_150[2] + (fStack_138 - local_150[2]) * local_b0[2];
    auVar89._12_4_ = local_150[3] + (fStack_134 - local_150[3]) * local_b0[2];
    auVar49 = NEON_ext(auVar89,auVar89,8,1);
    auVar97._8_4_ = (float)auVar49._0_4_;
    auVar97._0_8_ = auVar89._0_8_;
    auVar97._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar97._4_4_ = local_150[1];
    auVar97._0_4_ = local_150[0];
    auVar97._8_4_ = local_150[2];
    auVar97._12_4_ = local_150[3];
  }
  fVar13 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar30._0_8_ =
       CONCAT44(auVar97._4_4_ - auVar58._4_4_ * fVar13,auVar97._0_4_ - auVar58._0_4_ * fVar13);
  auVar30._8_4_ = auVar97._8_4_ - auVar58._8_4_ * fVar13;
  auVar30._12_4_ = auVar97._12_4_ - auVar58._12_4_ * fVar13;
  auVar49 = NEON_ext(auVar30,auVar30,8,1);
  auVar31._8_4_ = auVar49._0_4_;
  auVar31._0_8_ = auVar30._0_8_;
  auVar31._12_4_ = 0;
  auVar97 = auVar97 ^ (auVar97 ^ auVar31) & auVar96;
  param_10[1] = auVar97._8_8_;
  *param_10 = auVar97._0_8_;
  return 1;
code_r0x002e5448:
  auVar42._8_8_ = uStack_1e8;
  auVar42._0_8_ = local_1f0;
  auVar49._8_8_ = uStack_208;
  auVar49._0_8_ = local_210;
  auVar37._4_4_ = auVar37._0_4_;
  auVar37._8_4_ = auVar37._0_4_;
  auVar37._12_4_ = auVar37._0_4_;
  lVar5 = *(long *)(param_2 + 8);
  goto LAB_002e5460;
}


