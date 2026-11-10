/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a7a10; name: FUN_002a7a10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_002a7a10(long param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 *param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  undefined4 uVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  int iVar28;
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar51;
  float fVar52;
  float fVar55;
  undefined1 auVar44 [16];
  float fVar53;
  float fVar54;
  float fVar56;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar57;
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
  int iVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  undefined8 uVar75;
  float fVar84;
  undefined8 uVar76;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar77;
  float fVar85;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  uint uVar86;
  ulong uVar88;
  undefined1 auVar90 [16];
  uint uVar87;
  uint uVar93;
  undefined8 uVar89;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ulong uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined8 uVar117;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint local_174;
  float local_170 [4];
  undefined8 uStack_160;
  undefined8 uStack_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float local_130 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  ulong local_f0 [2];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [2] [16];
  float local_a8 [2];
  undefined8 local_a0;
  ulong uStack_98;
  
  local_174 = 0;
  fVar20 = *param_3;
  fVar22 = param_3[1];
  fVar74 = param_3[2];
  fVar84 = param_3[3];
  auVar99._0_4_ = fVar20 * fVar20;
  auVar99._4_4_ = fVar22 * fVar22;
  auVar99._8_4_ = fVar74 * fVar74;
  auVar99._12_4_ = fVar84 * fVar84;
  auVar58 = NEON_ext(auVar99,auVar99,8,1);
  uVar27 = -(uint)(0.0 < auVar99._0_4_ + auVar99._4_4_ + auVar58._0_4_ + auVar58._4_4_);
  local_190 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar20) & uVar27);
  fStack_18c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar22) & uVar27);
  fStack_188 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar74) & uVar27);
  fStack_184 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar84) & uVar27);
  auVar100._0_4_ = local_190 * local_190;
  auVar100._4_4_ = fStack_18c * fStack_18c;
  auVar100._8_4_ = fStack_188 * fStack_188;
  auVar100._12_4_ = fStack_184 * fStack_184;
  auVar58 = NEON_ext(auVar100,auVar100,8,1);
  lVar13 = *(long *)(param_1 + 8);
  iVar1 = -(*(byte *)(lVar13 + 0x24) & 1);
  fVar22 = auVar58._0_4_ + auVar58._4_4_;
  fVar20 = auVar100._0_4_ + auVar100._4_4_ + fVar22;
  fVar22 = auVar100._0_4_ + auVar100._4_4_ + fVar22;
  uVar15 = CONCAT44(fVar22,fVar20);
  uVar75 = NEON_frsqrte(uVar15,4);
  uVar88 = CONCAT44(iVar1,iVar1) &
           CONCAT44(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x10));
  fVar74 = (float)uVar75;
  fVar84 = (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar84 = fVar84 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar84 = fVar84 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar84 = fVar84 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar74 * fVar74),uVar15,4);
  lVar19 = *(long *)(param_2 + 8);
  iVar2 = -(*(byte *)(lVar19 + 0x24) & 1);
  uVar94 = CONCAT44(iVar2,iVar2) &
           CONCAT44(*(undefined4 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x10));
  uVar57 = *param_4;
  fVar103 = (float)uVar88 + (float)uVar94;
  fVar104 = (float)(uVar88 >> 0x20) + (float)(uVar94 >> 0x20);
  uVar88 = CONCAT44(fVar22 * fVar84 * (float)((ulong)uVar75 >> 0x20),fVar20 * fVar74 * (float)uVar75
                   );
  uVar88 = uVar88 ^ (uVar88 ^ uVar15) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar75 = NEON_frecpe(uVar88,4);
  uVar76 = NEON_frecps(uVar88,uVar75,4);
  fStack_1a8 = (float)uVar75 * (float)uVar76;
  fVar20 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
  uVar75 = NEON_frecps(uVar88,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frecps(uVar88,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frecps(uVar88,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  uVar75 = NEON_frecps(uVar88,CONCAT44(fVar20 * (float)((ulong)uVar75 >> 0x20),fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  local_1b0 = local_190 * fStack_1a8;
  fStack_1ac = fStack_18c * fStack_1a8;
  fStack_1a8 = fStack_188 * fStack_1a8;
  uVar75 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar19 + 0x14),*(undefined4 *)(lVar19 + 0x14)),4);
  uVar15 = 0x7f7fffff7f7fffff;
  auVar58._4_4_ = fStack_18c;
  auVar58._0_4_ = local_190;
  auVar58._8_4_ = fStack_188;
  auVar58._12_4_ = fStack_184;
  do {
    fVar53 = auVar58._0_4_;
    fVar84 = -fVar53;
    fVar43 = auVar58._4_4_;
    fVar51 = -fVar43;
    fVar54 = auVar58._8_4_;
    fVar55 = -fVar54;
    fVar56 = auVar58._12_4_;
    uStack_198 = auVar58._8_8_;
    local_1a0 = auVar58._0_8_;
    fVar20 = *(float *)(lVar13 + 0x50);
    fVar22 = *(float *)(lVar13 + 0x54);
    fVar74 = *(float *)(lVar13 + 0x58);
    fVar42 = *(float *)(param_1 + 0x20) * fVar84 + *(float *)(param_1 + 0x30) * fVar51 +
             *(float *)(param_1 + 0x40) * fVar55;
    fVar52 = *(float *)(param_1 + 0x24) * fVar84 + *(float *)(param_1 + 0x34) * fVar51 +
             *(float *)(param_1 + 0x44) * fVar55;
    fVar84 = *(float *)(param_1 + 0x28) * fVar84 + *(float *)(param_1 + 0x38) * fVar51 +
             *(float *)(param_1 + 0x48) * fVar55;
    pfVar14 = *(float **)(param_1 + 0x10);
    auVar90._0_4_ = *(float *)(lVar13 + 0x40) * fVar42;
    auVar90._4_4_ = *(float *)(lVar13 + 0x44) * fVar52;
    auVar90._8_4_ = *(float *)(lVar13 + 0x48) * fVar84;
    auVar90._12_4_ = *(float *)(lVar13 + 0x4c) * 0.0;
    auVar78._0_4_ = *(float *)(lVar13 + 0x30) * fVar42;
    auVar78._4_4_ = *(float *)(lVar13 + 0x34) * fVar52;
    auVar78._8_4_ = *(float *)(lVar13 + 0x38) * fVar84;
    auVar78._12_4_ = *(float *)(lVar13 + 0x3c) * 0.0;
    auVar58 = NEON_ext(auVar78,auVar78,8,1);
    auVar44._0_4_ = fVar20 * fVar42;
    auVar44._4_4_ = fVar22 * fVar52;
    auVar44._8_4_ = fVar74 * fVar84;
    auVar44._12_4_ = *(float *)(lVar13 + 0x5c) * 0.0;
    auVar99 = NEON_ext(auVar90,auVar90,8,1);
    auVar100 = NEON_ext(auVar44,auVar44,8,1);
    fVar84 = auVar78._0_4_ + auVar78._4_4_ + auVar58._0_4_ + auVar58._4_4_;
    fVar42 = auVar90._0_4_ + auVar90._4_4_ + auVar99._0_4_ + auVar99._4_4_;
    fVar51 = auVar44._0_4_ + auVar44._4_4_ + auVar100._0_4_ + auVar100._4_4_;
    uVar86 = -(uint)(fVar51 < fVar42);
    uVar27 = -(uint)(fVar42 < fVar84 && fVar51 < fVar84);
    uVar87 = (uint)fVar20 ^ ((uint)fVar20 ^ (uint)*(float *)(lVar13 + 0x40)) & uVar86;
    uVar93 = (uint)fVar22 ^ ((uint)fVar22 ^ (uint)*(float *)(lVar13 + 0x44)) & uVar86;
    uVar86 = (uint)fVar74 ^ ((uint)fVar74 ^ (uint)*(float *)(lVar13 + 0x48)) & uVar86;
    auVar101._0_4_ = fVar53 * *(float *)(lVar19 + 0x40);
    auVar101._4_4_ = fVar43 * *(float *)(lVar19 + 0x44);
    auVar101._8_4_ = fVar54 * *(float *)(lVar19 + 0x48);
    auVar101._12_4_ = fVar56 * *(float *)(lVar19 + 0x4c);
    fVar22 = (float)(uVar87 ^ (uVar87 ^ (uint)*(float *)(lVar13 + 0x30)) & uVar27);
    fVar74 = (float)(uVar93 ^ (uVar93 ^ (uint)*(float *)(lVar13 + 0x34)) & uVar27);
    fVar51 = (float)(uVar86 ^ (uVar86 ^ (uint)*(float *)(lVar13 + 0x38)) & uVar27);
    auVar58 = *(undefined1 (*) [16])(pfVar14 + 0xc);
    auVar79._0_4_ = fVar53 * *(float *)(lVar19 + 0x30);
    auVar79._4_4_ = fVar43 * *(float *)(lVar19 + 0x34);
    auVar79._8_4_ = fVar54 * *(float *)(lVar19 + 0x38);
    auVar79._12_4_ = fVar56 * *(float *)(lVar19 + 0x3c);
    auVar100 = NEON_ext(auVar79,auVar79,8,1);
    auVar99 = NEON_ext(auVar101,auVar101,8,1);
    fVar20 = auVar100._0_4_ + auVar100._4_4_;
    fVar84 = auVar58._0_4_ + pfVar14[8] * fVar51 + *pfVar14 * fVar22 + pfVar14[4] * fVar74;
    fVar42 = auVar58._4_4_ + pfVar14[9] * fVar51 + pfVar14[1] * fVar22 + pfVar14[5] * fVar74;
    fVar52 = auVar58._8_4_ + pfVar14[10] * fVar51 + pfVar14[2] * fVar22 + pfVar14[6] * fVar74;
    fVar55 = auVar58._12_4_ + 0.0;
    fVar22 = auVar99._0_4_ + auVar99._4_4_;
    auVar29._0_4_ = fVar53 * *(float *)(lVar19 + 0x50);
    auVar29._4_4_ = fVar43 * *(float *)(lVar19 + 0x54);
    auVar29._8_4_ = fVar54 * *(float *)(lVar19 + 0x58);
    auVar29._12_4_ = fVar56 * *(float *)(lVar19 + 0x5c);
    auVar58 = NEON_ext(auVar29,auVar29,8,1);
    uStack_98 = (ulong)(uint)(auVar29._0_4_ + auVar29._4_4_ + auVar58._0_4_ + auVar58._4_4_);
    local_a0 = NEON_ext(CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar20,
                                 auVar79._0_4_ + auVar79._4_4_ + fVar20),
                        CONCAT44(auVar101._0_4_ + auVar101._4_4_ + fVar22,
                                 auVar101._0_4_ + auVar101._4_4_ + fVar22),4,1);
    uVar88 = FUN_00222070(lVar19,&local_a0);
    pfVar14 = (float *)(*(long *)(lVar19 + 0xa0) + (uVar88 & 0xffffffff) * 0xc);
    fVar20 = *pfVar14;
    fVar22 = pfVar14[1];
    fVar74 = pfVar14[2];
    uVar88 = CONCAT44(fVar42,fVar84);
    auVar116._8_4_ = fVar52;
    auVar116._0_8_ = uVar88;
    auVar116._12_4_ = fVar55;
    fVar51 = *(float *)(lVar19 + 0x30) * fVar20 + *(float *)(lVar19 + 0x40) * fVar22 +
             *(float *)(lVar19 + 0x50) * fVar74;
    fVar53 = *(float *)(lVar19 + 0x34) * fVar20 + *(float *)(lVar19 + 0x44) * fVar22 +
             *(float *)(lVar19 + 0x54) * fVar74;
    auVar82._0_8_ = CONCAT44(fVar53,fVar51);
    auVar82._8_4_ =
         *(float *)(lVar19 + 0x38) * fVar20 + *(float *)(lVar19 + 0x48) * fVar22 +
         *(float *)(lVar19 + 0x58) * fVar74;
    auVar82._12_4_ = 0.0;
    fVar84 = fVar84 - fVar51;
    fVar42 = fVar42 - fVar53;
    auVar58._0_8_ = CONCAT44(fVar42,fVar84);
    auVar58._8_4_ = fVar52 - auVar82._8_4_;
    auVar58._12_4_ = fVar55 - 0.0;
    auVar59._0_4_ = local_1b0 * fVar84;
    auVar59._4_4_ = fStack_1ac * fVar42;
    auVar59._8_4_ = fStack_1a8 * auVar58._8_4_;
    auVar59._12_4_ = auVar58._12_4_ * 0.0;
    auVar99 = NEON_ext(auVar59,auVar59,8,1);
    fVar20 = auVar59._0_4_ + auVar59._4_4_ + auVar99._0_4_ + auVar99._4_4_;
    if ((float)uVar57 + fVar103 < fVar20) {
      return 0;
    }
    fVar22 = (float)uVar15;
    fVar74 = (float)(uVar15 >> 0x20);
    bVar11 = fVar103 < fVar20 && fVar22 * 0.999775 < fVar20;
    auVar60._0_4_ = -(uint)bVar11;
    auVar60._4_4_ = -(uint)bVar11;
    auVar60._8_4_ = -(uint)bVar11;
    auVar60._12_4_ = -(uint)bVar11;
    NEON_ext(auVar60,auVar60,8,1);
    if (CONCAT13((char)auVar60._12_4_,
                 CONCAT12((char)auVar60._8_4_,CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_))) ==
        -1) {
      auVar97._0_4_ = -local_1b0;
      auVar97._4_4_ = -fStack_1ac;
      auVar97._8_4_ = -fStack_1a8;
      auVar97._12_4_ = 0;
      if (local_174 == 3) {
        FUN_00231940(&local_190,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar20 = (float)local_a0;
        auVar97._12_4_ = 0;
        auVar58._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar20 + (local_110 - local_130[0]) * local_a8[0];
        auVar58._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar20 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar58._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar20 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar58._12_4_ = local_130[3] + 0.0;
        auVar82._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar20 + (local_150 - local_170[0]) * local_a8[0];
        auVar82._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar20 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar82._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar20 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar82._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_190,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar20 = (float)local_a0;
        auVar97._12_4_ = 0;
        auVar38._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar20,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar20);
        auVar38._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar20;
        auVar38._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar20;
        auVar58 = NEON_ext(auVar38,auVar38,8,1);
        auVar58._8_4_ = (float)auVar58._0_4_;
        auVar58._0_8_ = auVar38._0_8_;
        auVar58._12_4_ = 0.0;
        auVar47._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar20,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar20);
        auVar47._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar20;
        auVar47._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar20;
        auVar99 = NEON_ext(auVar47,auVar47,8,1);
        auVar82._8_4_ = (float)auVar99._0_4_;
        auVar82._0_8_ = auVar47._0_8_;
        auVar82._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar58._4_4_ = local_130[1];
        auVar58._0_4_ = local_130[0];
        auVar58._8_4_ = local_130[2];
        auVar58._12_4_ = local_130[3];
        auVar82._4_4_ = local_170[1];
        auVar82._0_4_ = local_170[0];
        auVar82._8_4_ = local_170[2];
        auVar82._12_4_ = local_170[3];
      }
      fVar20 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar6._4_4_ = iVar1;
      auVar6._0_4_ = iVar1;
      auVar6._8_4_ = iVar1;
      auVar6._12_4_ = iVar1;
      auVar8._4_4_ = iVar2;
      auVar8._0_4_ = iVar2;
      auVar8._8_4_ = iVar2;
      auVar8._12_4_ = iVar2;
      auVar64._0_8_ =
           CONCAT44(auVar58._4_4_ + auVar97._4_4_ * fVar20,auVar58._0_4_ + auVar97._0_4_ * fVar20);
      auVar64._8_4_ = auVar58._8_4_ + auVar97._8_4_ * fVar20;
      auVar64._12_4_ = auVar58._12_4_ + auVar97._12_4_ * fVar20;
      auVar99 = NEON_ext(auVar64,auVar64,8,1);
      auVar65._8_4_ = auVar99._0_4_;
      auVar65._0_8_ = auVar64._0_8_;
      auVar65._12_4_ = 0;
      auVar58 = auVar58 ^ (auVar58 ^ auVar65) & auVar6;
      param_5[1] = auVar58._8_8_;
      *param_5 = auVar58._0_8_;
      fVar20 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar39._0_8_ =
           CONCAT44(auVar82._4_4_ - auVar97._4_4_ * fVar20,auVar82._0_4_ - auVar97._0_4_ * fVar20);
      auVar39._8_4_ = auVar82._8_4_ - auVar97._8_4_ * fVar20;
      auVar39._12_4_ = auVar82._12_4_ - auVar97._12_4_ * fVar20;
      auVar58 = NEON_ext(auVar39,auVar39,8,1);
      auVar40._8_4_ = auVar58._0_4_;
      auVar40._0_8_ = auVar39._0_8_;
      auVar40._12_4_ = 0;
      auVar82 = auVar82 ^ (auVar82 ^ auVar40) & auVar8;
      param_6[1] = auVar82._8_8_;
      *param_6 = auVar82._0_8_;
      uVar75 = NEON_fmax(0,CONCAT44(fVar74 - fVar104,fVar22 - fVar103),4);
      *param_8 = uVar75;
      param_7[1] = auVar97._8_8_;
      *param_7 = auVar97._0_8_;
      return 1;
    }
    uVar15 = (ulong)local_174;
    uVar27 = local_174 + 1;
    local_f0[uVar15 * 2 + -7] = auVar116._8_8_;
    local_f0[uVar15 * 2 + -8] = uVar88;
    local_f0[uVar15 * 2 + -0xf] = (ulong)(uint)auVar82._8_4_;
    local_f0[uVar15 * 2 + -0x10] = auVar82._0_8_;
    *(long *)(local_d0[uVar15 - 2] + 8) = auVar58._8_8_;
    local_f0[uVar15 * 2] = auVar58._0_8_;
    if (local_174 == 3) {
      local_174 = uVar27;
      auVar58 = FUN_00237120(local_f0,local_130,local_170,&local_174);
    }
    else {
      fVar20 = (float)local_f0[0];
      fVar84 = (float)(local_f0[0] >> 0x20);
      fVar42 = (float)local_f0[1];
      fVar51 = (float)(local_f0[1] >> 0x20);
      if (local_174 == 2) {
        auVar58._8_8_ = local_f0[1];
        auVar58._0_8_ = local_f0[0];
        auVar10._4_4_ = fStack_dc;
        auVar10._0_4_ = local_e0;
        auVar10._8_4_ = fStack_d8;
        auVar10._12_4_ = fStack_d4;
        auVar80._0_4_ = local_e0 - fVar20;
        auVar80._4_4_ = fStack_dc - fVar84;
        auVar80._8_4_ = fStack_d8 - fVar42;
        auVar80._12_4_ = fStack_d4 - fVar51;
        fVar54 = local_d0[0]._0_4_;
        auVar71._0_4_ = fVar54 - fVar20;
        fVar56 = local_d0[0]._4_4_;
        auVar71._4_4_ = fVar56 - fVar84;
        fVar52 = local_d0[0]._8_4_;
        auVar71._8_4_ = fVar52 - fVar42;
        auVar71._12_4_ = local_d0[0]._12_4_ - fVar51;
        auVar99 = NEON_ext(auVar80,auVar80,8,1);
        auVar100 = NEON_ext(auVar71,auVar71,8,1);
        fVar98 = auVar80._0_4_ * auVar71._4_4_ - auVar80._4_4_ * auVar71._0_4_;
        uVar76 = NEON_ext(CONCAT44(auVar80._4_4_ * auVar71._8_4_ - auVar80._8_4_ * auVar71._4_4_,
                                   fVar98),
                          CONCAT44(auVar99._4_4_ * auVar71._4_4_ - auVar80._4_4_ * auVar100._4_4_,
                                   auVar99._0_4_ * auVar71._0_4_ - auVar80._0_4_ * auVar100._0_4_),4
                          ,1);
        local_174 = 3;
        fVar55 = (float)uVar76;
        auVar91._0_4_ = fVar55 * fVar55;
        fVar85 = (float)((ulong)uVar76 >> 0x20);
        auVar91._4_4_ = fVar85 * fVar85;
        auVar91._8_4_ = fVar98 * fVar98;
        auVar91._12_4_ = 0;
        auVar99 = NEON_ext(auVar91,auVar91,8,1);
        fVar43 = auVar99._0_4_ + auVar99._4_4_;
        fVar53 = auVar91._0_4_ + auVar91._4_4_ + fVar43;
        uVar76 = CONCAT44(auVar91._0_4_ + auVar91._4_4_ + fVar43,fVar53);
        if (1.1920929e-07 < fVar53) {
          if (fVar53 != 0.0) {
            auVar99 = NEON_ext(auVar10,auVar10,8,1);
            auVar100 = NEON_ext(local_d0[0],local_d0[0],8,1);
            fVar114 = local_e0 * fVar56 - fStack_dc * fVar54;
            auVar116 = NEON_ext(auVar58,auVar58,8,1);
            uVar89 = NEON_ext(CONCAT44(fStack_dc * fVar52 - fStack_d8 * fVar56,fVar114),
                              CONCAT44(auVar99._4_4_ * fVar56 - fStack_dc * auVar100._4_4_,
                                       auVar99._0_4_ * fVar54 - local_e0 * auVar100._0_4_),4,1);
            fVar53 = fVar84 * fVar54 - fVar20 * fVar56;
            uVar117 = NEON_ext(CONCAT44(fVar42 * fVar56 - fVar84 * fVar52,fVar53),
                               CONCAT44(fVar84 * auVar100._4_4_ - auVar116._4_4_ * fVar56,
                                        fVar20 * auVar100._0_4_ - auVar116._0_4_ * fVar54),4,1);
            fVar43 = fVar20 * fStack_dc - fVar84 * local_e0;
            uVar77 = NEON_ext(CONCAT44(fVar84 * fStack_d8 - fVar42 * fStack_dc,fVar43),
                              CONCAT44(auVar116._4_4_ * fStack_dc - fVar84 * auVar99._4_4_,
                                       auVar116._0_4_ * local_e0 - fVar20 * auVar99._0_4_),4,1);
            auVar106._0_4_ = (float)uVar89 * fVar55;
            auVar106._4_4_ = (float)((ulong)uVar89 >> 0x20) * fVar85;
            auVar106._8_4_ = fVar114 * fVar98;
            auVar106._12_4_ = 0;
            auVar99 = NEON_ext(auVar106,auVar106,8,1);
            auVar109._0_4_ = (float)uVar117 * fVar55;
            auVar109._4_4_ = (float)((ulong)uVar117 >> 0x20) * fVar85;
            auVar109._8_4_ = fVar53 * fVar98;
            auVar109._12_4_ = 0;
            auVar100 = NEON_ext(auVar109,auVar109,8,1);
            fVar53 = auVar106._0_4_ + auVar106._4_4_ + auVar99._0_4_ + auVar99._4_4_;
            auVar112._0_4_ = (float)uVar77 * fVar55;
            auVar112._4_4_ = (float)((ulong)uVar77 >> 0x20) * fVar85;
            auVar112._8_4_ = fVar43 * fVar98;
            auVar112._12_4_ = 0;
            fVar43 = auVar109._0_4_ + auVar109._4_4_ + auVar100._0_4_ + auVar100._4_4_;
            auVar99 = NEON_ext(auVar112,auVar112,8,1);
            fVar114 = auVar112._0_4_ + auVar112._4_4_ + auVar99._0_4_ + auVar99._4_4_;
            bVar11 = (0.0 <= fVar53 && 0.0 <= fVar43) && 0.0 <= fVar114;
            auVar113._0_4_ = -(uint)bVar11;
            auVar113._4_4_ = -(uint)bVar11;
            auVar113._8_4_ = -(uint)bVar11;
            auVar113._12_4_ = -(uint)bVar11;
            NEON_ext(auVar113,auVar113,8,1);
            if (CONCAT13((char)auVar113._12_4_,
                         CONCAT12((char)auVar113._8_4_,
                                  CONCAT11((char)auVar113._4_4_,(char)auVar113._0_4_))) == -1) {
              auVar33._0_4_ = fVar20 * fVar55;
              auVar33._4_4_ = fVar84 * fVar85;
              auVar33._8_4_ = fVar42 * fVar98;
              auVar33._12_4_ = fVar51 * 0.0;
              auVar58 = NEON_ext(auVar33,auVar33,8,1);
              uVar77 = NEON_frecpe(uVar76,4);
              uVar89 = NEON_frecps(uVar76,uVar77,4);
              fVar20 = (float)uVar77 * (float)uVar89;
              fVar84 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              fVar84 = fVar84 * (float)((ulong)uVar77 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              fVar84 = fVar84 * (float)((ulong)uVar77 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              uVar76 = NEON_frecps(uVar76,CONCAT44(fVar84 * (float)((ulong)uVar77 >> 0x20),fVar20),4
                                  );
              fVar20 = (auVar33._0_4_ + auVar33._4_4_ + auVar58._0_4_ + auVar58._4_4_) *
                       fVar20 * (float)uVar76;
              auVar58._0_4_ = fVar55 * fVar20;
              auVar58._4_4_ = fVar85 * fVar20;
              auVar58._8_4_ = fVar98 * fVar20;
              auVar58._12_4_ = 0.0;
            }
            else {
              auVar95._0_4_ = -fVar20 * auVar80._0_4_;
              auVar95._4_4_ = -fVar84 * auVar80._4_4_;
              auVar95._8_4_ = -fVar42 * auVar80._8_4_;
              auVar95._12_4_ = auVar80._12_4_ * 0.0;
              auVar99 = NEON_ext(auVar95,auVar95,8,1);
              fVar98 = auVar99._0_4_ + auVar99._4_4_;
              auVar102._0_4_ = -local_e0 * auVar80._0_4_;
              auVar102._4_4_ = -fStack_dc * auVar80._4_4_;
              auVar102._8_4_ = -fStack_d8 * auVar80._8_4_;
              auVar102._12_4_ = auVar80._12_4_ * 0.0;
              auVar99 = NEON_ext(auVar102,auVar102,8,1);
              fVar23 = auVar99._0_4_ + auVar99._4_4_;
              fVar55 = auVar95._0_4_ + auVar95._4_4_ + fVar98;
              fVar85 = auVar102._0_4_ + auVar102._4_4_ + fVar23;
              fVar23 = auVar102._0_4_ + auVar102._4_4_ + fVar23;
              bVar11 = (0.0 <= fVar55 && fVar114 <= 0.0) && fVar85 <= 0.0;
              auVar110._0_4_ = -(uint)bVar11;
              auVar110._4_4_ = -(uint)bVar11;
              auVar110._8_4_ = -(uint)bVar11;
              auVar110._12_4_ = -(uint)bVar11;
              NEON_ext(auVar110,auVar110,8,1);
              if (CONCAT13((char)auVar110._12_4_,
                           CONCAT12((char)auVar110._8_4_,
                                    CONCAT11((char)auVar110._4_4_,(char)auVar110._0_4_))) == -1) {
                uVar76 = CONCAT44((auVar95._0_4_ + auVar95._4_4_ + fVar98) - fVar23,fVar55 - fVar85)
                ;
                uVar77 = NEON_frecpe(uVar76,4);
                uVar89 = NEON_frecps(uVar76,uVar77,4);
                fVar53 = (float)uVar77 * (float)uVar89;
                fVar43 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar43,fVar53),4);
                fVar53 = fVar53 * (float)uVar77;
                fVar43 = fVar43 * (float)((ulong)uVar77 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar43,fVar53),4);
                fVar53 = fVar53 * (float)uVar77;
                fVar43 = fVar43 * (float)((ulong)uVar77 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar43,fVar53),4);
                fVar53 = fVar53 * (float)uVar77;
                uVar76 = NEON_frecps(uVar76,CONCAT44(fVar43 * (float)((ulong)uVar77 >> 0x20),fVar53)
                                     ,4);
                fVar55 = fVar55 * (float)(-(uint)(1.1920929e-07 < ABS(fVar55 - fVar85)) &
                                         (uint)(fVar53 * (float)uVar76));
                pfVar14 = local_170;
                pfVar16 = local_130;
                auVar34._0_8_ =
                     CONCAT44(fVar84 + auVar80._4_4_ * fVar55,fVar20 + auVar80._0_4_ * fVar55);
                auVar34._8_4_ = fVar42 + auVar80._8_4_ * fVar55;
                auVar34._12_4_ = fVar51 + auVar80._12_4_ * fVar55;
                auVar58 = NEON_ext(auVar34,auVar34,8,1);
                pauVar17 = (undefined1 (*) [16])local_f0;
                auVar58._8_4_ = (float)auVar58._0_4_;
                auVar58._0_8_ = auVar34._0_8_;
                auVar58._12_4_ = 0.0;
                local_174 = 2;
LAB_002a8450:
                lVar13 = 1;
                pauVar18 = (undefined1 (*) [16])&local_e0;
              }
              else {
                auVar111._0_4_ = -local_e0 * auVar71._0_4_;
                auVar111._4_4_ = -fStack_dc * auVar71._4_4_;
                auVar111._8_4_ = -fStack_d8 * auVar71._8_4_;
                auVar111._12_4_ = auVar71._12_4_ * 0.0;
                auVar99 = NEON_ext(auVar111,auVar111,8,1);
                fVar24 = auVar99._0_4_ + auVar99._4_4_;
                auVar81._0_4_ = auVar80._0_4_ * -fVar54;
                auVar81._4_4_ = auVar80._4_4_ * -fVar56;
                auVar81._8_4_ = auVar80._8_4_ * -fVar52;
                auVar81._12_4_ = auVar80._12_4_ * 0.0;
                auVar115._0_4_ = auVar71._0_4_ * -fVar54;
                auVar115._4_4_ = auVar71._4_4_ * -fVar56;
                auVar115._8_4_ = auVar71._8_4_ * -fVar52;
                auVar115._12_4_ = auVar71._12_4_ * 0.0;
                fVar98 = auVar111._0_4_ + auVar111._4_4_ + fVar24;
                auVar99 = NEON_ext(auVar81,auVar81,8,1);
                fVar25 = auVar99._0_4_ + auVar99._4_4_;
                fVar114 = auVar81._0_4_ + auVar81._4_4_ + fVar25;
                auVar99 = NEON_ext(auVar115,auVar115,8,1);
                fVar26 = auVar99._0_4_ + auVar99._4_4_;
                fVar21 = auVar115._0_4_ + auVar115._4_4_ + fVar26;
                fVar26 = auVar115._0_4_ + auVar115._4_4_ + fVar26;
                bVar11 = (fVar85 <= fVar98 && fVar53 <= 0.0) && fVar21 <= fVar114;
                auVar107._0_4_ = -(uint)bVar11;
                auVar107._4_4_ = -(uint)bVar11;
                auVar107._8_4_ = -(uint)bVar11;
                auVar107._12_4_ = -(uint)bVar11;
                NEON_ext(auVar107,auVar107,8,1);
                if (CONCAT13((char)auVar107._12_4_,
                             CONCAT12((char)auVar107._8_4_,
                                      CONCAT11((char)auVar107._4_4_,(char)auVar107._0_4_))) == -1) {
                  fVar20 = (fVar98 - fVar85) + (fVar114 - fVar21);
                  uVar76 = CONCAT44(((auVar111._0_4_ + auVar111._4_4_ + fVar24) - fVar23) +
                                    ((auVar81._0_4_ + auVar81._4_4_ + fVar25) - fVar26),fVar20);
                  uVar77 = NEON_frecpe(uVar76,4);
                  uVar89 = NEON_frecps(uVar76,uVar77,4);
                  fVar84 = (float)uVar77 * (float)uVar89;
                  fVar42 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar42,fVar84),4);
                  fVar84 = fVar84 * (float)uVar77;
                  fVar42 = fVar42 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar42,fVar84),4);
                  fVar84 = fVar84 * (float)uVar77;
                  fVar42 = fVar42 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar42,fVar84),4);
                  fVar84 = fVar84 * (float)uVar77;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar42 * (float)((ulong)uVar77 >> 0x20),
                                                       fVar84),4);
                  fVar20 = (fVar98 - fVar85) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar20)) &
                                  (uint)(fVar84 * (float)uVar76));
                  auVar35._0_8_ =
                       CONCAT44(fStack_dc + (fVar56 - fStack_dc) * fVar20,
                                local_e0 + (fVar54 - local_e0) * fVar20);
                  auVar35._8_4_ = fStack_d8 + (fVar52 - fStack_d8) * fVar20;
                  auVar35._12_4_ = fStack_d4 + (local_d0[0]._12_4_ - fStack_d4) * fVar20;
                  auVar58 = NEON_ext(auVar35,auVar35,8,1);
                  auVar4._8_4_ = auVar58._0_4_;
                  auVar4._0_8_ = auVar35._0_8_;
                  pfVar14 = (float *)&uStack_160;
                  pfVar16 = (float *)&uStack_120;
                  pauVar17 = (undefined1 (*) [16])&local_e0;
                }
                else {
                  auVar108._0_4_ = -fVar20 * auVar71._0_4_;
                  auVar108._4_4_ = -fVar84 * auVar71._4_4_;
                  auVar108._8_4_ = -fVar42 * auVar71._8_4_;
                  auVar108._12_4_ = auVar71._12_4_ * 0.0;
                  auVar99 = NEON_ext(auVar108,auVar108,8,1);
                  fVar54 = auVar99._0_4_ + auVar99._4_4_;
                  fVar53 = auVar108._0_4_ + auVar108._4_4_ + fVar54;
                  bVar11 = (fVar43 <= 0.0 && 0.0 <= fVar53) && fVar21 <= 0.0;
                  auVar105._0_4_ = -(uint)bVar11;
                  auVar105._4_4_ = -(uint)bVar11;
                  auVar105._8_4_ = -(uint)bVar11;
                  auVar105._12_4_ = -(uint)bVar11;
                  NEON_ext(auVar105,auVar105,8,1);
                  if (CONCAT13((char)auVar105._12_4_,
                               CONCAT12((char)auVar105._8_4_,
                                        CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) != -1)
                  {
                    bVar11 = fVar55 <= 0.0 && fVar53 <= 0.0;
                    auVar72._0_4_ = -(uint)bVar11;
                    auVar72._4_4_ = -(uint)bVar11;
                    auVar72._8_4_ = -(uint)bVar11;
                    auVar72._12_4_ = -(uint)bVar11;
                    NEON_ext(auVar72,auVar72,8,1);
                    if (CONCAT13((char)auVar72._12_4_,
                                 CONCAT12((char)auVar72._8_4_,
                                          CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_))) == -1)
                    {
                      pfVar14 = local_170;
                      pfVar16 = local_130;
                      pauVar17 = (undefined1 (*) [16])local_f0;
                    }
                    else {
                      bVar11 = 0.0 <= fVar85 && fVar98 <= fVar85;
                      auVar31._0_4_ = -(uint)bVar11;
                      auVar31._4_4_ = -(uint)bVar11;
                      auVar31._8_4_ = -(uint)bVar11;
                      auVar31._12_4_ = -(uint)bVar11;
                      NEON_ext(auVar31,auVar31,8,1);
                      iVar28 = CONCAT13((char)auVar31._12_4_,
                                        CONCAT12((char)auVar31._8_4_,
                                                 CONCAT11((char)auVar31._4_4_,(char)auVar31._0_4_)))
                      ;
                      iVar68 = -(uint)(iVar28 == -1);
                      auVar32._4_4_ = iVar68;
                      auVar32._0_4_ = iVar68;
                      auVar32._8_4_ = iVar68;
                      auVar32._12_4_ = iVar68;
                      auVar58 = local_d0[0] ^ (local_d0[0] ^ auVar10) & auVar32;
                      lVar13 = 0x10;
                      if (iVar28 != -1) {
                        lVar13 = 0x20;
                      }
                      pauVar17 = (undefined1 (*) [16])((long)local_f0 + lVar13);
                      pfVar16 = (float *)((long)local_f0 + lVar13 + -0x40);
                      pfVar14 = (float *)((long)local_f0 + lVar13 + -0x80);
                    }
                    local_174 = 1;
                    goto LAB_002a8450;
                  }
                  uVar76 = CONCAT44((auVar108._0_4_ + auVar108._4_4_ + fVar54) - fVar26,
                                    fVar53 - fVar21);
                  uVar77 = NEON_frecpe(uVar76,4);
                  uVar89 = NEON_frecps(uVar76,uVar77,4);
                  fVar43 = (float)uVar77 * (float)uVar89;
                  fVar54 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
                  fVar43 = fVar43 * (float)uVar77;
                  fVar54 = fVar54 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
                  fVar43 = fVar43 * (float)uVar77;
                  fVar54 = fVar54 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
                  fVar43 = fVar43 * (float)uVar77;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar54 * (float)((ulong)uVar77 >> 0x20),
                                                       fVar43),4);
                  fVar53 = fVar53 * (float)(-(uint)(1.1920929e-07 < ABS(fVar53 - fVar21)) &
                                           (uint)(fVar43 * (float)uVar76));
                  auVar36._0_8_ =
                       CONCAT44(fVar84 + auVar71._4_4_ * fVar53,fVar20 + auVar71._0_4_ * fVar53);
                  auVar36._8_4_ = fVar42 + auVar71._8_4_ * fVar53;
                  auVar36._12_4_ = fVar51 + auVar71._12_4_ * fVar53;
                  auVar58 = NEON_ext(auVar36,auVar36,8,1);
                  auVar4._8_4_ = auVar58._0_4_;
                  auVar4._0_8_ = auVar36._0_8_;
                  pfVar14 = local_170;
                  pfVar16 = local_130;
                  pauVar17 = (undefined1 (*) [16])local_f0;
                }
                auVar58._12_4_ = 0.0;
                auVar58._0_12_ = auVar4;
                local_174 = 2;
                lVar13 = 2;
                pauVar18 = local_d0;
              }
              local_f0[1] = *(undefined8 *)(*pauVar17 + 8);
              local_f0[0] = *(ulong *)*pauVar17;
              fStack_d8 = (float)*(undefined8 *)(*pauVar18 + 8);
              fStack_d4 = (float)((ulong)*(undefined8 *)(*pauVar18 + 8) >> 0x20);
              local_e0 = (float)*(undefined8 *)*pauVar18;
              fStack_dc = (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20);
              local_130[2] = (float)*(undefined8 *)(pfVar16 + 2);
              local_130[3] = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20);
              local_130[0] = (float)*(undefined8 *)pfVar16;
              local_130[1] = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20);
              uStack_118 = local_f0[lVar13 * 2 + -7];
              uStack_120 = local_f0[lVar13 * 2 + -8];
              uStack_160 = local_f0[lVar13 * 2 + -0x10];
              uStack_158 = local_f0[lVar13 * 2 + -0xf];
              local_170[2] = (float)*(undefined8 *)(pfVar14 + 2);
              local_170[3] = (float)((ulong)*(undefined8 *)(pfVar14 + 2) >> 0x20);
              local_170[0] = (float)*(undefined8 *)pfVar14;
              local_170[1] = (float)((ulong)*(undefined8 *)pfVar14 >> 0x20);
            }
          }
        }
        else {
          auVar45._0_4_ = auVar80._0_4_ * auVar80._0_4_;
          auVar45._4_4_ = auVar80._4_4_ * auVar80._4_4_;
          auVar45._8_4_ = auVar80._8_4_ * auVar80._8_4_;
          auVar45._12_4_ = auVar80._12_4_ * auVar80._12_4_;
          auVar58 = NEON_ext(auVar45,auVar45,8,1);
          fVar43 = auVar58._0_4_ + auVar58._4_4_;
          fVar53 = auVar45._0_4_ + auVar45._4_4_ + fVar43;
          uVar76 = CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar43,fVar53);
          bVar11 = fVar53 <= 1.1920929e-07;
          auVar62._0_4_ = -(uint)bVar11;
          auVar62._4_4_ = -(uint)bVar11;
          auVar62._8_4_ = -(uint)bVar11;
          auVar62._12_4_ = -(uint)bVar11;
          NEON_ext(auVar62,auVar62,8,1);
          local_174 = 2;
          if (CONCAT13((char)auVar62._12_4_,
                       CONCAT12((char)auVar62._8_4_,
                                CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) != -1) {
            auVar63._0_4_ = -fVar20 * auVar80._0_4_;
            auVar63._4_4_ = -fVar84 * auVar80._4_4_;
            auVar63._8_4_ = -fVar42 * auVar80._8_4_;
            auVar63._12_4_ = auVar80._12_4_ * 0.0;
            auVar58 = NEON_ext(auVar63,auVar63,8,1);
            fVar53 = auVar58._0_4_ + auVar58._4_4_;
            uVar77 = NEON_frecpe(uVar76,4);
            uVar89 = NEON_frecps(uVar76,uVar77,4);
            fVar43 = (float)uVar77 * (float)uVar89;
            fVar54 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
            fVar43 = fVar43 * (float)uVar77;
            fVar54 = fVar54 * (float)((ulong)uVar77 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
            fVar43 = fVar43 * (float)uVar77;
            fVar54 = fVar54 * (float)((ulong)uVar77 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
            fVar43 = fVar43 * (float)uVar77;
            fVar54 = fVar54 * (float)((ulong)uVar77 >> 0x20);
            uVar76 = NEON_frecps(uVar76,CONCAT44(fVar54,fVar43),4);
            uVar77 = NEON_fmov(0x3f800000,4);
            uVar76 = NEON_fmin(CONCAT44((auVar63._0_4_ + auVar63._4_4_ + fVar53) *
                                        fVar54 * (float)((ulong)uVar76 >> 0x20),
                                        (auVar63._0_4_ + auVar63._4_4_ + fVar53) *
                                        fVar43 * (float)uVar76),uVar77,4);
            uVar76 = NEON_fmax(uVar76,0,4);
            fVar53 = (float)uVar76;
            fVar43 = auVar80._0_4_ * fVar53;
            fVar54 = auVar80._4_4_ * fVar53;
            fVar56 = auVar80._8_4_ * fVar53;
            fVar53 = auVar80._12_4_ * fVar53;
            goto LAB_002a7fd4;
          }
LAB_002a7fe8:
          auVar58._8_8_ = local_f0[1];
          auVar58._0_8_ = local_f0[0];
          local_174 = 1;
        }
      }
      else {
        bVar11 = local_174 == 1;
        local_174 = uVar27;
        if (bVar11) {
          fVar43 = local_e0 - fVar20;
          fVar54 = fStack_dc - fVar84;
          fVar56 = fStack_d8 - fVar42;
          fVar53 = fStack_d4 - fVar51;
          auVar61._0_4_ = fVar43 * fVar43;
          auVar61._4_4_ = fVar54 * fVar54;
          auVar61._8_4_ = fVar56 * fVar56;
          auVar61._12_4_ = fVar53 * fVar53;
          auVar58 = NEON_ext(auVar61,auVar61,8,1);
          fVar55 = auVar58._0_4_ + auVar58._4_4_;
          fVar52 = auVar61._0_4_ + auVar61._4_4_ + fVar55;
          uVar76 = CONCAT44(auVar61._0_4_ + auVar61._4_4_ + fVar55,fVar52);
          bVar11 = fVar52 <= 1.1920929e-07;
          auVar69._0_4_ = -(uint)bVar11;
          auVar69._4_4_ = -(uint)bVar11;
          auVar69._8_4_ = -(uint)bVar11;
          auVar69._12_4_ = -(uint)bVar11;
          NEON_ext(auVar69,auVar69,8,1);
          if (CONCAT13((char)auVar69._12_4_,
                       CONCAT12((char)auVar69._8_4_,
                                CONCAT11((char)auVar69._4_4_,(char)auVar69._0_4_))) == -1)
          goto LAB_002a7fe8;
          auVar70._0_4_ = -fVar20 * fVar43;
          auVar70._4_4_ = -fVar84 * fVar54;
          auVar70._8_4_ = -fVar42 * fVar56;
          auVar70._12_4_ = fVar53 * 0.0;
          auVar58 = NEON_ext(auVar70,auVar70,8,1);
          fVar52 = auVar58._0_4_ + auVar58._4_4_;
          uVar77 = NEON_frecpe(uVar76,4);
          uVar89 = NEON_frecps(uVar76,uVar77,4);
          fVar55 = (float)uVar77 * (float)uVar89;
          fVar85 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar85,fVar55),4);
          fVar55 = fVar55 * (float)uVar77;
          fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar85,fVar55),4);
          fVar55 = fVar55 * (float)uVar77;
          fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar85,fVar55),4);
          fVar55 = fVar55 * (float)uVar77;
          fVar85 = fVar85 * (float)((ulong)uVar77 >> 0x20);
          uVar76 = NEON_frecps(uVar76,CONCAT44(fVar85,fVar55),4);
          uVar77 = NEON_fmov(0x3f800000,4);
          uVar76 = NEON_fmin(CONCAT44((auVar70._0_4_ + auVar70._4_4_ + fVar52) *
                                      fVar85 * (float)((ulong)uVar76 >> 0x20),
                                      (auVar70._0_4_ + auVar70._4_4_ + fVar52) *
                                      fVar55 * (float)uVar76),uVar77,4);
          uVar76 = NEON_fmax(uVar76,0,4);
          fVar52 = (float)uVar76;
          fVar43 = fVar43 * fVar52;
          fVar54 = fVar54 * fVar52;
          fVar56 = fVar56 * fVar52;
          fVar53 = fVar53 * fVar52;
