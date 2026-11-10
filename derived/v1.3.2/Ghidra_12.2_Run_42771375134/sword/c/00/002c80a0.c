/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c80a0; name: FUN_002c80a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002c80a0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
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
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte bVar37;
  int iVar38;
  undefined1 auVar39 [12];
  byte bVar45;
  byte bVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  int iVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  uint uVar60;
  undefined8 uVar61;
  float fVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar72;
  ulong uVar73;
  undefined1 auVar75 [16];
  float fVar79;
  undefined1 auVar76 [16];
  undefined8 uVar74;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  float fVar88;
  undefined8 uVar83;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar84 [16];
  float fVar93;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  float fVar111;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined8 uVar114;
  float fVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined8 uVar118;
  float fVar119;
  undefined8 uVar120;
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
  undefined8 local_f0 [2];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint local_ac;
  float local_a8 [2];
  float local_98 [2];
  
  local_ac = 1;
  fVar16 = *param_4;
  fVar20 = param_4[1];
  fVar80 = param_4[2];
  fVar88 = param_4[3];
  auVar62._0_4_ = fVar16 * fVar16;
  auVar62._4_4_ = fVar20 * fVar20;
  auVar62._8_4_ = fVar80 * fVar80;
  auVar62._12_4_ = fVar88 * fVar88;
  auVar75 = NEON_ext(auVar62,auVar62,8,1);
  uVar60 = -(uint)(1.1920929e-07 < auVar62._0_4_ + auVar62._4_4_ + auVar75._0_4_ + auVar75._4_4_);
  fVar107 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar16) & uVar60);
  fVar111 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar20) & uVar60);
  fVar119 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar80) & uVar60);
  fVar16 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar88) & uVar60);
  auVar63._0_4_ = fVar107 * fVar107;
  auVar63._4_4_ = fVar111 * fVar111;
  auVar63._8_4_ = fVar119 * fVar119;
  auVar63._12_4_ = fVar16 * fVar16;
  auVar75 = NEON_ext(auVar63,auVar63,8,1);
  lVar1 = *(long *)(param_2 + 8);
  pfVar11 = *(float **)(param_2 + 0x10);
  fVar20 = auVar75._0_4_ + auVar75._4_4_;
  fVar16 = auVar63._0_4_ + auVar63._4_4_ + fVar20;
  fVar20 = auVar63._0_4_ + auVar63._4_4_ + fVar20;
  uVar9 = CONCAT44(fVar20,fVar16);
  uVar82 = NEON_frsqrte(uVar9,4);
  fVar80 = (float)uVar82;
  fVar88 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar80 * fVar80),uVar9,4);
  fVar80 = fVar80 * (float)uVar82;
  fVar88 = fVar88 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar80 * fVar80),uVar9,4);
  fVar80 = fVar80 * (float)uVar82;
  fVar88 = fVar88 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar80 * fVar80),uVar9,4);
  fVar80 = fVar80 * (float)uVar82;
  fVar88 = fVar88 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar80 * fVar80),uVar9,4);
  uVar73 = CONCAT44(fVar20 * fVar88 * (float)((ulong)uVar82 >> 0x20),fVar16 * fVar80 * (float)uVar82
                   );
  uVar73 = uVar73 ^ (uVar73 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar82 = NEON_frecpe(uVar73,4);
  uVar83 = NEON_frecps(uVar73,uVar82,4);
  fVar16 = (float)uVar82 * (float)uVar83;
  fVar20 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20 * (float)((ulong)uVar82 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = -(fVar107 * fVar16);
  fVar88 = -(fVar111 * fVar16);
  fVar71 = -(fVar119 * fVar16);
  fVar80 = -*(float *)(lVar1 + 0x30);
  fVar89 = -*(float *)(lVar1 + 0x34);
  fVar91 = -*(float *)(lVar1 + 0x38);
  fVar80 = (float)((uint)fVar80 ^
                  ((uint)fVar80 ^ (uint)*(float *)(lVar1 + 0x30)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar71 +
                                *(float *)(param_2 + 0x20) * fVar20 +
                                *(float *)(param_2 + 0x30) * fVar88));
  fVar89 = (float)((uint)fVar89 ^
                  ((uint)fVar89 ^ (uint)*(float *)(lVar1 + 0x34)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar71 +
                                *(float *)(param_2 + 0x24) * fVar20 +
                                *(float *)(param_2 + 0x34) * fVar88));
  fVar91 = (float)((uint)fVar91 ^
                  ((uint)fVar91 ^ (uint)*(float *)(lVar1 + 0x38)) &
                  -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar71 +
                                *(float *)(param_2 + 0x28) * fVar20 +
                                *(float *)(param_2 + 0x38) * fVar88));
  lVar8 = *(long *)(param_3 + 8);
  fVar71 = -*(float *)(lVar8 + 0x30);
  fVar90 = -*(float *)(lVar8 + 0x34);
  fVar92 = -*(float *)(lVar8 + 0x38);
  local_130[0] = pfVar11[0xc] + pfVar11[8] * fVar91 + *pfVar11 * fVar80 + pfVar11[4] * fVar89;
  local_130[1] = pfVar11[0xd] + pfVar11[9] * fVar91 + pfVar11[1] * fVar80 + pfVar11[5] * fVar89;
  local_130[2] = pfVar11[0xe] + pfVar11[10] * fVar91 + pfVar11[2] * fVar80 + pfVar11[6] * fVar89;
  fVar71 = (float)((uint)fVar71 ^
                  ((uint)fVar71 ^ (uint)*(float *)(lVar8 + 0x30)) & -(uint)(0.0 < fVar107 * fVar16))
  ;
  fVar90 = (float)((uint)fVar90 ^
                  ((uint)fVar90 ^ (uint)*(float *)(lVar8 + 0x34)) & -(uint)(0.0 < fVar111 * fVar16))
  ;
  fVar92 = (float)((uint)fVar92 ^
                  ((uint)fVar92 ^ (uint)*(float *)(lVar8 + 0x38)) & -(uint)(0.0 < fVar119 * fVar16))
  ;
  fVar16 = local_130[0] - fVar71;
  fVar20 = local_130[1] - fVar90;
  fVar80 = local_130[2] - fVar92;
  fVar88 = (pfVar11[0xf] + 0.0) - 0.0;
  fVar107 = -fVar16;
  fVar111 = -fVar20;
  auVar75._0_8_ = CONCAT44(fVar111,fVar107);
  auVar75._8_4_ = -fVar80;
  local_f0[1] = CONCAT44(fVar88,fVar80);
  local_f0[0] = CONCAT44(fVar20,fVar16);
  fStack_d8 = 0.0;
  fStack_d4 = 0.0;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  local_130[3] = pfVar11[0xf] + 0.0;
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
  uStack_168 = (ulong)(uint)fVar92;
  local_170 = CONCAT44(fVar90,fVar71);
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  auVar75._12_4_ = 0;
  uVar82 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x18)),
                     CONCAT44(*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x18)),4);
  fVar90 = (float)uVar82 * 0.1;
  auVar117._0_4_ = fVar107 * fVar107;
  auVar117._4_4_ = fVar111 * fVar111;
  auVar117._8_4_ = auVar75._8_4_ * auVar75._8_4_;
  auVar117._12_4_ = 0;
  auVar63 = NEON_ext(auVar117,auVar117,8,1);
  fVar71 = auVar117._0_4_ + auVar117._4_4_ + auVar63._0_4_ + auVar63._4_4_;
  bVar7 = fVar90 * fVar90 < fVar71;
  auVar64._8_8_ = 0xffffffffffffffff;
  auVar64._0_8_ = 0xffffffffffffffff;
  auVar84._0_4_ = -(uint)bVar7;
  auVar84._4_4_ = -(uint)bVar7;
  auVar84._8_4_ = -(uint)bVar7;
  auVar84._12_4_ = -(uint)bVar7;
  NEON_ext(auVar84,auVar84,8,1);
  uStack_1b8 = (ulong)(uint)auVar75._8_4_;
  if (CONCAT13((char)auVar84._12_4_,
               CONCAT12((char)auVar84._8_4_,CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_))) ==
      -1) {
    fVar89 = param_1 + fVar90;
    fVar92 = *param_7 * 0.0 + *param_6;
    fVar107 = param_7[1] * 0.0 + param_6[1];
    fVar111 = param_7[2] * 0.0 + param_6[2];
    fVar119 = param_7[3] * 0.0 + param_6[3];
    auVar48._8_4_ = auVar75._8_4_;
    auVar48._0_8_ = auVar75._0_8_;
    auVar48._12_4_ = 0;
    auVar3._4_4_ = fVar107;
    auVar3._0_4_ = fVar92;
    auVar3._8_4_ = fVar111;
    auVar3._12_4_ = fVar119;
    auVar4._4_4_ = fVar107;
    auVar4._0_4_ = fVar92;
    auVar4._8_4_ = fVar111;
    auVar4._12_4_ = fVar119;
    auVar63 = NEON_ext(auVar3,auVar4,8,1);
    fVar111 = auVar63._0_4_;
    auVar54 = ZEXT816(0);
    local_1c0 = auVar75._0_8_;
    do {
      uVar60 = local_ac;
      fVar94 = auVar48._0_4_;
      auVar26._0_4_ = fVar94 * fVar94;
      fVar100 = auVar48._4_4_;
      auVar26._4_4_ = fVar100 * fVar100;
      fVar101 = auVar48._8_4_;
      auVar26._8_4_ = fVar101 * fVar101;
      auVar26._12_4_ = auVar48._12_4_ * auVar48._12_4_;
      auVar75 = NEON_ext(auVar26,auVar26,8,1);
      lVar1 = *(long *)(param_2 + 8);
      pfVar11 = *(float **)(param_2 + 0x10);
      fVar91 = auVar75._0_4_ + auVar75._4_4_;
      fVar119 = auVar26._0_4_ + auVar26._4_4_ + fVar91;
      fVar91 = auVar26._0_4_ + auVar26._4_4_ + fVar91;
      uVar9 = CONCAT44(fVar91,fVar119);
      uVar83 = NEON_frsqrte(uVar9,4);
      fVar72 = (float)uVar83;
      fVar79 = (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar72 * fVar72),uVar9,4);
      fVar72 = fVar72 * (float)uVar83;
      fVar79 = fVar79 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar72 * fVar72),uVar9,4);
      fVar72 = fVar72 * (float)uVar83;
      fVar79 = fVar79 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar72 * fVar72),uVar9,4);
      fVar72 = fVar72 * (float)uVar83;
      fVar79 = fVar79 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar72 * fVar72),uVar9,4);
      uVar73 = CONCAT44(fVar91 * fVar79 * (float)((ulong)uVar83 >> 0x20),
                        fVar119 * fVar72 * (float)uVar83);
      uVar73 = uVar73 ^ (uVar73 ^ uVar9) & CONCAT44(-(uint)(fVar119 == 0.0),-(uint)(fVar119 == 0.0))
      ;
      uVar83 = NEON_frecpe(uVar73,4);
      uVar120 = NEON_frecps(uVar73,uVar83,4);
      fVar119 = (float)uVar83 * (float)uVar120;
      fVar91 = (float)((ulong)uVar83 >> 0x20) * (float)((ulong)uVar120 >> 0x20);
      uVar83 = NEON_frecps(uVar73,CONCAT44(fVar91,fVar119),4);
      fVar119 = fVar119 * (float)uVar83;
      fVar91 = fVar91 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frecps(uVar73,CONCAT44(fVar91,fVar119),4);
      fVar119 = fVar119 * (float)uVar83;
      fVar91 = fVar91 * (float)((ulong)uVar83 >> 0x20);
      uVar83 = NEON_frecps(uVar73,CONCAT44(fVar91,fVar119),4);
      fVar119 = fVar119 * (float)uVar83;
      uVar83 = NEON_frecps(uVar73,CONCAT44(fVar91 * (float)((ulong)uVar83 >> 0x20),fVar119),4);
      fVar119 = fVar119 * (float)uVar83;
      fVar94 = fVar94 * fVar119;
      fVar100 = fVar100 * fVar119;
      fVar101 = fVar101 * fVar119;
      fVar119 = -*(float *)(lVar1 + 0x30);
      fVar91 = -*(float *)(lVar1 + 0x34);
      fVar93 = -*(float *)(lVar1 + 0x38);
      fVar119 = (float)((uint)fVar119 ^
                       ((uint)fVar119 ^ (uint)*(float *)(lVar1 + 0x30)) &
                       -(uint)(0.0 < *(float *)(param_2 + 0x40) * fVar101 +
                                     *(float *)(param_2 + 0x20) * fVar94 +
                                     *(float *)(param_2 + 0x30) * fVar100));
      fVar91 = (float)((uint)fVar91 ^
                      ((uint)fVar91 ^ (uint)*(float *)(lVar1 + 0x34)) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x44) * fVar101 +
                                    *(float *)(param_2 + 0x24) * fVar94 +
                                    *(float *)(param_2 + 0x34) * fVar100));
      fVar93 = (float)((uint)fVar93 ^
                      ((uint)fVar93 ^ (uint)*(float *)(lVar1 + 0x38)) &
                      -(uint)(0.0 < *(float *)(param_2 + 0x48) * fVar101 +
                                    *(float *)(param_2 + 0x28) * fVar94 +
                                    *(float *)(param_2 + 0x38) * fVar100));
      auVar76._0_4_ = -(uint)(0.0 < -fVar94);
      auVar76._4_4_ = -(uint)(0.0 < -fVar100);
      auVar76._8_4_ = -(uint)(0.0 < -fVar101);
      auVar76._12_4_ = 0;
      auVar75 = *(undefined1 (*) [16])(lVar8 + 0x30);
      auVar77._0_4_ = -auVar75._0_4_;
      auVar77._4_4_ = -auVar75._4_4_;
      auVar77._8_4_ = -auVar75._8_4_;
      auVar77._12_4_ = 0;
      auVar77 = auVar77 ^ (auVar77 ^ auVar75) & auVar76;
      fVar72 = pfVar11[0xc] + pfVar11[8] * fVar93 + *pfVar11 * fVar119 + pfVar11[4] * fVar91;
      fVar79 = pfVar11[0xd] + pfVar11[9] * fVar93 + pfVar11[1] * fVar119 + pfVar11[5] * fVar91;
      auVar65._0_8_ = CONCAT44(fVar79,fVar72);
      auVar65._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar93 + pfVar11[2] * fVar119 + pfVar11[6] * fVar91;
      auVar65._12_4_ = pfVar11[0xf] + 0.0;
      auVar85._0_4_ = fVar92 + auVar77._0_4_;
      auVar85._4_4_ = fVar107 + auVar77._4_4_;
      auVar85._8_4_ = fVar111 + auVar77._8_4_;
      auVar85._12_4_ = auVar77._12_4_ + 0.0;
      auVar30._0_4_ = fVar72 - auVar85._0_4_;
      auVar30._4_4_ = fVar79 - auVar85._4_4_;
      auVar30._8_4_ = auVar65._8_4_ - auVar85._8_4_;
      auVar30._12_4_ = auVar65._12_4_ - auVar85._12_4_;
      auVar102._0_4_ = fVar94 * -auVar30._0_4_;
      auVar102._4_4_ = fVar100 * -auVar30._4_4_;
      auVar102._8_4_ = fVar101 * -auVar30._8_4_;
      auVar102._12_4_ = 0;
      auVar75 = NEON_ext(auVar102,auVar102,8,1);
      fVar91 = auVar75._0_4_ + auVar75._4_4_;
      fVar93 = (auVar102._0_4_ + auVar102._4_4_ + fVar91) - fVar89;
      uVar83 = auVar54._8_8_;
      fVar119 = fVar71;
      if (fVar93 <= 0.0) {
        uVar120 = auVar54._0_8_;
      }
      else {
        auVar95._0_4_ = fVar94 * *param_7;
        auVar95._4_4_ = fVar100 * param_7[1];
        auVar95._8_4_ = fVar101 * param_7[2];
        auVar95._12_4_ = param_7[3] * 0.0;
        auVar75 = NEON_ext(auVar95,auVar95,8,1);
        fVar94 = auVar75._0_4_ + auVar75._4_4_;
        fVar71 = auVar95._0_4_ + auVar95._4_4_ + fVar94;
        uVar83 = CONCAT44(auVar95._0_4_ + auVar95._4_4_ + fVar94,fVar71);
        if (0.0 <= fVar71) {
          return 0;
        }
        uVar120 = NEON_frecpe(uVar83,4);
        uVar114 = NEON_frecps(uVar83,uVar120,4);
        fVar71 = (float)uVar120 * (float)uVar114;
        fVar94 = (float)((ulong)uVar120 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
        uVar120 = NEON_frecps(uVar83,CONCAT44(fVar94,fVar71),4);
        fVar71 = fVar71 * (float)uVar120;
        fVar94 = fVar94 * (float)((ulong)uVar120 >> 0x20);
        uVar120 = NEON_frecps(uVar83,CONCAT44(fVar94,fVar71),4);
        fVar71 = fVar71 * (float)uVar120;
        fVar94 = fVar94 * (float)((ulong)uVar120 >> 0x20);
        uVar120 = NEON_frecps(uVar83,CONCAT44(fVar94,fVar71),4);
        fVar71 = fVar71 * (float)uVar120;
        fVar94 = fVar94 * (float)((ulong)uVar120 >> 0x20);
        uVar83 = NEON_frecps(uVar83,CONCAT44(fVar94,fVar71),4);
        fVar71 = auVar54._0_4_ - fVar93 * fVar71 * (float)uVar83;
        uVar120 = CONCAT44(auVar54._4_4_ -
                           ((auVar102._0_4_ + auVar102._4_4_ + fVar91) -
                           (param_1 + (float)((ulong)uVar82 >> 0x20) * 0.1)) *
                           fVar94 * (float)((ulong)uVar83 >> 0x20),fVar71);
        uVar83 = 0;
        if (auVar54._0_4_ < fVar71) {
          uVar114 = NEON_fmov(0x3f800000,4);
          if ((float)uVar114 < fVar71) {
            return 0;
          }
          auVar40._0_4_ = *param_7 * fVar71 + *param_6;
          auVar40._4_4_ = param_7[1] * fVar71 + param_6[1];
          auVar40._8_4_ = param_7[2] * fVar71 + param_6[2];
          auVar40._12_4_ = param_7[3] * fVar71 + param_6[3];
          auVar75 = NEON_ext(auVar40,auVar40,8,1);
          fVar71 = auVar75._0_4_;
          auVar85._0_4_ = auVar77._0_4_ + auVar40._0_4_;
          auVar85._4_4_ = auVar77._4_4_ + auVar40._4_4_;
          auVar85._8_4_ = auVar77._8_4_ + fVar71;
          auVar85._12_4_ = auVar77._12_4_ + 0.0;
          fVar92 = auVar40._0_4_ - fVar92;
          fVar107 = auVar40._4_4_ - fVar107;
          fVar111 = fVar71 - fVar111;
          local_170._0_4_ = (float)local_170 + fVar92;
          local_170._4_4_ = local_170._4_4_ + fVar107;
          uStack_168._0_4_ = (float)uStack_168 + fVar111;
          uStack_168._4_4_ = uStack_168._4_4_ + 0.0;
          local_160._0_4_ = (float)local_160 + fVar92;
          local_160._4_4_ = local_160._4_4_ + fVar107;
          uStack_158._0_4_ = (float)uStack_158 + fVar111;
          uStack_158._4_4_ = uStack_158._4_4_ + 0.0;
          local_150._0_4_ = (float)local_150 + fVar92;
          local_150._4_4_ = local_150._4_4_ + fVar107;
          uStack_148._0_4_ = (float)uStack_148 + fVar111;
          uStack_148._4_4_ = uStack_148._4_4_ + 0.0;
          auVar55._0_8_ = CONCAT44(local_130[1] - local_170._4_4_,local_130[0] - (float)local_170);
          auVar55._8_4_ = local_130[2] - (float)uStack_168;
          auVar55._12_4_ = local_130[3] - uStack_168._4_4_;
          auVar96._0_8_ = CONCAT44(local_110[1] - local_150._4_4_,local_110[0] - (float)local_150);
          auVar96._8_4_ = local_110[2] - (float)uStack_148;
          auVar96._12_4_ = local_110[3] - uStack_148._4_4_;
          auVar30._0_4_ = fVar72 - auVar85._0_4_;
          auVar30._4_4_ = fVar79 - auVar85._4_4_;
          auVar30._8_4_ = auVar65._8_4_ - auVar85._8_4_;
          auVar30._12_4_ = auVar65._12_4_ - auVar85._12_4_;
          local_f0[1] = auVar55._8_8_;
          local_f0[0] = auVar55._0_8_;
          fStack_d8 = (float)uStack_118 - (float)uStack_158;
          fStack_d4 = uStack_118._4_4_ - uStack_158._4_4_;
          local_e0 = (float)local_120 - (float)local_160;
          fStack_dc = local_120._4_4_ - local_160._4_4_;
          uStack_c8 = auVar96._8_8_;
          local_d0 = auVar96._0_8_;
          fVar92 = auVar40._0_4_;
          fVar107 = auVar40._4_4_;
          fVar111 = fVar71;
          local_1c0 = auVar48._0_8_;
          uStack_1b8 = auVar48._8_8_;
          fVar119 = 3.4028235e+38;
        }
      }
      uVar9 = (ulong)local_ac;
      bVar7 = local_ac == 3;
      local_ac = local_ac + 1;
      local_f0[uVar9 * 2 + -7] = auVar65._8_8_;
      local_f0[uVar9 * 2 + -8] = auVar65._0_8_;
      local_f0[uVar9 * 2 + -0xf] = auVar85._8_8_;
      local_f0[uVar9 * 2 + -0x10] = auVar85._0_8_;
      local_f0[uVar9 * 2 + 1] = auVar30._8_8_;
      local_f0[uVar9 * 2] = auVar30._0_8_;
      if (bVar7) {
        auVar30 = FUN_00237120(local_f0,local_130,&local_170,&local_ac);
      }
      else {
        fVar71 = (float)local_f0[0];
        fVar91 = (float)((ulong)local_f0[0] >> 0x20);
        fVar94 = (float)local_f0[1];
        fVar100 = (float)((ulong)local_f0[1] >> 0x20);
        if (uVar60 == 2) {
          auVar30._8_8_ = local_f0[1];
          auVar30._0_8_ = local_f0[0];
          auVar5._4_4_ = fStack_dc;
          auVar5._0_4_ = local_e0;
          auVar5._8_4_ = fStack_d8;
          auVar5._12_4_ = fStack_d4;
          auVar6._8_8_ = uStack_c8;
          auVar6._0_8_ = local_d0;
          auVar66._0_4_ = local_e0 - fVar71;
          auVar66._4_4_ = fStack_dc - fVar91;
          auVar66._8_4_ = fStack_d8 - fVar94;
          auVar66._12_4_ = fStack_d4 - fVar100;
          fVar79 = (float)local_d0;
          auVar58._0_4_ = fVar79 - fVar71;
          fVar93 = (float)((ulong)local_d0 >> 0x20);
          auVar58._4_4_ = fVar93 - fVar91;
          fVar17 = (float)uStack_c8;
          auVar58._8_4_ = fVar17 - fVar94;
          fVar21 = (float)((ulong)uStack_c8 >> 0x20);
          auVar58._12_4_ = fVar21 - fVar100;
          auVar75 = NEON_ext(auVar66,auVar66,8,1);
          auVar63 = NEON_ext(auVar58,auVar58,8,1);
          fVar81 = auVar66._0_4_ * auVar58._4_4_ - auVar66._4_4_ * auVar58._0_4_;
          uVar114 = NEON_ext(CONCAT44(auVar66._4_4_ * auVar58._8_4_ - auVar66._8_4_ * auVar58._4_4_,
                                      fVar81),
                             CONCAT44(auVar75._4_4_ * auVar58._4_4_ - auVar66._4_4_ * auVar63._4_4_,
                                      auVar75._0_4_ * auVar58._0_4_ - auVar66._0_4_ * auVar63._0_4_)
                             ,4,1);
          fVar70 = (float)uVar114;
          auVar86._0_4_ = fVar70 * fVar70;
          fVar18 = (float)((ulong)uVar114 >> 0x20);
          auVar86._4_4_ = fVar18 * fVar18;
          auVar86._8_4_ = fVar81 * fVar81;
          auVar86._12_4_ = 0;
          auVar75 = NEON_ext(auVar86,auVar86,8,1);
          fVar72 = auVar75._0_4_ + auVar75._4_4_;
          fVar101 = auVar86._0_4_ + auVar86._4_4_ + fVar72;
          uVar114 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar72,fVar101);
          local_ac = 3;
          if (1.1920929e-07 < fVar101) {
            if (fVar101 != 0.0) {
              auVar75 = NEON_ext(auVar5,auVar5,8,1);
              auVar63 = NEON_ext(auVar6,auVar6,8,1);
              fVar115 = local_e0 * fVar93 - fStack_dc * fVar79;
              auVar117 = NEON_ext(auVar30,auVar30,8,1);
              uVar74 = NEON_ext(CONCAT44(fStack_dc * fVar17 - fStack_d8 * fVar93,fVar115),
                                CONCAT44(auVar75._4_4_ * fVar93 - fStack_dc * auVar63._4_4_,
                                         auVar75._0_4_ * fVar79 - local_e0 * auVar63._0_4_),4,1);
              fVar101 = fVar91 * fVar79 - fVar71 * fVar93;
              uVar118 = NEON_ext(CONCAT44(fVar94 * fVar93 - fVar91 * fVar17,fVar101),
                                 CONCAT44(fVar91 * auVar63._4_4_ - auVar117._4_4_ * fVar93,
                                          fVar71 * auVar63._0_4_ - auVar117._0_4_ * fVar79),4,1);
              fVar72 = fVar71 * fStack_dc - fVar91 * local_e0;
              uVar61 = NEON_ext(CONCAT44(fVar91 * fStack_d8 - fVar94 * fStack_dc,fVar72),
                                CONCAT44(auVar117._4_4_ * fStack_dc - fVar91 * auVar75._4_4_,
                                         auVar117._0_4_ * local_e0 - fVar71 * auVar75._0_4_),4,1);
              auVar103._0_4_ = (float)uVar74 * fVar70;
              auVar103._4_4_ = (float)((ulong)uVar74 >> 0x20) * fVar18;
              auVar103._8_4_ = fVar115 * fVar81;
              auVar103._12_4_ = 0;
              auVar75 = NEON_ext(auVar103,auVar103,8,1);
              auVar108._0_4_ = (float)uVar118 * fVar70;
              auVar108._4_4_ = (float)((ulong)uVar118 >> 0x20) * fVar18;
              auVar108._8_4_ = fVar101 * fVar81;
              auVar108._12_4_ = 0;
              auVar63 = NEON_ext(auVar108,auVar108,8,1);
              fVar101 = auVar103._0_4_ + auVar103._4_4_ + auVar75._0_4_ + auVar75._4_4_;
              auVar112._0_4_ = (float)uVar61 * fVar70;
              auVar112._4_4_ = (float)((ulong)uVar61 >> 0x20) * fVar18;
              auVar112._8_4_ = fVar72 * fVar81;
              auVar112._12_4_ = 0;
              fVar72 = auVar108._0_4_ + auVar108._4_4_ + auVar63._0_4_ + auVar63._4_4_;
              auVar75 = NEON_ext(auVar112,auVar112,8,1);
              fVar115 = auVar112._0_4_ + auVar112._4_4_ + auVar75._0_4_ + auVar75._4_4_;
              bVar7 = (0.0 <= fVar101 && 0.0 <= fVar72) && 0.0 <= fVar115;
              auVar113._0_4_ = -(uint)bVar7;
              auVar113._4_4_ = -(uint)bVar7;
              auVar113._8_4_ = -(uint)bVar7;
              auVar113._12_4_ = -(uint)bVar7;
              NEON_ext(auVar113,auVar113,8,1);
              if (CONCAT13((char)auVar113._12_4_,
                           CONCAT12((char)auVar113._8_4_,
                                    CONCAT11((char)auVar113._4_4_,(char)auVar113._0_4_))) == -1) {
                auVar31._0_4_ = fVar71 * fVar70;
                auVar31._4_4_ = fVar91 * fVar18;
                auVar31._8_4_ = fVar94 * fVar81;
                auVar31._12_4_ = fVar100 * 0.0;
                auVar75 = NEON_ext(auVar31,auVar31,8,1);
                uVar61 = NEON_frecpe(uVar114,4);
                uVar74 = NEON_frecps(uVar114,uVar61,4);
                fVar71 = (float)uVar61 * (float)uVar74;
                fVar91 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                uVar61 = NEON_frecps(uVar114,CONCAT44(fVar91,fVar71),4);
                fVar71 = fVar71 * (float)uVar61;
                fVar91 = fVar91 * (float)((ulong)uVar61 >> 0x20);
                uVar61 = NEON_frecps(uVar114,CONCAT44(fVar91,fVar71),4);
                fVar71 = fVar71 * (float)uVar61;
                fVar91 = fVar91 * (float)((ulong)uVar61 >> 0x20);
                uVar61 = NEON_frecps(uVar114,CONCAT44(fVar91,fVar71),4);
                fVar71 = fVar71 * (float)uVar61;
                uVar114 = NEON_frecps(uVar114,CONCAT44(fVar91 * (float)((ulong)uVar61 >> 0x20),
                                                       fVar71),4);
                fVar71 = (auVar31._0_4_ + auVar31._4_4_ + auVar75._0_4_ + auVar75._4_4_) *
                         fVar71 * (float)uVar114;
                auVar30._0_4_ = fVar70 * fVar71;
                auVar30._4_4_ = fVar18 * fVar71;
                auVar30._8_4_ = fVar81 * fVar71;
                auVar30._12_4_ = 0.0;
              }
              else {
                auVar78._0_4_ = -fVar71 * auVar66._0_4_;
                auVar78._4_4_ = -fVar91 * auVar66._4_4_;
                auVar78._8_4_ = -fVar94 * auVar66._8_4_;
                auVar78._12_4_ = auVar66._12_4_ * 0.0;
                auVar75 = NEON_ext(auVar78,auVar78,8,1);
                fVar81 = auVar75._0_4_ + auVar75._4_4_;
                auVar87._0_4_ = -local_e0 * auVar66._0_4_;
                auVar87._4_4_ = -fStack_dc * auVar66._4_4_;
                auVar87._8_4_ = -fStack_d8 * auVar66._8_4_;
                auVar87._12_4_ = auVar66._12_4_ * 0.0;
                auVar75 = NEON_ext(auVar87,auVar87,8,1);
                fVar22 = auVar75._0_4_ + auVar75._4_4_;
                fVar70 = auVar78._0_4_ + auVar78._4_4_ + fVar81;
                fVar18 = auVar87._0_4_ + auVar87._4_4_ + fVar22;
                fVar22 = auVar87._0_4_ + auVar87._4_4_ + fVar22;
                bVar7 = (0.0 <= fVar70 && fVar115 <= 0.0) && fVar18 <= 0.0;
                auVar109._0_4_ = -(uint)bVar7;
                auVar109._4_4_ = -(uint)bVar7;
                auVar109._8_4_ = -(uint)bVar7;
                auVar109._12_4_ = -(uint)bVar7;
                NEON_ext(auVar109,auVar109,8,1);
                if (CONCAT13((char)auVar109._12_4_,
                             CONCAT12((char)auVar109._8_4_,
                                      CONCAT11((char)auVar109._4_4_,(char)auVar109._0_4_))) == -1) {
                  uVar114 = CONCAT44((auVar78._0_4_ + auVar78._4_4_ + fVar81) - fVar22,
                                     fVar70 - fVar18);
                  uVar61 = NEON_frecpe(uVar114,4);
                  uVar74 = NEON_frecps(uVar114,uVar61,4);
                  fVar101 = (float)uVar61 * (float)uVar74;
                  fVar72 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                  uVar61 = NEON_frecps(uVar114,CONCAT44(fVar72,fVar101),4);
                  fVar101 = fVar101 * (float)uVar61;
                  fVar72 = fVar72 * (float)((ulong)uVar61 >> 0x20);
                  uVar61 = NEON_frecps(uVar114,CONCAT44(fVar72,fVar101),4);
                  fVar101 = fVar101 * (float)uVar61;
                  fVar72 = fVar72 * (float)((ulong)uVar61 >> 0x20);
                  uVar61 = NEON_frecps(uVar114,CONCAT44(fVar72,fVar101),4);
                  fVar101 = fVar101 * (float)uVar61;
                  uVar114 = NEON_frecps(uVar114,CONCAT44(fVar72 * (float)((ulong)uVar61 >> 0x20),
                                                         fVar101),4);
                  fVar70 = fVar70 * (float)(-(uint)(1.1920929e-07 < ABS(fVar70 - fVar18)) &
                                           (uint)(fVar101 * (float)uVar114));
                  puVar10 = &local_170;
                  pfVar11 = local_130;
                  auVar32._0_8_ =
                       CONCAT44(fVar91 + auVar66._4_4_ * fVar70,fVar71 + auVar66._0_4_ * fVar70);
                  auVar32._8_4_ = fVar94 + auVar66._8_4_ * fVar70;
                  auVar32._12_4_ = fVar100 + auVar66._12_4_ * fVar70;
                  auVar75 = NEON_ext(auVar32,auVar32,8,1);
                  pfVar12 = (float *)local_f0;
                  auVar30._8_4_ = (float)auVar75._0_4_;
                  auVar30._0_8_ = auVar32._0_8_;
                  auVar30._12_4_ = 0.0;
                  local_ac = 2;
LAB_002c8c20:
                  puVar13 = &local_160;
                  pfVar14 = (float *)&local_120;
                  pfVar15 = &local_e0;
                }
                else {
                  auVar110._0_4_ = -local_e0 * auVar58._0_4_;
                  auVar110._4_4_ = -fStack_dc * auVar58._4_4_;
                  auVar110._8_4_ = -fStack_d8 * auVar58._8_4_;
                  auVar110._12_4_ = auVar58._12_4_ * 0.0;
                  auVar75 = NEON_ext(auVar110,auVar110,8,1);
                  fVar23 = auVar75._0_4_ + auVar75._4_4_;
                  auVar67._0_4_ = auVar66._0_4_ * -fVar79;
                  auVar67._4_4_ = auVar66._4_4_ * -fVar93;
                  auVar67._8_4_ = auVar66._8_4_ * -fVar17;
                  auVar67._12_4_ = auVar66._12_4_ * 0.0;
                  auVar116._0_4_ = auVar58._0_4_ * -fVar79;
                  auVar116._4_4_ = auVar58._4_4_ * -fVar93;
                  auVar116._8_4_ = auVar58._8_4_ * -fVar17;
                  auVar116._12_4_ = auVar58._12_4_ * 0.0;
                  fVar81 = auVar110._0_4_ + auVar110._4_4_ + fVar23;
                  auVar75 = NEON_ext(auVar67,auVar67,8,1);
                  fVar24 = auVar75._0_4_ + auVar75._4_4_;
                  fVar115 = auVar67._0_4_ + auVar67._4_4_ + fVar24;
                  auVar75 = NEON_ext(auVar116,auVar116,8,1);
                  fVar25 = auVar75._0_4_ + auVar75._4_4_;
                  fVar19 = auVar116._0_4_ + auVar116._4_4_ + fVar25;
                  fVar25 = auVar116._0_4_ + auVar116._4_4_ + fVar25;
                  bVar7 = (fVar18 <= fVar81 && fVar101 <= 0.0) && fVar19 <= fVar115;
                  auVar104._0_4_ = -(uint)bVar7;
                  auVar104._4_4_ = -(uint)bVar7;
                  auVar104._8_4_ = -(uint)bVar7;
                  auVar104._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar104,auVar104,8,1);
                  puVar13 = &local_150;
                  pfVar14 = local_110;
                  pfVar15 = (float *)&local_d0;
                  if (CONCAT13((char)auVar104._12_4_,
                               CONCAT12((char)auVar104._8_4_,
                                        CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1)
                  {
                    local_ac = 2;
                    fVar71 = (fVar81 - fVar18) + (fVar115 - fVar19);
                    uVar114 = CONCAT44(((auVar110._0_4_ + auVar110._4_4_ + fVar23) - fVar22) +
                                       ((auVar67._0_4_ + auVar67._4_4_ + fVar24) - fVar25),fVar71);
                    uVar61 = NEON_frecpe(uVar114,4);
                    uVar74 = NEON_frecps(uVar114,uVar61,4);
                    fVar91 = (float)uVar61 * (float)uVar74;
                    fVar94 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar94,fVar91),4);
                    fVar91 = fVar91 * (float)uVar61;
                    fVar94 = fVar94 * (float)((ulong)uVar61 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar94,fVar91),4);
                    fVar91 = fVar91 * (float)uVar61;
                    fVar94 = fVar94 * (float)((ulong)uVar61 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar94,fVar91),4);
                    fVar91 = fVar91 * (float)uVar61;
                    uVar114 = NEON_frecps(uVar114,CONCAT44(fVar94 * (float)((ulong)uVar61 >> 0x20),
                                                           fVar91),4);
                    fVar71 = (fVar81 - fVar18) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar71)) &
                                    (uint)(fVar91 * (float)uVar114));
                    auVar33._0_8_ =
                         CONCAT44(fStack_dc + (fVar93 - fStack_dc) * fVar71,
                                  local_e0 + (fVar79 - local_e0) * fVar71);
                    auVar33._8_4_ = fStack_d8 + (fVar17 - fStack_d8) * fVar71;
                    auVar33._12_4_ = fStack_d4 + (fVar21 - fStack_d4) * fVar71;
                    auVar75 = NEON_ext(auVar33,auVar33,8,1);
                    auVar30._8_4_ = (float)auVar75._0_4_;
                    auVar30._0_8_ = auVar33._0_8_;
                    auVar30._12_4_ = 0.0;
                    puVar10 = &local_160;
                    pfVar11 = (float *)&local_120;
                    pfVar12 = &local_e0;
                  }
                  else {
                    auVar105._0_4_ = -fVar71 * auVar58._0_4_;
                    auVar105._4_4_ = -fVar91 * auVar58._4_4_;
                    auVar105._8_4_ = -fVar94 * auVar58._8_4_;
                    auVar105._12_4_ = auVar58._12_4_ * 0.0;
                    auVar75 = NEON_ext(auVar105,auVar105,8,1);
                    fVar79 = auVar75._0_4_ + auVar75._4_4_;
                    fVar101 = auVar105._0_4_ + auVar105._4_4_ + fVar79;
                    bVar7 = (fVar72 <= 0.0 && 0.0 <= fVar101) && fVar19 <= 0.0;
                    auVar97._0_4_ = -(uint)bVar7;
                    auVar97._4_4_ = -(uint)bVar7;
                    auVar97._8_4_ = -(uint)bVar7;
                    auVar97._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar97,auVar97,8,1);
                    if (CONCAT13((char)auVar97._12_4_,
                                 CONCAT12((char)auVar97._8_4_,
                                          CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) != -1)
                    {
                      bVar7 = fVar70 <= 0.0 && fVar101 <= 0.0;
                      auVar59._0_4_ = -(uint)bVar7;
                      auVar59._4_4_ = -(uint)bVar7;
                      auVar59._8_4_ = -(uint)bVar7;
                      auVar59._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar59,auVar59,8,1);
                      if (CONCAT13((char)auVar59._12_4_,
                                   CONCAT12((char)auVar59._8_4_,
                                            CONCAT11((char)auVar59._4_4_,(char)auVar59._0_4_))) ==
                          -1) {
                        puVar10 = &local_170;
                        pfVar11 = local_130;
                        pfVar12 = (float *)local_f0;
                      }
                      else {
                        bVar7 = 0.0 <= fVar18 && fVar81 <= fVar18;
                        auVar28._0_4_ = -(uint)bVar7;
                        auVar28._4_4_ = -(uint)bVar7;
                        auVar28._8_4_ = -(uint)bVar7;
                        auVar28._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar28,auVar28,8,1);
                        iVar38 = CONCAT13((char)auVar28._12_4_,
                                          CONCAT12((char)auVar28._8_4_,
                                                   CONCAT11((char)auVar28._4_4_,(char)auVar28._0_4_)
                                                  ));
                        iVar53 = -(uint)(iVar38 == -1);
                        auVar29._4_4_ = iVar53;
                        auVar29._0_4_ = iVar53;
                        auVar29._8_4_ = iVar53;
                        auVar29._12_4_ = iVar53;
                        lVar1 = 0x10;
                        if (iVar38 != -1) {
                          lVar1 = 0x20;
                        }
                        auVar30 = auVar6 ^ (auVar6 ^ auVar5) & auVar29;
                        pfVar12 = (float *)((long)local_f0 + lVar1);
                        pfVar11 = (float *)((long)local_f0 + lVar1 + -0x40);
                        puVar10 = (undefined8 *)((long)local_f0 + lVar1 + -0x80);
                      }
                      local_ac = 1;
                      goto LAB_002c8c20;
                    }
                    uVar114 = CONCAT44((auVar105._0_4_ + auVar105._4_4_ + fVar79) - fVar25,
                                       fVar101 - fVar19);
                    uVar61 = NEON_frecpe(uVar114,4);
                    uVar74 = NEON_frecps(uVar114,uVar61,4);
                    fVar72 = (float)uVar61 * (float)uVar74;
                    fVar79 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
                    fVar72 = fVar72 * (float)uVar61;
                    fVar79 = fVar79 * (float)((ulong)uVar61 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
                    fVar72 = fVar72 * (float)uVar61;
                    fVar79 = fVar79 * (float)((ulong)uVar61 >> 0x20);
                    uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
                    fVar72 = fVar72 * (float)uVar61;
                    uVar114 = NEON_frecps(uVar114,CONCAT44(fVar79 * (float)((ulong)uVar61 >> 0x20),
                                                           fVar72),4);
                    fVar101 = fVar101 * (float)(-(uint)(1.1920929e-07 < ABS(fVar101 - fVar19)) &
                                               (uint)(fVar72 * (float)uVar114));
                    auVar34._0_8_ =
                         CONCAT44(fVar91 + auVar58._4_4_ * fVar101,fVar71 + auVar58._0_4_ * fVar101)
                    ;
                    auVar34._8_4_ = fVar94 + auVar58._8_4_ * fVar101;
                    auVar34._12_4_ = fVar100 + auVar58._12_4_ * fVar101;
                    auVar75 = NEON_ext(auVar34,auVar34,8,1);
                    auVar30._8_4_ = (float)auVar75._0_4_;
                    auVar30._0_8_ = auVar34._0_8_;
                    auVar30._12_4_ = 0.0;
                    local_ac = 2;
                    puVar10 = &local_170;
                    pfVar11 = local_130;
                    pfVar12 = (float *)local_f0;
                  }
                }
                local_f0[1] = *(undefined8 *)(pfVar12 + 2);
                local_f0[0] = *(undefined8 *)pfVar12;
                fStack_d8 = (float)*(undefined8 *)(pfVar15 + 2);
                fStack_d4 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                local_e0 = (float)*(undefined8 *)pfVar15;
                fStack_dc = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                local_130[2] = (float)*(undefined8 *)(pfVar11 + 2);
                local_130[3] = (float)((ulong)*(undefined8 *)(pfVar11 + 2) >> 0x20);
                local_130[0] = (float)*(undefined8 *)pfVar11;
                local_130[1] = (float)((ulong)*(undefined8 *)pfVar11 >> 0x20);
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
            auVar41._0_4_ = auVar66._0_4_ * auVar66._0_4_;
            auVar41._4_4_ = auVar66._4_4_ * auVar66._4_4_;
            auVar41._8_4_ = auVar66._8_4_ * auVar66._8_4_;
            auVar41._12_4_ = auVar66._12_4_ * auVar66._12_4_;
            auVar75 = NEON_ext(auVar41,auVar41,8,1);
            fVar72 = auVar75._0_4_ + auVar75._4_4_;
            fVar101 = auVar41._0_4_ + auVar41._4_4_ + fVar72;
            uVar114 = CONCAT44(auVar41._0_4_ + auVar41._4_4_ + fVar72,fVar101);
            bVar7 = fVar101 <= 1.1920929e-07;
            auVar50._0_4_ = -(uint)bVar7;
            auVar50._4_4_ = -(uint)bVar7;
            auVar50._8_4_ = -(uint)bVar7;
            auVar50._12_4_ = -(uint)bVar7;
            NEON_ext(auVar50,auVar50,8,1);
            local_ac = 2;
            if (CONCAT13((char)auVar50._12_4_,
                         CONCAT12((char)auVar50._8_4_,
                                  CONCAT11((char)auVar50._4_4_,(char)auVar50._0_4_))) != -1) {
              auVar51._0_4_ = -fVar71 * auVar66._0_4_;
              auVar51._4_4_ = -fVar91 * auVar66._4_4_;
              auVar51._8_4_ = -fVar94 * auVar66._8_4_;
              auVar51._12_4_ = auVar66._12_4_ * 0.0;
              auVar75 = NEON_ext(auVar51,auVar51,8,1);
              fVar101 = auVar75._0_4_ + auVar75._4_4_;
              uVar61 = NEON_frecpe(uVar114,4);
              uVar74 = NEON_frecps(uVar114,uVar61,4);
              fVar72 = (float)uVar61 * (float)uVar74;
              fVar79 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
              uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
              fVar72 = fVar72 * (float)uVar61;
              fVar79 = fVar79 * (float)((ulong)uVar61 >> 0x20);
              uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
              fVar72 = fVar72 * (float)uVar61;
              fVar79 = fVar79 * (float)((ulong)uVar61 >> 0x20);
              uVar61 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
              fVar72 = fVar72 * (float)uVar61;
              fVar79 = fVar79 * (float)((ulong)uVar61 >> 0x20);
              uVar114 = NEON_frecps(uVar114,CONCAT44(fVar79,fVar72),4);
              uVar61 = NEON_fmov(0x3f800000,4);
              uVar114 = NEON_fmin(CONCAT44((auVar51._0_4_ + auVar51._4_4_ + fVar101) *
                                           fVar79 * (float)((ulong)uVar114 >> 0x20),
                                           (auVar51._0_4_ + auVar51._4_4_ + fVar101) *
                                           fVar72 * (float)uVar114),uVar61,4);
              uVar114 = NEON_fmax(uVar114,0,4);
              fVar101 = (float)uVar114;
              fVar72 = auVar66._0_4_ * fVar101;
              fVar79 = auVar66._4_4_ * fVar101;
              fVar93 = auVar66._8_4_ * fVar101;
              fVar101 = auVar66._12_4_ * fVar101;
              goto LAB_002c879c;
            }
