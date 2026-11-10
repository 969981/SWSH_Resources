/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002dd9f0; name: FUN_002dd9f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002dd9f0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,float *param_7,undefined8 *param_8,undefined8 *param_9,
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
  byte bVar32;
  uint uVar33;
  undefined1 auVar35 [12];
  byte bVar44;
  byte bVar45;
  float fVar47;
  undefined1 auVar36 [16];
  float fVar48;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int iVar34;
  byte bVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar49;
  float fVar50;
  float fVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar57;
  ulong uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  undefined8 uVar72;
  undefined1 auVar73 [16];
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar85;
  undefined8 uVar78;
  float fVar87;
  undefined1 auVar80 [16];
  float fVar86;
  undefined1 auVar81 [16];
  undefined8 uVar79;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uVar94;
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
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar115;
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
  float local_140 [2];
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120 [8];
  undefined8 local_100;
  float fStack_f8;
  float fStack_f4;
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
  float local_b0 [4];
  
  local_b4 = 1;
  fVar16 = *param_4;
  fVar17 = param_4[1];
  fVar75 = param_4[2];
  fVar85 = param_4[3];
  auVar104._0_4_ = fVar16 * fVar16;
  auVar104._4_4_ = fVar17 * fVar17;
  auVar104._8_4_ = fVar75 * fVar75;
  auVar104._12_4_ = fVar85 * fVar85;
  auVar59 = NEON_ext(auVar104,auVar104,8,1);
  uVar49 = -(uint)(1.1920929e-07 < auVar104._0_4_ + auVar104._4_4_ + auVar59._0_4_ + auVar59._4_4_);
  lVar1 = *(long *)(param_2 + 8);
  pfVar11 = *(float **)(param_2 + 0x10);
  uVar94 = 0;
  fVar66 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar49);
  fVar18 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar17) & uVar49);
  fVar74 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar75) & uVar49);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar85) & uVar49);
  auVar95._0_4_ = fVar66 * fVar66;
  auVar95._4_4_ = fVar18 * fVar18;
  auVar95._8_4_ = fVar74 * fVar74;
  auVar95._12_4_ = fVar16 * fVar16;
  auVar59 = NEON_ext(auVar95,auVar95,8,1);
  fVar17 = auVar59._0_4_ + auVar59._4_4_;
  fVar16 = auVar95._0_4_ + auVar95._4_4_ + fVar17;
  fVar17 = auVar95._0_4_ + auVar95._4_4_ + fVar17;
  uVar9 = CONCAT44(fVar17,fVar16);
  uVar77 = NEON_frsqrte(uVar9,4);
  fVar75 = (float)uVar77;
  fVar85 = (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar77;
  fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar77;
  fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar77;
  fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar75 * fVar75),uVar9,4);
  uVar58 = CONCAT44(fVar17 * fVar85 * (float)((ulong)uVar77 >> 0x20),fVar16 * fVar75 * (float)uVar77
                   );
  uVar58 = uVar58 ^ (uVar58 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar77 = NEON_frecpe(uVar58,4);
  uVar78 = NEON_frecps(uVar58,uVar77,4);
  fVar21 = (float)uVar77 * (float)uVar78;
  fVar16 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar16,fVar21),4);
  fVar21 = fVar21 * (float)uVar77;
  fVar16 = fVar16 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar16,fVar21),4);
  fVar21 = fVar21 * (float)uVar77;
  fVar16 = fVar16 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar16,fVar21),4);
  fVar21 = fVar21 * (float)uVar77;
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar16 * (float)((ulong)uVar77 >> 0x20),fVar21),4);
  fVar21 = fVar21 * (float)uVar77;
  fVar16 = -(fVar66 * fVar21);
  fVar17 = -(fVar18 * fVar21);
  fVar75 = -(fVar74 * fVar21);
  fVar50 = *(float *)(param_2 + 0x40) * fVar75 +
           *(float *)(param_2 + 0x20) * fVar16 + *(float *)(param_2 + 0x30) * fVar17;
  fVar56 = *(float *)(param_2 + 0x44) * fVar75 +
           *(float *)(param_2 + 0x24) * fVar16 + *(float *)(param_2 + 0x34) * fVar17;
  fVar16 = *(float *)(param_2 + 0x48) * fVar75 +
           *(float *)(param_2 + 0x28) * fVar16 + *(float *)(param_2 + 0x38) * fVar17;
  fVar17 = *(float *)(lVar1 + 0x40);
  fVar75 = *(float *)(lVar1 + 0x44);
  fVar85 = *(float *)(lVar1 + 0x48);
  lVar8 = *(long *)(param_3 + 8);
  auVar88._0_4_ = *(float *)(lVar1 + 0x30) * fVar50;
  auVar88._4_4_ = *(float *)(lVar1 + 0x34) * fVar56;
  auVar88._8_4_ = *(float *)(lVar1 + 0x38) * fVar16;
  auVar88._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar114._0_4_ = fVar17 * fVar50;
  auVar114._4_4_ = fVar75 * fVar56;
  auVar114._8_4_ = fVar85 * fVar16;
  auVar114._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar59 = NEON_ext(auVar88,auVar88,8,1);
  auVar95 = NEON_ext(auVar114,auVar114,8,1);
  uVar49 = -(uint)(auVar114._0_4_ + auVar114._4_4_ + auVar95._0_4_ + auVar95._4_4_ <
                  auVar88._0_4_ + auVar88._4_4_ + auVar59._0_4_ + auVar59._4_4_);
  fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar49);
  fVar75 = (float)((uint)fVar75 ^ ((uint)fVar75 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar49);
  fVar85 = (float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar49);
  fVar16 = *(float *)(lVar8 + 0x10);
  local_140[0] = pfVar11[0xc] + pfVar11[8] * fVar85 + *pfVar11 * fVar17 + pfVar11[4] * fVar75;
  local_140[1] = pfVar11[0xd] + pfVar11[9] * fVar85 + pfVar11[1] * fVar17 + pfVar11[5] * fVar75;
  uStack_138._0_4_ = pfVar11[0xe] + pfVar11[10] * fVar85 + pfVar11[2] * fVar17 + pfVar11[6] * fVar75
  ;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_138._4_4_ = pfVar11[0xf] + 0.0;
  uStack_128 = 0;
  local_130 = 0;
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
  fVar50 = *(float *)(lVar8 + 0x30) - fVar16;
  fVar56 = *(float *)(lVar8 + 0x34) - fVar16;
  fVar16 = *(float *)(lVar8 + 0x38) - fVar16;
  auVar80._8_8_ = 0xffffffffffffffff;
  auVar80._0_8_ = 0xffffffffffffffff;
  fVar17 = -fVar50;
  fVar75 = -fVar56;
  fVar85 = -fVar16;
  fVar17 = (float)((uint)fVar17 ^ ((uint)fVar17 ^ (uint)fVar50) & -(uint)(0.0 < fVar66 * fVar21));
  fVar75 = (float)((uint)fVar75 ^ ((uint)fVar75 ^ (uint)fVar56) & -(uint)(0.0 < fVar18 * fVar21));
  fVar85 = (float)((uint)fVar85 ^ ((uint)fVar85 ^ (uint)fVar16) & -(uint)(0.0 < fVar74 * fVar21));
  local_100._0_4_ = local_140[0] - fVar17;
  local_100._4_4_ = local_140[1] - fVar75;
  auVar59._0_8_ = CONCAT44(local_100._4_4_,(float)local_100);
  auVar59._8_4_ = (float)uStack_138 - fVar85;
  auVar59._12_4_ = (pfVar11[0xf] + 0.0) - 0.0;
  fVar16 = -(float)local_100;
  fVar21 = -local_100._4_4_;
  auVar51._0_8_ = CONCAT44(fVar21,fVar16);
  auVar51._8_4_ = -auVar59._8_4_;
  uVar77 = auVar59._8_8_;
  fStack_f8 = auVar59._8_4_;
  fStack_f4 = auVar59._12_4_;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  uStack_178 = (ulong)(uint)fVar85;
  local_180 = CONCAT44(fVar75,fVar17);
  uStack_168 = 0;
  local_170 = 0;
  auVar51._12_4_ = 0;
  uVar78 = NEON_fmin(0,CONCAT44(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x18)),4);
  fVar17 = (float)uVar78 * 0.1;
  auVar60._0_4_ = fVar16 * fVar16;
  auVar60._4_4_ = fVar21 * fVar21;
  auVar60._8_4_ = auVar51._8_4_ * auVar51._8_4_;
  auVar60._12_4_ = 0;
  auVar95 = NEON_ext(auVar60,auVar60,8,1);
  fVar16 = auVar60._0_4_ + auVar60._4_4_ + auVar95._0_4_ + auVar95._4_4_;
  bVar7 = fVar17 * fVar17 < fVar16;
  auVar96._0_4_ = -(uint)bVar7;
  auVar96._4_4_ = -(uint)bVar7;
  auVar96._8_4_ = -(uint)bVar7;
  auVar96._12_4_ = -(uint)bVar7;
  NEON_ext(auVar96,auVar96,8,1);
  uStack_1b8 = (ulong)(uint)auVar51._8_4_;
  if (CONCAT13((char)auVar96._12_4_,
               CONCAT12((char)auVar96._8_4_,CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) ==
      -1) {
    fVar75 = *param_7 * 0.0 + *param_6;
    fVar85 = param_7[1] * 0.0 + param_6[1];
    fVar21 = param_7[2] * 0.0 + param_6[2];
    fVar66 = param_7[3] * 0.0 + param_6[3];
    auVar2._4_4_ = fVar85;
    auVar2._0_4_ = fVar75;
    auVar2._8_4_ = fVar21;
    auVar2._12_4_ = fVar66;
    auVar3._4_4_ = fVar85;
    auVar3._0_4_ = fVar75;
    auVar3._8_4_ = fVar21;
    auVar3._12_4_ = fVar66;
    auVar95 = NEON_ext(auVar2,auVar3,8,1);
    fVar21 = auVar95._0_4_;
    fVar66 = param_1 + fVar17;
    uVar94 = 0;
    local_1c0 = auVar51._0_8_;
    do {
      uVar49 = local_b4;
      fVar76 = auVar51._0_4_;
      auVar36._0_4_ = fVar76 * fVar76;
      fVar86 = auVar51._4_4_;
      auVar36._4_4_ = fVar86 * fVar86;
      fVar87 = auVar51._8_4_;
      auVar36._8_4_ = fVar87 * fVar87;
      auVar36._12_4_ = auVar51._12_4_ * auVar51._12_4_;
      auVar95 = NEON_ext(auVar36,auVar36,8,1);
      lVar1 = *(long *)(param_2 + 8);
      pfVar11 = *(float **)(param_2 + 0x10);
      fVar18 = auVar95._0_4_ + auVar95._4_4_;
      fVar50 = auVar36._0_4_ + auVar36._4_4_ + fVar18;
      fVar18 = auVar36._0_4_ + auVar36._4_4_ + fVar18;
      uVar9 = CONCAT44(fVar18,fVar50);
      uVar77 = NEON_frsqrte(uVar9,4);
      fVar56 = (float)uVar77;
      fVar74 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar56 * fVar56),uVar9,4);
      fVar56 = fVar56 * (float)uVar77;
      fVar74 = fVar74 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar56 * fVar56),uVar9,4);
      fVar56 = fVar56 * (float)uVar77;
      fVar74 = fVar74 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar56 * fVar56),uVar9,4);
      fVar56 = fVar56 * (float)uVar77;
      fVar74 = fVar74 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar56 * fVar56),uVar9,4);
      uVar58 = CONCAT44(fVar18 * fVar74 * (float)((ulong)uVar77 >> 0x20),
                        fVar50 * fVar56 * (float)uVar77);
      uVar58 = uVar58 ^ (uVar58 ^ uVar9) & CONCAT44(-(uint)(fVar50 == 0.0),-(uint)(fVar50 == 0.0));
      uVar77 = NEON_frecpe(uVar58,4);
      uVar72 = NEON_frecps(uVar58,uVar77,4);
      fVar50 = (float)uVar77 * (float)uVar72;
      fVar18 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
      uVar77 = NEON_frecps(uVar58,CONCAT44(fVar18,fVar50),4);
      fVar50 = fVar50 * (float)uVar77;
      fVar18 = fVar18 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar58,CONCAT44(fVar18,fVar50),4);
      fVar50 = fVar50 * (float)uVar77;
      fVar18 = fVar18 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar58,CONCAT44(fVar18,fVar50),4);
      fVar50 = fVar50 * (float)uVar77;
      uVar77 = NEON_frecps(uVar58,CONCAT44(fVar18 * (float)((ulong)uVar77 >> 0x20),fVar50),4);
      fVar50 = fVar50 * (float)uVar77;
      fVar76 = fVar76 * fVar50;
      fVar86 = fVar86 * fVar50;
      fVar87 = fVar87 * fVar50;
      uVar77 = auVar59._8_8_;
      uVar72 = auVar59._0_8_;
      auVar67._0_8_ = CONCAT44(-(uint)(0.0 < -fVar86),-(uint)(0.0 < -fVar76));
      auVar67._8_4_ = -(uint)(0.0 < -fVar87);
      auVar67._12_4_ = 0;
      fVar50 = *(float *)(param_2 + 0x40) * fVar87 +
               *(float *)(param_2 + 0x20) * fVar76 + *(float *)(param_2 + 0x30) * fVar86;
      fVar47 = *(float *)(param_2 + 0x44) * fVar87 +
               *(float *)(param_2 + 0x24) * fVar76 + *(float *)(param_2 + 0x34) * fVar86;
      fVar48 = *(float *)(param_2 + 0x48) * fVar87 +
               *(float *)(param_2 + 0x28) * fVar76 + *(float *)(param_2 + 0x38) * fVar86;
      fVar18 = *(float *)(lVar1 + 0x40);
      fVar56 = *(float *)(lVar1 + 0x44);
      fVar74 = *(float *)(lVar1 + 0x48);
      lVar8 = *(long *)(param_3 + 8);
      auVar97._0_4_ = *(float *)(lVar1 + 0x30) * fVar50;
      auVar97._4_4_ = *(float *)(lVar1 + 0x34) * fVar47;
      auVar97._8_4_ = *(float *)(lVar1 + 0x38) * fVar48;
      auVar97._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
      auVar37._0_4_ = fVar50 * fVar18;
      auVar37._4_4_ = fVar47 * fVar56;
      auVar37._8_4_ = fVar48 * fVar74;
      auVar37._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
      auVar59 = NEON_ext(auVar97,auVar97,8,1);
      auVar95 = NEON_ext(auVar37,auVar37,8,1);
      uVar33 = -(uint)(auVar37._0_4_ + auVar37._4_4_ + auVar95._0_4_ + auVar95._4_4_ <
                      auVar97._0_4_ + auVar97._4_4_ + auVar59._0_4_ + auVar59._4_4_);
      fVar18 = (float)((uint)fVar18 ^ ((uint)fVar18 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar33);
      fVar56 = (float)((uint)fVar56 ^ ((uint)fVar56 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar33);
      fVar74 = (float)((uint)fVar74 ^ ((uint)fVar74 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar33);
      fVar50 = *(float *)(lVar8 + 0x10);
      fVar47 = pfVar11[0xc] + pfVar11[8] * fVar74 + *pfVar11 * fVar18 + pfVar11[4] * fVar56;
      fVar48 = pfVar11[0xd] + pfVar11[9] * fVar74 + pfVar11[1] * fVar18 + pfVar11[5] * fVar56;
      auVar38._0_8_ = CONCAT44(fVar48,fVar47);
      auVar38._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar74 + pfVar11[2] * fVar18 + pfVar11[6] * fVar56;
      auVar38._12_4_ = pfVar11[0xf] + 0.0;
      auVar102._8_4_ = auVar67._8_4_;
      auVar102._0_8_ = auVar67._0_8_;
      auVar102._12_4_ = 0;
      auVar95 = *(undefined1 (*) [16])(lVar8 + 0x30);
      auVar89._0_4_ = auVar95._0_4_ - fVar50;
      auVar89._4_4_ = auVar95._4_4_ - fVar50;
      auVar89._8_4_ = auVar95._8_4_ - fVar50;
      auVar89._12_4_ = auVar95._12_4_ - 0.0;
      auVar103._0_4_ = -auVar89._0_4_;
      auVar103._4_4_ = -auVar89._4_4_;
      auVar103._8_4_ = -auVar89._8_4_;
      auVar103._12_4_ = 0;
      auVar103 = auVar103 ^ (auVar103 ^ auVar89) & auVar102;
      auVar90._0_4_ = fVar75 + auVar103._0_4_;
      auVar90._4_4_ = fVar85 + auVar103._4_4_;
      auVar90._8_4_ = fVar21 + auVar103._8_4_;
      auVar90._12_4_ = auVar103._12_4_ + 0.0;
      auVar59._0_4_ = fVar47 - auVar90._0_4_;
      auVar59._4_4_ = fVar48 - auVar90._4_4_;
      auVar59._8_4_ = auVar38._8_4_ - auVar90._8_4_;
      auVar59._12_4_ = auVar38._12_4_ - auVar90._12_4_;
      auVar98._0_4_ = fVar76 * -auVar59._0_4_;
      auVar98._4_4_ = fVar86 * -auVar59._4_4_;
      auVar98._8_4_ = fVar87 * -auVar59._8_4_;
      auVar98._12_4_ = 0;
      auVar104 = NEON_ext(auVar98,auVar98,8,1);
      fVar50 = auVar104._0_4_ + auVar104._4_4_;
      fVar18 = (auVar98._0_4_ + auVar98._4_4_ + fVar50) - fVar66;
      if (fVar18 <= 0.0) {
        fVar50 = fVar16;
      }
      else {
        auVar81._0_4_ = fVar76 * *param_7;
        auVar81._4_4_ = fVar86 * param_7[1];
        auVar81._8_4_ = fVar87 * param_7[2];
        auVar81._12_4_ = param_7[3] * 0.0;
        auVar104 = NEON_ext(auVar81,auVar81,8,1);
        fVar74 = auVar104._0_4_ + auVar104._4_4_;
        fVar56 = auVar81._0_4_ + auVar81._4_4_ + fVar74;
        uVar79 = CONCAT44(auVar81._0_4_ + auVar81._4_4_ + fVar74,fVar56);
        if (0.0 <= fVar56) {
          return 0;
        }
        uVar108 = NEON_frecpe(uVar79,4);
        uVar112 = NEON_frecps(uVar79,uVar108,4);
        fVar74 = (float)uVar108 * (float)uVar112;
        fVar76 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar74),4);
        fVar74 = fVar74 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar74),4);
        fVar74 = fVar74 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar74),4);
        fVar74 = fVar74 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar79 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar74),4);
        fVar56 = (float)uVar94;
        fVar18 = fVar56 - fVar18 * fVar74 * (float)uVar79;
        uVar94 = CONCAT44((float)((ulong)uVar94 >> 0x20) -
                          ((auVar98._0_4_ + auVar98._4_4_ + fVar50) -
                          (param_1 + (float)((ulong)uVar78 >> 0x20) * 0.1)) *
                          fVar76 * (float)((ulong)uVar79 >> 0x20),fVar18);
        if (fVar56 < fVar18) {
          uVar79 = NEON_fmov(0x3f800000,4);
          if ((float)uVar79 < fVar18) {
            return 0;
          }
          auVar61._0_4_ = *param_7 * fVar18 + *param_6;
          auVar61._4_4_ = param_7[1] * fVar18 + param_6[1];
          auVar61._8_4_ = param_7[2] * fVar18 + param_6[2];
          auVar61._12_4_ = param_7[3] * fVar18 + param_6[3];
          auVar59 = NEON_ext(auVar61,auVar61,8,1);
          fVar50 = auVar59._0_4_;
          fVar75 = auVar61._0_4_ - fVar75;
          fVar85 = auVar61._4_4_ - fVar85;
          fVar21 = fVar50 - fVar21;
          local_180._0_4_ = (float)local_180 + fVar75;
          local_180._4_4_ = local_180._4_4_ + fVar85;
          uStack_178._0_4_ = (float)uStack_178 + fVar21;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + fVar75;
          local_170._4_4_ = local_170._4_4_ + fVar85;
          uStack_168._0_4_ = (float)uStack_168 + fVar21;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar75;
          local_160._4_4_ = local_160._4_4_ + fVar85;
          uStack_158._0_4_ = (float)uStack_158 + fVar21;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          fStack_f8 = (float)uStack_138 - (float)uStack_178;
          fStack_f4 = uStack_138._4_4_ - uStack_178._4_4_;
          local_100._0_4_ = local_140[0] - (float)local_180;
          local_100._4_4_ = local_140[1] - local_180._4_4_;
          fStack_e8 = (float)uStack_128 - (float)uStack_168;
          fStack_e4 = uStack_128._4_4_ - uStack_168._4_4_;
          local_f0 = (float)local_130 - (float)local_170;
          fStack_ec = local_130._4_4_ - local_170._4_4_;
          fStack_d8 = local_120[2] - (float)uStack_158;
          fStack_d4 = local_120[3] - uStack_158._4_4_;
          local_e0 = local_120[0] - (float)local_160;
          fStack_dc = local_120[1] - local_160._4_4_;
          fVar75 = *(float *)(lVar8 + 0x10);
          fVar16 = 3.4028235e+38;
          auVar22._0_4_ = auVar95._0_4_ - fVar75;
          auVar22._4_4_ = auVar95._4_4_ - fVar75;
          auVar22._8_4_ = auVar95._8_4_ - fVar75;
          auVar22._12_4_ = auVar95._12_4_ - 0.0;
          auVar68._0_4_ = -auVar22._0_4_;
          auVar68._4_4_ = -auVar22._4_4_;
          auVar68._8_4_ = -auVar22._8_4_;
          auVar68._12_4_ = 0;
          auVar68 = auVar68 ^ (auVar68 ^ auVar22) & auVar67;
          auVar90._0_4_ = auVar61._0_4_ + auVar68._0_4_;
          auVar90._4_4_ = auVar61._4_4_ + auVar68._4_4_;
          auVar90._8_4_ = fVar50 + auVar68._8_4_;
          auVar90._12_4_ = auVar68._12_4_ + 0.0;
          auVar59._0_4_ = fVar47 - auVar90._0_4_;
          auVar59._4_4_ = fVar48 - auVar90._4_4_;
          auVar59._8_4_ = auVar38._8_4_ - auVar90._8_4_;
          auVar59._12_4_ = auVar38._12_4_ - auVar90._12_4_;
          fVar75 = auVar61._0_4_;
          fVar85 = auVar61._4_4_;
          fVar21 = fVar50;
          local_1c0 = auVar51._0_8_;
          uStack_1b8 = auVar51._8_8_;
        }
        fVar50 = fVar16;
      }
      uVar9 = (ulong)local_b4;
      bVar7 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      (&uStack_138)[uVar9 * 2] = auVar38._8_8_;
      *(undefined8 *)(local_140 + uVar9 * 4) = auVar38._0_8_;
      (&uStack_178)[uVar9 * 2] = auVar90._8_8_;
      (&local_180)[uVar9 * 2] = auVar90._0_8_;
      *(long *)(local_b0 + uVar9 * 4 + -0x12) = auVar59._8_8_;
      *(long *)(local_b0 + uVar9 * 4 + -0x14) = auVar59._0_8_;
      if (bVar7) {
        auVar59 = FUN_00237120(&local_100,local_140,&local_180,&local_b4);
      }
      else if (uVar49 == 2) {
        auVar59._4_4_ = local_100._4_4_;
        auVar59._0_4_ = (float)local_100;
        auVar59._8_4_ = fStack_f8;
        auVar59._12_4_ = fStack_f4;
        auVar5._4_4_ = fStack_ec;
        auVar5._0_4_ = local_f0;
        auVar5._8_4_ = fStack_e8;
        auVar5._12_4_ = fStack_e4;
        auVar6._4_4_ = fStack_dc;
        auVar6._0_4_ = local_e0;
        auVar6._8_4_ = fStack_d8;
        auVar6._12_4_ = fStack_d4;
        auVar69._0_4_ = local_f0 - (float)local_100;
        auVar69._4_4_ = fStack_ec - local_100._4_4_;
        auVar69._8_4_ = fStack_e8 - fStack_f8;
        auVar69._12_4_ = fStack_e4 - fStack_f4;
        auVar64._0_4_ = local_e0 - (float)local_100;
        auVar64._4_4_ = fStack_dc - local_100._4_4_;
        auVar64._8_4_ = fStack_d8 - fStack_f8;
        auVar64._12_4_ = fStack_d4 - fStack_f4;
        auVar95 = NEON_ext(auVar69,auVar69,8,1);
        auVar104 = NEON_ext(auVar64,auVar64,8,1);
        fVar47 = auVar69._0_4_ * auVar64._4_4_ - auVar69._4_4_ * auVar64._0_4_;
        uVar79 = NEON_ext(CONCAT44(auVar69._4_4_ * auVar64._8_4_ - auVar69._8_4_ * auVar64._4_4_,
                                   fVar47),
                          CONCAT44(auVar95._4_4_ * auVar64._4_4_ - auVar69._4_4_ * auVar104._4_4_,
                                   auVar95._0_4_ * auVar64._0_4_ - auVar69._0_4_ * auVar104._0_4_),4
                          ,1);
        fVar56 = (float)uVar79;
        auVar82._0_4_ = fVar56 * fVar56;
        fVar74 = (float)((ulong)uVar79 >> 0x20);
        auVar82._4_4_ = fVar74 * fVar74;
        auVar82._8_4_ = fVar47 * fVar47;
        auVar82._12_4_ = 0;
        auVar95 = NEON_ext(auVar82,auVar82,8,1);
        fVar18 = auVar95._0_4_ + auVar95._4_4_;
        fVar16 = auVar82._0_4_ + auVar82._4_4_ + fVar18;
        uVar79 = CONCAT44(auVar82._0_4_ + auVar82._4_4_ + fVar18,fVar16);
        local_b4 = 3;
        if (1.1920929e-07 < fVar16) {
          if (fVar16 != 0.0) {
            auVar95 = NEON_ext(auVar5,auVar5,8,1);
            auVar104 = NEON_ext(auVar6,auVar6,8,1);
            fVar48 = local_f0 * fStack_dc - fStack_ec * local_e0;
            auVar114 = NEON_ext(auVar59,auVar59,8,1);
            uVar112 = NEON_ext(CONCAT44(fStack_ec * fStack_d8 - fStack_e8 * fStack_dc,fVar48),
                               CONCAT44(auVar95._4_4_ * fStack_dc - fStack_ec * auVar104._4_4_,
                                        auVar95._0_4_ * local_e0 - local_f0 * auVar104._0_4_),4,1);
            fVar16 = local_100._4_4_ * local_e0 - (float)local_100 * fStack_dc;
            uVar115 = NEON_ext(CONCAT44(fStack_f8 * fStack_dc - local_100._4_4_ * fStack_d8,fVar16),
                               CONCAT44(local_100._4_4_ * auVar104._4_4_ -
                                        auVar114._4_4_ * fStack_dc,
                                        (float)local_100 * auVar104._0_4_ -
                                        auVar114._0_4_ * local_e0),4,1);
            fVar18 = (float)local_100 * fStack_ec - local_100._4_4_ * local_f0;
            uVar108 = NEON_ext(CONCAT44(local_100._4_4_ * fStack_e8 - fStack_f8 * fStack_ec,fVar18),
                               CONCAT44(auVar114._4_4_ * fStack_ec - local_100._4_4_ * auVar95._4_4_
                                        ,auVar114._0_4_ * local_f0 -
                                         (float)local_100 * auVar95._0_4_),4,1);
            auVar99._0_4_ = (float)uVar112 * fVar56;
            auVar99._4_4_ = (float)((ulong)uVar112 >> 0x20) * fVar74;
            auVar99._8_4_ = fVar48 * fVar47;
            auVar99._12_4_ = 0;
            auVar95 = NEON_ext(auVar99,auVar99,8,1);
            auVar105._0_4_ = (float)uVar115 * fVar56;
            auVar105._4_4_ = (float)((ulong)uVar115 >> 0x20) * fVar74;
            auVar105._8_4_ = fVar16 * fVar47;
            auVar105._12_4_ = 0;
            auVar104 = NEON_ext(auVar105,auVar105,8,1);
            fVar16 = auVar99._0_4_ + auVar99._4_4_ + auVar95._0_4_ + auVar95._4_4_;
            auVar109._0_4_ = (float)uVar108 * fVar56;
            auVar109._4_4_ = (float)((ulong)uVar108 >> 0x20) * fVar74;
            auVar109._8_4_ = fVar18 * fVar47;
            auVar109._12_4_ = 0;
            fVar18 = auVar105._0_4_ + auVar105._4_4_ + auVar104._0_4_ + auVar104._4_4_;
            auVar95 = NEON_ext(auVar109,auVar109,8,1);
            fVar48 = auVar109._0_4_ + auVar109._4_4_ + auVar95._0_4_ + auVar95._4_4_;
            bVar7 = (0.0 <= fVar16 && 0.0 <= fVar18) && 0.0 <= fVar48;
            auVar110._0_4_ = -(uint)bVar7;
            auVar110._4_4_ = -(uint)bVar7;
            auVar110._8_4_ = -(uint)bVar7;
            auVar110._12_4_ = -(uint)bVar7;
            NEON_ext(auVar110,auVar110,8,1);
            if (CONCAT13((char)auVar110._12_4_,
                         CONCAT12((char)auVar110._8_4_,
                                  CONCAT11((char)auVar110._4_4_,(char)auVar110._0_4_))) == -1) {
              auVar26._0_4_ = (float)local_100 * fVar56;
              auVar26._4_4_ = local_100._4_4_ * fVar74;
              auVar26._8_4_ = fStack_f8 * fVar47;
              auVar26._12_4_ = fStack_f4 * 0.0;
              auVar59 = NEON_ext(auVar26,auVar26,8,1);
              uVar108 = NEON_frecpe(uVar79,4);
              uVar112 = NEON_frecps(uVar79,uVar108,4);
              fVar16 = (float)uVar108 * (float)uVar112;
              fVar18 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
              uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
              fVar16 = fVar16 * (float)uVar108;
              fVar18 = fVar18 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
              fVar16 = fVar16 * (float)uVar108;
              fVar18 = fVar18 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
              fVar16 = fVar16 * (float)uVar108;
              uVar79 = NEON_frecps(uVar79,CONCAT44(fVar18 * (float)((ulong)uVar108 >> 0x20),fVar16),
                                   4);
              fVar16 = (auVar26._0_4_ + auVar26._4_4_ + auVar59._0_4_ + auVar59._4_4_) *
                       fVar16 * (float)uVar79;
              auVar59._0_4_ = fVar56 * fVar16;
              auVar59._4_4_ = fVar74 * fVar16;
              auVar59._8_4_ = fVar47 * fVar16;
              auVar59._12_4_ = 0.0;
            }
            else {
              auVar73._0_4_ = -(float)local_100 * auVar69._0_4_;
              auVar73._4_4_ = -local_100._4_4_ * auVar69._4_4_;
              auVar73._8_4_ = -fStack_f8 * auVar69._8_4_;
              auVar73._12_4_ = auVar69._12_4_ * 0.0;
              auVar95 = NEON_ext(auVar73,auVar73,8,1);
              fVar47 = auVar95._0_4_ + auVar95._4_4_;
              auVar83._0_4_ = -local_f0 * auVar69._0_4_;
              auVar83._4_4_ = -fStack_ec * auVar69._4_4_;
              auVar83._8_4_ = -fStack_e8 * auVar69._8_4_;
              auVar83._12_4_ = auVar69._12_4_ * 0.0;
              auVar95 = NEON_ext(auVar83,auVar83,8,1);
              fVar76 = auVar95._0_4_ + auVar95._4_4_;
              fVar56 = auVar73._0_4_ + auVar73._4_4_ + fVar47;
              fVar74 = auVar83._0_4_ + auVar83._4_4_ + fVar76;
              fVar76 = auVar83._0_4_ + auVar83._4_4_ + fVar76;
              bVar7 = (0.0 <= fVar56 && fVar48 <= 0.0) && fVar74 <= 0.0;
              auVar106._0_4_ = -(uint)bVar7;
              auVar106._4_4_ = -(uint)bVar7;
              auVar106._8_4_ = -(uint)bVar7;
              auVar106._12_4_ = -(uint)bVar7;
              NEON_ext(auVar106,auVar106,8,1);
              if (CONCAT13((char)auVar106._12_4_,
                           CONCAT12((char)auVar106._8_4_,
                                    CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) == -1) {
                uVar79 = CONCAT44((auVar73._0_4_ + auVar73._4_4_ + fVar47) - fVar76,fVar56 - fVar74)
                ;
                uVar108 = NEON_frecpe(uVar79,4);
                uVar112 = NEON_frecps(uVar79,uVar108,4);
                fVar16 = (float)uVar108 * (float)uVar112;
                fVar18 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
                uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                fVar18 = fVar18 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                fVar18 = fVar18 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar79,CONCAT44(fVar18,fVar16),4);
                fVar16 = fVar16 * (float)uVar108;
                uVar79 = NEON_frecps(uVar79,CONCAT44(fVar18 * (float)((ulong)uVar108 >> 0x20),fVar16
                                                    ),4);
                fVar56 = fVar56 * (float)(-(uint)(1.1920929e-07 < ABS(fVar56 - fVar74)) &
                                         (uint)(fVar16 * (float)uVar79));
                puVar10 = &local_180;
                pfVar11 = local_140;
                auVar27._0_8_ =
                     CONCAT44(local_100._4_4_ + auVar69._4_4_ * fVar56,
                              (float)local_100 + auVar69._0_4_ * fVar56);
                auVar27._8_4_ = fStack_f8 + auVar69._8_4_ * fVar56;
                auVar27._12_4_ = fStack_f4 + auVar69._12_4_ * fVar56;
                auVar59 = NEON_ext(auVar27,auVar27,8,1);
                pfVar12 = (float *)&local_100;
                auVar59._8_4_ = (float)auVar59._0_4_;
                auVar59._0_8_ = auVar27._0_8_;
                auVar59._12_4_ = 0.0;
                local_b4 = 2;
LAB_002de5e0:
                puVar13 = &local_170;
                pfVar14 = (float *)&local_130;
                pfVar15 = &local_f0;
              }
              else {
                auVar107._0_4_ = -local_f0 * auVar64._0_4_;
                auVar107._4_4_ = -fStack_ec * auVar64._4_4_;
                auVar107._8_4_ = -fStack_e8 * auVar64._8_4_;
                auVar107._12_4_ = auVar64._12_4_ * 0.0;
                auVar95 = NEON_ext(auVar107,auVar107,8,1);
                fVar87 = auVar95._0_4_ + auVar95._4_4_;
                auVar70._0_4_ = auVar69._0_4_ * -local_e0;
                auVar70._4_4_ = auVar69._4_4_ * -fStack_dc;
                auVar70._8_4_ = auVar69._8_4_ * -fStack_d8;
                auVar70._12_4_ = auVar69._12_4_ * 0.0;
                auVar113._0_4_ = auVar64._0_4_ * -local_e0;
                auVar113._4_4_ = auVar64._4_4_ * -fStack_dc;
                auVar113._8_4_ = auVar64._8_4_ * -fStack_d8;
                auVar113._12_4_ = auVar64._12_4_ * 0.0;
                fVar47 = auVar107._0_4_ + auVar107._4_4_ + fVar87;
                auVar95 = NEON_ext(auVar70,auVar70,8,1);
                fVar19 = auVar95._0_4_ + auVar95._4_4_;
                fVar48 = auVar70._0_4_ + auVar70._4_4_ + fVar19;
                auVar95 = NEON_ext(auVar113,auVar113,8,1);
                fVar20 = auVar95._0_4_ + auVar95._4_4_;
                fVar86 = auVar113._0_4_ + auVar113._4_4_ + fVar20;
                fVar20 = auVar113._0_4_ + auVar113._4_4_ + fVar20;
                bVar7 = (fVar74 <= fVar47 && fVar16 <= 0.0) && fVar86 <= fVar48;
                auVar100._0_4_ = -(uint)bVar7;
                auVar100._4_4_ = -(uint)bVar7;
                auVar100._8_4_ = -(uint)bVar7;
                auVar100._12_4_ = -(uint)bVar7;
                NEON_ext(auVar100,auVar100,8,1);
                puVar13 = &local_160;
                pfVar14 = local_120;
                pfVar15 = &local_e0;
                if (CONCAT13((char)auVar100._12_4_,
                             CONCAT12((char)auVar100._8_4_,
                                      CONCAT11((char)auVar100._4_4_,(char)auVar100._0_4_))) == -1) {
                  local_b4 = 2;
                  fVar16 = (fVar47 - fVar74) + (fVar48 - fVar86);
                  uVar79 = CONCAT44(((auVar107._0_4_ + auVar107._4_4_ + fVar87) - fVar76) +
                                    ((auVar70._0_4_ + auVar70._4_4_ + fVar19) - fVar20),fVar16);
                  uVar108 = NEON_frecpe(uVar79,4);
                  uVar112 = NEON_frecps(uVar79,uVar108,4);
                  fVar18 = (float)uVar108 * (float)uVar112;
                  fVar56 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  uVar79 = NEON_frecps(uVar79,CONCAT44(fVar56 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar18),4);
                  fVar16 = (fVar47 - fVar74) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar16)) &
                                  (uint)(fVar18 * (float)uVar79));
                  auVar28._0_8_ =
                       CONCAT44(fStack_ec + (fStack_dc - fStack_ec) * fVar16,
                                local_f0 + (local_e0 - local_f0) * fVar16);
                  auVar28._8_4_ = fStack_e8 + (fStack_d8 - fStack_e8) * fVar16;
                  auVar28._12_4_ = fStack_e4 + (fStack_d4 - fStack_e4) * fVar16;
                  auVar59 = NEON_ext(auVar28,auVar28,8,1);
                  auVar59._8_4_ = (float)auVar59._0_4_;
                  auVar59._0_8_ = auVar28._0_8_;
                  auVar59._12_4_ = 0.0;
                  puVar10 = &local_170;
                  pfVar11 = (float *)&local_130;
                  pfVar12 = &local_f0;
                }
                else {
                  auVar101._0_4_ = -(float)local_100 * auVar64._0_4_;
                  auVar101._4_4_ = -local_100._4_4_ * auVar64._4_4_;
                  auVar101._8_4_ = -fStack_f8 * auVar64._8_4_;
                  auVar101._12_4_ = auVar64._12_4_ * 0.0;
                  auVar95 = NEON_ext(auVar101,auVar101,8,1);
                  fVar48 = auVar95._0_4_ + auVar95._4_4_;
                  fVar16 = auVar101._0_4_ + auVar101._4_4_ + fVar48;
                  bVar7 = (fVar18 <= 0.0 && 0.0 <= fVar16) && fVar86 <= 0.0;
                  auVar91._0_4_ = -(uint)bVar7;
                  auVar91._4_4_ = -(uint)bVar7;
                  auVar91._8_4_ = -(uint)bVar7;
                  auVar91._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar91,auVar91,8,1);
                  if (CONCAT13((char)auVar91._12_4_,
                               CONCAT12((char)auVar91._8_4_,
                                        CONCAT11((char)auVar91._4_4_,(char)auVar91._0_4_))) != -1) {
                    bVar7 = fVar56 <= 0.0 && fVar16 <= 0.0;
                    auVar65._0_4_ = -(uint)bVar7;
                    auVar65._4_4_ = -(uint)bVar7;
                    auVar65._8_4_ = -(uint)bVar7;
                    auVar65._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar65,auVar65,8,1);
                    if (CONCAT13((char)auVar65._12_4_,
                                 CONCAT12((char)auVar65._8_4_,
                                          CONCAT11((char)auVar65._4_4_,(char)auVar65._0_4_))) == -1)
                    {
                      puVar10 = &local_180;
                      pfVar11 = local_140;
                      pfVar12 = (float *)&local_100;
                    }
                    else {
                      bVar7 = 0.0 <= fVar74 && fVar47 <= fVar74;
                      auVar24._0_4_ = -(uint)bVar7;
                      auVar24._4_4_ = -(uint)bVar7;
                      auVar24._8_4_ = -(uint)bVar7;
                      auVar24._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar24,auVar24,8,1);
                      iVar34 = CONCAT13((char)auVar24._12_4_,
                                        CONCAT12((char)auVar24._8_4_,
                                                 CONCAT11((char)auVar24._4_4_,(char)auVar24._0_4_)))
                      ;
                      iVar57 = -(uint)(iVar34 == -1);
                      auVar25._4_4_ = iVar57;
                      auVar25._0_4_ = iVar57;
                      auVar25._8_4_ = iVar57;
                      auVar25._12_4_ = iVar57;
                      lVar1 = 0x10;
                      if (iVar34 != -1) {
                        lVar1 = 0x20;
                      }
                      auVar59 = auVar6 ^ (auVar6 ^ auVar5) & auVar25;
                      pfVar12 = (float *)((long)local_b0 + lVar1 + -0x50);
                      pfVar11 = (float *)((long)local_140 + lVar1);
                      puVar10 = (undefined8 *)((long)&local_180 + lVar1);
                    }
                    local_b4 = 1;
                    goto LAB_002de5e0;
                  }
                  uVar79 = CONCAT44((auVar101._0_4_ + auVar101._4_4_ + fVar48) - fVar20,
                                    fVar16 - fVar86);
                  uVar108 = NEON_frecpe(uVar79,4);
                  uVar112 = NEON_frecps(uVar79,uVar108,4);
                  fVar18 = (float)uVar108 * (float)uVar112;
                  fVar56 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
                  fVar18 = fVar18 * (float)uVar108;
                  uVar79 = NEON_frecps(uVar79,CONCAT44(fVar56 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar18),4);
                  fVar16 = fVar16 * (float)(-(uint)(1.1920929e-07 < ABS(fVar16 - fVar86)) &
                                           (uint)(fVar18 * (float)uVar79));
                  auVar29._0_8_ =
                       CONCAT44(local_100._4_4_ + auVar64._4_4_ * fVar16,
                                (float)local_100 + auVar64._0_4_ * fVar16);
                  auVar29._8_4_ = fStack_f8 + auVar64._8_4_ * fVar16;
                  auVar29._12_4_ = fStack_f4 + auVar64._12_4_ * fVar16;
                  auVar59 = NEON_ext(auVar29,auVar29,8,1);
                  auVar59._8_4_ = (float)auVar59._0_4_;
                  auVar59._0_8_ = auVar29._0_8_;
                  auVar59._12_4_ = 0.0;
                  local_b4 = 2;
                  puVar10 = &local_180;
                  pfVar11 = local_140;
                  pfVar12 = (float *)&local_100;
                }
              }
              fStack_f8 = (float)*(undefined8 *)(pfVar12 + 2);
              fStack_f4 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
              local_100._0_4_ = (float)*(undefined8 *)pfVar12;
              local_100._4_4_ = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              fStack_e8 = (float)*(undefined8 *)(pfVar15 + 2);
              fStack_e4 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
              local_f0 = (float)*(undefined8 *)pfVar15;
              fStack_ec = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
              uStack_138._0_4_ = (float)*(undefined8 *)(pfVar11 + 2);
              uStack_138._4_4_ = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
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
          auVar39._0_4_ = auVar69._0_4_ * auVar69._0_4_;
          auVar39._4_4_ = auVar69._4_4_ * auVar69._4_4_;
          auVar39._8_4_ = auVar69._8_4_ * auVar69._8_4_;
          auVar39._12_4_ = auVar69._12_4_ * auVar69._12_4_;
          auVar95 = NEON_ext(auVar39,auVar39,8,1);
          fVar18 = auVar95._0_4_ + auVar95._4_4_;
          fVar16 = auVar39._0_4_ + auVar39._4_4_ + fVar18;
          uVar79 = CONCAT44(auVar39._0_4_ + auVar39._4_4_ + fVar18,fVar16);
          bVar7 = fVar16 <= 1.1920929e-07;
          auVar53._0_4_ = -(uint)bVar7;
          auVar53._4_4_ = -(uint)bVar7;
          auVar53._8_4_ = -(uint)bVar7;
          auVar53._12_4_ = -(uint)bVar7;
          NEON_ext(auVar53,auVar53,8,1);
          local_b4 = 2;
          if (CONCAT13((char)auVar53._12_4_,
                       CONCAT12((char)auVar53._8_4_,
                                CONCAT11((char)auVar53._4_4_,(char)auVar53._0_4_))) != -1) {
            auVar54._0_4_ = -(float)local_100 * auVar69._0_4_;
            auVar54._4_4_ = -local_100._4_4_ * auVar69._4_4_;
            auVar54._8_4_ = -fStack_f8 * auVar69._8_4_;
            auVar54._12_4_ = auVar69._12_4_ * 0.0;
            auVar95 = NEON_ext(auVar54,auVar54,8,1);
            fVar16 = auVar95._0_4_ + auVar95._4_4_;
            uVar108 = NEON_frecpe(uVar79,4);
            uVar112 = NEON_frecps(uVar79,uVar108,4);
            fVar18 = (float)uVar108 * (float)uVar112;
            fVar56 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
            uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
            fVar18 = fVar18 * (float)uVar108;
            fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
            fVar18 = fVar18 * (float)uVar108;
            fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
            fVar18 = fVar18 * (float)uVar108;
            fVar56 = fVar56 * (float)((ulong)uVar108 >> 0x20);
            uVar79 = NEON_frecps(uVar79,CONCAT44(fVar56,fVar18),4);
            uVar108 = NEON_fmov(0x3f800000,4);
            uVar79 = NEON_fmin(CONCAT44((auVar54._0_4_ + auVar54._4_4_ + fVar16) *
                                        fVar56 * (float)((ulong)uVar79 >> 0x20),
                                        (auVar54._0_4_ + auVar54._4_4_ + fVar16) *
                                        fVar18 * (float)uVar79),uVar108,4);
            uVar79 = NEON_fmax(uVar79,0,4);
            fVar16 = (float)uVar79;
            fVar18 = auVar69._0_4_ * fVar16;
            fVar56 = auVar69._4_4_ * fVar16;
            fVar74 = auVar69._8_4_ * fVar16;
            fVar16 = auVar69._12_4_ * fVar16;
            goto LAB_002de15c;
          }
