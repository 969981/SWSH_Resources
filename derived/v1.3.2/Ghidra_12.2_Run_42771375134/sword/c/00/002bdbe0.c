/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002bdbe0; name: FUN_002bdbe0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002bdbe0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar29;
  float fVar30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar31;
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
  undefined1 auVar28 [16];
  uint uVar32;
  float fVar42;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar43;
  float fVar44;
  undefined8 uVar46;
  undefined1 auVar48 [12];
  byte bVar62;
  byte bVar63;
  undefined1 auVar49 [16];
  float fVar65;
  undefined8 uVar47;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar45;
  byte bVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar66;
  ulong uVar67;
  float fVar74;
  float fVar75;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar76;
  float fVar80;
  float fVar81;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar92;
  undefined8 uVar88;
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
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
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 uVar108;
  undefined8 uVar109;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
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
  
  fStack_1c8 = (float)*(undefined8 *)(*param_7 + 8);
  fStack_1c4 = (float)((ulong)*(undefined8 *)(*param_7 + 8) >> 0x20);
  local_1d0 = (float)*(undefined8 *)*param_7;
  fStack_1cc = (float)((ulong)*(undefined8 *)*param_7 >> 0x20);
  uVar109 = *(undefined8 *)param_6;
  uVar82 = *(undefined8 *)(param_6 + 2);
  local_c4 = 1;
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar30 = param_4[2];
  fVar44 = param_4[3];
  auVar33._0_4_ = fVar13 * fVar13;
  auVar33._4_4_ = fVar14 * fVar14;
  auVar33._8_4_ = fVar30 * fVar30;
  auVar33._12_4_ = fVar44 * fVar44;
  auVar49 = NEON_ext(auVar33,auVar33,8,1);
  uVar32 = -(uint)(1.1920929e-07 < auVar33._0_4_ + auVar33._4_4_ + auVar49._0_4_ + auVar49._4_4_);
  fVar15 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar13) & uVar32);
  fVar29 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar14) & uVar32);
  fVar30 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar30) & uVar32);
  fVar13 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar44) & uVar32);
  auVar51._0_4_ = fVar15 * fVar15;
  auVar51._4_4_ = fVar29 * fVar29;
  auVar51._8_4_ = fVar30 * fVar30;
  auVar51._12_4_ = fVar13 * fVar13;
  auVar49 = NEON_ext(auVar51,auVar51,8,1);
  fVar14 = auVar49._0_4_ + auVar49._4_4_;
  fVar13 = auVar51._0_4_ + auVar51._4_4_ + fVar14;
  fVar14 = auVar51._0_4_ + auVar51._4_4_ + fVar14;
  uVar4 = CONCAT44(fVar14,fVar13);
  uVar46 = NEON_frsqrte(uVar4,4);
  fVar44 = (float)uVar46;
  fVar65 = (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar44 * fVar44),uVar4,4);
  fVar44 = fVar44 * (float)uVar46;
  fVar65 = fVar65 * (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar44 * fVar44),uVar4,4);
  fVar44 = fVar44 * (float)uVar46;
  fVar65 = fVar65 * (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar44 * fVar44),uVar4,4);
  fVar44 = fVar44 * (float)uVar46;
  fVar65 = fVar65 * (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar44 * fVar44),uVar4,4);
  uVar67 = CONCAT44(fVar14 * fVar65 * (float)((ulong)uVar46 >> 0x20),fVar13 * fVar44 * (float)uVar46
                   );
  uVar67 = uVar67 ^ (uVar67 ^ uVar4) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar46 = NEON_frecpe(uVar67,4);
  uVar47 = NEON_frecps(uVar67,uVar46,4);
  fVar13 = (float)uVar46 * (float)uVar47;
  fVar14 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
  uVar46 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar46;
  fVar14 = fVar14 * (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar46;
  fVar14 = fVar14 * (float)((ulong)uVar46 >> 0x20);
  uVar46 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar46;
  uVar46 = NEON_frecps(uVar67,CONCAT44(fVar14 * (float)((ulong)uVar46 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar46;
  fVar15 = fVar15 * fVar13;
  fVar29 = fVar29 * fVar13;
  fVar30 = fVar30 * fVar13;
  lVar5 = *(long *)(param_2 + 8);
  pfVar6 = *(float **)(param_2 + 0x10);
  fVar13 = -fVar15;
  fVar14 = -fVar29;
  fVar65 = -fVar30;
  auVar49 = *(undefined1 (*) [16])(pfVar6 + 0xc);
  lVar12 = *(long *)(param_3 + 8);
  fVar44 = -*(float *)(lVar5 + 0x30);
  fVar74 = -*(float *)(lVar5 + 0x34);
  fVar75 = -*(float *)(lVar5 + 0x38);
  auVar83._0_4_ = fVar15 * *(float *)(lVar12 + 0x40);
  auVar83._4_4_ = fVar29 * *(float *)(lVar12 + 0x44);
  auVar83._8_4_ = fVar30 * *(float *)(lVar12 + 0x48);
  auVar83._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
  auVar50._0_4_ = fVar15 * *(float *)(lVar12 + 0x30);
  auVar50._4_4_ = fVar29 * *(float *)(lVar12 + 0x34);
  auVar50._8_4_ = fVar30 * *(float *)(lVar12 + 0x38);
  auVar50._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
  fVar44 = (float)((uint)fVar44 ^
                  ((uint)fVar44 ^ (uint)*(float *)(lVar5 + 0x30)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar65 +
                                *(float *)(param_2 + 0x20) * fVar13 +
                                *(float *)(param_2 + 0x30) * fVar14));
  fVar74 = (float)((uint)fVar74 ^
                  ((uint)fVar74 ^ (uint)*(float *)(lVar5 + 0x34)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar65 +
                                *(float *)(param_2 + 0x24) * fVar13 +
                                *(float *)(param_2 + 0x34) * fVar14));
  fVar75 = (float)((uint)fVar75 ^
                  ((uint)fVar75 ^ (uint)*(float *)(lVar5 + 0x38)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar65 +
                                *(float *)(param_2 + 0x28) * fVar13 +
                                *(float *)(param_2 + 0x38) * fVar14));
  auVar89 = NEON_ext(auVar50,auVar50,8,1);
  fVar13 = auVar89._0_4_ + auVar89._4_4_;
  auVar89 = NEON_ext(auVar83,auVar83,8,1);
  fVar14 = auVar89._0_4_ + auVar89._4_4_;
  fVar65 = auVar49._0_4_ + pfVar6[8] * fVar75 + *pfVar6 * fVar44 + pfVar6[4] * fVar74;
  fVar42 = auVar49._4_4_ + pfVar6[9] * fVar75 + pfVar6[1] * fVar44 + pfVar6[5] * fVar74;
  fVar44 = auVar49._8_4_ + pfVar6[10] * fVar75 + pfVar6[2] * fVar44 + pfVar6[6] * fVar74;
  fVar74 = auVar49._12_4_ + 0.0;
  auVar16._0_4_ = fVar15 * *(float *)(lVar12 + 0x50);
  auVar16._4_4_ = fVar29 * *(float *)(lVar12 + 0x54);
  auVar16._8_4_ = fVar30 * *(float *)(lVar12 + 0x58);
  auVar16._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
  auVar49 = NEON_ext(auVar16,auVar16,8,1);
  fStack_108 = auVar16._0_4_ + auVar16._4_4_ + auVar49._0_4_ + auVar49._4_4_;
  uVar46 = NEON_ext(CONCAT44(auVar50._0_4_ + auVar50._4_4_ + fVar13,
                             auVar50._0_4_ + auVar50._4_4_ + fVar13),
                    CONCAT44(auVar83._0_4_ + auVar83._4_4_ + fVar14,
                             auVar83._0_4_ + auVar83._4_4_ + fVar14),4,1);
  fStack_104 = 0.0;
  local_110._0_4_ = (float)uVar46;
  local_110._4_4_ = (float)((ulong)uVar46 >> 0x20);
  uVar4 = FUN_00222070(lVar12,&local_110);
  pfVar6 = (float *)(*(long *)(lVar12 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
  fVar13 = *pfVar6;
  fVar14 = pfVar6[1];
  fVar30 = pfVar6[2];
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
       *(float *)(lVar12 + 0x30) * fVar13 + *(float *)(lVar12 + 0x40) * fVar14 +
       *(float *)(lVar12 + 0x50) * fVar30;
  local_110._4_4_ =
       *(float *)(lVar12 + 0x34) * fVar13 + *(float *)(lVar12 + 0x44) * fVar14 +
       *(float *)(lVar12 + 0x54) * fVar30;
  local_190 = CONCAT44(local_110._4_4_,(float)local_110);
  fVar13 = *(float *)(lVar12 + 0x38) * fVar13 + *(float *)(lVar12 + 0x48) * fVar14 +
           *(float *)(lVar12 + 0x58) * fVar30;
  local_110._0_4_ = fVar65 - (float)local_110;
  local_110._4_4_ = fVar42 - local_110._4_4_;
  auVar89._0_8_ = CONCAT44(local_110._4_4_,(float)local_110);
  auVar89._8_4_ = fVar44 - fVar13;
  auVar89._12_4_ = fVar74 - 0.0;
  fVar30 = -(float)local_110;
  fVar15 = -local_110._4_4_;
  auVar49._0_8_ = CONCAT44(fVar15,fVar30);
  auVar49._8_4_ = -auVar89._8_4_;
  uStack_1e8 = auVar89._8_8_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_188 = (ulong)(uint)fVar13;
  uStack_178 = 0;
  local_180 = 0;
  lVar5 = *(long *)(param_2 + 8);
  lVar12 = *(long *)(param_3 + 8);
  auVar49._12_4_ = 0;
  uVar46 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x18)),
                     CONCAT44(*(undefined4 *)(lVar12 + 0x18),*(undefined4 *)(lVar12 + 0x18)),4);
  fVar14 = (float)uVar46 * 0.1;
  auVar34._0_4_ = fVar30 * fVar30;
  auVar34._4_4_ = fVar15 * fVar15;
  auVar34._8_4_ = auVar49._8_4_ * auVar49._8_4_;
  auVar34._12_4_ = 0;
  auVar51 = NEON_ext(auVar34,auVar34,8,1);
  fVar13 = auVar34._0_4_ + auVar34._4_4_ + auVar51._0_4_ + auVar51._4_4_;
  bVar3 = fVar14 * fVar14 < fVar13;
  auVar35._8_8_ = 0xffffffffffffffff;
  auVar35._0_8_ = 0xffffffffffffffff;
  auVar52._0_4_ = -(uint)bVar3;
  auVar52._4_4_ = -(uint)bVar3;
  auVar52._8_4_ = -(uint)bVar3;
  auVar52._12_4_ = -(uint)bVar3;
  NEON_ext(auVar52,auVar52,8,1);
  uStack_208 = (ulong)(uint)auVar49._8_4_;
  local_150[0] = fVar65;
  local_150[1] = fVar42;
  uStack_148._0_4_ = fVar44;
  uStack_148._4_4_ = fVar74;
  fStack_108 = auVar89._8_4_;
  fStack_104 = auVar89._12_4_;
  if (CONCAT13((char)auVar52._12_4_,
               CONCAT12((char)auVar52._8_4_,CONCAT11((char)auVar52._4_4_,(char)auVar52._0_4_))) ==
      -1) {
    local_1c0._0_4_ = (float)uVar109;
    local_1c0._4_4_ = (float)((ulong)uVar109 >> 0x20);
    fStack_1b8 = (float)uVar82;
    fStack_1b4 = (float)((ulong)uVar82 >> 0x20);
    auVar68._0_8_ = CONCAT44(fStack_1cc * 0.0 + local_1c0._4_4_,local_1d0 * 0.0 + (float)local_1c0);
    auVar68._8_4_ = fStack_1c8 * 0.0 + fStack_1b8;
    auVar68._12_4_ = fStack_1c4 * 0.0 + fStack_1b4;
    auVar51 = NEON_ext(auVar68,auVar68,8,1);
    fVar30 = auVar51._0_4_;
    fVar44 = param_1 + fVar14;
    uVar109 = 0;
    auVar84._8_4_ = auVar49._8_4_;
    auVar84._0_8_ = auVar49._0_8_;
    auVar84._12_4_ = 0;
    local_210 = auVar49._0_8_;
    local_1f0 = auVar89._0_8_;
    local_1c0 = auVar68._0_8_;
    do {
      fVar76 = auVar84._0_4_;
      auVar17._0_4_ = fVar76 * fVar76;
      fVar80 = auVar84._4_4_;
      auVar17._4_4_ = fVar80 * fVar80;
      fVar81 = auVar84._8_4_;
      auVar17._8_4_ = fVar81 * fVar81;
      auVar17._12_4_ = auVar84._12_4_ * auVar84._12_4_;
      pfVar6 = *(float **)(param_2 + 0x10);
      auVar49 = NEON_ext(auVar17,auVar17,8,1);
      fVar29 = auVar49._0_4_ + auVar49._4_4_;
      fVar15 = auVar17._0_4_ + auVar17._4_4_ + fVar29;
      fVar29 = auVar17._0_4_ + auVar17._4_4_ + fVar29;
      uVar4 = CONCAT44(fVar29,fVar15);
      uVar82 = NEON_frsqrte(uVar4,4);
      fVar65 = (float)uVar82;
      fVar74 = (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar65 * fVar65),uVar4,4);
      fVar65 = fVar65 * (float)uVar82;
      fVar74 = fVar74 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar65 * fVar65),uVar4,4);
      fVar65 = fVar65 * (float)uVar82;
      fVar74 = fVar74 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar65 * fVar65),uVar4,4);
      fVar65 = fVar65 * (float)uVar82;
      fVar74 = fVar74 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar65 * fVar65),uVar4,4);
      uVar67 = CONCAT44(fVar29 * fVar74 * (float)((ulong)uVar82 >> 0x20),
                        fVar15 * fVar65 * (float)uVar82);
      uVar67 = uVar67 ^ (uVar67 ^ uVar4) & CONCAT44(-(uint)(fVar15 == 0.0),-(uint)(fVar15 == 0.0));
      uVar82 = NEON_frecpe(uVar67,4);
      uVar47 = NEON_frecps(uVar67,uVar82,4);
      fVar15 = (float)uVar82 * (float)uVar47;
      fVar29 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar47 >> 0x20);
      uVar82 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar15),4);
      fVar15 = fVar15 * (float)uVar82;
      fVar29 = fVar29 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar15),4);
      fVar15 = fVar15 * (float)uVar82;
      fVar29 = fVar29 * (float)((ulong)uVar82 >> 0x20);
      uVar82 = NEON_frecps(uVar67,CONCAT44(fVar29,fVar15),4);
      fVar15 = fVar15 * (float)uVar82;
      uVar82 = NEON_frecps(uVar67,CONCAT44(fVar29 * (float)((ulong)uVar82 >> 0x20),fVar15),4);
      fVar15 = fVar15 * (float)uVar82;
      fVar76 = fVar76 * fVar15;
      fVar80 = fVar80 * fVar15;
      fVar81 = fVar81 * fVar15;
      fVar87 = -fVar76;
      fVar92 = -fVar80;
      fVar93 = -fVar81;
      fVar29 = -*(float *)(lVar5 + 0x30);
      fVar65 = -*(float *)(lVar5 + 0x34);
      fVar75 = -*(float *)(lVar5 + 0x38);
      fVar29 = (float)((uint)fVar29 ^
                      ((uint)fVar29 ^ (uint)*(float *)(lVar5 + 0x30)) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar81 +
                                    *(float *)(param_2 + 0x20) * fVar76 +
                                    *(float *)(param_2 + 0x30) * fVar80));
      fVar65 = (float)((uint)fVar65 ^
                      ((uint)fVar65 ^ (uint)*(float *)(lVar5 + 0x34)) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar81 +
                                    *(float *)(param_2 + 0x24) * fVar76 +
                                    *(float *)(param_2 + 0x34) * fVar80));
      fVar75 = (float)((uint)fVar75 ^
                      ((uint)fVar75 ^ (uint)*(float *)(lVar5 + 0x38)) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar81 +
                                    *(float *)(param_2 + 0x28) * fVar76 +
                                    *(float *)(param_2 + 0x38) * fVar80));
      auVar85._0_4_ = fVar87 * *(float *)(lVar12 + 0x40);
      auVar85._4_4_ = fVar92 * *(float *)(lVar12 + 0x44);
      auVar85._8_4_ = fVar93 * *(float *)(lVar12 + 0x48);
      auVar85._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
      auVar53._0_4_ = fVar87 * *(float *)(lVar12 + 0x30);
      auVar53._4_4_ = fVar92 * *(float *)(lVar12 + 0x34);
      auVar53._8_4_ = fVar93 * *(float *)(lVar12 + 0x38);
      auVar53._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
      auVar89 = NEON_ext(auVar53,auVar53,8,1);
      auVar49 = NEON_ext(auVar85,auVar85,8,1);
      fVar15 = auVar89._0_4_ + auVar89._4_4_;
      fVar74 = pfVar6[0xc] + pfVar6[8] * fVar75 + *pfVar6 * fVar29 + pfVar6[4] * fVar65;
      fVar42 = pfVar6[0xd] + pfVar6[9] * fVar75 + pfVar6[1] * fVar29 + pfVar6[5] * fVar65;
      fVar75 = pfVar6[0xe] + pfVar6[10] * fVar75 + pfVar6[2] * fVar29 + pfVar6[6] * fVar65;
      fVar31 = pfVar6[0xf] + 0.0;
      fVar29 = auVar49._0_4_ + auVar49._4_4_;
      auVar36._0_4_ = fVar87 * *(float *)(lVar12 + 0x50);
      auVar36._4_4_ = fVar92 * *(float *)(lVar12 + 0x54);
      auVar36._8_4_ = fVar93 * *(float *)(lVar12 + 0x58);
      auVar36._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
      auVar49 = NEON_ext(auVar36,auVar36,8,1);
      uStack_a8 = (ulong)(uint)(auVar36._0_4_ + auVar36._4_4_ + auVar49._0_4_ + auVar49._4_4_);
      local_b0 = NEON_ext(CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar15,
                                   auVar53._0_4_ + auVar53._4_4_ + fVar15),
                          CONCAT44(auVar85._0_4_ + auVar85._4_4_ + fVar29,
                                   auVar85._0_4_ + auVar85._4_4_ + fVar29),4,1);
      uVar4 = FUN_00222070(lVar12,&local_b0);
      pfVar6 = (float *)(*(long *)(lVar12 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
      fVar15 = *pfVar6;
      fVar29 = pfVar6[1];
      fVar65 = pfVar6[2];
      auVar94._4_4_ = fVar42;
      auVar94._0_4_ = fVar74;
      auVar94._8_4_ = fVar75;
      auVar94._12_4_ = fVar31;
      auVar37._0_4_ =
           (float)local_1c0 +
           *(float *)(lVar12 + 0x30) * fVar15 + *(float *)(lVar12 + 0x40) * fVar29 +
           *(float *)(lVar12 + 0x50) * fVar65;
      auVar37._4_4_ =
           local_1c0._4_4_ +
           *(float *)(lVar12 + 0x34) * fVar15 + *(float *)(lVar12 + 0x44) * fVar29 +
           *(float *)(lVar12 + 0x54) * fVar65;
      auVar37._8_4_ =
           fVar30 + *(float *)(lVar12 + 0x38) * fVar15 + *(float *)(lVar12 + 0x48) * fVar29 +
                    *(float *)(lVar12 + 0x58) * fVar65;
      auVar37._12_4_ = 0;
      auVar22._0_4_ = fVar74 - auVar37._0_4_;
      auVar22._4_4_ = fVar42 - auVar37._4_4_;
      auVar22._8_4_ = fVar75 - auVar37._8_4_;
      auVar22._12_4_ = fVar31 - 0.0;
      auVar54._0_4_ = fVar76 * -auVar22._0_4_;
      auVar54._4_4_ = fVar80 * -auVar22._4_4_;
      auVar54._8_4_ = fVar81 * -auVar22._8_4_;
      auVar54._12_4_ = 0;
      auVar49 = NEON_ext(auVar54,auVar54,8,1);
      fVar29 = auVar49._0_4_ + auVar49._4_4_;
      fVar65 = (auVar54._0_4_ + auVar54._4_4_ + fVar29) - fVar44;
      fVar15 = fVar13;
      if (0.0 < fVar65) {
        auVar49 = *param_7;
        auVar77._0_4_ = fVar76 * auVar49._0_4_;
        auVar77._4_4_ = fVar80 * auVar49._4_4_;
        auVar77._8_4_ = fVar81 * auVar49._8_4_;
        auVar77._12_4_ = auVar49._12_4_ * 0.0;
        auVar89 = NEON_ext(auVar77,auVar77,8,1);
        fVar76 = auVar89._0_4_ + auVar89._4_4_;
        fVar13 = auVar77._0_4_ + auVar77._4_4_ + fVar76;
        uVar82 = CONCAT44(auVar77._0_4_ + auVar77._4_4_ + fVar76,fVar13);
        if (0.0 <= fVar13) {
          return 0;
        }
        uVar47 = NEON_frecpe(uVar82,4);
        uVar88 = NEON_frecps(uVar82,uVar47,4);
        fVar13 = (float)uVar47 * (float)uVar88;
        fVar76 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar13),4);
        fVar13 = fVar13 * (float)uVar47;
        fVar76 = fVar76 * (float)((ulong)uVar47 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar13),4);
        fVar13 = fVar13 * (float)uVar47;
        fVar76 = fVar76 * (float)((ulong)uVar47 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar13),4);
        fVar13 = fVar13 * (float)uVar47;
        fVar76 = fVar76 * (float)((ulong)uVar47 >> 0x20);
        uVar82 = NEON_frecps(uVar82,CONCAT44(fVar76,fVar13),4);
        fVar80 = (float)uVar109;
        fVar13 = fVar80 - fVar65 * fVar13 * (float)uVar82;
        fVar29 = (float)((ulong)uVar109 >> 0x20) -
                 ((auVar54._0_4_ + auVar54._4_4_ + fVar29) -
                 (param_1 + (float)((ulong)uVar46 >> 0x20) * 0.1)) *
                 fVar76 * (float)((ulong)uVar82 >> 0x20);
        uVar109 = CONCAT44(fVar29,fVar13);
        if (fVar80 < fVar13) {
          uVar109 = NEON_fmov(0x3f800000,4);
          if ((float)uVar109 < fVar13) {
            return 0;
          }
          fVar80 = auVar49._0_4_ * fVar13 + *param_6;
          fVar81 = auVar49._4_4_ * fVar13 + param_6[1];
          auVar38._0_8_ = CONCAT44(fVar81,fVar80);
          auVar38._8_4_ = auVar49._8_4_ * fVar13 + param_6[2];
          auVar38._12_4_ = auVar49._12_4_ * fVar13 + param_6[3];
          auVar49 = NEON_ext(auVar38,auVar38,8,1);
          fVar76 = auVar49._0_4_;
          local_1c0._0_4_ = fVar80 - (float)local_1c0;
          local_1c0._4_4_ = fVar81 - local_1c0._4_4_;
          fVar30 = fVar76 - fVar30;
          local_180._0_4_ = (float)local_180 + (float)local_1c0;
          local_180._4_4_ = local_180._4_4_ + local_1c0._4_4_;
          uStack_178._0_4_ = (float)uStack_178 + fVar30;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_190._0_4_ = (float)local_190 + (float)local_1c0;
          local_190._4_4_ = local_190._4_4_ + local_1c0._4_4_;
          uStack_188._0_4_ = (float)uStack_188 + fVar30;
          uStack_188._4_4_ = uStack_188._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + (float)local_1c0;
          local_170._4_4_ = local_170._4_4_ + local_1c0._4_4_;
          uStack_168._0_4_ = (float)uStack_168 + fVar30;
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
          lVar5 = *(long *)(param_3 + 8);
          auVar39._0_4_ = fVar87 * *(float *)(lVar5 + 0x40);
          auVar39._4_4_ = fVar92 * *(float *)(lVar5 + 0x44);
          auVar39._8_4_ = fVar93 * *(float *)(lVar5 + 0x48);
          auVar39._12_4_ = *(float *)(lVar5 + 0x4c) * 0.0;
          auVar18._0_4_ = fVar87 * *(float *)(lVar5 + 0x30);
          auVar18._4_4_ = fVar92 * *(float *)(lVar5 + 0x34);
          auVar18._8_4_ = fVar93 * *(float *)(lVar5 + 0x38);
          auVar18._12_4_ = *(float *)(lVar5 + 0x3c) * 0.0;
          auVar49 = NEON_ext(auVar18,auVar18,8,1);
          fVar30 = auVar49._0_4_ + auVar49._4_4_;
          auVar49 = NEON_ext(auVar39,auVar39,8,1);
          fVar15 = auVar49._0_4_ + auVar49._4_4_;
          auVar55._0_4_ = fVar87 * *(float *)(lVar5 + 0x50);
          auVar55._4_4_ = fVar92 * *(float *)(lVar5 + 0x54);
          auVar55._8_4_ = fVar93 * *(float *)(lVar5 + 0x58);
          auVar55._12_4_ = *(float *)(lVar5 + 0x5c) * 0.0;
          auVar49 = NEON_ext(auVar55,auVar55,8,1);
          uStack_a8 = (ulong)(uint)(auVar55._0_4_ + auVar55._4_4_ + auVar49._0_4_ + auVar49._4_4_);
          local_b0 = NEON_ext(CONCAT44(auVar18._0_4_ + auVar18._4_4_ + fVar30,
                                       auVar18._0_4_ + auVar18._4_4_ + fVar30),
                              CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar15,
                                       auVar39._0_4_ + auVar39._4_4_ + fVar15),4,1);
          uVar4 = FUN_00222070(lVar5,&local_b0);
          pfVar6 = (float *)(*(long *)(lVar5 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
          fVar30 = *pfVar6;
          fVar15 = pfVar6[1];
          fVar65 = pfVar6[2];
          uVar109 = CONCAT44(fVar29,fVar13);
          local_210 = auVar84._0_8_;
          auVar37._0_4_ =
               fVar80 + *(float *)(lVar5 + 0x30) * fVar30 + *(float *)(lVar5 + 0x40) * fVar15 +
                        *(float *)(lVar5 + 0x50) * fVar65;
          auVar37._4_4_ =
               fVar81 + *(float *)(lVar5 + 0x34) * fVar30 + *(float *)(lVar5 + 0x44) * fVar15 +
                        *(float *)(lVar5 + 0x54) * fVar65;
          auVar37._8_4_ =
               fVar76 + *(float *)(lVar5 + 0x38) * fVar30 + *(float *)(lVar5 + 0x48) * fVar15 +
                        *(float *)(lVar5 + 0x58) * fVar65;
          auVar37._12_4_ = 0;
          auVar22._0_4_ = fVar74 - auVar37._0_4_;
          auVar22._4_4_ = fVar42 - auVar37._4_4_;
          auVar22._8_4_ = fVar75 - auVar37._8_4_;
          auVar22._12_4_ = fVar31 - 0.0;
          fVar15 = 3.4028235e+38;
          uStack_208 = auVar84._8_8_;
          local_1c0 = auVar38._0_8_;
          fVar30 = fVar76;
        }
      }
      uVar32 = local_c4;
      uVar4 = (ulong)local_c4;
      bVar3 = local_c4 == 3;
      local_c4 = local_c4 + 1;
      (&uStack_148)[uVar4 * 2] = auVar94._8_8_;
      *(long *)(local_150 + uVar4 * 4) = auVar94._0_8_;
      (&uStack_188)[uVar4 * 2] = auVar37._8_8_;
      (&local_190)[uVar4 * 2] = auVar37._0_8_;
      *(long *)(local_c0 + uVar4 * 4 + -0x12) = auVar22._8_8_;
      *(long *)(local_c0 + uVar4 * 4 + -0x14) = auVar22._0_8_;
      if (bVar3) {
        auVar22 = FUN_00237120(&local_110,local_150,&local_190,&local_c4);
      }
      else if (uVar32 == 2) {
        auVar22._4_4_ = local_110._4_4_;
        auVar22._0_4_ = (float)local_110;
        auVar22._8_4_ = fStack_108;
        auVar22._12_4_ = fStack_104;
        auVar1._4_4_ = fStack_fc;
        auVar1._0_4_ = local_100;
        auVar1._8_4_ = fStack_f8;
        auVar1._12_4_ = fStack_f4;
        auVar2._4_4_ = fStack_ec;
        auVar2._0_4_ = local_f0;
        auVar2._8_4_ = fStack_e8;
        auVar2._12_4_ = fStack_e4;
        auVar71._0_4_ = local_f0 - (float)local_110;
        auVar71._4_4_ = fStack_ec - local_110._4_4_;
        auVar71._8_4_ = fStack_e8 - fStack_108;
        auVar71._12_4_ = fStack_e4 - fStack_104;
        auVar78._0_4_ = local_100 - (float)local_110;
        auVar78._4_4_ = fStack_fc - local_110._4_4_;
        auVar78._8_4_ = fStack_f8 - fStack_108;
        auVar78._12_4_ = fStack_f4 - fStack_104;
        auVar49 = NEON_ext(auVar78,auVar78,8,1);
        auVar89 = NEON_ext(auVar71,auVar71,8,1);
        fVar42 = auVar78._0_4_ * auVar71._4_4_ - auVar78._4_4_ * auVar71._0_4_;
        uVar82 = NEON_ext(CONCAT44(auVar78._4_4_ * auVar71._8_4_ - auVar78._8_4_ * auVar71._4_4_,
                                   fVar42),
                          CONCAT44(auVar49._4_4_ * auVar71._4_4_ - auVar78._4_4_ * auVar89._4_4_,
                                   auVar49._0_4_ * auVar71._0_4_ - auVar78._0_4_ * auVar89._0_4_),4,
                          1);
        fVar65 = (float)uVar82;
        auVar90._0_4_ = fVar65 * fVar65;
        fVar74 = (float)((ulong)uVar82 >> 0x20);
        auVar90._4_4_ = fVar74 * fVar74;
        auVar90._8_4_ = fVar42 * fVar42;
        auVar90._12_4_ = 0;
        auVar49 = NEON_ext(auVar90,auVar90,8,1);
        fVar29 = auVar49._0_4_ + auVar49._4_4_;
        fVar13 = auVar90._0_4_ + auVar90._4_4_ + fVar29;
        uVar82 = CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar29,fVar13);
        local_c4 = 3;
        if (1.1920929e-07 < fVar13) {
          if (fVar13 != 0.0) {
            auVar49 = NEON_ext(auVar1,auVar1,8,1);
            auVar89 = NEON_ext(auVar2,auVar2,8,1);
            fVar75 = local_100 * fStack_ec - fStack_fc * local_f0;
            auVar51 = NEON_ext(auVar22,auVar22,8,1);
            uVar88 = NEON_ext(CONCAT44(fStack_fc * fStack_e8 - fStack_f8 * fStack_ec,fVar75),
                              CONCAT44(auVar49._4_4_ * fStack_ec - fStack_fc * auVar89._4_4_,
                                       auVar49._0_4_ * local_f0 - local_100 * auVar89._0_4_),4,1);
            fVar13 = local_110._4_4_ * local_f0 - (float)local_110 * fStack_ec;
            uVar108 = NEON_ext(CONCAT44(fStack_108 * fStack_ec - local_110._4_4_ * fStack_e8,fVar13)
                               ,CONCAT44(local_110._4_4_ * auVar89._4_4_ - auVar51._4_4_ * fStack_ec
                                         ,(float)local_110 * auVar89._0_4_ -
                                          auVar51._0_4_ * local_f0),4,1);
            fVar29 = (float)local_110 * fStack_fc - local_110._4_4_ * local_100;
            uVar47 = NEON_ext(CONCAT44(local_110._4_4_ * fStack_f8 - fStack_108 * fStack_fc,fVar29),
                              CONCAT44(auVar51._4_4_ * fStack_fc - local_110._4_4_ * auVar49._4_4_,
                                       auVar51._0_4_ * local_100 - (float)local_110 * auVar49._0_4_)
                              ,4,1);
            auVar97._0_4_ = (float)uVar88 * fVar65;
            auVar97._4_4_ = (float)((ulong)uVar88 >> 0x20) * fVar74;
            auVar97._8_4_ = fVar75 * fVar42;
            auVar97._12_4_ = 0;
            auVar49 = NEON_ext(auVar97,auVar97,8,1);
            auVar100._0_4_ = (float)uVar108 * fVar65;
            auVar100._4_4_ = (float)((ulong)uVar108 >> 0x20) * fVar74;
            auVar100._8_4_ = fVar13 * fVar42;
            auVar100._12_4_ = 0;
            auVar89 = NEON_ext(auVar100,auVar100,8,1);
            fVar13 = auVar97._0_4_ + auVar97._4_4_ + auVar49._0_4_ + auVar49._4_4_;
            auVar105._0_4_ = (float)uVar47 * fVar65;
            auVar105._4_4_ = (float)((ulong)uVar47 >> 0x20) * fVar74;
            auVar105._8_4_ = fVar29 * fVar42;
            auVar105._12_4_ = 0;
            fVar29 = auVar100._0_4_ + auVar100._4_4_ + auVar89._0_4_ + auVar89._4_4_;
            auVar49 = NEON_ext(auVar105,auVar105,8,1);
            fVar75 = auVar105._0_4_ + auVar105._4_4_ + auVar49._0_4_ + auVar49._4_4_;
            bVar3 = (0.0 <= fVar13 && 0.0 <= fVar29) && 0.0 <= fVar75;
            auVar106._0_4_ = -(uint)bVar3;
            auVar106._4_4_ = -(uint)bVar3;
            auVar106._8_4_ = -(uint)bVar3;
            auVar106._12_4_ = -(uint)bVar3;
            NEON_ext(auVar106,auVar106,8,1);
            if (CONCAT13((char)auVar106._12_4_,
                         CONCAT12((char)auVar106._8_4_,
                                  CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) == -1) {
              auVar23._0_4_ = (float)local_110 * fVar65;
              auVar23._4_4_ = local_110._4_4_ * fVar74;
              auVar23._8_4_ = fStack_108 * fVar42;
              auVar23._12_4_ = fStack_104 * 0.0;
              auVar49 = NEON_ext(auVar23,auVar23,8,1);
              uVar47 = NEON_frecpe(uVar82,4);
              uVar88 = NEON_frecps(uVar82,uVar47,4);
              fVar13 = (float)uVar47 * (float)uVar88;
              fVar29 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
              uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
              fVar13 = fVar13 * (float)uVar47;
              fVar29 = fVar29 * (float)((ulong)uVar47 >> 0x20);
              uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
              fVar13 = fVar13 * (float)uVar47;
              fVar29 = fVar29 * (float)((ulong)uVar47 >> 0x20);
              uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
              fVar13 = fVar13 * (float)uVar47;
              uVar82 = NEON_frecps(uVar82,CONCAT44(fVar29 * (float)((ulong)uVar47 >> 0x20),fVar13),4
                                  );
              fVar13 = (auVar23._0_4_ + auVar23._4_4_ + auVar49._0_4_ + auVar49._4_4_) *
                       fVar13 * (float)uVar82;
              auVar22._0_4_ = fVar65 * fVar13;
              auVar22._4_4_ = fVar74 * fVar13;
              auVar22._8_4_ = fVar42 * fVar13;
              auVar22._12_4_ = 0.0;
            }
            else {
              auVar86._0_4_ = -(float)local_110 * auVar78._0_4_;
              auVar86._4_4_ = -local_110._4_4_ * auVar78._4_4_;
              auVar86._8_4_ = -fStack_108 * auVar78._8_4_;
              auVar86._12_4_ = auVar78._12_4_ * 0.0;
              auVar49 = NEON_ext(auVar86,auVar86,8,1);
              fVar42 = auVar49._0_4_ + auVar49._4_4_;
              auVar91._0_4_ = -local_100 * auVar78._0_4_;
              auVar91._4_4_ = -fStack_fc * auVar78._4_4_;
              auVar91._8_4_ = -fStack_f8 * auVar78._8_4_;
              auVar91._12_4_ = auVar78._12_4_ * 0.0;
              auVar49 = NEON_ext(auVar91,auVar91,8,1);
              fVar31 = auVar49._0_4_ + auVar49._4_4_;
              fVar65 = auVar86._0_4_ + auVar86._4_4_ + fVar42;
              fVar74 = auVar91._0_4_ + auVar91._4_4_ + fVar31;
              fVar31 = auVar91._0_4_ + auVar91._4_4_ + fVar31;
              bVar3 = (0.0 <= fVar65 && fVar75 <= 0.0) && fVar74 <= 0.0;
              auVar101._0_4_ = -(uint)bVar3;
              auVar101._4_4_ = -(uint)bVar3;
              auVar101._8_4_ = -(uint)bVar3;
              auVar101._12_4_ = -(uint)bVar3;
              NEON_ext(auVar101,auVar101,8,1);
              if (CONCAT13((char)auVar101._12_4_,
                           CONCAT12((char)auVar101._8_4_,
                                    CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) == -1) {
                uVar82 = CONCAT44((auVar86._0_4_ + auVar86._4_4_ + fVar42) - fVar31,fVar65 - fVar74)
                ;
                uVar47 = NEON_frecpe(uVar82,4);
                uVar88 = NEON_frecps(uVar82,uVar47,4);
                fVar13 = (float)uVar47 * (float)uVar88;
                fVar29 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
                fVar13 = fVar13 * (float)uVar47;
                fVar29 = fVar29 * (float)((ulong)uVar47 >> 0x20);
                uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
                fVar13 = fVar13 * (float)uVar47;
                fVar29 = fVar29 * (float)((ulong)uVar47 >> 0x20);
                uVar47 = NEON_frecps(uVar82,CONCAT44(fVar29,fVar13),4);
                fVar13 = fVar13 * (float)uVar47;
                uVar82 = NEON_frecps(uVar82,CONCAT44(fVar29 * (float)((ulong)uVar47 >> 0x20),fVar13)
                                     ,4);
                fVar65 = fVar65 * (float)(-(uint)(1.1920929e-07 < ABS(fVar65 - fVar74)) &
                                         (uint)(fVar13 * (float)uVar82));
                puVar7 = &local_190;
                pfVar6 = local_150;
                auVar24._0_8_ =
                     CONCAT44(local_110._4_4_ + auVar78._4_4_ * fVar65,
                              (float)local_110 + auVar78._0_4_ * fVar65);
                auVar24._8_4_ = fStack_108 + auVar78._8_4_ * fVar65;
                auVar24._12_4_ = fStack_104 + auVar78._12_4_ * fVar65;
                auVar49 = NEON_ext(auVar24,auVar24,8,1);
                pfVar8 = (float *)&local_110;
                auVar22._8_4_ = (float)auVar49._0_4_;
                auVar22._0_8_ = auVar24._0_8_;
                auVar22._12_4_ = 0.0;
                local_c4 = 2;
LAB_002be960:
                puVar9 = &local_180;
                pfVar10 = (float *)&local_140;
                pfVar11 = &local_100;
              }
              else {
                auVar102._0_4_ = -local_100 * auVar71._0_4_;
                auVar102._4_4_ = -fStack_fc * auVar71._4_4_;
                auVar102._8_4_ = -fStack_f8 * auVar71._8_4_;
                auVar102._12_4_ = auVar71._12_4_ * 0.0;
                auVar49 = NEON_ext(auVar102,auVar102,8,1);
                fVar80 = auVar49._0_4_ + auVar49._4_4_;
                auVar79._0_4_ = auVar78._0_4_ * -local_f0;
                auVar79._4_4_ = auVar78._4_4_ * -fStack_ec;
                auVar79._8_4_ = auVar78._8_4_ * -fStack_e8;
                auVar79._12_4_ = auVar78._12_4_ * 0.0;
                auVar107._0_4_ = auVar71._0_4_ * -local_f0;
                auVar107._4_4_ = auVar71._4_4_ * -fStack_ec;
                auVar107._8_4_ = auVar71._8_4_ * -fStack_e8;
                auVar107._12_4_ = auVar71._12_4_ * 0.0;
                fVar42 = auVar102._0_4_ + auVar102._4_4_ + fVar80;
                auVar49 = NEON_ext(auVar79,auVar79,8,1);
                fVar81 = auVar49._0_4_ + auVar49._4_4_;
                fVar75 = auVar79._0_4_ + auVar79._4_4_ + fVar81;
                auVar49 = NEON_ext(auVar107,auVar107,8,1);
                fVar87 = auVar49._0_4_ + auVar49._4_4_;
                fVar76 = auVar107._0_4_ + auVar107._4_4_ + fVar87;
                fVar87 = auVar107._0_4_ + auVar107._4_4_ + fVar87;
                bVar3 = (fVar74 <= fVar42 && fVar13 <= 0.0) && fVar76 <= fVar75;
                auVar98._0_4_ = -(uint)bVar3;
                auVar98._4_4_ = -(uint)bVar3;
                auVar98._8_4_ = -(uint)bVar3;
                auVar98._12_4_ = -(uint)bVar3;
                NEON_ext(auVar98,auVar98,8,1);
                puVar9 = &local_170;
                pfVar10 = local_130;
                pfVar11 = &local_f0;
                if (CONCAT13((char)auVar98._12_4_,
                             CONCAT12((char)auVar98._8_4_,
                                      CONCAT11((char)auVar98._4_4_,(char)auVar98._0_4_))) == -1) {
                  local_c4 = 2;
                  fVar13 = (fVar42 - fVar74) + (fVar75 - fVar76);
                  uVar82 = CONCAT44(((auVar102._0_4_ + auVar102._4_4_ + fVar80) - fVar31) +
                                    ((auVar79._0_4_ + auVar79._4_4_ + fVar81) - fVar87),fVar13);
                  uVar47 = NEON_frecpe(uVar82,4);
                  uVar88 = NEON_frecps(uVar82,uVar47,4);
                  fVar29 = (float)uVar47 * (float)uVar88;
                  fVar65 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65 * (float)((ulong)uVar47 >> 0x20),
                                                       fVar29),4);
                  fVar13 = (fVar42 - fVar74) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) &
                                  (uint)(fVar29 * (float)uVar82));
                  auVar25._0_8_ =
                       CONCAT44(fStack_fc + (fStack_ec - fStack_fc) * fVar13,
                                local_100 + (local_f0 - local_100) * fVar13);
                  auVar25._8_4_ = fStack_f8 + (fStack_e8 - fStack_f8) * fVar13;
                  auVar25._12_4_ = fStack_f4 + (fStack_e4 - fStack_f4) * fVar13;
                  auVar49 = NEON_ext(auVar25,auVar25,8,1);
                  auVar22._8_4_ = (float)auVar49._0_4_;
                  auVar22._0_8_ = auVar25._0_8_;
                  auVar22._12_4_ = 0.0;
                  puVar7 = &local_180;
                  pfVar6 = (float *)&local_140;
                  pfVar8 = &local_100;
                }
                else {
                  auVar99._0_4_ = -(float)local_110 * auVar71._0_4_;
                  auVar99._4_4_ = -local_110._4_4_ * auVar71._4_4_;
                  auVar99._8_4_ = -fStack_108 * auVar71._8_4_;
                  auVar99._12_4_ = auVar71._12_4_ * 0.0;
                  auVar49 = NEON_ext(auVar99,auVar99,8,1);
                  fVar75 = auVar49._0_4_ + auVar49._4_4_;
                  fVar13 = auVar99._0_4_ + auVar99._4_4_ + fVar75;
                  bVar3 = (fVar29 <= 0.0 && 0.0 <= fVar13) && fVar76 <= 0.0;
                  auVar95._0_4_ = -(uint)bVar3;
                  auVar95._4_4_ = -(uint)bVar3;
                  auVar95._8_4_ = -(uint)bVar3;
                  auVar95._12_4_ = -(uint)bVar3;
                  NEON_ext(auVar95,auVar95,8,1);
                  if (CONCAT13((char)auVar95._12_4_,
                               CONCAT12((char)auVar95._8_4_,
                                        CONCAT11((char)auVar95._4_4_,(char)auVar95._0_4_))) != -1) {
                    bVar3 = fVar65 <= 0.0 && fVar13 <= 0.0;
                    auVar72._0_4_ = -(uint)bVar3;
                    auVar72._4_4_ = -(uint)bVar3;
                    auVar72._8_4_ = -(uint)bVar3;
                    auVar72._12_4_ = -(uint)bVar3;
                    NEON_ext(auVar72,auVar72,8,1);
                    if (CONCAT13((char)auVar72._12_4_,
                                 CONCAT12((char)auVar72._8_4_,
                                          CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_))) == -1)
                    {
                      puVar7 = &local_190;
                      pfVar6 = local_150;
                      pfVar8 = (float *)&local_110;
                    }
                    else {
                      bVar3 = 0.0 <= fVar74 && fVar42 <= fVar74;
                      auVar20._0_4_ = -(uint)bVar3;
                      auVar20._4_4_ = -(uint)bVar3;
                      auVar20._8_4_ = -(uint)bVar3;
                      auVar20._12_4_ = -(uint)bVar3;
                      NEON_ext(auVar20,auVar20,8,1);
                      iVar45 = CONCAT13((char)auVar20._12_4_,
                                        CONCAT12((char)auVar20._8_4_,
                                                 CONCAT11((char)auVar20._4_4_,(char)auVar20._0_4_)))
                      ;
                      iVar66 = -(uint)(iVar45 == -1);
                      auVar21._4_4_ = iVar66;
                      auVar21._0_4_ = iVar66;
                      auVar21._8_4_ = iVar66;
                      auVar21._12_4_ = iVar66;
                      lVar5 = 0x10;
                      if (iVar45 != -1) {
                        lVar5 = 0x20;
                      }
                      auVar22 = auVar2 ^ (auVar2 ^ auVar1) & auVar21;
                      pfVar8 = (float *)((long)local_c0 + lVar5 + -0x50);
                      pfVar6 = (float *)((long)local_150 + lVar5);
                      puVar7 = (undefined8 *)((long)&local_190 + lVar5);
                    }
                    local_c4 = 1;
                    goto LAB_002be960;
                  }
                  uVar82 = CONCAT44((auVar99._0_4_ + auVar99._4_4_ + fVar75) - fVar87,
                                    fVar13 - fVar76);
                  uVar47 = NEON_frecpe(uVar82,4);
                  uVar88 = NEON_frecps(uVar82,uVar47,4);
                  fVar29 = (float)uVar47 * (float)uVar88;
                  fVar65 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
                  uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
                  fVar29 = fVar29 * (float)uVar47;
                  uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65 * (float)((ulong)uVar47 >> 0x20),
                                                       fVar29),4);
                  fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar76)) &
                                           (uint)(fVar29 * (float)uVar82));
                  auVar26._0_8_ =
                       CONCAT44(local_110._4_4_ + auVar71._4_4_ * fVar13,
                                (float)local_110 + auVar71._0_4_ * fVar13);
                  auVar26._8_4_ = fStack_108 + auVar71._8_4_ * fVar13;
                  auVar26._12_4_ = fStack_104 + auVar71._12_4_ * fVar13;
                  auVar49 = NEON_ext(auVar26,auVar26,8,1);
                  auVar22._8_4_ = (float)auVar49._0_4_;
                  auVar22._0_8_ = auVar26._0_8_;
                  auVar22._12_4_ = 0.0;
                  local_c4 = 2;
                  puVar7 = &local_190;
                  pfVar6 = local_150;
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
              uStack_148._0_4_ = (float)*(undefined8 *)(pfVar6 + 2);
              uStack_148._4_4_ = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
              local_150[0] = (float)*(undefined8 *)pfVar6;
              local_150[1] = (float)((ulong)*(undefined8 *)pfVar6 >> 0x20);
              uStack_138 = *(undefined8 *)(pfVar10 + 2);
              local_140 = *(undefined8 *)pfVar10;
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
          auVar49 = NEON_ext(auVar40,auVar40,8,1);
          fVar29 = auVar49._0_4_ + auVar49._4_4_;
          fVar13 = auVar40._0_4_ + auVar40._4_4_ + fVar29;
          uVar82 = CONCAT44(auVar40._0_4_ + auVar40._4_4_ + fVar29,fVar13);
          bVar3 = fVar13 <= 1.1920929e-07;
          auVar57._0_4_ = -(uint)bVar3;
          auVar57._4_4_ = -(uint)bVar3;
          auVar57._8_4_ = -(uint)bVar3;
          auVar57._12_4_ = -(uint)bVar3;
          NEON_ext(auVar57,auVar57,8,1);
          local_c4 = 2;
          if (CONCAT13((char)auVar57._12_4_,
                       CONCAT12((char)auVar57._8_4_,
                                CONCAT11((char)auVar57._4_4_,(char)auVar57._0_4_))) != -1) {
            auVar58._0_4_ = -(float)local_110 * auVar78._0_4_;
            auVar58._4_4_ = -local_110._4_4_ * auVar78._4_4_;
            auVar58._8_4_ = -fStack_108 * auVar78._8_4_;
            auVar58._12_4_ = auVar78._12_4_ * 0.0;
            auVar49 = NEON_ext(auVar58,auVar58,8,1);
            fVar13 = auVar49._0_4_ + auVar49._4_4_;
            uVar47 = NEON_frecpe(uVar82,4);
            uVar88 = NEON_frecps(uVar82,uVar47,4);
            fVar29 = (float)uVar47 * (float)uVar88;
            fVar65 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
            uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
            fVar29 = fVar29 * (float)uVar47;
            fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
            uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
            fVar29 = fVar29 * (float)uVar47;
            fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
            uVar47 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
            fVar29 = fVar29 * (float)uVar47;
            fVar65 = fVar65 * (float)((ulong)uVar47 >> 0x20);
            uVar82 = NEON_frecps(uVar82,CONCAT44(fVar65,fVar29),4);
            uVar47 = NEON_fmov(0x3f800000,4);
            uVar82 = NEON_fmin(CONCAT44((auVar58._0_4_ + auVar58._4_4_ + fVar13) *
                                        fVar65 * (float)((ulong)uVar82 >> 0x20),
                                        (auVar58._0_4_ + auVar58._4_4_ + fVar13) *
                                        fVar29 * (float)uVar82),uVar47,4);
            uVar82 = NEON_fmax(uVar82,0,4);
            fVar13 = (float)uVar82;
            fVar29 = auVar78._0_4_ * fVar13;
            fVar65 = auVar78._4_4_ * fVar13;
            fVar74 = auVar78._8_4_ * fVar13;
            fVar13 = auVar78._12_4_ * fVar13;
            goto LAB_002be4e4;
          }
