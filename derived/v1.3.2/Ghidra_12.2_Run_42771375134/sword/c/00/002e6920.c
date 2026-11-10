/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e6920; name: FUN_002e6920
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e6920(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
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
  float fVar32;
  float fVar33;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  byte bVar34;
  uint uVar35;
  undefined1 auVar37 [12];
  byte bVar46;
  byte bVar47;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar36;
  byte bVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar49;
  float fVar50;
  float fVar57;
  float fVar58;
  float fVar60;
  undefined1 auVar51 [16];
  uint uVar59;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  undefined1 auVar72 [16];
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  float fVar85;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar86;
  undefined8 uVar87;
  float fVar94;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar100;
  uint uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  uint uVar108;
  undefined8 uVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined8 uVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined8 uVar124;
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
  fVar86 = param_4[2];
  fVar94 = param_4[3];
  auVar113._0_4_ = fVar16 * fVar16;
  auVar113._4_4_ = fVar18 * fVar18;
  auVar113._8_4_ = fVar86 * fVar86;
  auVar113._12_4_ = fVar94 * fVar94;
  auVar63 = NEON_ext(auVar113,auVar113,8,1);
  uVar49 = -(uint)(1.1920929e-07 < auVar113._0_4_ + auVar113._4_4_ + auVar63._0_4_ + auVar63._4_4_);
  lVar1 = *(long *)(param_2 + 8);
  pfVar11 = *(float **)(param_2 + 0x10);
  uVar100 = 0;
  fVar22 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar49);
  fVar32 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar18) & uVar49);
  fVar33 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar86) & uVar49);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar94) & uVar49);
  auVar118._0_4_ = fVar22 * fVar22;
  auVar118._4_4_ = fVar32 * fVar32;
  auVar118._8_4_ = fVar33 * fVar33;
  auVar118._12_4_ = fVar16 * fVar16;
  auVar63 = NEON_ext(auVar118,auVar118,8,1);
  fVar18 = auVar63._0_4_ + auVar63._4_4_;
  fVar16 = auVar118._0_4_ + auVar118._4_4_ + fVar18;
  fVar18 = auVar118._0_4_ + auVar118._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar87 = NEON_frsqrte(uVar9,4);
  fVar86 = (float)uVar87;
  fVar94 = (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar94 * fVar94,fVar86 * fVar86),uVar9,4);
  fVar86 = fVar86 * (float)uVar87;
  fVar94 = fVar94 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar94 * fVar94,fVar86 * fVar86),uVar9,4);
  fVar86 = fVar86 * (float)uVar87;
  fVar94 = fVar94 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar94 * fVar94,fVar86 * fVar86),uVar9,4);
  fVar86 = fVar86 * (float)uVar87;
  fVar94 = fVar94 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar94 * fVar94,fVar86 * fVar86),uVar9,4);
  uVar62 = CONCAT44(fVar18 * fVar94 * (float)((ulong)uVar87 >> 0x20),fVar16 * fVar86 * (float)uVar87
                   );
  uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar87 = NEON_frecpe(uVar62,4);
  uVar88 = NEON_frecps(uVar62,uVar87,4);
  fVar16 = (float)uVar87 * (float)uVar88;
  fVar18 = (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar18 = fVar18 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar18 = fVar18 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18 * (float)((ulong)uVar87 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar22 = fVar22 * fVar16;
  fVar32 = fVar32 * fVar16;
  fVar33 = fVar33 * fVar16;
  fVar94 = -fVar22;
  fVar57 = -fVar32;
  fVar60 = -fVar33;
  fVar16 = *(float *)(lVar1 + 0x50);
  fVar18 = *(float *)(lVar1 + 0x54);
  fVar86 = *(float *)(lVar1 + 0x58);
  fVar50 = *(float *)(param_2 + 0x40) * fVar60 +
           *(float *)(param_2 + 0x20) * fVar94 + *(float *)(param_2 + 0x30) * fVar57;
  fVar58 = *(float *)(param_2 + 0x44) * fVar60 +
           *(float *)(param_2 + 0x24) * fVar94 + *(float *)(param_2 + 0x34) * fVar57;
  fVar57 = *(float *)(param_2 + 0x48) * fVar60 +
           *(float *)(param_2 + 0x28) * fVar94 + *(float *)(param_2 + 0x38) * fVar57;
  lVar8 = *(long *)(param_3 + 8);
  auVar102._0_4_ = *(float *)(lVar1 + 0x30) * fVar50;
  auVar102._4_4_ = *(float *)(lVar1 + 0x34) * fVar58;
  auVar102._8_4_ = *(float *)(lVar1 + 0x38) * fVar57;
  auVar102._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar63 = NEON_ext(auVar102,auVar102,8,1);
  fVar94 = auVar102._0_4_ + auVar102._4_4_ + auVar63._0_4_ + auVar63._4_4_;
  auVar110._0_4_ = *(float *)(lVar1 + 0x40) * fVar50;
  auVar110._4_4_ = *(float *)(lVar1 + 0x44) * fVar58;
  auVar110._8_4_ = *(float *)(lVar1 + 0x48) * fVar57;
  auVar110._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar63 = NEON_ext(auVar110,auVar110,8,1);
  auVar51._0_4_ = fVar16 * fVar50;
  auVar51._4_4_ = fVar18 * fVar58;
  auVar51._8_4_ = fVar86 * fVar57;
  auVar51._12_4_ = *(float *)(lVar1 + 0x5c) * 0.0;
  auVar118 = NEON_ext(auVar51,auVar51,8,1);
  fVar50 = auVar110._0_4_ + auVar110._4_4_ + auVar63._0_4_ + auVar63._4_4_;
  fVar57 = auVar51._0_4_ + auVar51._4_4_ + auVar118._0_4_ + auVar118._4_4_;
  uVar49 = -(uint)(fVar57 < fVar50);
  uVar101 = -(uint)(fVar50 < fVar94 && fVar57 < fVar94);
  uVar35 = (uint)fVar16 ^ ((uint)fVar16 ^ (uint)*(float *)(lVar1 + 0x40)) & uVar49;
  uVar59 = (uint)fVar18 ^ ((uint)fVar18 ^ (uint)*(float *)(lVar1 + 0x44)) & uVar49;
  uVar49 = (uint)fVar86 ^ ((uint)fVar86 ^ (uint)*(float *)(lVar1 + 0x48)) & uVar49;
  fVar50 = (float)(uVar35 ^ (uVar35 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar101);
  fVar57 = (float)(uVar59 ^ (uVar59 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar101);
  fVar58 = (float)(uVar49 ^ (uVar49 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar101);
  fVar16 = *(float *)(lVar8 + 0x40);
  fVar18 = *(float *)(lVar8 + 0x44);
  fVar86 = *(float *)(lVar8 + 0x48);
  fVar94 = *(float *)(lVar8 + 0x4c);
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_120[2] = 0.0;
  local_120[3] = 0.0;
  local_120[0] = 0.0;
  local_120[1] = 0.0;
  local_120[6] = 0.0;
  local_120[7] = 0.0;
  local_120[4] = 0.0;
  local_120[5] = 0.0;
  local_140[0] = pfVar11[0xc] + pfVar11[8] * fVar58 + *pfVar11 * fVar50 + pfVar11[4] * fVar57;
  local_140[1] = pfVar11[0xd] + pfVar11[9] * fVar58 + pfVar11[1] * fVar50 + pfVar11[5] * fVar57;
  local_140[2] = pfVar11[0xe] + pfVar11[10] * fVar58 + pfVar11[2] * fVar50 + pfVar11[6] * fVar57;
  auVar95._0_4_ = fVar22 * *(float *)(lVar8 + 0x30);
  auVar95._4_4_ = fVar32 * *(float *)(lVar8 + 0x34);
  auVar95._8_4_ = fVar33 * *(float *)(lVar8 + 0x38);
  auVar95._12_4_ = *(float *)(lVar8 + 0x3c) * 0.0;
  auVar63 = NEON_ext(auVar95,auVar95,8,1);
  auVar112._0_4_ = fVar22 * fVar16;
  auVar112._4_4_ = fVar32 * fVar18;
  auVar112._8_4_ = fVar33 * fVar86;
  auVar112._12_4_ = fVar94 * 0.0;
  auVar118 = NEON_ext(auVar112,auVar112,8,1);
  local_140[3] = pfVar11[0xf] + 0.0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uVar49 = -(uint)(auVar112._0_4_ + auVar112._4_4_ + auVar118._0_4_ + auVar118._4_4_ <
                  auVar95._0_4_ + auVar95._4_4_ + auVar63._0_4_ + auVar63._4_4_);
  fVar16 = (float)((uint)fVar16 ^ ((uint)fVar16 ^ (uint)*(float *)(lVar8 + 0x30)) & uVar49);
  fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)*(float *)(lVar8 + 0x34)) & uVar49);
  fVar86 = (float)((uint)fVar86 ^ ((uint)fVar86 ^ (uint)*(float *)(lVar8 + 0x38)) & uVar49);
  fVar94 = (float)((uint)fVar94 ^ ((uint)fVar94 ^ (uint)*(float *)(lVar8 + 0x3c)) & uVar49);
  auVar89._8_8_ = 0xffffffffffffffff;
  auVar89._0_8_ = 0xffffffffffffffff;
  fVar50 = local_140[0] - fVar16;
  fVar57 = local_140[1] - fVar18;
  auVar63._0_8_ = CONCAT44(fVar57,fVar50);
  auVar63._8_4_ = local_140[2] - fVar86;
  auVar63._12_4_ = (pfVar11[0xf] + 0.0) - fVar94;
  fVar50 = -fVar50;
  fVar57 = -fVar57;
  auVar52._0_8_ = CONCAT44(fVar57,fVar50);
  auVar52._8_4_ = -auVar63._8_4_;
  uStack_178 = CONCAT44(fVar94,fVar86);
  local_180 = CONCAT44(fVar18,fVar16);
  uStack_168 = 0;
  local_170 = 0;
  uVar88 = NEON_fmin(0x7f7fffff7f7fffff,0,4);
  uVar87 = auVar63._8_8_;
  local_100[1] = uVar87;
  local_100[0] = auVar63._0_8_;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  fVar18 = (float)uVar88 * 0.1;
  auVar52._12_4_ = 0;
  auVar64._0_4_ = fVar50 * fVar50;
  auVar64._4_4_ = fVar57 * fVar57;
  auVar64._8_4_ = auVar52._8_4_ * auVar52._8_4_;
  auVar64._12_4_ = 0;
  auVar118 = NEON_ext(auVar64,auVar64,8,1);
  fVar16 = auVar64._0_4_ + auVar64._4_4_ + auVar118._0_4_ + auVar118._4_4_;
  bVar7 = fVar18 * fVar18 < fVar16;
  auVar103._0_4_ = -(uint)bVar7;
  auVar103._4_4_ = -(uint)bVar7;
  auVar103._8_4_ = -(uint)bVar7;
  auVar103._12_4_ = -(uint)bVar7;
  NEON_ext(auVar103,auVar103,8,1);
  uStack_1b8 = (ulong)(uint)auVar52._8_4_;
  if (CONCAT13((char)auVar103._12_4_,
               CONCAT12((char)auVar103._8_4_,CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_)))
      == -1) {
    fVar86 = *(float *)*param_7 * 0.0 + *param_6;
    fVar94 = *(float *)(*param_7 + 4) * 0.0 + param_6[1];
    fVar50 = *(float *)(*param_7 + 8) * 0.0 + param_6[2];
    fVar57 = *(float *)(*param_7 + 0xc) * 0.0 + param_6[3];
    auVar2._4_4_ = fVar94;
    auVar2._0_4_ = fVar86;
    auVar2._8_4_ = fVar50;
    auVar2._12_4_ = fVar57;
    auVar3._4_4_ = fVar94;
    auVar3._0_4_ = fVar86;
    auVar3._8_4_ = fVar50;
    auVar3._12_4_ = fVar57;
    auVar118 = NEON_ext(auVar2,auVar3,8,1);
    fVar50 = auVar118._0_4_;
    fVar57 = param_1 + fVar18;
    uVar100 = 0;
    local_1c0 = auVar52._0_8_;
    do {
      uVar49 = local_b4;
      fVar70 = auVar52._0_4_;
      auVar38._0_4_ = fVar70 * fVar70;
      fVar76 = auVar52._4_4_;
      auVar38._4_4_ = fVar76 * fVar76;
      fVar78 = auVar52._8_4_;
      auVar38._8_4_ = fVar78 * fVar78;
      auVar38._12_4_ = auVar52._12_4_ * auVar52._12_4_;
      auVar118 = NEON_ext(auVar38,auVar38,8,1);
      lVar1 = *(long *)(param_2 + 8);
      pfVar11 = *(float **)(param_2 + 0x10);
      fVar22 = *(float *)(lVar1 + 0x50);
      fVar32 = *(float *)(lVar1 + 0x54);
      fVar33 = *(float *)(lVar1 + 0x58);
      fVar60 = auVar118._0_4_ + auVar118._4_4_;
      fVar58 = auVar38._0_4_ + auVar38._4_4_ + fVar60;
      fVar60 = auVar38._0_4_ + auVar38._4_4_ + fVar60;
      uVar9 = CONCAT44(fVar60,fVar58);
      uVar87 = NEON_frsqrte(uVar9,4);
      fVar79 = (float)uVar87;
      fVar85 = (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar87;
      fVar85 = fVar85 * (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar87;
      fVar85 = fVar85 * (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar87;
      fVar85 = fVar85 * (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar79 * fVar79),uVar9,4);
      uVar62 = CONCAT44(fVar60 * fVar85 * (float)((ulong)uVar87 >> 0x20),
                        fVar58 * fVar79 * (float)uVar87);
      uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar58 == 0.0),-(uint)(fVar58 == 0.0));
      uVar87 = NEON_frecpe(uVar62,4);
      uVar80 = NEON_frecps(uVar62,uVar87,4);
      fVar58 = (float)uVar87 * (float)uVar80;
      fVar60 = (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
      uVar87 = NEON_frecps(uVar62,CONCAT44(fVar60,fVar58),4);
      fVar58 = fVar58 * (float)uVar87;
      fVar60 = fVar60 * (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frecps(uVar62,CONCAT44(fVar60,fVar58),4);
      fVar58 = fVar58 * (float)uVar87;
      fVar60 = fVar60 * (float)((ulong)uVar87 >> 0x20);
      uVar87 = NEON_frecps(uVar62,CONCAT44(fVar60,fVar58),4);
      fVar58 = fVar58 * (float)uVar87;
      uVar87 = NEON_frecps(uVar62,CONCAT44(fVar60 * (float)((ulong)uVar87 >> 0x20),fVar58),4);
      fVar58 = fVar58 * (float)uVar87;
      fVar70 = fVar70 * fVar58;
      fVar76 = fVar76 * fVar58;
      fVar78 = fVar78 * fVar58;
      uVar87 = auVar63._8_8_;
      uVar80 = auVar63._0_8_;
      fVar60 = *(float *)(param_2 + 0x40) * fVar78 +
               *(float *)(param_2 + 0x20) * fVar70 + *(float *)(param_2 + 0x30) * fVar76;
      fVar79 = *(float *)(param_2 + 0x44) * fVar78 +
               *(float *)(param_2 + 0x24) * fVar70 + *(float *)(param_2 + 0x34) * fVar76;
      fVar85 = *(float *)(param_2 + 0x48) * fVar78 +
               *(float *)(param_2 + 0x28) * fVar70 + *(float *)(param_2 + 0x38) * fVar76;
      auVar111._0_4_ = *(float *)(lVar1 + 0x30) * fVar60;
      auVar111._4_4_ = *(float *)(lVar1 + 0x34) * fVar79;
      auVar111._8_4_ = *(float *)(lVar1 + 0x38) * fVar85;
      auVar111._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
      auVar63 = NEON_ext(auVar111,auVar111,8,1);
      fVar58 = auVar111._0_4_ + auVar111._4_4_ + auVar63._0_4_ + auVar63._4_4_;
      auVar119._0_4_ = *(float *)(lVar1 + 0x40) * fVar60;
      auVar119._4_4_ = *(float *)(lVar1 + 0x44) * fVar79;
      auVar119._8_4_ = *(float *)(lVar1 + 0x48) * fVar85;
      auVar119._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
      auVar63 = NEON_ext(auVar119,auVar119,8,1);
      auVar39._0_4_ = fVar22 * fVar60;
      auVar39._4_4_ = fVar32 * fVar79;
      auVar39._8_4_ = fVar33 * fVar85;
      auVar39._12_4_ = *(float *)(lVar1 + 0x5c) * 0.0;
      auVar118 = NEON_ext(auVar39,auVar39,8,1);
      fVar60 = auVar119._0_4_ + auVar119._4_4_ + auVar63._0_4_ + auVar63._4_4_;
      fVar79 = auVar39._0_4_ + auVar39._4_4_ + auVar118._0_4_ + auVar118._4_4_;
      uVar35 = -(uint)(fVar79 < fVar60);
      uVar108 = -(uint)(fVar60 < fVar58 && fVar79 < fVar58);
      uVar59 = (uint)fVar22 ^ ((uint)fVar22 ^ (uint)*(float *)(lVar1 + 0x40)) & uVar35;
      uVar101 = (uint)fVar32 ^ ((uint)fVar32 ^ (uint)*(float *)(lVar1 + 0x44)) & uVar35;
      uVar35 = (uint)fVar33 ^ ((uint)fVar33 ^ (uint)*(float *)(lVar1 + 0x48)) & uVar35;
      fVar22 = (float)(uVar59 ^ (uVar59 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar108);
      fVar58 = (float)(uVar101 ^ (uVar101 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar108);
      fVar60 = (float)(uVar35 ^ (uVar35 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar108);
      auVar63 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + 0x30);
      auVar118 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + 0x40);
      fVar32 = pfVar11[0xc] + pfVar11[8] * fVar60 + *pfVar11 * fVar22 + pfVar11[4] * fVar58;
      fVar33 = pfVar11[0xd] + pfVar11[9] * fVar60 + pfVar11[1] * fVar22 + pfVar11[5] * fVar58;
      auVar40._0_8_ = CONCAT44(fVar33,fVar32);
      auVar40._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar60 + pfVar11[2] * fVar22 + pfVar11[6] * fVar58;
      auVar40._12_4_ = pfVar11[0xf] + 0.0;
      auVar104._0_4_ = -fVar70 * auVar63._0_4_;
      auVar104._4_4_ = -fVar76 * auVar63._4_4_;
      auVar104._8_4_ = -fVar78 * auVar63._8_4_;
      auVar104._12_4_ = auVar63._12_4_ * 0.0;
      auVar112 = NEON_ext(auVar104,auVar104,8,1);
      auVar81._0_4_ = -fVar70 * auVar118._0_4_;
      auVar81._4_4_ = -fVar76 * auVar118._4_4_;
      auVar81._8_4_ = -fVar78 * auVar118._8_4_;
      auVar81._12_4_ = auVar118._12_4_ * 0.0;
      auVar113 = NEON_ext(auVar81,auVar81,8,1);
      auVar82._0_4_ =
           -(uint)(auVar81._0_4_ + auVar81._4_4_ + auVar113._0_4_ + auVar113._4_4_ <
                  auVar104._0_4_ + auVar104._4_4_ + auVar112._0_4_ + auVar112._4_4_);
      auVar82._4_4_ = auVar82._0_4_;
      auVar82._8_4_ = auVar82._0_4_;
      auVar82._12_4_ = auVar82._0_4_;
      auVar118 = auVar118 ^ (auVar118 ^ auVar63) & auVar82;
      auVar90._0_4_ = fVar86 + auVar118._0_4_;
      auVar90._4_4_ = fVar94 + auVar118._4_4_;
      auVar90._8_4_ = fVar50 + auVar118._8_4_;
      auVar90._12_4_ = auVar118._12_4_ + 0.0;
      auVar63._0_4_ = fVar32 - auVar90._0_4_;
      auVar63._4_4_ = fVar33 - auVar90._4_4_;
      auVar63._8_4_ = auVar40._8_4_ - auVar90._8_4_;
      auVar63._12_4_ = auVar40._12_4_ - auVar90._12_4_;
      auVar96._0_4_ = fVar70 * -auVar63._0_4_;
      auVar96._4_4_ = fVar76 * -auVar63._4_4_;
      auVar96._8_4_ = fVar78 * -auVar63._8_4_;
      auVar96._12_4_ = 0;
      auVar112 = NEON_ext(auVar96,auVar96,8,1);
      fVar22 = auVar112._0_4_ + auVar112._4_4_;
      fVar58 = (auVar96._0_4_ + auVar96._4_4_ + fVar22) - fVar57;
      if (fVar58 <= 0.0) {
        fVar22 = fVar16;
      }
      else {
        auVar112 = *param_7;
        auVar72._0_4_ = fVar70 * auVar112._0_4_;
        auVar72._4_4_ = fVar76 * auVar112._4_4_;
        auVar72._8_4_ = fVar78 * auVar112._8_4_;
        auVar72._12_4_ = auVar112._12_4_ * 0.0;
        auVar113 = NEON_ext(auVar72,auVar72,8,1);
        fVar79 = auVar113._0_4_ + auVar113._4_4_;
        fVar60 = auVar72._0_4_ + auVar72._4_4_ + fVar79;
        uVar71 = CONCAT44(auVar72._0_4_ + auVar72._4_4_ + fVar79,fVar60);
        if (0.0 <= fVar60) {
          return 0;
        }
        uVar109 = NEON_frecpe(uVar71,4);
        uVar117 = NEON_frecps(uVar71,uVar109,4);
        fVar79 = (float)uVar109 * (float)uVar117;
        fVar85 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
        uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
        fVar79 = fVar79 * (float)uVar109;
        fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
        uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
        fVar79 = fVar79 * (float)uVar109;
        fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
        uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
        fVar79 = fVar79 * (float)uVar109;
        fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
        uVar71 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
        fVar60 = (float)uVar100;
        fVar58 = fVar60 - fVar58 * fVar79 * (float)uVar71;
        uVar100 = CONCAT44((float)((ulong)uVar100 >> 0x20) -
                           ((auVar96._0_4_ + auVar96._4_4_ + fVar22) -
                           (param_1 + (float)((ulong)uVar88 >> 0x20) * 0.1)) *
                           fVar85 * (float)((ulong)uVar71 >> 0x20),fVar58);
        if (fVar60 < fVar58) {
          uVar71 = NEON_fmov(0x3f800000,4);
          if ((float)uVar71 < fVar58) {
            return 0;
          }
          auVar65._0_4_ = auVar112._0_4_ * fVar58 + *param_6;
          auVar65._4_4_ = auVar112._4_4_ * fVar58 + param_6[1];
          auVar65._8_4_ = auVar112._8_4_ * fVar58 + param_6[2];
          auVar65._12_4_ = auVar112._12_4_ * fVar58 + param_6[3];
          auVar63 = NEON_ext(auVar65,auVar65,8,1);
          fVar22 = auVar63._0_4_;
          fVar16 = 3.4028235e+38;
          auVar90._0_4_ = auVar65._0_4_ + auVar118._0_4_;
          auVar90._4_4_ = auVar65._4_4_ + auVar118._4_4_;
          auVar90._8_4_ = fVar22 + auVar118._8_4_;
          auVar90._12_4_ = auVar118._12_4_ + 0.0;
          fVar86 = auVar65._0_4_ - fVar86;
          fVar94 = auVar65._4_4_ - fVar94;
          fVar50 = fVar22 - fVar50;
          local_170._0_4_ = (float)local_170 + fVar86;
          local_170._4_4_ = local_170._4_4_ + fVar94;
          uStack_168._0_4_ = (float)uStack_168 + fVar50;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_180._0_4_ = (float)local_180 + fVar86;
          local_180._4_4_ = local_180._4_4_ + fVar94;
          uStack_178._0_4_ = (float)uStack_178 + fVar50;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar86;
          local_160._4_4_ = local_160._4_4_ + fVar94;
          uStack_158._0_4_ = (float)uStack_158 + fVar50;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          auVar83._0_8_ = CONCAT44(local_140[1] - local_180._4_4_,local_140[0] - (float)local_180);
          auVar83._8_4_ = local_140[2] - (float)uStack_178;
          auVar83._12_4_ = local_140[3] - uStack_178._4_4_;
          auVar63._0_4_ = fVar32 - auVar90._0_4_;
          auVar63._4_4_ = fVar33 - auVar90._4_4_;
          auVar63._8_4_ = auVar40._8_4_ - auVar90._8_4_;
          auVar63._12_4_ = auVar40._12_4_ - auVar90._12_4_;
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
          fVar86 = auVar65._0_4_;
          fVar94 = auVar65._4_4_;
          fVar50 = fVar22;
          local_1c0 = auVar52._0_8_;
          uStack_1b8 = auVar52._8_8_;
        }
        fVar22 = fVar16;
      }
      uVar9 = (ulong)local_b4;
      bVar7 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_100[uVar9 * 2 + -7] = auVar40._8_8_;
      local_100[uVar9 * 2 + -8] = auVar40._0_8_;
      local_100[uVar9 * 2 + -0xf] = auVar90._8_8_;
      local_100[uVar9 * 2 + -0x10] = auVar90._0_8_;
      local_100[uVar9 * 2 + 1] = auVar63._8_8_;
      local_100[uVar9 * 2] = auVar63._0_8_;
      if (bVar7) {
        auVar63 = FUN_00237120(local_100,local_140,&local_180,&local_b4);
      }
      else {
        fVar16 = (float)local_100[0];
        fVar32 = (float)((ulong)local_100[0] >> 0x20);
        fVar33 = (float)local_100[1];
        fVar58 = (float)((ulong)local_100[1] >> 0x20);
        if (uVar49 == 2) {
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
          auVar73._4_4_ = fStack_ec - fVar32;
          auVar73._8_4_ = fStack_e8 - fVar33;
          auVar73._12_4_ = fStack_e4 - fVar58;
          auVar68._0_4_ = local_e0 - fVar16;
          auVar68._4_4_ = fStack_dc - fVar32;
          auVar68._8_4_ = fStack_d8 - fVar33;
          auVar68._12_4_ = fStack_d4 - fVar58;
          auVar118 = NEON_ext(auVar73,auVar73,8,1);
          auVar112 = NEON_ext(auVar68,auVar68,8,1);
          fVar76 = auVar73._0_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar68._0_4_;
          uVar71 = NEON_ext(CONCAT44(auVar73._4_4_ * auVar68._8_4_ - auVar73._8_4_ * auVar68._4_4_,
                                     fVar76),
                            CONCAT44(auVar118._4_4_ * auVar68._4_4_ - auVar73._4_4_ * auVar112._4_4_
                                     ,auVar118._0_4_ * auVar68._0_4_ -
                                      auVar73._0_4_ * auVar112._0_4_),4,1);
          fVar85 = (float)uVar71;
          auVar91._0_4_ = fVar85 * fVar85;
          fVar70 = (float)((ulong)uVar71 >> 0x20);
          auVar91._4_4_ = fVar70 * fVar70;
          auVar91._8_4_ = fVar76 * fVar76;
          auVar91._12_4_ = 0;
          auVar118 = NEON_ext(auVar91,auVar91,8,1);
          fVar79 = auVar118._0_4_ + auVar118._4_4_;
          fVar60 = auVar91._0_4_ + auVar91._4_4_ + fVar79;
          uVar71 = CONCAT44(auVar91._0_4_ + auVar91._4_4_ + fVar79,fVar60);
          local_b4 = 3;
          if (1.1920929e-07 < fVar60) {
            if (fVar60 != 0.0) {
              auVar118 = NEON_ext(auVar5,auVar5,8,1);
              auVar112 = NEON_ext(auVar6,auVar6,8,1);
              fVar78 = local_f0 * fStack_dc - fStack_ec * local_e0;
              auVar113 = NEON_ext(auVar63,auVar63,8,1);
              uVar117 = NEON_ext(CONCAT44(fStack_ec * fStack_d8 - fStack_e8 * fStack_dc,fVar78),
                                 CONCAT44(auVar118._4_4_ * fStack_dc - fStack_ec * auVar112._4_4_,
                                          auVar118._0_4_ * local_e0 - local_f0 * auVar112._0_4_),4,1
                                );
              fVar60 = fVar32 * local_e0 - fVar16 * fStack_dc;
              uVar124 = NEON_ext(CONCAT44(fVar33 * fStack_dc - fVar32 * fStack_d8,fVar60),
                                 CONCAT44(fVar32 * auVar112._4_4_ - auVar113._4_4_ * fStack_dc,
                                          fVar16 * auVar112._0_4_ - auVar113._0_4_ * local_e0),4,1);
              fVar79 = fVar16 * fStack_ec - fVar32 * local_f0;
              uVar109 = NEON_ext(CONCAT44(fVar32 * fStack_e8 - fVar33 * fStack_ec,fVar79),
                                 CONCAT44(auVar113._4_4_ * fStack_ec - fVar32 * auVar118._4_4_,
                                          auVar113._0_4_ * local_f0 - fVar16 * auVar118._0_4_),4,1);
              auVar105._0_4_ = (float)uVar117 * fVar85;
              auVar105._4_4_ = (float)((ulong)uVar117 >> 0x20) * fVar70;
              auVar105._8_4_ = fVar78 * fVar76;
              auVar105._12_4_ = 0;
              auVar118 = NEON_ext(auVar105,auVar105,8,1);
              auVar114._0_4_ = (float)uVar124 * fVar85;
              auVar114._4_4_ = (float)((ulong)uVar124 >> 0x20) * fVar70;
              auVar114._8_4_ = fVar60 * fVar76;
              auVar114._12_4_ = 0;
              auVar112 = NEON_ext(auVar114,auVar114,8,1);
              fVar60 = auVar105._0_4_ + auVar105._4_4_ + auVar118._0_4_ + auVar118._4_4_;
              auVar120._0_4_ = (float)uVar109 * fVar85;
              auVar120._4_4_ = (float)((ulong)uVar109 >> 0x20) * fVar70;
              auVar120._8_4_ = fVar79 * fVar76;
              auVar120._12_4_ = 0;
              fVar79 = auVar114._0_4_ + auVar114._4_4_ + auVar112._0_4_ + auVar112._4_4_;
              auVar118 = NEON_ext(auVar120,auVar120,8,1);
              fVar78 = auVar120._0_4_ + auVar120._4_4_ + auVar118._0_4_ + auVar118._4_4_;
              bVar7 = (0.0 <= fVar60 && 0.0 <= fVar79) && 0.0 <= fVar78;
              auVar121._0_4_ = -(uint)bVar7;
              auVar121._4_4_ = -(uint)bVar7;
              auVar121._8_4_ = -(uint)bVar7;
              auVar121._12_4_ = -(uint)bVar7;
              NEON_ext(auVar121,auVar121,8,1);
              if (CONCAT13((char)auVar121._12_4_,
                           CONCAT12((char)auVar121._8_4_,
                                    CONCAT11((char)auVar121._4_4_,(char)auVar121._0_4_))) == -1) {
                auVar26._0_4_ = fVar16 * fVar85;
                auVar26._4_4_ = fVar32 * fVar70;
                auVar26._8_4_ = fVar33 * fVar76;
                auVar26._12_4_ = fVar58 * 0.0;
                auVar63 = NEON_ext(auVar26,auVar26,8,1);
                uVar109 = NEON_frecpe(uVar71,4);
                uVar117 = NEON_frecps(uVar71,uVar109,4);
                fVar16 = (float)uVar109 * (float)uVar117;
                fVar32 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                uVar109 = NEON_frecps(uVar71,CONCAT44(fVar32,fVar16),4);
                fVar16 = fVar16 * (float)uVar109;
                fVar32 = fVar32 * (float)((ulong)uVar109 >> 0x20);
                uVar109 = NEON_frecps(uVar71,CONCAT44(fVar32,fVar16),4);
                fVar16 = fVar16 * (float)uVar109;
                fVar32 = fVar32 * (float)((ulong)uVar109 >> 0x20);
                uVar109 = NEON_frecps(uVar71,CONCAT44(fVar32,fVar16),4);
                fVar16 = fVar16 * (float)uVar109;
                uVar71 = NEON_frecps(uVar71,CONCAT44(fVar32 * (float)((ulong)uVar109 >> 0x20),fVar16
                                                    ),4);
                fVar16 = (auVar26._0_4_ + auVar26._4_4_ + auVar63._0_4_ + auVar63._4_4_) *
                         fVar16 * (float)uVar71;
                auVar63._0_4_ = fVar85 * fVar16;
                auVar63._4_4_ = fVar70 * fVar16;
                auVar63._8_4_ = fVar76 * fVar16;
                auVar63._12_4_ = 0.0;
              }
              else {
                auVar84._0_4_ = -fVar16 * auVar73._0_4_;
                auVar84._4_4_ = -fVar32 * auVar73._4_4_;
                auVar84._8_4_ = -fVar33 * auVar73._8_4_;
                auVar84._12_4_ = auVar73._12_4_ * 0.0;
                auVar118 = NEON_ext(auVar84,auVar84,8,1);
                fVar76 = auVar118._0_4_ + auVar118._4_4_;
                auVar92._0_4_ = -local_f0 * auVar73._0_4_;
                auVar92._4_4_ = -fStack_ec * auVar73._4_4_;
                auVar92._8_4_ = -fStack_e8 * auVar73._8_4_;
                auVar92._12_4_ = auVar73._12_4_ * 0.0;
                auVar118 = NEON_ext(auVar92,auVar92,8,1);
                fVar77 = auVar118._0_4_ + auVar118._4_4_;
                fVar85 = auVar84._0_4_ + auVar84._4_4_ + fVar76;
                fVar70 = auVar92._0_4_ + auVar92._4_4_ + fVar77;
                fVar77 = auVar92._0_4_ + auVar92._4_4_ + fVar77;
                bVar7 = (0.0 <= fVar85 && fVar78 <= 0.0) && fVar70 <= 0.0;
                auVar115._0_4_ = -(uint)bVar7;
                auVar115._4_4_ = -(uint)bVar7;
                auVar115._8_4_ = -(uint)bVar7;
                auVar115._12_4_ = -(uint)bVar7;
                NEON_ext(auVar115,auVar115,8,1);
                if (CONCAT13((char)auVar115._12_4_,
                             CONCAT12((char)auVar115._8_4_,
                                      CONCAT11((char)auVar115._4_4_,(char)auVar115._0_4_))) == -1) {
                  uVar71 = CONCAT44((auVar84._0_4_ + auVar84._4_4_ + fVar76) - fVar77,
                                    fVar85 - fVar70);
                  uVar109 = NEON_frecpe(uVar71,4);
                  uVar117 = NEON_frecps(uVar71,uVar109,4);
                  fVar60 = (float)uVar109 * (float)uVar117;
                  fVar79 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                  uVar109 = NEON_frecps(uVar71,CONCAT44(fVar79,fVar60),4);
                  fVar60 = fVar60 * (float)uVar109;
                  fVar79 = fVar79 * (float)((ulong)uVar109 >> 0x20);
                  uVar109 = NEON_frecps(uVar71,CONCAT44(fVar79,fVar60),4);
                  fVar60 = fVar60 * (float)uVar109;
                  fVar79 = fVar79 * (float)((ulong)uVar109 >> 0x20);
                  uVar109 = NEON_frecps(uVar71,CONCAT44(fVar79,fVar60),4);
                  fVar60 = fVar60 * (float)uVar109;
                  uVar71 = NEON_frecps(uVar71,CONCAT44(fVar79 * (float)((ulong)uVar109 >> 0x20),
                                                       fVar60),4);
                  fVar85 = fVar85 * (float)(-(uint)(1.1920929e-07 < ABS(fVar85 - fVar70)) &
                                           (uint)(fVar60 * (float)uVar71));
                  puVar10 = &local_180;
                  pfVar11 = local_140;
                  auVar27._0_8_ =
                       CONCAT44(fVar32 + auVar73._4_4_ * fVar85,fVar16 + auVar73._0_4_ * fVar85);
                  auVar27._8_4_ = fVar33 + auVar73._8_4_ * fVar85;
                  auVar27._12_4_ = fVar58 + auVar73._12_4_ * fVar85;
                  auVar63 = NEON_ext(auVar27,auVar27,8,1);
                  pfVar12 = (float *)local_100;
                  auVar63._8_4_ = (float)auVar63._0_4_;
                  auVar63._0_8_ = auVar27._0_8_;
                  auVar63._12_4_ = 0.0;
                  local_b4 = 2;
LAB_002e7548:
                  puVar13 = &local_170;
                  pfVar14 = (float *)&local_130;
                  pfVar15 = &local_f0;
                }
                else {
                  auVar116._0_4_ = -local_f0 * auVar68._0_4_;
                  auVar116._4_4_ = -fStack_ec * auVar68._4_4_;
                  auVar116._8_4_ = -fStack_e8 * auVar68._8_4_;
                  auVar116._12_4_ = auVar68._12_4_ * 0.0;
                  auVar118 = NEON_ext(auVar116,auVar116,8,1);
                  fVar19 = auVar118._0_4_ + auVar118._4_4_;
                  auVar74._0_4_ = auVar73._0_4_ * -local_e0;
                  auVar74._4_4_ = auVar73._4_4_ * -fStack_dc;
                  auVar74._8_4_ = auVar73._8_4_ * -fStack_d8;
                  auVar74._12_4_ = auVar73._12_4_ * 0.0;
                  auVar123._0_4_ = auVar68._0_4_ * -local_e0;
                  auVar123._4_4_ = auVar68._4_4_ * -fStack_dc;
                  auVar123._8_4_ = auVar68._8_4_ * -fStack_d8;
                  auVar123._12_4_ = auVar68._12_4_ * 0.0;
                  fVar76 = auVar116._0_4_ + auVar116._4_4_ + fVar19;
                  auVar118 = NEON_ext(auVar74,auVar74,8,1);
                  fVar20 = auVar118._0_4_ + auVar118._4_4_;
                  fVar78 = auVar74._0_4_ + auVar74._4_4_ + fVar20;
                  auVar118 = NEON_ext(auVar123,auVar123,8,1);
                  fVar21 = auVar118._0_4_ + auVar118._4_4_;
                  fVar17 = auVar123._0_4_ + auVar123._4_4_ + fVar21;
                  fVar21 = auVar123._0_4_ + auVar123._4_4_ + fVar21;
                  bVar7 = (fVar70 <= fVar76 && fVar60 <= 0.0) && fVar17 <= fVar78;
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
                    fVar16 = (fVar76 - fVar70) + (fVar78 - fVar17);
                    uVar71 = CONCAT44(((auVar116._0_4_ + auVar116._4_4_ + fVar19) - fVar77) +
                                      ((auVar74._0_4_ + auVar74._4_4_ + fVar20) - fVar21),fVar16);
                    uVar109 = NEON_frecpe(uVar71,4);
                    uVar117 = NEON_frecps(uVar71,uVar109,4);
                    fVar32 = (float)uVar109 * (float)uVar117;
                    fVar33 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar32),4);
                    fVar32 = fVar32 * (float)uVar109;
                    fVar33 = fVar33 * (float)((ulong)uVar109 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar32),4);
                    fVar32 = fVar32 * (float)uVar109;
                    fVar33 = fVar33 * (float)((ulong)uVar109 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar33,fVar32),4);
                    fVar32 = fVar32 * (float)uVar109;
                    uVar71 = NEON_frecps(uVar71,CONCAT44(fVar33 * (float)((ulong)uVar109 >> 0x20),
                                                         fVar32),4);
                    fVar16 = (fVar76 - fVar70) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar16)) &
                                    (uint)(fVar32 * (float)uVar71));
                    auVar28._0_8_ =
                         CONCAT44(fStack_ec + (fStack_dc - fStack_ec) * fVar16,
                                  local_f0 + (local_e0 - local_f0) * fVar16);
                    auVar28._8_4_ = fStack_e8 + (fStack_d8 - fStack_e8) * fVar16;
                    auVar28._12_4_ = fStack_e4 + (fStack_d4 - fStack_e4) * fVar16;
                    auVar63 = NEON_ext(auVar28,auVar28,8,1);
                    auVar63._8_4_ = (float)auVar63._0_4_;
                    auVar63._0_8_ = auVar28._0_8_;
                    auVar63._12_4_ = 0.0;
                    puVar10 = &local_170;
                    pfVar11 = (float *)&local_130;
                    pfVar12 = &local_f0;
                  }
                  else {
                    auVar107._0_4_ = -fVar16 * auVar68._0_4_;
                    auVar107._4_4_ = -fVar32 * auVar68._4_4_;
                    auVar107._8_4_ = -fVar33 * auVar68._8_4_;
                    auVar107._12_4_ = auVar68._12_4_ * 0.0;
                    auVar118 = NEON_ext(auVar107,auVar107,8,1);
                    fVar78 = auVar118._0_4_ + auVar118._4_4_;
                    fVar60 = auVar107._0_4_ + auVar107._4_4_ + fVar78;
                    bVar7 = fVar17 <= 0.0 && (fVar79 <= 0.0 && 0.0 <= fVar60);
                    auVar97._0_4_ = -(uint)bVar7;
                    auVar97._4_4_ = -(uint)bVar7;
                    auVar97._8_4_ = -(uint)bVar7;
                    auVar97._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar97,auVar97,8,1);
                    if (CONCAT13((char)auVar97._12_4_,
                                 CONCAT12((char)auVar97._8_4_,
                                          CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) != -1)
                    {
                      bVar7 = fVar85 <= 0.0 && fVar60 <= 0.0;
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
                        bVar7 = 0.0 <= fVar70 && fVar76 <= fVar70;
                        auVar24._0_4_ = -(uint)bVar7;
                        auVar24._4_4_ = -(uint)bVar7;
                        auVar24._8_4_ = -(uint)bVar7;
                        auVar24._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar24,auVar24,8,1);
                        iVar36 = CONCAT13((char)auVar24._12_4_,
                                          CONCAT12((char)auVar24._8_4_,
                                                   CONCAT11((char)auVar24._4_4_,(char)auVar24._0_4_)
                                                  ));
                        iVar61 = -(uint)(iVar36 == -1);
                        auVar25._4_4_ = iVar61;
                        auVar25._0_4_ = iVar61;
                        auVar25._8_4_ = iVar61;
                        auVar25._12_4_ = iVar61;
                        lVar1 = 0x10;
                        if (iVar36 != -1) {
                          lVar1 = 0x20;
                        }
                        auVar63 = auVar6 ^ (auVar6 ^ auVar5) & auVar25;
                        pfVar12 = (float *)((long)local_100 + lVar1);
                        pfVar11 = (float *)((long)local_100 + lVar1 + -0x40);
                        puVar10 = (undefined8 *)((long)local_100 + lVar1 + -0x80);
                      }
                      local_b4 = 1;
                      goto LAB_002e7548;
                    }
                    uVar71 = CONCAT44((auVar107._0_4_ + auVar107._4_4_ + fVar78) - fVar21,
                                      fVar60 - fVar17);
                    uVar109 = NEON_frecpe(uVar71,4);
                    uVar117 = NEON_frecps(uVar71,uVar109,4);
                    fVar79 = (float)uVar109 * (float)uVar117;
                    fVar85 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
                    fVar79 = fVar79 * (float)uVar109;
                    fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
                    fVar79 = fVar79 * (float)uVar109;
                    fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
                    uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
                    fVar79 = fVar79 * (float)uVar109;
                    uVar71 = NEON_frecps(uVar71,CONCAT44(fVar85 * (float)((ulong)uVar109 >> 0x20),
                                                         fVar79),4);
                    fVar60 = fVar60 * (float)(-(uint)(1.1920929e-07 < ABS(fVar60 - fVar17)) &
                                             (uint)(fVar79 * (float)uVar71));
                    auVar29._0_8_ =
                         CONCAT44(fVar32 + auVar68._4_4_ * fVar60,fVar16 + auVar68._0_4_ * fVar60);
                    auVar29._8_4_ = fVar33 + auVar68._8_4_ * fVar60;
                    auVar29._12_4_ = fVar58 + auVar68._12_4_ * fVar60;
                    auVar63 = NEON_ext(auVar29,auVar29,8,1);
                    auVar63._8_4_ = (float)auVar63._0_4_;
                    auVar63._0_8_ = auVar29._0_8_;
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
            auVar41._0_4_ = auVar73._0_4_ * auVar73._0_4_;
            auVar41._4_4_ = auVar73._4_4_ * auVar73._4_4_;
            auVar41._8_4_ = auVar73._8_4_ * auVar73._8_4_;
            auVar41._12_4_ = auVar73._12_4_ * auVar73._12_4_;
            auVar63 = NEON_ext(auVar41,auVar41,8,1);
            fVar79 = auVar63._0_4_ + auVar63._4_4_;
            fVar60 = auVar41._0_4_ + auVar41._4_4_ + fVar79;
            uVar71 = CONCAT44(auVar41._0_4_ + auVar41._4_4_ + fVar79,fVar60);
            bVar7 = fVar60 <= 1.1920929e-07;
            auVar54._0_4_ = -(uint)bVar7;
            auVar54._4_4_ = -(uint)bVar7;
            auVar54._8_4_ = -(uint)bVar7;
            auVar54._12_4_ = -(uint)bVar7;
            NEON_ext(auVar54,auVar54,8,1);
            local_b4 = 2;
            if (CONCAT13((char)auVar54._12_4_,
                         CONCAT12((char)auVar54._8_4_,
                                  CONCAT11((char)auVar54._4_4_,(char)auVar54._0_4_))) != -1) {
              auVar55._0_4_ = -fVar16 * auVar73._0_4_;
              auVar55._4_4_ = -fVar32 * auVar73._4_4_;
              auVar55._8_4_ = -fVar33 * auVar73._8_4_;
              auVar55._12_4_ = auVar73._12_4_ * 0.0;
              auVar63 = NEON_ext(auVar55,auVar55,8,1);
              fVar60 = auVar63._0_4_ + auVar63._4_4_;
              uVar109 = NEON_frecpe(uVar71,4);
              uVar117 = NEON_frecps(uVar71,uVar109,4);
              fVar79 = (float)uVar109 * (float)uVar117;
              fVar85 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
              uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
              fVar79 = fVar79 * (float)uVar109;
              fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
              uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
              fVar79 = fVar79 * (float)uVar109;
              fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
              uVar109 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
              fVar79 = fVar79 * (float)uVar109;
              fVar85 = fVar85 * (float)((ulong)uVar109 >> 0x20);
              uVar71 = NEON_frecps(uVar71,CONCAT44(fVar85,fVar79),4);
              uVar109 = NEON_fmov(0x3f800000,4);
              uVar71 = NEON_fmin(CONCAT44((auVar55._0_4_ + auVar55._4_4_ + fVar60) *
                                          fVar85 * (float)((ulong)uVar71 >> 0x20),
                                          (auVar55._0_4_ + auVar55._4_4_ + fVar60) *
                                          fVar79 * (float)uVar71),uVar109,4);
              uVar71 = NEON_fmax(uVar71,0,4);
              fVar60 = (float)uVar71;
              fVar79 = auVar73._0_4_ * fVar60;
              fVar85 = auVar73._4_4_ * fVar60;
              fVar70 = auVar73._8_4_ * fVar60;
              fVar60 = auVar73._12_4_ * fVar60;
              goto LAB_002e70c4;
            }
LAB_002e70d8:
            auVar63._8_8_ = local_100[1];
            auVar63._0_8_ = local_100[0];
            local_b4 = 1;
          }
        }
        else if (uVar49 == 1) {
          fVar79 = local_f0 - fVar16;
          fVar85 = fStack_ec - fVar32;
          fVar70 = fStack_e8 - fVar33;
          fVar60 = fStack_e4 - fVar58;
          auVar53._0_4_ = fVar79 * fVar79;
          auVar53._4_4_ = fVar85 * fVar85;
          auVar53._8_4_ = fVar70 * fVar70;
          auVar53._12_4_ = fVar60 * fVar60;
          auVar63 = NEON_ext(auVar53,auVar53,8,1);
          fVar78 = auVar63._0_4_ + auVar63._4_4_;
          fVar76 = auVar53._0_4_ + auVar53._4_4_ + fVar78;
          uVar71 = CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar78,fVar76);
          bVar7 = fVar76 <= 1.1920929e-07;
          auVar66._0_4_ = -(uint)bVar7;
          auVar66._4_4_ = -(uint)bVar7;
          auVar66._8_4_ = -(uint)bVar7;
          auVar66._12_4_ = -(uint)bVar7;
          NEON_ext(auVar66,auVar66,8,1);
          if (CONCAT13((char)auVar66._12_4_,
                       CONCAT12((char)auVar66._8_4_,
                                CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))) == -1)
          goto LAB_002e70d8;
          auVar67._0_4_ = -fVar16 * fVar79;
          auVar67._4_4_ = -fVar32 * fVar85;
          auVar67._8_4_ = -fVar33 * fVar70;
          auVar67._12_4_ = fVar60 * 0.0;
          auVar63 = NEON_ext(auVar67,auVar67,8,1);
          fVar76 = auVar63._0_4_ + auVar63._4_4_;
          uVar109 = NEON_frecpe(uVar71,4);
          uVar117 = NEON_frecps(uVar71,uVar109,4);
          fVar78 = (float)uVar109 * (float)uVar117;
          fVar77 = (float)((ulong)uVar109 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
          uVar109 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar78),4);
          fVar78 = fVar78 * (float)uVar109;
          fVar77 = fVar77 * (float)((ulong)uVar109 >> 0x20);
          uVar109 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar78),4);
          fVar78 = fVar78 * (float)uVar109;
          fVar77 = fVar77 * (float)((ulong)uVar109 >> 0x20);
          uVar109 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar78),4);
          fVar78 = fVar78 * (float)uVar109;
          fVar77 = fVar77 * (float)((ulong)uVar109 >> 0x20);
          uVar71 = NEON_frecps(uVar71,CONCAT44(fVar77,fVar78),4);
          uVar109 = NEON_fmov(0x3f800000,4);
          uVar71 = NEON_fmin(CONCAT44((auVar67._0_4_ + auVar67._4_4_ + fVar76) *
                                      fVar77 * (float)((ulong)uVar71 >> 0x20),
                                      (auVar67._0_4_ + auVar67._4_4_ + fVar76) *
                                      fVar78 * (float)uVar71),uVar109,4);
          uVar71 = NEON_fmax(uVar71,0,4);
          fVar76 = (float)uVar71;
          fVar79 = fVar79 * fVar76;
          fVar85 = fVar85 * fVar76;
          fVar70 = fVar70 * fVar76;
          fVar60 = fVar60 * fVar76;
