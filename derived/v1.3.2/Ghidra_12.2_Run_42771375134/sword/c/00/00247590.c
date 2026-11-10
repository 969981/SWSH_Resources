/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00247590; name: FUN_00247590
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00247590(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar31;
  float fVar32;
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  byte bVar33;
  byte bVar49;
  byte bVar50;
  uint uVar34;
  undefined1 auVar36 [12];
  float fVar52;
  float fVar53;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar35;
  byte bVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar54;
  undefined8 uVar55;
  undefined1 auVar57 [16];
  float fVar67;
  undefined8 uVar56;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar68;
  ulong uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar87;
  float fVar94;
  undefined1 auVar88 [16];
  float fVar93;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar115;
  undefined8 uVar116;
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
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
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
  uVar116 = *(undefined8 *)param_6;
  uVar77 = *(undefined8 *)(param_6 + 2);
  local_c4 = 1;
  fVar13 = *param_4;
  fVar14 = param_4[1];
  fVar32 = param_4[2];
  fVar54 = param_4[3];
  auVar83._0_4_ = fVar13 * fVar13;
  auVar83._4_4_ = fVar14 * fVar14;
  auVar83._8_4_ = fVar32 * fVar32;
  auVar83._12_4_ = fVar54 * fVar54;
  auVar57 = NEON_ext(auVar83,auVar83,8,1);
  uVar34 = -(uint)(1.1920929e-07 < auVar83._0_4_ + auVar83._4_4_ + auVar57._0_4_ + auVar57._4_4_);
  fVar17 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar13) & uVar34);
  fVar31 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar14) & uVar34);
  fVar32 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar32) & uVar34);
  fVar13 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar54) & uVar34);
  auVar99._0_4_ = fVar17 * fVar17;
  auVar99._4_4_ = fVar31 * fVar31;
  auVar99._8_4_ = fVar32 * fVar32;
  auVar99._12_4_ = fVar13 * fVar13;
  auVar57 = NEON_ext(auVar99,auVar99,8,1);
  fVar14 = auVar57._0_4_ + auVar57._4_4_;
  fVar13 = auVar99._0_4_ + auVar99._4_4_ + fVar14;
  fVar14 = auVar99._0_4_ + auVar99._4_4_ + fVar14;
  uVar4 = CONCAT44(fVar14,fVar13);
  uVar55 = NEON_frsqrte(uVar4,4);
  fVar54 = (float)uVar55;
  fVar67 = (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar54 * fVar54),uVar4,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar67 = fVar67 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar54 * fVar54),uVar4,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar67 = fVar67 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar54 * fVar54),uVar4,4);
  fVar54 = fVar54 * (float)uVar55;
  fVar67 = fVar67 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frsqrts(CONCAT44(fVar67 * fVar67,fVar54 * fVar54),uVar4,4);
  uVar69 = CONCAT44(fVar14 * fVar67 * (float)((ulong)uVar55 >> 0x20),fVar13 * fVar54 * (float)uVar55
                   );
  uVar69 = uVar69 ^ (uVar69 ^ uVar4) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar55 = NEON_frecpe(uVar69,4);
  uVar56 = NEON_frecps(uVar69,uVar55,4);
  fVar13 = (float)uVar55 * (float)uVar56;
  fVar14 = (float)((ulong)uVar55 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
  uVar55 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar55;
  fVar14 = fVar14 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar55;
  fVar14 = fVar14 * (float)((ulong)uVar55 >> 0x20);
  uVar55 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar55;
  uVar55 = NEON_frecps(uVar69,CONCAT44(fVar14 * (float)((ulong)uVar55 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar55;
  fVar17 = fVar17 * fVar13;
  fVar31 = fVar31 * fVar13;
  fVar32 = fVar32 * fVar13;
  fVar67 = -fVar17;
  fVar52 = -fVar31;
  fVar53 = -fVar32;
  lVar5 = *(long *)(param_2 + 8);
  auVar57 = *(undefined1 (*) [16])(lVar5 + 0x40);
  auVar102 = *(undefined1 (*) [16])(lVar5 + 0x50);
  auVar88._0_4_ = auVar57._0_4_ * fVar67;
  auVar88._4_4_ = auVar57._4_4_ * fVar52;
  auVar88._8_4_ = auVar57._8_4_ * fVar53;
  auVar88._12_4_ = auVar57._12_4_ * 0.0;
  auVar99 = NEON_ext(auVar88,auVar88,8,1);
  auVar95._0_4_ = auVar102._0_4_ * fVar67;
  auVar95._4_4_ = auVar102._4_4_ * fVar52;
  auVar95._8_4_ = auVar102._8_4_ * fVar53;
  auVar95._12_4_ = auVar102._12_4_ * 0.0;
  auVar100 = NEON_ext(auVar95,auVar95,8,1);
  lVar12 = *(long *)(param_3 + 8);
  auVar70._0_4_ = fVar17 * *(float *)(lVar12 + 0x30);
  auVar70._4_4_ = fVar31 * *(float *)(lVar12 + 0x34);
  auVar70._8_4_ = fVar32 * *(float *)(lVar12 + 0x38);
  auVar70._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
  fVar13 = auVar88._0_4_ + auVar88._4_4_ + auVar99._0_4_ + auVar99._4_4_;
  auVar78._0_4_ = fVar17 * *(float *)(lVar12 + 0x40);
  auVar78._4_4_ = fVar31 * *(float *)(lVar12 + 0x44);
  auVar78._8_4_ = fVar32 * *(float *)(lVar12 + 0x48);
  auVar78._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
  fVar14 = auVar95._0_4_ + auVar95._4_4_ + auVar100._0_4_ + auVar100._4_4_;
  auVar101._0_4_ = -(uint)(fVar14 < fVar13);
  auVar101._4_4_ = auVar101._0_4_;
  auVar101._8_4_ = auVar101._0_4_;
  auVar101._12_4_ = auVar101._0_4_;
  auVar102 = auVar102 ^ (auVar102 ^ auVar57) & auVar101;
  auVar99 = NEON_ext(auVar70,auVar70,8,1);
  auVar57 = *(undefined1 (*) [16])(lVar5 + 0x30);
  fVar54 = auVar99._0_4_ + auVar99._4_4_;
  auVar99 = NEON_ext(auVar78,auVar78,8,1);
  auVar37._0_4_ = auVar57._0_4_ * fVar67;
  auVar37._4_4_ = auVar57._4_4_ * fVar52;
  auVar37._8_4_ = auVar57._8_4_ * fVar53;
  auVar37._12_4_ = auVar57._12_4_ * 0.0;
  fVar67 = auVar99._0_4_ + auVar99._4_4_;
  auVar100._0_4_ = fVar17 * *(float *)(lVar12 + 0x50);
  auVar100._4_4_ = fVar31 * *(float *)(lVar12 + 0x54);
  auVar100._8_4_ = fVar32 * *(float *)(lVar12 + 0x58);
  auVar100._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
  auVar99 = NEON_ext(auVar37,auVar37,8,1);
  auVar83 = NEON_ext(auVar100,auVar100,8,1);
  fVar32 = auVar37._0_4_ + auVar37._4_4_ + auVar99._0_4_ + auVar99._4_4_;
  auVar38._0_4_ = -(uint)(fVar14 < fVar32 && fVar13 < fVar32);
  auVar38._4_4_ = auVar38._0_4_;
  auVar38._8_4_ = auVar38._0_4_;
  auVar38._12_4_ = auVar38._0_4_;
  fStack_108 = auVar100._0_4_ + auVar100._4_4_ + auVar83._0_4_ + auVar83._4_4_;
  auVar102 = auVar102 ^ (auVar102 ^ auVar57) & auVar38;
  fStack_198 = auVar102._8_4_;
  fStack_194 = auVar102._12_4_;
  local_1a0 = auVar102._0_4_;
  fStack_19c = auVar102._4_4_;
  uVar55 = NEON_ext(CONCAT44(auVar70._0_4_ + auVar70._4_4_ + fVar54,
                             auVar70._0_4_ + auVar70._4_4_ + fVar54),
                    CONCAT44(auVar78._0_4_ + auVar78._4_4_ + fVar67,
                             auVar78._0_4_ + auVar78._4_4_ + fVar67),4,1);
  fStack_104 = 0.0;
  local_110._0_4_ = (float)uVar55;
  local_110._4_4_ = (float)((ulong)uVar55 >> 0x20);
  uVar4 = FUN_00222070(lVar12,&local_110);
  pfVar7 = (float *)(*(long *)(lVar12 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
  fVar13 = *pfVar7;
  fVar14 = pfVar7[1];
  fVar32 = pfVar7[2];
  auVar103._8_8_ = 0xffffffffffffffff;
  auVar103._0_8_ = 0xffffffffffffffff;
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
       *(float *)(lVar12 + 0x50) * fVar32;
  local_110._4_4_ =
       *(float *)(lVar12 + 0x34) * fVar13 + *(float *)(lVar12 + 0x44) * fVar14 +
       *(float *)(lVar12 + 0x54) * fVar32;
  local_190 = CONCAT44(local_110._4_4_,(float)local_110);
  fVar13 = *(float *)(lVar12 + 0x38) * fVar13 + *(float *)(lVar12 + 0x48) * fVar14 +
           *(float *)(lVar12 + 0x58) * fVar32;
  local_110._0_4_ = local_1a0 - (float)local_110;
  local_110._4_4_ = fStack_19c - local_110._4_4_;
  auVar102._0_8_ = CONCAT44(local_110._4_4_,(float)local_110);
  auVar102._8_4_ = fStack_198 - fVar13;
  auVar102._12_4_ = fStack_194 - 0.0;
  fVar32 = -(float)local_110;
  fVar54 = -local_110._4_4_;
  auVar57._0_8_ = CONCAT44(fVar54,fVar32);
  auVar57._8_4_ = -auVar102._8_4_;
  uStack_1e8 = auVar102._8_8_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
  uStack_148._0_4_ = fStack_198;
  uStack_148._4_4_ = fStack_194;
  local_150[0] = local_1a0;
  local_150[1] = fStack_19c;
  uStack_138 = 0;
  local_140 = 0;
  uStack_188 = (ulong)(uint)fVar13;
  uStack_178 = 0;
  local_180 = 0;
  lVar5 = *(long *)(param_3 + 8);
  auVar57._12_4_ = 0;
  uVar55 = NEON_fmin(0x7f7fffff7f7fffff,
                     CONCAT44(*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x18)),4);
  fVar14 = (float)uVar55 * 0.1;
  auVar39._0_4_ = fVar32 * fVar32;
  auVar39._4_4_ = fVar54 * fVar54;
  auVar39._8_4_ = auVar57._8_4_ * auVar57._8_4_;
  auVar39._12_4_ = 0;
  auVar99 = NEON_ext(auVar39,auVar39,8,1);
  fVar13 = auVar39._0_4_ + auVar39._4_4_ + auVar99._0_4_ + auVar99._4_4_;
  bVar3 = fVar14 * fVar14 < fVar13;
  auVar40._0_4_ = -(uint)bVar3;
  auVar40._4_4_ = -(uint)bVar3;
  auVar40._8_4_ = -(uint)bVar3;
  auVar40._12_4_ = -(uint)bVar3;
  NEON_ext(auVar40,auVar40,8,1);
  uStack_208 = (ulong)(uint)auVar57._8_4_;
  fStack_108 = auVar102._8_4_;
  fStack_104 = auVar102._12_4_;
  if (CONCAT13((char)auVar40._12_4_,
               CONCAT12((char)auVar40._8_4_,CONCAT11((char)auVar40._4_4_,(char)auVar40._0_4_))) ==
      -1) {
    local_1c0._0_4_ = (float)uVar116;
    local_1c0._4_4_ = (float)((ulong)uVar116 >> 0x20);
    fStack_1b8 = (float)uVar77;
    fStack_1b4 = (float)((ulong)uVar77 >> 0x20);
    auVar58._0_8_ = CONCAT44(fStack_1cc * 0.0 + local_1c0._4_4_,local_1d0 * 0.0 + (float)local_1c0);
    auVar58._8_4_ = fStack_1c8 * 0.0 + fStack_1b8;
    auVar58._12_4_ = fStack_1c4 * 0.0 + fStack_1b4;
    fVar54 = param_1 + fVar14;
    auVar99 = NEON_ext(auVar58,auVar58,8,1);
    fVar32 = auVar99._0_4_;
    uVar116 = 0;
    auVar84._8_4_ = auVar57._8_4_;
    auVar84._0_8_ = auVar57._0_8_;
    auVar84._12_4_ = 0;
    local_210 = auVar57._0_8_;
    local_1f0 = auVar102._0_8_;
    local_1c0 = auVar58._0_8_;
    do {
      fVar53 = auVar84._0_4_;
      auVar18._0_4_ = fVar53 * fVar53;
      fVar93 = auVar84._4_4_;
      auVar18._4_4_ = fVar93 * fVar93;
      fVar94 = auVar84._8_4_;
      auVar18._8_4_ = fVar94 * fVar94;
      auVar18._12_4_ = auVar84._12_4_ * auVar84._12_4_;
      lVar12 = *(long *)(param_2 + 8);
      auVar57 = NEON_ext(auVar18,auVar18,8,1);
      fVar17 = auVar57._0_4_ + auVar57._4_4_;
      fVar67 = auVar18._0_4_ + auVar18._4_4_ + fVar17;
      fVar17 = auVar18._0_4_ + auVar18._4_4_ + fVar17;
      uVar4 = CONCAT44(fVar17,fVar67);
      uVar77 = NEON_frsqrte(uVar4,4);
      fVar31 = (float)uVar77;
      fVar52 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar31 * fVar31),uVar4,4);
      fVar31 = fVar31 * (float)uVar77;
      fVar52 = fVar52 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar31 * fVar31),uVar4,4);
      fVar31 = fVar31 * (float)uVar77;
      fVar52 = fVar52 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar31 * fVar31),uVar4,4);
      fVar31 = fVar31 * (float)uVar77;
      fVar52 = fVar52 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar31 * fVar31),uVar4,4);
      uVar69 = CONCAT44(fVar17 * fVar52 * (float)((ulong)uVar77 >> 0x20),
                        fVar67 * fVar31 * (float)uVar77);
      uVar69 = uVar69 ^ (uVar69 ^ uVar4) & CONCAT44(-(uint)(fVar67 == 0.0),-(uint)(fVar67 == 0.0));
      uVar77 = NEON_frecpe(uVar69,4);
      uVar56 = NEON_frecps(uVar69,uVar77,4);
      fVar67 = (float)uVar77 * (float)uVar56;
      fVar17 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      uVar77 = NEON_frecps(uVar69,CONCAT44(fVar17,fVar67),4);
      fVar67 = fVar67 * (float)uVar77;
      fVar17 = fVar17 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar69,CONCAT44(fVar17,fVar67),4);
      fVar67 = fVar67 * (float)uVar77;
      fVar17 = fVar17 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar69,CONCAT44(fVar17,fVar67),4);
      fVar67 = fVar67 * (float)uVar77;
      auVar57 = *(undefined1 (*) [16])(lVar12 + 0x50);
      uVar77 = NEON_frecps(uVar69,CONCAT44(fVar17 * (float)((ulong)uVar77 >> 0x20),fVar67),4);
      fVar67 = fVar67 * (float)uVar77;
      fVar53 = fVar53 * fVar67;
      fVar93 = fVar93 * fVar67;
      fVar94 = fVar94 * fVar67;
      fVar52 = -fVar53;
      fVar97 = -fVar93;
      fVar98 = -fVar94;
      auVar102 = *(undefined1 (*) [16])(lVar12 + 0x30);
      auVar99 = *(undefined1 (*) [16])(lVar12 + 0x40);
      auVar71._0_4_ = auVar102._0_4_ * fVar53;
      auVar71._4_4_ = auVar102._4_4_ * fVar93;
      auVar71._8_4_ = auVar102._8_4_ * fVar94;
      auVar71._12_4_ = auVar102._12_4_ * 0.0;
      auVar100 = NEON_ext(auVar71,auVar71,8,1);
      auVar79._0_4_ = auVar99._0_4_ * fVar53;
      auVar79._4_4_ = auVar99._4_4_ * fVar93;
      auVar79._8_4_ = auVar99._8_4_ * fVar94;
      auVar79._12_4_ = auVar99._12_4_ * 0.0;
      auVar83 = NEON_ext(auVar79,auVar79,8,1);
      fVar67 = auVar71._0_4_ + auVar71._4_4_ + auVar100._0_4_ + auVar100._4_4_;
      auVar85._0_4_ = auVar57._0_4_ * fVar53;
      auVar85._4_4_ = auVar57._4_4_ * fVar93;
      auVar85._8_4_ = auVar57._8_4_ * fVar94;
      auVar85._12_4_ = auVar57._12_4_ * 0.0;
      auVar100 = NEON_ext(auVar85,auVar85,8,1);
      fVar17 = auVar79._0_4_ + auVar79._4_4_ + auVar83._0_4_ + auVar83._4_4_;
      fVar31 = auVar85._0_4_ + auVar85._4_4_ + auVar100._0_4_ + auVar100._4_4_;
      iVar35 = -(uint)(fVar17 < fVar67 && fVar31 < fVar67);
      auVar89._4_4_ = iVar35;
      auVar89._0_4_ = iVar35;
      auVar89._8_4_ = iVar35;
      auVar89._12_4_ = iVar35;
      auVar72._0_4_ = -(uint)(fVar31 < fVar17);
      auVar72._4_4_ = auVar72._0_4_;
      auVar72._8_4_ = auVar72._0_4_;
      auVar72._12_4_ = auVar72._0_4_;
      auVar57 = auVar57 ^ (auVar57 ^ auVar99) & auVar72;
      auVar57 = auVar57 ^ (auVar57 ^ auVar102) & auVar89;
      fStack_198 = auVar57._8_4_;
      fStack_194 = auVar57._12_4_;
      local_1a0 = auVar57._0_4_;
      fStack_19c = auVar57._4_4_;
      auVar41._0_4_ = fVar52 * *(float *)(lVar5 + 0x40);
      auVar41._4_4_ = fVar97 * *(float *)(lVar5 + 0x44);
      auVar41._8_4_ = fVar98 * *(float *)(lVar5 + 0x48);
      auVar41._12_4_ = *(float *)(lVar5 + 0x4c) * 0.0;
      auVar19._0_4_ = fVar52 * *(float *)(lVar5 + 0x30);
      auVar19._4_4_ = fVar97 * *(float *)(lVar5 + 0x34);
      auVar19._8_4_ = fVar98 * *(float *)(lVar5 + 0x38);
      auVar19._12_4_ = *(float *)(lVar5 + 0x3c) * 0.0;
      auVar102 = NEON_ext(auVar19,auVar19,8,1);
      fVar67 = auVar102._0_4_ + auVar102._4_4_;
      auVar102 = NEON_ext(auVar41,auVar41,8,1);
      fVar17 = auVar102._0_4_ + auVar102._4_4_;
      auVar59._0_4_ = fVar52 * *(float *)(lVar5 + 0x50);
      auVar59._4_4_ = fVar97 * *(float *)(lVar5 + 0x54);
      auVar59._8_4_ = fVar98 * *(float *)(lVar5 + 0x58);
      auVar59._12_4_ = *(float *)(lVar5 + 0x5c) * 0.0;
      auVar102 = NEON_ext(auVar59,auVar59,8,1);
      uStack_a8 = (ulong)(uint)(auVar59._0_4_ + auVar59._4_4_ + auVar102._0_4_ + auVar102._4_4_);
      local_b0 = NEON_ext(CONCAT44(auVar19._0_4_ + auVar19._4_4_ + fVar67,
                                   auVar19._0_4_ + auVar19._4_4_ + fVar67),
                          CONCAT44(auVar41._0_4_ + auVar41._4_4_ + fVar17,
                                   auVar41._0_4_ + auVar41._4_4_ + fVar17),4,1);
      uVar4 = FUN_00222070(lVar5,&local_b0);
      pfVar7 = (float *)(*(long *)(lVar5 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
      fVar67 = *pfVar7;
      fVar17 = pfVar7[1];
      fVar31 = pfVar7[2];
      auVar42._0_4_ =
           (float)local_1c0 +
           *(float *)(lVar5 + 0x30) * fVar67 + *(float *)(lVar5 + 0x40) * fVar17 +
           *(float *)(lVar5 + 0x50) * fVar31;
      auVar42._4_4_ =
           local_1c0._4_4_ +
           *(float *)(lVar5 + 0x34) * fVar67 + *(float *)(lVar5 + 0x44) * fVar17 +
           *(float *)(lVar5 + 0x54) * fVar31;
      auVar42._8_4_ =
           fVar32 + *(float *)(lVar5 + 0x38) * fVar67 + *(float *)(lVar5 + 0x48) * fVar17 +
                    *(float *)(lVar5 + 0x58) * fVar31;
      auVar42._12_4_ = 0;
      auVar24._0_4_ = local_1a0 - auVar42._0_4_;
      auVar24._4_4_ = fStack_19c - auVar42._4_4_;
      auVar24._8_4_ = fStack_198 - auVar42._8_4_;
      auVar24._12_4_ = fStack_194 - 0.0;
      auVar60._0_4_ = fVar53 * -auVar24._0_4_;
      auVar60._4_4_ = fVar93 * -auVar24._4_4_;
      auVar60._8_4_ = fVar94 * -auVar24._8_4_;
      auVar60._12_4_ = 0;
      auVar102 = NEON_ext(auVar60,auVar60,8,1);
      fVar17 = auVar102._0_4_ + auVar102._4_4_;
      fVar31 = (auVar60._0_4_ + auVar60._4_4_ + fVar17) - fVar54;
      fVar67 = fVar13;
      if (0.0 < fVar31) {
        auVar102 = *param_7;
        auVar80._0_4_ = fVar53 * auVar102._0_4_;
        auVar80._4_4_ = fVar93 * auVar102._4_4_;
        auVar80._8_4_ = fVar94 * auVar102._8_4_;
        auVar80._12_4_ = auVar102._12_4_ * 0.0;
        auVar99 = NEON_ext(auVar80,auVar80,8,1);
        fVar53 = auVar99._0_4_ + auVar99._4_4_;
        fVar13 = auVar80._0_4_ + auVar80._4_4_ + fVar53;
        uVar77 = CONCAT44(auVar80._0_4_ + auVar80._4_4_ + fVar53,fVar13);
        if (0.0 <= fVar13) {
          return 0;
        }
        uVar56 = NEON_frecpe(uVar77,4);
        uVar87 = NEON_frecps(uVar77,uVar56,4);
        fVar13 = (float)uVar56 * (float)uVar87;
        fVar53 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar53,fVar13),4);
        fVar13 = fVar13 * (float)uVar56;
        fVar53 = fVar53 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar53,fVar13),4);
        fVar13 = fVar13 * (float)uVar56;
        fVar53 = fVar53 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar53,fVar13),4);
        fVar13 = fVar13 * (float)uVar56;
        fVar53 = fVar53 * (float)((ulong)uVar56 >> 0x20);
        uVar77 = NEON_frecps(uVar77,CONCAT44(fVar53,fVar13),4);
        fVar93 = (float)uVar116;
        fVar13 = fVar93 - fVar31 * fVar13 * (float)uVar77;
        fVar17 = (float)((ulong)uVar116 >> 0x20) -
                 ((auVar60._0_4_ + auVar60._4_4_ + fVar17) -
                 (param_1 + (float)((ulong)uVar55 >> 0x20) * 0.1)) *
                 fVar53 * (float)((ulong)uVar77 >> 0x20);
        uVar116 = CONCAT44(fVar17,fVar13);
        if (fVar93 < fVar13) {
          uVar116 = NEON_fmov(0x3f800000,4);
          if ((float)uVar116 < fVar13) {
            return 0;
          }
          fVar93 = auVar102._0_4_ * fVar13 + *param_6;
          fVar94 = auVar102._4_4_ * fVar13 + param_6[1];
          auVar43._0_8_ = CONCAT44(fVar94,fVar93);
          auVar43._8_4_ = auVar102._8_4_ * fVar13 + param_6[2];
          auVar43._12_4_ = auVar102._12_4_ * fVar13 + param_6[3];
          auVar102 = NEON_ext(auVar43,auVar43,8,1);
          fVar53 = auVar102._0_4_;
          local_1c0._0_4_ = fVar93 - (float)local_1c0;
          local_1c0._4_4_ = fVar94 - local_1c0._4_4_;
          fVar32 = fVar53 - fVar32;
          local_180._0_4_ = (float)local_180 + (float)local_1c0;
          local_180._4_4_ = local_180._4_4_ + local_1c0._4_4_;
          uStack_178._0_4_ = (float)uStack_178 + fVar32;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_190._0_4_ = (float)local_190 + (float)local_1c0;
          local_190._4_4_ = local_190._4_4_ + local_1c0._4_4_;
          uStack_188._0_4_ = (float)uStack_188 + fVar32;
          uStack_188._4_4_ = uStack_188._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + (float)local_1c0;
          local_170._4_4_ = local_170._4_4_ + local_1c0._4_4_;
          uStack_168._0_4_ = (float)uStack_168 + fVar32;
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
          auVar44._0_4_ = fVar52 * *(float *)(lVar5 + 0x40);
          auVar44._4_4_ = fVar97 * *(float *)(lVar5 + 0x44);
          auVar44._8_4_ = fVar98 * *(float *)(lVar5 + 0x48);
          auVar44._12_4_ = *(float *)(lVar5 + 0x4c) * 0.0;
          auVar20._0_4_ = fVar52 * *(float *)(lVar5 + 0x30);
          auVar20._4_4_ = fVar97 * *(float *)(lVar5 + 0x34);
          auVar20._8_4_ = fVar98 * *(float *)(lVar5 + 0x38);
          auVar20._12_4_ = *(float *)(lVar5 + 0x3c) * 0.0;
          auVar102 = NEON_ext(auVar20,auVar20,8,1);
          fVar32 = auVar102._0_4_ + auVar102._4_4_;
          auVar102 = NEON_ext(auVar44,auVar44,8,1);
          fVar67 = auVar102._0_4_ + auVar102._4_4_;
          auVar61._0_4_ = fVar52 * *(float *)(lVar5 + 0x50);
          auVar61._4_4_ = fVar97 * *(float *)(lVar5 + 0x54);
          auVar61._8_4_ = fVar98 * *(float *)(lVar5 + 0x58);
          auVar61._12_4_ = *(float *)(lVar5 + 0x5c) * 0.0;
          auVar102 = NEON_ext(auVar61,auVar61,8,1);
          uStack_a8 = (ulong)(uint)(auVar61._0_4_ + auVar61._4_4_ + auVar102._0_4_ + auVar102._4_4_)
          ;
          local_b0 = NEON_ext(CONCAT44(auVar20._0_4_ + auVar20._4_4_ + fVar32,
                                       auVar20._0_4_ + auVar20._4_4_ + fVar32),
                              CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar67,
                                       auVar44._0_4_ + auVar44._4_4_ + fVar67),4,1);
          uVar4 = FUN_00222070(lVar5,&local_b0);
          pfVar7 = (float *)(*(long *)(lVar5 + 0xa0) + (uVar4 & 0xffffffff) * 0xc);
          fVar32 = *pfVar7;
          fVar67 = pfVar7[1];
          fVar31 = pfVar7[2];
          uVar116 = CONCAT44(fVar17,fVar13);
          local_210 = auVar84._0_8_;
          auVar42._0_4_ =
               fVar93 + *(float *)(lVar5 + 0x30) * fVar32 + *(float *)(lVar5 + 0x40) * fVar67 +
                        *(float *)(lVar5 + 0x50) * fVar31;
          auVar42._4_4_ =
               fVar94 + *(float *)(lVar5 + 0x34) * fVar32 + *(float *)(lVar5 + 0x44) * fVar67 +
                        *(float *)(lVar5 + 0x54) * fVar31;
          auVar42._8_4_ =
               fVar53 + *(float *)(lVar5 + 0x38) * fVar32 + *(float *)(lVar5 + 0x48) * fVar67 +
                        *(float *)(lVar5 + 0x58) * fVar31;
          auVar42._12_4_ = 0;
          auVar24._0_4_ = local_1a0 - auVar42._0_4_;
          auVar24._4_4_ = fStack_19c - auVar42._4_4_;
          auVar24._8_4_ = fStack_198 - auVar42._8_4_;
          auVar24._12_4_ = fStack_194 - 0.0;
          fVar67 = 3.4028235e+38;
          uStack_208 = auVar84._8_8_;
          local_1c0 = auVar43._0_8_;
          fVar32 = fVar53;
        }
      }
      uVar34 = local_c4;
      uVar4 = (ulong)local_c4;
      bVar3 = local_c4 == 3;
      local_c4 = local_c4 + 1;
      (&uStack_148)[uVar4 * 2] = auVar57._8_8_;
      *(long *)(local_150 + uVar4 * 4) = auVar57._0_8_;
      (&uStack_188)[uVar4 * 2] = auVar42._8_8_;
      (&local_190)[uVar4 * 2] = auVar42._0_8_;
      *(long *)(local_c0 + uVar4 * 4 + -0x12) = auVar24._8_8_;
      *(long *)(local_c0 + uVar4 * 4 + -0x14) = auVar24._0_8_;
      if (bVar3) {
        auVar24 = FUN_00237120(&local_110,local_150,&local_190,&local_c4);
      }
      else if (uVar34 == 2) {
        auVar24._4_4_ = local_110._4_4_;
        auVar24._0_4_ = (float)local_110;
        auVar24._8_4_ = fStack_108;
        auVar24._12_4_ = fStack_104;
        auVar1._4_4_ = fStack_fc;
        auVar1._0_4_ = local_100;
        auVar1._8_4_ = fStack_f8;
        auVar1._12_4_ = fStack_f4;
        auVar2._4_4_ = fStack_ec;
        auVar2._0_4_ = local_f0;
        auVar2._8_4_ = fStack_e8;
        auVar2._12_4_ = fStack_e4;
        auVar75._0_4_ = local_f0 - (float)local_110;
        auVar75._4_4_ = fStack_ec - local_110._4_4_;
        auVar75._8_4_ = fStack_e8 - fStack_108;
        auVar75._12_4_ = fStack_e4 - fStack_104;
        auVar81._0_4_ = local_100 - (float)local_110;
        auVar81._4_4_ = fStack_fc - local_110._4_4_;
        auVar81._8_4_ = fStack_f8 - fStack_108;
        auVar81._12_4_ = fStack_f4 - fStack_104;
        auVar57 = NEON_ext(auVar81,auVar81,8,1);
        auVar102 = NEON_ext(auVar75,auVar75,8,1);
        fVar53 = auVar81._0_4_ * auVar75._4_4_ - auVar81._4_4_ * auVar75._0_4_;
        uVar77 = NEON_ext(CONCAT44(auVar81._4_4_ * auVar75._8_4_ - auVar81._8_4_ * auVar75._4_4_,
                                   fVar53),
                          CONCAT44(auVar57._4_4_ * auVar75._4_4_ - auVar81._4_4_ * auVar102._4_4_,
                                   auVar57._0_4_ * auVar75._0_4_ - auVar81._0_4_ * auVar102._0_4_),4
                          ,1);
        fVar31 = (float)uVar77;
        auVar90._0_4_ = fVar31 * fVar31;
        fVar52 = (float)((ulong)uVar77 >> 0x20);
        auVar90._4_4_ = fVar52 * fVar52;
        auVar90._8_4_ = fVar53 * fVar53;
        auVar90._12_4_ = 0;
        auVar57 = NEON_ext(auVar90,auVar90,8,1);
        fVar17 = auVar57._0_4_ + auVar57._4_4_;
        fVar13 = auVar90._0_4_ + auVar90._4_4_ + fVar17;
        uVar77 = CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar17,fVar13);
        local_c4 = 3;
        if (1.1920929e-07 < fVar13) {
          if (fVar13 != 0.0) {
            auVar57 = NEON_ext(auVar1,auVar1,8,1);
            auVar102 = NEON_ext(auVar2,auVar2,8,1);
            fVar93 = local_100 * fStack_ec - fStack_fc * local_f0;
            auVar99 = NEON_ext(auVar24,auVar24,8,1);
            uVar87 = NEON_ext(CONCAT44(fStack_fc * fStack_e8 - fStack_f8 * fStack_ec,fVar93),
                              CONCAT44(auVar57._4_4_ * fStack_ec - fStack_fc * auVar102._4_4_,
                                       auVar57._0_4_ * local_f0 - local_100 * auVar102._0_4_),4,1);
            fVar13 = local_110._4_4_ * local_f0 - (float)local_110 * fStack_ec;
            uVar115 = NEON_ext(CONCAT44(fStack_108 * fStack_ec - local_110._4_4_ * fStack_e8,fVar13)
                               ,CONCAT44(local_110._4_4_ * auVar102._4_4_ -
                                         auVar99._4_4_ * fStack_ec,
                                         (float)local_110 * auVar102._0_4_ -
                                         auVar99._0_4_ * local_f0),4,1);
            fVar17 = (float)local_110 * fStack_fc - local_110._4_4_ * local_100;
            uVar56 = NEON_ext(CONCAT44(local_110._4_4_ * fStack_f8 - fStack_108 * fStack_fc,fVar17),
                              CONCAT44(auVar99._4_4_ * fStack_fc - local_110._4_4_ * auVar57._4_4_,
                                       auVar99._0_4_ * local_100 - (float)local_110 * auVar57._0_4_)
                              ,4,1);
            auVar104._0_4_ = (float)uVar87 * fVar31;
            auVar104._4_4_ = (float)((ulong)uVar87 >> 0x20) * fVar52;
            auVar104._8_4_ = fVar93 * fVar53;
            auVar104._12_4_ = 0;
            auVar57 = NEON_ext(auVar104,auVar104,8,1);
            auVar107._0_4_ = (float)uVar115 * fVar31;
            auVar107._4_4_ = (float)((ulong)uVar115 >> 0x20) * fVar52;
            auVar107._8_4_ = fVar13 * fVar53;
            auVar107._12_4_ = 0;
            auVar102 = NEON_ext(auVar107,auVar107,8,1);
            fVar13 = auVar104._0_4_ + auVar104._4_4_ + auVar57._0_4_ + auVar57._4_4_;
            auVar112._0_4_ = (float)uVar56 * fVar31;
            auVar112._4_4_ = (float)((ulong)uVar56 >> 0x20) * fVar52;
            auVar112._8_4_ = fVar17 * fVar53;
            auVar112._12_4_ = 0;
            fVar17 = auVar107._0_4_ + auVar107._4_4_ + auVar102._0_4_ + auVar102._4_4_;
            auVar57 = NEON_ext(auVar112,auVar112,8,1);
            fVar93 = auVar112._0_4_ + auVar112._4_4_ + auVar57._0_4_ + auVar57._4_4_;
            bVar3 = (0.0 <= fVar13 && 0.0 <= fVar17) && 0.0 <= fVar93;
            auVar113._0_4_ = -(uint)bVar3;
            auVar113._4_4_ = -(uint)bVar3;
            auVar113._8_4_ = -(uint)bVar3;
            auVar113._12_4_ = -(uint)bVar3;
            NEON_ext(auVar113,auVar113,8,1);
            if (CONCAT13((char)auVar113._12_4_,
                         CONCAT12((char)auVar113._8_4_,
                                  CONCAT11((char)auVar113._4_4_,(char)auVar113._0_4_))) == -1) {
              auVar25._0_4_ = (float)local_110 * fVar31;
              auVar25._4_4_ = local_110._4_4_ * fVar52;
              auVar25._8_4_ = fStack_108 * fVar53;
              auVar25._12_4_ = fStack_104 * 0.0;
              auVar57 = NEON_ext(auVar25,auVar25,8,1);
              uVar56 = NEON_frecpe(uVar77,4);
              uVar87 = NEON_frecps(uVar77,uVar56,4);
              fVar13 = (float)uVar56 * (float)uVar87;
              fVar17 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
              uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
              fVar13 = fVar13 * (float)uVar56;
              fVar17 = fVar17 * (float)((ulong)uVar56 >> 0x20);
              uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
              fVar13 = fVar13 * (float)uVar56;
              fVar17 = fVar17 * (float)((ulong)uVar56 >> 0x20);
              uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
              fVar13 = fVar13 * (float)uVar56;
              uVar77 = NEON_frecps(uVar77,CONCAT44(fVar17 * (float)((ulong)uVar56 >> 0x20),fVar13),4
                                  );
              fVar13 = (auVar25._0_4_ + auVar25._4_4_ + auVar57._0_4_ + auVar57._4_4_) *
                       fVar13 * (float)uVar77;
              auVar24._0_4_ = fVar31 * fVar13;
              auVar24._4_4_ = fVar52 * fVar13;
              auVar24._8_4_ = fVar53 * fVar13;
              auVar24._12_4_ = 0.0;
            }
            else {
              auVar86._0_4_ = -(float)local_110 * auVar81._0_4_;
              auVar86._4_4_ = -local_110._4_4_ * auVar81._4_4_;
              auVar86._8_4_ = -fStack_108 * auVar81._8_4_;
              auVar86._12_4_ = auVar81._12_4_ * 0.0;
              auVar57 = NEON_ext(auVar86,auVar86,8,1);
              fVar53 = auVar57._0_4_ + auVar57._4_4_;
              auVar91._0_4_ = -local_100 * auVar81._0_4_;
              auVar91._4_4_ = -fStack_fc * auVar81._4_4_;
              auVar91._8_4_ = -fStack_f8 * auVar81._8_4_;
              auVar91._12_4_ = auVar81._12_4_ * 0.0;
              auVar57 = NEON_ext(auVar91,auVar91,8,1);
              fVar94 = auVar57._0_4_ + auVar57._4_4_;
              fVar31 = auVar86._0_4_ + auVar86._4_4_ + fVar53;
              fVar52 = auVar91._0_4_ + auVar91._4_4_ + fVar94;
              fVar94 = auVar91._0_4_ + auVar91._4_4_ + fVar94;
              bVar3 = (0.0 <= fVar31 && fVar93 <= 0.0) && fVar52 <= 0.0;
              auVar108._0_4_ = -(uint)bVar3;
              auVar108._4_4_ = -(uint)bVar3;
              auVar108._8_4_ = -(uint)bVar3;
              auVar108._12_4_ = -(uint)bVar3;
              NEON_ext(auVar108,auVar108,8,1);
              if (CONCAT13((char)auVar108._12_4_,
                           CONCAT12((char)auVar108._8_4_,
                                    CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) == -1) {
                uVar77 = CONCAT44((auVar86._0_4_ + auVar86._4_4_ + fVar53) - fVar94,fVar31 - fVar52)
                ;
                uVar56 = NEON_frecpe(uVar77,4);
                uVar87 = NEON_frecps(uVar77,uVar56,4);
                fVar13 = (float)uVar56 * (float)uVar87;
                fVar17 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
                fVar13 = fVar13 * (float)uVar56;
                fVar17 = fVar17 * (float)((ulong)uVar56 >> 0x20);
                uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
                fVar13 = fVar13 * (float)uVar56;
                fVar17 = fVar17 * (float)((ulong)uVar56 >> 0x20);
                uVar56 = NEON_frecps(uVar77,CONCAT44(fVar17,fVar13),4);
                fVar13 = fVar13 * (float)uVar56;
                uVar77 = NEON_frecps(uVar77,CONCAT44(fVar17 * (float)((ulong)uVar56 >> 0x20),fVar13)
                                     ,4);
                fVar31 = fVar31 * (float)(-(uint)(1.1920929e-07 < ABS(fVar31 - fVar52)) &
                                         (uint)(fVar13 * (float)uVar77));
                puVar6 = &local_190;
                pfVar7 = local_150;
                auVar26._0_8_ =
                     CONCAT44(local_110._4_4_ + auVar81._4_4_ * fVar31,
                              (float)local_110 + auVar81._0_4_ * fVar31);
                auVar26._8_4_ = fStack_108 + auVar81._8_4_ * fVar31;
                auVar26._12_4_ = fStack_104 + auVar81._12_4_ * fVar31;
                auVar57 = NEON_ext(auVar26,auVar26,8,1);
                pfVar8 = (float *)&local_110;
                auVar24._8_4_ = (float)auVar57._0_4_;
                auVar24._0_8_ = auVar26._0_8_;
                auVar24._12_4_ = 0.0;
                local_c4 = 2;
LAB_002482e8:
                puVar9 = &local_180;
                pfVar10 = (float *)&local_140;
                pfVar11 = &local_100;
              }
              else {
                auVar109._0_4_ = -local_100 * auVar75._0_4_;
                auVar109._4_4_ = -fStack_fc * auVar75._4_4_;
                auVar109._8_4_ = -fStack_f8 * auVar75._8_4_;
                auVar109._12_4_ = auVar75._12_4_ * 0.0;
                auVar57 = NEON_ext(auVar109,auVar109,8,1);
                fVar98 = auVar57._0_4_ + auVar57._4_4_;
                auVar82._0_4_ = auVar81._0_4_ * -local_f0;
                auVar82._4_4_ = auVar81._4_4_ * -fStack_ec;
                auVar82._8_4_ = auVar81._8_4_ * -fStack_e8;
                auVar82._12_4_ = auVar81._12_4_ * 0.0;
                auVar114._0_4_ = auVar75._0_4_ * -local_f0;
                auVar114._4_4_ = auVar75._4_4_ * -fStack_ec;
                auVar114._8_4_ = auVar75._8_4_ * -fStack_e8;
                auVar114._12_4_ = auVar75._12_4_ * 0.0;
                fVar53 = auVar109._0_4_ + auVar109._4_4_ + fVar98;
                auVar57 = NEON_ext(auVar82,auVar82,8,1);
                fVar15 = auVar57._0_4_ + auVar57._4_4_;
                fVar93 = auVar82._0_4_ + auVar82._4_4_ + fVar15;
                auVar57 = NEON_ext(auVar114,auVar114,8,1);
                fVar16 = auVar57._0_4_ + auVar57._4_4_;
                fVar97 = auVar114._0_4_ + auVar114._4_4_ + fVar16;
                fVar16 = auVar114._0_4_ + auVar114._4_4_ + fVar16;
                bVar3 = (fVar52 <= fVar53 && fVar13 <= 0.0) && fVar97 <= fVar93;
                auVar105._0_4_ = -(uint)bVar3;
                auVar105._4_4_ = -(uint)bVar3;
                auVar105._8_4_ = -(uint)bVar3;
                auVar105._12_4_ = -(uint)bVar3;
                NEON_ext(auVar105,auVar105,8,1);
                puVar9 = &local_170;
                pfVar10 = local_130;
                pfVar11 = &local_f0;
                if (CONCAT13((char)auVar105._12_4_,
                             CONCAT12((char)auVar105._8_4_,
                                      CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) == -1) {
                  local_c4 = 2;
                  fVar13 = (fVar53 - fVar52) + (fVar93 - fVar97);
                  uVar77 = CONCAT44(((auVar109._0_4_ + auVar109._4_4_ + fVar98) - fVar94) +
                                    ((auVar82._0_4_ + auVar82._4_4_ + fVar15) - fVar16),fVar13);
                  uVar56 = NEON_frecpe(uVar77,4);
                  uVar87 = NEON_frecps(uVar77,uVar56,4);
                  fVar17 = (float)uVar56 * (float)uVar87;
                  fVar31 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  uVar77 = NEON_frecps(uVar77,CONCAT44(fVar31 * (float)((ulong)uVar56 >> 0x20),
                                                       fVar17),4);
                  fVar13 = (fVar53 - fVar52) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) &
                                  (uint)(fVar17 * (float)uVar77));
                  auVar27._0_8_ =
                       CONCAT44(fStack_fc + (fStack_ec - fStack_fc) * fVar13,
                                local_100 + (local_f0 - local_100) * fVar13);
                  auVar27._8_4_ = fStack_f8 + (fStack_e8 - fStack_f8) * fVar13;
                  auVar27._12_4_ = fStack_f4 + (fStack_e4 - fStack_f4) * fVar13;
                  auVar57 = NEON_ext(auVar27,auVar27,8,1);
                  auVar24._8_4_ = (float)auVar57._0_4_;
                  auVar24._0_8_ = auVar27._0_8_;
                  auVar24._12_4_ = 0.0;
                  puVar6 = &local_180;
                  pfVar7 = (float *)&local_140;
                  pfVar8 = &local_100;
                }
                else {
                  auVar106._0_4_ = -(float)local_110 * auVar75._0_4_;
                  auVar106._4_4_ = -local_110._4_4_ * auVar75._4_4_;
                  auVar106._8_4_ = -fStack_108 * auVar75._8_4_;
                  auVar106._12_4_ = auVar75._12_4_ * 0.0;
                  auVar57 = NEON_ext(auVar106,auVar106,8,1);
                  fVar93 = auVar57._0_4_ + auVar57._4_4_;
                  fVar13 = auVar106._0_4_ + auVar106._4_4_ + fVar93;
                  bVar3 = (fVar17 <= 0.0 && 0.0 <= fVar13) && fVar97 <= 0.0;
                  auVar96._0_4_ = -(uint)bVar3;
                  auVar96._4_4_ = -(uint)bVar3;
                  auVar96._8_4_ = -(uint)bVar3;
                  auVar96._12_4_ = -(uint)bVar3;
                  NEON_ext(auVar96,auVar96,8,1);
                  if (CONCAT13((char)auVar96._12_4_,
                               CONCAT12((char)auVar96._8_4_,
                                        CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) != -1) {
                    bVar3 = fVar31 <= 0.0 && fVar13 <= 0.0;
                    auVar76._0_4_ = -(uint)bVar3;
                    auVar76._4_4_ = -(uint)bVar3;
                    auVar76._8_4_ = -(uint)bVar3;
                    auVar76._12_4_ = -(uint)bVar3;
                    NEON_ext(auVar76,auVar76,8,1);
                    if (CONCAT13((char)auVar76._12_4_,
                                 CONCAT12((char)auVar76._8_4_,
                                          CONCAT11((char)auVar76._4_4_,(char)auVar76._0_4_))) == -1)
                    {
                      puVar6 = &local_190;
                      pfVar7 = local_150;
                      pfVar8 = (float *)&local_110;
                    }
                    else {
                      bVar3 = 0.0 <= fVar52 && fVar53 <= fVar52;
                      auVar22._0_4_ = -(uint)bVar3;
                      auVar22._4_4_ = -(uint)bVar3;
                      auVar22._8_4_ = -(uint)bVar3;
                      auVar22._12_4_ = -(uint)bVar3;
                      NEON_ext(auVar22,auVar22,8,1);
                      iVar35 = CONCAT13((char)auVar22._12_4_,
                                        CONCAT12((char)auVar22._8_4_,
                                                 CONCAT11((char)auVar22._4_4_,(char)auVar22._0_4_)))
                      ;
                      iVar68 = -(uint)(iVar35 == -1);
                      auVar23._4_4_ = iVar68;
                      auVar23._0_4_ = iVar68;
                      auVar23._8_4_ = iVar68;
                      auVar23._12_4_ = iVar68;
                      lVar5 = 0x10;
                      if (iVar35 != -1) {
                        lVar5 = 0x20;
                      }
                      auVar24 = auVar2 ^ (auVar2 ^ auVar1) & auVar23;
                      pfVar8 = (float *)((long)local_c0 + lVar5 + -0x50);
                      pfVar7 = (float *)((long)local_150 + lVar5);
                      puVar6 = (undefined8 *)((long)&local_190 + lVar5);
                    }
                    local_c4 = 1;
                    goto LAB_002482e8;
                  }
                  uVar77 = CONCAT44((auVar106._0_4_ + auVar106._4_4_ + fVar93) - fVar16,
                                    fVar13 - fVar97);
                  uVar56 = NEON_frecpe(uVar77,4);
                  uVar87 = NEON_frecps(uVar77,uVar56,4);
                  fVar17 = (float)uVar56 * (float)uVar87;
                  fVar31 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
                  fVar17 = fVar17 * (float)uVar56;
                  uVar77 = NEON_frecps(uVar77,CONCAT44(fVar31 * (float)((ulong)uVar56 >> 0x20),
                                                       fVar17),4);
                  fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar97)) &
                                           (uint)(fVar17 * (float)uVar77));
                  auVar28._0_8_ =
                       CONCAT44(local_110._4_4_ + auVar75._4_4_ * fVar13,
                                (float)local_110 + auVar75._0_4_ * fVar13);
                  auVar28._8_4_ = fStack_108 + auVar75._8_4_ * fVar13;
                  auVar28._12_4_ = fStack_104 + auVar75._12_4_ * fVar13;
                  auVar57 = NEON_ext(auVar28,auVar28,8,1);
                  auVar24._8_4_ = (float)auVar57._0_4_;
                  auVar24._0_8_ = auVar28._0_8_;
                  auVar24._12_4_ = 0.0;
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
          auVar45._0_4_ = auVar81._0_4_ * auVar81._0_4_;
          auVar45._4_4_ = auVar81._4_4_ * auVar81._4_4_;
          auVar45._8_4_ = auVar81._8_4_ * auVar81._8_4_;
          auVar45._12_4_ = auVar81._12_4_ * auVar81._12_4_;
          auVar57 = NEON_ext(auVar45,auVar45,8,1);
          fVar17 = auVar57._0_4_ + auVar57._4_4_;
          fVar13 = auVar45._0_4_ + auVar45._4_4_ + fVar17;
          uVar77 = CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar17,fVar13);
          bVar3 = fVar13 <= 1.1920929e-07;
          auVar63._0_4_ = -(uint)bVar3;
          auVar63._4_4_ = -(uint)bVar3;
          auVar63._8_4_ = -(uint)bVar3;
          auVar63._12_4_ = -(uint)bVar3;
          NEON_ext(auVar63,auVar63,8,1);
          local_c4 = 2;
          if (CONCAT13((char)auVar63._12_4_,
                       CONCAT12((char)auVar63._8_4_,
                                CONCAT11((char)auVar63._4_4_,(char)auVar63._0_4_))) != -1) {
            auVar64._0_4_ = -(float)local_110 * auVar81._0_4_;
            auVar64._4_4_ = -local_110._4_4_ * auVar81._4_4_;
            auVar64._8_4_ = -fStack_108 * auVar81._8_4_;
            auVar64._12_4_ = auVar81._12_4_ * 0.0;
            auVar57 = NEON_ext(auVar64,auVar64,8,1);
            fVar13 = auVar57._0_4_ + auVar57._4_4_;
            uVar56 = NEON_frecpe(uVar77,4);
            uVar87 = NEON_frecps(uVar77,uVar56,4);
            fVar17 = (float)uVar56 * (float)uVar87;
            fVar31 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
            uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
            fVar17 = fVar17 * (float)uVar56;
            fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
            uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
            fVar17 = fVar17 * (float)uVar56;
            fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
            uVar56 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
            fVar17 = fVar17 * (float)uVar56;
            fVar31 = fVar31 * (float)((ulong)uVar56 >> 0x20);
            uVar77 = NEON_frecps(uVar77,CONCAT44(fVar31,fVar17),4);
            uVar56 = NEON_fmov(0x3f800000,4);
            uVar77 = NEON_fmin(CONCAT44((auVar64._0_4_ + auVar64._4_4_ + fVar13) *
                                        fVar31 * (float)((ulong)uVar77 >> 0x20),
                                        (auVar64._0_4_ + auVar64._4_4_ + fVar13) *
                                        fVar17 * (float)uVar77),uVar56,4);
            uVar77 = NEON_fmax(uVar77,0,4);
            fVar13 = (float)uVar77;
            fVar17 = auVar81._0_4_ * fVar13;
            fVar31 = auVar81._4_4_ * fVar13;
            fVar52 = auVar81._8_4_ * fVar13;
            fVar13 = auVar81._12_4_ * fVar13;
            goto LAB_00247e6c;
          }
LAB_00247e80:
          local_c4 = 1;
        }
      }
      else if (uVar34 == 1) {
        auVar24._4_4_ = local_110._4_4_;
        auVar24._0_4_ = (float)local_110;
        auVar24._8_4_ = fStack_108;
        auVar24._12_4_ = fStack_104;
        fVar17 = local_100 - (float)local_110;
        fVar31 = fStack_fc - local_110._4_4_;
        fVar52 = fStack_f8 - fStack_108;
        fVar13 = fStack_f4 - fStack_104;
        auVar62._0_4_ = fVar17 * fVar17;
        auVar62._4_4_ = fVar31 * fVar31;
        auVar62._8_4_ = fVar52 * fVar52;
        auVar62._12_4_ = fVar13 * fVar13;
        auVar57 = NEON_ext(auVar62,auVar62,8,1);
        fVar93 = auVar57._0_4_ + auVar57._4_4_;
        fVar53 = auVar62._0_4_ + auVar62._4_4_ + fVar93;
        uVar77 = CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar93,fVar53);
        bVar3 = fVar53 <= 1.1920929e-07;
        auVar73._0_4_ = -(uint)bVar3;
        auVar73._4_4_ = -(uint)bVar3;
        auVar73._8_4_ = -(uint)bVar3;
        auVar73._12_4_ = -(uint)bVar3;
        NEON_ext(auVar73,auVar73,8,1);
        if (CONCAT13((char)auVar73._12_4_,
                     CONCAT12((char)auVar73._8_4_,CONCAT11((char)auVar73._4_4_,(char)auVar73._0_4_))
                    ) == -1) goto LAB_00247e80;
        auVar74._0_4_ = -(float)local_110 * fVar17;
        auVar74._4_4_ = -local_110._4_4_ * fVar31;
        auVar74._8_4_ = -fStack_108 * fVar52;
        auVar74._12_4_ = fVar13 * 0.0;
        auVar57 = NEON_ext(auVar74,auVar74,8,1);
        fVar53 = auVar57._0_4_ + auVar57._4_4_;
        uVar56 = NEON_frecpe(uVar77,4);
        uVar87 = NEON_frecps(uVar77,uVar56,4);
        fVar93 = (float)uVar56 * (float)uVar87;
        fVar94 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar94,fVar93),4);
        fVar93 = fVar93 * (float)uVar56;
        fVar94 = fVar94 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar94,fVar93),4);
        fVar93 = fVar93 * (float)uVar56;
        fVar94 = fVar94 * (float)((ulong)uVar56 >> 0x20);
        uVar56 = NEON_frecps(uVar77,CONCAT44(fVar94,fVar93),4);
        fVar93 = fVar93 * (float)uVar56;
        fVar94 = fVar94 * (float)((ulong)uVar56 >> 0x20);
        uVar77 = NEON_frecps(uVar77,CONCAT44(fVar94,fVar93),4);
        uVar56 = NEON_fmov(0x3f800000,4);
        uVar77 = NEON_fmin(CONCAT44((auVar74._0_4_ + auVar74._4_4_ + fVar53) *
                                    fVar94 * (float)((ulong)uVar77 >> 0x20),
                                    (auVar74._0_4_ + auVar74._4_4_ + fVar53) *
                                    fVar93 * (float)uVar77),uVar56,4);
        uVar77 = NEON_fmax(uVar77,0,4);
        fVar53 = (float)uVar77;
        fVar17 = fVar17 * fVar53;
        fVar31 = fVar31 * fVar53;
        fVar52 = fVar52 * fVar53;
        fVar13 = fVar13 * fVar53;