LAB_002de170:
          local_b4 = 1;
        }
      }
      else if (uVar49 == 1) {
        auVar59._4_4_ = local_100._4_4_;
        auVar59._0_4_ = (float)local_100;
        auVar59._8_4_ = fStack_f8;
        auVar59._12_4_ = fStack_f4;
        fVar18 = local_f0 - (float)local_100;
        fVar56 = fStack_ec - local_100._4_4_;
        fVar74 = fStack_e8 - fStack_f8;
        fVar16 = fStack_e4 - fStack_f4;
        auVar52._0_4_ = fVar18 * fVar18;
        auVar52._4_4_ = fVar56 * fVar56;
        auVar52._8_4_ = fVar74 * fVar74;
        auVar52._12_4_ = fVar16 * fVar16;
        auVar95 = NEON_ext(auVar52,auVar52,8,1);
        fVar48 = auVar95._0_4_ + auVar95._4_4_;
        fVar47 = auVar52._0_4_ + auVar52._4_4_ + fVar48;
        uVar79 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar48,fVar47);
        bVar7 = fVar47 <= 1.1920929e-07;
        auVar62._0_4_ = -(uint)bVar7;
        auVar62._4_4_ = -(uint)bVar7;
        auVar62._8_4_ = -(uint)bVar7;
        auVar62._12_4_ = -(uint)bVar7;
        NEON_ext(auVar62,auVar62,8,1);
        if (CONCAT13((char)auVar62._12_4_,
                     CONCAT12((char)auVar62._8_4_,CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))
                    ) == -1) goto LAB_002de170;
        auVar63._0_4_ = -(float)local_100 * fVar18;
        auVar63._4_4_ = -local_100._4_4_ * fVar56;
        auVar63._8_4_ = -fStack_f8 * fVar74;
        auVar63._12_4_ = fVar16 * 0.0;
        auVar95 = NEON_ext(auVar63,auVar63,8,1);
        fVar47 = auVar95._0_4_ + auVar95._4_4_;
        uVar108 = NEON_frecpe(uVar79,4);
        uVar112 = NEON_frecps(uVar79,uVar108,4);
        fVar48 = (float)uVar108 * (float)uVar112;
        fVar76 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar48),4);
        fVar48 = fVar48 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar48),4);
        fVar48 = fVar48 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar48),4);
        fVar48 = fVar48 * (float)uVar108;
        fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
        uVar79 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar48),4);
        uVar108 = NEON_fmov(0x3f800000,4);
        uVar79 = NEON_fmin(CONCAT44((auVar63._0_4_ + auVar63._4_4_ + fVar47) *
                                    fVar76 * (float)((ulong)uVar79 >> 0x20),
                                    (auVar63._0_4_ + auVar63._4_4_ + fVar47) *
                                    fVar48 * (float)uVar79),uVar108,4);
        uVar79 = NEON_fmax(uVar79,0,4);
        fVar47 = (float)uVar79;
        fVar18 = fVar18 * fVar47;
        fVar56 = fVar56 * fVar47;
        fVar74 = fVar74 * fVar47;
        fVar16 = fVar16 * fVar47;
