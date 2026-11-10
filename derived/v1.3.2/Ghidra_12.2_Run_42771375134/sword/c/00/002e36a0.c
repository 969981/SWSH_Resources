/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e36a0; name: FUN_002e36a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e36a0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
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
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
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
  byte bVar30;
  int iVar31;
  undefined1 auVar32 [12];
  byte bVar38;
  byte bVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  byte bVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar52;
  undefined8 uVar53;
  float fVar63;
  undefined1 auVar54 [16];
  float fVar62;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar64;
  ulong uVar66;
  undefined1 auVar68 [16];
  float fVar65;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined8 uVar67;
  undefined1 auVar71 [16];
  float fVar75;
  undefined8 uVar76;
  float fVar81;
  undefined8 uVar77;
  float fVar82;
  float fVar83;
  undefined1 auVar78 [16];
  float fVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar90;
  float fVar91;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar97;
  undefined1 auVar92 [16];
  float fVar98;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  float fVar106;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined8 uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined8 uVar113;
  float fVar114;
  undefined8 uVar115;
  undefined8 local_1c0;
  ulong uStack_1b8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  float local_130 [4];
  undefined8 local_120;
  undefined8 uStack_118;
  float local_110 [8];
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint local_ac;
  float local_a8 [2];
  float local_98 [2];
  
  local_ac = 1;
  fVar16 = *param_4;
  fVar17 = param_4[1];
  fVar75 = param_4[2];
  fVar81 = param_4[3];
  auVar54._0_4_ = fVar16 * fVar16;
  auVar54._4_4_ = fVar17 * fVar17;
  auVar54._8_4_ = fVar75 * fVar75;
  auVar54._12_4_ = fVar81 * fVar81;
  auVar68 = NEON_ext(auVar54,auVar54,8,1);
  uVar52 = -(uint)(1.1920929e-07 < auVar54._0_4_ + auVar54._4_4_ + auVar68._0_4_ + auVar68._4_4_);
  fVar99 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar52);
  fVar106 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar17) & uVar52);
  fVar114 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar75) & uVar52);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar81) & uVar52);
  auVar55._0_4_ = fVar99 * fVar99;
  auVar55._4_4_ = fVar106 * fVar106;
  auVar55._8_4_ = fVar114 * fVar114;
  auVar55._12_4_ = fVar16 * fVar16;
  auVar68 = NEON_ext(auVar55,auVar55,8,1);
  lVar7 = *(long *)(param_2 + 8);
  pfVar8 = *(float **)(param_2 + 0x10);
  fVar17 = auVar68._0_4_ + auVar68._4_4_;
  fVar16 = auVar55._0_4_ + auVar55._4_4_ + fVar17;
  fVar17 = auVar55._0_4_ + auVar55._4_4_ + fVar17;
  uVar9 = CONCAT44(fVar17,fVar16);
  uVar76 = NEON_frsqrte(uVar9,4);
  fVar75 = (float)uVar76;
  fVar81 = (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar81 * fVar81,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar76;
  fVar81 = fVar81 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar81 * fVar81,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar76;
  fVar81 = fVar81 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar81 * fVar81,fVar75 * fVar75),uVar9,4);
  fVar75 = fVar75 * (float)uVar76;
  fVar81 = fVar81 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar81 * fVar81,fVar75 * fVar75),uVar9,4);
  uVar66 = CONCAT44(fVar17 * fVar81 * (float)((ulong)uVar76 >> 0x20),fVar16 * fVar75 * (float)uVar76
                   );
  uVar66 = uVar66 ^ (uVar66 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar76 = NEON_frecpe(uVar66,4);
  uVar77 = NEON_frecps(uVar66,uVar76,4);
  fVar17 = (float)uVar76 * (float)uVar77;
  fVar16 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar77 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar16,fVar17),4);
  fVar17 = fVar17 * (float)uVar76;
  fVar16 = fVar16 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar16,fVar17),4);
  fVar17 = fVar17 * (float)uVar76;
  fVar16 = fVar16 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar16,fVar17),4);
  fVar17 = fVar17 * (float)uVar76;
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar16 * (float)((ulong)uVar76 >> 0x20),fVar17),4);
  fVar17 = fVar17 * (float)uVar76;
  fVar75 = -(fVar99 * fVar17);
  fVar62 = -(fVar106 * fVar17);
  fVar63 = -(fVar114 * fVar17);
  fVar16 = *(float *)(lVar7 + 0x10);
  fVar64 = *(float *)(lVar7 + 0x30) - fVar16;
  fVar72 = *(float *)(lVar7 + 0x34) - fVar16;
  fVar16 = *(float *)(lVar7 + 0x38) - fVar16;
  fVar81 = -fVar64;
  fVar82 = -fVar72;
  fVar83 = -fVar16;
  fVar81 = (float)((uint)fVar81 ^
                  ((uint)fVar81 ^ (uint)fVar64) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar63 +
                                *(float *)(param_2 + 0x20) * fVar75 +
                                *(float *)(param_2 + 0x30) * fVar62));
  fVar82 = (float)((uint)fVar82 ^
                  ((uint)fVar82 ^ (uint)fVar72) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar63 +
                                *(float *)(param_2 + 0x24) * fVar75 +
                                *(float *)(param_2 + 0x34) * fVar62));
  fVar83 = (float)((uint)fVar83 ^
                  ((uint)fVar83 ^ (uint)fVar16) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar63 +
                                *(float *)(param_2 + 0x28) * fVar75 +
                                *(float *)(param_2 + 0x38) * fVar62));
  lVar11 = *(long *)(param_3 + 8);
  fVar16 = *(float *)(lVar11 + 0x10);
  local_130[0] = pfVar8[0xc] + pfVar8[8] * fVar83 + *pfVar8 * fVar81 + pfVar8[4] * fVar82;
  local_130[1] = pfVar8[0xd] + pfVar8[9] * fVar83 + pfVar8[1] * fVar81 + pfVar8[5] * fVar82;
  local_130[2] = pfVar8[0xe] + pfVar8[10] * fVar83 + pfVar8[2] * fVar81 + pfVar8[6] * fVar82;
  fStack_c8 = 0.0;
  fStack_c4 = 0.0;
  local_d0 = 0.0;
  fStack_cc = 0.0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_130[3] = pfVar8[0xf] + 0.0;
  uStack_118 = 0;
  local_120 = 0;
  local_110[2] = 0.0;
  local_110[3] = 0.0;
  local_110[0] = 0.0;
  local_110[1] = 0.0;
  local_110[6] = 0.0;
  local_110[7] = 0.0;
  local_110[4] = 0.0;
  local_110[5] = 0.0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  fVar75 = *(float *)(lVar11 + 0x30) - fVar16;
  fVar81 = *(float *)(lVar11 + 0x34) - fVar16;
  fVar16 = *(float *)(lVar11 + 0x38) - fVar16;
  fVar62 = -fVar75;
  fVar82 = -fVar81;
  fVar63 = -fVar16;
  fVar62 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar75) & -(uint)(0.0 < fVar99 * fVar17));
  fVar82 = (float)((uint)fVar82 ^ ((uint)fVar82 ^ (uint)fVar81) & -(uint)(0.0 < fVar106 * fVar17));
  fVar63 = (float)((uint)fVar63 ^ ((uint)fVar63 ^ (uint)fVar16) & -(uint)(0.0 < fVar114 * fVar17));
  fVar16 = local_130[0] - fVar62;
  fVar17 = local_130[1] - fVar82;
  fVar75 = local_130[2] - fVar63;
  fVar81 = (pfVar8[0xf] + 0.0) - 0.0;
  fVar99 = -fVar16;
  fVar106 = -fVar17;
  auVar68._0_8_ = CONCAT44(fVar106,fVar99);
  auVar68._8_4_ = -fVar75;
  fStack_e8 = fVar75;
  fStack_e4 = fVar81;
  local_f0._0_4_ = fVar16;
  local_f0._4_4_ = fVar17;
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_168 = (ulong)(uint)fVar63;
  local_170 = CONCAT44(fVar82,fVar62);
  uStack_158 = 0;
  local_160 = 0;
  lVar7 = *(long *)(param_2 + 8);
  auVar68._12_4_ = 0;
  uVar76 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x18)),
                     CONCAT44(*(undefined4 *)(lVar11 + 0x18),*(undefined4 *)(lVar11 + 0x18)),4);
  fVar82 = (float)uVar76 * 0.1;
  auVar112._0_4_ = fVar99 * fVar99;
  auVar112._4_4_ = fVar106 * fVar106;
  auVar112._8_4_ = auVar68._8_4_ * auVar68._8_4_;
  auVar112._12_4_ = 0;
  auVar55 = NEON_ext(auVar112,auVar112,8,1);
  fVar62 = auVar112._0_4_ + auVar112._4_4_ + auVar55._0_4_ + auVar55._4_4_;
  bVar6 = fVar82 * fVar82 < fVar62;
  auVar56._8_8_ = 0xffffffffffffffff;
  auVar56._0_8_ = 0xffffffffffffffff;
  auVar78._0_4_ = -(uint)bVar6;
  auVar78._4_4_ = -(uint)bVar6;
  auVar78._8_4_ = -(uint)bVar6;
  auVar78._12_4_ = -(uint)bVar6;
  NEON_ext(auVar78,auVar78,8,1);
  uStack_1b8 = (ulong)(uint)auVar68._8_4_;
  if (CONCAT13((char)auVar78._12_4_,
               CONCAT12((char)auVar78._8_4_,CONCAT11((char)auVar78._4_4_,(char)auVar78._0_4_))) ==
      -1) {
    fVar63 = *param_7 * 0.0 + *param_6;
    fVar99 = param_7[1] * 0.0 + param_6[1];
    fVar106 = param_7[2] * 0.0 + param_6[2];
    fVar114 = param_7[3] * 0.0 + param_6[3];
    auVar2._4_4_ = fVar99;
    auVar2._0_4_ = fVar63;
    auVar2._8_4_ = fVar106;
    auVar2._12_4_ = fVar114;
    auVar3._4_4_ = fVar99;
    auVar3._0_4_ = fVar63;
    auVar3._8_4_ = fVar106;
    auVar3._12_4_ = fVar114;
    auVar55 = NEON_ext(auVar2,auVar3,8,1);
    fVar106 = auVar55._0_4_;
    fVar114 = param_1 + fVar82;
    auVar47 = ZEXT816(0);
    auVar41._8_4_ = auVar68._8_4_;
    auVar41._0_8_ = auVar68._0_8_;
    auVar41._12_4_ = 0;
    local_1c0 = auVar68._0_8_;
    do {
      uVar52 = local_ac;
      fVar72 = auVar41._0_4_;
      auVar18._0_4_ = fVar72 * fVar72;
      fVar90 = auVar41._4_4_;
      auVar18._4_4_ = fVar90 * fVar90;
      fVar91 = auVar41._8_4_;
      auVar18._8_4_ = fVar91 * fVar91;
      auVar18._12_4_ = auVar41._12_4_ * auVar41._12_4_;
      auVar68 = NEON_ext(auVar18,auVar18,8,1);
      fVar64 = auVar68._0_4_ + auVar68._4_4_;
      fVar83 = auVar18._0_4_ + auVar18._4_4_ + fVar64;
      fVar64 = auVar18._0_4_ + auVar18._4_4_ + fVar64;
      uVar9 = CONCAT44(fVar64,fVar83);
      uVar77 = NEON_frsqrte(uVar9,4);
      fVar65 = (float)uVar77;
      fVar73 = (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar73 * fVar73,fVar65 * fVar65),uVar9,4);
      fVar65 = fVar65 * (float)uVar77;
      fVar73 = fVar73 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar73 * fVar73,fVar65 * fVar65),uVar9,4);
      fVar65 = fVar65 * (float)uVar77;
      fVar73 = fVar73 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar73 * fVar73,fVar65 * fVar65),uVar9,4);
      fVar65 = fVar65 * (float)uVar77;
      fVar73 = fVar73 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frsqrts(CONCAT44(fVar73 * fVar73,fVar65 * fVar65),uVar9,4);
      uVar66 = CONCAT44(fVar64 * fVar73 * (float)((ulong)uVar77 >> 0x20),
                        fVar83 * fVar65 * (float)uVar77);
      uVar66 = uVar66 ^ (uVar66 ^ uVar9) & CONCAT44(-(uint)(fVar83 == 0.0),-(uint)(fVar83 == 0.0));
      uVar77 = NEON_frecpe(uVar66,4);
      uVar115 = NEON_frecps(uVar66,uVar77,4);
      fVar83 = (float)uVar77 * (float)uVar115;
      fVar64 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar115 >> 0x20);
      uVar77 = NEON_frecps(uVar66,CONCAT44(fVar64,fVar83),4);
      fVar83 = fVar83 * (float)uVar77;
      fVar64 = fVar64 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar66,CONCAT44(fVar64,fVar83),4);
      fVar83 = fVar83 * (float)uVar77;
      fVar64 = fVar64 * (float)((ulong)uVar77 >> 0x20);
      uVar77 = NEON_frecps(uVar66,CONCAT44(fVar64,fVar83),4);
      fVar83 = fVar83 * (float)uVar77;
      uVar77 = NEON_frecps(uVar66,CONCAT44(fVar64 * (float)((ulong)uVar77 >> 0x20),fVar83),4);
      fVar83 = fVar83 * (float)uVar77;
      fVar72 = fVar72 * fVar83;
      fVar90 = fVar90 * fVar83;
      fVar91 = fVar91 * fVar83;
      fVar83 = *(float *)(lVar7 + 0x10);
      pfVar8 = *(float **)(param_2 + 0x10);
      fVar65 = *(float *)(lVar7 + 0x30) - fVar83;
      fVar74 = *(float *)(lVar7 + 0x34) - fVar83;
      fVar83 = *(float *)(lVar7 + 0x38) - fVar83;
      fVar64 = -fVar65;
      fVar73 = -fVar74;
      fVar84 = -fVar83;
      fVar64 = (float)((uint)fVar64 ^
                      ((uint)fVar64 ^ (uint)fVar65) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar91 +
                                    *(float *)(param_2 + 0x20) * fVar72 +
                                    *(float *)(param_2 + 0x30) * fVar90));
      fVar73 = (float)((uint)fVar73 ^
                      ((uint)fVar73 ^ (uint)fVar74) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar91 +
                                    *(float *)(param_2 + 0x24) * fVar72 +
                                    *(float *)(param_2 + 0x34) * fVar90));
      fVar84 = (float)((uint)fVar84 ^
                      ((uint)fVar84 ^ (uint)fVar83) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar91 +
                                    *(float *)(param_2 + 0x28) * fVar72 +
                                    *(float *)(param_2 + 0x38) * fVar90));
      lVar7 = *(long *)(param_3 + 8);
      fVar83 = *(float *)(lVar7 + 0x10);
      fVar65 = pfVar8[0xc] + pfVar8[8] * fVar84 + *pfVar8 * fVar64 + pfVar8[4] * fVar73;
      fVar74 = pfVar8[0xd] + pfVar8[9] * fVar84 + pfVar8[1] * fVar64 + pfVar8[5] * fVar73;
      auVar57._0_8_ = CONCAT44(fVar74,fVar65);
      auVar57._8_4_ = pfVar8[0xe] + pfVar8[10] * fVar84 + pfVar8[2] * fVar64 + pfVar8[6] * fVar73;
      auVar57._12_4_ = pfVar8[0xf] + 0.0;
      auVar68 = *(undefined1 (*) [16])(lVar7 + 0x30);
      auVar92._0_4_ = auVar68._0_4_ - fVar83;
      auVar92._4_4_ = auVar68._4_4_ - fVar83;
      auVar92._8_4_ = auVar68._8_4_ - fVar83;
      auVar92._12_4_ = auVar68._12_4_ - 0.0;
      auVar69._0_8_ = CONCAT44(-(uint)(0.0 < -fVar90),-(uint)(0.0 < -fVar72));
      auVar69._8_4_ = -(uint)(0.0 < -fVar91);
      auVar69._12_4_ = 0;
      auVar101._0_4_ = -auVar92._0_4_;
      auVar101._4_4_ = -auVar92._4_4_;
      auVar101._8_4_ = -auVar92._8_4_;
      auVar101._12_4_ = 0;
      auVar100._8_4_ = auVar69._8_4_;
      auVar100._0_8_ = auVar69._0_8_;
      auVar100._12_4_ = 0;
      auVar101 = auVar101 ^ (auVar101 ^ auVar92) & auVar100;
      fVar73 = fVar63 + auVar101._0_4_;
      fVar84 = fVar99 + auVar101._4_4_;
      fVar97 = fVar106 + auVar101._8_4_;
      fVar98 = auVar101._12_4_ + 0.0;
      auVar23._0_4_ = fVar65 - fVar73;
      auVar23._4_4_ = fVar74 - fVar84;
      auVar23._8_4_ = auVar57._8_4_ - fVar97;
      auVar23._12_4_ = auVar57._12_4_ - fVar98;
      auVar102._0_4_ = fVar72 * -auVar23._0_4_;
      auVar102._4_4_ = fVar90 * -auVar23._4_4_;
      auVar102._8_4_ = fVar91 * -auVar23._8_4_;
      auVar102._12_4_ = 0;
      auVar55 = NEON_ext(auVar102,auVar102,8,1);
      fVar64 = auVar55._0_4_ + auVar55._4_4_;
      fVar107 = (auVar102._0_4_ + auVar102._4_4_ + fVar64) - fVar114;
      uVar77 = auVar47._8_8_;
      fVar83 = fVar62;
      if (fVar107 <= 0.0) {
        uVar115 = auVar47._0_8_;
      }
      else {
        auVar85._0_4_ = fVar72 * *param_7;
        auVar85._4_4_ = fVar90 * param_7[1];
        auVar85._8_4_ = fVar91 * param_7[2];
        auVar85._12_4_ = param_7[3] * 0.0;
        auVar55 = NEON_ext(auVar85,auVar85,8,1);
        fVar72 = auVar55._0_4_ + auVar55._4_4_;
        fVar62 = auVar85._0_4_ + auVar85._4_4_ + fVar72;
        uVar77 = CONCAT44(auVar85._0_4_ + auVar85._4_4_ + fVar72,fVar62);
        if (0.0 <= fVar62) {
          return 0;
        }
        uVar115 = NEON_frecpe(uVar77,4);
        uVar110 = NEON_frecps(uVar77,uVar115,4);
        fVar62 = (float)uVar115 * (float)uVar110;
        fVar72 = (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
        uVar115 = NEON_frecps(uVar77,CONCAT44(fVar72,fVar62),4);
        fVar62 = fVar62 * (float)uVar115;
        fVar72 = fVar72 * (float)((ulong)uVar115 >> 0x20);
        uVar115 = NEON_frecps(uVar77,CONCAT44(fVar72,fVar62),4);
        fVar62 = fVar62 * (float)uVar115;
        fVar72 = fVar72 * (float)((ulong)uVar115 >> 0x20);
        uVar115 = NEON_frecps(uVar77,CONCAT44(fVar72,fVar62),4);
        fVar62 = fVar62 * (float)uVar115;
        fVar72 = fVar72 * (float)((ulong)uVar115 >> 0x20);
        uVar77 = NEON_frecps(uVar77,CONCAT44(fVar72,fVar62),4);
        fVar62 = auVar47._0_4_ - fVar107 * fVar62 * (float)uVar77;
        uVar115 = CONCAT44(auVar47._4_4_ -
                           ((auVar102._0_4_ + auVar102._4_4_ + fVar64) -
                           (param_1 + (float)((ulong)uVar76 >> 0x20) * 0.1)) *
                           fVar72 * (float)((ulong)uVar77 >> 0x20),fVar62);
        uVar77 = 0;
        if (auVar47._0_4_ < fVar62) {
          uVar110 = NEON_fmov(0x3f800000,4);
          if ((float)uVar110 < fVar62) {
            return 0;
          }
          auVar33._0_4_ = *param_7 * fVar62 + *param_6;
          auVar33._4_4_ = param_7[1] * fVar62 + param_6[1];
          auVar33._8_4_ = param_7[2] * fVar62 + param_6[2];
          auVar33._12_4_ = param_7[3] * fVar62 + param_6[3];
          auVar55 = NEON_ext(auVar33,auVar33,8,1);
          fVar83 = auVar55._0_4_;
          fVar63 = auVar33._0_4_ - fVar63;
          fVar99 = auVar33._4_4_ - fVar99;
          fVar106 = fVar83 - fVar106;
          local_170._0_4_ = (float)local_170 + fVar63;
          local_170._4_4_ = local_170._4_4_ + fVar99;
          uStack_168._0_4_ = (float)uStack_168 + fVar106;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar63;
          local_160._4_4_ = local_160._4_4_ + fVar99;
          auVar86._0_8_ = CONCAT44(local_160._4_4_,(float)local_160);
          auVar86._8_4_ = (float)uStack_158 + fVar106;
          auVar86._12_4_ = uStack_158._4_4_ + 0.0;
          local_150._0_4_ = (float)local_150 + fVar63;
          local_150._4_4_ = local_150._4_4_ + fVar99;
          uStack_148._0_4_ = (float)uStack_148 + fVar106;
          uStack_148._4_4_ = uStack_148._4_4_ + 0.0;
          uStack_158 = auVar86._8_8_;
          local_160 = auVar86._0_8_;
          fStack_e8 = local_130[2] - (float)uStack_168;
          fStack_e4 = local_130[3] - uStack_168._4_4_;
          local_f0._0_4_ = local_130[0] - (float)local_170;
          local_f0._4_4_ = local_130[1] - local_170._4_4_;
          fStack_d8 = (float)uStack_118 - auVar86._8_4_;
          fStack_d4 = uStack_118._4_4_ - auVar86._12_4_;
          local_e0 = (float)local_120 - (float)local_160;
          fStack_dc = local_120._4_4_ - local_160._4_4_;
          fStack_c8 = local_110[2] - (float)uStack_148;
          fStack_c4 = local_110[3] - uStack_148._4_4_;
          local_d0 = local_110[0] - (float)local_150;
          fStack_cc = local_110[1] - local_150._4_4_;
          fVar62 = *(float *)(lVar7 + 0x10);
          auVar19._0_4_ = auVar68._0_4_ - fVar62;
          auVar19._4_4_ = auVar68._4_4_ - fVar62;
          auVar19._8_4_ = auVar68._8_4_ - fVar62;
          auVar19._12_4_ = auVar68._12_4_ - 0.0;
          auVar70._0_4_ = -auVar19._0_4_;
          auVar70._4_4_ = -auVar19._4_4_;
          auVar70._8_4_ = -auVar19._8_4_;
          auVar70._12_4_ = 0;
          auVar70 = auVar70 ^ (auVar70 ^ auVar19) & auVar69;
          fVar73 = auVar33._0_4_ + auVar70._0_4_;
          fVar84 = auVar33._4_4_ + auVar70._4_4_;
          fVar97 = fVar83 + auVar70._8_4_;
          fVar98 = auVar70._12_4_ + 0.0;
          auVar23._0_4_ = fVar65 - fVar73;
          auVar23._4_4_ = fVar74 - fVar84;
          auVar23._8_4_ = auVar57._8_4_ - fVar97;
          auVar23._12_4_ = auVar57._12_4_ - fVar98;
          fVar63 = auVar33._0_4_;
          fVar99 = auVar33._4_4_;
          fVar106 = fVar83;
          local_1c0 = auVar41._0_8_;
          uStack_1b8 = auVar41._8_8_;
          fVar83 = 3.4028235e+38;
        }
      }
      uVar9 = (ulong)local_ac;
      bVar6 = local_ac == 3;
      local_ac = local_ac + 1;
      *(long *)(local_a8 + uVar9 * 4 + -0x20) = auVar57._8_8_;
      *(undefined8 *)(local_130 + uVar9 * 4) = auVar57._0_8_;
      *(float *)(&uStack_168 + uVar9 * 2) = fVar97;
      *(float *)((long)&uStack_168 + uVar9 * 0x10 + 4) = fVar98;
      *(float *)(&local_170 + uVar9 * 2) = fVar73;
      *(float *)((long)&local_170 + uVar9 * 0x10 + 4) = fVar84;
      *(long *)(local_a8 + uVar9 * 4 + -0x10) = auVar23._8_8_;
      *(long *)(local_a8 + uVar9 * 4 + -0x12) = auVar23._0_8_;
      if (bVar6) {
        auVar23 = FUN_00237120(&local_f0,local_130,&local_170,&local_ac);
      }
      else if (uVar52 == 2) {
        auVar23._4_4_ = local_f0._4_4_;
        auVar23._0_4_ = (float)local_f0;
        auVar23._8_4_ = fStack_e8;
        auVar23._12_4_ = fStack_e4;
        auVar4._4_4_ = fStack_dc;
        auVar4._0_4_ = local_e0;
        auVar4._8_4_ = fStack_d8;
        auVar4._12_4_ = fStack_d4;
        auVar5._4_4_ = fStack_cc;
        auVar5._0_4_ = local_d0;
        auVar5._8_4_ = fStack_c8;
        auVar5._12_4_ = fStack_c4;
        auVar58._0_4_ = local_e0 - (float)local_f0;
        auVar58._4_4_ = fStack_dc - local_f0._4_4_;
        auVar58._8_4_ = fStack_d8 - fStack_e8;
        auVar58._12_4_ = fStack_d4 - fStack_e4;
        auVar50._0_4_ = local_d0 - (float)local_f0;
        auVar50._4_4_ = fStack_cc - local_f0._4_4_;
        auVar50._8_4_ = fStack_c8 - fStack_e8;
        auVar50._12_4_ = fStack_c4 - fStack_e4;
        auVar68 = NEON_ext(auVar58,auVar58,8,1);
        auVar55 = NEON_ext(auVar50,auVar50,8,1);
        fVar91 = auVar58._0_4_ * auVar50._4_4_ - auVar58._4_4_ * auVar50._0_4_;
        uVar110 = NEON_ext(CONCAT44(auVar58._4_4_ * auVar50._8_4_ - auVar58._8_4_ * auVar50._4_4_,
                                    fVar91),
                           CONCAT44(auVar68._4_4_ * auVar50._4_4_ - auVar58._4_4_ * auVar55._4_4_,
                                    auVar68._0_4_ * auVar50._0_4_ - auVar58._0_4_ * auVar55._0_4_),4
                           ,1);
        fVar72 = (float)uVar110;
        auVar79._0_4_ = fVar72 * fVar72;
        fVar90 = (float)((ulong)uVar110 >> 0x20);
        auVar79._4_4_ = fVar90 * fVar90;
        auVar79._8_4_ = fVar91 * fVar91;
        auVar79._12_4_ = 0;
        auVar68 = NEON_ext(auVar79,auVar79,8,1);
        fVar64 = auVar68._0_4_ + auVar68._4_4_;
        fVar62 = auVar79._0_4_ + auVar79._4_4_ + fVar64;
        uVar110 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar64,fVar62);
        local_ac = 3;
        if (1.1920929e-07 < fVar62) {
          if (fVar62 != 0.0) {
            auVar68 = NEON_ext(auVar4,auVar4,8,1);
            auVar55 = NEON_ext(auVar5,auVar5,8,1);
            fVar65 = local_e0 * fStack_cc - fStack_dc * local_d0;
            auVar112 = NEON_ext(auVar23,auVar23,8,1);
            uVar67 = NEON_ext(CONCAT44(fStack_dc * fStack_c8 - fStack_d8 * fStack_cc,fVar65),
                              CONCAT44(auVar68._4_4_ * fStack_cc - fStack_dc * auVar55._4_4_,
                                       auVar68._0_4_ * local_d0 - local_e0 * auVar55._0_4_),4,1);
            fVar62 = local_f0._4_4_ * local_d0 - (float)local_f0 * fStack_cc;
            uVar113 = NEON_ext(CONCAT44(fStack_e8 * fStack_cc - local_f0._4_4_ * fStack_c8,fVar62),
                               CONCAT44(local_f0._4_4_ * auVar55._4_4_ - auVar112._4_4_ * fStack_cc,
                                        (float)local_f0 * auVar55._0_4_ - auVar112._0_4_ * local_d0)
                               ,4,1);
            fVar64 = (float)local_f0 * fStack_dc - local_f0._4_4_ * local_e0;
            uVar53 = NEON_ext(CONCAT44(local_f0._4_4_ * fStack_d8 - fStack_e8 * fStack_dc,fVar64),
                              CONCAT44(auVar112._4_4_ * fStack_dc - local_f0._4_4_ * auVar68._4_4_,
                                       auVar112._0_4_ * local_e0 - (float)local_f0 * auVar68._0_4_),
                              4,1);
            auVar93._0_4_ = (float)uVar67 * fVar72;
            auVar93._4_4_ = (float)((ulong)uVar67 >> 0x20) * fVar90;
            auVar93._8_4_ = fVar65 * fVar91;
            auVar93._12_4_ = 0;
            auVar68 = NEON_ext(auVar93,auVar93,8,1);
            auVar103._0_4_ = (float)uVar113 * fVar72;
            auVar103._4_4_ = (float)((ulong)uVar113 >> 0x20) * fVar90;
            auVar103._8_4_ = fVar62 * fVar91;
            auVar103._12_4_ = 0;
            auVar55 = NEON_ext(auVar103,auVar103,8,1);
            fVar62 = auVar93._0_4_ + auVar93._4_4_ + auVar68._0_4_ + auVar68._4_4_;
            auVar108._0_4_ = (float)uVar53 * fVar72;
            auVar108._4_4_ = (float)((ulong)uVar53 >> 0x20) * fVar90;
            auVar108._8_4_ = fVar64 * fVar91;
            auVar108._12_4_ = 0;
            fVar64 = auVar103._0_4_ + auVar103._4_4_ + auVar55._0_4_ + auVar55._4_4_;
            auVar68 = NEON_ext(auVar108,auVar108,8,1);
            fVar65 = auVar108._0_4_ + auVar108._4_4_ + auVar68._0_4_ + auVar68._4_4_;
            bVar6 = (0.0 <= fVar62 && 0.0 <= fVar64) && 0.0 <= fVar65;
            auVar109._0_4_ = -(uint)bVar6;
            auVar109._4_4_ = -(uint)bVar6;
            auVar109._8_4_ = -(uint)bVar6;
            auVar109._12_4_ = -(uint)bVar6;
            NEON_ext(auVar109,auVar109,8,1);
            if (CONCAT13((char)auVar109._12_4_,
                         CONCAT12((char)auVar109._8_4_,
                                  CONCAT11((char)auVar109._4_4_,(char)auVar109._0_4_))) == -1) {
              auVar24._0_4_ = (float)local_f0 * fVar72;
              auVar24._4_4_ = local_f0._4_4_ * fVar90;
              auVar24._8_4_ = fStack_e8 * fVar91;
              auVar24._12_4_ = fStack_e4 * 0.0;
              auVar68 = NEON_ext(auVar24,auVar24,8,1);
              uVar53 = NEON_frecpe(uVar110,4);
              uVar67 = NEON_frecps(uVar110,uVar53,4);
              fVar62 = (float)uVar53 * (float)uVar67;
              fVar64 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
              uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
              fVar62 = fVar62 * (float)uVar53;
              fVar64 = fVar64 * (float)((ulong)uVar53 >> 0x20);
              uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
              fVar62 = fVar62 * (float)uVar53;
              fVar64 = fVar64 * (float)((ulong)uVar53 >> 0x20);
              uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
              fVar62 = fVar62 * (float)uVar53;
              uVar110 = NEON_frecps(uVar110,CONCAT44(fVar64 * (float)((ulong)uVar53 >> 0x20),fVar62)
                                    ,4);
              fVar62 = (auVar24._0_4_ + auVar24._4_4_ + auVar68._0_4_ + auVar68._4_4_) *
                       fVar62 * (float)uVar110;
              auVar23._0_4_ = fVar72 * fVar62;
              auVar23._4_4_ = fVar90 * fVar62;
              auVar23._8_4_ = fVar91 * fVar62;
              auVar23._12_4_ = 0.0;
            }
            else {
              auVar71._0_4_ = -(float)local_f0 * auVar58._0_4_;
              auVar71._4_4_ = -local_f0._4_4_ * auVar58._4_4_;
              auVar71._8_4_ = -fStack_e8 * auVar58._8_4_;
              auVar71._12_4_ = auVar58._12_4_ * 0.0;
              auVar68 = NEON_ext(auVar71,auVar71,8,1);
              fVar91 = auVar68._0_4_ + auVar68._4_4_;
              auVar80._0_4_ = -local_e0 * auVar58._0_4_;
              auVar80._4_4_ = -fStack_dc * auVar58._4_4_;
              auVar80._8_4_ = -fStack_d8 * auVar58._8_4_;
              auVar80._12_4_ = auVar58._12_4_ * 0.0;
              auVar68 = NEON_ext(auVar80,auVar80,8,1);
              fVar73 = auVar68._0_4_ + auVar68._4_4_;
              fVar72 = auVar71._0_4_ + auVar71._4_4_ + fVar91;
              fVar90 = auVar80._0_4_ + auVar80._4_4_ + fVar73;
              fVar73 = auVar80._0_4_ + auVar80._4_4_ + fVar73;
              bVar6 = (0.0 <= fVar72 && fVar65 <= 0.0) && fVar90 <= 0.0;
              auVar104._0_4_ = -(uint)bVar6;
              auVar104._4_4_ = -(uint)bVar6;
              auVar104._8_4_ = -(uint)bVar6;
              auVar104._12_4_ = -(uint)bVar6;
              NEON_ext(auVar104,auVar104,8,1);
              if (CONCAT13((char)auVar104._12_4_,
                           CONCAT12((char)auVar104._8_4_,
                                    CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1) {
                uVar110 = CONCAT44((auVar71._0_4_ + auVar71._4_4_ + fVar91) - fVar73,fVar72 - fVar90
                                  );
                uVar53 = NEON_frecpe(uVar110,4);
                uVar67 = NEON_frecps(uVar110,uVar53,4);
                fVar62 = (float)uVar53 * (float)uVar67;
                fVar64 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
                uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
                fVar62 = fVar62 * (float)uVar53;
                fVar64 = fVar64 * (float)((ulong)uVar53 >> 0x20);
                uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
                fVar62 = fVar62 * (float)uVar53;
                fVar64 = fVar64 * (float)((ulong)uVar53 >> 0x20);
                uVar53 = NEON_frecps(uVar110,CONCAT44(fVar64,fVar62),4);
                fVar62 = fVar62 * (float)uVar53;
                uVar110 = NEON_frecps(uVar110,CONCAT44(fVar64 * (float)((ulong)uVar53 >> 0x20),
                                                       fVar62),4);
                fVar72 = fVar72 * (float)(-(uint)(1.1920929e-07 < ABS(fVar72 - fVar90)) &
                                         (uint)(fVar62 * (float)uVar110));
                puVar10 = &local_170;
                pfVar8 = local_130;
                auVar25._0_8_ =
                     CONCAT44(local_f0._4_4_ + auVar58._4_4_ * fVar72,
                              (float)local_f0 + auVar58._0_4_ * fVar72);
                auVar25._8_4_ = fStack_e8 + auVar58._8_4_ * fVar72;
                auVar25._12_4_ = fStack_e4 + auVar58._12_4_ * fVar72;
                auVar68 = NEON_ext(auVar25,auVar25,8,1);
                pfVar12 = (float *)&local_f0;
                auVar23._8_4_ = (float)auVar68._0_4_;
                auVar23._0_8_ = auVar25._0_8_;
                auVar23._12_4_ = 0.0;
                local_ac = 2;
LAB_002e42a0:
                puVar13 = &local_160;
                pfVar14 = (float *)&local_120;
                pfVar15 = &local_e0;
              }
              else {
                auVar105._0_4_ = -local_e0 * auVar50._0_4_;
                auVar105._4_4_ = -fStack_dc * auVar50._4_4_;
                auVar105._8_4_ = -fStack_d8 * auVar50._8_4_;
                auVar105._12_4_ = auVar50._12_4_ * 0.0;
                auVar68 = NEON_ext(auVar105,auVar105,8,1);
                fVar84 = auVar68._0_4_ + auVar68._4_4_;
                auVar59._0_4_ = auVar58._0_4_ * -local_d0;
                auVar59._4_4_ = auVar58._4_4_ * -fStack_cc;
                auVar59._8_4_ = auVar58._8_4_ * -fStack_c8;
                auVar59._12_4_ = auVar58._12_4_ * 0.0;
                auVar111._0_4_ = auVar50._0_4_ * -local_d0;
                auVar111._4_4_ = auVar50._4_4_ * -fStack_cc;
                auVar111._8_4_ = auVar50._8_4_ * -fStack_c8;
                auVar111._12_4_ = auVar50._12_4_ * 0.0;
                fVar91 = auVar105._0_4_ + auVar105._4_4_ + fVar84;
                auVar68 = NEON_ext(auVar59,auVar59,8,1);
                fVar97 = auVar68._0_4_ + auVar68._4_4_;
                fVar65 = auVar59._0_4_ + auVar59._4_4_ + fVar97;
                auVar68 = NEON_ext(auVar111,auVar111,8,1);
                fVar98 = auVar68._0_4_ + auVar68._4_4_;
                fVar74 = auVar111._0_4_ + auVar111._4_4_ + fVar98;
                fVar98 = auVar111._0_4_ + auVar111._4_4_ + fVar98;
                bVar6 = (fVar90 <= fVar91 && fVar62 <= 0.0) && fVar74 <= fVar65;
                auVar94._0_4_ = -(uint)bVar6;
                auVar94._4_4_ = -(uint)bVar6;
                auVar94._8_4_ = -(uint)bVar6;
                auVar94._12_4_ = -(uint)bVar6;
                NEON_ext(auVar94,auVar94,8,1);
                puVar13 = &local_150;
                pfVar14 = local_110;
                pfVar15 = &local_d0;
                if (CONCAT13((char)auVar94._12_4_,
                             CONCAT12((char)auVar94._8_4_,
                                      CONCAT11((char)auVar94._4_4_,(char)auVar94._0_4_))) == -1) {
                  local_ac = 2;
                  fVar62 = (fVar91 - fVar90) + (fVar65 - fVar74);
                  uVar110 = CONCAT44(((auVar105._0_4_ + auVar105._4_4_ + fVar84) - fVar73) +
                                     ((auVar59._0_4_ + auVar59._4_4_ + fVar97) - fVar98),fVar62);
                  uVar53 = NEON_frecpe(uVar110,4);
                  uVar67 = NEON_frecps(uVar110,uVar53,4);
                  fVar64 = (float)uVar53 * (float)uVar67;
                  fVar72 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  uVar110 = NEON_frecps(uVar110,CONCAT44(fVar72 * (float)((ulong)uVar53 >> 0x20),
                                                         fVar64),4);
                  fVar62 = (fVar91 - fVar90) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar62)) &
                                  (uint)(fVar64 * (float)uVar110));
                  auVar26._0_8_ =
                       CONCAT44(fStack_dc + (fStack_cc - fStack_dc) * fVar62,
                                local_e0 + (local_d0 - local_e0) * fVar62);
                  auVar26._8_4_ = fStack_d8 + (fStack_c8 - fStack_d8) * fVar62;
                  auVar26._12_4_ = fStack_d4 + (fStack_c4 - fStack_d4) * fVar62;
                  auVar68 = NEON_ext(auVar26,auVar26,8,1);
                  auVar23._8_4_ = (float)auVar68._0_4_;
                  auVar23._0_8_ = auVar26._0_8_;
                  auVar23._12_4_ = 0.0;
                  puVar10 = &local_160;
                  pfVar8 = (float *)&local_120;
                  pfVar12 = &local_e0;
                }
                else {
                  auVar95._0_4_ = -(float)local_f0 * auVar50._0_4_;
                  auVar95._4_4_ = -local_f0._4_4_ * auVar50._4_4_;
                  auVar95._8_4_ = -fStack_e8 * auVar50._8_4_;
                  auVar95._12_4_ = auVar50._12_4_ * 0.0;
                  auVar68 = NEON_ext(auVar95,auVar95,8,1);
                  fVar65 = auVar68._0_4_ + auVar68._4_4_;
                  fVar62 = auVar95._0_4_ + auVar95._4_4_ + fVar65;
                  bVar6 = (fVar64 <= 0.0 && 0.0 <= fVar62) && fVar74 <= 0.0;
                  auVar87._0_4_ = -(uint)bVar6;
                  auVar87._4_4_ = -(uint)bVar6;
                  auVar87._8_4_ = -(uint)bVar6;
                  auVar87._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar87,auVar87,8,1);
                  if (CONCAT13((char)auVar87._12_4_,
                               CONCAT12((char)auVar87._8_4_,
                                        CONCAT11((char)auVar87._4_4_,(char)auVar87._0_4_))) != -1) {
                    bVar6 = fVar72 <= 0.0 && fVar62 <= 0.0;
                    auVar51._0_4_ = -(uint)bVar6;
                    auVar51._4_4_ = -(uint)bVar6;
                    auVar51._8_4_ = -(uint)bVar6;
                    auVar51._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar51,auVar51,8,1);
                    if (CONCAT13((char)auVar51._12_4_,
                                 CONCAT12((char)auVar51._8_4_,
                                          CONCAT11((char)auVar51._4_4_,(char)auVar51._0_4_))) == -1)
                    {
                      puVar10 = &local_170;
                      pfVar8 = local_130;
                      pfVar12 = (float *)&local_f0;
                    }
                    else {
                      bVar6 = 0.0 <= fVar90 && fVar91 <= fVar90;
                      auVar21._0_4_ = -(uint)bVar6;
                      auVar21._4_4_ = -(uint)bVar6;
                      auVar21._8_4_ = -(uint)bVar6;
                      auVar21._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar21,auVar21,8,1);
                      iVar31 = CONCAT13((char)auVar21._12_4_,
                                        CONCAT12((char)auVar21._8_4_,
                                                 CONCAT11((char)auVar21._4_4_,(char)auVar21._0_4_)))
                      ;
                      iVar46 = -(uint)(iVar31 == -1);
                      auVar22._4_4_ = iVar46;
                      auVar22._0_4_ = iVar46;
                      auVar22._8_4_ = iVar46;
                      auVar22._12_4_ = iVar46;
                      lVar7 = 0x10;
                      if (iVar31 != -1) {
                        lVar7 = 0x20;
                      }
                      auVar23 = auVar5 ^ (auVar5 ^ auVar4) & auVar22;
                      pfVar12 = (float *)((long)local_a8 + lVar7 + -0x48);
                      pfVar8 = (float *)((long)local_130 + lVar7);
                      puVar10 = (undefined8 *)((long)&local_170 + lVar7);
                    }
                    local_ac = 1;
                    goto LAB_002e42a0;
                  }
                  uVar110 = CONCAT44((auVar95._0_4_ + auVar95._4_4_ + fVar65) - fVar98,
                                     fVar62 - fVar74);
                  uVar53 = NEON_frecpe(uVar110,4);
                  uVar67 = NEON_frecps(uVar110,uVar53,4);
                  fVar64 = (float)uVar53 * (float)uVar67;
                  fVar72 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
                  uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
                  fVar64 = fVar64 * (float)uVar53;
                  uVar110 = NEON_frecps(uVar110,CONCAT44(fVar72 * (float)((ulong)uVar53 >> 0x20),
                                                         fVar64),4);
                  fVar62 = fVar62 * (float)(-(uint)(1.1920929e-07 < ABS(fVar62 - fVar74)) &
                                           (uint)(fVar64 * (float)uVar110));
                  auVar27._0_8_ =
                       CONCAT44(local_f0._4_4_ + auVar50._4_4_ * fVar62,
                                (float)local_f0 + auVar50._0_4_ * fVar62);
                  auVar27._8_4_ = fStack_e8 + auVar50._8_4_ * fVar62;
                  auVar27._12_4_ = fStack_e4 + auVar50._12_4_ * fVar62;
                  auVar68 = NEON_ext(auVar27,auVar27,8,1);
                  auVar23._8_4_ = (float)auVar68._0_4_;
                  auVar23._0_8_ = auVar27._0_8_;
                  auVar23._12_4_ = 0.0;
                  local_ac = 2;
                  puVar10 = &local_170;
                  pfVar8 = local_130;
                  pfVar12 = (float *)&local_f0;
                }
              }
              fStack_e8 = (float)*(undefined8 *)(pfVar12 + 2);
              fStack_e4 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
              local_f0._0_4_ = (float)*(undefined8 *)pfVar12;
              local_f0._4_4_ = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              fStack_d8 = (float)*(undefined8 *)(pfVar15 + 2);
              fStack_d4 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
              local_e0 = (float)*(undefined8 *)pfVar15;
              fStack_dc = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
              local_130[2] = (float)*(undefined8 *)(pfVar8 + 2);
              local_130[3] = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
              local_130[0] = (float)*(undefined8 *)pfVar8;
              local_130[1] = (float)((ulong)*(undefined8 *)pfVar8 >> 0x20);
              uStack_118 = *(undefined8 *)(pfVar14 + 2);
              local_120 = *(undefined8 *)pfVar14;
              uStack_168 = puVar10[1];
              local_170 = *puVar10;
              uStack_158 = puVar13[1];
              local_160 = *puVar13;
            }
          }
        }
        else {
          auVar34._0_4_ = auVar58._0_4_ * auVar58._0_4_;
          auVar34._4_4_ = auVar58._4_4_ * auVar58._4_4_;
          auVar34._8_4_ = auVar58._8_4_ * auVar58._8_4_;
          auVar34._12_4_ = auVar58._12_4_ * auVar58._12_4_;
          auVar68 = NEON_ext(auVar34,auVar34,8,1);
          fVar64 = auVar68._0_4_ + auVar68._4_4_;
          fVar62 = auVar34._0_4_ + auVar34._4_4_ + fVar64;
          uVar110 = CONCAT44(auVar34._0_4_ + auVar34._4_4_ + fVar64,fVar62);
          bVar6 = fVar62 <= 1.1920929e-07;
          auVar43._0_4_ = -(uint)bVar6;
          auVar43._4_4_ = -(uint)bVar6;
          auVar43._8_4_ = -(uint)bVar6;
          auVar43._12_4_ = -(uint)bVar6;
          NEON_ext(auVar43,auVar43,8,1);
          local_ac = 2;
          if (CONCAT13((char)auVar43._12_4_,
                       CONCAT12((char)auVar43._8_4_,
                                CONCAT11((char)auVar43._4_4_,(char)auVar43._0_4_))) != -1) {
            auVar44._0_4_ = -(float)local_f0 * auVar58._0_4_;
            auVar44._4_4_ = -local_f0._4_4_ * auVar58._4_4_;
            auVar44._8_4_ = -fStack_e8 * auVar58._8_4_;
            auVar44._12_4_ = auVar58._12_4_ * 0.0;
            auVar68 = NEON_ext(auVar44,auVar44,8,1);
            fVar62 = auVar68._0_4_ + auVar68._4_4_;
            uVar53 = NEON_frecpe(uVar110,4);
            uVar67 = NEON_frecps(uVar110,uVar53,4);
            fVar64 = (float)uVar53 * (float)uVar67;
            fVar72 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
            uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
            fVar64 = fVar64 * (float)uVar53;
            fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
            uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
            fVar64 = fVar64 * (float)uVar53;
            fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
            uVar53 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
            fVar64 = fVar64 * (float)uVar53;
            fVar72 = fVar72 * (float)((ulong)uVar53 >> 0x20);
            uVar110 = NEON_frecps(uVar110,CONCAT44(fVar72,fVar64),4);
            uVar53 = NEON_fmov(0x3f800000,4);
            uVar110 = NEON_fmin(CONCAT44((auVar44._0_4_ + auVar44._4_4_ + fVar62) *
                                         fVar72 * (float)((ulong)uVar110 >> 0x20),
                                         (auVar44._0_4_ + auVar44._4_4_ + fVar62) *
                                         fVar64 * (float)uVar110),uVar53,4);
            uVar110 = NEON_fmax(uVar110,0,4);
            fVar62 = (float)uVar110;
            fVar64 = auVar58._0_4_ * fVar62;
            fVar72 = auVar58._4_4_ * fVar62;
            fVar90 = auVar58._8_4_ * fVar62;
            fVar62 = auVar58._12_4_ * fVar62;
            goto LAB_002e3e1c;
          }
LAB_002e3e30:
          local_ac = 1;
        }
      }
      else if (uVar52 == 1) {
        auVar23._4_4_ = local_f0._4_4_;
        auVar23._0_4_ = (float)local_f0;
        auVar23._8_4_ = fStack_e8;
        auVar23._12_4_ = fStack_e4;
        fVar64 = local_e0 - (float)local_f0;
        fVar72 = fStack_dc - local_f0._4_4_;
        fVar90 = fStack_d8 - fStack_e8;
        fVar62 = fStack_d4 - fStack_e4;
        auVar42._0_4_ = fVar64 * fVar64;
        auVar42._4_4_ = fVar72 * fVar72;
        auVar42._8_4_ = fVar90 * fVar90;
        auVar42._12_4_ = fVar62 * fVar62;
        auVar68 = NEON_ext(auVar42,auVar42,8,1);
        fVar65 = auVar68._0_4_ + auVar68._4_4_;
        fVar91 = auVar42._0_4_ + auVar42._4_4_ + fVar65;
        uVar110 = CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar65,fVar91);
        bVar6 = fVar91 <= 1.1920929e-07;
        auVar48._0_4_ = -(uint)bVar6;
        auVar48._4_4_ = -(uint)bVar6;
        auVar48._8_4_ = -(uint)bVar6;
        auVar48._12_4_ = -(uint)bVar6;
        NEON_ext(auVar48,auVar48,8,1);
        if (CONCAT13((char)auVar48._12_4_,
                     CONCAT12((char)auVar48._8_4_,CONCAT11((char)auVar48._4_4_,(char)auVar48._0_4_))
                    ) == -1) goto LAB_002e3e30;
        auVar49._0_4_ = -(float)local_f0 * fVar64;
        auVar49._4_4_ = -local_f0._4_4_ * fVar72;
        auVar49._8_4_ = -fStack_e8 * fVar90;
        auVar49._12_4_ = fVar62 * 0.0;
        auVar68 = NEON_ext(auVar49,auVar49,8,1);
        fVar91 = auVar68._0_4_ + auVar68._4_4_;
        uVar53 = NEON_frecpe(uVar110,4);
        uVar67 = NEON_frecps(uVar110,uVar53,4);
        fVar65 = (float)uVar53 * (float)uVar67;
        fVar73 = (float)((ulong)uVar53 >> 0x20) * (float)((ulong)uVar67 >> 0x20);
        uVar53 = NEON_frecps(uVar110,CONCAT44(fVar73,fVar65),4);
        fVar65 = fVar65 * (float)uVar53;
        fVar73 = fVar73 * (float)((ulong)uVar53 >> 0x20);
        uVar53 = NEON_frecps(uVar110,CONCAT44(fVar73,fVar65),4);
        fVar65 = fVar65 * (float)uVar53;
        fVar73 = fVar73 * (float)((ulong)uVar53 >> 0x20);
        uVar53 = NEON_frecps(uVar110,CONCAT44(fVar73,fVar65),4);
        fVar65 = fVar65 * (float)uVar53;
        fVar73 = fVar73 * (float)((ulong)uVar53 >> 0x20);
        uVar110 = NEON_frecps(uVar110,CONCAT44(fVar73,fVar65),4);
        uVar53 = NEON_fmov(0x3f800000,4);
        uVar110 = NEON_fmin(CONCAT44((auVar49._0_4_ + auVar49._4_4_ + fVar91) *
                                     fVar73 * (float)((ulong)uVar110 >> 0x20),
                                     (auVar49._0_4_ + auVar49._4_4_ + fVar91) *
                                     fVar65 * (float)uVar110),uVar53,4);
        uVar110 = NEON_fmax(uVar110,0,4);
        fVar91 = (float)uVar110;
        fVar64 = fVar64 * fVar91;
        fVar72 = fVar72 * fVar91;
        fVar90 = fVar90 * fVar91;
        fVar62 = fVar62 * fVar91;
