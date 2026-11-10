/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002daeb0; name: FUN_002daeb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002daeb0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar33;
  float fVar34;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bVar35;
  uint uVar36;
  undefined1 auVar38 [12];
  byte bVar47;
  byte bVar48;
  float fVar50;
  undefined1 auVar39 [16];
  float fVar51;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int iVar37;
  byte bVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar52;
  float fVar59;
  float fVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  ulong uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  undefined8 uVar71;
  float fVar76;
  float fVar78;
  float fVar79;
  undefined1 auVar72 [16];
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  undefined8 uVar86;
  float fVar93;
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined8 uVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined8 uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined8 uVar119;
  undefined8 local_1c0;
  ulong uStack_1b8;
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
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120 [8];
  undefined8 local_100 [2];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint local_b4;
  float local_b0 [2];
  float local_a8 [2];
  
  local_b4 = 1;
  fVar16 = *param_4;
  fVar18 = param_4[1];
  fVar85 = param_4[2];
  fVar93 = param_4[3];
  auVar110._0_4_ = fVar16 * fVar16;
  auVar110._4_4_ = fVar18 * fVar18;
  auVar110._8_4_ = fVar85 * fVar85;
  auVar110._12_4_ = fVar93 * fVar93;
  auVar63 = NEON_ext(auVar110,auVar110,8,1);
  uVar52 = -(uint)(1.1920929e-07 < auVar110._0_4_ + auVar110._4_4_ + auVar63._0_4_ + auVar63._4_4_);
  lVar1 = *(long *)(param_2 + 8);
  pfVar11 = *(float **)(param_2 + 0x10);
  uVar100 = 0;
  fVar23 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar52);
  fVar33 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar18) & uVar52);
  fVar34 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar85) & uVar52);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar93) & uVar52);
  auVar101._0_4_ = fVar23 * fVar23;
  auVar101._4_4_ = fVar33 * fVar33;
  auVar101._8_4_ = fVar34 * fVar34;
  auVar101._12_4_ = fVar16 * fVar16;
  auVar63 = NEON_ext(auVar101,auVar101,8,1);
  fVar18 = auVar63._0_4_ + auVar63._4_4_;
  fVar16 = auVar101._0_4_ + auVar101._4_4_ + fVar18;
  fVar18 = auVar101._0_4_ + auVar101._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar86 = NEON_frsqrte(uVar9,4);
  fVar85 = (float)uVar86;
  fVar93 = (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar93 * fVar93,fVar85 * fVar85),uVar9,4);
  fVar85 = fVar85 * (float)uVar86;
  fVar93 = fVar93 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar93 * fVar93,fVar85 * fVar85),uVar9,4);
  fVar85 = fVar85 * (float)uVar86;
  fVar93 = fVar93 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar93 * fVar93,fVar85 * fVar85),uVar9,4);
  fVar85 = fVar85 * (float)uVar86;
  fVar93 = fVar93 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar93 * fVar93,fVar85 * fVar85),uVar9,4);
  uVar62 = CONCAT44(fVar18 * fVar93 * (float)((ulong)uVar86 >> 0x20),fVar16 * fVar85 * (float)uVar86
                   );
  uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar86 = NEON_frecpe(uVar62,4);
  uVar87 = NEON_frecps(uVar62,uVar86,4);
  fVar16 = (float)uVar86 * (float)uVar87;
  fVar18 = (float)((ulong)uVar86 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar18 = fVar18 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar18 = fVar18 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18 * (float)((ulong)uVar86 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar23 = fVar23 * fVar16;
  fVar33 = fVar33 * fVar16;
  fVar34 = fVar34 * fVar16;
  fVar16 = -fVar23;
  fVar18 = -fVar33;
  fVar85 = -fVar34;
  fVar93 = *(float *)(param_2 + 0x40) * fVar85 +
           *(float *)(param_2 + 0x20) * fVar16 + *(float *)(param_2 + 0x30) * fVar18;
  fVar59 = *(float *)(param_2 + 0x44) * fVar85 +
           *(float *)(param_2 + 0x24) * fVar16 + *(float *)(param_2 + 0x34) * fVar18;
  fVar60 = *(float *)(param_2 + 0x48) * fVar85 +
           *(float *)(param_2 + 0x28) * fVar16 + *(float *)(param_2 + 0x38) * fVar18;
  fVar16 = *(float *)(lVar1 + 0x40);
  fVar18 = *(float *)(lVar1 + 0x44);
  fVar85 = *(float *)(lVar1 + 0x48);
  lVar8 = *(long *)(param_3 + 8);
  auVar94._0_4_ = *(float *)(lVar1 + 0x30) * fVar93;
  auVar94._4_4_ = *(float *)(lVar1 + 0x34) * fVar59;
  auVar94._8_4_ = *(float *)(lVar1 + 0x38) * fVar60;
  auVar94._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar53._0_4_ = fVar16 * fVar93;
  auVar53._4_4_ = fVar18 * fVar59;
  auVar53._8_4_ = fVar85 * fVar60;
  auVar53._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar63 = NEON_ext(auVar94,auVar94,8,1);
  auVar101 = NEON_ext(auVar53,auVar53,8,1);
  uVar52 = -(uint)(auVar53._0_4_ + auVar53._4_4_ + auVar101._0_4_ + auVar101._4_4_ <
                  auVar94._0_4_ + auVar94._4_4_ + auVar63._0_4_ + auVar63._4_4_);
  fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar52);
  fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar52);
  fVar85 = (float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar52);
  fVar93 = *(float *)(lVar8 + 0x40);
  fVar59 = *(float *)(lVar8 + 0x44);
  fVar60 = *(float *)(lVar8 + 0x48);
  fVar78 = *(float *)(lVar8 + 0x4c);
  local_120[2] = 0.0;
  local_120[3] = 0.0;
  local_120[0] = 0.0;
  local_120[1] = 0.0;
  local_120[6] = 0.0;
  local_120[7] = 0.0;
  local_120[4] = 0.0;
  local_120[5] = 0.0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_140[0] = pfVar11[0xc] + pfVar11[8] * fVar85 + *pfVar11 * fVar16 + pfVar11[4] * fVar18;
  local_140[1] = pfVar11[0xd] + pfVar11[9] * fVar85 + pfVar11[1] * fVar16 + pfVar11[5] * fVar18;
  local_140[2] = pfVar11[0xe] + pfVar11[10] * fVar85 + pfVar11[2] * fVar16 + pfVar11[6] * fVar18;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  auVar95._0_4_ = fVar23 * *(float *)(lVar8 + 0x30);
  auVar95._4_4_ = fVar33 * *(float *)(lVar8 + 0x34);
  auVar95._8_4_ = fVar34 * *(float *)(lVar8 + 0x38);
  auVar95._12_4_ = *(float *)(lVar8 + 0x3c) * 0.0;
  auVar63 = NEON_ext(auVar95,auVar95,8,1);
  auVar109._0_4_ = fVar23 * fVar93;
  auVar109._4_4_ = fVar33 * fVar59;
  auVar109._8_4_ = fVar34 * fVar60;
  auVar109._12_4_ = fVar78 * 0.0;
  auVar101 = NEON_ext(auVar109,auVar109,8,1);
  local_140[3] = pfVar11[0xf] + 0.0;
  uStack_128 = 0;
  local_130 = 0;
  uVar52 = -(uint)(auVar109._0_4_ + auVar109._4_4_ + auVar101._0_4_ + auVar101._4_4_ <
                  auVar95._0_4_ + auVar95._4_4_ + auVar63._0_4_ + auVar63._4_4_);
  fVar93 = (float)((uint)fVar93 ^ ((uint)fVar93 ^ (uint)*(float *)(lVar8 + 0x30)) & uVar52);
  fVar59 = (float)((uint)fVar59 ^ ((uint)fVar59 ^ (uint)*(float *)(lVar8 + 0x34)) & uVar52);
  fVar60 = (float)((uint)fVar60 ^ ((uint)fVar60 ^ (uint)*(float *)(lVar8 + 0x38)) & uVar52);
  fVar78 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)*(float *)(lVar8 + 0x3c)) & uVar52);
  auVar88._8_8_ = 0xffffffffffffffff;
  auVar88._0_8_ = 0xffffffffffffffff;
  fVar16 = local_140[0] - fVar93;
  fVar18 = local_140[1] - fVar59;
  auVar63._0_8_ = CONCAT44(fVar18,fVar16);
  auVar63._8_4_ = local_140[2] - fVar60;
  auVar63._12_4_ = (pfVar11[0xf] + 0.0) - fVar78;
  fVar16 = -fVar16;
  fVar18 = -fVar18;
  auVar54._0_8_ = CONCAT44(fVar18,fVar16);
  auVar54._8_4_ = -auVar63._8_4_;
  uStack_178 = CONCAT44(fVar78,fVar60);
  local_180 = CONCAT44(fVar59,fVar93);
  uStack_168 = 0;
  local_170 = 0;
  uVar87 = NEON_fmin(0,0,4);
  uVar86 = auVar63._8_8_;
  local_100[1] = uVar86;
  local_100[0] = auVar63._0_8_;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  fVar85 = (float)uVar87 * 0.1;
  auVar54._12_4_ = 0;
  auVar64._0_4_ = fVar16 * fVar16;
  auVar64._4_4_ = fVar18 * fVar18;
  auVar64._8_4_ = auVar54._8_4_ * auVar54._8_4_;
  auVar64._12_4_ = 0;
  auVar101 = NEON_ext(auVar64,auVar64,8,1);
  fVar16 = auVar64._0_4_ + auVar64._4_4_ + auVar101._0_4_ + auVar101._4_4_;
  bVar7 = fVar85 * fVar85 < fVar16;
  auVar102._0_4_ = -(uint)bVar7;
  auVar102._4_4_ = -(uint)bVar7;
  auVar102._8_4_ = -(uint)bVar7;
  auVar102._12_4_ = -(uint)bVar7;
  NEON_ext(auVar102,auVar102,8,1);
  uStack_1b8 = (ulong)(uint)auVar54._8_4_;
  if (CONCAT13((char)auVar102._12_4_,
               CONCAT12((char)auVar102._8_4_,CONCAT11((char)auVar102._4_4_,(char)auVar102._0_4_)))
      == -1) {
    fVar60 = param_1 + fVar85;
    fVar18 = *(float *)*param_7 * 0.0 + *param_6;
    fVar93 = *(float *)(*param_7 + 4) * 0.0 + param_6[1];
    fVar59 = *(float *)(*param_7 + 8) * 0.0 + param_6[2];
    fVar78 = *(float *)(*param_7 + 0xc) * 0.0 + param_6[3];
    auVar2._4_4_ = fVar93;
    auVar2._0_4_ = fVar18;
    auVar2._8_4_ = fVar59;
    auVar2._12_4_ = fVar78;
    auVar3._4_4_ = fVar93;
    auVar3._0_4_ = fVar18;
    auVar3._8_4_ = fVar59;
    auVar3._12_4_ = fVar78;
    auVar101 = NEON_ext(auVar2,auVar3,8,1);
    fVar59 = auVar101._0_4_;
    uVar100 = 0;
    local_1c0 = auVar54._0_8_;
    do {
      uVar52 = local_b4;
      fVar70 = auVar54._0_4_;
      auVar39._0_4_ = fVar70 * fVar70;
      fVar76 = auVar54._4_4_;
      auVar39._4_4_ = fVar76 * fVar76;
      fVar79 = auVar54._8_4_;
      auVar39._8_4_ = fVar79 * fVar79;
      auVar39._12_4_ = auVar54._12_4_ * auVar54._12_4_;
      auVar101 = NEON_ext(auVar39,auVar39,8,1);
      lVar1 = *(long *)(param_2 + 8);
      pfVar11 = *(float **)(param_2 + 0x10);
      fVar23 = auVar101._0_4_ + auVar101._4_4_;
      fVar78 = auVar39._0_4_ + auVar39._4_4_ + fVar23;
      fVar23 = auVar39._0_4_ + auVar39._4_4_ + fVar23;
      uVar9 = CONCAT44(fVar23,fVar78);
      uVar86 = NEON_frsqrte(uVar9,4);
      fVar33 = (float)uVar86;
      fVar34 = (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar33 * fVar33),uVar9,4);
      fVar33 = fVar33 * (float)uVar86;
      fVar34 = fVar34 * (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar33 * fVar33),uVar9,4);
      fVar33 = fVar33 * (float)uVar86;
      fVar34 = fVar34 * (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar33 * fVar33),uVar9,4);
      fVar33 = fVar33 * (float)uVar86;
      fVar34 = fVar34 * (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar33 * fVar33),uVar9,4);
      uVar62 = CONCAT44(fVar23 * fVar34 * (float)((ulong)uVar86 >> 0x20),
                        fVar78 * fVar33 * (float)uVar86);
      uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar78 == 0.0),-(uint)(fVar78 == 0.0));
      uVar86 = NEON_frecpe(uVar62,4);
      uVar80 = NEON_frecps(uVar62,uVar86,4);
      fVar78 = (float)uVar86 * (float)uVar80;
      fVar23 = (float)((ulong)uVar86 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
      uVar86 = NEON_frecps(uVar62,CONCAT44(fVar23,fVar78),4);
      fVar78 = fVar78 * (float)uVar86;
      fVar23 = fVar23 * (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frecps(uVar62,CONCAT44(fVar23,fVar78),4);
      fVar78 = fVar78 * (float)uVar86;
      fVar23 = fVar23 * (float)((ulong)uVar86 >> 0x20);
      uVar86 = NEON_frecps(uVar62,CONCAT44(fVar23,fVar78),4);
      fVar78 = fVar78 * (float)uVar86;
      uVar86 = NEON_frecps(uVar62,CONCAT44(fVar23 * (float)((ulong)uVar86 >> 0x20),fVar78),4);
      fVar78 = fVar78 * (float)uVar86;
      fVar70 = fVar70 * fVar78;
      fVar76 = fVar76 * fVar78;
      fVar79 = fVar79 * fVar78;
      uVar86 = auVar63._8_8_;
      uVar80 = auVar63._0_8_;
      fVar34 = *(float *)(param_2 + 0x40) * fVar79 +
               *(float *)(param_2 + 0x20) * fVar70 + *(float *)(param_2 + 0x30) * fVar76;
      fVar50 = *(float *)(param_2 + 0x44) * fVar79 +
               *(float *)(param_2 + 0x24) * fVar70 + *(float *)(param_2 + 0x34) * fVar76;
      fVar51 = *(float *)(param_2 + 0x48) * fVar79 +
               *(float *)(param_2 + 0x28) * fVar70 + *(float *)(param_2 + 0x38) * fVar76;
      fVar78 = *(float *)(lVar1 + 0x40);
      fVar23 = *(float *)(lVar1 + 0x44);
      fVar33 = *(float *)(lVar1 + 0x48);
      auVar103._0_4_ = *(float *)(lVar1 + 0x30) * fVar34;
      auVar103._4_4_ = *(float *)(lVar1 + 0x34) * fVar50;
      auVar103._8_4_ = *(float *)(lVar1 + 0x38) * fVar51;
      auVar103._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
      auVar40._0_4_ = fVar34 * fVar78;
      auVar40._4_4_ = fVar50 * fVar23;
      auVar40._8_4_ = fVar51 * fVar33;
      auVar40._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
      auVar63 = NEON_ext(auVar103,auVar103,8,1);
      auVar101 = NEON_ext(auVar40,auVar40,8,1);
      uVar36 = -(uint)(auVar40._0_4_ + auVar40._4_4_ + auVar101._0_4_ + auVar101._4_4_ <
                      auVar103._0_4_ + auVar103._4_4_ + auVar63._0_4_ + auVar63._4_4_);
      fVar78 = (float)((uint)fVar78 ^ ((uint)fVar78 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar36);
      fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar36);
      fVar33 = (float)((uint)fVar33 ^ ((uint)fVar33 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar36);
      auVar63 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + 0x30);
      auVar101 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + 0x40);
      fVar34 = pfVar11[0xc] + pfVar11[8] * fVar33 + *pfVar11 * fVar78 + pfVar11[4] * fVar23;
      fVar50 = pfVar11[0xd] + pfVar11[9] * fVar33 + pfVar11[1] * fVar78 + pfVar11[5] * fVar23;
      auVar41._0_8_ = CONCAT44(fVar50,fVar34);
      auVar41._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar33 + pfVar11[2] * fVar78 + pfVar11[6] * fVar23;
      auVar41._12_4_ = pfVar11[0xf] + 0.0;
      auVar104._0_4_ = -fVar70 * auVar63._0_4_;
      auVar104._4_4_ = -fVar76 * auVar63._4_4_;
      auVar104._8_4_ = -fVar79 * auVar63._8_4_;
      auVar104._12_4_ = auVar63._12_4_ * 0.0;
      auVar109 = NEON_ext(auVar104,auVar104,8,1);
      auVar81._0_4_ = -fVar70 * auVar101._0_4_;
      auVar81._4_4_ = -fVar76 * auVar101._4_4_;
      auVar81._8_4_ = -fVar79 * auVar101._8_4_;
      auVar81._12_4_ = auVar101._12_4_ * 0.0;
      auVar110 = NEON_ext(auVar81,auVar81,8,1);
      auVar82._0_4_ =
           -(uint)(auVar81._0_4_ + auVar81._4_4_ + auVar110._0_4_ + auVar110._4_4_ <
                  auVar104._0_4_ + auVar104._4_4_ + auVar109._0_4_ + auVar109._4_4_);
      auVar82._4_4_ = auVar82._0_4_;
      auVar82._8_4_ = auVar82._0_4_;
      auVar82._12_4_ = auVar82._0_4_;
      auVar101 = auVar101 ^ (auVar101 ^ auVar63) & auVar82;
      auVar89._0_4_ = fVar18 + auVar101._0_4_;
      auVar89._4_4_ = fVar93 + auVar101._4_4_;
      auVar89._8_4_ = fVar59 + auVar101._8_4_;
      auVar89._12_4_ = auVar101._12_4_ + 0.0;
      auVar63._0_4_ = fVar34 - auVar89._0_4_;
      auVar63._4_4_ = fVar50 - auVar89._4_4_;
      auVar63._8_4_ = auVar41._8_4_ - auVar89._8_4_;
      auVar63._12_4_ = auVar41._12_4_ - auVar89._12_4_;
      auVar96._0_4_ = fVar70 * -auVar63._0_4_;
      auVar96._4_4_ = fVar76 * -auVar63._4_4_;
      auVar96._8_4_ = fVar79 * -auVar63._8_4_;
      auVar96._12_4_ = 0;
      auVar109 = NEON_ext(auVar96,auVar96,8,1);
      fVar78 = auVar109._0_4_ + auVar109._4_4_;
      fVar23 = (auVar96._0_4_ + auVar96._4_4_ + fVar78) - fVar60;
      if (fVar23 <= 0.0) {
        fVar78 = fVar16;
      }
      else {
        auVar109 = *param_7;
        auVar72._0_4_ = fVar70 * auVar109._0_4_;
        auVar72._4_4_ = fVar76 * auVar109._4_4_;
        auVar72._8_4_ = fVar79 * auVar109._8_4_;
        auVar72._12_4_ = auVar109._12_4_ * 0.0;
        auVar110 = NEON_ext(auVar72,auVar72,8,1);
        fVar51 = auVar110._0_4_ + auVar110._4_4_;
        fVar33 = auVar72._0_4_ + auVar72._4_4_ + fVar51;
        uVar71 = CONCAT44(auVar72._0_4_ + auVar72._4_4_ + fVar51,fVar33);
        if (0.0 <= fVar33) {
          return 0;
        }
        uVar108 = NEON_frecpe(uVar71,4);
        uVar114 = NEON_frecps(uVar71,uVar108,4);
        fVar51 = (float)uVar108 * (float)uVar114;
        fVar70 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
        uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
        fVar51 = fVar51 * (float)uVar108;
        fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
        fVar51 = fVar51 * (float)uVar108;
        fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
        fVar51 = fVar51 * (float)uVar108;
        fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
        uVar71 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
        fVar33 = (float)uVar100;
        fVar23 = fVar33 - fVar23 * fVar51 * (float)uVar71;
        uVar100 = CONCAT44((float)((ulong)uVar100 >> 0x20) -
                           ((auVar96._0_4_ + auVar96._4_4_ + fVar78) -
                           (param_1 + (float)((ulong)uVar87 >> 0x20) * 0.1)) *
                           fVar70 * (float)((ulong)uVar71 >> 0x20),fVar23);
        if (fVar33 < fVar23) {
          uVar71 = NEON_fmov(0x3f800000,4);
          if ((float)uVar71 < fVar23) {
            return 0;
          }
          auVar65._0_4_ = auVar109._0_4_ * fVar23 + *param_6;
          auVar65._4_4_ = auVar109._4_4_ * fVar23 + param_6[1];
          auVar65._8_4_ = auVar109._8_4_ * fVar23 + param_6[2];
          auVar65._12_4_ = auVar109._12_4_ * fVar23 + param_6[3];
          auVar63 = NEON_ext(auVar65,auVar65,8,1);
          fVar78 = auVar63._0_4_;
          auVar89._0_4_ = auVar65._0_4_ + auVar101._0_4_;
          auVar89._4_4_ = auVar65._4_4_ + auVar101._4_4_;
          auVar89._8_4_ = fVar78 + auVar101._8_4_;
          auVar89._12_4_ = auVar101._12_4_ + 0.0;
          fVar18 = auVar65._0_4_ - fVar18;
          fVar93 = auVar65._4_4_ - fVar93;
          fVar59 = fVar78 - fVar59;
          local_180._0_4_ = (float)local_180 + fVar18;
          local_180._4_4_ = local_180._4_4_ + fVar93;
          uStack_178._0_4_ = (float)uStack_178 + fVar59;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + fVar18;
          local_170._4_4_ = local_170._4_4_ + fVar93;
          uStack_168._0_4_ = (float)uStack_168 + fVar59;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar18;
          local_160._4_4_ = local_160._4_4_ + fVar93;
          uStack_158._0_4_ = (float)uStack_158 + fVar59;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          auVar83._0_8_ = CONCAT44(local_140[1] - local_180._4_4_,local_140[0] - (float)local_180);
          auVar83._8_4_ = local_140[2] - (float)uStack_178;
          auVar83._12_4_ = local_140[3] - uStack_178._4_4_;
          fVar16 = 3.4028235e+38;
          auVar63._0_4_ = fVar34 - auVar89._0_4_;
          auVar63._4_4_ = fVar50 - auVar89._4_4_;
          auVar63._8_4_ = auVar41._8_4_ - auVar89._8_4_;
          auVar63._12_4_ = auVar41._12_4_ - auVar89._12_4_;
          local_100[1] = auVar83._8_8_;
          local_100[0] = auVar83._0_8_;
          fStack_e8 = (float)uStack_128 - (float)uStack_168;
          fStack_e4 = uStack_128._4_4_ - uStack_168._4_4_;
          local_f0 = (float)local_130 - (float)local_170;
          fStack_ec = local_130._4_4_ - local_170._4_4_;
          fStack_d8 = local_120[2] - (float)uStack_158;
          fStack_d4 = local_120[3] - uStack_158._4_4_;
          local_e0 = local_120[0] - (float)local_160;
          fStack_dc = local_120[1] - local_160._4_4_;
          fVar18 = auVar65._0_4_;
          fVar93 = auVar65._4_4_;
          fVar59 = fVar78;
          local_1c0 = auVar54._0_8_;
          uStack_1b8 = auVar54._8_8_;
        }
        fVar78 = fVar16;
      }
      uVar9 = (ulong)local_b4;
      bVar7 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_100[uVar9 * 2 + -7] = auVar41._8_8_;
      local_100[uVar9 * 2 + -8] = auVar41._0_8_;
      local_100[uVar9 * 2 + -0xf] = auVar89._8_8_;
      local_100[uVar9 * 2 + -0x10] = auVar89._0_8_;
      local_100[uVar9 * 2 + 1] = auVar63._8_8_;
      local_100[uVar9 * 2] = auVar63._0_8_;
      if (bVar7) {
        auVar63 = FUN_00237120(local_100,local_140,&local_180,&local_b4);
      }
      else {
        fVar16 = (float)local_100[0];
        fVar23 = (float)((ulong)local_100[0] >> 0x20);
        fVar33 = (float)local_100[1];
        fVar34 = (float)((ulong)local_100[1] >> 0x20);
        if (uVar52 == 2) {
          auVar63._8_8_ = local_100[1];
          auVar63._0_8_ = local_100[0];
          auVar5._4_4_ = fStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = fStack_e8;
          auVar5._12_4_ = fStack_e4;
          auVar6._4_4_ = fStack_dc;
          auVar6._0_4_ = local_e0;
          auVar6._8_4_ = fStack_d8;
          auVar6._12_4_ = fStack_d4;
          auVar73._0_4_ = local_f0 - fVar16;
          auVar73._4_4_ = fStack_ec - fVar23;
          auVar73._8_4_ = fStack_e8 - fVar33;
          auVar73._12_4_ = fStack_e4 - fVar34;
          auVar68._0_4_ = local_e0 - fVar16;
          auVar68._4_4_ = fStack_dc - fVar23;
          auVar68._8_4_ = fStack_d8 - fVar33;
          auVar68._12_4_ = fStack_d4 - fVar34;
          auVar101 = NEON_ext(auVar73,auVar73,8,1);
          auVar109 = NEON_ext(auVar68,auVar68,8,1);
          fVar79 = auVar73._0_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar68._0_4_;
          uVar71 = NEON_ext(CONCAT44(auVar73._4_4_ * auVar68._8_4_ - auVar73._8_4_ * auVar68._4_4_,
                                     fVar79),
                            CONCAT44(auVar101._4_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar109._4_4_
                                     ,auVar101._0_4_ * auVar68._0_4_ -
                                      auVar73._0_4_ * auVar109._0_4_),4,1);
          fVar70 = (float)uVar71;
          auVar90._0_4_ = fVar70 * fVar70;
          fVar76 = (float)((ulong)uVar71 >> 0x20);
          auVar90._4_4_ = fVar76 * fVar76;
          auVar90._8_4_ = fVar79 * fVar79;
          auVar90._12_4_ = 0;
          auVar101 = NEON_ext(auVar90,auVar90,8,1);
          fVar51 = auVar101._0_4_ + auVar101._4_4_;
          fVar50 = auVar90._0_4_ + auVar90._4_4_ + fVar51;
          uVar71 = CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar51,fVar50);
          local_b4 = 3;
          if (1.1920929e-07 < fVar50) {
            if (fVar50 != 0.0) {
              auVar101 = NEON_ext(auVar5,auVar5,8,1);
              auVar109 = NEON_ext(auVar6,auVar6,8,1);
              fVar19 = local_f0 * fStack_dc - fStack_ec * local_e0;
              auVar110 = NEON_ext(auVar63,auVar63,8,1);
              uVar114 = NEON_ext(CONCAT44(fStack_ec * fStack_d8 - fStack_e8 * fStack_dc,fVar19),
                                 CONCAT44(auVar101._4_4_ * fStack_dc - fStack_ec * auVar109._4_4_,
                                          auVar101._0_4_ * local_e0 - local_f0 * auVar109._0_4_),4,1
                                );
              fVar50 = fVar23 * local_e0 - fVar16 * fStack_dc;
              uVar119 = NEON_ext(CONCAT44(fVar33 * fStack_dc - fVar23 * fStack_d8,fVar50),
                                 CONCAT44(fVar23 * auVar109._4_4_ - auVar110._4_4_ * fStack_dc,
                                          fVar16 * auVar109._0_4_ - auVar110._0_4_ * local_e0),4,1);
              fVar51 = fVar16 * fStack_ec - fVar23 * local_f0;
              uVar108 = NEON_ext(CONCAT44(fVar23 * fStack_e8 - fVar33 * fStack_ec,fVar51),
                                 CONCAT44(auVar110._4_4_ * fStack_ec - fVar23 * auVar101._4_4_,
                                          auVar110._0_4_ * local_f0 - fVar16 * auVar101._0_4_),4,1);
              auVar105._0_4_ = (float)uVar114 * fVar70;
              auVar105._4_4_ = (float)((ulong)uVar114 >> 0x20) * fVar76;
              auVar105._8_4_ = fVar19 * fVar79;
              auVar105._12_4_ = 0;
              auVar101 = NEON_ext(auVar105,auVar105,8,1);
              auVar111._0_4_ = (float)uVar119 * fVar70;
              auVar111._4_4_ = (float)((ulong)uVar119 >> 0x20) * fVar76;
              auVar111._8_4_ = fVar50 * fVar79;
              auVar111._12_4_ = 0;
              auVar109 = NEON_ext(auVar111,auVar111,8,1);
              fVar50 = auVar105._0_4_ + auVar105._4_4_ + auVar101._0_4_ + auVar101._4_4_;
              auVar115._0_4_ = (float)uVar108 * fVar70;
              auVar115._4_4_ = (float)((ulong)uVar108 >> 0x20) * fVar76;
              auVar115._8_4_ = fVar51 * fVar79;
              auVar115._12_4_ = 0;
              fVar51 = auVar111._0_4_ + auVar111._4_4_ + auVar109._0_4_ + auVar109._4_4_;
              auVar101 = NEON_ext(auVar115,auVar115,8,1);
              fVar19 = auVar115._0_4_ + auVar115._4_4_ + auVar101._0_4_ + auVar101._4_4_;
              bVar7 = (0.0 <= fVar50 && 0.0 <= fVar51) && 0.0 <= fVar19;
              auVar116._0_4_ = -(uint)bVar7;
              auVar116._4_4_ = -(uint)bVar7;
              auVar116._8_4_ = -(uint)bVar7;
              auVar116._12_4_ = -(uint)bVar7;
              NEON_ext(auVar116,auVar116,8,1);
              if (CONCAT13((char)auVar116._12_4_,
                           CONCAT12((char)auVar116._8_4_,
                                    CONCAT11((char)auVar116._4_4_,(char)auVar116._0_4_))) == -1) {
                auVar27._0_4_ = fVar16 * fVar70;
                auVar27._4_4_ = fVar23 * fVar76;
                auVar27._8_4_ = fVar33 * fVar79;
                auVar27._12_4_ = fVar34 * 0.0;
                auVar63 = NEON_ext(auVar27,auVar27,8,1);
                uVar108 = NEON_frecpe(uVar71,4);
                uVar114 = NEON_frecps(uVar71,uVar108,4);
                fVar16 = (float)uVar108 * (float)uVar114;
                fVar23 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
                uVar108 = NEON_frecps(uVar71,CONCAT44(fVar23,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                fVar23 = fVar23 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar71,CONCAT44(fVar23,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                fVar23 = fVar23 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar71,CONCAT44(fVar23,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                uVar71 = NEON_frecps(uVar71,CONCAT44(fVar23 * (float)((ulong)uVar108 >> 0x20),fVar16
                                                    ),4);
                fVar16 = (auVar27._0_4_ + auVar27._4_4_ + auVar63._0_4_ + auVar63._4_4_) *
                         fVar16 * (float)uVar71;
                auVar63._0_4_ = fVar70 * fVar16;
                auVar63._4_4_ = fVar76 * fVar16;
                auVar63._8_4_ = fVar79 * fVar16;
                auVar63._12_4_ = 0.0;
              }
              else {
                auVar84._0_4_ = -fVar16 * auVar73._0_4_;
                auVar84._4_4_ = -fVar23 * auVar73._4_4_;
                auVar84._8_4_ = -fVar33 * auVar73._8_4_;
                auVar84._12_4_ = auVar73._12_4_ * 0.0;
                auVar101 = NEON_ext(auVar84,auVar84,8,1);
                fVar79 = auVar101._0_4_ + auVar101._4_4_;
                auVar91._0_4_ = -local_f0 * auVar73._0_4_;
                auVar91._4_4_ = -fStack_ec * auVar73._4_4_;
                auVar91._8_4_ = -fStack_e8 * auVar73._8_4_;
                auVar91._12_4_ = auVar73._12_4_ * 0.0;
                auVar101 = NEON_ext(auVar91,auVar91,8,1);
                fVar77 = auVar101._0_4_ + auVar101._4_4_;
                fVar70 = auVar84._0_4_ + auVar84._4_4_ + fVar79;
                fVar76 = auVar91._0_4_ + auVar91._4_4_ + fVar77;
                fVar77 = auVar91._0_4_ + auVar91._4_4_ + fVar77;
                bVar7 = (0.0 <= fVar70 && fVar19 <= 0.0) && fVar76 <= 0.0;
                auVar112._0_4_ = -(uint)bVar7;
                auVar112._4_4_ = -(uint)bVar7;
                auVar112._8_4_ = -(uint)bVar7;
                auVar112._12_4_ = -(uint)bVar7;
                NEON_ext(auVar112,auVar112,8,1);
                if (CONCAT13((char)auVar112._12_4_,
                             CONCAT12((char)auVar112._8_4_,
                                      CONCAT11((char)auVar112._4_4_,(char)auVar112._0_4_))) == -1) {
                  uVar71 = CONCAT44((auVar84._0_4_ + auVar84._4_4_ + fVar79) - fVar77,
                                    fVar70 - fVar76);
                  uVar108 = NEON_frecpe(uVar71,4);
                  uVar114 = NEON_frecps(uVar71,uVar108,4);
                  fVar50 = (float)uVar108 * (float)uVar114;
                  fVar51 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
                  uVar108 = NEON_frecps(uVar71,CONCAT44(fVar51,fVar50),4);
                  fVar50 = fVar50 * (float)uVar108;
                  fVar51 = fVar51 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar71,CONCAT44(fVar51,fVar50),4);
                  fVar50 = fVar50 * (float)uVar108;
                  fVar51 = fVar51 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar71,CONCAT44(fVar51,fVar50),4);
                  fVar50 = fVar50 * (float)uVar108;
                  uVar71 = NEON_frecps(uVar71,CONCAT44(fVar51 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar50),4);
                  fVar70 = fVar70 * (float)(-(uint)(1.1920929e-07 < ABS(fVar70 - fVar76)) &
                                           (uint)(fVar50 * (float)uVar71));
                  puVar10 = &local_180;
                  pfVar11 = local_140;
                  auVar28._0_8_ =
                       CONCAT44(fVar23 + auVar73._4_4_ * fVar70,fVar16 + auVar73._0_4_ * fVar70);
                  auVar28._8_4_ = fVar33 + auVar73._8_4_ * fVar70;
                  auVar28._12_4_ = fVar34 + auVar73._12_4_ * fVar70;
                  auVar63 = NEON_ext(auVar28,auVar28,8,1);
                  pfVar12 = (float *)local_100;
                  auVar63._8_4_ = (float)auVar63._0_4_;
                  auVar63._0_8_ = auVar28._0_8_;
                  auVar63._12_4_ = 0.0;
                  local_b4 = 2;
LAB_002dba80:
                  puVar13 = &local_170;
                  pfVar14 = (float *)&local_130;
                  pfVar15 = &local_f0;
                }
                else {
                  auVar113._0_4_ = -local_f0 * auVar68._0_4_;
                  auVar113._4_4_ = -fStack_ec * auVar68._4_4_;
                  auVar113._8_4_ = -fStack_e8 * auVar68._8_4_;
                  auVar113._12_4_ = auVar68._12_4_ * 0.0;
                  auVar101 = NEON_ext(auVar113,auVar113,8,1);
                  fVar20 = auVar101._0_4_ + auVar101._4_4_;
                  auVar74._0_4_ = auVar73._0_4_ * -local_e0;
                  auVar74._4_4_ = auVar73._4_4_ * -fStack_dc;
                  auVar74._8_4_ = auVar73._8_4_ * -fStack_d8;
                  auVar74._12_4_ = auVar73._12_4_ * 0.0;
                  auVar118._0_4_ = auVar68._0_4_ * -local_e0;
                  auVar118._4_4_ = auVar68._4_4_ * -fStack_dc;
                  auVar118._8_4_ = auVar68._8_4_ * -fStack_d8;
                  auVar118._12_4_ = auVar68._12_4_ * 0.0;
                  fVar79 = auVar113._0_4_ + auVar113._4_4_ + fVar20;
                  auVar101 = NEON_ext(auVar74,auVar74,8,1);
                  fVar21 = auVar101._0_4_ + auVar101._4_4_;
                  fVar19 = auVar74._0_4_ + auVar74._4_4_ + fVar21;
                  auVar101 = NEON_ext(auVar118,auVar118,8,1);
                  fVar22 = auVar101._0_4_ + auVar101._4_4_;
                  fVar17 = auVar118._0_4_ + auVar118._4_4_ + fVar22;
                  fVar22 = auVar118._0_4_ + auVar118._4_4_ + fVar22;
                  bVar7 = (fVar76 <= fVar79 && fVar50 <= 0.0) && fVar17 <= fVar19;
                  auVar106._0_4_ = -(uint)bVar7;
                  auVar106._4_4_ = -(uint)bVar7;
                  auVar106._8_4_ = -(uint)bVar7;
                  auVar106._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar106,auVar106,8,1);
                  puVar13 = &local_160;
                  pfVar14 = local_120;
                  pfVar15 = &local_e0;
                  if (CONCAT13((char)auVar106._12_4_,
                               CONCAT12((char)auVar106._8_4_,
                                        CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) == -1)
                  {
                    local_b4 = 2;
                    fVar16 = (fVar79 - fVar76) + (fVar19 - fVar17);
                    uVar71 = CONCAT44(((auVar113._0_4_ + auVar113._4_4_ + fVar20) - fVar77) +
                                      ((auVar74._0_4_ + auVar74._4_4_ + fVar21) - fVar22),fVar16);
                    uVar108 = NEON_frecpe(uVar71,4);
                    uVar114 = NEON_frecps(uVar71,uVar108,4);
                    fVar23 = (float)uVar108 * (float)uVar114;
                    fVar33 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar23),4);
                    fVar23 = fVar23 * (float)uVar108;
                    fVar33 = fVar33 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar23),4);
                    fVar23 = fVar23 * (float)uVar108;
                    fVar33 = fVar33 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar23),4);
                    fVar23 = fVar23 * (float)uVar108;
                    uVar71 = NEON_frecps(uVar71,CONCAT44(fVar33 * (float)((ulong)uVar108 >> 0x20),
                                                         fVar23),4);
                    fVar16 = (fVar79 - fVar76) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar16)) &
                                    (uint)(fVar23 * (float)uVar71));
                    auVar29._0_8_ =
                         CONCAT44(fStack_ec + (fStack_dc - fStack_ec) * fVar16,
                                  local_f0 + (local_e0 - local_f0) * fVar16);
                    auVar29._8_4_ = fStack_e8 + (fStack_d8 - fStack_e8) * fVar16;
                    auVar29._12_4_ = fStack_e4 + (fStack_d4 - fStack_e4) * fVar16;
                    auVar63 = NEON_ext(auVar29,auVar29,8,1);
                    auVar63._8_4_ = (float)auVar63._0_4_;
                    auVar63._0_8_ = auVar29._0_8_;
                    auVar63._12_4_ = 0.0;
                    puVar10 = &local_170;
                    pfVar11 = (float *)&local_130;
                    pfVar12 = &local_f0;
                  }
                  else {
                    auVar107._0_4_ = -fVar16 * auVar68._0_4_;
                    auVar107._4_4_ = -fVar23 * auVar68._4_4_;
                    auVar107._8_4_ = -fVar33 * auVar68._8_4_;
                    auVar107._12_4_ = auVar68._12_4_ * 0.0;
                    auVar101 = NEON_ext(auVar107,auVar107,8,1);
                    fVar19 = auVar101._0_4_ + auVar101._4_4_;
                    fVar50 = auVar107._0_4_ + auVar107._4_4_ + fVar19;
                    bVar7 = (fVar51 <= 0.0 && 0.0 <= fVar50) && fVar17 <= 0.0;
                    auVar97._0_4_ = -(uint)bVar7;
                    auVar97._4_4_ = -(uint)bVar7;
                    auVar97._8_4_ = -(uint)bVar7;
                    auVar97._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar97,auVar97,8,1);
                    if (CONCAT13((char)auVar97._12_4_,
                                 CONCAT12((char)auVar97._8_4_,
                                          CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) != -1)
                    {
                      bVar7 = fVar70 <= 0.0 && fVar50 <= 0.0;
                      auVar69._0_4_ = -(uint)bVar7;
                      auVar69._4_4_ = -(uint)bVar7;
                      auVar69._8_4_ = -(uint)bVar7;
                      auVar69._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar69,auVar69,8,1);
                      if (CONCAT13((char)auVar69._12_4_,
                                   CONCAT12((char)auVar69._8_4_,
                                            CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_))) ==
                          -1) {
                        puVar10 = &local_180;
                        pfVar11 = local_140;
                        pfVar12 = (float *)local_100;
                      }
                      else {
                        bVar7 = 0.0 <= fVar76 && fVar79 <= fVar76;
                        auVar25._0_4_ = -(uint)bVar7;
                        auVar25._4_4_ = -(uint)bVar7;
                        auVar25._8_4_ = -(uint)bVar7;
                        auVar25._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar25,auVar25,8,1);
                        iVar37 = CONCAT13((char)auVar25._12_4_,
                                          CONCAT12((char)auVar25._8_4_,
                                                   CONCAT11((char)auVar25._4_4_,(char)auVar25._0_4_)
                                                  ));
                        iVar61 = -(uint)(iVar37 == -1);
                        auVar26._4_4_ = iVar61;
                        auVar26._0_4_ = iVar61;
                        auVar26._8_4_ = iVar61;
                        auVar26._12_4_ = iVar61;
                        lVar1 = 0x10;
                        if (iVar37 != -1) {
                          lVar1 = 0x20;
                        }
                        auVar63 = auVar6 ^ (auVar6 ^ auVar5) & auVar26;
                        pfVar12 = (float *)((long)local_100 + lVar1);
                        pfVar11 = (float *)((long)local_100 + lVar1 + -0x40);
                        puVar10 = (undefined8 *)((long)local_100 + lVar1 + -0x80);
                      }
                      local_b4 = 1;
                      goto LAB_002dba80;
                    }
                    uVar71 = CONCAT44((auVar107._0_4_ + auVar107._4_4_ + fVar19) - fVar22,
                                      fVar50 - fVar17);
                    uVar108 = NEON_frecpe(uVar71,4);
                    uVar114 = NEON_frecps(uVar71,uVar108,4);
                    fVar51 = (float)uVar108 * (float)uVar114;
                    fVar70 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
                    fVar51 = fVar51 * (float)uVar108;
                    fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
                    fVar51 = fVar51 * (float)uVar108;
                    fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
                    fVar51 = fVar51 * (float)uVar108;
                    uVar71 = NEON_frecps(uVar71,CONCAT44(fVar70 * (float)((ulong)uVar108 >> 0x20),
                                                         fVar51),4);
                    fVar50 = fVar50 * (float)(-(uint)(1.1920929e-07 < ABS(fVar50 - fVar17)) &
                                             (uint)(fVar51 * (float)uVar71));
                    auVar30._0_8_ =
                         CONCAT44(fVar23 + auVar68._4_4_ * fVar50,fVar16 + auVar68._0_4_ * fVar50);
                    auVar30._8_4_ = fVar33 + auVar68._8_4_ * fVar50;
                    auVar30._12_4_ = fVar34 + auVar68._12_4_ * fVar50;
                    auVar63 = NEON_ext(auVar30,auVar30,8,1);
                    auVar63._8_4_ = (float)auVar63._0_4_;
                    auVar63._0_8_ = auVar30._0_8_;
                    auVar63._12_4_ = 0.0;
                    local_b4 = 2;
                    puVar10 = &local_180;
                    pfVar11 = local_140;
                    pfVar12 = (float *)local_100;
                  }
                }
                local_100[1] = *(undefined8 *)(pfVar12 + 2);
                local_100[0] = *(undefined8 *)pfVar12;
                fStack_e8 = (float)*(undefined8 *)(pfVar15 + 2);
                fStack_e4 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                local_f0 = (float)*(undefined8 *)pfVar15;
                fStack_ec = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                local_140[2] = (float)*(undefined8 *)(pfVar11 + 2);
                local_140[3] = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
                local_140[0] = (float)*(undefined8 *)pfVar11;
                local_140[1] = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
                uStack_128 = *(undefined8 *)(pfVar14 + 2);
                local_130 = *(undefined8 *)pfVar14;
                uStack_178 = puVar10[1];
                local_180 = *puVar10;
                uStack_168 = puVar13[1];
                local_170 = *puVar13;
              }
            }
          }
          else {
            auVar42._0_4_ = auVar73._0_4_ * auVar73._0_4_;
            auVar42._4_4_ = auVar73._4_4_ * auVar73._4_4_;
            auVar42._8_4_ = auVar73._8_4_ * auVar73._8_4_;
            auVar42._12_4_ = auVar73._12_4_ * auVar73._12_4_;
            auVar63 = NEON_ext(auVar42,auVar42,8,1);
            fVar51 = auVar63._0_4_ + auVar63._4_4_;
            fVar50 = auVar42._0_4_ + auVar42._4_4_ + fVar51;
            uVar71 = CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar51,fVar50);
            bVar7 = fVar50 <= 1.1920929e-07;
            auVar56._0_4_ = -(uint)bVar7;
            auVar56._4_4_ = -(uint)bVar7;
            auVar56._8_4_ = -(uint)bVar7;
            auVar56._12_4_ = -(uint)bVar7;
            NEON_ext(auVar56,auVar56,8,1);
            local_b4 = 2;
            if (CONCAT13((char)auVar56._12_4_,
                         CONCAT12((char)auVar56._8_4_,
                                  CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_))) != -1) {
              auVar57._0_4_ = -fVar16 * auVar73._0_4_;
              auVar57._4_4_ = -fVar23 * auVar73._4_4_;
              auVar57._8_4_ = -fVar33 * auVar73._8_4_;
              auVar57._12_4_ = auVar73._12_4_ * 0.0;
              auVar63 = NEON_ext(auVar57,auVar57,8,1);
              fVar50 = auVar63._0_4_ + auVar63._4_4_;
              uVar108 = NEON_frecpe(uVar71,4);
              uVar114 = NEON_frecps(uVar71,uVar108,4);
              fVar51 = (float)uVar108 * (float)uVar114;
              fVar70 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
              uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
              fVar51 = fVar51 * (float)uVar108;
              fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
              fVar51 = fVar51 * (float)uVar108;
              fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
              fVar51 = fVar51 * (float)uVar108;
              fVar70 = fVar70 * (float)((ulong)uVar108 >> 0x20);
              uVar71 = NEON_frecps(uVar71,CONCAT44(fVar70,fVar51),4);
              uVar108 = NEON_fmov(0x3f800000,4);
              uVar71 = NEON_fmin(CONCAT44((auVar57._0_4_ + auVar57._4_4_ + fVar50) *
                                          fVar70 * (float)((ulong)uVar71 >> 0x20),
                                          (auVar57._0_4_ + auVar57._4_4_ + fVar50) *
                                          fVar51 * (float)uVar71),uVar108,4);
              uVar71 = NEON_fmax(uVar71,0,4);
              fVar50 = (float)uVar71;
              fVar51 = auVar73._0_4_ * fVar50;
              fVar70 = auVar73._4_4_ * fVar50;
              fVar76 = auVar73._8_4_ * fVar50;
              fVar50 = auVar73._12_4_ * fVar50;
              goto LAB_002db5fc;
            }
