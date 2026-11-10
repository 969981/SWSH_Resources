/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c0dc0; name: FUN_002c0dc0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002c0dc0(float param_1,long param_2,long param_3,float *param_4,undefined8 param_5,
            float *param_6,undefined1 (*param_7) [16],undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined8 *puVar8;
  float *pfVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar31;
  float fVar37;
  float fVar38;
  undefined1 auVar17 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar18 [16];
  float fVar34;
  float fVar39;
  undefined1 auVar19 [16];
  float fVar35;
  float fVar36;
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
  uint uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar54;
  int iVar55;
  ulong uVar56;
  undefined1 auVar57 [12];
  byte bVar72;
  byte bVar73;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  byte bVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  float fVar76;
  int iVar77;
  undefined8 uVar78;
  float fVar87;
  undefined8 uVar79;
  float fVar89;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar88;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined8 uVar98;
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
  undefined8 local_200;
  ulong uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  float fStack_1c8;
  float fStack_1c4;
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
  
  uVar116 = *(undefined8 *)*param_7;
  uVar93 = *(undefined8 *)(*param_7 + 8);
  local_c4 = 1;
  fStack_1d8 = (float)*(undefined8 *)(param_6 + 2);
  fStack_1d4 = (float)((ulong)*(undefined8 *)(param_6 + 2) >> 0x20);
  local_1e0 = (float)*(undefined8 *)param_6;
  fStack_1dc = (float)((ulong)*(undefined8 *)param_6 >> 0x20);
  fVar14 = *param_4;
  fVar15 = param_4[1];
  fVar75 = param_4[2];
  fVar87 = param_4[3];
  auVar41._0_4_ = fVar14 * fVar14;
  auVar41._4_4_ = fVar15 * fVar15;
  auVar41._8_4_ = fVar75 * fVar75;
  auVar41._12_4_ = fVar87 * fVar87;
  auVar58 = NEON_ext(auVar41,auVar41,8,1);
  uVar40 = -(uint)(1.1920929e-07 < auVar41._0_4_ + auVar41._4_4_ + auVar58._0_4_ + auVar58._4_4_);
  fVar16 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar14) & uVar40);
  fVar31 = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar15) & uVar40);
  fVar37 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar75) & uVar40);
  fVar14 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar87) & uVar40);
  auVar80._0_4_ = fVar16 * fVar16;
  auVar80._4_4_ = fVar31 * fVar31;
  auVar80._8_4_ = fVar37 * fVar37;
  auVar80._12_4_ = fVar14 * fVar14;
  auVar58 = NEON_ext(auVar80,auVar80,8,1);
  fVar15 = auVar58._0_4_ + auVar58._4_4_;
  fVar14 = auVar80._0_4_ + auVar80._4_4_ + fVar15;
  fVar15 = auVar80._0_4_ + auVar80._4_4_ + fVar15;
  uVar5 = CONCAT44(fVar15,fVar14);
  uVar78 = NEON_frsqrte(uVar5,4);
  fVar75 = (float)uVar78;
  fVar87 = (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar75 * fVar75),uVar5,4);
  fVar75 = fVar75 * (float)uVar78;
  fVar87 = fVar87 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar75 * fVar75),uVar5,4);
  fVar75 = fVar75 * (float)uVar78;
  fVar87 = fVar87 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar75 * fVar75),uVar5,4);
  fVar75 = fVar75 * (float)uVar78;
  fVar87 = fVar87 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar87 * fVar87,fVar75 * fVar75),uVar5,4);
  uVar56 = CONCAT44(fVar15 * fVar87 * (float)((ulong)uVar78 >> 0x20),fVar14 * fVar75 * (float)uVar78
                   );
  uVar56 = uVar56 ^ (uVar56 ^ uVar5) & CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar78 = NEON_frecpe(uVar56,4);
  uVar79 = NEON_frecps(uVar56,uVar78,4);
  fVar14 = (float)uVar78 * (float)uVar79;
  fVar15 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar79 >> 0x20);
  uVar78 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar78;
  fVar15 = fVar15 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar78;
  fVar15 = fVar15 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar78;
  uVar78 = NEON_frecps(uVar56,CONCAT44(fVar15 * (float)((ulong)uVar78 >> 0x20),fVar14),4);
  fVar14 = fVar14 * (float)uVar78;
  fVar16 = fVar16 * fVar14;
  fVar31 = fVar31 * fVar14;
  fVar37 = fVar37 * fVar14;
  fVar14 = -fVar16;
  fVar15 = -fVar31;
  fVar38 = -fVar37;
  lVar13 = *(long *)(param_2 + 8);
  pfVar7 = *(float **)(param_2 + 0x10);
  fVar75 = *(float *)(param_2 + 0x40) * fVar38 +
           *(float *)(param_2 + 0x20) * fVar14 + *(float *)(param_2 + 0x30) * fVar15;
  fVar87 = *(float *)(param_2 + 0x44) * fVar38 +
           *(float *)(param_2 + 0x24) * fVar14 + *(float *)(param_2 + 0x34) * fVar15;
  fVar38 = *(float *)(param_2 + 0x48) * fVar38 +
           *(float *)(param_2 + 0x28) * fVar14 + *(float *)(param_2 + 0x38) * fVar15;
  auVar59._0_4_ = fVar75 * *(float *)(lVar13 + 0x40);
  auVar59._4_4_ = fVar87 * *(float *)(lVar13 + 0x44);
  auVar59._8_4_ = fVar38 * *(float *)(lVar13 + 0x48);
  auVar59._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
  auVar42._0_4_ = *(float *)(lVar13 + 0x30) * fVar75;
  auVar42._4_4_ = *(float *)(lVar13 + 0x34) * fVar87;
  auVar42._8_4_ = *(float *)(lVar13 + 0x38) * fVar38;
  auVar42._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
  auVar58 = NEON_ext(auVar42,auVar42,8,1);
  fVar14 = auVar58._0_4_ + auVar58._4_4_;
  auVar58 = NEON_ext(auVar59,auVar59,8,1);
  fVar15 = auVar58._0_4_ + auVar58._4_4_;
  auVar17._0_4_ = fVar75 * *(float *)(lVar13 + 0x50);
  auVar17._4_4_ = fVar87 * *(float *)(lVar13 + 0x54);
  auVar17._8_4_ = fVar38 * *(float *)(lVar13 + 0x58);
  auVar17._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
  auVar58 = NEON_ext(auVar17,auVar17,8,1);
  fStack_108 = auVar17._0_4_ + auVar17._4_4_ + auVar58._0_4_ + auVar58._4_4_;
  uVar78 = NEON_ext(CONCAT44(auVar42._0_4_ + auVar42._4_4_ + fVar14,
                             auVar42._0_4_ + auVar42._4_4_ + fVar14),
                    CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar15,
                             auVar59._0_4_ + auVar59._4_4_ + fVar15),4,1);
  fStack_104 = 0.0;
  local_110._0_4_ = (float)uVar78;
  local_110._4_4_ = (float)((ulong)uVar78 >> 0x20);
  uVar5 = FUN_00222070(lVar13,&local_110);
  pfVar12 = (float *)(*(long *)(lVar13 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
  fVar14 = *pfVar12;
  fVar15 = pfVar12[1];
  fVar75 = pfVar12[2];
  lVar11 = *(long *)(param_3 + 8);
  fVar87 = *(float *)(lVar13 + 0x30) * fVar14 + *(float *)(lVar13 + 0x40) * fVar15 +
           *(float *)(lVar13 + 0x50) * fVar75;
  fVar32 = *(float *)(lVar13 + 0x34) * fVar14 + *(float *)(lVar13 + 0x44) * fVar15 +
           *(float *)(lVar13 + 0x54) * fVar75;
  fVar15 = *(float *)(lVar13 + 0x38) * fVar14 + *(float *)(lVar13 + 0x48) * fVar15 +
           *(float *)(lVar13 + 0x58) * fVar75;
  auVar58 = *(undefined1 (*) [16])(pfVar7 + 0xc);
  auVar94._0_4_ = fVar16 * *(float *)(lVar11 + 0x40);
  auVar94._4_4_ = fVar31 * *(float *)(lVar11 + 0x44);
  auVar94._8_4_ = fVar37 * *(float *)(lVar11 + 0x48);
  auVar94._12_4_ = *(float *)(lVar11 + 0x4c) * 0.0;
  auVar60._0_4_ = fVar16 * *(float *)(lVar11 + 0x30);
  auVar60._4_4_ = fVar31 * *(float *)(lVar11 + 0x34);
  auVar60._8_4_ = fVar37 * *(float *)(lVar11 + 0x38);
  auVar60._12_4_ = *(float *)(lVar11 + 0x3c) * 0.0;
  auVar80 = NEON_ext(auVar60,auVar60,8,1);
  auVar43 = NEON_ext(auVar94,auVar94,8,1);
  fVar14 = auVar80._0_4_ + auVar80._4_4_;
  fVar38 = auVar58._0_4_ + *pfVar7 * fVar87 + pfVar7[4] * fVar32 + pfVar7[8] * fVar15;
  fVar33 = auVar58._4_4_ + pfVar7[1] * fVar87 + pfVar7[5] * fVar32 + pfVar7[9] * fVar15;
  fVar87 = auVar58._8_4_ + pfVar7[2] * fVar87 + pfVar7[6] * fVar32 + pfVar7[10] * fVar15;
  fVar32 = auVar58._12_4_ + 0.0;
  fVar15 = auVar43._0_4_ + auVar43._4_4_;
  auVar44._0_4_ = fVar16 * *(float *)(lVar11 + 0x50);
  auVar44._4_4_ = fVar31 * *(float *)(lVar11 + 0x54);
  auVar44._8_4_ = fVar37 * *(float *)(lVar11 + 0x58);
  auVar44._12_4_ = *(float *)(lVar11 + 0x5c) * 0.0;
  auVar58 = NEON_ext(auVar44,auVar44,8,1);
  fStack_108 = auVar44._0_4_ + auVar44._4_4_ + auVar58._0_4_ + auVar58._4_4_;
  uVar78 = NEON_ext(CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar14,
                             auVar60._0_4_ + auVar60._4_4_ + fVar14),
                    CONCAT44(auVar94._0_4_ + auVar94._4_4_ + fVar15,
                             auVar94._0_4_ + auVar94._4_4_ + fVar15),4,1);
  fStack_104 = 0.0;
  local_110._0_4_ = (float)uVar78;
  local_110._4_4_ = (float)((ulong)uVar78 >> 0x20);
  uVar5 = FUN_00222070(lVar11,&local_110);
  pfVar7 = (float *)(*(long *)(lVar11 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
  fVar14 = *pfVar7;
  fVar15 = pfVar7[1];
  fVar75 = pfVar7[2];
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
       *(float *)(lVar11 + 0x30) * fVar14 + *(float *)(lVar11 + 0x40) * fVar15 +
       *(float *)(lVar11 + 0x50) * fVar75;
  local_110._4_4_ =
       *(float *)(lVar11 + 0x34) * fVar14 + *(float *)(lVar11 + 0x44) * fVar15 +
       *(float *)(lVar11 + 0x54) * fVar75;
  local_190 = CONCAT44(local_110._4_4_,(float)local_110);
  fVar14 = *(float *)(lVar11 + 0x38) * fVar14 + *(float *)(lVar11 + 0x48) * fVar15 +
           *(float *)(lVar11 + 0x58) * fVar75;
  local_110._0_4_ = fVar38 - (float)local_110;
  local_110._4_4_ = fVar33 - local_110._4_4_;
  auVar43._0_8_ = CONCAT44(local_110._4_4_,(float)local_110);
  auVar43._8_4_ = fVar87 - fVar14;
  auVar43._12_4_ = fVar32 - 0.0;
  fVar75 = -(float)local_110;
  fVar16 = -local_110._4_4_;
  auVar58._0_8_ = CONCAT44(fVar16,fVar75);
  auVar58._8_4_ = -auVar43._8_4_;
  uStack_1e8 = auVar43._8_8_;
  fStack_f8 = 0.0;
  fStack_f4 = 0.0;
  local_100 = 0.0;
  fStack_fc = 0.0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_188 = (ulong)(uint)fVar14;
  uStack_178 = 0;
  local_180 = 0;
  lVar13 = *(long *)(param_2 + 8);
  auVar58._12_4_ = 0;
  uVar1 = *(undefined4 *)(*(long *)(param_3 + 8) + 0x18);
  uVar78 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar13 + 0x18),*(undefined4 *)(lVar13 + 0x18)),
                     CONCAT44(uVar1,uVar1),4);
  fVar15 = (float)uVar78 * 0.1;
  auVar45._0_4_ = fVar75 * fVar75;
  auVar45._4_4_ = fVar16 * fVar16;
  auVar45._8_4_ = auVar58._8_4_ * auVar58._8_4_;
  auVar45._12_4_ = 0;
  auVar80 = NEON_ext(auVar45,auVar45,8,1);
  fVar14 = auVar45._0_4_ + auVar45._4_4_ + auVar80._0_4_ + auVar80._4_4_;
  bVar4 = fVar15 * fVar15 < fVar14;
  auVar46._8_8_ = 0xffffffffffffffff;
  auVar46._0_8_ = 0xffffffffffffffff;
  auVar61._0_4_ = -(uint)bVar4;
  auVar61._4_4_ = -(uint)bVar4;
  auVar61._8_4_ = -(uint)bVar4;
  auVar61._12_4_ = -(uint)bVar4;
  NEON_ext(auVar61,auVar61,8,1);
  uStack_1f8 = (ulong)(uint)auVar58._8_4_;
  local_150[0] = fVar38;
  local_150[1] = fVar33;
  uStack_148._0_4_ = fVar87;
  uStack_148._4_4_ = fVar32;
  fStack_108 = auVar43._8_4_;
  fStack_104 = auVar43._12_4_;
  if (CONCAT13((char)auVar61._12_4_,
               CONCAT12((char)auVar61._8_4_,CONCAT11((char)auVar61._4_4_,(char)auVar61._0_4_))) ==
      -1) {
    local_1d0._0_4_ = (float)uVar116;
    local_1d0._4_4_ = (float)((ulong)uVar116 >> 0x20);
    fStack_1c8 = (float)uVar93;
    fStack_1c4 = (float)((ulong)uVar93 >> 0x20);
    auVar81._0_8_ = CONCAT44(local_1d0._4_4_ * 0.0 + fStack_1dc,(float)local_1d0 * 0.0 + local_1e0);
    auVar81._8_4_ = fStack_1c8 * 0.0 + fStack_1d8;
    auVar81._12_4_ = fStack_1c4 * 0.0 + fStack_1d4;
    auVar80 = NEON_ext(auVar81,auVar81,8,1);
    fVar75 = auVar80._0_4_;
    fVar87 = param_1 + fVar15;
    uVar116 = 0;
    auVar95._8_4_ = auVar58._8_4_;
    auVar95._0_8_ = auVar58._0_8_;
    auVar95._12_4_ = 0;
    local_200 = auVar58._0_8_;
    local_1f0 = auVar43._0_8_;
    local_1d0 = auVar81._0_8_;
    do {
      fVar76 = auVar95._0_4_;
      auVar18._0_4_ = fVar76 * fVar76;
      fVar88 = auVar95._4_4_;
      auVar18._4_4_ = fVar88 * fVar88;
      fVar89 = auVar95._8_4_;
      auVar18._8_4_ = fVar89 * fVar89;
      auVar18._12_4_ = auVar95._12_4_ * auVar95._12_4_;
      pfVar12 = *(float **)(param_2 + 0x10);
      auVar58 = NEON_ext(auVar18,auVar18,8,1);
      fVar38 = auVar58._0_4_ + auVar58._4_4_;
      fVar16 = auVar18._0_4_ + auVar18._4_4_ + fVar38;
      fVar38 = auVar18._0_4_ + auVar18._4_4_ + fVar38;
      uVar5 = CONCAT44(fVar38,fVar16);
      uVar93 = NEON_frsqrte(uVar5,4);
      fVar31 = (float)uVar93;
      fVar32 = (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar31 * fVar31),uVar5,4);
      fVar31 = fVar31 * (float)uVar93;
      fVar32 = fVar32 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar31 * fVar31),uVar5,4);
      fVar31 = fVar31 * (float)uVar93;
      fVar32 = fVar32 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar31 * fVar31),uVar5,4);
      fVar31 = fVar31 * (float)uVar93;
      fVar32 = fVar32 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT44(fVar32 * fVar32,fVar31 * fVar31),uVar5,4);
      uVar56 = CONCAT44(fVar38 * fVar32 * (float)((ulong)uVar93 >> 0x20),
                        fVar16 * fVar31 * (float)uVar93);
      uVar56 = uVar56 ^ (uVar56 ^ uVar5) & CONCAT44(-(uint)(fVar16 == 0.0),-(uint)(fVar16 == 0.0));
      uVar93 = NEON_frecpe(uVar56,4);
      uVar79 = NEON_frecps(uVar56,uVar93,4);
      fVar16 = (float)uVar93 * (float)uVar79;
      fVar38 = (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar79 >> 0x20);
      uVar93 = NEON_frecps(uVar56,CONCAT44(fVar38,fVar16),4);
      fVar16 = fVar16 * (float)uVar93;
      fVar38 = fVar38 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frecps(uVar56,CONCAT44(fVar38,fVar16),4);
      fVar16 = fVar16 * (float)uVar93;
      fVar38 = fVar38 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frecps(uVar56,CONCAT44(fVar38,fVar16),4);
      fVar16 = fVar16 * (float)uVar93;
      uVar93 = NEON_frecps(uVar56,CONCAT44(fVar38 * (float)((ulong)uVar93 >> 0x20),fVar16),4);
      fVar16 = fVar16 * (float)uVar93;
      fVar76 = fVar76 * fVar16;
      fVar88 = fVar88 * fVar16;
      fVar89 = fVar89 * fVar16;
      fVar32 = -fVar76;
      fVar34 = -fVar88;
      fVar39 = -fVar89;
      fVar31 = *(float *)(param_2 + 0x40) * fVar89 +
               *(float *)(param_2 + 0x20) * fVar76 + *(float *)(param_2 + 0x30) * fVar88;
      fVar33 = *(float *)(param_2 + 0x44) * fVar89 +
               *(float *)(param_2 + 0x24) * fVar76 + *(float *)(param_2 + 0x34) * fVar88;
      fVar37 = *(float *)(param_2 + 0x48) * fVar89 +
               *(float *)(param_2 + 0x28) * fVar76 + *(float *)(param_2 + 0x38) * fVar88;
      auVar62._0_4_ = fVar31 * *(float *)(lVar13 + 0x40);
      auVar62._4_4_ = fVar33 * *(float *)(lVar13 + 0x44);
      auVar62._8_4_ = fVar37 * *(float *)(lVar13 + 0x48);
      auVar62._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
      auVar47._0_4_ = *(float *)(lVar13 + 0x30) * fVar31;
      auVar47._4_4_ = *(float *)(lVar13 + 0x34) * fVar33;
      auVar47._8_4_ = *(float *)(lVar13 + 0x38) * fVar37;
      auVar47._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
      auVar58 = NEON_ext(auVar47,auVar47,8,1);
      fVar16 = auVar58._0_4_ + auVar58._4_4_;
      auVar58 = NEON_ext(auVar62,auVar62,8,1);
      fVar38 = auVar58._0_4_ + auVar58._4_4_;
      auVar19._0_4_ = fVar31 * *(float *)(lVar13 + 0x50);
      auVar19._4_4_ = fVar33 * *(float *)(lVar13 + 0x54);
      auVar19._8_4_ = fVar37 * *(float *)(lVar13 + 0x58);
      auVar19._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
      auVar58 = NEON_ext(auVar19,auVar19,8,1);
      uStack_a8 = (ulong)(uint)(auVar19._0_4_ + auVar19._4_4_ + auVar58._0_4_ + auVar58._4_4_);
      local_b0 = NEON_ext(CONCAT44(auVar47._0_4_ + auVar47._4_4_ + fVar16,
                                   auVar47._0_4_ + auVar47._4_4_ + fVar16),
                          CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar38,
                                   auVar62._0_4_ + auVar62._4_4_ + fVar38),4,1);
      uVar5 = FUN_00222070(lVar13,&local_b0);
      pfVar7 = (float *)(*(long *)(lVar13 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
      fVar16 = *pfVar7;
      fVar38 = pfVar7[1];
      fVar31 = pfVar7[2];
      lVar11 = *(long *)(param_3 + 8);
      fVar33 = *(float *)(lVar13 + 0x30) * fVar16 + *(float *)(lVar13 + 0x40) * fVar38 +
               *(float *)(lVar13 + 0x50) * fVar31;
      fVar35 = *(float *)(lVar13 + 0x34) * fVar16 + *(float *)(lVar13 + 0x44) * fVar38 +
               *(float *)(lVar13 + 0x54) * fVar31;
      fVar38 = *(float *)(lVar13 + 0x38) * fVar16 + *(float *)(lVar13 + 0x48) * fVar38 +
               *(float *)(lVar13 + 0x58) * fVar31;
      auVar58 = *(undefined1 (*) [16])(pfVar12 + 0xc);
      auVar96._0_4_ = fVar32 * *(float *)(lVar11 + 0x40);
      auVar96._4_4_ = fVar34 * *(float *)(lVar11 + 0x44);
      auVar96._8_4_ = fVar39 * *(float *)(lVar11 + 0x48);
      auVar96._12_4_ = *(float *)(lVar11 + 0x4c) * 0.0;
      auVar63._0_4_ = fVar32 * *(float *)(lVar11 + 0x30);
      auVar63._4_4_ = fVar34 * *(float *)(lVar11 + 0x34);
      auVar63._8_4_ = fVar39 * *(float *)(lVar11 + 0x38);
      auVar63._12_4_ = *(float *)(lVar11 + 0x3c) * 0.0;
      auVar43 = NEON_ext(auVar63,auVar63,8,1);
      fVar16 = auVar43._0_4_ + auVar43._4_4_;
      auVar43 = NEON_ext(auVar96,auVar96,8,1);
      fVar37 = auVar58._0_4_ + *pfVar12 * fVar33 + pfVar12[4] * fVar35 + pfVar12[8] * fVar38;
      fVar36 = auVar58._4_4_ + pfVar12[1] * fVar33 + pfVar12[5] * fVar35 + pfVar12[9] * fVar38;
      fVar33 = auVar58._8_4_ + pfVar12[2] * fVar33 + pfVar12[6] * fVar35 + pfVar12[10] * fVar38;
      fVar35 = auVar58._12_4_ + 0.0;
      fVar38 = auVar43._0_4_ + auVar43._4_4_;
      auVar48._0_4_ = fVar32 * *(float *)(lVar11 + 0x50);
      auVar48._4_4_ = fVar34 * *(float *)(lVar11 + 0x54);
      auVar48._8_4_ = fVar39 * *(float *)(lVar11 + 0x58);
      auVar48._12_4_ = *(float *)(lVar11 + 0x5c) * 0.0;
      auVar58 = NEON_ext(auVar48,auVar48,8,1);
      uStack_a8 = (ulong)(uint)(auVar48._0_4_ + auVar48._4_4_ + auVar58._0_4_ + auVar58._4_4_);
      local_b0 = NEON_ext(CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar16,
                                   auVar63._0_4_ + auVar63._4_4_ + fVar16),
                          CONCAT44(auVar96._0_4_ + auVar96._4_4_ + fVar38,
                                   auVar96._0_4_ + auVar96._4_4_ + fVar38),4,1);
      uVar5 = FUN_00222070(lVar11,&local_b0);
      pfVar7 = (float *)(*(long *)(lVar11 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
      fVar16 = *pfVar7;
      fVar38 = pfVar7[1];
      fVar31 = pfVar7[2];
      auVar101._4_4_ = fVar36;
      auVar101._0_4_ = fVar37;
      auVar101._8_4_ = fVar33;
      auVar101._12_4_ = fVar35;
      auVar49._0_4_ =
           (float)local_1d0 +
           *(float *)(lVar11 + 0x30) * fVar16 + *(float *)(lVar11 + 0x40) * fVar38 +
           *(float *)(lVar11 + 0x50) * fVar31;
      auVar49._4_4_ =
           local_1d0._4_4_ +
           *(float *)(lVar11 + 0x34) * fVar16 + *(float *)(lVar11 + 0x44) * fVar38 +
           *(float *)(lVar11 + 0x54) * fVar31;
      auVar49._8_4_ =
           fVar75 + *(float *)(lVar11 + 0x38) * fVar16 + *(float *)(lVar11 + 0x48) * fVar38 +
                    *(float *)(lVar11 + 0x58) * fVar31;
      auVar49._12_4_ = 0;
      auVar24._0_4_ = fVar37 - auVar49._0_4_;
      auVar24._4_4_ = fVar36 - auVar49._4_4_;
      auVar24._8_4_ = fVar33 - auVar49._8_4_;
      auVar24._12_4_ = fVar35 - 0.0;
      auVar64._0_4_ = fVar76 * -auVar24._0_4_;
      auVar64._4_4_ = fVar88 * -auVar24._4_4_;
      auVar64._8_4_ = fVar89 * -auVar24._8_4_;
      auVar64._12_4_ = 0;
      auVar58 = NEON_ext(auVar64,auVar64,8,1);
      fVar38 = auVar58._0_4_ + auVar58._4_4_;
      fVar31 = (auVar64._0_4_ + auVar64._4_4_ + fVar38) - fVar87;
      fVar16 = fVar14;
      if (0.0 < fVar31) {
        auVar58 = *param_7;
        auVar90._0_4_ = fVar76 * auVar58._0_4_;
        auVar90._4_4_ = fVar88 * auVar58._4_4_;
        auVar90._8_4_ = fVar89 * auVar58._8_4_;
        auVar90._12_4_ = auVar58._12_4_ * 0.0;
        auVar43 = NEON_ext(auVar90,auVar90,8,1);
        fVar76 = auVar43._0_4_ + auVar43._4_4_;
        fVar14 = auVar90._0_4_ + auVar90._4_4_ + fVar76;
        uVar93 = CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar76,fVar14);
        if (0.0 <= fVar14) {
          return 0;
        }
        uVar79 = NEON_frecpe(uVar93,4);
        uVar98 = NEON_frecps(uVar93,uVar79,4);
        fVar14 = (float)uVar79 * (float)uVar98;
        fVar76 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar76,fVar14),4);
        fVar14 = fVar14 * (float)uVar79;
        fVar76 = fVar76 * (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar76,fVar14),4);
        fVar14 = fVar14 * (float)uVar79;
        fVar76 = fVar76 * (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar76,fVar14),4);
        fVar14 = fVar14 * (float)uVar79;
        fVar76 = fVar76 * (float)((ulong)uVar79 >> 0x20);
        uVar93 = NEON_frecps(uVar93,CONCAT44(fVar76,fVar14),4);
        fVar88 = (float)uVar116;
        fVar14 = fVar88 - fVar31 * fVar14 * (float)uVar93;
        fVar38 = (float)((ulong)uVar116 >> 0x20) -
                 ((auVar64._0_4_ + auVar64._4_4_ + fVar38) -
                 (param_1 + (float)((ulong)uVar78 >> 0x20) * 0.1)) *
                 fVar76 * (float)((ulong)uVar93 >> 0x20);
        uVar116 = CONCAT44(fVar38,fVar14);
        if (fVar88 < fVar14) {
          uVar116 = NEON_fmov(0x3f800000,4);
          if ((float)uVar116 < fVar14) {
            return 0;
          }
          auVar50._0_4_ = auVar58._0_4_ * fVar14 + *param_6;
          auVar50._4_4_ = auVar58._4_4_ * fVar14 + param_6[1];
          auVar50._8_4_ = auVar58._8_4_ * fVar14 + param_6[2];
          auVar50._12_4_ = auVar58._12_4_ * fVar14 + param_6[3];
          auVar58 = NEON_ext(auVar50,auVar50,8,1);
          fVar76 = auVar58._0_4_;
          local_1d0._0_4_ = auVar50._0_4_ - (float)local_1d0;
          local_1d0._4_4_ = auVar50._4_4_ - local_1d0._4_4_;
          fVar75 = fVar76 - fVar75;
          local_180._0_4_ = (float)local_180 + (float)local_1d0;
          local_180._4_4_ = local_180._4_4_ + local_1d0._4_4_;
          uStack_178._0_4_ = (float)uStack_178 + fVar75;
          uStack_178._4_4_ = uStack_178._4_4_ + 0.0;
          local_190._0_4_ = (float)local_190 + (float)local_1d0;
          local_190._4_4_ = local_190._4_4_ + local_1d0._4_4_;
          uStack_188._0_4_ = (float)uStack_188 + fVar75;
          uStack_188._4_4_ = uStack_188._4_4_ + 0.0;
          local_170._0_4_ = (float)local_170 + (float)local_1d0;
          local_170._4_4_ = local_170._4_4_ + local_1d0._4_4_;
          uStack_168._0_4_ = (float)uStack_168 + fVar75;
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
          lVar13 = *(long *)(param_3 + 8);
          auVar51._0_4_ = fVar32 * *(float *)(lVar13 + 0x40);
          auVar51._4_4_ = fVar34 * *(float *)(lVar13 + 0x44);
          auVar51._8_4_ = fVar39 * *(float *)(lVar13 + 0x48);
          auVar51._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
          auVar20._0_4_ = fVar32 * *(float *)(lVar13 + 0x30);
          auVar20._4_4_ = fVar34 * *(float *)(lVar13 + 0x34);
          auVar20._8_4_ = fVar39 * *(float *)(lVar13 + 0x38);
          auVar20._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
          auVar58 = NEON_ext(auVar20,auVar20,8,1);
          fVar75 = auVar58._0_4_ + auVar58._4_4_;
          auVar58 = NEON_ext(auVar51,auVar51,8,1);
          fVar16 = auVar58._0_4_ + auVar58._4_4_;
          auVar65._0_4_ = fVar32 * *(float *)(lVar13 + 0x50);
          auVar65._4_4_ = fVar34 * *(float *)(lVar13 + 0x54);
          auVar65._8_4_ = fVar39 * *(float *)(lVar13 + 0x58);
          auVar65._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
          auVar58 = NEON_ext(auVar65,auVar65,8,1);
          uStack_a8 = (ulong)(uint)(auVar65._0_4_ + auVar65._4_4_ + auVar58._0_4_ + auVar58._4_4_);
          local_b0 = NEON_ext(CONCAT44(auVar20._0_4_ + auVar20._4_4_ + fVar75,
                                       auVar20._0_4_ + auVar20._4_4_ + fVar75),
                              CONCAT44(auVar51._0_4_ + auVar51._4_4_ + fVar16,
                                       auVar51._0_4_ + auVar51._4_4_ + fVar16),4,1);
          uVar5 = FUN_00222070(lVar13,&local_b0);
          pfVar7 = (float *)(*(long *)(lVar13 + 0xa0) + (uVar5 & 0xffffffff) * 0xc);
          fVar75 = *pfVar7;
          fVar16 = pfVar7[1];
          fVar31 = pfVar7[2];
          uVar116 = CONCAT44(fVar38,fVar14);
          local_1d0 = CONCAT44(auVar50._4_4_,auVar50._0_4_);
          local_200 = auVar95._0_8_;
          auVar49._0_4_ =
               auVar50._0_4_ +
               *(float *)(lVar13 + 0x30) * fVar75 + *(float *)(lVar13 + 0x40) * fVar16 +
               *(float *)(lVar13 + 0x50) * fVar31;
          auVar49._4_4_ =
               auVar50._4_4_ +
               *(float *)(lVar13 + 0x34) * fVar75 + *(float *)(lVar13 + 0x44) * fVar16 +
               *(float *)(lVar13 + 0x54) * fVar31;
          auVar49._8_4_ =
               fVar76 + *(float *)(lVar13 + 0x38) * fVar75 + *(float *)(lVar13 + 0x48) * fVar16 +
                        *(float *)(lVar13 + 0x58) * fVar31;
          auVar49._12_4_ = 0;
          auVar24._0_4_ = fVar37 - auVar49._0_4_;
          auVar24._4_4_ = fVar36 - auVar49._4_4_;
          auVar24._8_4_ = fVar33 - auVar49._8_4_;
          auVar24._12_4_ = fVar35 - 0.0;
          fVar16 = 3.4028235e+38;
          uStack_1f8 = auVar95._8_8_;
          fVar75 = fVar76;
        }
      }
      uVar40 = local_c4;
      uVar5 = (ulong)local_c4;
      (&uStack_148)[uVar5 * 2] = auVar101._8_8_;
      *(long *)(local_150 + uVar5 * 4) = auVar101._0_8_;
      (&uStack_188)[uVar5 * 2] = auVar49._8_8_;
      (&local_190)[uVar5 * 2] = auVar49._0_8_;
      bVar4 = local_c4 == 3;
      local_c4 = local_c4 + 1;
      *(long *)(local_c0 + uVar5 * 4 + -0x12) = auVar24._8_8_;
      *(long *)(local_c0 + uVar5 * 4 + -0x14) = auVar24._0_8_;
      if (bVar4) {
        auVar24 = FUN_00237120(&local_110,local_150,&local_190,&local_c4);
      }
      else if (uVar40 == 2) {
        auVar24._4_4_ = local_110._4_4_;
        auVar24._0_4_ = (float)local_110;
        auVar24._8_4_ = fStack_108;
        auVar24._12_4_ = fStack_104;
        auVar2._4_4_ = fStack_fc;
        auVar2._0_4_ = local_100;
        auVar2._8_4_ = fStack_f8;
        auVar2._12_4_ = fStack_f4;
        auVar3._4_4_ = fStack_ec;
        auVar3._0_4_ = local_f0;
        auVar3._8_4_ = fStack_e8;
        auVar3._12_4_ = fStack_e4;
        auVar84._0_4_ = local_f0 - (float)local_110;
        auVar84._4_4_ = fStack_ec - local_110._4_4_;
        auVar84._8_4_ = fStack_e8 - fStack_108;
        auVar84._12_4_ = fStack_e4 - fStack_104;
        auVar91._0_4_ = local_100 - (float)local_110;
        auVar91._4_4_ = fStack_fc - local_110._4_4_;
        auVar91._8_4_ = fStack_f8 - fStack_108;
        auVar91._12_4_ = fStack_f4 - fStack_104;
        auVar58 = NEON_ext(auVar91,auVar91,8,1);
        auVar43 = NEON_ext(auVar84,auVar84,8,1);
        fVar33 = auVar91._0_4_ * auVar84._4_4_ - auVar91._4_4_ * auVar84._0_4_;
        uVar93 = NEON_ext(CONCAT44(auVar91._4_4_ * auVar84._8_4_ - auVar91._8_4_ * auVar84._4_4_,
                                   fVar33),
                          CONCAT44(auVar58._4_4_ * auVar84._4_4_ - auVar91._4_4_ * auVar43._4_4_,
                                   auVar58._0_4_ * auVar84._0_4_ - auVar91._0_4_ * auVar43._0_4_),4,
                          1);
        fVar31 = (float)uVar93;
        auVar99._0_4_ = fVar31 * fVar31;
        fVar32 = (float)((ulong)uVar93 >> 0x20);
        auVar99._4_4_ = fVar32 * fVar32;
        auVar99._8_4_ = fVar33 * fVar33;
        auVar99._12_4_ = 0;
        auVar58 = NEON_ext(auVar99,auVar99,8,1);
        fVar38 = auVar58._0_4_ + auVar58._4_4_;
        fVar14 = auVar99._0_4_ + auVar99._4_4_ + fVar38;
        uVar93 = CONCAT44(auVar99._0_4_ + auVar99._4_4_ + fVar38,fVar14);
        local_c4 = 3;
        if (1.1920929e-07 < fVar14) {
          if (fVar14 != 0.0) {
            auVar58 = NEON_ext(auVar2,auVar2,8,1);
            auVar43 = NEON_ext(auVar3,auVar3,8,1);
            fVar37 = local_100 * fStack_ec - fStack_fc * local_f0;
            auVar80 = NEON_ext(auVar24,auVar24,8,1);
            uVar98 = NEON_ext(CONCAT44(fStack_fc * fStack_e8 - fStack_f8 * fStack_ec,fVar37),
                              CONCAT44(auVar58._4_4_ * fStack_ec - fStack_fc * auVar43._4_4_,
                                       auVar58._0_4_ * local_f0 - local_100 * auVar43._0_4_),4,1);
            fVar14 = local_110._4_4_ * local_f0 - (float)local_110 * fStack_ec;
            uVar115 = NEON_ext(CONCAT44(fStack_108 * fStack_ec - local_110._4_4_ * fStack_e8,fVar14)
                               ,CONCAT44(local_110._4_4_ * auVar43._4_4_ - auVar80._4_4_ * fStack_ec
                                         ,(float)local_110 * auVar43._0_4_ -
                                          auVar80._0_4_ * local_f0),4,1);
            fVar38 = (float)local_110 * fStack_fc - local_110._4_4_ * local_100;
            uVar79 = NEON_ext(CONCAT44(local_110._4_4_ * fStack_f8 - fStack_108 * fStack_fc,fVar38),
                              CONCAT44(auVar80._4_4_ * fStack_fc - local_110._4_4_ * auVar58._4_4_,
                                       auVar80._0_4_ * local_100 - (float)local_110 * auVar58._0_4_)
                              ,4,1);
            auVar104._0_4_ = (float)uVar98 * fVar31;
            auVar104._4_4_ = (float)((ulong)uVar98 >> 0x20) * fVar32;
            auVar104._8_4_ = fVar37 * fVar33;
            auVar104._12_4_ = 0;
            auVar58 = NEON_ext(auVar104,auVar104,8,1);
            auVar107._0_4_ = (float)uVar115 * fVar31;
            auVar107._4_4_ = (float)((ulong)uVar115 >> 0x20) * fVar32;
            auVar107._8_4_ = fVar14 * fVar33;
            auVar107._12_4_ = 0;
            auVar43 = NEON_ext(auVar107,auVar107,8,1);
            fVar14 = auVar104._0_4_ + auVar104._4_4_ + auVar58._0_4_ + auVar58._4_4_;
            auVar112._0_4_ = (float)uVar79 * fVar31;
            auVar112._4_4_ = (float)((ulong)uVar79 >> 0x20) * fVar32;
            auVar112._8_4_ = fVar38 * fVar33;
            auVar112._12_4_ = 0;
            fVar38 = auVar107._0_4_ + auVar107._4_4_ + auVar43._0_4_ + auVar43._4_4_;
            auVar58 = NEON_ext(auVar112,auVar112,8,1);
            fVar37 = auVar112._0_4_ + auVar112._4_4_ + auVar58._0_4_ + auVar58._4_4_;
            bVar4 = (0.0 <= fVar14 && 0.0 <= fVar38) && 0.0 <= fVar37;
            auVar113._0_4_ = -(uint)bVar4;
            auVar113._4_4_ = -(uint)bVar4;
            auVar113._8_4_ = -(uint)bVar4;
            auVar113._12_4_ = -(uint)bVar4;
            NEON_ext(auVar113,auVar113,8,1);
            if (CONCAT13((char)auVar113._12_4_,
                         CONCAT12((char)auVar113._8_4_,
                                  CONCAT11((char)auVar113._4_4_,(char)auVar113._0_4_))) == -1) {
              auVar25._0_4_ = (float)local_110 * fVar31;
              auVar25._4_4_ = local_110._4_4_ * fVar32;
              auVar25._8_4_ = fStack_108 * fVar33;
              auVar25._12_4_ = fStack_104 * 0.0;
              auVar58 = NEON_ext(auVar25,auVar25,8,1);
              uVar79 = NEON_frecpe(uVar93,4);
              uVar98 = NEON_frecps(uVar93,uVar79,4);
              fVar14 = (float)uVar79 * (float)uVar98;
              fVar38 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
              uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
              fVar14 = fVar14 * (float)uVar79;
              fVar38 = fVar38 * (float)((ulong)uVar79 >> 0x20);
              uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
              fVar14 = fVar14 * (float)uVar79;
              fVar38 = fVar38 * (float)((ulong)uVar79 >> 0x20);
              uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
              fVar14 = fVar14 * (float)uVar79;
              uVar93 = NEON_frecps(uVar93,CONCAT44(fVar38 * (float)((ulong)uVar79 >> 0x20),fVar14),4
                                  );
              fVar14 = (auVar25._0_4_ + auVar25._4_4_ + auVar58._0_4_ + auVar58._4_4_) *
                       fVar14 * (float)uVar93;
              auVar24._0_4_ = fVar31 * fVar14;
              auVar24._4_4_ = fVar32 * fVar14;
              auVar24._8_4_ = fVar33 * fVar14;
              auVar24._12_4_ = 0.0;
            }
            else {
              auVar97._0_4_ = -(float)local_110 * auVar91._0_4_;
              auVar97._4_4_ = -local_110._4_4_ * auVar91._4_4_;
              auVar97._8_4_ = -fStack_108 * auVar91._8_4_;
              auVar97._12_4_ = auVar91._12_4_ * 0.0;
              auVar58 = NEON_ext(auVar97,auVar97,8,1);
              fVar33 = auVar58._0_4_ + auVar58._4_4_;
              auVar100._0_4_ = -local_100 * auVar91._0_4_;
              auVar100._4_4_ = -fStack_fc * auVar91._4_4_;
              auVar100._8_4_ = -fStack_f8 * auVar91._8_4_;
              auVar100._12_4_ = auVar91._12_4_ * 0.0;
              auVar58 = NEON_ext(auVar100,auVar100,8,1);
              fVar34 = auVar58._0_4_ + auVar58._4_4_;
              fVar31 = auVar97._0_4_ + auVar97._4_4_ + fVar33;
              fVar32 = auVar100._0_4_ + auVar100._4_4_ + fVar34;
              fVar34 = auVar100._0_4_ + auVar100._4_4_ + fVar34;
              bVar4 = (0.0 <= fVar31 && fVar37 <= 0.0) && fVar32 <= 0.0;
              auVar108._0_4_ = -(uint)bVar4;
              auVar108._4_4_ = -(uint)bVar4;
              auVar108._8_4_ = -(uint)bVar4;
              auVar108._12_4_ = -(uint)bVar4;
              NEON_ext(auVar108,auVar108,8,1);
              if (CONCAT13((char)auVar108._12_4_,
                           CONCAT12((char)auVar108._8_4_,
                                    CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) == -1) {
                uVar93 = CONCAT44((auVar97._0_4_ + auVar97._4_4_ + fVar33) - fVar34,fVar31 - fVar32)
                ;
                uVar79 = NEON_frecpe(uVar93,4);
                uVar98 = NEON_frecps(uVar93,uVar79,4);
                fVar14 = (float)uVar79 * (float)uVar98;
                fVar38 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
                uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
                fVar14 = fVar14 * (float)uVar79;
                fVar38 = fVar38 * (float)((ulong)uVar79 >> 0x20);
                uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
                fVar14 = fVar14 * (float)uVar79;
                fVar38 = fVar38 * (float)((ulong)uVar79 >> 0x20);
                uVar79 = NEON_frecps(uVar93,CONCAT44(fVar38,fVar14),4);
                fVar14 = fVar14 * (float)uVar79;
                uVar93 = NEON_frecps(uVar93,CONCAT44(fVar38 * (float)((ulong)uVar79 >> 0x20),fVar14)
                                     ,4);
                fVar31 = fVar31 * (float)(-(uint)(1.1920929e-07 < ABS(fVar31 - fVar32)) &
                                         (uint)(fVar14 * (float)uVar93));
                puVar6 = &local_190;
                pfVar7 = local_150;
                auVar26._0_8_ =
                     CONCAT44(local_110._4_4_ + auVar91._4_4_ * fVar31,
                              (float)local_110 + auVar91._0_4_ * fVar31);
                auVar26._8_4_ = fStack_108 + auVar91._8_4_ * fVar31;
                auVar26._12_4_ = fStack_104 + auVar91._12_4_ * fVar31;
                auVar58 = NEON_ext(auVar26,auVar26,8,1);
                pfVar12 = (float *)&local_110;
                auVar24._8_4_ = (float)auVar58._0_4_;
                auVar24._0_8_ = auVar26._0_8_;
                auVar24._12_4_ = 0.0;
                local_c4 = 2;
LAB_002c1c5c:
                puVar8 = &local_180;
                pfVar9 = (float *)&local_140;
                pfVar10 = &local_100;
              }
              else {
                auVar109._0_4_ = -local_100 * auVar84._0_4_;
                auVar109._4_4_ = -fStack_fc * auVar84._4_4_;
                auVar109._8_4_ = -fStack_f8 * auVar84._8_4_;
                auVar109._12_4_ = auVar84._12_4_ * 0.0;
                auVar58 = NEON_ext(auVar109,auVar109,8,1);
                fVar36 = auVar58._0_4_ + auVar58._4_4_;
                auVar92._0_4_ = auVar91._0_4_ * -local_f0;
                auVar92._4_4_ = auVar91._4_4_ * -fStack_ec;
                auVar92._8_4_ = auVar91._8_4_ * -fStack_e8;
                auVar92._12_4_ = auVar91._12_4_ * 0.0;
                auVar114._0_4_ = auVar84._0_4_ * -local_f0;
                auVar114._4_4_ = auVar84._4_4_ * -fStack_ec;
                auVar114._8_4_ = auVar84._8_4_ * -fStack_e8;
                auVar114._12_4_ = auVar84._12_4_ * 0.0;
                fVar33 = auVar109._0_4_ + auVar109._4_4_ + fVar36;
                auVar58 = NEON_ext(auVar92,auVar92,8,1);
                fVar39 = auVar58._0_4_ + auVar58._4_4_;
                fVar37 = auVar92._0_4_ + auVar92._4_4_ + fVar39;
                auVar58 = NEON_ext(auVar114,auVar114,8,1);
                fVar76 = auVar58._0_4_ + auVar58._4_4_;
                fVar35 = auVar114._0_4_ + auVar114._4_4_ + fVar76;
                fVar76 = auVar114._0_4_ + auVar114._4_4_ + fVar76;
                bVar4 = (fVar32 <= fVar33 && fVar14 <= 0.0) && fVar35 <= fVar37;
                auVar105._0_4_ = -(uint)bVar4;
                auVar105._4_4_ = -(uint)bVar4;
                auVar105._8_4_ = -(uint)bVar4;
                auVar105._12_4_ = -(uint)bVar4;
                NEON_ext(auVar105,auVar105,8,1);
                puVar8 = &local_170;
                pfVar9 = local_130;
                pfVar10 = &local_f0;
                if (CONCAT13((char)auVar105._12_4_,
                             CONCAT12((char)auVar105._8_4_,
                                      CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) == -1) {
                  local_c4 = 2;
                  fVar14 = (fVar33 - fVar32) + (fVar37 - fVar35);
                  uVar93 = CONCAT44(((auVar109._0_4_ + auVar109._4_4_ + fVar36) - fVar34) +
                                    ((auVar92._0_4_ + auVar92._4_4_ + fVar39) - fVar76),fVar14);
                  uVar79 = NEON_frecpe(uVar93,4);
                  uVar98 = NEON_frecps(uVar93,uVar79,4);
                  fVar38 = (float)uVar79 * (float)uVar98;
                  fVar31 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  uVar93 = NEON_frecps(uVar93,CONCAT44(fVar31 * (float)((ulong)uVar79 >> 0x20),
                                                       fVar38),4);
                  fVar14 = (fVar33 - fVar32) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar14)) &
                                  (uint)(fVar38 * (float)uVar93));
                  auVar27._0_8_ =
                       CONCAT44(fStack_fc + (fStack_ec - fStack_fc) * fVar14,
                                local_100 + (local_f0 - local_100) * fVar14);
                  auVar27._8_4_ = fStack_f8 + (fStack_e8 - fStack_f8) * fVar14;
                  auVar27._12_4_ = fStack_f4 + (fStack_e4 - fStack_f4) * fVar14;
                  auVar58 = NEON_ext(auVar27,auVar27,8,1);
                  auVar24._8_4_ = (float)auVar58._0_4_;
                  auVar24._0_8_ = auVar27._0_8_;
                  auVar24._12_4_ = 0.0;
                  puVar6 = &local_180;
                  pfVar7 = (float *)&local_140;
                  pfVar12 = &local_100;
                }
                else {
                  auVar106._0_4_ = -(float)local_110 * auVar84._0_4_;
                  auVar106._4_4_ = -local_110._4_4_ * auVar84._4_4_;
                  auVar106._8_4_ = -fStack_108 * auVar84._8_4_;
                  auVar106._12_4_ = auVar84._12_4_ * 0.0;
                  auVar58 = NEON_ext(auVar106,auVar106,8,1);
                  fVar37 = auVar58._0_4_ + auVar58._4_4_;
                  fVar14 = auVar106._0_4_ + auVar106._4_4_ + fVar37;
                  bVar4 = (fVar38 <= 0.0 && 0.0 <= fVar14) && fVar35 <= 0.0;
                  auVar102._0_4_ = -(uint)bVar4;
                  auVar102._4_4_ = -(uint)bVar4;
                  auVar102._8_4_ = -(uint)bVar4;
                  auVar102._12_4_ = -(uint)bVar4;
                  NEON_ext(auVar102,auVar102,8,1);
                  if (CONCAT13((char)auVar102._12_4_,
                               CONCAT12((char)auVar102._8_4_,
                                        CONCAT11((char)auVar102._4_4_,(char)auVar102._0_4_))) != -1)
                  {
                    bVar4 = fVar31 <= 0.0 && fVar14 <= 0.0;
                    auVar85._0_4_ = -(uint)bVar4;
                    auVar85._4_4_ = -(uint)bVar4;
                    auVar85._8_4_ = -(uint)bVar4;
                    auVar85._12_4_ = -(uint)bVar4;
                    NEON_ext(auVar85,auVar85,8,1);
                    if (CONCAT13((char)auVar85._12_4_,
                                 CONCAT12((char)auVar85._8_4_,
                                          CONCAT11((char)auVar85._4_4_,(char)auVar85._0_4_))) == -1)
                    {
                      puVar6 = &local_190;
                      pfVar7 = local_150;
                      pfVar12 = (float *)&local_110;
                    }
                    else {
                      bVar4 = 0.0 <= fVar32 && fVar33 <= fVar32;
                      auVar22._0_4_ = -(uint)bVar4;
                      auVar22._4_4_ = -(uint)bVar4;
                      auVar22._8_4_ = -(uint)bVar4;
                      auVar22._12_4_ = -(uint)bVar4;
                      NEON_ext(auVar22,auVar22,8,1);
                      iVar55 = CONCAT13((char)auVar22._12_4_,
                                        CONCAT12((char)auVar22._8_4_,
                                                 CONCAT11((char)auVar22._4_4_,(char)auVar22._0_4_)))
                      ;
                      iVar77 = -(uint)(iVar55 == -1);
                      auVar23._4_4_ = iVar77;
                      auVar23._0_4_ = iVar77;
                      auVar23._8_4_ = iVar77;
                      auVar23._12_4_ = iVar77;
                      lVar13 = 0x10;
                      if (iVar55 != -1) {
                        lVar13 = 0x20;
                      }
                      auVar24 = auVar3 ^ (auVar3 ^ auVar2) & auVar23;
                      pfVar12 = (float *)((long)local_c0 + lVar13 + -0x50);
                      pfVar7 = (float *)((long)local_150 + lVar13);
                      puVar6 = (undefined8 *)((long)&local_190 + lVar13);
                    }
                    local_c4 = 1;
                    goto LAB_002c1c5c;
                  }
                  uVar93 = CONCAT44((auVar106._0_4_ + auVar106._4_4_ + fVar37) - fVar76,
                                    fVar14 - fVar35);
                  uVar79 = NEON_frecpe(uVar93,4);
                  uVar98 = NEON_frecps(uVar93,uVar79,4);
                  fVar38 = (float)uVar79 * (float)uVar98;
                  fVar31 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
                  uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
                  fVar38 = fVar38 * (float)uVar79;
                  uVar93 = NEON_frecps(uVar93,CONCAT44(fVar31 * (float)((ulong)uVar79 >> 0x20),
                                                       fVar38),4);
                  fVar14 = fVar14 * (float)(-(uint)(1.1920929e-07 < ABS(fVar14 - fVar35)) &
                                           (uint)(fVar38 * (float)uVar93));
                  auVar28._0_8_ =
                       CONCAT44(local_110._4_4_ + auVar84._4_4_ * fVar14,
                                (float)local_110 + auVar84._0_4_ * fVar14);
                  auVar28._8_4_ = fStack_108 + auVar84._8_4_ * fVar14;
                  auVar28._12_4_ = fStack_104 + auVar84._12_4_ * fVar14;
                  auVar58 = NEON_ext(auVar28,auVar28,8,1);
                  auVar24._8_4_ = (float)auVar58._0_4_;
                  auVar24._0_8_ = auVar28._0_8_;
                  auVar24._12_4_ = 0.0;
                  local_c4 = 2;
                  puVar6 = &local_190;
                  pfVar7 = local_150;
                  pfVar12 = (float *)&local_110;
                }
              }
              fStack_108 = (float)*(undefined8 *)(pfVar12 + 2);
              fStack_104 = (float)((ulong)*(undefined8 *)(pfVar12 + 2) >> 0x20);
              local_110._0_4_ = (float)*(undefined8 *)pfVar12;
              local_110._4_4_ = (float)((ulong)*(undefined8 *)pfVar12 >> 0x20);
              fStack_f8 = (float)*(undefined8 *)(pfVar10 + 2);
              fStack_f4 = (float)((ulong)*(undefined8 *)(pfVar10 + 2) >> 0x20);
              local_100 = (float)*(undefined8 *)pfVar10;
              fStack_fc = (float)((ulong)*(undefined8 *)pfVar10 >> 0x20);
              local_180 = *puVar8;
              uStack_178 = puVar8[1];
              uStack_148._0_4_ = (float)*(undefined8 *)(pfVar7 + 2);
              uStack_148._4_4_ = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
              local_150[0] = (float)*(undefined8 *)pfVar7;
              local_150[1] = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
              uStack_138 = *(undefined8 *)(pfVar9 + 2);
              local_140 = *(undefined8 *)pfVar9;
              local_190 = *puVar6;
              uStack_188 = puVar6[1];
            }
          }
        }
        else {
          auVar52._0_4_ = auVar91._0_4_ * auVar91._0_4_;
          auVar52._4_4_ = auVar91._4_4_ * auVar91._4_4_;
          auVar52._8_4_ = auVar91._8_4_ * auVar91._8_4_;
          auVar52._12_4_ = auVar91._12_4_ * auVar91._12_4_;
          auVar58 = NEON_ext(auVar52,auVar52,8,1);
          fVar38 = auVar58._0_4_ + auVar58._4_4_;
          fVar14 = auVar52._0_4_ + auVar52._4_4_ + fVar38;
          uVar93 = CONCAT44(auVar52._0_4_ + auVar52._4_4_ + fVar38,fVar14);
          bVar4 = fVar14 <= 1.1920929e-07;
          auVar67._0_4_ = -(uint)bVar4;
          auVar67._4_4_ = -(uint)bVar4;
          auVar67._8_4_ = -(uint)bVar4;
          auVar67._12_4_ = -(uint)bVar4;
          NEON_ext(auVar67,auVar67,8,1);
          local_c4 = 2;
          if (CONCAT13((char)auVar67._12_4_,
                       CONCAT12((char)auVar67._8_4_,
                                CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))) != -1) {
            auVar68._0_4_ = -(float)local_110 * auVar91._0_4_;
            auVar68._4_4_ = -local_110._4_4_ * auVar91._4_4_;
            auVar68._8_4_ = -fStack_108 * auVar91._8_4_;
            auVar68._12_4_ = auVar91._12_4_ * 0.0;
            auVar58 = NEON_ext(auVar68,auVar68,8,1);
            fVar14 = auVar58._0_4_ + auVar58._4_4_;
            uVar79 = NEON_frecpe(uVar93,4);
            uVar98 = NEON_frecps(uVar93,uVar79,4);
            fVar38 = (float)uVar79 * (float)uVar98;
            fVar31 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
            uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
            fVar38 = fVar38 * (float)uVar79;
            fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
            uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
            fVar38 = fVar38 * (float)uVar79;
            fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
            uVar79 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
            fVar38 = fVar38 * (float)uVar79;
            fVar31 = fVar31 * (float)((ulong)uVar79 >> 0x20);
            uVar93 = NEON_frecps(uVar93,CONCAT44(fVar31,fVar38),4);
            uVar79 = NEON_fmov(0x3f800000,4);
            uVar93 = NEON_fmin(CONCAT44((auVar68._0_4_ + auVar68._4_4_ + fVar14) *
                                        fVar31 * (float)((ulong)uVar93 >> 0x20),
                                        (auVar68._0_4_ + auVar68._4_4_ + fVar14) *
                                        fVar38 * (float)uVar93),uVar79,4);
            uVar93 = NEON_fmax(uVar93,0,4);
            fVar14 = (float)uVar93;
            fVar38 = auVar91._0_4_ * fVar14;
            fVar31 = auVar91._4_4_ * fVar14;
            fVar32 = auVar91._8_4_ * fVar14;
            fVar14 = auVar91._12_4_ * fVar14;
            goto LAB_002c17e0;
          }