LAB_002de15c:
        auVar23._0_8_ = CONCAT44(auVar59._4_4_ + fVar56,auVar59._0_4_ + fVar18);
        auVar23._8_4_ = auVar59._8_4_ + fVar74;
        auVar23._12_4_ = auVar59._12_4_ + fVar16;
        auVar59 = NEON_ext(auVar23,auVar23,8,1);
        auVar59._8_4_ = (float)auVar59._0_4_;
        auVar59._0_8_ = auVar23._0_8_;
        auVar59._12_4_ = 0.0;
      }
      fVar18 = auVar59._0_4_;
      auVar40._0_4_ = fVar18 * fVar18;
      fVar56 = auVar59._4_4_;
      auVar40._4_4_ = fVar56 * fVar56;
      fVar74 = auVar59._8_4_;
      auVar40._8_4_ = fVar74 * fVar74;
      auVar40._12_4_ = auVar59._12_4_ * auVar59._12_4_;
      auVar95 = NEON_ext(auVar40,auVar40,8,1);
      fVar16 = auVar40._0_4_ + auVar40._4_4_ + auVar95._0_4_ + auVar95._4_4_;
      iVar34 = -(uint)(fVar16 < fVar50);
      bVar7 = fVar66 * fVar66 < fVar16 && fVar16 < fVar50;
      auVar71._0_4_ = -(uint)bVar7;
      auVar71._4_4_ = -(uint)bVar7;
      auVar71._8_4_ = -(uint)bVar7;
      auVar71._12_4_ = -(uint)bVar7;
      NEON_ext(auVar71,auVar71,8,1);
      auVar51._0_4_ = -fVar18;
      auVar51._4_4_ = -fVar56;
      auVar51._8_4_ = -fVar74;
      auVar51._12_4_ = 0;
    } while (CONCAT13((char)auVar71._12_4_,
                      CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_)
                              )) == -1);
    auVar42._8_8_ = uStack_1b8;
    auVar42._0_8_ = local_1c0;
    auVar80._4_4_ = iVar34;
    auVar80._0_4_ = iVar34;
    auVar80._8_4_ = iVar34;
    auVar80._12_4_ = iVar34;
  }
  else {
    auVar42._8_4_ = auVar51._8_4_;
    auVar42._0_8_ = auVar51._0_8_;
    auVar42._12_4_ = 0;
    uVar72 = auVar59._0_8_;
  }
  auVar93 = ZEXT816(0);
  iVar34 = -(uint)(fVar17 * fVar17 < fVar16);
  bVar32 = (byte)iVar34;
  auVar41[0] = bVar32 & auVar80[0];
  bVar44 = (byte)((uint)iVar34 >> 8);
  auVar41[1] = bVar44 & auVar80[1];
  bVar45 = (byte)((uint)iVar34 >> 0x10);
  auVar41[2] = bVar45 & auVar80[2];
  bVar46 = (byte)((uint)iVar34 >> 0x18);
  auVar41[3] = bVar46 & auVar80[3];
  auVar41[4] = bVar32 & auVar80[4];
  auVar41[5] = bVar44 & auVar80[5];
  auVar41[6] = bVar45 & auVar80[6];
  auVar41[7] = bVar46 & auVar80[7];
  auVar41[8] = bVar32 & auVar80[8];
  auVar41[9] = bVar44 & auVar80[9];
  auVar41[10] = bVar45 & auVar80[10];
  auVar41[0xb] = bVar46 & auVar80[0xb];
  auVar41[0xc] = bVar32 & auVar80[0xc];
  auVar41[0xd] = bVar44 & auVar80[0xd];
  auVar41[0xe] = bVar45 & auVar80[0xe];
  auVar41[0xf] = bVar46 & auVar80[0xf];
  auVar4._8_8_ = uVar77;
  auVar4._0_8_ = uVar72;
  auVar84._8_8_ = uVar77;
  auVar84._0_8_ = uVar72;
  auVar84 = auVar84 ^ (auVar4 ^ auVar59) & auVar80;
  auVar42 = auVar42 ^ (auVar42 ^ auVar51) & auVar41;
  fVar75 = auVar42._0_4_;
  auVar55._0_4_ = fVar75 * fVar75;
  fVar85 = auVar42._4_4_;
  auVar55._4_4_ = fVar85 * fVar85;
  fVar21 = auVar42._8_4_;
  auVar55._8_4_ = fVar21 * fVar21;
  auVar55._12_4_ = auVar42._12_4_ * auVar42._12_4_;
  auVar59 = NEON_ext(auVar55,auVar55,8,1);
  fVar17 = auVar59._0_4_ + auVar59._4_4_;
  fVar16 = auVar55._0_4_ + auVar55._4_4_ + fVar17;
  fVar17 = auVar55._0_4_ + auVar55._4_4_ + fVar17;
  uVar9 = CONCAT44(fVar17,fVar16);
  uVar77 = NEON_frsqrte(uVar9,4);
  fVar66 = (float)uVar77;
  fVar50 = (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar66 * fVar66),uVar9,4);
  fVar66 = fVar66 * (float)uVar77;
  fVar50 = fVar50 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar66 * fVar66),uVar9,4);
  fVar66 = fVar66 * (float)uVar77;
  fVar50 = fVar50 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar66 * fVar66),uVar9,4);
  fVar66 = fVar66 * (float)uVar77;
  fVar50 = fVar50 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frsqrts(CONCAT44(fVar50 * fVar50,fVar66 * fVar66),uVar9,4);
  uVar58 = CONCAT44(fVar17 * fVar50 * (float)((ulong)uVar77 >> 0x20),fVar16 * fVar66 * (float)uVar77
                   );
  uVar58 = uVar58 ^ (uVar58 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar77 = NEON_frecpe(uVar58,4);
  uVar78 = NEON_frecps(uVar58,uVar77,4);
  fVar16 = (float)uVar77 * (float)uVar78;
  fVar17 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar77;
  fVar17 = fVar17 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar77;
  fVar17 = fVar17 * (float)((ulong)uVar77 >> 0x20);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar77;
  iVar34 = -(uint)(0.0 < (float)uVar58);
  uVar77 = NEON_frecps(uVar58,CONCAT44(fVar17 * (float)((ulong)uVar77 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar77;
  fVar75 = fVar75 * fVar16;
  fVar85 = fVar85 * fVar16;
  fVar21 = fVar21 * fVar16;
  bVar32 = (byte)iVar34;
  bVar44 = (byte)((uint)iVar34 >> 8);
  bVar45 = (byte)((uint)iVar34 >> 0x10);
  bVar46 = (byte)((uint)iVar34 >> 0x18);
  fVar16 = (float)CONCAT13(bVar46 & (byte)((uint)fVar75 >> 0x18),
                           CONCAT12(bVar45 & (byte)((uint)fVar75 >> 0x10),
                                    CONCAT11(bVar44 & (byte)((uint)fVar75 >> 8),
                                             bVar32 & SUB41(fVar75,0))));
  auVar35._0_8_ =
       CONCAT17(bVar46 & (byte)((uint)fVar85 >> 0x18),
                CONCAT16(bVar45 & (byte)((uint)fVar85 >> 0x10),
                         CONCAT15(bVar44 & (byte)((uint)fVar85 >> 8),
                                  CONCAT14(bVar32 & SUB41(fVar85,0),fVar16))));
  auVar35[8] = bVar32 & SUB41(fVar21,0);
  auVar35[9] = bVar44 & (byte)((uint)fVar21 >> 8);
  auVar35[10] = bVar45 & (byte)((uint)fVar21 >> 0x10);
  auVar35[0xb] = bVar46 & (byte)((uint)fVar21 >> 0x18);
  auVar43._0_8_ = CONCAT44(-(float)((ulong)auVar35._0_8_ >> 0x20),-fVar16);
  auVar43._8_4_ = -auVar35._8_4_;
  iVar34 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar43._12_4_ = 0;
  auVar92._0_8_ = CONCAT44(iVar34,iVar34);
  auVar92._8_4_ = iVar34;
  auVar92._12_4_ = iVar34;
  param_9[1] = (ulong)(uint)auVar43._8_4_;
  *param_9 = auVar43._0_8_;
  *param_8 = uVar94;
  uStack_188 = auVar84._8_8_;
  local_190 = auVar84._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_190,&local_100,&local_f0,&local_e0,local_b0 + 2,local_b0);
    auVar93._0_4_ =
         local_140[0] +
         ((float)local_130 - local_140[0]) * local_b0[2] +
         (local_120[0] - local_140[0]) * local_b0[0];
    auVar93._4_4_ =
         local_140[1] +
         (local_130._4_4_ - local_140[1]) * local_b0[2] +
         (local_120[1] - local_140[1]) * local_b0[0];
    auVar93._8_4_ =
         (float)uStack_138 +
         ((float)uStack_128 - (float)uStack_138) * local_b0[2] +
         (local_120[2] - (float)uStack_138) * local_b0[0];
    auVar93._12_4_ = uStack_138._4_4_ + 0.0;
    auVar43._12_4_ = 0;
    auVar92._8_8_ = auVar92._8_8_;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_190,&local_100,&local_f0,local_b0 + 2);
    auVar111._0_8_ =
         CONCAT44(local_140[1] + (local_130._4_4_ - local_140[1]) * local_b0[2],
                  local_140[0] + ((float)local_130 - local_140[0]) * local_b0[2]);
    auVar111._8_4_ = (float)uStack_138 + ((float)uStack_128 - (float)uStack_138) * local_b0[2];
    auVar111._12_4_ = uStack_138._4_4_ + (uStack_128._4_4_ - uStack_138._4_4_) * local_b0[2];
    auVar59 = NEON_ext(auVar111,auVar111,8,1);
    auVar43._12_4_ = 0;
    auVar92._8_8_ = auVar92._8_8_;
    auVar93._8_4_ = (float)auVar59._0_4_;
    auVar93._0_8_ = auVar111._0_8_;
    auVar93._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar93._4_4_ = local_140[1];
    auVar93._0_4_ = local_140[0];
    auVar93._8_4_ = (float)uStack_138;
    auVar93._12_4_ = uStack_138._4_4_;
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar30._0_8_ =
       CONCAT44(auVar93._4_4_ - auVar43._4_4_ * fVar16,auVar93._0_4_ - auVar43._0_4_ * fVar16);
  auVar30._8_4_ = auVar93._8_4_ - auVar43._8_4_ * fVar16;
  auVar30._12_4_ = auVar93._12_4_ - auVar43._12_4_ * fVar16;
  auVar59 = NEON_ext(auVar30,auVar30,8,1);
  auVar31._8_4_ = auVar59._0_4_;
  auVar31._0_8_ = auVar30._0_8_;
  auVar31._12_4_ = 0;
  auVar93 = auVar93 ^ (auVar93 ^ auVar31) & auVar92;
  param_10[1] = auVar93._8_8_;
  *param_10 = auVar93._0_8_;
  return 1;
}