LAB_002c87b0:
            auVar30._8_8_ = local_f0[1];
            auVar30._0_8_ = local_f0[0];
            local_ac = 1;
          }
        }
        else if (uVar60 == 1) {
          fVar72 = local_e0 - fVar71;
          fVar79 = fStack_dc - fVar91;
          fVar93 = fStack_d8 - fVar94;
          fVar101 = fStack_d4 - fVar100;
          auVar49._0_4_ = fVar72 * fVar72;
          auVar49._4_4_ = fVar79 * fVar79;
          auVar49._8_4_ = fVar93 * fVar93;
          auVar49._12_4_ = fVar101 * fVar101;
          auVar75 = NEON_ext(auVar49,auVar49,8,1);
          fVar21 = auVar75._0_4_ + auVar75._4_4_;
          fVar17 = auVar49._0_4_ + auVar49._4_4_ + fVar21;
          uVar114 = CONCAT44(auVar49._0_4_ + auVar49._4_4_ + fVar21,fVar17);
          bVar7 = fVar17 <= 1.1920929e-07;
          auVar56._0_4_ = -(uint)bVar7;
          auVar56._4_4_ = -(uint)bVar7;
          auVar56._8_4_ = -(uint)bVar7;
          auVar56._12_4_ = -(uint)bVar7;
          NEON_ext(auVar56,auVar56,8,1);
          if (CONCAT13((char)auVar56._12_4_,
                       CONCAT12((char)auVar56._8_4_,
                                CONCAT11((char)auVar56._4_4_,(char)auVar56._0_4_))) == -1)
          goto LAB_002c87b0;
          auVar57._0_4_ = -fVar71 * fVar72;
          auVar57._4_4_ = -fVar91 * fVar79;
          auVar57._8_4_ = -fVar94 * fVar93;
          auVar57._12_4_ = fVar101 * 0.0;
          auVar75 = NEON_ext(auVar57,auVar57,8,1);
          fVar17 = auVar75._0_4_ + auVar75._4_4_;
          uVar61 = NEON_frecpe(uVar114,4);
          uVar74 = NEON_frecps(uVar114,uVar61,4);
          fVar21 = (float)uVar61 * (float)uVar74;
          fVar70 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
          uVar61 = NEON_frecps(uVar114,CONCAT44(fVar70,fVar21),4);
          fVar21 = fVar21 * (float)uVar61;
          fVar70 = fVar70 * (float)((ulong)uVar61 >> 0x20);
          uVar61 = NEON_frecps(uVar114,CONCAT44(fVar70,fVar21),4);
          fVar21 = fVar21 * (float)uVar61;
          fVar70 = fVar70 * (float)((ulong)uVar61 >> 0x20);
          uVar61 = NEON_frecps(uVar114,CONCAT44(fVar70,fVar21),4);
          fVar21 = fVar21 * (float)uVar61;
          fVar70 = fVar70 * (float)((ulong)uVar61 >> 0x20);
          uVar114 = NEON_frecps(uVar114,CONCAT44(fVar70,fVar21),4);
          uVar61 = NEON_fmov(0x3f800000,4);
          uVar114 = NEON_fmin(CONCAT44((auVar57._0_4_ + auVar57._4_4_ + fVar17) *
                                       fVar70 * (float)((ulong)uVar114 >> 0x20),
                                       (auVar57._0_4_ + auVar57._4_4_ + fVar17) *
                                       fVar21 * (float)uVar114),uVar61,4);
          uVar114 = NEON_fmax(uVar114,0,4);
          fVar17 = (float)uVar114;
          fVar72 = fVar72 * fVar17;
          fVar79 = fVar79 * fVar17;
          fVar93 = fVar93 * fVar17;
          fVar101 = fVar101 * fVar17;
LAB_002c879c:
          auVar27._0_8_ = CONCAT44(fVar91 + fVar79,fVar71 + fVar72);
          auVar27._8_4_ = fVar94 + fVar93;
          auVar27._12_4_ = fVar100 + fVar101;
          auVar75 = NEON_ext(auVar27,auVar27,8,1);
          auVar30._8_4_ = (float)auVar75._0_4_;
          auVar30._0_8_ = auVar27._0_8_;
          auVar30._12_4_ = 0.0;
        }
      }
      fVar91 = auVar30._0_4_;
      auVar42._0_4_ = fVar91 * fVar91;
      fVar94 = auVar30._4_4_;
      auVar42._4_4_ = fVar94 * fVar94;
      fVar100 = auVar30._8_4_;
      auVar42._8_4_ = fVar100 * fVar100;
      fVar101 = auVar30._12_4_;
      auVar42._12_4_ = fVar101 * fVar101;
      auVar75 = NEON_ext(auVar42,auVar42,8,1);
      fVar71 = auVar42._0_4_ + auVar42._4_4_ + auVar75._0_4_ + auVar75._4_4_;
      iVar38 = -(uint)(fVar71 < fVar119);
      bVar7 = fVar89 * fVar89 < fVar71 && fVar71 < fVar119;
      auVar68._0_4_ = -(uint)bVar7;
      auVar68._4_4_ = -(uint)bVar7;
      auVar68._8_4_ = -(uint)bVar7;
      auVar68._12_4_ = -(uint)bVar7;
      NEON_ext(auVar68,auVar68,8,1);
      auVar48._0_4_ = -fVar91;
      auVar48._4_4_ = -fVar94;
      auVar48._8_4_ = -fVar100;
      auVar48._12_4_ = 0;
      if (CONCAT13((char)auVar68._12_4_,
                   CONCAT12((char)auVar68._8_4_,CONCAT11((char)auVar68._4_4_,(char)auVar68._0_4_)))
          != -1) goto code_r0x002c8c98;
      lVar8 = *(long *)(param_3 + 8);
      auVar54._8_8_ = uVar83;
      auVar54._0_8_ = uVar120;
      fVar16 = fVar91;
      fVar20 = fVar94;
      fVar80 = fVar100;
      fVar88 = fVar101;
    } while( true );
  }
  uVar120 = 0;
  auVar30._12_4_ = fVar88;
  auVar30._8_4_ = fVar80;
  auVar30._4_4_ = fVar20;
  auVar30._0_4_ = fVar16;
  auVar48._8_4_ = auVar75._8_4_;
  auVar48._0_8_ = auVar75._0_8_;
  auVar48._12_4_ = 0;
