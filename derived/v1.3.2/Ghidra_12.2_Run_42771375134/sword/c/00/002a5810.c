/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a5810; name: FUN_002a5810
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_002a5810(long param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 *param_5,
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
  ulong uVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  float fVar39;
  float fVar41;
  undefined1 auVar30 [16];
  float fVar40;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  int iVar56;
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  int iVar71;
  undefined8 uVar72;
  undefined1 auVar73 [16];
  float fVar76;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar77;
  undefined8 uVar78;
  float fVar84;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  ulong uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  ulong uVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined8 uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
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
  fVar23 = param_3[1];
  fVar77 = param_3[2];
  fVar84 = param_3[3];
  auVar73._0_4_ = fVar20 * fVar20;
  auVar73._4_4_ = fVar23 * fVar23;
  auVar73._8_4_ = fVar77 * fVar77;
  auVar73._12_4_ = fVar84 * fVar84;
  auVar58 = NEON_ext(auVar73,auVar73,8,1);
  uVar29 = -(uint)(0.0 < auVar73._0_4_ + auVar73._4_4_ + auVar58._0_4_ + auVar58._4_4_);
  local_190 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar20) & uVar29);
  fStack_18c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar23) & uVar29);
  fStack_188 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar77) & uVar29);
  fStack_184 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar84) & uVar29);
  auVar87._0_4_ = local_190 * local_190;
  auVar87._4_4_ = fStack_18c * fStack_18c;
  auVar87._8_4_ = fStack_188 * fStack_188;
  auVar87._12_4_ = fStack_184 * fStack_184;
  auVar58 = NEON_ext(auVar87,auVar87,8,1);
  lVar19 = *(long *)(param_1 + 8);
  iVar1 = -(*(byte *)(lVar19 + 0x24) & 1);
  fVar23 = auVar58._0_4_ + auVar58._4_4_;
  fVar20 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
  fVar23 = auVar87._0_4_ + auVar87._4_4_ + fVar23;
  uVar14 = CONCAT44(fVar23,fVar20);
  uVar78 = NEON_frsqrte(uVar14,4);
  uVar85 = CONCAT44(iVar1,iVar1) &
           CONCAT44(*(undefined4 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x10));
  fVar77 = (float)uVar78;
  fVar84 = (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar77 * fVar77),uVar14,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar84 = fVar84 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar77 * fVar77),uVar14,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar84 = fVar84 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar77 * fVar77),uVar14,4);
  fVar77 = fVar77 * (float)uVar78;
  fVar84 = fVar84 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frsqrts(CONCAT44(fVar84 * fVar84,fVar77 * fVar77),uVar14,4);
  lVar13 = *(long *)(param_2 + 8);
  iVar2 = -(*(byte *)(lVar13 + 0x24) & 1);
  uVar92 = CONCAT44(iVar2,iVar2) &
           CONCAT44(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x10));
  uVar57 = *param_4;
  fVar97 = (float)uVar85 + (float)uVar92;
  fVar98 = (float)(uVar85 >> 0x20) + (float)(uVar92 >> 0x20);
  auVar58._4_4_ = fStack_18c;
  auVar58._0_4_ = local_190;
  auVar58._8_4_ = fStack_188;
  auVar58._12_4_ = fStack_184;
  uVar85 = CONCAT44(fVar23 * fVar84 * (float)((ulong)uVar78 >> 0x20),fVar20 * fVar77 * (float)uVar78
                   );
  uVar85 = uVar85 ^ (uVar85 ^ uVar14) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar78 = NEON_frecpe(uVar85,4);
  uVar79 = NEON_frecps(uVar85,uVar78,4);
  fStack_1a8 = (float)uVar78 * (float)uVar79;
  fVar20 = (float)((ulong)uVar78 >> 0x20) * (float)((ulong)uVar79 >> 0x20);
  uVar78 = NEON_frecps(uVar85,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar78;
  fVar20 = fVar20 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar85,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar78;
  fVar20 = fVar20 * (float)((ulong)uVar78 >> 0x20);
  uVar78 = NEON_frecps(uVar85,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar78;
  uVar78 = NEON_frecps(uVar85,CONCAT44(fVar20 * (float)((ulong)uVar78 >> 0x20),fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar78;
  local_1b0 = local_190 * fStack_1a8;
  fStack_1ac = fStack_18c * fStack_1a8;
  fStack_1a8 = fStack_188 * fStack_1a8;
  uVar78 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar19 + 0x14),*(undefined4 *)(lVar19 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),4);
  uVar14 = 0x7f7fffff7f7fffff;
  do {
    fVar43 = auVar58._0_4_;
    fVar20 = -fVar43;
    fVar21 = auVar58._4_4_;
    fVar23 = -fVar21;
    fVar24 = auVar58._8_4_;
    fVar41 = -fVar24;
    uStack_198 = auVar58._8_8_;
    local_1a0 = auVar58._0_8_;
    pfVar18 = *(float **)(param_1 + 0x10);
    fVar77 = *(float *)(param_1 + 0x20) * fVar20 + *(float *)(param_1 + 0x30) * fVar23 +
             *(float *)(param_1 + 0x40) * fVar41;
    fVar84 = *(float *)(param_1 + 0x24) * fVar20 + *(float *)(param_1 + 0x34) * fVar23 +
             *(float *)(param_1 + 0x44) * fVar41;
    fVar41 = *(float *)(param_1 + 0x28) * fVar20 + *(float *)(param_1 + 0x38) * fVar23 +
             *(float *)(param_1 + 0x48) * fVar41;
    auVar59._0_4_ = fVar77 * *(float *)(lVar19 + 0x40);
    auVar59._4_4_ = fVar84 * *(float *)(lVar19 + 0x44);
    auVar59._8_4_ = fVar41 * *(float *)(lVar19 + 0x48);
    auVar59._12_4_ = *(float *)(lVar19 + 0x4c) * 0.0;
    auVar45._0_4_ = *(float *)(lVar19 + 0x30) * fVar77;
    auVar45._4_4_ = *(float *)(lVar19 + 0x34) * fVar84;
    auVar45._8_4_ = *(float *)(lVar19 + 0x38) * fVar41;
    auVar45._12_4_ = *(float *)(lVar19 + 0x3c) * 0.0;
    auVar73 = NEON_ext(auVar45,auVar45,8,1);
    fVar20 = auVar73._0_4_ + auVar73._4_4_;
    auVar73 = NEON_ext(auVar59,auVar59,8,1);
    fVar23 = auVar73._0_4_ + auVar73._4_4_;
    auVar30._0_4_ = fVar77 * *(float *)(lVar19 + 0x50);
    auVar30._4_4_ = fVar84 * *(float *)(lVar19 + 0x54);
    auVar30._8_4_ = fVar41 * *(float *)(lVar19 + 0x58);
    auVar30._12_4_ = *(float *)(lVar19 + 0x5c) * 0.0;
    auVar73 = NEON_ext(auVar30,auVar30,8,1);
    uStack_98 = (ulong)(uint)(auVar30._0_4_ + auVar30._4_4_ + auVar73._0_4_ + auVar73._4_4_);
    local_a0 = NEON_ext(CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar20,
                                 auVar45._0_4_ + auVar45._4_4_ + fVar20),
                        CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar23,
                                 auVar59._0_4_ + auVar59._4_4_ + fVar23),4,1);
    uVar85 = FUN_00222070(lVar19,&local_a0);
    pfVar15 = (float *)(*(long *)(lVar19 + 0xa0) + (uVar85 & 0xffffffff) * 0xc);
    fVar20 = *pfVar15;
    fVar23 = pfVar15[1];
    fVar77 = pfVar15[2];
    lVar13 = *(long *)(param_2 + 8);
    fVar84 = *(float *)(lVar19 + 0x30) * fVar20 + *(float *)(lVar19 + 0x40) * fVar23 +
             *(float *)(lVar19 + 0x50) * fVar77;
    fVar39 = *(float *)(lVar19 + 0x34) * fVar20 + *(float *)(lVar19 + 0x44) * fVar23 +
             *(float *)(lVar19 + 0x54) * fVar77;
    fVar23 = *(float *)(lVar19 + 0x38) * fVar20 + *(float *)(lVar19 + 0x48) * fVar23 +
             *(float *)(lVar19 + 0x58) * fVar77;
    auVar73 = *(undefined1 (*) [16])(pfVar18 + 0xc);
    auVar86._0_4_ = fVar43 * *(float *)(lVar13 + 0x40);
    auVar86._4_4_ = fVar21 * *(float *)(lVar13 + 0x44);
    auVar86._8_4_ = fVar24 * *(float *)(lVar13 + 0x48);
    fVar77 = auVar58._12_4_;
    auVar86._12_4_ = fVar77 * *(float *)(lVar13 + 0x4c);
    auVar60._0_4_ = fVar43 * *(float *)(lVar13 + 0x30);
    auVar60._4_4_ = fVar21 * *(float *)(lVar13 + 0x34);
    auVar60._8_4_ = fVar24 * *(float *)(lVar13 + 0x38);
    auVar60._12_4_ = fVar77 * *(float *)(lVar13 + 0x3c);
    auVar58 = NEON_ext(auVar60,auVar60,8,1);
    fVar20 = auVar58._0_4_ + auVar58._4_4_;
    auVar58 = NEON_ext(auVar86,auVar86,8,1);
    fVar41 = auVar73._0_4_ + *pfVar18 * fVar84 + pfVar18[4] * fVar39 + pfVar18[8] * fVar23;
    fVar40 = auVar73._4_4_ + pfVar18[1] * fVar84 + pfVar18[5] * fVar39 + pfVar18[9] * fVar23;
    fVar42 = auVar73._8_4_ + pfVar18[2] * fVar84 + pfVar18[6] * fVar39 + pfVar18[10] * fVar23;
    fVar44 = auVar73._12_4_ + 0.0;
    fVar23 = auVar58._0_4_ + auVar58._4_4_;
    auVar46._0_4_ = fVar43 * *(float *)(lVar13 + 0x50);
    auVar46._4_4_ = fVar21 * *(float *)(lVar13 + 0x54);
    auVar46._8_4_ = fVar24 * *(float *)(lVar13 + 0x58);
    auVar46._12_4_ = fVar77 * *(float *)(lVar13 + 0x5c);
    auVar58 = NEON_ext(auVar46,auVar46,8,1);
    uStack_98 = (ulong)(uint)(auVar46._0_4_ + auVar46._4_4_ + auVar58._0_4_ + auVar58._4_4_);
    local_a0 = NEON_ext(CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar20,
                                 auVar60._0_4_ + auVar60._4_4_ + fVar20),
                        CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar23,
                                 auVar86._0_4_ + auVar86._4_4_ + fVar23),4,1);
    uVar85 = FUN_00222070(lVar13,&local_a0);
    pfVar15 = (float *)(*(long *)(lVar13 + 0xa0) + (uVar85 & 0xffffffff) * 0xc);
    fVar20 = *pfVar15;
    fVar23 = pfVar15[1];
    fVar77 = pfVar15[2];
    uVar85 = CONCAT44(fVar40,fVar41);
    auVar109._8_4_ = fVar42;
    auVar109._0_8_ = uVar85;
    auVar109._12_4_ = fVar44;
    fVar84 = *(float *)(lVar13 + 0x30) * fVar20 + *(float *)(lVar13 + 0x40) * fVar23 +
             *(float *)(lVar13 + 0x50) * fVar77;
    fVar39 = *(float *)(lVar13 + 0x34) * fVar20 + *(float *)(lVar13 + 0x44) * fVar23 +
             *(float *)(lVar13 + 0x54) * fVar77;
    auVar89._0_8_ = CONCAT44(fVar39,fVar84);
    auVar89._8_4_ =
         *(float *)(lVar13 + 0x38) * fVar20 + *(float *)(lVar13 + 0x48) * fVar23 +
         *(float *)(lVar13 + 0x58) * fVar77;
    auVar89._12_4_ = 0.0;
    fVar41 = fVar41 - fVar84;
    fVar40 = fVar40 - fVar39;
    auVar58._0_8_ = CONCAT44(fVar40,fVar41);
    auVar58._8_4_ = fVar42 - auVar89._8_4_;
    auVar58._12_4_ = fVar44 - 0.0;
    auVar47._0_4_ = local_1b0 * fVar41;
    auVar47._4_4_ = fStack_1ac * fVar40;
    auVar47._8_4_ = fStack_1a8 * auVar58._8_4_;
    auVar47._12_4_ = auVar58._12_4_ * 0.0;
    auVar73 = NEON_ext(auVar47,auVar47,8,1);
    fVar20 = auVar47._0_4_ + auVar47._4_4_ + auVar73._0_4_ + auVar73._4_4_;
    if ((float)uVar57 + fVar97 < fVar20) {
      return 0;
    }
    fVar23 = (float)uVar14;
    fVar77 = (float)(uVar14 >> 0x20);
    bVar11 = fVar97 < fVar20 && fVar23 * 0.999775 < fVar20;
    auVar48._0_4_ = -(uint)bVar11;
    auVar48._4_4_ = -(uint)bVar11;
    auVar48._8_4_ = -(uint)bVar11;
    auVar48._12_4_ = -(uint)bVar11;
    auVar73 = NEON_ext(auVar48,auVar48,8,1);
    auVar82._0_4_ =
         (float)CONCAT13((char)auVar48._12_4_,
                         CONCAT12((char)auVar48._8_4_,
                                  CONCAT11((char)auVar48._4_4_,(char)auVar48._0_4_)));
    auVar82[4] = auVar73[0];
    auVar82[5] = auVar73[2];
    auVar82[6] = auVar73[4];
    auVar82[7] = auVar73[6];
    auVar82._8_8_ = 0;
    if (auVar82._0_4_ == -NAN) {
      auVar95._0_4_ = -local_1b0;
      auVar95._4_4_ = -fStack_1ac;
      auVar95._8_4_ = -fStack_1a8;
      auVar95._12_4_ = 0;
      if (local_174 == 3) {
        FUN_00231940(&local_190,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar20 = (float)local_a0;
        auVar95._12_4_ = 0;
        auVar89._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar20 + (local_110 - local_130[0]) * local_a8[0];
        auVar89._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar20 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar89._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar20 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar89._12_4_ = local_130[3] + 0.0;
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
        auVar95._12_4_ = 0;
        auVar35._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar20,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar20);
        auVar35._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar20;
        auVar35._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar20;
        auVar58 = NEON_ext(auVar35,auVar35,8,1);
        auVar89._8_4_ = (float)auVar58._0_4_;
        auVar89._0_8_ = auVar35._0_8_;
        auVar89._12_4_ = 0.0;
        auVar52._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar20,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar20);
        auVar52._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar20;
        auVar52._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar20;
        auVar58 = NEON_ext(auVar52,auVar52,8,1);
        auVar82._8_4_ = (float)auVar58._0_4_;
        auVar82._0_8_ = auVar52._0_8_;
        auVar82._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar89._4_4_ = local_130[1];
        auVar89._0_4_ = local_130[0];
        auVar89._8_4_ = local_130[2];
        auVar89._12_4_ = local_130[3];
        auVar82._4_4_ = local_170[1];
        auVar82._0_4_ = local_170[0];
        auVar82._8_4_ = local_170[2];
        auVar82._12_4_ = local_170[3];
      }
      auVar6._4_4_ = iVar1;
      auVar6._0_4_ = iVar1;
      auVar6._8_4_ = iVar1;
      auVar6._12_4_ = iVar1;
      auVar8._4_4_ = iVar2;
      auVar8._0_4_ = iVar2;
      auVar8._8_4_ = iVar2;
      auVar8._12_4_ = iVar2;
      fVar20 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar67._0_8_ =
           CONCAT44(auVar89._4_4_ + auVar95._4_4_ * fVar20,auVar89._0_4_ + auVar95._0_4_ * fVar20);
      auVar67._8_4_ = auVar89._8_4_ + auVar95._8_4_ * fVar20;
      auVar67._12_4_ = auVar89._12_4_ + auVar95._12_4_ * fVar20;
      auVar58 = NEON_ext(auVar67,auVar67,8,1);
      auVar68._8_4_ = auVar58._0_4_;
      auVar68._0_8_ = auVar67._0_8_;
      auVar68._12_4_ = 0;
      auVar89 = auVar89 ^ (auVar89 ^ auVar68) & auVar6;
      param_5[1] = auVar89._8_8_;
      *param_5 = auVar89._0_8_;
      fVar20 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar36._0_8_ =
           CONCAT44(auVar82._4_4_ - auVar95._4_4_ * fVar20,auVar82._0_4_ - auVar95._0_4_ * fVar20);
      auVar36._8_4_ = auVar82._8_4_ - auVar95._8_4_ * fVar20;
      auVar36._12_4_ = auVar82._12_4_ - auVar95._12_4_ * fVar20;
      auVar58 = NEON_ext(auVar36,auVar36,8,1);
      auVar37._8_4_ = auVar58._0_4_;
      auVar37._0_8_ = auVar36._0_8_;
      auVar37._12_4_ = 0;
      auVar82 = auVar82 ^ (auVar82 ^ auVar37) & auVar8;
      param_6[1] = auVar82._8_8_;
      *param_6 = auVar82._0_8_;
      uVar78 = NEON_fmax(0,CONCAT44(fVar77 - fVar98,fVar23 - fVar97),4);
      *param_8 = uVar78;
      param_7[1] = auVar95._8_8_;
      *param_7 = auVar95._0_8_;
      return 1;
    }
    uVar14 = (ulong)local_174;
    uVar29 = local_174 + 1;
    local_f0[uVar14 * 2 + -7] = auVar109._8_8_;
    local_f0[uVar14 * 2 + -8] = uVar85;
    local_f0[uVar14 * 2 + -0xf] = (ulong)(uint)auVar89._8_4_;
    local_f0[uVar14 * 2 + -0x10] = auVar89._0_8_;
    *(long *)(local_d0[uVar14 - 2] + 8) = auVar58._8_8_;
    local_f0[uVar14 * 2] = auVar58._0_8_;
    if (local_174 == 3) {
      local_174 = uVar29;
      auVar58 = FUN_00237120(local_f0,local_130,local_170,&local_174);
    }
    else {
      fVar20 = (float)local_f0[0];
      fVar84 = (float)(local_f0[0] >> 0x20);
      fVar41 = (float)local_f0[1];
      fVar39 = (float)(local_f0[1] >> 0x20);
      if (local_174 == 2) {
        auVar58._8_8_ = local_f0[1];
        auVar58._0_8_ = local_f0[0];
        auVar10._4_4_ = fStack_dc;
        auVar10._0_4_ = local_e0;
        auVar10._8_4_ = fStack_d8;
        auVar10._12_4_ = fStack_d4;
        auVar74._0_4_ = local_e0 - fVar20;
        auVar74._4_4_ = fStack_dc - fVar84;
        auVar74._8_4_ = fStack_d8 - fVar41;
        auVar74._12_4_ = fStack_d4 - fVar39;
        fVar44 = local_d0[0]._0_4_;
        auVar63._0_4_ = fVar44 - fVar20;
        fVar43 = local_d0[0]._4_4_;
        auVar63._4_4_ = fVar43 - fVar84;
        fVar21 = local_d0[0]._8_4_;
        auVar63._8_4_ = fVar21 - fVar41;
        auVar63._12_4_ = local_d0[0]._12_4_ - fVar39;
        auVar73 = NEON_ext(auVar74,auVar74,8,1);
        auVar87 = NEON_ext(auVar63,auVar63,8,1);
        fVar91 = auVar74._0_4_ * auVar63._4_4_ - auVar74._4_4_ * auVar63._0_4_;
        uVar79 = NEON_ext(CONCAT44(auVar74._4_4_ * auVar63._8_4_ - auVar74._8_4_ * auVar63._4_4_,
                                   fVar91),
                          CONCAT44(auVar73._4_4_ * auVar63._4_4_ - auVar74._4_4_ * auVar87._4_4_,
                                   auVar73._0_4_ * auVar63._0_4_ - auVar74._0_4_ * auVar87._0_4_),4,
                          1);
        local_174 = 3;
        fVar24 = (float)uVar79;
        auVar81._0_4_ = fVar24 * fVar24;
        fVar76 = (float)((ulong)uVar79 >> 0x20);
        auVar81._4_4_ = fVar76 * fVar76;
        auVar81._8_4_ = fVar91 * fVar91;
        auVar81._12_4_ = 0;
        auVar73 = NEON_ext(auVar81,auVar81,8,1);
        fVar42 = auVar73._0_4_ + auVar73._4_4_;
        fVar40 = auVar81._0_4_ + auVar81._4_4_ + fVar42;
        uVar79 = CONCAT44(auVar81._0_4_ + auVar81._4_4_ + fVar42,fVar40);
        if (1.1920929e-07 < fVar40) {
          if (fVar40 != 0.0) {
            auVar73 = NEON_ext(auVar10,auVar10,8,1);
            auVar87 = NEON_ext(local_d0[0],local_d0[0],8,1);
            fVar107 = local_e0 * fVar43 - fStack_dc * fVar44;
            auVar109 = NEON_ext(auVar58,auVar58,8,1);
            uVar80 = NEON_ext(CONCAT44(fStack_dc * fVar21 - fStack_d8 * fVar43,fVar107),
                              CONCAT44(auVar73._4_4_ * fVar43 - fStack_dc * auVar87._4_4_,
                                       auVar73._0_4_ * fVar44 - local_e0 * auVar87._0_4_),4,1);
            fVar40 = fVar84 * fVar44 - fVar20 * fVar43;
            uVar110 = NEON_ext(CONCAT44(fVar41 * fVar43 - fVar84 * fVar21,fVar40),
                               CONCAT44(fVar84 * auVar87._4_4_ - auVar109._4_4_ * fVar43,
                                        fVar20 * auVar87._0_4_ - auVar109._0_4_ * fVar44),4,1);
            fVar42 = fVar20 * fStack_dc - fVar84 * local_e0;
            uVar72 = NEON_ext(CONCAT44(fVar84 * fStack_d8 - fVar41 * fStack_dc,fVar42),
                              CONCAT44(auVar109._4_4_ * fStack_dc - fVar84 * auVar73._4_4_,
                                       auVar109._0_4_ * local_e0 - fVar20 * auVar73._0_4_),4,1);
            auVar99._0_4_ = (float)uVar80 * fVar24;
            auVar99._4_4_ = (float)((ulong)uVar80 >> 0x20) * fVar76;
            auVar99._8_4_ = fVar107 * fVar91;
            auVar99._12_4_ = 0;
            auVar73 = NEON_ext(auVar99,auVar99,8,1);
            auVar102._0_4_ = (float)uVar110 * fVar24;
            auVar102._4_4_ = (float)((ulong)uVar110 >> 0x20) * fVar76;
            auVar102._8_4_ = fVar40 * fVar91;
            auVar102._12_4_ = 0;
            auVar87 = NEON_ext(auVar102,auVar102,8,1);
            fVar40 = auVar99._0_4_ + auVar99._4_4_ + auVar73._0_4_ + auVar73._4_4_;
            auVar105._0_4_ = (float)uVar72 * fVar24;
            auVar105._4_4_ = (float)((ulong)uVar72 >> 0x20) * fVar76;
            auVar105._8_4_ = fVar42 * fVar91;
            auVar105._12_4_ = 0;
            fVar42 = auVar102._0_4_ + auVar102._4_4_ + auVar87._0_4_ + auVar87._4_4_;
            auVar73 = NEON_ext(auVar105,auVar105,8,1);
            fVar107 = auVar105._0_4_ + auVar105._4_4_ + auVar73._0_4_ + auVar73._4_4_;
            bVar11 = (0.0 <= fVar40 && 0.0 <= fVar42) && 0.0 <= fVar107;
            auVar106._0_4_ = -(uint)bVar11;
            auVar106._4_4_ = -(uint)bVar11;
            auVar106._8_4_ = -(uint)bVar11;
            auVar106._12_4_ = -(uint)bVar11;
            NEON_ext(auVar106,auVar106,8,1);
            if (CONCAT13((char)auVar106._12_4_,
                         CONCAT12((char)auVar106._8_4_,
                                  CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) == -1) {
              auVar32._0_4_ = fVar20 * fVar24;
              auVar32._4_4_ = fVar84 * fVar76;
              auVar32._8_4_ = fVar41 * fVar91;
              auVar32._12_4_ = fVar39 * 0.0;
              auVar58 = NEON_ext(auVar32,auVar32,8,1);
              uVar72 = NEON_frecpe(uVar79,4);
              uVar80 = NEON_frecps(uVar79,uVar72,4);
              fVar20 = (float)uVar72 * (float)uVar80;
              fVar84 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
              uVar72 = NEON_frecps(uVar79,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar72;
              fVar84 = fVar84 * (float)((ulong)uVar72 >> 0x20);
              uVar72 = NEON_frecps(uVar79,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar72;
              fVar84 = fVar84 * (float)((ulong)uVar72 >> 0x20);
              uVar72 = NEON_frecps(uVar79,CONCAT44(fVar84,fVar20),4);
              fVar20 = fVar20 * (float)uVar72;
              uVar79 = NEON_frecps(uVar79,CONCAT44(fVar84 * (float)((ulong)uVar72 >> 0x20),fVar20),4
                                  );
              fVar20 = (auVar32._0_4_ + auVar32._4_4_ + auVar58._0_4_ + auVar58._4_4_) *
                       fVar20 * (float)uVar79;
              auVar58._0_4_ = fVar24 * fVar20;
              auVar58._4_4_ = fVar76 * fVar20;
              auVar58._8_4_ = fVar91 * fVar20;
              auVar58._12_4_ = 0.0;
            }
            else {
              auVar88._0_4_ = -fVar20 * auVar74._0_4_;
              auVar88._4_4_ = -fVar84 * auVar74._4_4_;
              auVar88._8_4_ = -fVar41 * auVar74._8_4_;
              auVar88._12_4_ = auVar74._12_4_ * 0.0;
              auVar73 = NEON_ext(auVar88,auVar88,8,1);
              fVar91 = auVar73._0_4_ + auVar73._4_4_;
              auVar93._0_4_ = -local_e0 * auVar74._0_4_;
              auVar93._4_4_ = -fStack_dc * auVar74._4_4_;
              auVar93._8_4_ = -fStack_d8 * auVar74._8_4_;
              auVar93._12_4_ = auVar74._12_4_ * 0.0;
              auVar73 = NEON_ext(auVar93,auVar93,8,1);
              fVar25 = auVar73._0_4_ + auVar73._4_4_;
              fVar24 = auVar88._0_4_ + auVar88._4_4_ + fVar91;
              fVar76 = auVar93._0_4_ + auVar93._4_4_ + fVar25;
              fVar25 = auVar93._0_4_ + auVar93._4_4_ + fVar25;
              bVar11 = (0.0 <= fVar24 && fVar107 <= 0.0) && fVar76 <= 0.0;
              auVar103._0_4_ = -(uint)bVar11;
              auVar103._4_4_ = -(uint)bVar11;
              auVar103._8_4_ = -(uint)bVar11;
              auVar103._12_4_ = -(uint)bVar11;
              NEON_ext(auVar103,auVar103,8,1);
              if (CONCAT13((char)auVar103._12_4_,
                           CONCAT12((char)auVar103._8_4_,
                                    CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_))) == -1) {
                uVar79 = CONCAT44((auVar88._0_4_ + auVar88._4_4_ + fVar91) - fVar25,fVar24 - fVar76)
                ;
                uVar72 = NEON_frecpe(uVar79,4);
                uVar80 = NEON_frecps(uVar79,uVar72,4);
                fVar40 = (float)uVar72 * (float)uVar80;
                fVar42 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
                uVar72 = NEON_frecps(uVar79,CONCAT44(fVar42,fVar40),4);
                fVar40 = fVar40 * (float)uVar72;
                fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
                uVar72 = NEON_frecps(uVar79,CONCAT44(fVar42,fVar40),4);
                fVar40 = fVar40 * (float)uVar72;
                fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
                uVar72 = NEON_frecps(uVar79,CONCAT44(fVar42,fVar40),4);
                fVar40 = fVar40 * (float)uVar72;
                uVar79 = NEON_frecps(uVar79,CONCAT44(fVar42 * (float)((ulong)uVar72 >> 0x20),fVar40)
                                     ,4);
                fVar24 = fVar24 * (float)(-(uint)(1.1920929e-07 < ABS(fVar24 - fVar76)) &
                                         (uint)(fVar40 * (float)uVar79));
                pfVar15 = local_170;
                pfVar18 = local_130;
                auVar113._0_8_ =
                     CONCAT44(fVar84 + auVar74._4_4_ * fVar24,fVar20 + auVar74._0_4_ * fVar24);
                auVar113._8_4_ = fVar41 + auVar74._8_4_ * fVar24;
                auVar113._12_4_ = fVar39 + auVar74._12_4_ * fVar24;
                auVar58 = NEON_ext(auVar113,auVar113,8,1);
                pauVar16 = (undefined1 (*) [16])local_f0;
                auVar58._8_4_ = (float)auVar58._0_4_;
                auVar58._0_8_ = auVar113._0_8_;
                auVar58._12_4_ = 0.0;
                local_174 = 2;
LAB_002a62bc:
                lVar13 = 1;
                pauVar17 = (undefined1 (*) [16])&local_e0;
              }
              else {
                auVar104._0_4_ = -local_e0 * auVar63._0_4_;
                auVar104._4_4_ = -fStack_dc * auVar63._4_4_;
                auVar104._8_4_ = -fStack_d8 * auVar63._8_4_;
                auVar104._12_4_ = auVar63._12_4_ * 0.0;
                auVar73 = NEON_ext(auVar104,auVar104,8,1);
                fVar26 = auVar73._0_4_ + auVar73._4_4_;
                auVar75._0_4_ = auVar74._0_4_ * -fVar44;
                auVar75._4_4_ = auVar74._4_4_ * -fVar43;
                auVar75._8_4_ = auVar74._8_4_ * -fVar21;
                auVar75._12_4_ = auVar74._12_4_ * 0.0;
                auVar108._0_4_ = auVar63._0_4_ * -fVar44;
                auVar108._4_4_ = auVar63._4_4_ * -fVar43;
                auVar108._8_4_ = auVar63._8_4_ * -fVar21;
                auVar108._12_4_ = auVar63._12_4_ * 0.0;
                fVar91 = auVar104._0_4_ + auVar104._4_4_ + fVar26;
                auVar73 = NEON_ext(auVar75,auVar75,8,1);
                fVar27 = auVar73._0_4_ + auVar73._4_4_;
                fVar107 = auVar75._0_4_ + auVar75._4_4_ + fVar27;
                auVar73 = NEON_ext(auVar108,auVar108,8,1);
                fVar28 = auVar73._0_4_ + auVar73._4_4_;
                fVar22 = auVar108._0_4_ + auVar108._4_4_ + fVar28;
                fVar28 = auVar108._0_4_ + auVar108._4_4_ + fVar28;
                bVar11 = (fVar76 <= fVar91 && fVar40 <= 0.0) && fVar22 <= fVar107;
                auVar100._0_4_ = -(uint)bVar11;
                auVar100._4_4_ = -(uint)bVar11;
                auVar100._8_4_ = -(uint)bVar11;
                auVar100._12_4_ = -(uint)bVar11;
                NEON_ext(auVar100,auVar100,8,1);
                if (CONCAT13((char)auVar100._12_4_,
                             CONCAT12((char)auVar100._8_4_,
                                      CONCAT11((char)auVar100._4_4_,(char)auVar100._0_4_))) == -1) {
                  fVar20 = (fVar91 - fVar76) + (fVar107 - fVar22);
                  uVar79 = CONCAT44(((auVar104._0_4_ + auVar104._4_4_ + fVar26) - fVar25) +
                                    ((auVar75._0_4_ + auVar75._4_4_ + fVar27) - fVar28),fVar20);
                  uVar72 = NEON_frecpe(uVar79,4);
                  uVar80 = NEON_frecps(uVar79,uVar72,4);
                  fVar84 = (float)uVar72 * (float)uVar80;
                  fVar41 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar41,fVar84),4);
                  fVar84 = fVar84 * (float)uVar72;
                  fVar41 = fVar41 * (float)((ulong)uVar72 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar41,fVar84),4);
                  fVar84 = fVar84 * (float)uVar72;
                  fVar41 = fVar41 * (float)((ulong)uVar72 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar41,fVar84),4);
                  fVar84 = fVar84 * (float)uVar72;
                  uVar79 = NEON_frecps(uVar79,CONCAT44(fVar41 * (float)((ulong)uVar72 >> 0x20),
                                                       fVar84),4);
                  fVar20 = (fVar91 - fVar76) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar20)) &
                                  (uint)(fVar84 * (float)uVar79));
                  auVar114._0_8_ =
                       CONCAT44(fStack_dc + (fVar43 - fStack_dc) * fVar20,
                                local_e0 + (fVar44 - local_e0) * fVar20);
                  auVar114._8_4_ = fStack_d8 + (fVar21 - fStack_d8) * fVar20;
                  auVar114._12_4_ = fStack_d4 + (local_d0[0]._12_4_ - fStack_d4) * fVar20;
                  auVar58 = NEON_ext(auVar114,auVar114,8,1);
                  auVar4._8_4_ = auVar58._0_4_;
                  auVar4._0_8_ = auVar114._0_8_;
                  pfVar15 = (float *)&uStack_160;
                  pfVar18 = (float *)&uStack_120;
                  pauVar16 = (undefined1 (*) [16])&local_e0;
                }
                else {
                  auVar101._0_4_ = -fVar20 * auVar63._0_4_;
                  auVar101._4_4_ = -fVar84 * auVar63._4_4_;
                  auVar101._8_4_ = -fVar41 * auVar63._8_4_;
                  auVar101._12_4_ = auVar63._12_4_ * 0.0;
                  auVar73 = NEON_ext(auVar101,auVar101,8,1);
                  fVar44 = auVar73._0_4_ + auVar73._4_4_;
                  fVar40 = auVar101._0_4_ + auVar101._4_4_ + fVar44;
                  bVar11 = (fVar42 <= 0.0 && 0.0 <= fVar40) && fVar22 <= 0.0;
                  auVar96._0_4_ = -(uint)bVar11;
                  auVar96._4_4_ = -(uint)bVar11;
                  auVar96._8_4_ = -(uint)bVar11;
                  auVar96._12_4_ = -(uint)bVar11;
                  NEON_ext(auVar96,auVar96,8,1);
                  if (CONCAT13((char)auVar96._12_4_,
                               CONCAT12((char)auVar96._8_4_,
                                        CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))) != -1) {
                    bVar11 = fVar24 <= 0.0 && fVar40 <= 0.0;
                    auVar64._0_4_ = -(uint)bVar11;
                    auVar64._4_4_ = -(uint)bVar11;
                    auVar64._8_4_ = -(uint)bVar11;
                    auVar64._12_4_ = -(uint)bVar11;
                    NEON_ext(auVar64,auVar64,8,1);
                    if (CONCAT13((char)auVar64._12_4_,
                                 CONCAT12((char)auVar64._8_4_,
                                          CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) == -1)
                    {
                      pfVar15 = local_170;
                      pfVar18 = local_130;
                      pauVar16 = (undefined1 (*) [16])local_f0;
                    }
                    else {
                      bVar11 = 0.0 <= fVar76 && fVar91 <= fVar76;
                      auVar65._0_4_ = -(uint)bVar11;
                      auVar65._4_4_ = -(uint)bVar11;
                      auVar65._8_4_ = -(uint)bVar11;
                      auVar65._12_4_ = -(uint)bVar11;
                      NEON_ext(auVar65,auVar65,8,1);
                      iVar56 = CONCAT13((char)auVar65._12_4_,
                                        CONCAT12((char)auVar65._8_4_,
                                                 CONCAT11((char)auVar65._4_4_,(char)auVar65._0_4_)))
                      ;
                      iVar71 = -(uint)(iVar56 == -1);
                      auVar112._4_4_ = iVar71;
                      auVar112._0_4_ = iVar71;
                      auVar112._8_4_ = iVar71;
                      auVar112._12_4_ = iVar71;
                      auVar58 = local_d0[0] ^ (local_d0[0] ^ auVar10) & auVar112;
                      lVar13 = 0x10;
                      if (iVar56 != -1) {
                        lVar13 = 0x20;
                      }
                      pauVar16 = (undefined1 (*) [16])((long)local_f0 + lVar13);
                      pfVar18 = (float *)((long)local_f0 + lVar13 + -0x40);
                      pfVar15 = (float *)((long)local_f0 + lVar13 + -0x80);
                    }
                    local_174 = 1;
                    goto LAB_002a62bc;
                  }
                  uVar79 = CONCAT44((auVar101._0_4_ + auVar101._4_4_ + fVar44) - fVar28,
                                    fVar40 - fVar22);
                  uVar72 = NEON_frecpe(uVar79,4);
                  uVar80 = NEON_frecps(uVar79,uVar72,4);
                  fVar42 = (float)uVar72 * (float)uVar80;
                  fVar44 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
                  fVar42 = fVar42 * (float)uVar72;
                  fVar44 = fVar44 * (float)((ulong)uVar72 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
                  fVar42 = fVar42 * (float)uVar72;
                  fVar44 = fVar44 * (float)((ulong)uVar72 >> 0x20);
                  uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
                  fVar42 = fVar42 * (float)uVar72;
                  uVar79 = NEON_frecps(uVar79,CONCAT44(fVar44 * (float)((ulong)uVar72 >> 0x20),
                                                       fVar42),4);
                  fVar40 = fVar40 * (float)(-(uint)(1.1920929e-07 < ABS(fVar40 - fVar22)) &
                                           (uint)(fVar42 * (float)uVar79));
                  auVar115._0_8_ =
                       CONCAT44(fVar84 + auVar63._4_4_ * fVar40,fVar20 + auVar63._0_4_ * fVar40);
                  auVar115._8_4_ = fVar41 + auVar63._8_4_ * fVar40;
                  auVar115._12_4_ = fVar39 + auVar63._12_4_ * fVar40;
                  auVar58 = NEON_ext(auVar115,auVar115,8,1);
                  auVar4._8_4_ = auVar58._0_4_;
                  auVar4._0_8_ = auVar115._0_8_;
                  pfVar15 = local_170;
                  pfVar18 = local_130;
                  pauVar16 = (undefined1 (*) [16])local_f0;
                }
                auVar58._12_4_ = 0.0;
                auVar58._0_12_ = auVar4;
                local_174 = 2;
                lVar13 = 2;
                pauVar17 = local_d0;
              }
              local_f0[1] = *(undefined8 *)((long)*pauVar16 + 8);
              local_f0[0] = *(ulong *)*pauVar16;
              fStack_d8 = (float)*(undefined8 *)((long)*pauVar17 + 8);
              fStack_d4 = (float)((ulong)*(undefined8 *)((long)*pauVar17 + 8) >> 0x20);
              local_e0 = (float)*(undefined8 *)*pauVar17;
              fStack_dc = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
              local_130[2] = (float)*(undefined8 *)(pfVar18 + 2);
              local_130[3] = (float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20);
              local_130[0] = (float)*(undefined8 *)pfVar18;
              local_130[1] = (float)((ulong)*(undefined8 *)pfVar18 >> 0x20);
              uStack_118 = local_f0[lVar13 * 2 + -7];
              uStack_120 = local_f0[lVar13 * 2 + -8];
              uStack_160 = local_f0[lVar13 * 2 + -0x10];
              uStack_158 = local_f0[lVar13 * 2 + -0xf];
              local_170[2] = (float)*(undefined8 *)(pfVar15 + 2);
              local_170[3] = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
              local_170[0] = (float)*(undefined8 *)pfVar15;
              local_170[1] = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
            }
          }
        }
        else {
          auVar31._0_4_ = auVar74._0_4_ * auVar74._0_4_;
          auVar31._4_4_ = auVar74._4_4_ * auVar74._4_4_;
          auVar31._8_4_ = auVar74._8_4_ * auVar74._8_4_;
          auVar31._12_4_ = auVar74._12_4_ * auVar74._12_4_;
          auVar58 = NEON_ext(auVar31,auVar31,8,1);
          fVar42 = auVar58._0_4_ + auVar58._4_4_;
          fVar40 = auVar31._0_4_ + auVar31._4_4_ + fVar42;
          uVar79 = CONCAT44(auVar31._0_4_ + auVar31._4_4_ + fVar42,fVar40);
          bVar11 = fVar40 <= 1.1920929e-07;
          auVar50._0_4_ = -(uint)bVar11;
          auVar50._4_4_ = -(uint)bVar11;
          auVar50._8_4_ = -(uint)bVar11;
          auVar50._12_4_ = -(uint)bVar11;
          NEON_ext(auVar50,auVar50,8,1);
          local_174 = 2;
          if (CONCAT13((char)auVar50._12_4_,
                       CONCAT12((char)auVar50._8_4_,
                                CONCAT11((char)auVar50._4_4_,(char)auVar50._0_4_))) != -1) {
            auVar51._0_4_ = -fVar20 * auVar74._0_4_;
            auVar51._4_4_ = -fVar84 * auVar74._4_4_;
            auVar51._8_4_ = -fVar41 * auVar74._8_4_;
            auVar51._12_4_ = auVar74._12_4_ * 0.0;
            auVar58 = NEON_ext(auVar51,auVar51,8,1);
            fVar40 = auVar58._0_4_ + auVar58._4_4_;
            uVar72 = NEON_frecpe(uVar79,4);
            uVar80 = NEON_frecps(uVar79,uVar72,4);
            fVar42 = (float)uVar72 * (float)uVar80;
            fVar44 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
            uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
            fVar42 = fVar42 * (float)uVar72;
            fVar44 = fVar44 * (float)((ulong)uVar72 >> 0x20);
            uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
            fVar42 = fVar42 * (float)uVar72;
            fVar44 = fVar44 * (float)((ulong)uVar72 >> 0x20);
            uVar72 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
            fVar42 = fVar42 * (float)uVar72;
            fVar44 = fVar44 * (float)((ulong)uVar72 >> 0x20);
            uVar79 = NEON_frecps(uVar79,CONCAT44(fVar44,fVar42),4);
            uVar72 = NEON_fmov(0x3f800000,4);
            uVar79 = NEON_fmin(CONCAT44((auVar51._0_4_ + auVar51._4_4_ + fVar40) *
                                        fVar44 * (float)((ulong)uVar79 >> 0x20),
                                        (auVar51._0_4_ + auVar51._4_4_ + fVar40) *
                                        fVar42 * (float)uVar79),uVar72,4);
            uVar79 = NEON_fmax(uVar79,0,4);
            fVar40 = (float)uVar79;
            fVar42 = auVar74._0_4_ * fVar40;
            fVar44 = auVar74._4_4_ * fVar40;
            fVar43 = auVar74._8_4_ * fVar40;
            fVar40 = auVar74._12_4_ * fVar40;
            goto LAB_002a5e40;
          }
LAB_002a5e54:
          auVar58._8_8_ = local_f0[1];
          auVar58._0_8_ = local_f0[0];
          local_174 = 1;
        }
      }
      else {
        bVar11 = local_174 == 1;
        local_174 = uVar29;
        if (bVar11) {
          fVar42 = local_e0 - fVar20;
          fVar44 = fStack_dc - fVar84;
          fVar43 = fStack_d8 - fVar41;
          fVar40 = fStack_d4 - fVar39;
          auVar49._0_4_ = fVar42 * fVar42;
          auVar49._4_4_ = fVar44 * fVar44;
          auVar49._8_4_ = fVar43 * fVar43;
          auVar49._12_4_ = fVar40 * fVar40;
          auVar58 = NEON_ext(auVar49,auVar49,8,1);
          fVar24 = auVar58._0_4_ + auVar58._4_4_;
          fVar21 = auVar49._0_4_ + auVar49._4_4_ + fVar24;
          uVar79 = CONCAT44(auVar49._0_4_ + auVar49._4_4_ + fVar24,fVar21);
          bVar11 = fVar21 <= 1.1920929e-07;
          auVar61._0_4_ = -(uint)bVar11;
          auVar61._4_4_ = -(uint)bVar11;
          auVar61._8_4_ = -(uint)bVar11;
          auVar61._12_4_ = -(uint)bVar11;
          NEON_ext(auVar61,auVar61,8,1);
          if (CONCAT13((char)auVar61._12_4_,
                       CONCAT12((char)auVar61._8_4_,
                                CONCAT11((char)auVar61._4_4_,(char)auVar61._0_4_))) == -1)
          goto LAB_002a5e54;
          auVar62._0_4_ = -fVar20 * fVar42;
          auVar62._4_4_ = -fVar84 * fVar44;
          auVar62._8_4_ = -fVar41 * fVar43;
          auVar62._12_4_ = fVar40 * 0.0;
          auVar58 = NEON_ext(auVar62,auVar62,8,1);
          fVar21 = auVar58._0_4_ + auVar58._4_4_;
          uVar72 = NEON_frecpe(uVar79,4);
          uVar80 = NEON_frecps(uVar79,uVar72,4);
          fVar24 = (float)uVar72 * (float)uVar80;
          fVar76 = (float)((ulong)uVar72 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
          uVar72 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar24),4);
          fVar24 = fVar24 * (float)uVar72;
          fVar76 = fVar76 * (float)((ulong)uVar72 >> 0x20);
          uVar72 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar24),4);
          fVar24 = fVar24 * (float)uVar72;
          fVar76 = fVar76 * (float)((ulong)uVar72 >> 0x20);
          uVar72 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar24),4);
          fVar24 = fVar24 * (float)uVar72;
          fVar76 = fVar76 * (float)((ulong)uVar72 >> 0x20);
          uVar79 = NEON_frecps(uVar79,CONCAT44(fVar76,fVar24),4);
          uVar72 = NEON_fmov(0x3f800000,4);
          uVar79 = NEON_fmin(CONCAT44((auVar62._0_4_ + auVar62._4_4_ + fVar21) *
                                      fVar76 * (float)((ulong)uVar79 >> 0x20),
                                      (auVar62._0_4_ + auVar62._4_4_ + fVar21) *
                                      fVar24 * (float)uVar79),uVar72,4);
          uVar79 = NEON_fmax(uVar79,0,4);
          fVar21 = (float)uVar79;
          fVar42 = fVar42 * fVar21;
          fVar44 = fVar44 * fVar21;
          fVar43 = fVar43 * fVar21;
          fVar40 = fVar40 * fVar21;