LAB_002a7fd4:
          auVar30._0_8_ = CONCAT44(fVar84 + fVar54,fVar20 + fVar43);
          auVar30._8_4_ = fVar42 + fVar56;
          auVar30._12_4_ = fVar51 + fVar53;
          auVar58 = NEON_ext(auVar30,auVar30,8,1);
          auVar58._8_4_ = (float)auVar58._0_4_;
          auVar58._0_8_ = auVar30._0_8_;
          auVar58._12_4_ = 0.0;
        }
      }
    }
    local_190 = auVar58._0_4_;
    auVar46._0_4_ = local_190 * local_190;
    fStack_18c = auVar58._4_4_;
    auVar46._4_4_ = fStack_18c * fStack_18c;
    fStack_188 = auVar58._8_4_;
    auVar46._8_4_ = fStack_188 * fStack_188;
    fStack_184 = auVar58._12_4_;
    auVar46._12_4_ = fStack_184 * fStack_184;
    auVar99 = NEON_ext(auVar46,auVar46,8,1);
    fVar84 = auVar99._0_4_ + auVar99._4_4_;
    fVar20 = auVar46._0_4_ + auVar46._4_4_ + fVar84;
    fVar84 = auVar46._0_4_ + auVar46._4_4_ + fVar84;
    uVar88 = CONCAT44(fVar84,fVar20);
    uVar76 = NEON_frsqrte(uVar88,4);
    fVar42 = (float)uVar76;
    fVar51 = (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar42 * fVar42),uVar88,4);
    fVar42 = fVar42 * (float)uVar76;
    fVar51 = fVar51 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar42 * fVar42),uVar88,4);
    fVar42 = fVar42 * (float)uVar76;
    fVar51 = fVar51 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar42 * fVar42),uVar88,4);
    fVar42 = fVar42 * (float)uVar76;
    fVar51 = fVar51 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar51 * fVar51,fVar42 * fVar42),uVar88,4);
    uVar15 = CONCAT44(fVar84 * fVar51 * (float)((ulong)uVar76 >> 0x20),
                      fVar20 * fVar42 * (float)uVar76);
    uVar15 = uVar15 ^ (uVar15 ^ uVar88) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
    bVar11 = (float)uVar15 < fVar22;
    bVar5 = (float)uVar75 * 0.1 < (float)uVar15 && bVar11;
    auVar73._0_4_ = -(uint)bVar5;
    auVar73._4_4_ = -(uint)bVar5;
    auVar73._8_4_ = -(uint)bVar5;
    auVar73._12_4_ = -(uint)bVar5;
    NEON_ext(auVar73,auVar73,8,1);
    if (CONCAT13((char)auVar73._12_4_,
                 CONCAT12((char)auVar73._8_4_,CONCAT11((char)auVar73._4_4_,(char)auVar73._0_4_))) !=
        -1) {
      auVar37._0_4_ = -(uint)bVar11;
      auVar37._4_4_ = -(uint)bVar11;
      auVar37._8_4_ = -(uint)bVar11;
      auVar37._12_4_ = -(uint)bVar11;
      NEON_ext(auVar37,auVar37,8,1);
      if (CONCAT13((char)auVar37._12_4_,
                   CONCAT12((char)auVar37._8_4_,CONCAT11((char)auVar37._4_4_,(char)auVar37._0_4_)))
          == -1) {
        *param_8 = 0;
        return 2;
      }
      auVar96._0_4_ = -local_1b0;
      auVar96._4_4_ = -fStack_1ac;
      auVar96._8_4_ = -fStack_1a8;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
      auVar96._12_4_ = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x10);
      uVar75 = NEON_fmin(CONCAT44(uVar12,uVar12),CONCAT44(uVar3,uVar3),4);
      auVar83._0_4_ = (float)uVar75 * 0.2;
      auVar83._4_4_ = (float)((ulong)uVar75 >> 0x20) * 0.2;
      auVar83._8_8_ = 0;
      auVar92._0_4_ = (float)-(uint)(0.0 < fVar103);
      auVar92._4_4_ = (float)-(uint)(0.0 < fVar104);
      auVar92._8_8_ = 0;
      fVar20 = (float)((uint)auVar83._0_4_ ^
                      ((uint)auVar83._0_4_ ^ (uint)fVar103) & (uint)auVar92._0_4_);
      if (local_174 == 3) {
        FUN_00231940(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar84 = (float)local_a0;
        auVar96._12_4_ = 0;
        auVar92._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar84 + (local_110 - local_130[0]) * local_a8[0];
        auVar92._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar84 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar92._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar84 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar92._12_4_ = local_130[3] + 0.0;
        auVar83._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar84 + (local_150 - local_170[0]) * local_a8[0];
        auVar83._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar84 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar83._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar84 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar83._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar84 = (float)local_a0;
        auVar96._12_4_ = 0;
        auVar48._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar84,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar84);
        auVar48._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar84;
        auVar48._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar84;
        auVar58 = NEON_ext(auVar48,auVar48,8,1);
        auVar92._8_4_ = (float)auVar58._0_4_;
        auVar92._0_8_ = auVar48._0_8_;
        auVar92._12_4_ = 0.0;
        auVar41._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar84,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar84);
        auVar41._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar84;
        auVar41._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar84;
        auVar58 = NEON_ext(auVar41,auVar41,8,1);
        auVar83._8_4_ = (float)auVar58._0_4_;
        auVar83._0_8_ = auVar41._0_8_;
        auVar83._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar92._4_4_ = local_130[1];
        auVar92._0_4_ = local_130[0];
        auVar92._8_4_ = local_130[2];
        auVar92._12_4_ = local_130[3];
        auVar83._4_4_ = local_170[1];
        auVar83._0_4_ = local_170[0];
        auVar83._8_4_ = local_170[2];
        auVar83._12_4_ = local_170[3];
      }
      fVar84 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar7._4_4_ = iVar1;
      auVar7._0_4_ = iVar1;
      auVar7._8_4_ = iVar1;
      auVar7._12_4_ = iVar1;
      auVar9._4_4_ = iVar2;
      auVar9._0_4_ = iVar2;
      auVar9._8_4_ = iVar2;
      auVar9._12_4_ = iVar2;
      auVar66._0_8_ =
           CONCAT44(auVar92._4_4_ + auVar96._4_4_ * fVar84,auVar92._0_4_ + auVar96._0_4_ * fVar84);
      auVar66._8_4_ = auVar92._8_4_ + auVar96._8_4_ * fVar84;
      auVar66._12_4_ = auVar92._12_4_ + auVar96._12_4_ * fVar84;
      auVar58 = NEON_ext(auVar66,auVar66,8,1);
      auVar67._8_4_ = auVar58._0_4_;
      auVar67._0_8_ = auVar66._0_8_;
      auVar67._12_4_ = 0;
      auVar92 = auVar92 ^ (auVar92 ^ auVar67) & auVar7;
      param_5[1] = auVar92._8_8_;
      *param_5 = auVar92._0_8_;
      fVar84 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar49._0_8_ =
           CONCAT44(auVar83._4_4_ - auVar96._4_4_ * fVar84,auVar83._0_4_ - auVar96._0_4_ * fVar84);
      auVar49._8_4_ = auVar83._8_4_ - auVar96._8_4_ * fVar84;
      auVar49._12_4_ = auVar83._12_4_ - auVar96._12_4_ * fVar84;
      auVar58 = NEON_ext(auVar49,auVar49,8,1);
      auVar50._8_4_ = auVar58._0_4_;
      auVar50._0_8_ = auVar49._0_8_;
      auVar50._12_4_ = 0;
      uVar75 = NEON_fmax(0,CONCAT44(fVar74 - fVar104,fVar22 - fVar103),4);
      auVar83 = auVar83 ^ (auVar83 ^ auVar50) & auVar9;
      param_6[1] = auVar83._8_8_;
      *param_6 = auVar83._0_8_;
      param_7[1] = auVar96._8_8_;
      *param_7 = auVar96._0_8_;
      *param_8 = uVar75;
      uVar12 = 1;
      if ((float)uVar75 <= fVar20) {
        uVar12 = 2;
      }
      return uVar12;
    }
    uVar76 = NEON_frecpe(uVar15,4);
    uVar77 = NEON_frecps(uVar15,uVar76,4);
    fStack_1a8 = (float)uVar76 * (float)uVar77;
    fVar20 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar77 >> 0x20);
    uVar76 = NEON_frecps(uVar15,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar76;
    fVar20 = fVar20 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frecps(uVar15,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar76;
    fVar20 = fVar20 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frecps(uVar15,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar76;
    uVar76 = NEON_frecps(uVar15,CONCAT44(fVar20 * (float)((ulong)uVar76 >> 0x20),fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar76;
    lVar13 = *(long *)(param_1 + 8);
    local_1b0 = local_190 * fStack_1a8;
    fStack_1ac = fStack_18c * fStack_1a8;
    fStack_1a8 = fStack_188 * fStack_1a8;
    lVar19 = *(long *)(param_2 + 8);
  } while( true );
}


