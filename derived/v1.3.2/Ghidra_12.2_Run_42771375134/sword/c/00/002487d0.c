/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002487d0; name: FUN_002487d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002487d0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,float *param_7,undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  long lVar7;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  byte bVar39;
  byte bVar48;
  byte bVar49;
  float fVar40;
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar41;
  byte bVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint uVar64;
  float fVar65;
  uint uVar66;
  undefined8 uVar67;
  float fVar74;
  uint uVar75;
  float fVar77;
  uint uVar78;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar79;
  ulong uVar80;
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar83 [16];
  undefined8 uVar81;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar96;
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar97;
  float fVar103;
  float fVar104;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  uint uVar105;
  float fVar111;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 uVar126;
  float fVar127;
  undefined1 auVar128 [16];
  undefined8 uVar129;
  float fVar130;
  undefined8 uVar131;
  undefined8 local_1d0;
  ulong uStack_1c8;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  uint local_b4;
  float local_b0 [2];
  float local_a8 [2];
  
  local_b4 = 1;
  fVar16 = *param_4;
  fVar21 = param_4[1];
  fVar87 = param_4[2];
  fVar96 = param_4[3];
  auVar113._0_4_ = fVar16 * fVar16;
  auVar113._4_4_ = fVar21 * fVar21;
  auVar113._8_4_ = fVar87 * fVar87;
  auVar113._12_4_ = fVar96 * fVar96;
  auVar82 = NEON_ext(auVar113,auVar113,8,1);
  uVar64 = -(uint)(1.1920929e-07 < auVar113._0_4_ + auVar113._4_4_ + auVar82._0_4_ + auVar82._4_4_);
  fVar111 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar64);
  fVar130 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar21) & uVar64);
  fVar17 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar87) & uVar64);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar96) & uVar64);
  auVar120._0_4_ = fVar111 * fVar111;
  auVar120._4_4_ = fVar130 * fVar130;
  auVar120._8_4_ = fVar17 * fVar17;
  auVar120._12_4_ = fVar16 * fVar16;
  auVar82 = NEON_ext(auVar120,auVar120,8,1);
  fVar21 = auVar82._0_4_ + auVar82._4_4_;
  fVar16 = auVar120._0_4_ + auVar120._4_4_ + fVar21;
  fVar21 = auVar120._0_4_ + auVar120._4_4_ + fVar21;
  uVar9 = CONCAT44(fVar21,fVar16);
  uVar89 = NEON_frsqrte(uVar9,4);
  fVar87 = (float)uVar89;
  fVar96 = (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar87 * fVar87),uVar9,4);
  fVar87 = fVar87 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar87 * fVar87),uVar9,4);
  fVar87 = fVar87 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar87 * fVar87),uVar9,4);
  fVar87 = fVar87 * (float)uVar89;
  fVar96 = fVar96 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar96 * fVar96,fVar87 * fVar87),uVar9,4);
  uVar80 = CONCAT44(fVar21 * fVar96 * (float)((ulong)uVar89 >> 0x20),fVar16 * fVar87 * (float)uVar89
                   );
  uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar89 = NEON_frecpe(uVar80,4);
  uVar90 = NEON_frecps(uVar80,uVar89,4);
  fVar40 = (float)uVar89 * (float)uVar90;
  fVar16 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar90 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar40),4);
  fVar40 = fVar40 * (float)uVar89;
  fVar16 = fVar16 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar40),4);
  fVar40 = fVar40 * (float)uVar89;
  fVar16 = fVar16 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16,fVar40),4);
  fVar40 = fVar40 * (float)uVar89;
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar16 * (float)((ulong)uVar89 >> 0x20),fVar40),4);
  fVar40 = fVar40 * (float)uVar89;
  lVar7 = *(long *)(param_2 + 8);
  fVar65 = -(fVar111 * fVar40);
  fVar74 = -(fVar130 * fVar40);
  fVar77 = -(fVar17 * fVar40);
  fVar16 = *(float *)(lVar7 + 0x50);
  fVar21 = *(float *)(lVar7 + 0x54);
  fVar87 = *(float *)(lVar7 + 0x58);
  fVar96 = *(float *)(lVar7 + 0x5c);
  auVar106._0_4_ = *(float *)(lVar7 + 0x30) * fVar65;
  auVar106._4_4_ = *(float *)(lVar7 + 0x34) * fVar74;
  auVar106._8_4_ = *(float *)(lVar7 + 0x38) * fVar77;
  auVar106._12_4_ = *(float *)(lVar7 + 0x3c) * 0.0;
  auVar82 = NEON_ext(auVar106,auVar106,8,1);
  auVar112._0_4_ = *(float *)(lVar7 + 0x40) * fVar65;
  auVar112._4_4_ = *(float *)(lVar7 + 0x44) * fVar74;
  auVar112._8_4_ = *(float *)(lVar7 + 0x48) * fVar77;
  auVar112._12_4_ = *(float *)(lVar7 + 0x4c) * 0.0;
  auVar122._0_4_ = fVar16 * fVar65;
  auVar122._4_4_ = fVar21 * fVar74;
  auVar122._8_4_ = fVar87 * fVar77;
  auVar122._12_4_ = fVar96 * 0.0;
  auVar120 = NEON_ext(auVar112,auVar112,8,1);
  auVar121 = NEON_ext(auVar122,auVar122,8,1);
  fVar65 = auVar106._0_4_ + auVar106._4_4_ + auVar82._0_4_ + auVar82._4_4_;
  fVar74 = auVar112._0_4_ + auVar112._4_4_ + auVar120._0_4_ + auVar120._4_4_;
  fVar77 = auVar122._0_4_ + auVar122._4_4_ + auVar121._0_4_ + auVar121._4_4_;
  uVar64 = -(uint)(fVar77 < fVar74);
  uVar105 = -(uint)(fVar74 < fVar65 && fVar77 < fVar65);
  lVar8 = *(long *)(param_3 + 8);
  uVar66 = (uint)fVar16 ^ ((uint)fVar16 ^ (uint)*(float *)(lVar7 + 0x40)) & uVar64;
  uVar75 = (uint)fVar21 ^ ((uint)fVar21 ^ (uint)*(float *)(lVar7 + 0x44)) & uVar64;
  uVar78 = (uint)fVar87 ^ ((uint)fVar87 ^ (uint)*(float *)(lVar7 + 0x48)) & uVar64;
  uVar64 = (uint)fVar96 ^ ((uint)fVar96 ^ (uint)*(float *)(lVar7 + 0x4c)) & uVar64;
  local_140[0] = (float)(uVar66 ^ (uVar66 ^ (uint)*(float *)(lVar7 + 0x30)) & uVar105);
  local_140[1] = (float)(uVar75 ^ (uVar75 ^ (uint)*(float *)(lVar7 + 0x34)) & uVar105);
  local_140[2] = (float)(uVar78 ^ (uVar78 ^ (uint)*(float *)(lVar7 + 0x38)) & uVar105);
  local_140[3] = (float)(uVar64 ^ (uVar64 ^ (uint)*(float *)(lVar7 + 0x3c)) & uVar105);
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  fVar65 = -*(float *)(lVar8 + 0x30);
  fVar74 = -*(float *)(lVar8 + 0x34);
  fVar77 = -*(float *)(lVar8 + 0x38);
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
  fVar65 = (float)((uint)fVar65 ^
                  ((uint)fVar65 ^ (uint)*(float *)(lVar8 + 0x30)) & -(uint)(0.0 < fVar111 * fVar40))
  ;
  fVar74 = (float)((uint)fVar74 ^
                  ((uint)fVar74 ^ (uint)*(float *)(lVar8 + 0x34)) & -(uint)(0.0 < fVar130 * fVar40))
  ;
  fVar77 = (float)((uint)fVar77 ^
                  ((uint)fVar77 ^ (uint)*(float *)(lVar8 + 0x38)) & -(uint)(0.0 < fVar17 * fVar40));
  auVar68._8_8_ = 0xffffffffffffffff;
  auVar68._0_8_ = 0xffffffffffffffff;
  fVar16 = local_140[0] - fVar65;
  fVar21 = local_140[1] - fVar74;
  fVar87 = local_140[2] - fVar77;
  fVar96 = local_140[3] - 0.0;
  fVar40 = -fVar16;
  fVar111 = -fVar21;
  auVar82._0_8_ = CONCAT44(fVar111,fVar40);
  auVar82._8_4_ = -fVar87;
  local_100[1] = CONCAT44(fVar96,fVar87);
  local_100[0] = CONCAT44(fVar21,fVar16);
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  local_f0 = 0.0;
  fStack_ec = 0.0;
  uStack_178 = (ulong)(uint)fVar77;
  local_180 = CONCAT44(fVar74,fVar65);
  uStack_168 = 0;
  local_170 = 0;
  auVar82._12_4_ = 0;
  uVar89 = NEON_fmin(0x7f7fffff7f7fffff,
                     CONCAT44(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x18)),4);
  fVar74 = (float)uVar89 * 0.1;
  auVar121._0_4_ = fVar40 * fVar40;
  auVar121._4_4_ = fVar111 * fVar111;
  auVar121._8_4_ = auVar82._8_4_ * auVar82._8_4_;
  auVar121._12_4_ = 0;
  auVar120 = NEON_ext(auVar121,auVar121,8,1);
  fVar65 = auVar121._0_4_ + auVar121._4_4_ + auVar120._0_4_ + auVar120._4_4_;
  bVar6 = fVar74 * fVar74 < fVar65;
  auVar91._0_4_ = -(uint)bVar6;
  auVar91._4_4_ = -(uint)bVar6;
  auVar91._8_4_ = -(uint)bVar6;
  auVar91._12_4_ = -(uint)bVar6;
  NEON_ext(auVar91,auVar91,8,1);
  uStack_1c8 = (ulong)(uint)auVar82._8_4_;
  if (CONCAT13((char)auVar91._12_4_,
               CONCAT12((char)auVar91._8_4_,CONCAT11((char)auVar91._4_4_,(char)auVar91._0_4_))) ==
      -1) {
    fVar77 = *param_7 * 0.0 + *param_6;
    fVar40 = param_7[1] * 0.0 + param_6[1];
    fVar111 = param_7[2] * 0.0 + param_6[2];
    fVar130 = param_7[3] * 0.0 + param_6[3];
    auVar2._4_4_ = fVar40;
    auVar2._0_4_ = fVar77;
    auVar2._8_4_ = fVar111;
    auVar2._12_4_ = fVar130;
    auVar3._4_4_ = fVar40;
    auVar3._0_4_ = fVar77;
    auVar3._8_4_ = fVar111;
    auVar3._12_4_ = fVar130;
    auVar120 = NEON_ext(auVar2,auVar3,8,1);
    fVar111 = auVar120._0_4_;
    fVar130 = param_1 + fVar74;
    auVar58 = ZEXT816(0);
    auVar52._8_4_ = auVar82._8_4_;
    auVar52._0_8_ = auVar82._0_8_;
    auVar52._12_4_ = 0;
    local_1d0 = auVar82._0_8_;
    do {
      uVar64 = local_b4;
      fVar97 = auVar52._0_4_;
      auVar28._0_4_ = fVar97 * fVar97;
      fVar103 = auVar52._4_4_;
      auVar28._4_4_ = fVar103 * fVar103;
      fVar104 = auVar52._8_4_;
      auVar28._8_4_ = fVar104 * fVar104;
      auVar28._12_4_ = auVar52._12_4_ * auVar52._12_4_;
      auVar82 = NEON_ext(auVar28,auVar28,8,1);
      fVar22 = auVar82._0_4_ + auVar82._4_4_;
      fVar17 = auVar28._0_4_ + auVar28._4_4_ + fVar22;
      fVar22 = auVar28._0_4_ + auVar28._4_4_ + fVar22;
      uVar9 = CONCAT44(fVar22,fVar17);
      uVar90 = NEON_frsqrte(uVar9,4);
      fVar79 = (float)uVar90;
      fVar86 = (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar90;
      fVar86 = fVar86 * (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar90;
      fVar86 = fVar86 * (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar79 * fVar79),uVar9,4);
      fVar79 = fVar79 * (float)uVar90;
      fVar86 = fVar86 * (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frsqrts(CONCAT44(fVar86 * fVar86,fVar79 * fVar79),uVar9,4);
      uVar80 = CONCAT44(fVar22 * fVar86 * (float)((ulong)uVar90 >> 0x20),
                        fVar17 * fVar79 * (float)uVar90);
      uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar17 == 0.0),-(uint)(fVar17 == 0.0));
      uVar90 = NEON_frecpe(uVar80,4);
      uVar131 = NEON_frecps(uVar80,uVar90,4);
      fVar17 = (float)uVar90 * (float)uVar131;
      fVar22 = (float)((ulong)uVar90 >> 0x20) * (float)((ulong)uVar131 >> 0x20);
      uVar90 = NEON_frecps(uVar80,CONCAT44(fVar22,fVar17),4);
      fVar17 = fVar17 * (float)uVar90;
      fVar22 = fVar22 * (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frecps(uVar80,CONCAT44(fVar22,fVar17),4);
      fVar17 = fVar17 * (float)uVar90;
      fVar22 = fVar22 * (float)((ulong)uVar90 >> 0x20);
      uVar90 = NEON_frecps(uVar80,CONCAT44(fVar22,fVar17),4);
      fVar17 = fVar17 * (float)uVar90;
      uVar90 = NEON_frecps(uVar80,CONCAT44(fVar22 * (float)((ulong)uVar90 >> 0x20),fVar17),4);
      fVar17 = fVar17 * (float)uVar90;
      fVar97 = fVar97 * fVar17;
      fVar103 = fVar103 * fVar17;
      fVar104 = fVar104 * fVar17;
      lVar7 = *(long *)(param_2 + 8);
      auVar82 = *(undefined1 (*) [16])(lVar7 + 0x50);
      auVar121 = *(undefined1 (*) [16])(lVar7 + 0x30);
      auVar120 = *(undefined1 (*) [16])(lVar7 + 0x40);
      auVar92._0_4_ = auVar121._0_4_ * fVar97;
      auVar92._4_4_ = auVar121._4_4_ * fVar103;
      auVar92._8_4_ = auVar121._8_4_ * fVar104;
      auVar92._12_4_ = auVar121._12_4_ * 0.0;
      auVar113 = NEON_ext(auVar92,auVar92,8,1);
      auVar114._0_4_ = auVar120._0_4_ * fVar97;
      auVar114._4_4_ = auVar120._4_4_ * fVar103;
      auVar114._8_4_ = auVar120._8_4_ * fVar104;
      auVar114._12_4_ = auVar120._12_4_ * 0.0;
      auVar122 = NEON_ext(auVar114,auVar114,8,1);
      fVar17 = auVar92._0_4_ + auVar92._4_4_ + auVar113._0_4_ + auVar113._4_4_;
      auVar123._0_4_ = auVar82._0_4_ * fVar97;
      auVar123._4_4_ = auVar82._4_4_ * fVar103;
      auVar123._8_4_ = auVar82._8_4_ * fVar104;
      auVar123._12_4_ = auVar82._12_4_ * 0.0;
      auVar113 = NEON_ext(auVar123,auVar123,8,1);
      fVar22 = auVar114._0_4_ + auVar114._4_4_ + auVar122._0_4_ + auVar122._4_4_;
      fVar79 = auVar123._0_4_ + auVar123._4_4_ + auVar113._0_4_ + auVar113._4_4_;
      auVar115._0_4_ = -(uint)(fVar79 < fVar22);
      iVar41 = -(uint)(fVar79 < fVar17 && fVar22 < fVar17);
      auVar115._4_4_ = auVar115._0_4_;
      auVar115._8_4_ = auVar115._0_4_;
      auVar115._12_4_ = auVar115._0_4_;
      auVar82 = auVar82 ^ (auVar82 ^ auVar120) & auVar115;
      auVar69._4_4_ = iVar41;
      auVar69._0_4_ = iVar41;
      auVar69._8_4_ = iVar41;
      auVar69._12_4_ = iVar41;
      auVar82 = auVar82 ^ (auVar82 ^ auVar121) & auVar69;
      auVar83._0_4_ = -(uint)(0.0 < -fVar97);
      auVar83._4_4_ = -(uint)(0.0 < -fVar103);
      auVar83._8_4_ = -(uint)(0.0 < -fVar104);
      auVar83._12_4_ = 0;
      auVar120 = *(undefined1 (*) [16])(lVar8 + 0x30);
      auVar84._0_4_ = -auVar120._0_4_;
      auVar84._4_4_ = -auVar120._4_4_;
      auVar84._8_4_ = -auVar120._8_4_;
      auVar84._12_4_ = 0;
      auVar84 = auVar84 ^ (auVar84 ^ auVar120) & auVar83;
      auVar93._0_4_ = fVar77 + auVar84._0_4_;
      auVar93._4_4_ = fVar40 + auVar84._4_4_;
      auVar93._8_4_ = fVar111 + auVar84._8_4_;
      auVar93._12_4_ = auVar84._12_4_ + 0.0;
      auVar32._0_4_ = auVar82._0_4_ - auVar93._0_4_;
      auVar32._4_4_ = auVar82._4_4_ - auVar93._4_4_;
      auVar32._8_4_ = auVar82._8_4_ - auVar93._8_4_;
      auVar32._12_4_ = auVar82._12_4_ - auVar93._12_4_;
      auVar107._0_4_ = fVar97 * -auVar32._0_4_;
      auVar107._4_4_ = fVar103 * -auVar32._4_4_;
      auVar107._8_4_ = fVar104 * -auVar32._8_4_;
      auVar107._12_4_ = 0;
      auVar120 = NEON_ext(auVar107,auVar107,8,1);
      fVar22 = auVar120._0_4_ + auVar120._4_4_;
      fVar79 = (auVar107._0_4_ + auVar107._4_4_ + fVar22) - fVar130;
      uVar90 = auVar58._8_8_;
      fVar17 = fVar65;
      if (fVar79 <= 0.0) {
        uVar131 = auVar58._0_8_;
      }
      else {
        auVar98._0_4_ = fVar97 * *param_7;
        auVar98._4_4_ = fVar103 * param_7[1];
        auVar98._8_4_ = fVar104 * param_7[2];
        auVar98._12_4_ = param_7[3] * 0.0;
        auVar120 = NEON_ext(auVar98,auVar98,8,1);
        fVar97 = auVar120._0_4_ + auVar120._4_4_;
        fVar65 = auVar98._0_4_ + auVar98._4_4_ + fVar97;
        uVar90 = CONCAT44(auVar98._0_4_ + auVar98._4_4_ + fVar97,fVar65);
        if (0.0 <= fVar65) {
          return 0;
        }
        uVar131 = NEON_frecpe(uVar90,4);
        uVar126 = NEON_frecps(uVar90,uVar131,4);
        fVar65 = (float)uVar131 * (float)uVar126;
        fVar97 = (float)((ulong)uVar131 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
        uVar131 = NEON_frecps(uVar90,CONCAT44(fVar97,fVar65),4);
        fVar65 = fVar65 * (float)uVar131;
        fVar97 = fVar97 * (float)((ulong)uVar131 >> 0x20);
        uVar131 = NEON_frecps(uVar90,CONCAT44(fVar97,fVar65),4);
        fVar65 = fVar65 * (float)uVar131;
        fVar97 = fVar97 * (float)((ulong)uVar131 >> 0x20);
        uVar131 = NEON_frecps(uVar90,CONCAT44(fVar97,fVar65),4);
        fVar65 = fVar65 * (float)uVar131;
        fVar97 = fVar97 * (float)((ulong)uVar131 >> 0x20);
        uVar90 = NEON_frecps(uVar90,CONCAT44(fVar97,fVar65),4);
        fVar65 = auVar58._0_4_ - fVar79 * fVar65 * (float)uVar90;
        uVar131 = CONCAT44(auVar58._4_4_ -
                           ((auVar107._0_4_ + auVar107._4_4_ + fVar22) -
                           (param_1 + (float)((ulong)uVar89 >> 0x20) * 0.1)) *
                           fVar97 * (float)((ulong)uVar90 >> 0x20),fVar65);
        uVar90 = 0;
        if (auVar58._0_4_ < fVar65) {
          uVar126 = NEON_fmov(0x3f800000,4);
          if ((float)uVar126 < fVar65) {
            return 0;
          }
          auVar43._0_4_ = *param_7 * fVar65 + *param_6;
          auVar43._4_4_ = param_7[1] * fVar65 + param_6[1];
          auVar43._8_4_ = param_7[2] * fVar65 + param_6[2];
          auVar43._12_4_ = param_7[3] * fVar65 + param_6[3];
          auVar120 = NEON_ext(auVar43,auVar43,8,1);
          fVar65 = auVar120._0_4_;
          auVar93._0_4_ = auVar84._0_4_ + auVar43._0_4_;
          auVar93._4_4_ = auVar84._4_4_ + auVar43._4_4_;
          auVar93._8_4_ = auVar84._8_4_ + fVar65;
          auVar93._12_4_ = auVar84._12_4_ + 0.0;
          fVar77 = auVar43._0_4_ - fVar77;
          fVar40 = auVar43._4_4_ - fVar40;
          fVar111 = fVar65 - fVar111;
          local_170._0_4_ = (float)local_170 + fVar77;
          local_170._4_4_ = local_170._4_4_ + fVar40;
          uStack_168._0_4_ = (float)uStack_168 + fVar111;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_180._0_4_ = (float)local_180 + fVar77;
          local_180._4_4_ = local_180._4_4_ + fVar40;
          uStack_178._0_4_ = (float)uStack_178 + fVar111;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar77;
          local_160._4_4_ = local_160._4_4_ + fVar40;
          uStack_158._0_4_ = (float)uStack_158 + fVar111;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          auVar59._0_8_ = CONCAT44(local_140[1] - local_180._4_4_,local_140[0] - (float)local_180);
          auVar59._8_4_ = local_140[2] - (float)uStack_178;
          auVar59._12_4_ = local_140[3] - uStack_178._4_4_;
          auVar99._0_8_ = CONCAT44(local_120[1] - local_160._4_4_,local_120[0] - (float)local_160);
          auVar99._8_4_ = local_120[2] - (float)uStack_158;
          auVar99._12_4_ = local_120[3] - uStack_158._4_4_;
          auVar32._0_4_ = auVar82._0_4_ - auVar93._0_4_;
          auVar32._4_4_ = auVar82._4_4_ - auVar93._4_4_;
          auVar32._8_4_ = auVar82._8_4_ - auVar93._8_4_;
          auVar32._12_4_ = auVar82._12_4_ - auVar93._12_4_;
          local_100[1] = auVar59._8_8_;
          local_100[0] = auVar59._0_8_;
          fStack_e8 = (float)uStack_128 - (float)uStack_168;
          fStack_e4 = uStack_128._4_4_ - uStack_168._4_4_;
          local_f0 = (float)local_130 - (float)local_170;
          fStack_ec = local_130._4_4_ - local_170._4_4_;
          uStack_d8 = auVar99._8_8_;
          local_e0 = auVar99._0_8_;
          fVar77 = auVar43._0_4_;
          fVar40 = auVar43._4_4_;
          fVar111 = fVar65;
          local_1d0 = auVar52._0_8_;
          uStack_1c8 = auVar52._8_8_;
          fVar17 = 3.4028235e+38;
        }
      }
      uVar9 = (ulong)local_b4;
      bVar6 = local_b4 == 3;
      local_b4 = local_b4 + 1;
      local_100[uVar9 * 2 + -7] = auVar82._8_8_;
      local_100[uVar9 * 2 + -8] = auVar82._0_8_;
      local_100[uVar9 * 2 + -0xf] = auVar93._8_8_;
      local_100[uVar9 * 2 + -0x10] = auVar93._0_8_;
      local_100[uVar9 * 2 + 1] = auVar32._8_8_;
      local_100[uVar9 * 2] = auVar32._0_8_;
      if (bVar6) {
        auVar32 = FUN_00237120(local_100,local_140,&local_180,&local_b4);
      }
      else {
        fVar65 = (float)local_100[0];
        fVar22 = (float)((ulong)local_100[0] >> 0x20);
        fVar79 = (float)local_100[1];
        fVar97 = (float)((ulong)local_100[1] >> 0x20);
        if (uVar64 == 2) {
          auVar32._8_8_ = local_100[1];
          auVar32._0_8_ = local_100[0];
          auVar4._4_4_ = fStack_ec;
          auVar4._0_4_ = local_f0;
          auVar4._8_4_ = fStack_e8;
          auVar4._12_4_ = fStack_e4;
          auVar5._8_8_ = uStack_d8;
          auVar5._0_8_ = local_e0;
          auVar70._0_4_ = local_f0 - fVar65;
          auVar70._4_4_ = fStack_ec - fVar22;
          auVar70._8_4_ = fStack_e8 - fVar79;
          auVar70._12_4_ = fStack_e4 - fVar97;
          fVar86 = (float)local_e0;
          auVar62._0_4_ = fVar86 - fVar65;
          fVar51 = (float)((ulong)local_e0 >> 0x20);
          auVar62._4_4_ = fVar51 - fVar22;
          fVar18 = (float)uStack_d8;
          auVar62._8_4_ = fVar18 - fVar79;
          fVar23 = (float)((ulong)uStack_d8 >> 0x20);
          auVar62._12_4_ = fVar23 - fVar97;
          auVar82 = NEON_ext(auVar70,auVar70,8,1);
          auVar120 = NEON_ext(auVar62,auVar62,8,1);
          fVar88 = auVar70._0_4_ * auVar62._4_4_ - auVar70._4_4_ * auVar62._0_4_;
          uVar126 = NEON_ext(CONCAT44(auVar70._4_4_ * auVar62._8_4_ - auVar70._8_4_ * auVar62._4_4_,
                                      fVar88),
                             CONCAT44(auVar82._4_4_ * auVar62._4_4_ - auVar70._4_4_ * auVar120._4_4_
                                      ,auVar82._0_4_ * auVar62._0_4_ -
                                       auVar70._0_4_ * auVar120._0_4_),4,1);
          fVar76 = (float)uVar126;
          auVar94._0_4_ = fVar76 * fVar76;
          fVar19 = (float)((ulong)uVar126 >> 0x20);
          auVar94._4_4_ = fVar19 * fVar19;
          auVar94._8_4_ = fVar88 * fVar88;
          auVar94._12_4_ = 0;
          auVar82 = NEON_ext(auVar94,auVar94,8,1);
          fVar104 = auVar82._0_4_ + auVar82._4_4_;
          fVar103 = auVar94._0_4_ + auVar94._4_4_ + fVar104;
          uVar126 = CONCAT44(auVar94._0_4_ + auVar94._4_4_ + fVar104,fVar103);
          local_b4 = 3;
          if (1.1920929e-07 < fVar103) {
            if (fVar103 != 0.0) {
              auVar82 = NEON_ext(auVar4,auVar4,8,1);
              auVar120 = NEON_ext(auVar5,auVar5,8,1);
              fVar127 = local_f0 * fVar51 - fStack_ec * fVar86;
              auVar121 = NEON_ext(auVar32,auVar32,8,1);
              uVar81 = NEON_ext(CONCAT44(fStack_ec * fVar18 - fStack_e8 * fVar51,fVar127),
                                CONCAT44(auVar82._4_4_ * fVar51 - fStack_ec * auVar120._4_4_,
                                         auVar82._0_4_ * fVar86 - local_f0 * auVar120._0_4_),4,1);
              fVar103 = fVar22 * fVar86 - fVar65 * fVar51;
              uVar129 = NEON_ext(CONCAT44(fVar79 * fVar51 - fVar22 * fVar18,fVar103),
                                 CONCAT44(fVar22 * auVar120._4_4_ - auVar121._4_4_ * fVar51,
                                          fVar65 * auVar120._0_4_ - auVar121._0_4_ * fVar86),4,1);
              fVar104 = fVar65 * fStack_ec - fVar22 * local_f0;
              uVar67 = NEON_ext(CONCAT44(fVar22 * fStack_e8 - fVar79 * fStack_ec,fVar104),
                                CONCAT44(auVar121._4_4_ * fStack_ec - fVar22 * auVar82._4_4_,
                                         auVar121._0_4_ * local_f0 - fVar65 * auVar82._0_4_),4,1);
              auVar108._0_4_ = (float)uVar81 * fVar76;
              auVar108._4_4_ = (float)((ulong)uVar81 >> 0x20) * fVar19;
              auVar108._8_4_ = fVar127 * fVar88;
              auVar108._12_4_ = 0;
              auVar82 = NEON_ext(auVar108,auVar108,8,1);
              auVar116._0_4_ = (float)uVar129 * fVar76;
              auVar116._4_4_ = (float)((ulong)uVar129 >> 0x20) * fVar19;
              auVar116._8_4_ = fVar103 * fVar88;
              auVar116._12_4_ = 0;
              auVar120 = NEON_ext(auVar116,auVar116,8,1);
              fVar103 = auVar108._0_4_ + auVar108._4_4_ + auVar82._0_4_ + auVar82._4_4_;
              auVar124._0_4_ = (float)uVar67 * fVar76;
              auVar124._4_4_ = (float)((ulong)uVar67 >> 0x20) * fVar19;
              auVar124._8_4_ = fVar104 * fVar88;
              auVar124._12_4_ = 0;
              fVar104 = auVar116._0_4_ + auVar116._4_4_ + auVar120._0_4_ + auVar120._4_4_;
              auVar82 = NEON_ext(auVar124,auVar124,8,1);
              fVar127 = auVar124._0_4_ + auVar124._4_4_ + auVar82._0_4_ + auVar82._4_4_;
              bVar6 = (0.0 <= fVar103 && 0.0 <= fVar104) && 0.0 <= fVar127;
              auVar125._0_4_ = -(uint)bVar6;
              auVar125._4_4_ = -(uint)bVar6;
              auVar125._8_4_ = -(uint)bVar6;
              auVar125._12_4_ = -(uint)bVar6;
              NEON_ext(auVar125,auVar125,8,1);
              if (CONCAT13((char)auVar125._12_4_,
                           CONCAT12((char)auVar125._8_4_,
                                    CONCAT11((char)auVar125._4_4_,(char)auVar125._0_4_))) == -1) {
                auVar33._0_4_ = fVar65 * fVar76;
                auVar33._4_4_ = fVar22 * fVar19;
                auVar33._8_4_ = fVar79 * fVar88;
                auVar33._12_4_ = fVar97 * 0.0;
                auVar82 = NEON_ext(auVar33,auVar33,8,1);
                uVar67 = NEON_frecpe(uVar126,4);
                uVar81 = NEON_frecps(uVar126,uVar67,4);
                fVar65 = (float)uVar67 * (float)uVar81;
                fVar22 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
                uVar67 = NEON_frecps(uVar126,CONCAT44(fVar22,fVar65),4);
                fVar65 = fVar65 * (float)uVar67;
                fVar22 = fVar22 * (float)((ulong)uVar67 >> 0x20);
                uVar67 = NEON_frecps(uVar126,CONCAT44(fVar22,fVar65),4);
                fVar65 = fVar65 * (float)uVar67;
                fVar22 = fVar22 * (float)((ulong)uVar67 >> 0x20);
                uVar67 = NEON_frecps(uVar126,CONCAT44(fVar22,fVar65),4);
                fVar65 = fVar65 * (float)uVar67;
                uVar126 = NEON_frecps(uVar126,CONCAT44(fVar22 * (float)((ulong)uVar67 >> 0x20),
                                                       fVar65),4);
                fVar65 = (auVar33._0_4_ + auVar33._4_4_ + auVar82._0_4_ + auVar82._4_4_) *
                         fVar65 * (float)uVar126;
                auVar32._0_4_ = fVar76 * fVar65;
                auVar32._4_4_ = fVar19 * fVar65;
                auVar32._8_4_ = fVar88 * fVar65;
                auVar32._12_4_ = 0.0;
              }
              else {
                auVar85._0_4_ = -fVar65 * auVar70._0_4_;
                auVar85._4_4_ = -fVar22 * auVar70._4_4_;
                auVar85._8_4_ = -fVar79 * auVar70._8_4_;
                auVar85._12_4_ = auVar70._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar85,auVar85,8,1);
                fVar88 = auVar82._0_4_ + auVar82._4_4_;
                auVar95._0_4_ = -local_f0 * auVar70._0_4_;
                auVar95._4_4_ = -fStack_ec * auVar70._4_4_;
                auVar95._8_4_ = -fStack_e8 * auVar70._8_4_;
                auVar95._12_4_ = auVar70._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar95,auVar95,8,1);
                fVar24 = auVar82._0_4_ + auVar82._4_4_;
                fVar76 = auVar85._0_4_ + auVar85._4_4_ + fVar88;
                fVar19 = auVar95._0_4_ + auVar95._4_4_ + fVar24;
                fVar24 = auVar95._0_4_ + auVar95._4_4_ + fVar24;
                bVar6 = (0.0 <= fVar76 && fVar127 <= 0.0) && fVar19 <= 0.0;
                auVar117._0_4_ = -(uint)bVar6;
                auVar117._4_4_ = -(uint)bVar6;
                auVar117._8_4_ = -(uint)bVar6;
                auVar117._12_4_ = -(uint)bVar6;
                NEON_ext(auVar117,auVar117,8,1);
                if (CONCAT13((char)auVar117._12_4_,
                             CONCAT12((char)auVar117._8_4_,
                                      CONCAT11((char)auVar117._4_4_,(char)auVar117._0_4_))) == -1) {
                  uVar126 = CONCAT44((auVar85._0_4_ + auVar85._4_4_ + fVar88) - fVar24,
                                     fVar76 - fVar19);
                  uVar67 = NEON_frecpe(uVar126,4);
                  uVar81 = NEON_frecps(uVar126,uVar67,4);
                  fVar103 = (float)uVar67 * (float)uVar81;
                  fVar104 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
                  uVar67 = NEON_frecps(uVar126,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar67;
                  fVar104 = fVar104 * (float)((ulong)uVar67 >> 0x20);
                  uVar67 = NEON_frecps(uVar126,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar67;
                  fVar104 = fVar104 * (float)((ulong)uVar67 >> 0x20);
                  uVar67 = NEON_frecps(uVar126,CONCAT44(fVar104,fVar103),4);
                  fVar103 = fVar103 * (float)uVar67;
                  uVar126 = NEON_frecps(uVar126,CONCAT44(fVar104 * (float)((ulong)uVar67 >> 0x20),
                                                         fVar103),4);
                  fVar76 = fVar76 * (float)(-(uint)(1.1920929e-07 < ABS(fVar76 - fVar19)) &
                                           (uint)(fVar103 * (float)uVar126));
                  puVar10 = &local_180;
                  pfVar11 = local_140;
                  auVar34._0_8_ =
                       CONCAT44(fVar22 + auVar70._4_4_ * fVar76,fVar65 + auVar70._0_4_ * fVar76);
                  auVar34._8_4_ = fVar79 + auVar70._8_4_ * fVar76;
                  auVar34._12_4_ = fVar97 + auVar70._12_4_ * fVar76;
                  auVar82 = NEON_ext(auVar34,auVar34,8,1);
                  pfVar12 = (float *)local_100;
                  auVar32._8_4_ = (float)auVar82._0_4_;
                  auVar32._0_8_ = auVar34._0_8_;
                  auVar32._12_4_ = 0.0;
                  local_b4 = 2;
LAB_0024932c:
                  puVar13 = &local_170;
                  pfVar14 = (float *)&local_130;
                  pfVar15 = &local_f0;
                }
                else {
                  auVar118._0_4_ = -local_f0 * auVar62._0_4_;
                  auVar118._4_4_ = -fStack_ec * auVar62._4_4_;
                  auVar118._8_4_ = -fStack_e8 * auVar62._8_4_;
                  auVar118._12_4_ = auVar62._12_4_ * 0.0;
                  auVar82 = NEON_ext(auVar118,auVar118,8,1);
                  fVar25 = auVar82._0_4_ + auVar82._4_4_;
                  auVar71._0_4_ = auVar70._0_4_ * -fVar86;
                  auVar71._4_4_ = auVar70._4_4_ * -fVar51;
                  auVar71._8_4_ = auVar70._8_4_ * -fVar18;
                  auVar71._12_4_ = auVar70._12_4_ * 0.0;
                  auVar128._0_4_ = auVar62._0_4_ * -fVar86;
                  auVar128._4_4_ = auVar62._4_4_ * -fVar51;
                  auVar128._8_4_ = auVar62._8_4_ * -fVar18;
                  auVar128._12_4_ = auVar62._12_4_ * 0.0;
                  fVar88 = auVar118._0_4_ + auVar118._4_4_ + fVar25;
                  auVar82 = NEON_ext(auVar71,auVar71,8,1);
                  fVar26 = auVar82._0_4_ + auVar82._4_4_;
                  fVar127 = auVar71._0_4_ + auVar71._4_4_ + fVar26;
                  auVar82 = NEON_ext(auVar128,auVar128,8,1);
                  fVar27 = auVar82._0_4_ + auVar82._4_4_;
                  fVar20 = auVar128._0_4_ + auVar128._4_4_ + fVar27;
                  fVar27 = auVar128._0_4_ + auVar128._4_4_ + fVar27;
                  bVar6 = (fVar19 <= fVar88 && fVar103 <= 0.0) && fVar20 <= fVar127;
                  auVar109._0_4_ = -(uint)bVar6;
                  auVar109._4_4_ = -(uint)bVar6;
                  auVar109._8_4_ = -(uint)bVar6;
                  auVar109._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar109,auVar109,8,1);
                  puVar13 = &local_160;
                  pfVar14 = local_120;
                  pfVar15 = (float *)&local_e0;
                  if (CONCAT13((char)auVar109._12_4_,
                               CONCAT12((char)auVar109._8_4_,
                                        CONCAT11((char)auVar109._4_4_,(char)auVar109._0_4_))) == -1)
                  {
                    local_b4 = 2;
                    fVar65 = (fVar88 - fVar19) + (fVar127 - fVar20);
                    uVar126 = CONCAT44(((auVar118._0_4_ + auVar118._4_4_ + fVar25) - fVar24) +
                                       ((auVar71._0_4_ + auVar71._4_4_ + fVar26) - fVar27),fVar65);
                    uVar67 = NEON_frecpe(uVar126,4);
                    uVar81 = NEON_frecps(uVar126,uVar67,4);
                    fVar22 = (float)uVar67 * (float)uVar81;
                    fVar79 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar22),4);
                    fVar22 = fVar22 * (float)uVar67;
                    fVar79 = fVar79 * (float)((ulong)uVar67 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar22),4);
                    fVar22 = fVar22 * (float)uVar67;
                    fVar79 = fVar79 * (float)((ulong)uVar67 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar22),4);
                    fVar22 = fVar22 * (float)uVar67;
                    uVar126 = NEON_frecps(uVar126,CONCAT44(fVar79 * (float)((ulong)uVar67 >> 0x20),
                                                           fVar22),4);
                    fVar65 = (fVar88 - fVar19) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar65)) &
                                    (uint)(fVar22 * (float)uVar126));
                    auVar35._0_8_ =
                         CONCAT44(fStack_ec + (fVar51 - fStack_ec) * fVar65,
                                  local_f0 + (fVar86 - local_f0) * fVar65);
                    auVar35._8_4_ = fStack_e8 + (fVar18 - fStack_e8) * fVar65;
                    auVar35._12_4_ = fStack_e4 + (fVar23 - fStack_e4) * fVar65;
                    auVar82 = NEON_ext(auVar35,auVar35,8,1);
                    auVar32._8_4_ = (float)auVar82._0_4_;
                    auVar32._0_8_ = auVar35._0_8_;
                    auVar32._12_4_ = 0.0;
                    puVar10 = &local_170;
                    pfVar11 = (float *)&local_130;
                    pfVar12 = &local_f0;
                  }
                  else {
                    auVar110._0_4_ = -fVar65 * auVar62._0_4_;
                    auVar110._4_4_ = -fVar22 * auVar62._4_4_;
                    auVar110._8_4_ = -fVar79 * auVar62._8_4_;
                    auVar110._12_4_ = auVar62._12_4_ * 0.0;
                    auVar82 = NEON_ext(auVar110,auVar110,8,1);
                    fVar86 = auVar82._0_4_ + auVar82._4_4_;
                    fVar103 = auVar110._0_4_ + auVar110._4_4_ + fVar86;
                    bVar6 = fVar20 <= 0.0 && (fVar104 <= 0.0 && 0.0 <= fVar103);
                    auVar100._0_4_ = -(uint)bVar6;
                    auVar100._4_4_ = -(uint)bVar6;
                    auVar100._8_4_ = -(uint)bVar6;
                    auVar100._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar100,auVar100,8,1);
                    if (CONCAT13((char)auVar100._12_4_,
                                 CONCAT12((char)auVar100._8_4_,
                                          CONCAT11((char)auVar100._4_4_,(char)auVar100._0_4_))) !=
                        -1) {
                      bVar6 = fVar76 <= 0.0 && fVar103 <= 0.0;
                      auVar63._0_4_ = -(uint)bVar6;
                      auVar63._4_4_ = -(uint)bVar6;
                      auVar63._8_4_ = -(uint)bVar6;
                      auVar63._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar63,auVar63,8,1);
                      if (CONCAT13((char)auVar63._12_4_,
                                   CONCAT12((char)auVar63._8_4_,
                                            CONCAT11((char)auVar63._4_4_,(char)auVar63._0_4_))) ==
                          -1) {
                        puVar10 = &local_180;
                        pfVar11 = local_140;
                        pfVar12 = (float *)local_100;
                      }
                      else {
                        bVar6 = 0.0 <= fVar19 && fVar88 <= fVar19;
                        auVar30._0_4_ = -(uint)bVar6;
                        auVar30._4_4_ = -(uint)bVar6;
                        auVar30._8_4_ = -(uint)bVar6;
                        auVar30._12_4_ = -(uint)bVar6;
                        NEON_ext(auVar30,auVar30,8,1);
                        iVar41 = CONCAT13((char)auVar30._12_4_,
                                          CONCAT12((char)auVar30._8_4_,
                                                   CONCAT11((char)auVar30._4_4_,(char)auVar30._0_4_)
                                                  ));
                        iVar57 = -(uint)(iVar41 == -1);
                        auVar31._4_4_ = iVar57;
                        auVar31._0_4_ = iVar57;
                        auVar31._8_4_ = iVar57;
                        auVar31._12_4_ = iVar57;
                        lVar7 = 0x10;
                        if (iVar41 != -1) {
                          lVar7 = 0x20;
                        }
                        auVar32 = auVar5 ^ (auVar5 ^ auVar4) & auVar31;
                        pfVar12 = (float *)((long)local_100 + lVar7);
                        pfVar11 = (float *)((long)local_100 + lVar7 + -0x40);
                        puVar10 = (undefined8 *)((long)local_100 + lVar7 + -0x80);
                      }
                      local_b4 = 1;
                      goto LAB_0024932c;
                    }
                    uVar126 = CONCAT44((auVar110._0_4_ + auVar110._4_4_ + fVar86) - fVar27,
                                       fVar103 - fVar20);
                    uVar67 = NEON_frecpe(uVar126,4);
                    uVar81 = NEON_frecps(uVar126,uVar67,4);
                    fVar104 = (float)uVar67 * (float)uVar81;
                    fVar86 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
                    fVar104 = fVar104 * (float)uVar67;
                    fVar86 = fVar86 * (float)((ulong)uVar67 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
                    fVar104 = fVar104 * (float)uVar67;
                    fVar86 = fVar86 * (float)((ulong)uVar67 >> 0x20);
                    uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
                    fVar104 = fVar104 * (float)uVar67;
                    uVar126 = NEON_frecps(uVar126,CONCAT44(fVar86 * (float)((ulong)uVar67 >> 0x20),
                                                           fVar104),4);
                    fVar103 = fVar103 * (float)(-(uint)(1.1920929e-07 < ABS(fVar103 - fVar20)) &
                                               (uint)(fVar104 * (float)uVar126));
                    auVar36._0_8_ =
                         CONCAT44(fVar22 + auVar62._4_4_ * fVar103,fVar65 + auVar62._0_4_ * fVar103)
                    ;
                    auVar36._8_4_ = fVar79 + auVar62._8_4_ * fVar103;
                    auVar36._12_4_ = fVar97 + auVar62._12_4_ * fVar103;
                    auVar82 = NEON_ext(auVar36,auVar36,8,1);
                    auVar32._8_4_ = (float)auVar82._0_4_;
                    auVar32._0_8_ = auVar36._0_8_;
                    auVar32._12_4_ = 0.0;
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
            auVar44._0_4_ = auVar70._0_4_ * auVar70._0_4_;
            auVar44._4_4_ = auVar70._4_4_ * auVar70._4_4_;
            auVar44._8_4_ = auVar70._8_4_ * auVar70._8_4_;
            auVar44._12_4_ = auVar70._12_4_ * auVar70._12_4_;
            auVar82 = NEON_ext(auVar44,auVar44,8,1);
            fVar104 = auVar82._0_4_ + auVar82._4_4_;
            fVar103 = auVar44._0_4_ + auVar44._4_4_ + fVar104;
            uVar126 = CONCAT44(auVar44._0_4_ + auVar44._4_4_ + fVar104,fVar103);
            bVar6 = fVar103 <= 1.1920929e-07;
            auVar54._0_4_ = -(uint)bVar6;
            auVar54._4_4_ = -(uint)bVar6;
            auVar54._8_4_ = -(uint)bVar6;
            auVar54._12_4_ = -(uint)bVar6;
            NEON_ext(auVar54,auVar54,8,1);
            local_b4 = 2;
            if (CONCAT13((char)auVar54._12_4_,
                         CONCAT12((char)auVar54._8_4_,
                                  CONCAT11((char)auVar54._4_4_,(char)auVar54._0_4_))) != -1) {
              auVar55._0_4_ = -fVar65 * auVar70._0_4_;
              auVar55._4_4_ = -fVar22 * auVar70._4_4_;
              auVar55._8_4_ = -fVar79 * auVar70._8_4_;
              auVar55._12_4_ = auVar70._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar55,auVar55,8,1);
              fVar103 = auVar82._0_4_ + auVar82._4_4_;
              uVar67 = NEON_frecpe(uVar126,4);
              uVar81 = NEON_frecps(uVar126,uVar67,4);
              fVar104 = (float)uVar67 * (float)uVar81;
              fVar86 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
              uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
              fVar104 = fVar104 * (float)uVar67;
              fVar86 = fVar86 * (float)((ulong)uVar67 >> 0x20);
              uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
              fVar104 = fVar104 * (float)uVar67;
              fVar86 = fVar86 * (float)((ulong)uVar67 >> 0x20);
              uVar67 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
              fVar104 = fVar104 * (float)uVar67;
              fVar86 = fVar86 * (float)((ulong)uVar67 >> 0x20);
              uVar126 = NEON_frecps(uVar126,CONCAT44(fVar86,fVar104),4);
              uVar67 = NEON_fmov(0x3f800000,4);
              uVar126 = NEON_fmin(CONCAT44((auVar55._0_4_ + auVar55._4_4_ + fVar103) *
                                           fVar86 * (float)((ulong)uVar126 >> 0x20),
                                           (auVar55._0_4_ + auVar55._4_4_ + fVar103) *
                                           fVar104 * (float)uVar126),uVar67,4);
              uVar126 = NEON_fmax(uVar126,0,4);
              fVar103 = (float)uVar126;
              fVar104 = auVar70._0_4_ * fVar103;
              fVar86 = auVar70._4_4_ * fVar103;
              fVar51 = auVar70._8_4_ * fVar103;
              fVar103 = auVar70._12_4_ * fVar103;
              goto LAB_00248ea8;
            }
LAB_00248ebc:
            auVar32._8_8_ = local_100[1];
            auVar32._0_8_ = local_100[0];
            local_b4 = 1;
          }
        }
        else if (uVar64 == 1) {
          fVar104 = local_f0 - fVar65;
          fVar86 = fStack_ec - fVar22;
          fVar51 = fStack_e8 - fVar79;
          fVar103 = fStack_e4 - fVar97;
          auVar53._0_4_ = fVar104 * fVar104;
          auVar53._4_4_ = fVar86 * fVar86;
          auVar53._8_4_ = fVar51 * fVar51;
          auVar53._12_4_ = fVar103 * fVar103;
          auVar82 = NEON_ext(auVar53,auVar53,8,1);
          fVar23 = auVar82._0_4_ + auVar82._4_4_;
          fVar18 = auVar53._0_4_ + auVar53._4_4_ + fVar23;
          uVar126 = CONCAT44(auVar53._0_4_ + auVar53._4_4_ + fVar23,fVar18);
          bVar6 = fVar18 <= 1.1920929e-07;
          auVar60._0_4_ = -(uint)bVar6;
          auVar60._4_4_ = -(uint)bVar6;
          auVar60._8_4_ = -(uint)bVar6;
          auVar60._12_4_ = -(uint)bVar6;
          NEON_ext(auVar60,auVar60,8,1);
          if (CONCAT13((char)auVar60._12_4_,
                       CONCAT12((char)auVar60._8_4_,
                                CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_))) == -1)
          goto LAB_00248ebc;
          auVar61._0_4_ = -fVar65 * fVar104;
          auVar61._4_4_ = -fVar22 * fVar86;
          auVar61._8_4_ = -fVar79 * fVar51;
          auVar61._12_4_ = fVar103 * 0.0;
          auVar82 = NEON_ext(auVar61,auVar61,8,1);
          fVar18 = auVar82._0_4_ + auVar82._4_4_;
          uVar67 = NEON_frecpe(uVar126,4);
          uVar81 = NEON_frecps(uVar126,uVar67,4);
          fVar23 = (float)uVar67 * (float)uVar81;
          fVar76 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
          uVar67 = NEON_frecps(uVar126,CONCAT44(fVar76,fVar23),4);
          fVar23 = fVar23 * (float)uVar67;
          fVar76 = fVar76 * (float)((ulong)uVar67 >> 0x20);
          uVar67 = NEON_frecps(uVar126,CONCAT44(fVar76,fVar23),4);
          fVar23 = fVar23 * (float)uVar67;
          fVar76 = fVar76 * (float)((ulong)uVar67 >> 0x20);
          uVar67 = NEON_frecps(uVar126,CONCAT44(fVar76,fVar23),4);
          fVar23 = fVar23 * (float)uVar67;
          fVar76 = fVar76 * (float)((ulong)uVar67 >> 0x20);
          uVar126 = NEON_frecps(uVar126,CONCAT44(fVar76,fVar23),4);
          uVar67 = NEON_fmov(0x3f800000,4);
          uVar126 = NEON_fmin(CONCAT44((auVar61._0_4_ + auVar61._4_4_ + fVar18) *
                                       fVar76 * (float)((ulong)uVar126 >> 0x20),
                                       (auVar61._0_4_ + auVar61._4_4_ + fVar18) *
                                       fVar23 * (float)uVar126),uVar67,4);
          uVar126 = NEON_fmax(uVar126,0,4);
          fVar18 = (float)uVar126;
          fVar104 = fVar104 * fVar18;
          fVar86 = fVar86 * fVar18;
          fVar51 = fVar51 * fVar18;
          fVar103 = fVar103 * fVar18;