LAB_002e3e1c:
        auVar20._0_8_ = CONCAT44(auVar23._4_4_ + fVar72,auVar23._0_4_ + fVar64);
        auVar20._8_4_ = auVar23._8_4_ + fVar90;
        auVar20._12_4_ = auVar23._12_4_ + fVar62;
        auVar68 = NEON_ext(auVar20,auVar20,8,1);
        auVar23._8_4_ = (float)auVar68._0_4_;
        auVar23._0_8_ = auVar20._0_8_;
        auVar23._12_4_ = 0.0;
      }
      fVar64 = auVar23._0_4_;
      auVar35._0_4_ = fVar64 * fVar64;
      fVar72 = auVar23._4_4_;
      auVar35._4_4_ = fVar72 * fVar72;
      fVar90 = auVar23._8_4_;
      auVar35._8_4_ = fVar90 * fVar90;
      fVar91 = auVar23._12_4_;
      auVar35._12_4_ = fVar91 * fVar91;
      auVar68 = NEON_ext(auVar35,auVar35,8,1);
      fVar62 = auVar35._0_4_ + auVar35._4_4_ + auVar68._0_4_ + auVar68._4_4_;
      iVar31 = -(uint)(fVar62 < fVar83);
      bVar6 = fVar114 * fVar114 < fVar62 && fVar62 < fVar83;
      auVar60._0_4_ = -(uint)bVar6;
      auVar60._4_4_ = -(uint)bVar6;
      auVar60._8_4_ = -(uint)bVar6;
      auVar60._12_4_ = -(uint)bVar6;
      NEON_ext(auVar60,auVar60,8,1);
      auVar41._0_4_ = -fVar64;
      auVar41._4_4_ = -fVar72;
      auVar41._8_4_ = -fVar90;
      auVar41._12_4_ = 0;
      if (CONCAT13((char)auVar60._12_4_,
                   CONCAT12((char)auVar60._8_4_,CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_)))
          != -1) goto code_r0x002e4318;
      lVar7 = *(long *)(param_2 + 8);
      auVar47._8_8_ = uVar77;
      auVar47._0_8_ = uVar115;
      fVar16 = fVar64;
      fVar17 = fVar72;
      fVar75 = fVar90;
      fVar81 = fVar91;
    } while( true );
  }
  uVar115 = 0;
  auVar23._12_4_ = fVar81;
  auVar23._8_4_ = fVar75;
  auVar23._4_4_ = fVar17;
  auVar23._0_4_ = fVar16;
  auVar41._8_4_ = auVar68._8_4_;
  auVar41._0_8_ = auVar68._0_8_;
  auVar41._12_4_ = 0;