LAB_002c8ca8:
  auVar99 = ZEXT816(0);
  iVar38 = -(uint)(fVar90 * fVar90 < fVar71);
  bVar37 = (byte)iVar38;
  auVar43[0] = bVar37 & auVar64[0];
  bVar45 = (byte)((uint)iVar38 >> 8);
  auVar43[1] = bVar45 & auVar64[1];
  bVar46 = (byte)((uint)iVar38 >> 0x10);
  auVar43[2] = bVar46 & auVar64[2];
  bVar47 = (byte)((uint)iVar38 >> 0x18);
  auVar43[3] = bVar47 & auVar64[3];
  auVar43[4] = bVar37 & auVar64[4];
  auVar43[5] = bVar45 & auVar64[5];
  auVar43[6] = bVar46 & auVar64[6];
  auVar43[7] = bVar47 & auVar64[7];
  auVar43[8] = bVar37 & auVar64[8];
  auVar43[9] = bVar45 & auVar64[9];
  auVar43[10] = bVar46 & auVar64[10];
  auVar43[0xb] = bVar47 & auVar64[0xb];
  auVar43[0xc] = bVar37 & auVar64[0xc];
  auVar43[0xd] = bVar45 & auVar64[0xd];
  auVar43[0xe] = bVar46 & auVar64[0xe];
  auVar43[0xf] = bVar47 & auVar64[0xf];
  auVar2._4_4_ = fVar20;
  auVar2._0_4_ = fVar16;
  auVar2._8_4_ = fVar80;
  auVar2._12_4_ = fVar88;
  auVar69._4_4_ = fVar20;
  auVar69._0_4_ = fVar16;
  auVar69._8_4_ = fVar80;
  auVar69._12_4_ = fVar88;
  auVar69 = auVar69 ^ (auVar2 ^ auVar30) & auVar64;
  auVar75 = auVar75 ^ (auVar75 ^ auVar48) & auVar43;
  fVar80 = auVar75._0_4_;
  auVar52._0_4_ = fVar80 * fVar80;
  fVar88 = auVar75._4_4_;
  auVar52._4_4_ = fVar88 * fVar88;
  fVar71 = auVar75._8_4_;
  auVar52._8_4_ = fVar71 * fVar71;
  auVar52._12_4_ = auVar75._12_4_ * auVar75._12_4_;
  auVar75 = NEON_ext(auVar52,auVar52,8,1);
  fVar20 = auVar75._0_4_ + auVar75._4_4_;
  fVar16 = auVar52._0_4_ + auVar52._4_4_ + fVar20;
  fVar20 = auVar52._0_4_ + auVar52._4_4_ + fVar20;
  uVar9 = CONCAT44(fVar20,fVar16);
  uVar82 = NEON_frsqrte(uVar9,4);
  fVar90 = (float)uVar82;
  fVar92 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar92 * fVar92,fVar90 * fVar90),uVar9,4);
  fVar90 = fVar90 * (float)uVar82;
  fVar92 = fVar92 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar92 * fVar92,fVar90 * fVar90),uVar9,4);
  fVar90 = fVar90 * (float)uVar82;
  fVar92 = fVar92 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar92 * fVar92,fVar90 * fVar90),uVar9,4);
  fVar90 = fVar90 * (float)uVar82;
  fVar92 = fVar92 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(CONCAT44(fVar92 * fVar92,fVar90 * fVar90),uVar9,4);
  uVar73 = CONCAT44(fVar20 * fVar92 * (float)((ulong)uVar82 >> 0x20),fVar16 * fVar90 * (float)uVar82
                   );
  uVar73 = uVar73 ^ (uVar73 ^ uVar9) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
  uVar82 = NEON_frecpe(uVar73,4);
  uVar83 = NEON_frecps(uVar73,uVar82,4);
  fVar16 = (float)uVar82 * (float)uVar83;
  fVar20 = (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar20 = fVar20 * (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20,fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  iVar38 = -(uint)(0.0 < (float)uVar73);
  uVar82 = NEON_frecps(uVar73,CONCAT44(fVar20 * (float)((ulong)uVar82 >> 0x20),fVar16),4);
  fVar16 = fVar16 * (float)uVar82;
  fVar80 = fVar80 * fVar16;
  fVar88 = fVar88 * fVar16;
  fVar71 = fVar71 * fVar16;
  bVar37 = (byte)iVar38;
  bVar45 = (byte)((uint)iVar38 >> 8);
  bVar46 = (byte)((uint)iVar38 >> 0x10);
  bVar47 = (byte)((uint)iVar38 >> 0x18);
  fVar16 = (float)CONCAT13(bVar47 & (byte)((uint)fVar80 >> 0x18),
                           CONCAT12(bVar46 & (byte)((uint)fVar80 >> 0x10),
                                    CONCAT11(bVar45 & (byte)((uint)fVar80 >> 8),
                                             bVar37 & SUB41(fVar80,0))));
  auVar39._0_8_ =
       CONCAT17(bVar47 & (byte)((uint)fVar88 >> 0x18),
                CONCAT16(bVar46 & (byte)((uint)fVar88 >> 0x10),
                         CONCAT15(bVar45 & (byte)((uint)fVar88 >> 8),
                                  CONCAT14(bVar37 & SUB41(fVar88,0),fVar16))));
  auVar39[8] = bVar37 & SUB41(fVar71,0);
  auVar39[9] = bVar45 & (byte)((uint)fVar71 >> 8);
  auVar39[10] = bVar46 & (byte)((uint)fVar71 >> 0x10);
  auVar39[0xb] = bVar47 & (byte)((uint)fVar71 >> 0x18);
  auVar44._0_8_ = CONCAT44(-(float)((ulong)auVar39._0_8_ >> 0x20),-fVar16);
  auVar44._8_4_ = -auVar39._8_4_;
  iVar38 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
  auVar44._12_4_ = 0;
  auVar98._0_8_ = CONCAT44(iVar38,iVar38);
  auVar98._8_4_ = iVar38;
  auVar98._12_4_ = iVar38;
  param_9[1] = (ulong)(uint)auVar44._8_4_;
  *param_9 = auVar44._0_8_;
  *param_8 = uVar120;
  uStack_178 = auVar69._8_8_;
  local_180 = auVar69._0_8_;
  if (local_ac == 3) {
    FUN_00231940(&local_180,local_f0,&local_e0,&local_d0,local_98,local_a8);
    auVar99._0_4_ =
         local_130[0] +
         ((float)local_120 - local_130[0]) * local_98[0] +
         (local_110[0] - local_130[0]) * local_a8[0];
    auVar99._4_4_ =
         local_130[1] +
         (local_120._4_4_ - local_130[1]) * local_98[0] +
         (local_110[1] - local_130[1]) * local_a8[0];
    auVar99._8_4_ =
         local_130[2] +
         ((float)uStack_118 - local_130[2]) * local_98[0] +
         (local_110[2] - local_130[2]) * local_a8[0];
    auVar99._12_4_ = local_130[3] + 0.0;
    auVar44._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
  }
  else if (local_ac == 2) {
    FUN_002318c0(&local_180,local_f0,&local_e0,local_98);
    auVar106._0_8_ =
         CONCAT44(local_130[1] + (local_120._4_4_ - local_130[1]) * local_98[0],
                  local_130[0] + ((float)local_120 - local_130[0]) * local_98[0]);
    auVar106._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * local_98[0];
    auVar106._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * local_98[0];
    auVar75 = NEON_ext(auVar106,auVar106,8,1);
    auVar44._12_4_ = 0;
    auVar98._8_8_ = auVar98._8_8_;
    auVar99._8_4_ = (float)auVar75._0_4_;
    auVar99._0_8_ = auVar106._0_8_;
    auVar99._12_4_ = 0.0;
  }
  else if (local_ac == 1) {
    auVar99._4_4_ = local_130[1];
    auVar99._0_4_ = local_130[0];
    auVar99._8_4_ = local_130[2];
    auVar99._12_4_ = local_130[3];
  }
  fVar16 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar35._0_8_ =
       CONCAT44(auVar99._4_4_ - auVar44._4_4_ * fVar16,auVar99._0_4_ - auVar44._0_4_ * fVar16);
  auVar35._8_4_ = auVar99._8_4_ - auVar44._8_4_ * fVar16;
  auVar35._12_4_ = auVar99._12_4_ - auVar44._12_4_ * fVar16;
  auVar75 = NEON_ext(auVar35,auVar35,8,1);
  auVar36._8_4_ = auVar75._0_4_;
  auVar36._0_8_ = auVar35._0_8_;
  auVar36._12_4_ = 0;
  auVar99 = auVar99 ^ (auVar99 ^ auVar36) & auVar98;
  param_10[1] = auVar99._8_8_;
  *param_10 = auVar99._0_8_;
  return 1;
code_r0x002c8c98:
  auVar75._8_8_ = uStack_1b8;
  auVar75._0_8_ = local_1c0;
  auVar64._4_4_ = iVar38;
  auVar64._0_4_ = iVar38;
  auVar64._8_4_ = iVar38;
  auVar64._12_4_ = iVar38;
  goto LAB_002c8ca8;
}