LAB_002db610:
            auVar63._8_8_ = local_100[1];
            auVar63._0_8_ = local_100[0];
            local_b4 = 1;
          }
        }
        else if (uVar52 == 1) {
          fVar51 = local_f0 - fVar16;
          fVar70 = fStack_ec - fVar23;
          fVar76 = fStack_e8 - fVar33;
          fVar50 = fStack_e4 - fVar34;
          auVar55._0_4_ = fVar51 * fVar51;
          auVar55._4_4_ = fVar70 * fVar70;
          auVar55._8_4_ = fVar76 * fVar76;
          auVar55._12_4_ = fVar50 * fVar50;
          auVar63 = NEON_ext(auVar55,auVar55,8,1);
          fVar19 = auVar63._0_4_ + auVar63._4_4_;
          fVar79 = auVar55._0_4_ + auVar55._4_4_ + fVar19;
          uVar71 = CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar19,fVar79);
          bVar7 = fVar79 <= 1.1920929e-07;
          auVar66._0_4_ = -(uint)bVar7;
          auVar66._4_4_ = -(uint)bVar7;
          auVar66._8_4_ = -(uint)bVar7;
          auVar66._12_4_ = -(uint)bVar7;
          NEON_ext(auVar66,auVar66,8,1);
          if (CONCAT13((char)auVar66._12_4_,
                       CONCAT12((char)auVar66._8_4_,
                                CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))) == -1)
          goto LAB_002db610;
          auVar67._0_4_ = -fVar16 * fVar51;
          auVar67._4_4_ = -fVar23 * fVar70;
          auVar67._8_4_ = -fVar33 * fVar76;
          auVar67._12_4_ = fVar50 * 0.0;
          auVar63 = NEON_ext(auVar67,auVar67,8,1);
          fVar79 = auVar63._0_4_ + auVar63._4_4_;
          uVar108 = NEON_frecpe(uVar71,4);
          uVar114 = NEON_frecps(uVar71,uVar108,4);
          fVar19 = (float)uVar108 * (float)uVar114;
          fVar77 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
          uVar108 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar19),4);
          fVar19 = fVar19 * (float)uVar108;
          fVar77 = fVar77 * (float)((ulong)uVar108 >> 0x20);
          uVar108 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar19),4);
          fVar19 = fVar19 * (float)uVar108;
          fVar77 = fVar77 * (float)((ulong)uVar108 >> 0x20);
          uVar108 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar19),4);
          fVar19 = fVar19 * (float)uVar108;
          fVar77 = fVar77 * (float)((ulong)uVar108 >> 0x20);
          uVar71 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar19),4);
          uVar108 = NEON_fmov(0x3f800000,4);
          uVar71 = NEON_fmin(CONCAT44((auVar67._0_4_ + auVar67._4_4_ + fVar79) *
                                      fVar77 * (float)((ulong)uVar71 >> 0x20),
                                      (auVar67._0_4_ + auVar67._4_4_ + fVar79) *
                                      fVar19 * (float)uVar71),uVar108,4);
          uVar71 = NEON_fmax(uVar71,0,4);
          fVar79 = (float)uVar71;
          fVar51 = fVar51 * fVar79;
          fVar70 = fVar70 * fVar79;
          fVar76 = fVar76 * fVar79;
          fVar50 = fVar50 * fVar79;
