/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e94f0; name: FUN_002e94f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e94f0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
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
  undefined1 auVar32 [16];
  byte bVar33;
  byte bVar42;
  byte bVar43;
  float fVar34;
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  int iVar35;
  byte bVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  uint uVar51;
  int iVar52;
  float fVar60;
  float fVar61;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar62;
  float fVar73;
  float fVar78;
  undefined1 auVar65 [16];
  float fVar63;
  float fVar74;
  undefined1 auVar66 [16];
  float fVar64;
  uint uVar75;
  undefined1 auVar67 [16];
  float fVar76;
  float fVar79;
  undefined1 auVar68 [16];
  float fVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  ulong uVar80;
  undefined1 auVar82 [16];
  float fVar87;
  undefined8 uVar81;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar88;
  undefined8 uVar89;
  float fVar96;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  uint uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined8 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
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
  fVar88 = param_4[2];
  fVar96 = param_4[3];
  auVar65._0_4_ = fVar16 * fVar16;
  auVar65._4_4_ = fVar18 * fVar18;
  auVar65._8_4_ = fVar88 * fVar88;
  auVar65._12_4_ = fVar96 * fVar96;
  auVar82 = NEON_ext(auVar65,auVar65,8,1);
  uVar62 = -(uint)(1.1920929e-07 < auVar65._0_4_ + auVar65._4_4_ + auVar82._0_4_ + auVar82._4_4_);
  fVar121 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar62);
  fVar122 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar18) & uVar62);
  fVar123 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar88) & uVar62);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar96) & uVar62);
  auVar114._0_4_ = fVar121 * fVar121;
  auVar114._4_4_ = fVar122 * fVar122;
  auVar114._8_4_ = fVar123 * fVar123;
  auVar114._12_4_ = fVar16 * fVar16;
  auVar82 = NEON_ext(auVar114,auVar114,8,1);
  lVar1 = *(long *)(param_2 + 8);
  pfVar11 = *(float **)(param_2 + 0x10);
  fVar18 = auVar82._0_4_ + auVar82._4_4_;
  fVar16 = auVar114._0_4_ + auVar114._4_4_ + fVar18;
  fVar18 = auVar114._0_4_ + auVar114._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar89 = NEON_frsqrte(uVar9,4);
  fVar88 = (float)uVar89;
  fVar96 = (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar88 * fVar88),uVar9,4);
  fVar88 = fVar88 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar88 * fVar88),uVar9,4);
  fVar88 = fVar88 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar88 * fVar88),uVar9,4);
  fVar88 = fVar88 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar88 * fVar88),uVar9,4);
  uVar80 = CONCAT44(fVar18 * fVar96 * (float)((ulong)uVar89 >> 0x20),fVar16 * fVar88 * (float)uVar89
                   );
  uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar89 = NEON_frecpe(uVar80,4);
  uVar90 = NEON_frecps(uVar80,uVar89,4);
  fVar34 = (float)uVar89 * (float)uVar90;
  fVar16 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar90 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar34),4);
  fVar34 = fVar34 * (float)uVar89;
  fVar16 = fVar16 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar34),4);
  fVar34 = fVar34 * (float)uVar89;
  fVar16 = fVar16 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar34),4);
  fVar34 = fVar34 * (float)uVar89;
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16 * (float)((ulong)uVar89 >> 0x20),fVar34),4);
  fVar34 = fVar34 * (float)uVar89;
  fVar96 = -(fVar121 * fVar34);
  fVar73 = -(fVar122 * fVar34);
  fVar78 = -(fVar123 * fVar34);
  fVar16 = *(float *)(lVar1 + 0x50);
  fVar18 = *(float *)(lVar1 + 0x54);
  fVar88 = *(float *)(lVar1 + 0x58);
  fVar63 = *(float *)(param_2 + 0x40) * fVar78 +
           *(float *)(param_2 + 0x20) * fVar96 + *(float *)(param_2 + 0x30) * fVar73;
  fVar74 = *(float *)(param_2 + 0x44) * fVar78 +
           *(float *)(param_2 + 0x24) * fVar96 + *(float *)(param_2 + 0x34) * fVar73;
  fVar73 = *(float *)(param_2 + 0x48) * fVar78 +
           *(float *)(param_2 + 0x28) * fVar96 + *(float *)(param_2 + 0x38) * fVar73;
  lVar8 = *(long *)(param_3 + 8);
  auVar102._0_4_ = *(float *)(lVar1 + 0x30) * fVar63;
  auVar102._4_4_ = *(float *)(lVar1 + 0x34) * fVar74;
  auVar102._8_4_ = *(float *)(lVar1 + 0x38) * fVar73;
  auVar102._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
  auVar82 = NEON_ext(auVar102,auVar102,8,1);
  fVar96 = auVar102._0_4_ + auVar102._4_4_ + auVar82._0_4_ + auVar82._4_4_;
  auVar108._0_4_ = *(float *)(lVar1 + 0x40) * fVar63;
  auVar108._4_4_ = *(float *)(lVar1 + 0x44) * fVar74;
  auVar108._8_4_ = *(float *)(lVar1 + 0x48) * fVar73;
  auVar108._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
  auVar82 = NEON_ext(auVar108,auVar108,8,1);
  auVar66._0_4_ = fVar16 * fVar63;
  auVar66._4_4_ = fVar18 * fVar74;
  auVar66._8_4_ = fVar88 * fVar73;
  auVar66._12_4_ = *(float *)(lVar1 + 0x5c) * 0.0;
  auVar114 = NEON_ext(auVar66,auVar66,8,1);
  fVar63 = auVar108._0_4_ + auVar108._4_4_ + auVar82._0_4_ + auVar82._4_4_;
  fVar73 = auVar66._0_4_ + auVar66._4_4_ + auVar114._0_4_ + auVar114._4_4_;
  uVar62 = -(uint)(fVar73 < fVar63);
  uVar101 = -(uint)(fVar63 < fVar96 && fVar73 < fVar96);
  uVar51 = (uint)fVar16 ^ ((uint)fVar16 ^ (uint)*(float *)(lVar1 + 0x40)) & uVar62;
  uVar75 = (uint)fVar18 ^ ((uint)fVar18 ^ (uint)*(float *)(lVar1 + 0x44)) & uVar62;
  uVar62 = (uint)fVar88 ^ ((uint)fVar88 ^ (uint)*(float *)(lVar1 + 0x48)) & uVar62;
  fVar16 = (float)(uVar51 ^ (uVar51 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar101);
  fVar18 = (float)(uVar75 ^ (uVar75 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar101);
  fVar88 = (float)(uVar62 ^ (uVar62 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar101);
  local_140[0] = pfVar11[0xc] + pfVar11[8] * fVar88 + *pfVar11 * fVar16 + pfVar11[4] * fVar18;
  local_140[1] = pfVar11[0xd] + pfVar11[9] * fVar88 + pfVar11[1] * fVar16 + pfVar11[5] * fVar18;
  local_140[2] = pfVar11[0xe] + pfVar11[10] * fVar88 + pfVar11[2] * fVar16 + pfVar11[6] * fVar18;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  local_140[3] = pfVar11[0xf] + 0.0;
  uStack_128 = 0;
  local_130 = 0;
  fVar16 = -*(float *)(lVar8 + 0x30);
  fVar18 = -*(float *)(lVar8 + 0x34);
  fVar88 = -*(float *)(lVar8 + 0x38);
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
  fVar16 = (float)((uint)fVar16 ^
                  ((uint)fVar16 ^ (uint)*(float *)(lVar8 + 0x30)) & -(uint)(0.0 < fVar121 * fVar34))
  ;
  fVar18 = (float)((uint)fVar18 ^
                  ((uint)fVar18 ^ (uint)*(float *)(lVar8 + 0x34)) & -(uint)(0.0 < fVar122 * fVar34))
  ;
  fVar88 = (float)((uint)fVar88 ^
                  ((uint)fVar88 ^ (uint)*(float *)(lVar8 + 0x38)) & -(uint)(0.0 < fVar123 * fVar34))
  ;
  auVar67._8_8_ = 0xffffffffffffffff;
  auVar67._0_8_ = 0xffffffffffffffff;
  fVar73 = local_140[0] - fVar16;
  fVar34 = local_140[1] - fVar18;
  fVar121 = local_140[2] - fVar88;
  fVar122 = (pfVar11[0xf] + 0.0) - 0.0;
  fVar96 = -fVar73;
  fVar63 = -fVar34;
  auVar82._0_8_ = CONCAT44(fVar63,fVar96);
  auVar82._8_4_ = -fVar121;
  local_100[1] = CONCAT44(fVar122,fVar121);
  local_100[0] = CONCAT44(fVar34,fVar73);
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  uStack_178 = (ulong)(uint)fVar88;
  local_180 = CONCAT44(fVar18,fVar16);
  uStack_168 = 0;
  local_170 = 0;
  auVar82._12_4_ = 0;
  uVar89 = NEON_fmin(0x7f7fffff7f7fffff,
                     CONCAT44(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x18)),4);
  fVar18 = (float)uVar89 * 0.1;
  auVar119._0_4_ = fVar96 * fVar96;
  auVar119._4_4_ = fVar63 * fVar63;
  auVar119._8_4_ = auVar82._8_4_ * auVar82._8_4_;
  auVar119._12_4_ = 0;
  auVar114 = NEON_ext(auVar119,auVar119,8,1);
  fVar16 = auVar119._0_4_ + auVar119._4_4_ + auVar114._0_4_ + auVar114._4_4_;
  bVar7 = fVar18 * fVar18 < fVar16;
  auVar92._0_4_ = -(uint)bVar7;
  auVar92._4_4_ = -(uint)bVar7;
  auVar92._8_4_ = -(uint)bVar7;
  auVar92._12_4_ = -(uint)bVar7;
  NEON_ext(auVar92,auVar92,8,1);
  uStack_1b8 = (ulong)(uint)auVar82._8_4_;
  if (CONCAT13((char)auVar92._12_4_,
               CONCAT12((char)auVar92._8_4_,CONCAT11((char)auVar92._4_4_,(char)auVar92._0_4_))) ==
      -1) {
    fVar74 = param_1 + fVar18;
    fVar88 = *(float *)*param_7 * 0.0 + *param_6;
    fVar96 = *(float *)(*param_7 + 4) * 0.0 + param_6[1];
    fVar63 = *(float *)(*param_7 + 8) * 0.0 + param_6[2];
    fVar123 = *(float *)(*param_7 + 0xc) * 0.0 + param_6[3];
    auVar45._8_4_ = auVar82._8_4_;
    auVar45._0_8_ = auVar82._0_8_;
    auVar45._12_4_ = 0;
    auVar3._4_4_ = fVar96;
    auVar3._0_4_ = fVar88;
    auVar3._8_4_ = fVar63;
    auVar3._12_4_ = fVar123;
    auVar4._4_4_ = fVar96;
    auVar4._0_4_ = fVar88;
    auVar4._8_4_ = fVar63;
    auVar4._12_4_ = fVar123;
    auVar114 = NEON_ext(auVar3,auVar4,8,1);
    fVar63 = auVar114._0_4_;
    uVar90 = 0;
    auVar22._12_4_ = fVar122;
    auVar22._8_4_ = fVar121;
    auVar22._4_4_ = fVar34;
    auVar22._0_4_ = fVar73;
    local_1c0 = auVar82._0_8_;
    do {
      uVar62 = local_b4;
      fVar64 = auVar45._0_4_;
      auVar53._0_4_ = fVar64 * fVar64;
      fVar76 = auVar45._4_4_;
      auVar53._4_4_ = fVar76 * fVar76;
      fVar79 = auVar45._8_4_;
      auVar53._8_4_ = fVar79 * fVar79;
      auVar53._12_4_ = auVar45._12_4_ * auVar45._12_4_;
      auVar82 = NEON_ext(auVar53,auVar53,8,1);
      lVar1 = *(long *)(param_2 + 8);
      pfVar11 = *(float **)(param_2 + 0x10);
      fVar73 = *(float *)(lVar1 + 0x50);
      fVar123 = *(float *)(lVar1 + 0x54);
      fVar78 = *(float *)(lVar1 + 0x58);
      fVar121 = auVar82._0_4_ + auVar82._4_4_;
      fVar34 = auVar53._0_4_ + auVar53._4_4_ + fVar121;
      fVar121 = auVar53._0_4_ + auVar53._4_4_ + fVar121;
      uVar9 = CONCAT44(fVar121,fVar34);
      uVar91 = NEON_frsqrte(uVar9,4);
      fVar122 = (float)uVar91;
      fVar87 = (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar122 * fVar122),uVar9,4);
      fVar122 = fVar122 * (float)uVar91;
      fVar87 = fVar87 * (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar122 * fVar122),uVar9,4);
      fVar122 = fVar122 * (float)uVar91;
      fVar87 = fVar87 * (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar122 * fVar122),uVar9,4);
      fVar122 = fVar122 * (float)uVar91;
      fVar87 = fVar87 * (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar122 * fVar122),uVar9,4);
      uVar80 = CONCAT44(fVar121 * fVar87 * (float)((ulong)uVar91 >> 0x20),
                        fVar34 * fVar122 * (float)uVar91);
      uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar34 == 0.0),-(uint)(fVar34 == 0.0));
      uVar91 = NEON_frecpe(uVar80,4);
      uVar81 = NEON_frecps(uVar80,uVar91,4);
      fVar34 = (float)uVar91 * (float)uVar81;
      fVar121 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
      uVar91 = NEON_frecps(uVar80,CONCAT44(fVar121,fVar34),4);
      fVar34 = fVar34 * (float)uVar91;
      fVar121 = fVar121 * (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frecps(uVar80,CONCAT44(fVar121,fVar34),4);
      fVar34 = fVar34 * (float)uVar91;
      fVar121 = fVar121 * (float)((ulong)uVar91 >> 0x20);
      uVar91 = NEON_frecps(uVar80,CONCAT44(fVar121,fVar34),4);
      fVar34 = fVar34 * (float)uVar91;
      uVar91 = NEON_frecps(uVar80,CONCAT44(fVar121 * (float)((ulong)uVar91 >> 0x20),fVar34),4);
      fVar34 = fVar34 * (float)uVar91;
      fVar64 = fVar64 * fVar34;
      fVar76 = fVar76 * fVar34;
      fVar79 = fVar79 * fVar34;
      fVar121 = auVar22._8_4_;
      fVar122 = auVar22._12_4_;
      fVar34 = auVar22._4_4_;
      auVar83._0_4_ = -(uint)(0.0 < -fVar64);
      auVar83._4_4_ = -(uint)(0.0 < -fVar76);
      auVar83._8_4_ = -(uint)(0.0 < -fVar79);
      auVar83._12_4_ = 0;
      fVar50 = *(float *)(param_2 + 0x40) * fVar79 +
               *(float *)(param_2 + 0x20) * fVar64 + *(float *)(param_2 + 0x30) * fVar76;
      fVar60 = *(float *)(param_2 + 0x44) * fVar79 +
               *(float *)(param_2 + 0x24) * fVar64 + *(float *)(param_2 + 0x34) * fVar76;
      fVar61 = *(float *)(param_2 + 0x48) * fVar79 +
               *(float *)(param_2 + 0x28) * fVar64 + *(float *)(param_2 + 0x38) * fVar76;
      auVar109._0_4_ = *(float *)(lVar1 + 0x30) * fVar50;
      auVar109._4_4_ = *(float *)(lVar1 + 0x34) * fVar60;
      auVar109._8_4_ = *(float *)(lVar1 + 0x38) * fVar61;
      auVar109._12_4_ = *(float *)(lVar1 + 0x3c) * 0.0;
      auVar82 = NEON_ext(auVar109,auVar109,8,1);
      fVar87 = auVar109._0_4_ + auVar109._4_4_ + auVar82._0_4_ + auVar82._4_4_;
      auVar115._0_4_ = *(float *)(lVar1 + 0x40) * fVar50;
      auVar115._4_4_ = *(float *)(lVar1 + 0x44) * fVar60;
      auVar115._8_4_ = *(float *)(lVar1 + 0x48) * fVar61;
      auVar115._12_4_ = *(float *)(lVar1 + 0x4c) * 0.0;
      auVar82 = NEON_ext(auVar115,auVar115,8,1);
      auVar54._0_4_ = fVar73 * fVar50;
      auVar54._4_4_ = fVar123 * fVar60;
      auVar54._8_4_ = fVar78 * fVar61;
      auVar54._12_4_ = *(float *)(lVar1 + 0x5c) * 0.0;
      auVar114 = NEON_ext(auVar54,auVar54,8,1);
      fVar50 = auVar115._0_4_ + auVar115._4_4_ + auVar82._0_4_ + auVar82._4_4_;
      fVar60 = auVar54._0_4_ + auVar54._4_4_ + auVar114._0_4_ + auVar114._4_4_;
      uVar51 = -(uint)(fVar60 < fVar50);
      uVar107 = -(uint)(fVar50 < fVar87 && fVar60 < fVar87);
      uVar75 = (uint)fVar73 ^ ((uint)fVar73 ^ (uint)*(float *)(lVar1 + 0x40)) & uVar51;
      uVar101 = (uint)fVar123 ^ ((uint)fVar123 ^ (uint)*(float *)(lVar1 + 0x44)) & uVar51;
      uVar51 = (uint)fVar78 ^ ((uint)fVar78 ^ (uint)*(float *)(lVar1 + 0x48)) & uVar51;
      fVar73 = (float)(uVar75 ^ (uVar75 ^ (uint)*(float *)(lVar1 + 0x30)) & uVar107);
      fVar87 = (float)(uVar101 ^ (uVar101 ^ (uint)*(float *)(lVar1 + 0x34)) & uVar107);
      fVar50 = (float)(uVar51 ^ (uVar51 ^ (uint)*(float *)(lVar1 + 0x38)) & uVar107);
      auVar82 = *(undefined1 (*) [16])(*(long *)(param_3 + 8) + 0x30);
      auVar84._0_4_ = -auVar82._0_4_;
      auVar84._4_4_ = -auVar82._4_4_;
      auVar84._8_4_ = -auVar82._8_4_;
      auVar84._12_4_ = 0;
      fVar123 = pfVar11[0xc] + pfVar11[8] * fVar50 + *pfVar11 * fVar73 + pfVar11[4] * fVar87;
      fVar78 = pfVar11[0xd] + pfVar11[9] * fVar50 + pfVar11[1] * fVar73 + pfVar11[5] * fVar87;
      auVar55._0_8_ = CONCAT44(fVar78,fVar123);
      auVar55._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar50 + pfVar11[2] * fVar73 + pfVar11[6] * fVar87;
      auVar55._12_4_ = pfVar11[0xf] + 0.0;
      auVar84 = auVar84 ^ (auVar84 ^ auVar82) & auVar83;
      auVar93._0_4_ = fVar88 + auVar84._0_4_;
      auVar93._4_4_ = fVar96 + auVar84._4_4_;
      auVar93._8_4_ = fVar63 + auVar84._8_4_;
      auVar93._12_4_ = auVar84._12_4_ + 0.0;
      auVar26._0_4_ = fVar123 - auVar93._0_4_;
      auVar26._4_4_ = fVar78 - auVar93._4_4_;
      auVar26._8_4_ = auVar55._8_4_ - auVar93._8_4_;
      auVar26._12_4_ = auVar55._12_4_ - auVar93._12_4_;
      auVar97._0_4_ = fVar64 * -auVar26._0_4_;
      auVar97._4_4_ = fVar76 * -auVar26._4_4_;
      auVar97._8_4_ = fVar79 * -auVar26._8_4_;
      auVar97._12_4_ = 0;
      auVar82 = NEON_ext(auVar97,auVar97,8,1);
      fVar73 = auVar82._0_4_ + auVar82._4_4_;
      fVar87 = (auVar97._0_4_ + auVar97._4_4_ + fVar73) - fVar74;
      if (fVar87 <= 0.0) {
        fVar123 = fVar16;
      }
      else {
        auVar82 = *param_7;
        auVar68._0_4_ = fVar64 * auVar82._0_4_;
        auVar68._4_4_ = fVar76 * auVar82._4_4_;
        auVar68._8_4_ = fVar79 * auVar82._8_4_;
        auVar68._12_4_ = auVar82._12_4_ * 0.0;
        auVar114 = NEON_ext(auVar68,auVar68,8,1);
        fVar60 = auVar114._0_4_ + auVar114._4_4_;
        fVar50 = auVar68._0_4_ + auVar68._4_4_ + fVar60;
        uVar91 = CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar60,fVar50);
        if (0.0 <= fVar50) {
          return 0;
        }
        uVar81 = NEON_frecpe(uVar91,4);
        uVar113 = NEON_frecps(uVar91,uVar81,4);
        fVar60 = (float)uVar81 * (float)uVar113;
        fVar64 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
        uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
        fVar60 = fVar60 * (float)uVar81;
        fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
        uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
        fVar60 = fVar60 * (float)uVar81;
        fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
        uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
        fVar60 = fVar60 * (float)uVar81;
        fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
        uVar91 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
        fVar50 = (float)uVar90;
        fVar87 = fVar50 - fVar87 * fVar60 * (float)uVar91;
        uVar90 = CONCAT44((float)((ulong)uVar90 >> 0x20) -
                          ((auVar97._0_4_ + auVar97._4_4_ + fVar73) -
                          (param_1 + (float)((ulong)uVar89 >> 0x20) * 0.1)) *
                          fVar64 * (float)((ulong)uVar91 >> 0x20),fVar87);
        if (fVar50 < fVar87) {
          uVar91 = NEON_fmov(0x3f800000,4);
          if ((float)uVar91 < fVar87) {
            return 0;
          }
          auVar37._0_4_ = auVar82._0_4_ * fVar87 + *param_6;
          auVar37._4_4_ = auVar82._4_4_ * fVar87 + param_6[1];
          auVar37._8_4_ = auVar82._8_4_ * fVar87 + param_6[2];
          auVar37._12_4_ = auVar82._12_4_ * fVar87 + param_6[3];
          auVar82 = NEON_ext(auVar37,auVar37,8,1);
          fVar73 = auVar82._0_4_;
          fVar16 = 3.4028235e+38;
          auVar93._0_4_ = auVar84._0_4_ + auVar37._0_4_;
          auVar93._4_4_ = auVar84._4_4_ + auVar37._4_4_;
          auVar93._8_4_ = auVar84._8_4_ + fVar73;
          auVar93._12_4_ = auVar84._12_4_ + 0.0;
          fVar88 = auVar37._0_4_ - fVar88;
          fVar96 = auVar37._4_4_ - fVar96;
          fVar63 = fVar73 - fVar63;
          local_170._0_4_ = (float)local_170 + fVar88;
          local_170._4_4_ = local_170._4_4_ + fVar96;
          uStack_168._0_4_ = (float)uStack_168 + fVar63;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_180._0_4_ = (float)local_180 + fVar88;
          local_180._4_4_ = local_180._4_4_ + fVar96;
          uStack_178._0_4_ = (float)uStack_178 + fVar63;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar88;
          local_160._4_4_ = local_160._4_4_ + fVar96;
          uStack_158._0_4_ = (float)uStack_158 + fVar63;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          auVar85._0_8_ = CONCAT44(local_140[1] - local_180._4_4_,local_140[0] - (float)local_180);
          auVar85._8_4_ = local_140[2] - (float)uStack_178;
          auVar85._12_4_ = local_140[3] - uStack_178._4_4_;
          auVar26._0_4_ = fVar123 - auVar93._0_4_;
          auVar26._4_4_ = fVar78 - auVar93._4_4_;
          auVar26._8_4_ = auVar55._8_4_ - auVar93._8_4_;
          auVar26._12_4_ = auVar55._12_4_ - auVar93._12_4_;
          local_100[1] = auVar85._8_8_;
          local_100[0] = auVar85._0_8_;
          fStack_e8 = (float)uStack_128 - (float)uStack_168;
          fStack_e4 = uStack_128._4_4_ - uStack_168._4_4_;
          local_f0 = (float)local_130 - (float)local_170;
          fStack_ec = local_130._4_4_ - local_170._4_4_;
          fStack_d8 = local_120[2] - (float)uStack_158;
          fStack_d4 = local_120[3] - uStack_158._4_4_;
          local_e0 = local_120[0] - (float)local_160;
          fStack_dc = local_120[1] - local_160._4_4_;
          fVar88 = auVar37._0_4_;
          fVar96 = auVar37._4_4_;
          fVar63 = fVar73;
          local_1c0 = auVar45._0_8_;
          uStack_1b8 = auVar45._8_8_;
        }
        fVar123 = fVar16;
      }
      uVar9 = (ulong)local_b4;
      bVar7 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_100[uVar9 * 2 + -7] = auVar55._8_8_;
      local_100[uVar9 * 2 + -8] = auVar55._0_8_;
      local_100[uVar9 * 2 + -0xf] = auVar93._8_8_;
      local_100[uVar9 * 2 + -0x10] = auVar93._0_8_;
      local_100[uVar9 * 2 + 1] = auVar26._8_8_;
      local_100[uVar9 * 2] = auVar26._0_8_;
      if (bVar7) {
        auVar26 = FUN_00237120(local_100,local_140,&local_180,&local_b4);
      }
      else {
        fVar16 = (float)local_100[0];
        fVar73 = (float)((ulong)local_100[0] >> 0x20);
        fVar78 = (float)local_100[1];
        fVar87 = (float)((ulong)local_100[1] >> 0x20);
        if (uVar62 == 2) {
          auVar26._8_8_ = local_100[1];
          auVar26._0_8_ = local_100[0];
          auVar5._4_4_ = fStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = fStack_e8;
          auVar5._12_4_ = fStack_e4;
          auVar6._4_4_ = fStack_dc;
          auVar6._0_4_ = local_e0;
          auVar6._8_4_ = fStack_d8;
          auVar6._12_4_ = fStack_d4;
          auVar69._0_4_ = local_f0 - fVar16;
          auVar69._4_4_ = fStack_ec - fVar73;
          auVar69._8_4_ = fStack_e8 - fVar78;
          auVar69._12_4_ = fStack_e4 - fVar87;
          auVar58._0_4_ = local_e0 - fVar16;
          auVar58._4_4_ = fStack_dc - fVar73;
          auVar58._8_4_ = fStack_d8 - fVar78;
          auVar58._12_4_ = fStack_d4 - fVar87;
          auVar82 = NEON_ext(auVar69,auVar69,8,1);
          auVar114 = NEON_ext(auVar58,auVar58,8,1);
          fVar79 = auVar69._0_4_ * auVar58._4_4_ - auVar69._4_4_ * auVar58._0_4_;
          uVar91 = NEON_ext(CONCAT44(auVar69._4_4_ * auVar58._8_4_ - auVar69._8_4_ * auVar58._4_4_,
                                     fVar79),
                            CONCAT44(auVar82._4_4_ * auVar58._4_4_ - auVar69._4_4_ * auVar114._4_4_,
                                     auVar82._0_4_ * auVar58._0_4_ - auVar69._0_4_ * auVar114._0_4_)
                            ,4,1);
          fVar64 = (float)uVar91;
          auVar94._0_4_ = fVar64 * fVar64;
          fVar76 = (float)((ulong)uVar91 >> 0x20);
          auVar94._4_4_ = fVar76 * fVar76;
          auVar94._8_4_ = fVar79 * fVar79;
          auVar94._12_4_ = 0;
          auVar82 = NEON_ext(auVar94,auVar94,8,1);
          fVar60 = auVar82._0_4_ + auVar82._4_4_;
          fVar50 = auVar94._0_4_ + auVar94._4_4_ + fVar60;
          uVar91 = CONCAT44(auVar94._0_4_ + auVar94._4_4_ + fVar60,fVar50);
          local_b4 = 3;
          if (1.1920929e-07 < fVar50) {
            if (fVar50 != 0.0) {
              auVar82 = NEON_ext(auVar5,auVar5,8,1);
              auVar114 = NEON_ext(auVar6,auVar6,8,1);
              fVar61 = local_f0 * fStack_dc - fStack_ec * local_e0;
              auVar119 = NEON_ext(auVar26,auVar26,8,1);
              uVar113 = NEON_ext(CONCAT44(fStack_ec * fStack_d8 - fStack_e8 * fStack_dc,fVar61),
                                 CONCAT44(auVar82._4_4_ * fStack_dc - fStack_ec * auVar114._4_4_,
                                          auVar82._0_4_ * local_e0 - local_f0 * auVar114._0_4_),4,1)
              ;
              fVar50 = fVar73 * local_e0 - fVar16 * fStack_dc;
              uVar120 = NEON_ext(CONCAT44(fVar78 * fStack_dc - fVar73 * fStack_d8,fVar50),
                                 CONCAT44(fVar73 * auVar114._4_4_ - auVar119._4_4_ * fStack_dc,
                                          fVar16 * auVar114._0_4_ - auVar119._0_4_ * local_e0),4,1);
              fVar60 = fVar16 * fStack_ec - fVar73 * local_f0;
              uVar81 = NEON_ext(CONCAT44(fVar73 * fStack_e8 - fVar78 * fStack_ec,fVar60),
                                CONCAT44(auVar119._4_4_ * fStack_ec - fVar73 * auVar82._4_4_,
                                         auVar119._0_4_ * local_f0 - fVar16 * auVar82._0_4_),4,1);
              auVar103._0_4_ = (float)uVar113 * fVar64;
              auVar103._4_4_ = (float)((ulong)uVar113 >> 0x20) * fVar76;
              auVar103._8_4_ = fVar61 * fVar79;
              auVar103._12_4_ = 0;
              auVar82 = NEON_ext(auVar103,auVar103,8,1);
              auVar110._0_4_ = (float)uVar120 * fVar64;
              auVar110._4_4_ = (float)((ulong)uVar120 >> 0x20) * fVar76;
              auVar110._8_4_ = fVar50 * fVar79;
              auVar110._12_4_ = 0;
              auVar114 = NEON_ext(auVar110,auVar110,8,1);
              fVar50 = auVar103._0_4_ + auVar103._4_4_ + auVar82._0_4_ + auVar82._4_4_;
              auVar116._0_4_ = (float)uVar81 * fVar64;
              auVar116._4_4_ = (float)((ulong)uVar81 >> 0x20) * fVar76;
              auVar116._8_4_ = fVar60 * fVar79;
              auVar116._12_4_ = 0;
              fVar60 = auVar110._0_4_ + auVar110._4_4_ + auVar114._0_4_ + auVar114._4_4_;
              auVar82 = NEON_ext(auVar116,auVar116,8,1);
              fVar61 = auVar116._0_4_ + auVar116._4_4_ + auVar82._0_4_ + auVar82._4_4_;
              bVar7 = (0.0 <= fVar50 && 0.0 <= fVar60) && 0.0 <= fVar61;
              auVar117._0_4_ = -(uint)bVar7;
              auVar117._4_4_ = -(uint)bVar7;
              auVar117._8_4_ = -(uint)bVar7;
              auVar117._12_4_ = -(uint)bVar7;
              NEON_ext(auVar117,auVar117,8,1);
              if (CONCAT13((char)auVar117._12_4_,
                           CONCAT12((char)auVar117._8_4_,
                                    CONCAT11((char)auVar117._4_4_,(char)auVar117._0_4_))) == -1) {
                auVar27._0_4_ = fVar16 * fVar64;
                auVar27._4_4_ = fVar73 * fVar76;
                auVar27._8_4_ = fVar78 * fVar79;
                auVar27._12_4_ = fVar87 * 0.0;
                auVar82 = NEON_ext(auVar27,auVar27,8,1);
                uVar81 = NEON_frecpe(uVar91,4);
                uVar113 = NEON_frecps(uVar91,uVar81,4);
                fVar16 = (float)uVar81 * (float)uVar113;
                fVar73 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
                uVar81 = NEON_frecps(uVar91,CONCAT44(fVar73,fVar16),4);
                fVar16 = fVar16 * (float)uVar81;
                fVar73 = fVar73 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar91,CONCAT44(fVar73,fVar16),4);
                fVar16 = fVar16 * (float)uVar81;
                fVar73 = fVar73 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar91,CONCAT44(fVar73,fVar16),4);
                fVar16 = fVar16 * (float)uVar81;
                uVar91 = NEON_frecps(uVar91,CONCAT44(fVar73 * (float)((ulong)uVar81 >> 0x20),fVar16)
                                     ,4);
                fVar16 = (auVar27._0_4_ + auVar27._4_4_ + auVar82._0_4_ + auVar82._4_4_) *
                         fVar16 * (float)uVar91;
                auVar26._0_4_ = fVar64 * fVar16;
                auVar26._4_4_ = fVar76 * fVar16;
                auVar26._8_4_ = fVar79 * fVar16;
                auVar26._12_4_ = 0.0;
              }
              else {
                auVar86._0_4_ = -fVar16 * auVar69._0_4_;
                auVar86._4_4_ = -fVar73 * auVar69._4_4_;
                auVar86._8_4_ = -fVar78 * auVar69._8_4_;
                auVar86._12_4_ = auVar69._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar86,auVar86,8,1);
                fVar79 = auVar82._0_4_ + auVar82._4_4_;
                auVar95._0_4_ = -local_f0 * auVar69._0_4_;
                auVar95._4_4_ = -fStack_ec * auVar69._4_4_;
                auVar95._8_4_ = -fStack_e8 * auVar69._8_4_;
                auVar95._12_4_ = auVar69._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar95,auVar95,8,1);
                fVar77 = auVar82._0_4_ + auVar82._4_4_;
                fVar64 = auVar86._0_4_ + auVar86._4_4_ + fVar79;
                fVar76 = auVar95._0_4_ + auVar95._4_4_ + fVar77;
                fVar77 = auVar95._0_4_ + auVar95._4_4_ + fVar77;
                bVar7 = (0.0 <= fVar64 && fVar61 <= 0.0) && fVar76 <= 0.0;
                auVar111._0_4_ = -(uint)bVar7;
                auVar111._4_4_ = -(uint)bVar7;
                auVar111._8_4_ = -(uint)bVar7;
                auVar111._12_4_ = -(uint)bVar7;
                NEON_ext(auVar111,auVar111,8,1);
                if (CONCAT13((char)auVar111._12_4_,
                             CONCAT12((char)auVar111._8_4_,
                                      CONCAT11((char)auVar111._4_4_,(char)auVar111._0_4_))) == -1) {
                  uVar91 = CONCAT44((auVar86._0_4_ + auVar86._4_4_ + fVar79) - fVar77,
                                    fVar64 - fVar76);
                  uVar81 = NEON_frecpe(uVar91,4);
                  uVar113 = NEON_frecps(uVar91,uVar81,4);
                  fVar50 = (float)uVar81 * (float)uVar113;
                  fVar60 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
                  uVar81 = NEON_frecps(uVar91,CONCAT44(fVar60,fVar50),4);
                  fVar50 = fVar50 * (float)uVar81;
                  fVar60 = fVar60 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar91,CONCAT44(fVar60,fVar50),4);
                  fVar50 = fVar50 * (float)uVar81;
                  fVar60 = fVar60 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar91,CONCAT44(fVar60,fVar50),4);
                  fVar50 = fVar50 * (float)uVar81;
                  uVar91 = NEON_frecps(uVar91,CONCAT44(fVar60 * (float)((ulong)uVar81 >> 0x20),
                                                       fVar50),4);
                  fVar64 = fVar64 * (float)(-(uint)(1.1920929e-07 < ABS(fVar64 - fVar76)) &
                                           (uint)(fVar50 * (float)uVar91));
                  puVar10 = &local_180;
                  pfVar11 = local_140;
                  auVar28._0_8_ =
                       CONCAT44(fVar73 + auVar69._4_4_ * fVar64,fVar16 + auVar69._0_4_ * fVar64);
                  auVar28._8_4_ = fVar78 + auVar69._8_4_ * fVar64;
                  auVar28._12_4_ = fVar87 + auVar69._12_4_ * fVar64;
                  auVar82 = NEON_ext(auVar28,auVar28,8,1);
                  pfVar12 = (float *)local_100;
                  auVar26._8_4_ = (float)auVar82._0_4_;
                  auVar26._0_8_ = auVar28._0_8_;
                  auVar26._12_4_ = 0.0;
                  local_b4 = 2;