LAB_002a5e40:
          auVar111._0_8_ = CONCAT44(fVar84 + fVar44,fVar20 + fVar42);
          auVar111._8_4_ = fVar41 + fVar43;
          auVar111._12_4_ = fVar39 + fVar40;
          auVar58 = NEON_ext(auVar111,auVar111,8,1);
          auVar58._8_4_ = (float)auVar58._0_4_;
          auVar58._0_8_ = auVar111._0_8_;
          auVar58._12_4_ = 0.0;
        }
      }
    }
    local_190 = auVar58._0_4_;
    auVar33._0_4_ = local_190 * local_190;
    fStack_18c = auVar58._4_4_;
    auVar33._4_4_ = fStack_18c * fStack_18c;
    fStack_188 = auVar58._8_4_;
    auVar33._8_4_ = fStack_188 * fStack_188;
    fStack_184 = auVar58._12_4_;
    auVar33._12_4_ = fStack_184 * fStack_184;
    auVar73 = NEON_ext(auVar33,auVar33,8,1);
    fVar84 = auVar73._0_4_ + auVar73._4_4_;
    fVar20 = auVar33._0_4_ + auVar33._4_4_ + fVar84;
    fVar84 = auVar33._0_4_ + auVar33._4_4_ + fVar84;
    uVar85 = CONCAT44(fVar84,fVar20);
    uVar79 = NEON_frsqrte(uVar85,4);
    fVar41 = (float)uVar79;
    fVar39 = (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT44(fVar39 * fVar39,fVar41 * fVar41),uVar85,4);
    fVar41 = fVar41 * (float)uVar79;
    fVar39 = fVar39 * (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT44(fVar39 * fVar39,fVar41 * fVar41),uVar85,4);
    fVar41 = fVar41 * (float)uVar79;
    fVar39 = fVar39 * (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT44(fVar39 * fVar39,fVar41 * fVar41),uVar85,4);
    fVar41 = fVar41 * (float)uVar79;
    fVar39 = fVar39 * (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frsqrts(CONCAT44(fVar39 * fVar39,fVar41 * fVar41),uVar85,4);
    uVar14 = CONCAT44(fVar84 * fVar39 * (float)((ulong)uVar79 >> 0x20),
                      fVar20 * fVar41 * (float)uVar79);
    uVar14 = uVar14 ^ (uVar14 ^ uVar85) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
    bVar11 = (float)uVar14 < fVar23;
    bVar5 = (float)uVar78 * 0.1 < (float)uVar14 && bVar11;
    auVar66._0_4_ = -(uint)bVar5;
    auVar66._4_4_ = -(uint)bVar5;
    auVar66._8_4_ = -(uint)bVar5;
    auVar66._12_4_ = -(uint)bVar5;
    NEON_ext(auVar66,auVar66,8,1);
    if (CONCAT13((char)auVar66._12_4_,
                 CONCAT12((char)auVar66._8_4_,CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))) !=
        -1) {
      auVar34._0_4_ = -(uint)bVar11;
      auVar34._4_4_ = -(uint)bVar11;
      auVar34._8_4_ = -(uint)bVar11;
      auVar34._12_4_ = -(uint)bVar11;
      NEON_ext(auVar34,auVar34,8,1);
      if (CONCAT13((char)auVar34._12_4_,
                   CONCAT12((char)auVar34._8_4_,CONCAT11((char)auVar34._4_4_,(char)auVar34._0_4_)))
          == -1) {
        *param_8 = 0;
        return 2;
      }
      auVar94._0_4_ = -local_1b0;
      auVar94._4_4_ = -fStack_1ac;
      auVar94._8_4_ = -fStack_1a8;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
      auVar94._12_4_ = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x10);
      uVar78 = NEON_fmin(CONCAT44(uVar12,uVar12),CONCAT44(uVar3,uVar3),4);
      auVar83._0_4_ = (float)uVar78 * 0.2;
      auVar83._4_4_ = (float)((ulong)uVar78 >> 0x20) * 0.2;
      auVar83._8_8_ = 0;
      auVar90._0_4_ = (float)-(uint)(0.0 < fVar97);
      auVar90._4_4_ = (float)-(uint)(0.0 < fVar98);
      auVar90._8_8_ = 0;
      fVar20 = (float)((uint)auVar83._0_4_ ^
                      ((uint)auVar83._0_4_ ^ (uint)fVar97) & (uint)auVar90._0_4_);
      if (local_174 == 3) {
        FUN_00231940(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar84 = (float)local_a0;
        auVar94._12_4_ = 0;
        auVar90._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar84 + (local_110 - local_130[0]) * local_a8[0];
        auVar90._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar84 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar90._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar84 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar90._12_4_ = local_130[3] + 0.0;
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
        auVar94._12_4_ = 0;
        auVar53._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar84,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar84);
        auVar53._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar84;
        auVar53._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar84;
        auVar58 = NEON_ext(auVar53,auVar53,8,1);
        auVar90._8_4_ = (float)auVar58._0_4_;
        auVar90._0_8_ = auVar53._0_8_;
        auVar90._12_4_ = 0.0;
        auVar38._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar84,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar84);
        auVar38._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar84;
        auVar38._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar84;
        auVar58 = NEON_ext(auVar38,auVar38,8,1);
        auVar83._8_4_ = (float)auVar58._0_4_;
        auVar83._0_8_ = auVar38._0_8_;
        auVar83._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar90._4_4_ = local_130[1];
        auVar90._0_4_ = local_130[0];
        auVar90._8_4_ = local_130[2];
        auVar90._12_4_ = local_130[3];
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
      auVar69._0_8_ =
           CONCAT44(auVar90._4_4_ + auVar94._4_4_ * fVar84,auVar90._0_4_ + auVar94._0_4_ * fVar84);
      auVar69._8_4_ = auVar90._8_4_ + auVar94._8_4_ * fVar84;
      auVar69._12_4_ = auVar90._12_4_ + auVar94._12_4_ * fVar84;
      auVar58 = NEON_ext(auVar69,auVar69,8,1);
      auVar70._8_4_ = auVar58._0_4_;
      auVar70._0_8_ = auVar69._0_8_;
      auVar70._12_4_ = 0;
      auVar90 = auVar90 ^ (auVar90 ^ auVar70) & auVar7;
      param_5[1] = auVar90._8_8_;
      *param_5 = auVar90._0_8_;
      fVar84 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar54._0_8_ =
           CONCAT44(auVar83._4_4_ - auVar94._4_4_ * fVar84,auVar83._0_4_ - auVar94._0_4_ * fVar84);
      auVar54._8_4_ = auVar83._8_4_ - auVar94._8_4_ * fVar84;
      auVar54._12_4_ = auVar83._12_4_ - auVar94._12_4_ * fVar84;
      auVar58 = NEON_ext(auVar54,auVar54,8,1);
      auVar55._8_4_ = auVar58._0_4_;
      auVar55._0_8_ = auVar54._0_8_;
      auVar55._12_4_ = 0;
      uVar78 = NEON_fmax(0,CONCAT44(fVar77 - fVar98,fVar23 - fVar97),4);
      auVar83 = auVar83 ^ (auVar83 ^ auVar55) & auVar9;
      param_6[1] = auVar83._8_8_;
      *param_6 = auVar83._0_8_;
      param_7[1] = auVar94._8_8_;
      *param_7 = auVar94._0_8_;
      *param_8 = uVar78;
      uVar12 = 1;
      if ((float)uVar78 <= fVar20) {
        uVar12 = 2;
      }
      return uVar12;
    }
    uVar79 = NEON_frecpe(uVar14,4);
    uVar72 = NEON_frecps(uVar14,uVar79,4);
    fStack_1a8 = (float)uVar79 * (float)uVar72;
    fVar20 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
    uVar79 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar79;
    fVar20 = fVar20 * (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar79;
    fVar20 = fVar20 * (float)((ulong)uVar79 >> 0x20);
    uVar79 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar79;
    uVar79 = NEON_frecps(uVar14,CONCAT44(fVar20 * (float)((ulong)uVar79 >> 0x20),fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar79;
    lVar19 = *(long *)(param_1 + 8);
    local_1b0 = local_190 * fStack_1a8;
    fStack_1ac = fStack_18c * fStack_1a8;
    fStack_1a8 = fStack_188 * fStack_1a8;
  } while( true );
}