LAB_002be4f8:
          local_c4 = 1;
        }
      }
      else if (uVar32 == 1) {
        auVar22._4_4_ = local_110._4_4_;
        auVar22._0_4_ = (float)local_110;
        auVar22._8_4_ = fStack_108;
        auVar22._12_4_ = fStack_104;
        fVar29 = local_100 - (float)local_110;
        fVar65 = fStack_fc - local_110._4_4_;
        fVar74 = fStack_f8 - fStack_108;
        fVar13 = fStack_f4 - fStack_104;
        auVar56._0_4_ = fVar29 * fVar29;
        auVar56._4_4_ = fVar65 * fVar65;
        auVar56._8_4_ = fVar74 * fVar74;
        auVar56._12_4_ = fVar13 * fVar13;
        auVar49 = NEON_ext(auVar56,auVar56,8,1);
        fVar75 = auVar49._0_4_ + auVar49._4_4_;
        fVar42 = auVar56._0_4_ + auVar56._4_4_ + fVar75;
        uVar82 = CONCAT44(auVar56._0_4_ + auVar56._4_4_ + fVar75,fVar42);
        bVar3 = fVar42 <= 1.1920929e-07;
        auVar69._0_4_ = -(uint)bVar3;
        auVar69._4_4_ = -(uint)bVar3;
        auVar69._8_4_ = -(uint)bVar3;
        auVar69._12_4_ = -(uint)bVar3;
        NEON_ext(auVar69,auVar69,8,1);
        if (CONCAT13((char)auVar69._12_4_,
                     CONCAT12((char)auVar69._8_4_,CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_))
                    ) == -1) goto LAB_002be4f8;
        auVar70._0_4_ = -(float)local_110 * fVar29;
        auVar70._4_4_ = -local_110._4_4_ * fVar65;
        auVar70._8_4_ = -fStack_108 * fVar74;
        auVar70._12_4_ = fVar13 * 0.0;
        auVar49 = NEON_ext(auVar70,auVar70,8,1);
        fVar42 = auVar49._0_4_ + auVar49._4_4_;
        uVar47 = NEON_frecpe(uVar82,4);
        uVar88 = NEON_frecps(uVar82,uVar47,4);
        fVar75 = (float)uVar47 * (float)uVar88;
        fVar31 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar31,fVar75),4);
        fVar75 = fVar75 * (float)uVar47;
        fVar31 = fVar31 * (float)((ulong)uVar47 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar31,fVar75),4);
        fVar75 = fVar75 * (float)uVar47;
        fVar31 = fVar31 * (float)((ulong)uVar47 >> 0x20);
        uVar47 = NEON_frecps(uVar82,CONCAT44(fVar31,fVar75),4);
        fVar75 = fVar75 * (float)uVar47;
        fVar31 = fVar31 * (float)((ulong)uVar47 >> 0x20);
        uVar82 = NEON_frecps(uVar82,CONCAT44(fVar31,fVar75),4);
        uVar47 = NEON_fmov(0x3f800000,4);
        uVar82 = NEON_fmin(CONCAT44((auVar70._0_4_ + auVar70._4_4_ + fVar42) *
                                    fVar31 * (float)((ulong)uVar82 >> 0x20),
                                    (auVar70._0_4_ + auVar70._4_4_ + fVar42) *
                                    fVar75 * (float)uVar82),uVar47,4);
        uVar82 = NEON_fmax(uVar82,0,4);
        fVar42 = (float)uVar82;
        fVar29 = fVar29 * fVar42;
        fVar65 = fVar65 * fVar42;
        fVar74 = fVar74 * fVar42;
        fVar13 = fVar13 * fVar42;