LAB_002ea0ec:
                  puVar13 = &local_170;
                  pfVar14 = (float *)&local_130;
                  pfVar15 = &local_f0;
                }
                else {
                  auVar112._0_4_ = -local_f0 * auVar58._0_4_;
                  auVar112._4_4_ = -fStack_ec * auVar58._4_4_;
                  auVar112._8_4_ = -fStack_e8 * auVar58._8_4_;
                  auVar112._12_4_ = auVar58._12_4_ * 0.0;
                  auVar82 = NEON_ext(auVar112,auVar112,8,1);
                  fVar19 = auVar82._0_4_ + auVar82._4_4_;
                  auVar70._0_4_ = auVar69._0_4_ * -local_e0;
                  auVar70._4_4_ = auVar69._4_4_ * -fStack_dc;
                  auVar70._8_4_ = auVar69._8_4_ * -fStack_d8;
                  auVar70._12_4_ = auVar69._12_4_ * 0.0;
                  auVar118._0_4_ = auVar58._0_4_ * -local_e0;
                  auVar118._4_4_ = auVar58._4_4_ * -fStack_dc;
                  auVar118._8_4_ = auVar58._8_4_ * -fStack_d8;
                  auVar118._12_4_ = auVar58._12_4_ * 0.0;
                  fVar79 = auVar112._0_4_ + auVar112._4_4_ + fVar19;
                  auVar82 = NEON_ext(auVar70,auVar70,8,1);
                  fVar20 = auVar82._0_4_ + auVar82._4_4_;
                  fVar61 = auVar70._0_4_ + auVar70._4_4_ + fVar20;
                  auVar82 = NEON_ext(auVar118,auVar118,8,1);
                  fVar21 = auVar82._0_4_ + auVar82._4_4_;
                  fVar17 = auVar118._0_4_ + auVar118._4_4_ + fVar21;
                  fVar21 = auVar118._0_4_ + auVar118._4_4_ + fVar21;
                  bVar7 = (fVar76 <= fVar79 && fVar50 <= 0.0) && fVar17 <= fVar61;
                  auVar104._0_4_ = -(uint)bVar7;
                  auVar104._4_4_ = -(uint)bVar7;
                  auVar104._8_4_ = -(uint)bVar7;
                  auVar104._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar104,auVar104,8,1);
                  puVar13 = &local_160;
                  pfVar14 = local_120;
                  pfVar15 = &local_e0;
                  if (CONCAT13((char)auVar104._12_4_,
                               CONCAT12((char)auVar104._8_4_,
                                        CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1)
                  {
                    local_b4 = 2;
                    fVar16 = (fVar79 - fVar76) + (fVar61 - fVar17);
                    uVar91 = CONCAT44(((auVar112._0_4_ + auVar112._4_4_ + fVar19) - fVar77) +
                                      ((auVar70._0_4_ + auVar70._4_4_ + fVar20) - fVar21),fVar16);
                    uVar81 = NEON_frecpe(uVar91,4);
                    uVar113 = NEON_frecps(uVar91,uVar81,4);
                    fVar73 = (float)uVar81 * (float)uVar113;
                    fVar78 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar78,fVar73),4);
                    fVar73 = fVar73 * (float)uVar81;
                    fVar78 = fVar78 * (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar78,fVar73),4);
                    fVar73 = fVar73 * (float)uVar81;
                    fVar78 = fVar78 * (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar78,fVar73),4);
                    fVar73 = fVar73 * (float)uVar81;
                    uVar91 = NEON_frecps(uVar91,CONCAT44(fVar78 * (float)((ulong)uVar81 >> 0x20),
                                                         fVar73),4);
                    fVar16 = (fVar79 - fVar76) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar16)) &
                                    (uint)(fVar73 * (float)uVar91));
                    auVar29._0_8_ =
                         CONCAT44(fStack_ec + (fStack_dc - fStack_ec) * fVar16,
                                  local_f0 + (local_e0 - local_f0) * fVar16);
                    auVar29._8_4_ = fStack_e8 + (fStack_d8 - fStack_e8) * fVar16;
                    auVar29._12_4_ = fStack_e4 + (fStack_d4 - fStack_e4) * fVar16;
                    auVar82 = NEON_ext(auVar29,auVar29,8,1);
                    auVar26._8_4_ = (float)auVar82._0_4_;
                    auVar26._0_8_ = auVar29._0_8_;
                    auVar26._12_4_ = 0.0;
                    puVar10 = &local_170;
                    pfVar11 = (float *)&local_130;
                    pfVar12 = &local_f0;
                  }
                  else {
                    auVar105._0_4_ = -fVar16 * auVar58._0_4_;
                    auVar105._4_4_ = -fVar73 * auVar58._4_4_;
                    auVar105._8_4_ = -fVar78 * auVar58._8_4_;
                    auVar105._12_4_ = auVar58._12_4_ * 0.0;
                    auVar82 = NEON_ext(auVar105,auVar105,8,1);
                    fVar61 = auVar82._0_4_ + auVar82._4_4_;
                    fVar50 = auVar105._0_4_ + auVar105._4_4_ + fVar61;
                    bVar7 = fVar17 <= 0.0 && (fVar60 <= 0.0 && 0.0 <= fVar50);
                    auVar98._0_4_ = -(uint)bVar7;
                    auVar98._4_4_ = -(uint)bVar7;
                    auVar98._8_4_ = -(uint)bVar7;
                    auVar98._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar98,auVar98,8,1);
                    if (CONCAT13((char)auVar98._12_4_,
                                 CONCAT12((char)auVar98._8_4_,
                                          CONCAT11((char)auVar98._4_4_,(char)auVar98._0_4_))) != -1)
                    {
                      bVar7 = fVar64 <= 0.0 && fVar50 <= 0.0;
                      auVar59._0_4_ = -(uint)bVar7;
                      auVar59._4_4_ = -(uint)bVar7;
                      auVar59._8_4_ = -(uint)bVar7;
                      auVar59._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar59,auVar59,8,1);
                      if (CONCAT13((char)auVar59._12_4_,
                                   CONCAT12((char)auVar59._8_4_,
                                            CONCAT11((char)auVar59._4_4_,(char)auVar59._0_4_))) ==
                          -1) {
                        puVar10 = &local_180;
                        pfVar11 = local_140;
                        pfVar12 = (float *)local_100;
                      }
                      else {
                        bVar7 = 0.0 <= fVar76 && fVar79 <= fVar76;
                        auVar24._0_4_ = -(uint)bVar7;
                        auVar24._4_4_ = -(uint)bVar7;
                        auVar24._8_4_ = -(uint)bVar7;
                        auVar24._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar24,auVar24,8,1);
                        iVar35 = CONCAT13((char)auVar24._12_4_,
                                          CONCAT12((char)auVar24._8_4_,
                                                   CONCAT11((char)auVar24._4_4_,(char)auVar24._0_4_)
                                                  ));
                        iVar52 = -(uint)(iVar35 == -1);
                        auVar25._4_4_ = iVar52;
                        auVar25._0_4_ = iVar52;
                        auVar25._8_4_ = iVar52;
                        auVar25._12_4_ = iVar52;
                        lVar1 = 0x10;
                        if (iVar35 != -1) {
                          lVar1 = 0x20;
                        }
                        auVar26 = auVar6 ^ (auVar6 ^ auVar5) & auVar25;
                        pfVar12 = (float *)((long)local_100 + lVar1);
                        pfVar11 = (float *)((long)local_100 + lVar1 + -0x40);
                        puVar10 = (undefined8 *)((long)local_100 + lVar1 + -0x80);
                      }
                      local_b4 = 1;
                      goto LAB_002ea0ec;
                    }
                    uVar91 = CONCAT44((auVar105._0_4_ + auVar105._4_4_ + fVar61) - fVar21,
                                      fVar50 - fVar17);
                    uVar81 = NEON_frecpe(uVar91,4);
                    uVar113 = NEON_frecps(uVar91,uVar81,4);
                    fVar60 = (float)uVar81 * (float)uVar113;
                    fVar64 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
                    fVar60 = fVar60 * (float)uVar81;
                    fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
                    fVar60 = fVar60 * (float)uVar81;
                    fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
                    uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
                    fVar60 = fVar60 * (float)uVar81;
                    uVar91 = NEON_frecps(uVar91,CONCAT44(fVar64 * (float)((ulong)uVar81 >> 0x20),
                                                         fVar60),4);
                    fVar50 = fVar50 * (float)(-(uint)(1.1920929e-07 < ABS(fVar50 - fVar17)) &
                                             (uint)(fVar60 * (float)uVar91));
                    auVar30._0_8_ =
                         CONCAT44(fVar73 + auVar58._4_4_ * fVar50,fVar16 + auVar58._0_4_ * fVar50);
                    auVar30._8_4_ = fVar78 + auVar58._8_4_ * fVar50;
                    auVar30._12_4_ = fVar87 + auVar58._12_4_ * fVar50;
                    auVar82 = NEON_ext(auVar30,auVar30,8,1);
                    auVar26._8_4_ = (float)auVar82._0_4_;
                    auVar26._0_8_ = auVar30._0_8_;
                    auVar26._12_4_ = 0.0;
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
            auVar38._0_4_ = auVar69._0_4_ * auVar69._0_4_;
            auVar38._4_4_ = auVar69._4_4_ * auVar69._4_4_;
            auVar38._8_4_ = auVar69._8_4_ * auVar69._8_4_;
            auVar38._12_4_ = auVar69._12_4_ * auVar69._12_4_;
            auVar82 = NEON_ext(auVar38,auVar38,8,1);
            fVar60 = auVar82._0_4_ + auVar82._4_4_;
            fVar50 = auVar38._0_4_ + auVar38._4_4_ + fVar60;
            uVar91 = CONCAT44(auVar38._0_4_ + auVar38._4_4_ + fVar60,fVar50);
            bVar7 = fVar50 <= 1.1920929e-07;
            auVar47._0_4_ = -(uint)bVar7;
            auVar47._4_4_ = -(uint)bVar7;
            auVar47._8_4_ = -(uint)bVar7;
            auVar47._12_4_ = -(uint)bVar7;
            NEON_ext(auVar47,auVar47,8,1);
            local_b4 = 2;
            if (CONCAT13((char)auVar47._12_4_,
                         CONCAT12((char)auVar47._8_4_,
                                  CONCAT11((char)auVar47._4_4_,(char)auVar47._0_4_))) != -1) {
              auVar48._0_4_ = -fVar16 * auVar69._0_4_;
              auVar48._4_4_ = -fVar73 * auVar69._4_4_;
              auVar48._8_4_ = -fVar78 * auVar69._8_4_;
              auVar48._12_4_ = auVar69._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar48,auVar48,8,1);
              fVar50 = auVar82._0_4_ + auVar82._4_4_;
              uVar81 = NEON_frecpe(uVar91,4);
              uVar113 = NEON_frecps(uVar91,uVar81,4);
              fVar60 = (float)uVar81 * (float)uVar113;
              fVar64 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
              uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
              fVar60 = fVar60 * (float)uVar81;
              fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
              fVar60 = fVar60 * (float)uVar81;
              fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
              fVar60 = fVar60 * (float)uVar81;
              fVar64 = fVar64 * (float)((ulong)uVar81 >> 0x20);
              uVar91 = NEON_frecps(uVar91,CONCAT44(fVar64,fVar60),4);
              uVar81 = NEON_fmov(0x3f800000,4);
              uVar91 = NEON_fmin(CONCAT44((auVar48._0_4_ + auVar48._4_4_ + fVar50) *
                                          fVar64 * (float)((ulong)uVar91 >> 0x20),
                                          (auVar48._0_4_ + auVar48._4_4_ + fVar50) *
                                          fVar60 * (float)uVar91),uVar81,4);
              uVar91 = NEON_fmax(uVar91,0,4);
              fVar50 = (float)uVar91;
              fVar60 = auVar69._0_4_ * fVar50;
              fVar64 = auVar69._4_4_ * fVar50;
              fVar76 = auVar69._8_4_ * fVar50;
              fVar50 = auVar69._12_4_ * fVar50;
              goto LAB_002e9c68;
            }