LAB_002c17f4:
          local_c4 = 1;
        }
      }
      else if (uVar40 == 1) {
        auVar24._4_4_ = local_110._4_4_;
        auVar24._0_4_ = (float)local_110;
        auVar24._8_4_ = fStack_108;
        auVar24._12_4_ = fStack_104;
        fVar38 = local_100 - (float)local_110;
        fVar31 = fStack_fc - local_110._4_4_;
        fVar32 = fStack_f8 - fStack_108;
        fVar14 = fStack_f4 - fStack_104;
        auVar66._0_4_ = fVar38 * fVar38;
        auVar66._4_4_ = fVar31 * fVar31;
        auVar66._8_4_ = fVar32 * fVar32;
        auVar66._12_4_ = fVar14 * fVar14;
        auVar58 = NEON_ext(auVar66,auVar66,8,1);
        fVar37 = auVar58._0_4_ + auVar58._4_4_;
        fVar33 = auVar66._0_4_ + auVar66._4_4_ + fVar37;
        uVar93 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar37,fVar33);
        bVar4 = fVar33 <= 1.1920929e-07;
        auVar82._0_4_ = -(uint)bVar4;
        auVar82._4_4_ = -(uint)bVar4;
        auVar82._8_4_ = -(uint)bVar4;
        auVar82._12_4_ = -(uint)bVar4;
        NEON_ext(auVar82,auVar82,8,1);
        if (CONCAT13((char)auVar82._12_4_,
                     CONCAT12((char)auVar82._8_4_,CONCAT11((char)auVar82._4_4_,(char)auVar82._0_4_))
                    ) == -1) goto LAB_002c17f4;
        auVar83._0_4_ = -(float)local_110 * fVar38;
        auVar83._4_4_ = -local_110._4_4_ * fVar31;
        auVar83._8_4_ = -fStack_108 * fVar32;
        auVar83._12_4_ = fVar14 * 0.0;
        auVar58 = NEON_ext(auVar83,auVar83,8,1);
        fVar33 = auVar58._0_4_ + auVar58._4_4_;
        uVar79 = NEON_frecpe(uVar93,4);
        uVar98 = NEON_frecps(uVar93,uVar79,4);
        fVar37 = (float)uVar79 * (float)uVar98;
        fVar34 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar98 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar34,fVar37),4);
        fVar37 = fVar37 * (float)uVar79;
        fVar34 = fVar34 * (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar34,fVar37),4);
        fVar37 = fVar37 * (float)uVar79;
        fVar34 = fVar34 * (float)((ulong)uVar79 >> 0x20);
        uVar79 = NEON_frecps(uVar93,CONCAT44(fVar34,fVar37),4);
        fVar37 = fVar37 * (float)uVar79;
        fVar34 = fVar34 * (float)((ulong)uVar79 >> 0x20);
        uVar93 = NEON_frecps(uVar93,CONCAT44(fVar34,fVar37),4);
        uVar79 = NEON_fmov(0x3f800000,4);
        uVar93 = NEON_fmin(CONCAT44((auVar83._0_4_ + auVar83._4_4_ + fVar33) *
                                    fVar34 * (float)((ulong)uVar93 >> 0x20),
                                    (auVar83._0_4_ + auVar83._4_4_ + fVar33) *
                                    fVar37 * (float)uVar93),uVar79,4);
        uVar93 = NEON_fmax(uVar93,0,4);
        fVar33 = (float)uVar93;
        fVar38 = fVar38 * fVar33;
        fVar31 = fVar31 * fVar33;
        fVar32 = fVar32 * fVar33;
        fVar14 = fVar14 * fVar33;