LAB_00247e6c:
        auVar21._0_8_ = CONCAT44(auVar24._4_4_ + fVar31,auVar24._0_4_ + fVar17);
        auVar21._8_4_ = auVar24._8_4_ + fVar52;
        auVar21._12_4_ = auVar24._12_4_ + fVar13;
        auVar57 = NEON_ext(auVar21,auVar21,8,1);
        auVar24._8_4_ = (float)auVar57._0_4_;
        auVar24._0_8_ = auVar21._0_8_;
        auVar24._12_4_ = 0.0;
      }
      fVar17 = auVar24._0_4_;
      auVar46._0_4_ = fVar17 * fVar17;
      fVar31 = auVar24._4_4_;
      auVar46._4_4_ = fVar31 * fVar31;
      fVar52 = auVar24._8_4_;
      auVar46._8_4_ = fVar52 * fVar52;
      auVar46._12_4_ = auVar24._12_4_ * auVar24._12_4_;
      auVar57 = NEON_ext(auVar46,auVar46,8,1);
      fVar13 = auVar46._0_4_ + auVar46._4_4_ + auVar57._0_4_ + auVar57._4_4_;
      iVar35 = -(uint)(fVar13 < fVar67);
      bVar3 = fVar54 * fVar54 < fVar13 && fVar13 < fVar67;
      auVar65._0_4_ = -(uint)bVar3;
      auVar65._4_4_ = -(uint)bVar3;
      auVar65._8_4_ = -(uint)bVar3;
      auVar65._12_4_ = -(uint)bVar3;
      NEON_ext(auVar65,auVar65,8,1);
      auVar84._0_4_ = -fVar17;
      auVar84._4_4_ = -fVar31;
      auVar84._8_4_ = -fVar52;
      auVar84._12_4_ = 0;
      if (CONCAT13((char)auVar65._12_4_,
                   CONCAT12((char)auVar65._8_4_,CONCAT11((char)auVar65._4_4_,(char)auVar65._0_4_)))
          != -1) goto code_r0x00248360;
      lVar5 = *(long *)(param_3 + 8);
      uStack_1e8 = auVar24._8_8_;
      local_1f0 = auVar24._0_8_;
    } while( true );
  }
  uVar116 = 0;
  auVar24._8_8_ = uStack_1e8;
  auVar24._0_8_ = auVar102._0_8_;
  auVar84._8_4_ = auVar57._8_4_;
  auVar84._0_8_ = auVar57._0_8_;
  auVar84._12_4_ = 0;