LAB_002be4e4:
        auVar19._0_8_ = CONCAT44(auVar22._4_4_ + fVar65,auVar22._0_4_ + fVar29);
        auVar19._8_4_ = auVar22._8_4_ + fVar74;
        auVar19._12_4_ = auVar22._12_4_ + fVar13;
        auVar49 = NEON_ext(auVar19,auVar19,8,1);
        auVar22._8_4_ = (float)auVar49._0_4_;
        auVar22._0_8_ = auVar19._0_8_;
        auVar22._12_4_ = 0.0;
      }
      fVar29 = auVar22._0_4_;
      auVar41._0_4_ = fVar29 * fVar29;
      fVar65 = auVar22._4_4_;
      auVar41._4_4_ = fVar65 * fVar65;
      fVar74 = auVar22._8_4_;
      auVar41._8_4_ = fVar74 * fVar74;
      auVar41._12_4_ = auVar22._12_4_ * auVar22._12_4_;
      auVar49 = NEON_ext(auVar41,auVar41,8,1);
      fVar13 = auVar41._0_4_ + auVar41._4_4_ + auVar49._0_4_ + auVar49._4_4_;
      auVar35._0_4_ = -(uint)(fVar13 < fVar15);
      bVar3 = fVar44 * fVar44 < fVar13 && fVar13 < fVar15;
      auVar59._0_4_ = -(uint)bVar3;
      auVar59._4_4_ = -(uint)bVar3;
      auVar59._8_4_ = -(uint)bVar3;
      auVar59._12_4_ = -(uint)bVar3;
      NEON_ext(auVar59,auVar59,8,1);
      auVar84._0_4_ = -fVar29;
      auVar84._4_4_ = -fVar65;
      auVar84._8_4_ = -fVar74;
      auVar84._12_4_ = 0;
      if (CONCAT13((char)auVar59._12_4_,
                   CONCAT12((char)auVar59._8_4_,CONCAT11((char)auVar59._4_4_,(char)auVar59._0_4_)))
          != -1) goto code_r0x002be9d8;
      lVar5 = *(long *)(param_2 + 8);
      lVar12 = *(long *)(param_3 + 8);
      uStack_1e8 = auVar22._8_8_;
      local_1f0 = auVar22._0_8_;
    } while( true );
  }
  uVar109 = 0;
  auVar22._8_8_ = uStack_1e8;
  auVar22._0_8_ = auVar89._0_8_;
  auVar84._8_4_ = auVar49._8_4_;
  auVar84._0_8_ = auVar49._0_8_;
  auVar84._12_4_ = 0;