LAB_002c17e0:
        auVar21._0_8_ = CONCAT44(auVar24._4_4_ + fVar31,auVar24._0_4_ + fVar38);
        auVar21._8_4_ = auVar24._8_4_ + fVar32;
        auVar21._12_4_ = auVar24._12_4_ + fVar14;
        auVar58 = NEON_ext(auVar21,auVar21,8,1);
        auVar24._8_4_ = (float)auVar58._0_4_;
        auVar24._0_8_ = auVar21._0_8_;
        auVar24._12_4_ = 0.0;
      }
      fVar38 = auVar24._0_4_;
      auVar53._0_4_ = fVar38 * fVar38;
      fVar31 = auVar24._4_4_;
      auVar53._4_4_ = fVar31 * fVar31;
      fVar32 = auVar24._8_4_;
      auVar53._8_4_ = fVar32 * fVar32;
      auVar53._12_4_ = auVar24._12_4_ * auVar24._12_4_;
      auVar58 = NEON_ext(auVar53,auVar53,8,1);
      fVar14 = auVar53._0_4_ + auVar53._4_4_ + auVar58._0_4_ + auVar58._4_4_;
      auVar46._0_4_ = -(uint)(fVar14 < fVar16);
      bVar4 = fVar87 * fVar87 < fVar14 && fVar14 < fVar16;
      auVar69._0_4_ = -(uint)bVar4;
      auVar69._4_4_ = -(uint)bVar4;
      auVar69._8_4_ = -(uint)bVar4;
      auVar69._12_4_ = -(uint)bVar4;
      NEON_ext(auVar69,auVar69,8,1);
      auVar95._0_4_ = -fVar38;
      auVar95._4_4_ = -fVar31;
      auVar95._8_4_ = -fVar32;
      auVar95._12_4_ = 0;
      if (CONCAT13((char)auVar69._12_4_,
                   CONCAT12((char)auVar69._8_4_,CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_)))
          != -1) goto code_r0x002c1cd4;
      lVar13 = *(long *)(param_2 + 8);
      uStack_1e8 = auVar24._8_8_;
      local_1f0 = auVar24._0_8_;
    } while( true );
  }
  uVar116 = 0;
  auVar24._8_8_ = uStack_1e8;
  auVar24._0_8_ = auVar43._0_8_;
  auVar95._8_4_ = auVar58._8_4_;
  auVar95._0_8_ = auVar58._0_8_;
  auVar95._12_4_ = 0;