LAB_002e9c7c:
            auVar26._8_8_ = local_100[1];
            auVar26._0_8_ = local_100[0];
            local_b4 = 1;
          }
        }
        else if (uVar62 == 1) {
          fVar60 = local_f0 - fVar16;
          fVar64 = fStack_ec - fVar73;
          fVar76 = fStack_e8 - fVar78;
          fVar50 = fStack_e4 - fVar87;
          auVar46._0_4_ = fVar60 * fVar60;
          auVar46._4_4_ = fVar64 * fVar64;
          auVar46._8_4_ = fVar76 * fVar76;
          auVar46._12_4_ = fVar50 * fVar50;
          auVar82 = NEON_ext(auVar46,auVar46,8,1);
          fVar61 = auVar82._0_4_ + auVar82._4_4_;
          fVar79 = auVar46._0_4_ + auVar46._4_4_ + fVar61;
          uVar91 = CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar61,fVar79);
          bVar7 = fVar79 <= 1.1920929e-07;
          auVar56._0_4_ = -(uint)bVar7;
          auVar56._4_4_ = -(uint)bVar7;
          auVar56._8_4_ = -(uint)bVar7;
          auVar56._12_4_ = -(uint)bVar7;
          NEON_ext(auVar56,auVar56,8,1);
          if (CONCAT13((char)auVar56._12_4_,
                       CONCAT12((char)auVar56._8_4_,
                                CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_))) == -1)
          goto LAB_002e9c7c;
          auVar57._0_4_ = -fVar16 * fVar60;
          auVar57._4_4_ = -fVar73 * fVar64;
          auVar57._8_4_ = -fVar78 * fVar76;
          auVar57._12_4_ = fVar50 * 0.0;
          auVar82 = NEON_ext(auVar57,auVar57,8,1);
          fVar79 = auVar82._0_4_ + auVar82._4_4_;
          uVar81 = NEON_frecpe(uVar91,4);
          uVar113 = NEON_frecps(uVar91,uVar81,4);
          fVar61 = (float)uVar81 * (float)uVar113;
          fVar77 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar113 >> 0x20);
          uVar81 = NEON_frecps(uVar91,CONCAT44(fVar77,fVar61),4);
          fVar61 = fVar61 * (float)uVar81;
          fVar77 = fVar77 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar91,CONCAT44(fVar77,fVar61),4);
          fVar61 = fVar61 * (float)uVar81;
          fVar77 = fVar77 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar91,CONCAT44(fVar77,fVar61),4);
          fVar61 = fVar61 * (float)uVar81;
          fVar77 = fVar77 * (float)((ulong)uVar81 >> 0x20);
          uVar91 = NEON_frecps(uVar91,CONCAT44(fVar77,fVar61),4);
          uVar81 = NEON_fmov(0x3f800000,4);
          uVar91 = NEON_fmin(CONCAT44((auVar57._0_4_ + auVar57._4_4_ + fVar79) *
                                      fVar77 * (float)((ulong)uVar91 >> 0x20),
                                      (auVar57._0_4_ + auVar57._4_4_ + fVar79) *
                                      fVar61 * (float)uVar91),uVar81,4);
          uVar91 = NEON_fmax(uVar91,0,4);
          fVar79 = (float)uVar91;
          fVar60 = fVar60 * fVar79;
          fVar64 = fVar64 * fVar79;
          fVar76 = fVar76 * fVar79;
          fVar50 = fVar50 * fVar79;