LAB_002be9f4:
  auVar104 = ZEXT816(0);
  iVar45 = -(uint)(fVar14 * fVar14 < fVar13);
  bVar43 = (byte)iVar45;
  auVar60[0] = bVar43 & auVar35[0];
  bVar62 = (byte)((uint)iVar45 >> 8);
  auVar60[1] = bVar62 & auVar35[1];
  bVar63 = (byte)((uint)iVar45 >> 0x10);
  auVar60[2] = bVar63 & auVar35[2];
  bVar64 = (byte)((uint)iVar45 >> 0x18);
  auVar60[3] = bVar64 & auVar35[3];
  auVar60[4] = bVar43 & auVar35[4];
  auVar60[5] = bVar62 & auVar35[5];
  auVar60[6] = bVar63 & auVar35[6];
  auVar60[7] = bVar64 & auVar35[7];
  auVar60[8] = bVar43 & auVar35[8];
  auVar60[9] = bVar62 & auVar35[9];
  auVar60[10] = bVar63 & auVar35[10];
  auVar60[0xb] = bVar64 & auVar35[0xb];
  auVar60[0xc] = bVar43 & auVar35[0xc];
  auVar60[0xd] = bVar62 & auVar35[0xd];
  auVar60[0xe] = bVar63 & auVar35[0xe];
  auVar60[0xf] = bVar64 & auVar35[0xf];
  auVar89 = auVar89 ^ (auVar89 ^ auVar22) & auVar35;
  auVar49 = auVar49 ^ (auVar49 ^ auVar84) & auVar60;
  iVar45 = -(*(byte *)(lVar5 + 0x24) & 1);
  fVar30 = auVar49._0_4_;
  auVar73._0_4_ = fVar30 * fVar30;
  fVar44 = auVar49._4_4_;
  auVar73._4_4_ = fVar44 * fVar44;
  fVar15 = auVar49._8_4_;
  auVar73._8_4_ = fVar15 * fVar15;
  auVar73._12_4_ = auVar49._12_4_ * auVar49._12_4_;
  auVar49 = NEON_ext(auVar73,auVar73,8,1);
  auVar103._4_4_ = iVar45;
  auVar103._0_4_ = iVar45;
  auVar103._8_4_ = iVar45;
  auVar103._12_4_ = iVar45;
  fVar14 = auVar49._0_4_ + auVar49._4_4_;
  fVar13 = auVar73._0_4_ + auVar73._4_4_ + fVar14;
  fVar14 = auVar73._0_4_ + auVar73._4_4_ + fVar14;
  uVar4 = CONCAT44(fVar14,fVar13);
  uVar82 = NEON_frsqrte(uVar4,4);
  fVar29 = (float)uVar82;
  fVar65 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar29 * fVar29),uVar4,4);
  fVar29 = fVar29 * (float)uVar82;
  fVar65 = fVar65 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar29 * fVar29),uVar4,4);
  fVar29 = fVar29 * (float)uVar82;
  fVar65 = fVar65 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar29 * fVar29),uVar4,4);
  fVar29 = fVar29 * (float)uVar82;
  fVar65 = fVar65 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar65 * fVar65,fVar29 * fVar29),uVar4,4);
  uVar67 = CONCAT44(fVar14 * fVar65 * (float)((ulong)uVar82 >> 0x20),fVar13 * fVar29 * (float)uVar82
                   );
  uVar67 = uVar67 ^ (uVar67 ^ uVar4) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar82 = NEON_frecpe(uVar67,4);
  uVar46 = NEON_frecps(uVar67,uVar82,4);
  fVar13 = (float)uVar82 * (float)uVar46;
  fVar14 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar46 >> 0x20);
  uVar82 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar14 = fVar14 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar14 = fVar14 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar67,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  iVar66 = -(uint)(0.0 < (float)uVar67);
  uVar82 = NEON_frecps(uVar67,CONCAT44(fVar14 * (float)((ulong)uVar82 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar82;
  fVar30 = fVar30 * fVar13;
  fVar44 = fVar44 * fVar13;
  fVar15 = fVar15 * fVar13;
  bVar43 = (byte)iVar66;
  bVar62 = (byte)((uint)iVar66 >> 8);
  bVar63 = (byte)((uint)iVar66 >> 0x10);
  bVar64 = (byte)((uint)iVar66 >> 0x18);
  fVar13 = (float)CONCAT13(bVar64 & (byte)((uint)fVar30 >> 0x18),
                           CONCAT12(bVar63 & (byte)((uint)fVar30 >> 0x10),
                                    CONCAT11(bVar62 & (byte)((uint)fVar30 >> 8),
                                             bVar43 & SUB41(fVar30,0))));
  auVar48._0_8_ =
       CONCAT17(bVar64 & (byte)((uint)fVar44 >> 0x18),
                CONCAT16(bVar63 & (byte)((uint)fVar44 >> 0x10),
                         CONCAT15(bVar62 & (byte)((uint)fVar44 >> 8),
                                  CONCAT14(bVar43 & SUB41(fVar44,0),fVar13))));
  auVar48[8] = bVar43 & SUB41(fVar15,0);
  auVar48[9] = bVar62 & (byte)((uint)fVar15 >> 8);
  auVar48[10] = bVar63 & (byte)((uint)fVar15 >> 0x10);
  auVar48[0xb] = bVar64 & (byte)((uint)fVar15 >> 0x18);
  fVar13 = -fVar13;
  fVar14 = -(float)((ulong)auVar48._0_8_ >> 0x20);
  auVar61._0_8_ = CONCAT44(fVar14,fVar13);
  auVar61._8_4_ = -auVar48._8_4_;
  auVar61._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar61._8_4_;
  *param_9 = auVar61._0_8_;
  *param_8 = uVar109;
  uStack_a8 = auVar89._8_8_;
  local_b0 = auVar89._0_8_;
  if (local_c4 == 3) {
    FUN_00231940(&local_b0,&local_110,&local_100,&local_f0,local_c0 + 2,local_c0);
    auVar61._4_4_ = fVar14;
    auVar61._0_4_ = fVar13;
    auVar61._12_4_ = 0;
    auVar104._0_4_ =
         local_150[0] +
         ((float)local_140 - local_150[0]) * local_c0[2] +
         (local_130[0] - local_150[0]) * local_c0[0];
    auVar104._4_4_ =
         local_150[1] +
         (local_140._4_4_ - local_150[1]) * local_c0[2] +
         (local_130[1] - local_150[1]) * local_c0[0];
    auVar104._8_4_ =
         (float)uStack_148 +
         ((float)uStack_138 - (float)uStack_148) * local_c0[2] +
         (local_130[2] - (float)uStack_148) * local_c0[0];
    auVar104._12_4_ = uStack_148._4_4_ + 0.0;
  }
  else if (local_c4 == 2) {
    FUN_002318c0(&local_b0,&local_110,&local_100,local_c0 + 2);
    auVar61._4_4_ = fVar14;
    auVar61._0_4_ = fVar13;
    auVar61._12_4_ = 0;
    auVar96._0_8_ =
         CONCAT44(local_150[1] + (local_140._4_4_ - local_150[1]) * local_c0[2],
                  local_150[0] + ((float)local_140 - local_150[0]) * local_c0[2]);
    auVar96._8_4_ = (float)uStack_148 + ((float)uStack_138 - (float)uStack_148) * local_c0[2];
    auVar96._12_4_ = uStack_148._4_4_ + (uStack_138._4_4_ - uStack_148._4_4_) * local_c0[2];
    auVar49 = NEON_ext(auVar96,auVar96,8,1);
    auVar104._8_4_ = (float)auVar49._0_4_;
    auVar104._0_8_ = auVar96._0_8_;
    auVar104._12_4_ = 0.0;
  }
  else if (local_c4 == 1) {
    auVar104._4_4_ = local_150[1];
    auVar104._0_4_ = local_150[0];
    auVar104._8_4_ = (float)uStack_148;
    auVar104._12_4_ = uStack_148._4_4_;
  }
  fVar13 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar27._0_8_ =
       CONCAT44(auVar104._4_4_ - auVar61._4_4_ * fVar13,auVar104._0_4_ - auVar61._0_4_ * fVar13);
  auVar27._8_4_ = auVar104._8_4_ - auVar61._8_4_ * fVar13;
  auVar27._12_4_ = auVar104._12_4_ - auVar61._12_4_ * fVar13;
  auVar49 = NEON_ext(auVar27,auVar27,8,1);
  auVar28._8_4_ = auVar49._0_4_;
  auVar28._0_8_ = auVar27._0_8_;
  auVar28._12_4_ = 0;
  auVar104 = auVar104 ^ (auVar104 ^ auVar28) & auVar103;
  param_10[1] = auVar104._8_8_;
  *param_10 = auVar104._0_8_;
  return 1;
code_r0x002be9d8:
  auVar89._8_8_ = uStack_1e8;
  auVar89._0_8_ = local_1f0;
  auVar49._8_8_ = uStack_208;
  auVar49._0_8_ = local_210;
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  lVar5 = *(long *)(param_2 + 8);
  goto LAB_002be9f4;
}