LAB_00248ea8:
          auVar29._0_8_ = CONCAT44(fVar22 + fVar86,fVar65 + fVar104);
          auVar29._8_4_ = fVar79 + fVar51;
          auVar29._12_4_ = fVar97 + fVar103;
          auVar82 = NEON_ext(auVar29,auVar29,8,1);
          auVar32._8_4_ = (float)auVar82._0_4_;
          auVar32._0_8_ = auVar29._0_8_;
          auVar32._12_4_ = 0.0;
        }
      }
      fVar22 = auVar32._0_4_;
      auVar45._0_4_ = fVar22 * fVar22;
      fVar79 = auVar32._4_4_;
      auVar45._4_4_ = fVar79 * fVar79;
      fVar97 = auVar32._8_4_;
      auVar45._8_4_ = fVar97 * fVar97;
      fVar103 = auVar32._12_4_;
      auVar45._12_4_ = fVar103 * fVar103;
      auVar82 = NEON_ext(auVar45,auVar45,8,1);
      fVar65 = auVar45._0_4_ + auVar45._4_4_ + auVar82._0_4_ + auVar82._4_4_;
      iVar41 = -(uint)(fVar65 < fVar17);
      bVar6 = fVar130 * fVar130 < fVar65 && fVar65 < fVar17;
      auVar72._0_4_ = -(uint)bVar6;
      auVar72._4_4_ = -(uint)bVar6;
      auVar72._8_4_ = -(uint)bVar6;
      auVar72._12_4_ = -(uint)bVar6;
      NEON_ext(auVar72,auVar72,8,1);
      auVar52._0_4_ = -fVar22;
      auVar52._4_4_ = -fVar79;
      auVar52._8_4_ = -fVar97;
      auVar52._12_4_ = 0;
      if (CONCAT13((char)auVar72._12_4_,
                   CONCAT12((char)auVar72._8_4_,CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_)))
          != -1) goto code_r0x002493a4;
      lVar8 = *(long *)(param_3 + 8);
      auVar58._8_8_ = uVar90;
      auVar58._0_8_ = uVar131;
      fVar16 = fVar22;
      fVar21 = fVar79;
      fVar87 = fVar97;
      fVar96 = fVar103;
    } while( true );
  }
  uVar131 = 0;
  auVar32._12_4_ = fVar96;
  auVar32._8_4_ = fVar87;
  auVar32._4_4_ = fVar21;
  auVar32._0_4_ = fVar16;
  auVar52._8_4_ = auVar82._8_4_;
  auVar52._0_8_ = auVar82._0_8_;
  auVar52._12_4_ = 0;