LAB_002db5fc:
          auVar24._0_8_ = CONCAT44(fVar23 + fVar70,fVar16 + fVar51);
          auVar24._8_4_ = fVar33 + fVar76;
          auVar24._12_4_ = fVar34 + fVar50;
          auVar63 = NEON_ext(auVar24,auVar24,8,1);
          auVar63._8_4_ = (float)auVar63._0_4_;
          auVar63._0_8_ = auVar24._0_8_;
          auVar63._12_4_ = 0.0;
        }
      }
      fVar23 = auVar63._0_4_;
      auVar43._0_4_ = fVar23 * fVar23;
      fVar33 = auVar63._4_4_;
      auVar43._4_4_ = fVar33 * fVar33;
      fVar34 = auVar63._8_4_;
      auVar43._8_4_ = fVar34 * fVar34;
      auVar43._12_4_ = auVar63._12_4_ * auVar63._12_4_;
      auVar101 = NEON_ext(auVar43,auVar43,8,1);
      fVar16 = auVar43._0_4_ + auVar43._4_4_ + auVar101._0_4_ + auVar101._4_4_;
      iVar37 = -(uint)(fVar16 < fVar78);
      bVar7 = fVar60 * fVar60 < fVar16 && fVar16 < fVar78;
      auVar75._0_4_ = -(uint)bVar7;
      auVar75._4_4_ = -(uint)bVar7;
      auVar75._8_4_ = -(uint)bVar7;
      auVar75._12_4_ = -(uint)bVar7;
      NEON_ext(auVar75,auVar75,8,1);
      auVar54._0_4_ = -fVar23;
      auVar54._4_4_ = -fVar33;
      auVar54._8_4_ = -fVar34;
      auVar54._12_4_ = 0;
    } while (CONCAT13((char)auVar75._12_4_,
                      CONCAT12((char)auVar75._8_4_,CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_)
                              )) == -1);
    auVar45._8_8_ = uStack_1b8;
    auVar45._0_8_ = local_1c0;
    auVar88._4_4_ = iVar37;
    auVar88._0_4_ = iVar37;
    auVar88._8_4_ = iVar37;
    auVar88._12_4_ = iVar37;
  }
  else {
    auVar45._8_4_ = auVar54._8_4_;
    auVar45._0_8_ = auVar54._0_8_;
    auVar45._12_4_ = 0;
    uVar80 = auVar63._0_8_;
  }
  auVar99 = ZEXT816(0);
  iVar37 = -(uint)(fVar85 * fVar85 < fVar16);
  bVar35 = (byte)iVar37;
  auVar44[0] = bVar35 & auVar88[0];
  bVar47 = (byte)((uint)iVar37 >> 8);
  auVar44[1] = bVar47 & auVar88[1];
  bVar48 = (byte)((uint)iVar37 >> 0x10);
  auVar44[2] = bVar48 & auVar88[2];
  bVar49 = (byte)((uint)iVar37 >> 0x18);
  auVar44[3] = bVar49 & auVar88[3];
  auVar44[4] = bVar35 & auVar88[4];
  auVar44[5] = bVar47 & auVar88[5];
  auVar44[6] = bVar48 & auVar88[6];
  auVar44[7] = bVar49 & auVar88[7];
  auVar44[8] = bVar35 & auVar88[8];
  auVar44[9] = bVar47 & auVar88[9];
  auVar44[10] = bVar48 & auVar88[10];
  auVar44[0xb] = bVar49 & auVar88[0xb];
  auVar44[0xc] = bVar35 & auVar88[0xc];
  auVar44[0xd] = bVar47 & auVar88[0xd];
  auVar44[0xe] = bVar48 & auVar88[0xe];
  auVar44[0xf] = bVar49 & auVar88[0xf];
  auVar4._8_8_ = uVar86;
  auVar4._0_8_ = uVar80;
  auVar92._8_8_ = uVar86;
  auVar92._0_8_ = uVar80;
  auVar92 = auVar92 ^ (auVar4 ^ auVar63) & auVar88;
  auVar45 = auVar45 ^ (auVar45 ^ auVar54) & auVar44;
  fVar85 = auVar45._0_4_;
  auVar58._0_4_ = fVar85 * fVar85;
  fVar93 = auVar45._4_4_;
  auVar58._4_4_ = fVar93 * fVar93;
  fVar59 = auVar45._8_4_;
  auVar58._8_4_ = fVar59 * fVar59;
  auVar58._12_4_ = auVar45._12_4_ * auVar45._12_4_;
  auVar63 = NEON_ext(auVar58,auVar58,8,1);
  fVar18 = auVar63._0_4_ + auVar63._4_4_;
  fVar16 = auVar58._0_4_ + auVar58._4_4_ + fVar18;
  fVar18 = auVar58._0_4_ + auVar58._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar86 = NEON_frsqrte(uVar9,4);
  fVar60 = (float)uVar86;
  fVar78 = (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar60 * fVar60),uVar9,4);
  fVar60 = fVar60 * (float)uVar86;
  fVar78 = fVar78 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar60 * fVar60),uVar9,4);
  fVar60 = fVar60 * (float)uVar86;
  fVar78 = fVar78 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar60 * fVar60),uVar9,4);
  fVar60 = fVar60 * (float)uVar86;
  fVar78 = fVar78 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar60 * fVar60),uVar9,4);
  uVar62 = CONCAT44(fVar18 * fVar78 * (float)((ulong)uVar86 >> 0x20),fVar16 * fVar60 * (float)uVar86
                   );
  uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar86 = NEON_frecpe(uVar62,4);
  uVar87 = NEON_frecps(uVar62,uVar86,4);
  fVar16 = (float)uVar86 * (float)uVar87;
  fVar18 = (float)((ulong)uVar86 >> 0x20) * (float)((ulong)uVar87 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar18 = fVar18 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar18 = fVar18 * (float)((ulong)uVar86 >> 0x20);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  iVar37 = -(uint)(0.0 < (float)uVar62);
  uVar86 = NEON_frecps(uVar62,CONCAT44(fVar18 * (float)((ulong)uVar86 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar86;
  fVar85 = fVar85 * fVar16;
  fVar93 = fVar93 * fVar16;
  fVar59 = fVar59 * fVar16;
  bVar35 = (byte)iVar37;
  bVar47 = (byte)((uint)iVar37 >> 8);
  bVar48 = (byte)((uint)iVar37 >> 0x10);
  bVar49 = (byte)((uint)iVar37 >> 0x18);
  fVar16 = (float)CONCAT13(bVar49 & (byte)((uint)fVar85 >> 0x18),
                           CONCAT12(bVar48 & (byte)((uint)fVar85 >> 0x10),
                                    CONCAT11(bVar47 & (byte)((uint)fVar85 >> 8),
                                             bVar35 & SUB41(fVar85,0))));
  auVar38._0_8_ =
       CONCAT17(bVar49 & (byte)((uint)fVar93 >> 0x18),
                CONCAT16(bVar48 & (byte)((uint)fVar93 >> 0x10),
                         CONCAT15(bVar47 & (byte)((uint)fVar93 >> 8),
                                  CONCAT14(bVar35 & SUB41(fVar93,0),fVar16))));
  auVar38[8] = bVar35 & SUB41(fVar59,0);
  auVar38[9] = bVar47 & (byte)((uint)fVar59 >> 8);
  auVar38[10] = bVar48 & (byte)((uint)fVar59 >> 0x10);
  auVar38[0xb] = bVar49 & (byte)((uint)fVar59 >> 0x18);
  auVar46._0_8_ = CONCAT44(-(float)((ulong)auVar38._0_8_ >> 0x20),-fVar16);
  auVar46._8_4_ = -auVar38._8_4_;
  iVar37 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar46._12_4_ = 0;
  auVar98._0_8_ = CONCAT44(iVar37,iVar37);
  auVar98._8_4_ = iVar37;
  auVar98._12_4_ = iVar37;
  param_9[1] = (ulong)(uint)auVar46._8_4_;
  *param_9 = auVar46._0_8_;
  *param_8 = uVar100;
  uStack_188 = auVar92._8_8_;
  local_190 = auVar92._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_190,local_100,&local_f0,&local_e0,local_a8,local_b0);
    auVar99._0_4_ =
         local_140[0] +
         ((float)local_130 - local_140[0]) * local_a8[0] +
         (local_120[0] - local_140[0]) * local_b0[0];
    auVar99._4_4_ =
         local_140[1] +
         (local_130._4_4_ - local_140[1]) * local_a8[0] +
         (local_120[1] - local_140[1]) * local_b0[0];
    auVar99._8_4_ =
         local_140[2] +
         ((float)uStack_128 - local_140[2]) * local_a8[0] +
         (local_120[2] - local_140[2]) * local_b0[0];
    auVar99._12_4_ = local_140[3] + 0.0;
    auVar46._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_190,local_100,&local_f0,local_a8);
    auVar117._0_8_ =
         CONCAT44(local_140[1] + (local_130._4_4_ - local_140[1]) * local_a8[0],
                  local_140[0] + ((float)local_130 - local_140[0]) * local_a8[0]);
    auVar117._8_4_ = local_140[2] + ((float)uStack_128 - local_140[2]) * local_a8[0];
    auVar117._12_4_ = local_140[3] + (uStack_128._4_4_ - local_140[3]) * local_a8[0];
    auVar63 = NEON_ext(auVar117,auVar117,8,1);
    auVar46._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
    auVar99._8_4_ = (float)auVar63._0_4_;
    auVar99._0_8_ = auVar117._0_8_;
    auVar99._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar99._4_4_ = local_140[1];
    auVar99._0_4_ = local_140[0];
    auVar99._8_4_ = local_140[2];
    auVar99._12_4_ = local_140[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar31._0_8_ =
       CONCAT44(auVar99._4_4_ - auVar46._4_4_ * fVar16,auVar99._0_4_ - auVar46._0_4_ * fVar16);
  auVar31._8_4_ = auVar99._8_4_ - auVar46._8_4_ * fVar16;
  auVar31._12_4_ = auVar99._12_4_ - auVar46._12_4_ * fVar16;
  auVar63 = NEON_ext(auVar31,auVar31,8,1);
  auVar32._8_4_ = auVar63._0_4_;
  auVar32._0_8_ = auVar31._0_8_;
  auVar32._12_4_ = 0;
  auVar99 = auVar99 ^ (auVar99 ^ auVar32) & auVar98;
  param_10[1] = auVar99._8_8_;
  *param_10 = auVar99._0_8_;
  return 1;
}