LAB_002c1cec:
  auVar111 = ZEXT816(0);
  iVar55 = -(uint)(fVar15 * fVar15 < fVar14);
  bVar54 = (byte)iVar55;
  auVar70[0] = bVar54 & auVar46[0];
  bVar72 = (byte)((uint)iVar55 >> 8);
  auVar70[1] = bVar72 & auVar46[1];
  bVar73 = (byte)((uint)iVar55 >> 0x10);
  auVar70[2] = bVar73 & auVar46[2];
  bVar74 = (byte)((uint)iVar55 >> 0x18);
  auVar70[3] = bVar74 & auVar46[3];
  auVar70[4] = bVar54 & auVar46[4];
  auVar70[5] = bVar72 & auVar46[5];
  auVar70[6] = bVar73 & auVar46[6];
  auVar70[7] = bVar74 & auVar46[7];
  auVar70[8] = bVar54 & auVar46[8];
  auVar70[9] = bVar72 & auVar46[9];
  auVar70[10] = bVar73 & auVar46[10];
  auVar70[0xb] = bVar74 & auVar46[0xb];
  auVar70[0xc] = bVar54 & auVar46[0xc];
  auVar70[0xd] = bVar72 & auVar46[0xd];
  auVar70[0xe] = bVar73 & auVar46[0xe];
  auVar70[0xf] = bVar74 & auVar46[0xf];
  auVar43 = auVar43 ^ (auVar43 ^ auVar24) & auVar46;
  auVar58 = auVar58 ^ (auVar58 ^ auVar95) & auVar70;
  iVar55 = -(*(byte *)(lVar13 + 0x24) & 1);
  fVar75 = auVar58._0_4_;
  auVar86._0_4_ = fVar75 * fVar75;
  fVar87 = auVar58._4_4_;
  auVar86._4_4_ = fVar87 * fVar87;
  fVar16 = auVar58._8_4_;
  auVar86._8_4_ = fVar16 * fVar16;
  auVar86._12_4_ = auVar58._12_4_ * auVar58._12_4_;
  auVar58 = NEON_ext(auVar86,auVar86,8,1);
  auVar110._4_4_ = iVar55;
  auVar110._0_4_ = iVar55;
  auVar110._8_4_ = iVar55;
  auVar110._12_4_ = iVar55;
  fVar15 = auVar58._0_4_ + auVar58._4_4_;
  fVar14 = auVar86._0_4_ + auVar86._4_4_ + fVar15;
  fVar15 = auVar86._0_4_ + auVar86._4_4_ + fVar15;
  uVar5 = CONCAT44(fVar15,fVar14);
  uVar93 = NEON_frsqrte(uVar5,4);
  fVar38 = (float)uVar93;
  fVar31 = (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar38 * fVar38),uVar5,4);
  fVar38 = fVar38 * (float)uVar93;
  fVar31 = fVar31 * (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar38 * fVar38),uVar5,4);
  fVar38 = fVar38 * (float)uVar93;
  fVar31 = fVar31 * (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar38 * fVar38),uVar5,4);
  fVar38 = fVar38 * (float)uVar93;
  fVar31 = fVar31 * (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frsqrts(CONCAT44(fVar31 * fVar31,fVar38 * fVar38),uVar5,4);
  uVar56 = CONCAT44(fVar15 * fVar31 * (float)((ulong)uVar93 >> 0x20),fVar14 * fVar38 * (float)uVar93
                   );
  uVar56 = uVar56 ^ (uVar56 ^ uVar5) & CONCAT44(-(uint)(fVar14 == 0.0),-(uint)(fVar14 == 0.0));
  uVar93 = NEON_frecpe(uVar56,4);
  uVar78 = NEON_frecps(uVar56,uVar93,4);
  fVar14 = (float)uVar93 * (float)uVar78;
  fVar15 = (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar78 >> 0x20);
  uVar93 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar93;
  fVar15 = fVar15 * (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar93;
  fVar15 = fVar15 * (float)((ulong)uVar93 >> 0x20);
  uVar93 = NEON_frecps(uVar56,CONCAT44(fVar15,fVar14),4);
  fVar14 = fVar14 * (float)uVar93;
  iVar77 = -(uint)(0.0 < (float)uVar56);
  uVar93 = NEON_frecps(uVar56,CONCAT44(fVar15 * (float)((ulong)uVar93 >> 0x20),fVar14),4);
  fVar14 = fVar14 * (float)uVar93;
  fVar75 = fVar75 * fVar14;
  fVar87 = fVar87 * fVar14;
  fVar16 = fVar16 * fVar14;
  bVar54 = (byte)iVar77;
  bVar72 = (byte)((uint)iVar77 >> 8);
  bVar73 = (byte)((uint)iVar77 >> 0x10);
  bVar74 = (byte)((uint)iVar77 >> 0x18);
  fVar14 = (float)CONCAT13(bVar74 & (byte)((uint)fVar75 >> 0x18),
                           CONCAT12(bVar73 & (byte)((uint)fVar75 >> 0x10),
                                    CONCAT11(bVar72 & (byte)((uint)fVar75 >> 8),
                                             bVar54 & SUB41(fVar75,0))));
  auVar57._0_8_ =
       CONCAT17(bVar74 & (byte)((uint)fVar87 >> 0x18),
                CONCAT16(bVar73 & (byte)((uint)fVar87 >> 0x10),
                         CONCAT15(bVar72 & (byte)((uint)fVar87 >> 8),
                                  CONCAT14(bVar54 & SUB41(fVar87,0),fVar14))));
  auVar57[8] = bVar54 & SUB41(fVar16,0);
  auVar57[9] = bVar72 & (byte)((uint)fVar16 >> 8);
  auVar57[10] = bVar73 & (byte)((uint)fVar16 >> 0x10);
  auVar57[0xb] = bVar74 & (byte)((uint)fVar16 >> 0x18);
  fVar14 = -fVar14;
  fVar15 = -(float)((ulong)auVar57._0_8_ >> 0x20);
  auVar71._0_8_ = CONCAT44(fVar15,fVar14);
  auVar71._8_4_ = -auVar57._8_4_;
  auVar71._12_4_ = 0;
  param_9[1] = (ulong)(uint)auVar71._8_4_;
  *param_9 = auVar71._0_8_;
  *param_8 = uVar116;
  uStack_a8 = auVar43._8_8_;
  local_b0 = auVar43._0_8_;
  if (local_c4 == 3) {
    FUN_00231940(&local_b0,&local_110,&local_100,&local_f0,local_c0 + 2,local_c0);
    auVar71._4_4_ = fVar15;
    auVar71._0_4_ = fVar14;
    auVar71._12_4_ = 0;
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
  }
  else if (local_c4 == 2) {
    FUN_002318c0(&local_b0,&local_110,&local_100,local_c0 + 2);
    auVar71._4_4_ = fVar15;
    auVar71._0_4_ = fVar14;
    auVar71._12_4_ = 0;
    auVar103._0_8_ =
         CONCAT44(local_150[1] + (local_140._4_4_ - local_150[1]) * local_c0[2],
                  local_150[0] + ((float)local_140 - local_150[0]) * local_c0[2]);
    auVar103._8_4_ = (float)uStack_148 + ((float)uStack_138 - (float)uStack_148) * local_c0[2];
    auVar103._12_4_ = uStack_148._4_4_ + (uStack_138._4_4_ - uStack_148._4_4_) * local_c0[2];
    auVar58 = NEON_ext(auVar103,auVar103,8,1);
    auVar111._8_4_ = (float)auVar58._0_4_;
    auVar111._0_8_ = auVar103._0_8_;
    auVar111._12_4_ = 0.0;
  }
  else if (local_c4 == 1) {
    auVar111._4_4_ = local_150[1];
    auVar111._0_4_ = local_150[0];
    auVar111._8_4_ = (float)uStack_148;
    auVar111._12_4_ = uStack_148._4_4_;
  }
  fVar14 = *(float *)(*(long *)(param_2 + 8) + 0x10);
  auVar29._0_8_ =
       CONCAT44(auVar111._4_4_ - auVar71._4_4_ * fVar14,auVar111._0_4_ - auVar71._0_4_ * fVar14);
  auVar29._8_4_ = auVar111._8_4_ - auVar71._8_4_ * fVar14;
  auVar29._12_4_ = auVar111._12_4_ - auVar71._12_4_ * fVar14;
  auVar58 = NEON_ext(auVar29,auVar29,8,1);
  auVar30._8_4_ = auVar58._0_4_;
  auVar30._0_8_ = auVar29._0_8_;
  auVar30._12_4_ = 0;
  auVar111 = auVar111 ^ (auVar111 ^ auVar30) & auVar110;
  param_10[1] = auVar111._8_8_;
  *param_10 = auVar111._0_8_;
  return 1;
code_r0x002c1cd4:
  auVar58._8_8_ = uStack_1f8;
  auVar58._0_8_ = local_200;
  auVar43._8_8_ = uStack_1e8;
  auVar43._0_8_ = local_1f0;
  lVar13 = *(long *)(param_2 + 8);
  auVar46._4_4_ = auVar46._0_4_;
  auVar46._8_4_ = auVar46._0_4_;
  auVar46._12_4_ = auVar46._0_4_;
  goto LAB_002c1cec;
}