LAB_002493b4:
  auVar102 = ZEXT816(0);
  iVar41 = -(uint)(fVar74 * fVar74 < fVar65);
  bVar39 = (byte)iVar41;
  auVar46[0] = bVar39 & auVar68[0];
  bVar48 = (byte)((uint)iVar41 >> 8);
  auVar46[1] = bVar48 & auVar68[1];
  bVar49 = (byte)((uint)iVar41 >> 0x10);
  auVar46[2] = bVar49 & auVar68[2];
  bVar50 = (byte)((uint)iVar41 >> 0x18);
  auVar46[3] = bVar50 & auVar68[3];
  auVar46[4] = bVar39 & auVar68[4];
  auVar46[5] = bVar48 & auVar68[5];
  auVar46[6] = bVar49 & auVar68[6];
  auVar46[7] = bVar50 & auVar68[7];
  auVar46[8] = bVar39 & auVar68[8];
  auVar46[9] = bVar48 & auVar68[9];
  auVar46[10] = bVar49 & auVar68[10];
  auVar46[0xb] = bVar50 & auVar68[0xb];
  auVar46[0xc] = bVar39 & auVar68[0xc];
  auVar46[0xd] = bVar48 & auVar68[0xd];
  auVar46[0xe] = bVar49 & auVar68[0xe];
  auVar46[0xf] = bVar50 & auVar68[0xf];
  auVar1._4_4_ = fVar21;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar87;
  auVar1._12_4_ = fVar96;
  auVar73._4_4_ = fVar21;
  auVar73._0_4_ = fVar16;
  auVar73._8_4_ = fVar87;
  auVar73._12_4_ = fVar96;
  auVar73 = auVar73 ^ (auVar1 ^ auVar32) & auVar68;
  auVar82 = auVar82 ^ (auVar82 ^ auVar52) & auVar46;
  fVar87 = auVar82._0_4_;
  auVar56._0_4_ = fVar87 * fVar87;
  fVar96 = auVar82._4_4_;
  auVar56._4_4_ = fVar96 * fVar96;
  fVar65 = auVar82._8_4_;
  auVar56._8_4_ = fVar65 * fVar65;
  auVar56._12_4_ = auVar82._12_4_ * auVar82._12_4_;
  auVar82 = NEON_ext(auVar56,auVar56,8,1);
  fVar21 = auVar82._0_4_ + auVar82._4_4_;
  fVar16 = auVar56._0_4_ + auVar56._4_4_ + fVar21;
  fVar21 = auVar56._0_4_ + auVar56._4_4_ + fVar21;
  uVar9 = CONCAT44(fVar21,fVar16);
  uVar89 = NEON_frsqrte(uVar9,4);
  fVar74 = (float)uVar89;
  fVar77 = (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar74 * fVar74),uVar9,4);
  fVar74 = fVar74 * (float)uVar89;
  fVar77 = fVar77 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar74 * fVar74),uVar9,4);
  fVar74 = fVar74 * (float)uVar89;
  fVar77 = fVar77 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar74 * fVar74),uVar9,4);
  fVar74 = fVar74 * (float)uVar89;
  fVar77 = fVar77 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar74 * fVar74),uVar9,4);
  uVar80 = CONCAT44(fVar21 * fVar77 * (float)((ulong)uVar89 >> 0x20),fVar16 * fVar74 * (float)uVar89
                   );
  uVar80 = uVar80 ^ (uVar80 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar89 = NEON_frecpe(uVar80,4);
  uVar90 = NEON_frecps(uVar80,uVar89,4);
  fVar16 = (float)uVar89 * (float)uVar90;
  fVar21 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar90 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar21,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar21 = fVar21 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar21,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar21 = fVar21 * (float)((ulong)uVar89 >> 0x20);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar21,fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  iVar41 = -(uint)(0.0 < (float)uVar80);
  uVar89 = NEON_frecps(uVar80,CONCAT44(fVar21 * (float)((ulong)uVar89 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar89;
  fVar87 = fVar87 * fVar16;
  fVar96 = fVar96 * fVar16;
  fVar65 = fVar65 * fVar16;
  bVar39 = (byte)iVar41;
  bVar48 = (byte)((uint)iVar41 >> 8);
  bVar49 = (byte)((uint)iVar41 >> 0x10);
  bVar50 = (byte)((uint)iVar41 >> 0x18);
  fVar16 = (float)CONCAT13(bVar50 & (byte)((uint)fVar87 >> 0x18),
                           CONCAT12(bVar49 & (byte)((uint)fVar87 >> 0x10),
                                    CONCAT11(bVar48 & (byte)((uint)fVar87 >> 8),
                                             bVar39 & SUB41(fVar87,0))));
  auVar42._0_8_ =
       CONCAT17(bVar50 & (byte)((uint)fVar96 >> 0x18),
                CONCAT16(bVar49 & (byte)((uint)fVar96 >> 0x10),
                         CONCAT15(bVar48 & (byte)((uint)fVar96 >> 8),
                                  CONCAT14(bVar39 & SUB41(fVar96,0),fVar16))));
  auVar42[8] = bVar39 & SUB41(fVar65,0);
  auVar42[9] = bVar48 & (byte)((uint)fVar65 >> 8);
  auVar42[10] = bVar49 & (byte)((uint)fVar65 >> 0x10);
  auVar42[0xb] = bVar50 & (byte)((uint)fVar65 >> 0x18);
  auVar47._0_8_ = CONCAT44(-(float)((ulong)auVar42._0_8_ >> 0x20),-fVar16);
  auVar47._8_4_ = -auVar42._8_4_;
  iVar41 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar47._12_4_ = 0;
  auVar101._0_8_ = CONCAT44(iVar41,iVar41);
  auVar101._8_4_ = iVar41;
  auVar101._12_4_ = iVar41;
  param_9[1] = (ulong)(uint)auVar47._8_4_;
  *param_9 = auVar47._0_8_;
  *param_8 = uVar131;
  uStack_188 = auVar73._8_8_;
  local_190 = auVar73._0_8_;
  if (local_b4 == 3) {
    FUN_00231940(&local_190,local_100,&local_f0,&local_e0,local_a8,local_b0);
    auVar102._0_4_ =
         local_140[0] +
         ((float)local_130 - local_140[0]) * local_a8[0] +
         (local_120[0] - local_140[0]) * local_b0[0];
    auVar102._4_4_ =
         local_140[1] +
         (local_130._4_4_ - local_140[1]) * local_a8[0] +
         (local_120[1] - local_140[1]) * local_b0[0];
    auVar102._8_4_ =
         local_140[2] +
         ((float)uStack_128 - local_140[2]) * local_a8[0] +
         (local_120[2] - local_140[2]) * local_b0[0];
    auVar102._12_4_ = local_140[3] + 0.0;
    auVar47._12_4_ = 0;
    auVar101._8_8_ = auVar101._8_8_;
  }
  else if (local_b4 == 2) {
    FUN_002318c0(&local_190,local_100,&local_f0,local_a8);
    auVar119._0_8_ =
         CONCAT44(local_140[1] + (local_130._4_4_ - local_140[1]) * local_a8[0],
                  local_140[0] + ((float)local_130 - local_140[0]) * local_a8[0]);
    auVar119._8_4_ = local_140[2] + ((float)uStack_128 - local_140[2]) * local_a8[0];
    auVar119._12_4_ = local_140[3] + (uStack_128._4_4_ - local_140[3]) * local_a8[0];
    auVar82 = NEON_ext(auVar119,auVar119,8,1);
    auVar47._12_4_ = 0;
    auVar101._8_8_ = auVar101._8_8_;
    auVar102._8_4_ = (float)auVar82._0_4_;
    auVar102._0_8_ = auVar119._0_8_;
    auVar102._12_4_ = 0.0;
  }
  else if (local_b4 == 1) {
    auVar102._4_4_ = local_140[1];
    auVar102._0_4_ = local_140[0];
    auVar102._8_4_ = local_140[2];
    auVar102._12_4_ = local_140[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar37._0_8_ =
       CONCAT44(auVar102._4_4_ - auVar47._4_4_ * fVar16,auVar102._0_4_ - auVar47._0_4_ * fVar16);
  auVar37._8_4_ = auVar102._8_4_ - auVar47._8_4_ * fVar16;
  auVar37._12_4_ = auVar102._12_4_ - auVar47._12_4_ * fVar16;
  auVar82 = NEON_ext(auVar37,auVar37,8,1);
  auVar38._8_4_ = auVar82._0_4_;
  auVar38._0_8_ = auVar37._0_8_;
  auVar38._12_4_ = 0;
  auVar102 = auVar102 ^ (auVar102 ^ auVar38) & auVar101;
  param_10[1] = auVar102._8_8_;
  *param_10 = auVar102._0_8_;
  return 1;
code_r0x002493a4:
  auVar82._8_8_ = uStack_1c8;
  auVar82._0_8_ = local_1d0;
  auVar68._4_4_ = iVar41;
  auVar68._0_4_ = iVar41;
  auVar68._8_4_ = iVar41;
  auVar68._12_4_ = iVar41;
  goto LAB_002493b4;
}