LAB_002e70c4:
          auVar23._0_8_ = CONCAT44(fVar32 + fVar85,fVar16 + fVar79);
          auVar23._8_4_ = fVar33 + fVar70;
          auVar23._12_4_ = fVar58 + fVar60;
          auVar63 = NEON_ext(auVar23,auVar23,8,1);
          auVar63._8_4_ = (float)auVar63._0_4_;
          auVar63._0_8_ = auVar23._0_8_;
          auVar63._12_4_ = 0.0;
        }
      }
      fVar32 = auVar63._0_4_;
      auVar42._0_4_ = fVar32 * fVar32;
      fVar33 = auVar63._4_4_;
      auVar42._4_4_ = fVar33 * fVar33;
      fVar58 = auVar63._8_4_;
      auVar42._8_4_ = fVar58 * fVar58;
      auVar42._12_4_ = auVar63._12_4_ * auVar63._12_4_;
      auVar118 = NEON_ext(auVar42,auVar42,8,1);
      fVar16 = auVar42._0_4_ + auVar42._4_4_ + auVar118._0_4_ + auVar118._4_4_;
      iVar36 = -(uint)(fVar16 < fVar22);
      bVar7 = fVar57 * fVar57 < fVar16 && fVar16 < fVar22;
      auVar75._0_4_ = -(uint)bVar7;
      auVar75._4_4_ = -(uint)bVar7;
      auVar75._8_4_ = -(uint)bVar7;
      auVar75._12_4_ = -(uint)bVar7;
      NEON_ext(auVar75,auVar75,8,1);
      auVar52._0_4_ = -fVar32;
      auVar52._4_4_ = -fVar33;
      auVar52._8_4_ = -fVar58;
      auVar52._12_4_ = 0;
    } while (CONCAT13((char)auVar75._12_4_,
                      CONCAT12((char)auVar75._8_4_,CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_)
                              )) == -1);
    auVar44._8_8_ = uStack_1b8;
    auVar44._0_8_ = local_1c0;
    auVar89._4_4_ = iVar36;
    auVar89._0_4_ = iVar36;
    auVar89._8_4_ = iVar36;
    auVar89._12_4_ = iVar36;
  }
  else {
    auVar44._8_4_ = auVar52._8_4_;
    auVar44._0_8_ = auVar52._0_8_;
    auVar44._12_4_ = 0;
    uVar80 = auVar63._0_8_;
  }
  auVar99 = ZEXT816(0);
  iVar36 = -(uint)(fVar18 * fVar18 < fVar16);
  bVar34 = (byte)iVar36;
  auVar43[0] = bVar34 & auVar89[0];
  bVar46 = (byte)((uint)iVar36 >> 8);
  auVar43[1] = bVar46 & auVar89[1];
  bVar47 = (byte)((uint)iVar36 >> 0x10);
  auVar43[2] = bVar47 & auVar89[2];
  bVar48 = (byte)((uint)iVar36 >> 0x18);
  auVar43[3] = bVar48 & auVar89[3];
  auVar43[4] = bVar34 & auVar89[4];
  auVar43[5] = bVar46 & auVar89[5];
  auVar43[6] = bVar47 & auVar89[6];
  auVar43[7] = bVar48 & auVar89[7];
  auVar43[8] = bVar34 & auVar89[8];
  auVar43[9] = bVar46 & auVar89[9];
  auVar43[10] = bVar47 & auVar89[10];
  auVar43[0xb] = bVar48 & auVar89[0xb];
  auVar43[0xc] = bVar34 & auVar89[0xc];
  auVar43[0xd] = bVar46 & auVar89[0xd];
  auVar43[0xe] = bVar47 & auVar89[0xe];
  auVar43[0xf] = bVar48 & auVar89[0xf];
  auVar4._8_8_ = uVar87;
  auVar4._0_8_ = uVar80;
  auVar93._8_8_ = uVar87;
  auVar93._0_8_ = uVar80;
  auVar93 = auVar93 ^ (auVar4 ^ auVar63) & auVar89;
  auVar44 = auVar44 ^ (auVar44 ^ auVar52) & auVar43;
  fVar86 = auVar44._0_4_;
  auVar56._0_4_ = fVar86 * fVar86;
  fVar94 = auVar44._4_4_;
  auVar56._4_4_ = fVar94 * fVar94;
  fVar50 = auVar44._8_4_;
  auVar56._8_4_ = fVar50 * fVar50;
  auVar56._12_4_ = auVar44._12_4_ * auVar44._12_4_;
  auVar63 = NEON_ext(auVar56,auVar56,8,1);
  fVar18 = auVar63._0_4_ + auVar63._4_4_;
  fVar16 = auVar56._0_4_ + auVar56._4_4_ + fVar18;
  fVar18 = auVar56._0_4_ + auVar56._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar87 = NEON_frsqrte(uVar9,4);
  fVar57 = (float)uVar87;
  fVar22 = (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar22 * fVar22,fVar57 * fVar57),uVar9,4);
  fVar57 = fVar57 * (float)uVar87;
  fVar22 = fVar22 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar22 * fVar22,fVar57 * fVar57),uVar9,4);
  fVar57 = fVar57 * (float)uVar87;
  fVar22 = fVar22 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar22 * fVar22,fVar57 * fVar57),uVar9,4);
  fVar57 = fVar57 * (float)uVar87;
  fVar22 = fVar22 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frsqrts(CONCAT44(fVar22 * fVar22,fVar57 * fVar57),uVar9,4);
  uVar62 = CONCAT44(fVar18 * fVar22 * (float)((ulong)uVar87 >> 0x20),fVar16 * fVar57 * (float)uVar87
                   );
  uVar62 = uVar62 ^ (uVar62 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar87 = NEON_frecpe(uVar62,4);
  uVar88 = NEON_frecps(uVar62,uVar87,4);
  fVar16 = (float)uVar87 * (float)uVar88;
  fVar18 = (float)((ulong)uVar87 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar18 = fVar18 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar18 = fVar18 * (float)((ulong)uVar87 >> 0x20);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  iVar36 = -(uint)(0.0 < (float)uVar62);
  uVar87 = NEON_frecps(uVar62,CONCAT44(fVar18 * (float)((ulong)uVar87 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar87;
  fVar86 = fVar86 * fVar16;
  fVar94 = fVar94 * fVar16;
  fVar50 = fVar50 * fVar16;
  bVar34 = (byte)iVar36;
  bVar46 = (byte)((uint)iVar36 >> 8);
  bVar47 = (byte)((uint)iVar36 >> 0x10);
  bVar48 = (byte)((uint)iVar36 >> 0x18);
  fVar16 = (float)CONCAT13(bVar48 & (byte)((uint)fVar86 >> 0x18),
                           CONCAT12(bVar47 & (byte)((uint)fVar86 >> 0x10),
                                    CONCAT11(bVar46 & (byte)((uint)fVar86 >> 8),
                                             bVar34 & SUB41(fVar86,0))));
  auVar37._0_8_ =
       CONCAT17(bVar48 & (byte)((uint)fVar94 >> 0x18),
                CONCAT16(bVar47 & (byte)((uint)fVar94 >> 0x10),
                         CONCAT15(bVar46 & (byte)((uint)fVar94 >> 8),
                                  CONCAT14(bVar34 & SUB41(fVar94,0),fVar16))));
  auVar37[8] = bVar34 & SUB41(fVar50,0);
  auVar37[9] = bVar46 & (byte)((uint)fVar50 >> 8);
  auVar37[10] = bVar47 & (byte)((uint)fVar50 >> 0x10);
  auVar37[0xb] = bVar48 & (byte)((uint)fVar50 >> 0x18);
  auVar45._0_8_ = CONCAT44(-(float)((ulong)auVar37._0_8_ >> 0x20),-fVar16);
  auVar45._8_4_ = -auVar37._8_4_;
  iVar36 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar45._12_4_ = 0;
  auVar98._0_8_ = CONCAT44(iVar36,iVar36);
  auVar98._8_4_ = iVar36;
  auVar98._12_4_ = iVar36;
  param_9[1] = (ulong)(uint)auVar45._8_4_;
  *param_9 = auVar45._0_8_;
  *param_8 = uVar100;
  uStack_188 = auVar93._8_8_;
  local_190 = auVar93._0_8_;
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
    auVar45._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_190,local_100,&local_f0,local_a8);
    auVar122._0_8_ =
         CONCAT44(local_140[1] + (local_130._4_4_ - local_140[1]) * local_a8[0],
                  local_140[0] + ((float)local_130 - local_140[0]) * local_a8[0]);
    auVar122._8_4_ = local_140[2] + ((float)uStack_128 - local_140[2]) * local_a8[0];
    auVar122._12_4_ = local_140[3] + (uStack_128._4_4_ - local_140[3]) * local_a8[0];
    auVar63 = NEON_ext(auVar122,auVar122,8,1);
    auVar45._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
    auVar99._8_4_ = (float)auVar63._0_4_;
    auVar99._0_8_ = auVar122._0_8_;
    auVar99._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar99._4_4_ = local_140[1];
    auVar99._0_4_ = local_140[0];
    auVar99._8_4_ = local_140[2];
    auVar99._12_4_ = local_140[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar30._0_8_ =
       CONCAT44(auVar99._4_4_ - auVar45._4_4_ * fVar16,auVar99._0_4_ - auVar45._0_4_ * fVar16);
  auVar30._8_4_ = auVar99._8_4_ - auVar45._8_4_ * fVar16;
  auVar30._12_4_ = auVar99._12_4_ - auVar45._12_4_ * fVar16;
  auVar63 = NEON_ext(auVar30,auVar30,8,1);
  auVar31._8_4_ = auVar63._0_4_;
  auVar31._0_8_ = auVar30._0_8_;
  auVar31._12_4_ = 0;
  auVar99 = auVar99 ^ (auVar99 ^ auVar31) & auVar98;
  param_10[1] = auVar99._8_8_;
  *param_10 = auVar99._0_8_;
  return 1;
}