LAB_002e9c68:
          auVar23._0_8_ = CONCAT44(fVar73 + fVar64,fVar16 + fVar60);
          auVar23._8_4_ = fVar78 + fVar76;
          auVar23._12_4_ = fVar87 + fVar50;
          auVar82 = NEON_ext(auVar23,auVar23,8,1);
          auVar26._8_4_ = (float)auVar82._0_4_;
          auVar26._0_8_ = auVar23._0_8_;
          auVar26._12_4_ = 0.0;
        }
      }
      fVar73 = auVar22._0_4_;
      fVar78 = auVar26._0_4_;
      auVar39._0_4_ = fVar78 * fVar78;
      fVar87 = auVar26._4_4_;
      auVar39._4_4_ = fVar87 * fVar87;
      fVar50 = auVar26._8_4_;
      auVar39._8_4_ = fVar50 * fVar50;
      auVar39._12_4_ = auVar26._12_4_ * auVar26._12_4_;
      auVar82 = NEON_ext(auVar39,auVar39,8,1);
      fVar16 = auVar39._0_4_ + auVar39._4_4_ + auVar82._0_4_ + auVar82._4_4_;
      iVar35 = -(uint)(fVar16 < fVar123);
      bVar7 = fVar74 * fVar74 < fVar16 && fVar16 < fVar123;
      auVar71._0_4_ = -(uint)bVar7;
      auVar71._4_4_ = -(uint)bVar7;
      auVar71._8_4_ = -(uint)bVar7;
      auVar71._12_4_ = -(uint)bVar7;
      NEON_ext(auVar71,auVar71,8,1);
      auVar45._0_4_ = -fVar78;
      auVar45._4_4_ = -fVar87;
      auVar45._8_4_ = -fVar50;
      auVar45._12_4_ = 0;
      auVar22 = auVar26;
    } while (CONCAT13((char)auVar71._12_4_,
                      CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_)
                              )) == -1);
    auVar82._8_8_ = uStack_1b8;
    auVar82._0_8_ = local_1c0;
    auVar67._4_4_ = iVar35;
    auVar67._0_4_ = iVar35;
    auVar67._8_4_ = iVar35;
    auVar67._12_4_ = iVar35;
  }
  else {
    uVar90 = 0;
    auVar26._12_4_ = fVar122;
    auVar26._8_4_ = fVar121;
    auVar26._4_4_ = fVar34;
    auVar26._0_4_ = fVar73;
    auVar45._8_4_ = auVar82._8_4_;
    auVar45._0_8_ = auVar82._0_8_;
    auVar45._12_4_ = 0;
  }
  auVar100 = ZEXT816(0);
  iVar35 = -(uint)(fVar18 * fVar18 < fVar16);
  bVar33 = (byte)iVar35;
  auVar40[0] = bVar33 & auVar67[0];
  bVar42 = (byte)((uint)iVar35 >> 8);
  auVar40[1] = bVar42 & auVar67[1];
  bVar43 = (byte)((uint)iVar35 >> 0x10);
  auVar40[2] = bVar43 & auVar67[2];
  bVar44 = (byte)((uint)iVar35 >> 0x18);
  auVar40[3] = bVar44 & auVar67[3];
  auVar40[4] = bVar33 & auVar67[4];
  auVar40[5] = bVar42 & auVar67[5];
  auVar40[6] = bVar43 & auVar67[6];
  auVar40[7] = bVar44 & auVar67[7];
  auVar40[8] = bVar33 & auVar67[8];
  auVar40[9] = bVar42 & auVar67[9];
  auVar40[10] = bVar43 & auVar67[10];
  auVar40[0xb] = bVar44 & auVar67[0xb];
  auVar40[0xc] = bVar33 & auVar67[0xc];
  auVar40[0xd] = bVar42 & auVar67[0xd];
  auVar40[0xe] = bVar43 & auVar67[0xe];
  auVar40[0xf] = bVar44 & auVar67[0xf];
  auVar2._4_4_ = fVar34;
  auVar2._0_4_ = fVar73;
  auVar2._8_4_ = fVar121;
  auVar2._12_4_ = fVar122;
  auVar72._4_4_ = fVar34;
  auVar72._0_4_ = fVar73;
  auVar72._8_4_ = fVar121;
  auVar72._12_4_ = fVar122;
  auVar72 = auVar72 ^ (auVar2 ^ auVar26) & auVar67;
  auVar82 = auVar82 ^ (auVar82 ^ auVar45) & auVar40;
  fVar88 = auVar82._0_4_;
  auVar49._0_4_ = fVar88 * fVar88;
  fVar96 = auVar82._4_4_;
  auVar49._4_4_ = fVar96 * fVar96;
  fVar63 = auVar82._8_4_;
  auVar49._8_4_ = fVar63 * fVar63;
  auVar49._12_4_ = auVar82._12_4_ * auVar82._12_4_;
  auVar82 = NEON_ext(auVar49,auVar49,8,1);
  fVar18 = auVar82._0_4_ + auVar82._4_4_;
  fVar16 = auVar49._0_4_ + auVar49._4_4_ + fVar18;
  fVar18 = auVar49._0_4_ + auVar49._4_4_ + fVar18;
  uVar9 = CONCAT44(fVar18,fVar16);
  uVar89 = NEON_frsqrte(uVar9,4);
  fVar73 = (float)uVar89;
  fVar34 = (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar73 * fVar73),uVar9,4);
  fVar73 = fVar73 * (float)uVar89;
  fVar34 = fVar34 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar73 * fVar73),uVar9,4);
  fVar73 = fVar73 * (float)uVar89;
  fVar34 = fVar34 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar73 * fVar73),uVar9,4);
  fVar73 = fVar73 * (float)uVar89;
  fVar34 = fVar34 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar34 * fVar34,fVar73 * fVar73),uVar9,4);
  uVar80 = CONCAT44(fVar18 * fVar34 * (float)((ulong)uVar89 >> 0x20),fVar16 * fVar73 * (float)uVar89
                   );
  uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar89 = NEON_frecpe(uVar80,4);
  uVar91 = NEON_frecps(uVar80,uVar89,4);
  fVar16 = (float)uVar89 * (float)uVar91;
  fVar18 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar91 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar18 = fVar18 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar18 = fVar18 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar18,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  iVar35 = -(uint)(0.0 < (float)uVar80);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar18 * (float)((ulong)uVar89 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar88 = fVar88 * fVar16;
  fVar96 = fVar96 * fVar16;
  fVar63 = fVar63 * fVar16;
  bVar33 = (byte)iVar35;
  bVar42 = (byte)((uint)iVar35 >> 8);
  bVar43 = (byte)((uint)iVar35 >> 0x10);
  bVar44 = (byte)((uint)iVar35 >> 0x18);
  fVar16 = (float)CONCAT13(bVar44 & (byte)((uint)fVar88 >> 0x18),
                           CONCAT12(bVar43 & (byte)((uint)fVar88 >> 0x10),
                                    CONCAT11(bVar42 & (byte)((uint)fVar88 >> 8),
                                             bVar33 & SUB41(fVar88,0))));
  auVar36._0_8_ =
       CONCAT17(bVar44 & (byte)((uint)fVar96 >> 0x18),
                CONCAT16(bVar43 & (byte)((uint)fVar96 >> 0x10),
                         CONCAT15(bVar42 & (byte)((uint)fVar96 >> 8),
                                  CONCAT14(bVar33 & SUB41(fVar96,0),fVar16))));
  auVar36[8] = bVar33 & SUB41(fVar63,0);
  auVar36[9] = bVar42 & (byte)((uint)fVar63 >> 8);
  auVar36[10] = bVar43 & (byte)((uint)fVar63 >> 0x10);
  auVar36[0xb] = bVar44 & (byte)((uint)fVar63 >> 0x18);
  auVar41._0_8_ = CONCAT44(-(float)((ulong)auVar36._0_8_ >> 0x20),-fVar16);
  auVar41._8_4_ = -auVar36._8_4_;
  iVar35 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar41._12_4_ = 0;
  auVar99._0_8_ = CONCAT44(iVar35,iVar35);
  auVar99._8_4_ = iVar35;
  auVar99._12_4_ = iVar35;
  param_9[1] = (ulong)(uint)auVar41._8_4_;
  *param_9 = auVar41._0_8_;
  *param_8 = uVar90;
  uStack_188 = auVar72._8_8_;
  local_190 = auVar72._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_190,local_100,&local_f0,&local_e0,local_a8,local_b0);
    auVar100._0_4_ =
         local_140[0] +
         ((float)local_130 - local_140[0]) * local_a8[0] +
         (local_120[0] - local_140[0]) * local_b0[0];
    auVar100._4_4_ =
         local_140[1] +
         (local_130._4_4_ - local_140[1]) * local_a8[0] +
         (local_120[1] - local_140[1]) * local_b0[0];
    auVar100._8_4_ =
         local_140[2] +
         ((float)uStack_128 - local_140[2]) * local_a8[0] +
         (local_120[2] - local_140[2]) * local_b0[0];
    auVar100._12_4_ = local_140[3] + 0.0;
    auVar41._12_4_ = 0;
    auVar99._8_8_ = auVar99._8_8_;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_190,local_100,&local_f0,local_a8);
    auVar106._0_8_ =
         CONCAT44(local_140[1] + (local_130._4_4_ - local_140[1]) * local_a8[0],
                  local_140[0] + ((float)local_130 - local_140[0]) * local_a8[0]);
    auVar106._8_4_ = local_140[2] + ((float)uStack_128 - local_140[2]) * local_a8[0];
    auVar106._12_4_ = local_140[3] + (uStack_128._4_4_ - local_140[3]) * local_a8[0];
    auVar82 = NEON_ext(auVar106,auVar106,8,1);
    auVar41._12_4_ = 0;
    auVar99._8_8_ = auVar99._8_8_;
    auVar100._8_4_ = (float)auVar82._0_4_;
    auVar100._0_8_ = auVar106._0_8_;
    auVar100._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar100._4_4_ = local_140[1];
    auVar100._0_4_ = local_140[0];
    auVar100._8_4_ = local_140[2];
    auVar100._12_4_ = local_140[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar31._0_8_ =
       CONCAT44(auVar100._4_4_ - auVar41._4_4_ * fVar16,auVar100._0_4_ - auVar41._0_4_ * fVar16);
  auVar31._8_4_ = auVar100._8_4_ - auVar41._8_4_ * fVar16;
  auVar31._12_4_ = auVar100._12_4_ - auVar41._12_4_ * fVar16;
  auVar82 = NEON_ext(auVar31,auVar31,8,1);
  auVar32._8_4_ = auVar82._0_4_;
  auVar32._0_8_ = auVar31._0_8_;
  auVar32._12_4_ = 0;
  auVar100 = auVar100 ^ (auVar100 ^ auVar32) & auVar99;
  param_10[1] = auVar100._8_8_;
  *param_10 = auVar100._0_8_;
  return 1;
}