LAB_002e432c:
  auVar89 = ZEXT816(0);
  iVar31 = -(uint)(fVar82 * fVar82 < fVar62);
  bVar30 = (byte)iVar31;
  auVar36[0] = bVar30 & auVar56[0];
  bVar38 = (byte)((uint)iVar31 >> 8);
  auVar36[1] = bVar38 & auVar56[1];
  bVar39 = (byte)((uint)iVar31 >> 0x10);
  auVar36[2] = bVar39 & auVar56[2];
  bVar40 = (byte)((uint)iVar31 >> 0x18);
  auVar36[3] = bVar40 & auVar56[3];
  auVar36[4] = bVar30 & auVar56[4];
  auVar36[5] = bVar38 & auVar56[5];
  auVar36[6] = bVar39 & auVar56[6];
  auVar36[7] = bVar40 & auVar56[7];
  auVar36[8] = bVar30 & auVar56[8];
  auVar36[9] = bVar38 & auVar56[9];
  auVar36[10] = bVar39 & auVar56[10];
  auVar36[0xb] = bVar40 & auVar56[0xb];
  auVar36[0xc] = bVar30 & auVar56[0xc];
  auVar36[0xd] = bVar38 & auVar56[0xd];
  auVar36[0xe] = bVar39 & auVar56[0xe];
  auVar36[0xf] = bVar40 & auVar56[0xf];
  auVar1._4_4_ = fVar17;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar75;
  auVar1._12_4_ = fVar81;
  auVar61._4_4_ = fVar17;
  auVar61._0_4_ = fVar16;
  auVar61._8_4_ = fVar75;
  auVar61._12_4_ = fVar81;
  auVar61 = auVar61 ^ (auVar1 ^ auVar23) & auVar56;
  auVar68 = auVar68 ^ (auVar68 ^ auVar41) & auVar36;
  iVar31 = -(*(byte *)(lVar7 + 0x24) & 1);
  fVar75 = auVar68._0_4_;
  auVar45._0_4_ = fVar75 * fVar75;
  fVar81 = auVar68._4_4_;
  auVar45._4_4_ = fVar81 * fVar81;
  fVar62 = auVar68._8_4_;
  auVar45._8_4_ = fVar62 * fVar62;
  auVar45._12_4_ = auVar68._12_4_ * auVar68._12_4_;
  auVar68 = NEON_ext(auVar45,auVar45,8,1);
  auVar88._0_8_ = CONCAT44(iVar31,iVar31);
  auVar88._8_4_ = iVar31;
  auVar88._12_4_ = iVar31;
  fVar17 = auVar68._0_4_ + auVar68._4_4_;
  fVar16 = auVar45._0_4_ + auVar45._4_4_ + fVar17;
  fVar17 = auVar45._0_4_ + auVar45._4_4_ + fVar17;
  uVar9 = CONCAT44(fVar17,fVar16);
  uVar76 = NEON_frsqrte(uVar9,4);
  fVar82 = (float)uVar76;
  fVar63 = (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar82 * fVar82),uVar9,4);
  fVar82 = fVar82 * (float)uVar76;
  fVar63 = fVar63 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar82 * fVar82),uVar9,4);
  fVar82 = fVar82 * (float)uVar76;
  fVar63 = fVar63 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar82 * fVar82),uVar9,4);
  fVar82 = fVar82 * (float)uVar76;
  fVar63 = fVar63 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frsqrts(CONCAT44(fVar63 * fVar63,fVar82 * fVar82),uVar9,4);
  uVar66 = CONCAT44(fVar17 * fVar63 * (float)((ulong)uVar76 >> 0x20),fVar16 * fVar82 * (float)uVar76
                   );
  uVar66 = uVar66 ^ (uVar66 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar76 = NEON_frecpe(uVar66,4);
  uVar77 = NEON_frecps(uVar66,uVar76,4);
  fVar16 = (float)uVar76 * (float)uVar77;
  fVar17 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar77 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar76;
  fVar17 = fVar17 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar76;
  fVar17 = fVar17 * (float)((ulong)uVar76 >> 0x20);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar17,fVar16),4);
  fVar16 = fVar16 * (float)uVar76;
  iVar31 = -(uint)(0.0 < (float)uVar66);
  uVar76 = NEON_frecps(uVar66,CONCAT44(fVar17 * (float)((ulong)uVar76 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar76;
  fVar75 = fVar75 * fVar16;
  fVar81 = fVar81 * fVar16;
  fVar62 = fVar62 * fVar16;
  bVar30 = (byte)iVar31;
  bVar38 = (byte)((uint)iVar31 >> 8);
  bVar39 = (byte)((uint)iVar31 >> 0x10);
  bVar40 = (byte)((uint)iVar31 >> 0x18);
  fVar16 = (float)CONCAT13(bVar40 & (byte)((uint)fVar75 >> 0x18),
                           CONCAT12(bVar39 & (byte)((uint)fVar75 >> 0x10),
                                    CONCAT11(bVar38 & (byte)((uint)fVar75 >> 8),
                                             bVar30 & SUB41(fVar75,0))));
  auVar32._0_8_ =
       CONCAT17(bVar40 & (byte)((uint)fVar81 >> 0x18),
                CONCAT16(bVar39 & (byte)((uint)fVar81 >> 0x10),
                         CONCAT15(bVar38 & (byte)((uint)fVar81 >> 8),
                                  CONCAT14(bVar30 & SUB41(fVar81,0),fVar16))));
  auVar32[8] = bVar30 & SUB41(fVar62,0);
  auVar32[9] = bVar38 & (byte)((uint)fVar62 >> 8);
  auVar32[10] = bVar39 & (byte)((uint)fVar62 >> 0x10);
  auVar32[0xb] = bVar40 & (byte)((uint)fVar62 >> 0x18);
  auVar37._0_8_ = CONCAT44(-(float)((ulong)auVar32._0_8_ >> 0x20),-fVar16);
  auVar37._8_4_ = -auVar32._8_4_;
  auVar37._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar37._8_4_;
  *param_9 = auVar37._0_8_;
  *param_8 = uVar115;
  uStack_178 = auVar61._8_8_;
  local_180 = auVar61._0_8_;
  if (local_ac == 3) {
    FUN_00231940(&local_180,&local_f0,&local_e0,&local_d0,local_98,local_a8);
    auVar89._0_4_ =
         local_130[0] +
         ((float)local_120 - local_130[0]) * local_98[0] +
         (local_110[0] - local_130[0]) * local_a8[0];
    auVar89._4_4_ =
         local_130[1] +
         (local_120._4_4_ - local_130[1]) * local_98[0] +
         (local_110[1] - local_130[1]) * local_a8[0];
    auVar89._8_4_ =
         local_130[2] +
         ((float)uStack_118 - local_130[2]) * local_98[0] +
         (local_110[2] - local_130[2]) * local_a8[0];
    auVar89._12_4_ = local_130[3] + 0.0;
    auVar37._12_4_ = 0;
    auVar88._8_8_ = auVar88._8_8_;
  }
  else if (local_ac == 2) {
    FUN_002318c0(&local_180,&local_f0,&local_e0,local_98);
    auVar96._0_8_ =
         CONCAT44(local_130[1] + (local_120._4_4_ - local_130[1]) * local_98[0],
                  local_130[0] + ((float)local_120 - local_130[0]) * local_98[0]);
    auVar96._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * local_98[0];
    auVar96._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * local_98[0];
    auVar68 = NEON_ext(auVar96,auVar96,8,1);
    auVar37._12_4_ = 0;
    auVar88._8_8_ = auVar88._8_8_;
    auVar89._8_4_ = (float)auVar68._0_4_;
    auVar89._0_8_ = auVar96._0_8_;
    auVar89._12_4_ = 0.0;
  }
  else if (local_ac == 1) {
    auVar89._4_4_ = local_130[1];
    auVar89._0_4_ = local_130[0];
    auVar89._8_4_ = local_130[2];
    auVar89._12_4_ = local_130[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar28._0_8_ =
       CONCAT44(auVar89._4_4_ - auVar37._4_4_ * fVar16,auVar89._0_4_ - auVar37._0_4_ * fVar16);
  auVar28._8_4_ = auVar89._8_4_ - auVar37._8_4_ * fVar16;
  auVar28._12_4_ = auVar89._12_4_ - auVar37._12_4_ * fVar16;
  auVar68 = NEON_ext(auVar28,auVar28,8,1);
  auVar29._8_4_ = auVar68._0_4_;
  auVar29._0_8_ = auVar28._0_8_;
  auVar29._12_4_ = 0;
  auVar89 = auVar89 ^ (auVar89 ^ auVar29) & auVar88;
  param_10[1] = auVar89._8_8_;
  *param_10 = auVar89._0_8_;
  return 1;
code_r0x002e4318:
  auVar68._8_8_ = uStack_1b8;
  auVar68._0_8_ = local_1c0;
  lVar7 = *(long *)(param_2 + 8);
  auVar56._4_4_ = iVar31;
  auVar56._0_4_ = iVar31;
  auVar56._8_4_ = iVar31;
  auVar56._12_4_ = iVar31;
  goto LAB_002e432c;
}