LAB_0024837c:
  auVar111 = ZEXT816(0);
  iVar35 = -(uint)(fVar14 * fVar14 < fVar13);
  bVar33 = (byte)iVar35;
  auVar47[0] = bVar33 & auVar103[0];
  bVar49 = (byte)((uint)iVar35 >> 8);
  auVar47[1] = bVar49 & auVar103[1];
  bVar50 = (byte)((uint)iVar35 >> 0x10);
  auVar47[2] = bVar50 & auVar103[2];
  bVar51 = (byte)((uint)iVar35 >> 0x18);
  auVar47[3] = bVar51 & auVar103[3];
  auVar47[4] = bVar33 & auVar103[4];
  auVar47[5] = bVar49 & auVar103[5];
  auVar47[6] = bVar50 & auVar103[6];
  auVar47[7] = bVar51 & auVar103[7];
  auVar47[8] = bVar33 & auVar103[8];
  auVar47[9] = bVar49 & auVar103[9];
  auVar47[10] = bVar50 & auVar103[10];
  auVar47[0xb] = bVar51 & auVar103[0xb];
  auVar47[0xc] = bVar33 & auVar103[0xc];
  auVar47[0xd] = bVar49 & auVar103[0xd];
  auVar47[0xe] = bVar50 & auVar103[0xe];
  auVar47[0xf] = bVar51 & auVar103[0xf];
  auVar102 = auVar102 ^ (auVar102 ^ auVar24) & auVar103;
  auVar57 = auVar57 ^ (auVar57 ^ auVar84) & auVar47;
  fVar32 = auVar57._0_4_;
  auVar66._0_4_ = fVar32 * fVar32;
  fVar54 = auVar57._4_4_;
  auVar66._4_4_ = fVar54 * fVar54;
  fVar67 = auVar57._8_4_;
  auVar66._8_4_ = fVar67 * fVar67;
  auVar66._12_4_ = auVar57._12_4_ * auVar57._12_4_;
  auVar57 = NEON_ext(auVar66,auVar66,8,1);
  fVar14 = auVar57._0_4_ + auVar57._4_4_;
  fVar13 = auVar66._0_4_ + auVar66._4_4_ + fVar14;
  fVar14 = auVar66._0_4_ + auVar66._4_4_ + fVar14;
  uVar4 = CONCAT44(fVar14,fVar13);
  uVar77 = NEON_frsqrte(uVar4,4);
  fVar17 = (float)uVar77;
  fVar31 = (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar17 * fVar17),uVar4,4);
  fVar17 = fVar17 * (float)uVar77;
  fVar31 = fVar31 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar17 * fVar17),uVar4,4);
  fVar17 = fVar17 * (float)uVar77;
  fVar31 = fVar31 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar17 * fVar17),uVar4,4);
  fVar17 = fVar17 * (float)uVar77;
  fVar31 = fVar31 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar17 * fVar17),uVar4,4);
  uVar69 = CONCAT44(fVar14 * fVar31 * (float)((ulong)uVar77 >> 0x20),fVar13 * fVar17 * (float)uVar77
                   );
  uVar69 = uVar69 ^ (uVar69 ^ uVar4) & CONCAT44(-(uint)(fVar13 == 0.0),-(uint)(fVar13 == 0.0));
  uVar77 = NEON_frecpe(uVar69,4);
  uVar55 = NEON_frecps(uVar69,uVar77,4);
  fVar13 = (float)uVar77 * (float)uVar55;
  fVar14 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar55 >> 0x20);
  uVar77 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar77;
  fVar14 = fVar14 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar77;
  fVar14 = fVar14 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar69,CONCAT44(fVar14,fVar13),4);
  fVar13 = fVar13 * (float)uVar77;
  iVar35 = -(uint)(0.0 < (float)uVar69);
  uVar77 = NEON_frecps(uVar69,CONCAT44(fVar14 * (float)((ulong)uVar77 >> 0x20),fVar13),4);
  fVar13 = fVar13 * (float)uVar77;
  fVar32 = fVar32 * fVar13;
  fVar54 = fVar54 * fVar13;
  fVar67 = fVar67 * fVar13;
  bVar33 = (byte)iVar35;
  bVar49 = (byte)((uint)iVar35 >> 8);
  bVar50 = (byte)((uint)iVar35 >> 0x10);
  bVar51 = (byte)((uint)iVar35 >> 0x18);
  fVar13 = (float)CONCAT13(bVar51 & (byte)((uint)fVar32 >> 0x18),
                           CONCAT12(bVar50 & (byte)((uint)fVar32 >> 0x10),
                                    CONCAT11(bVar49 & (byte)((uint)fVar32 >> 8),
                                             bVar33 & SUB41(fVar32,0))));
  auVar36._0_8_ =
       CONCAT17(bVar51 & (byte)((uint)fVar54 >> 0x18),
                CONCAT16(bVar50 & (byte)((uint)fVar54 >> 0x10),
                         CONCAT15(bVar49 & (byte)((uint)fVar54 >> 8),
                                  CONCAT14(bVar33 & SUB41(fVar54,0),fVar13))));
  auVar36[8] = bVar33 & SUB41(fVar67,0);
  auVar36[9] = bVar49 & (byte)((uint)fVar67 >> 8);
  auVar36[10] = bVar50 & (byte)((uint)fVar67 >> 0x10);
  auVar36[0xb] = bVar51 & (byte)((uint)fVar67 >> 0x18);
  fVar13 = -fVar13;
  fVar14 = -(float)((ulong)auVar36._0_8_ >> 0x20);
  auVar48._0_8_ = CONCAT44(fVar14,fVar13);
  auVar48._8_4_ = -auVar36._8_4_;
  iVar35 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar48._12_4_ = 0;
  auVar110._4_4_ = iVar35;
  auVar110._0_4_ = iVar35;
  auVar110._8_4_ = iVar35;
  auVar110._12_4_ = iVar35;
  param_9[1] = (ulong)(uint)auVar48._8_4_;
  *param_9 = auVar48._0_8_;
  *param_8 = uVar116;
  uStack_a8 = auVar102._8_8_;
  local_b0 = auVar102._0_8_;
  if (local_c4 == 3) {
    FUN_00231940(&local_b0,&local_110,&local_100,&local_f0,local_c0 + 2,local_c0);
    auVar111._0_4_ =
         local_150[0] +
         ((float)local_140 - local_150[0]) * local_c0[2] +
         (local_130[0] - local_150[0]) * local_c0[0];
    auVar111._4_4_ =
         local_150[1] +
         (local_140._4_4_ - local_150[1]) * local_c0[2] +
         (local_130[1] - local_150[1]) * local_c0[0];
    auVar111._8_4_ =
         (float)uStack_148 +
         ((float)uStack_138 - (float)uStack_148) * local_c0[2] +
         (local_130[2] - (float)uStack_148) * local_c0[0];
    auVar111._12_4_ = uStack_148._4_4_ + 0.0;
    auVar48._4_4_ = fVar14;
    auVar48._0_4_ = fVar13;
    auVar48._12_4_ = 0;
  }
  else if (local_c4 == 2) {
    FUN_002318c0(&local_b0,&local_110,&local_100,local_c0 + 2);
    auVar92._0_8_ =
         CONCAT44(local_150[1] + (local_140._4_4_ - local_150[1]) * local_c0[2],
                  local_150[0] + ((float)local_140 - local_150[0]) * local_c0[2]);
    auVar92._8_4_ = (float)uStack_148 + ((float)uStack_138 - (float)uStack_148) * local_c0[2];
    auVar92._12_4_ = uStack_148._4_4_ + (uStack_138._4_4_ - uStack_148._4_4_) * local_c0[2];
    auVar57 = NEON_ext(auVar92,auVar92,8,1);
    auVar48._4_4_ = fVar14;
    auVar48._0_4_ = fVar13;
    auVar48._12_4_ = 0;
    auVar111._8_4_ = (float)auVar57._0_4_;
    auVar111._0_8_ = auVar92._0_8_;
    auVar111._12_4_ = 0.0;
  }
  else if (local_c4 == 1) {
    auVar111._4_4_ = local_150[1];
    auVar111._0_4_ = local_150[0];
    auVar111._8_4_ = (float)uStack_148;
    auVar111._12_4_ = uStack_148._4_4_;
  }
  fVar13 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar29._0_8_ =
       CONCAT44(auVar111._4_4_ - auVar48._4_4_ * fVar13,auVar111._0_4_ - auVar48._0_4_ * fVar13);
  auVar29._8_4_ = auVar111._8_4_ - auVar48._8_4_ * fVar13;
  auVar29._12_4_ = auVar111._12_4_ - auVar48._12_4_ * fVar13;
  auVar57 = NEON_ext(auVar29,auVar29,8,1);
  auVar30._8_4_ = auVar57._0_4_;
  auVar30._0_8_ = auVar29._0_8_;
  auVar30._12_4_ = 0;
  auVar111 = auVar111 ^ (auVar111 ^ auVar30) & auVar110;
  param_10[1] = auVar111._8_8_;
  *param_10 = auVar111._0_8_;
  return 1;
code_r0x00248360:
  auVar102._8_8_ = uStack_1e8;
  auVar102._0_8_ = local_1f0;
  auVar103._4_4_ = iVar35;
  auVar103._0_4_ = iVar35;
  auVar103._8_4_ = iVar35;
  auVar103._12_4_ = iVar35;
  auVar57._8_8_ = uStack_208;
  auVar57._0_8_ = local_210;
  goto LAB_0024837c;
}


