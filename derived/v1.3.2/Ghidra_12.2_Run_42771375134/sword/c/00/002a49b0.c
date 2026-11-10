/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002a49b0; name: FUN_002a49b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_002a49b0(long param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 *param_5,
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
  float fVar27;
  float fVar28;
  uint uVar29;
  int iVar30;
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
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar52;
  float fVar53;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar65;
  float fVar72;
  float fVar73;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar74;
  undefined8 uVar75;
  float fVar82;
  undefined8 uVar76;
  undefined8 uVar77;
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  ulong uVar84;
  undefined1 auVar86 [16];
  undefined8 uVar85;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  ulong uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
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
  undefined1 auVar107 [16];
  float fVar108;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 uVar111;
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
  fVar74 = param_3[2];
  fVar82 = param_3[3];
  auVar86._0_4_ = fVar20 * fVar20;
  auVar86._4_4_ = fVar23 * fVar23;
  auVar86._8_4_ = fVar74 * fVar74;
  auVar86._12_4_ = fVar82 * fVar82;
  auVar55 = NEON_ext(auVar86,auVar86,8,1);
  uVar29 = -(uint)(0.0 < auVar86._0_4_ + auVar86._4_4_ + auVar55._0_4_ + auVar55._4_4_);
  local_190 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar20) & uVar29);
  fStack_18c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar23) & uVar29);
  fStack_188 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar74) & uVar29);
  fStack_184 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar82) & uVar29);
  auVar91._0_4_ = local_190 * local_190;
  auVar91._4_4_ = fStack_18c * fStack_18c;
  auVar91._8_4_ = fStack_188 * fStack_188;
  auVar91._12_4_ = fStack_184 * fStack_184;
  auVar55 = NEON_ext(auVar91,auVar91,8,1);
  lVar13 = *(long *)(param_1 + 8);
  iVar1 = -(*(byte *)(lVar13 + 0x24) & 1);
  fVar23 = auVar55._0_4_ + auVar55._4_4_;
  fVar20 = auVar91._0_4_ + auVar91._4_4_ + fVar23;
  fVar23 = auVar91._0_4_ + auVar91._4_4_ + fVar23;
  uVar15 = CONCAT44(fVar23,fVar20);
  uVar75 = NEON_frsqrte(uVar15,4);
  uVar84 = CONCAT44(iVar1,iVar1) &
           CONCAT44(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x10));
  fVar74 = (float)uVar75;
  fVar82 = (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar82 = fVar82 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar82 = fVar82 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar74 * fVar74),uVar15,4);
  fVar74 = fVar74 * (float)uVar75;
  fVar82 = fVar82 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frsqrts(CONCAT44(fVar82 * fVar82,fVar74 * fVar74),uVar15,4);
  lVar19 = *(long *)(param_2 + 8);
  iVar2 = -(*(byte *)(lVar19 + 0x24) & 1);
  uVar89 = CONCAT44(iVar2,iVar2) &
           CONCAT44(*(undefined4 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x10));
  uVar54 = *param_4;
  fVar97 = (float)uVar84 + (float)uVar89;
  fVar98 = (float)(uVar84 >> 0x20) + (float)(uVar89 >> 0x20);
  uVar84 = CONCAT44(fVar23 * fVar82 * (float)((ulong)uVar75 >> 0x20),fVar20 * fVar74 * (float)uVar75
                   );
  uVar84 = uVar84 ^ (uVar84 ^ uVar15) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar75 = NEON_frecpe(uVar84,4);
  uVar76 = NEON_frecps(uVar84,uVar75,4);
  fStack_1a8 = (float)uVar75 * (float)uVar76;
  fVar20 = (float)((ulong)uVar75 >> 0x20) * (float)((ulong)uVar76 >> 0x20);
  uVar75 = NEON_frecps(uVar84,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frecps(uVar84,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  fVar20 = fVar20 * (float)((ulong)uVar75 >> 0x20);
  uVar75 = NEON_frecps(uVar84,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  uVar75 = NEON_frecps(uVar84,CONCAT44(fVar20 * (float)((ulong)uVar75 >> 0x20),fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar75;
  local_1b0 = local_190 * fStack_1a8;
  fStack_1ac = fStack_18c * fStack_1a8;
  fStack_1a8 = fStack_188 * fStack_1a8;
  uVar75 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar19 + 0x14),*(undefined4 *)(lVar19 + 0x14)),4);
  uVar15 = 0x7f7fffff7f7fffff;
  auVar55._4_4_ = fStack_18c;
  auVar55._0_4_ = local_190;
  auVar55._8_4_ = fStack_188;
  auVar55._12_4_ = fStack_184;
  do {
    fVar74 = auVar55._0_4_;
    fVar20 = -fVar74;
    fVar44 = auVar55._4_4_;
    fVar82 = -fVar44;
    fVar52 = auVar55._8_4_;
    fVar53 = -fVar52;
    fVar45 = auVar55._12_4_;
    uStack_198 = auVar55._8_8_;
    local_1a0 = auVar55._0_8_;
    pfVar14 = *(float **)(param_1 + 0x10);
    fVar23 = -*(float *)(lVar13 + 0x30);
    fVar72 = -*(float *)(lVar13 + 0x34);
    fVar73 = -*(float *)(lVar13 + 0x38);
    fVar23 = (float)((uint)fVar23 ^
                    ((uint)fVar23 ^ (uint)*(float *)(lVar13 + 0x30)) &
                    -(uint)(0.0 < *(float *)(param_1 + 0x20) * fVar20 +
                                  *(float *)(param_1 + 0x30) * fVar82 +
                                  *(float *)(param_1 + 0x40) * fVar53));
    fVar72 = (float)((uint)fVar72 ^
                    ((uint)fVar72 ^ (uint)*(float *)(lVar13 + 0x34)) &
                    -(uint)(0.0 < *(float *)(param_1 + 0x24) * fVar20 +
                                  *(float *)(param_1 + 0x34) * fVar82 +
                                  *(float *)(param_1 + 0x44) * fVar53));
    fVar73 = (float)((uint)fVar73 ^
                    ((uint)fVar73 ^ (uint)*(float *)(lVar13 + 0x38)) &
                    -(uint)(0.0 < *(float *)(param_1 + 0x28) * fVar20 +
                                  *(float *)(param_1 + 0x38) * fVar82 +
                                  *(float *)(param_1 + 0x48) * fVar53));
    auVar55 = *(undefined1 (*) [16])(pfVar14 + 0xc);
    auVar90._0_4_ = fVar74 * *(float *)(lVar19 + 0x40);
    auVar90._4_4_ = fVar44 * *(float *)(lVar19 + 0x44);
    auVar90._8_4_ = fVar52 * *(float *)(lVar19 + 0x48);
    auVar90._12_4_ = fVar45 * *(float *)(lVar19 + 0x4c);
    auVar66._0_4_ = fVar74 * *(float *)(lVar19 + 0x30);
    auVar66._4_4_ = fVar44 * *(float *)(lVar19 + 0x34);
    auVar66._8_4_ = fVar52 * *(float *)(lVar19 + 0x38);
    auVar66._12_4_ = fVar45 * *(float *)(lVar19 + 0x3c);
    auVar86 = NEON_ext(auVar66,auVar66,8,1);
    fVar20 = auVar86._0_4_ + auVar86._4_4_;
    auVar86 = NEON_ext(auVar90,auVar90,8,1);
    fVar82 = auVar55._0_4_ + pfVar14[8] * fVar73 + *pfVar14 * fVar23 + pfVar14[4] * fVar72;
    fVar53 = auVar55._4_4_ + pfVar14[9] * fVar73 + pfVar14[1] * fVar23 + pfVar14[5] * fVar72;
    fVar72 = auVar55._8_4_ + pfVar14[10] * fVar73 + pfVar14[2] * fVar23 + pfVar14[6] * fVar72;
    fVar73 = auVar55._12_4_ + 0.0;
    fVar23 = auVar86._0_4_ + auVar86._4_4_;
    auVar31._0_4_ = fVar74 * *(float *)(lVar19 + 0x50);
    auVar31._4_4_ = fVar44 * *(float *)(lVar19 + 0x54);
    auVar31._8_4_ = fVar52 * *(float *)(lVar19 + 0x58);
    auVar31._12_4_ = fVar45 * *(float *)(lVar19 + 0x5c);
    auVar55 = NEON_ext(auVar31,auVar31,8,1);
    uStack_98 = (ulong)(uint)(auVar31._0_4_ + auVar31._4_4_ + auVar55._0_4_ + auVar55._4_4_);
    local_a0 = NEON_ext(CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar20,
                                 auVar66._0_4_ + auVar66._4_4_ + fVar20),
                        CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar23,
                                 auVar90._0_4_ + auVar90._4_4_ + fVar23),4,1);
    uVar84 = FUN_00222070(lVar19,&local_a0);
    pfVar14 = (float *)(*(long *)(lVar19 + 0xa0) + (uVar84 & 0xffffffff) * 0xc);
    fVar20 = *pfVar14;
    fVar23 = pfVar14[1];
    fVar74 = pfVar14[2];
    uVar84 = CONCAT44(fVar53,fVar82);
    auVar110._8_4_ = fVar72;
    auVar110._0_8_ = uVar84;
    auVar110._12_4_ = fVar73;
    fVar44 = *(float *)(lVar19 + 0x30) * fVar20 + *(float *)(lVar19 + 0x40) * fVar23 +
             *(float *)(lVar19 + 0x50) * fVar74;
    fVar52 = *(float *)(lVar19 + 0x34) * fVar20 + *(float *)(lVar19 + 0x44) * fVar23 +
             *(float *)(lVar19 + 0x54) * fVar74;
    auVar80._0_8_ = CONCAT44(fVar52,fVar44);
    auVar80._8_4_ =
         *(float *)(lVar19 + 0x38) * fVar20 + *(float *)(lVar19 + 0x48) * fVar23 +
         *(float *)(lVar19 + 0x58) * fVar74;
    auVar80._12_4_ = 0.0;
    fVar82 = fVar82 - fVar44;
    fVar53 = fVar53 - fVar52;
    auVar55._0_8_ = CONCAT44(fVar53,fVar82);
    auVar55._8_4_ = fVar72 - auVar80._8_4_;
    auVar55._12_4_ = fVar73 - 0.0;
    auVar56._0_4_ = local_1b0 * fVar82;
    auVar56._4_4_ = fStack_1ac * fVar53;
    auVar56._8_4_ = fStack_1a8 * auVar55._8_4_;
    auVar56._12_4_ = auVar55._12_4_ * 0.0;
    auVar86 = NEON_ext(auVar56,auVar56,8,1);
    fVar20 = auVar56._0_4_ + auVar56._4_4_ + auVar86._0_4_ + auVar86._4_4_;
    if ((float)uVar54 + fVar97 < fVar20) {
      return 0;
    }
    fVar23 = (float)uVar15;
    fVar74 = (float)(uVar15 >> 0x20);
    bVar11 = fVar97 < fVar20 && fVar23 * 0.999775 < fVar20;
    auVar57._0_4_ = -(uint)bVar11;
    auVar57._4_4_ = -(uint)bVar11;
    auVar57._8_4_ = -(uint)bVar11;
    auVar57._12_4_ = -(uint)bVar11;
    NEON_ext(auVar57,auVar57,8,1);
    if (CONCAT13((char)auVar57._12_4_,
                 CONCAT12((char)auVar57._8_4_,CONCAT11((char)auVar57._4_4_,(char)auVar57._0_4_))) ==
        -1) {
      auVar94._0_4_ = -local_1b0;
      auVar94._4_4_ = -fStack_1ac;
      auVar94._8_4_ = -fStack_1a8;
      auVar94._12_4_ = 0;
      if (local_174 == 3) {
        FUN_00231940(&local_190,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar20 = (float)local_a0;
        auVar94._12_4_ = 0;
        auVar55._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar20 + (local_110 - local_130[0]) * local_a8[0];
        auVar55._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar20 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar55._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar20 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar55._12_4_ = local_130[3] + 0.0;
        auVar80._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar20 + (local_150 - local_170[0]) * local_a8[0];
        auVar80._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar20 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar80._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar20 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar80._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_190,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar20 = (float)local_a0;
        auVar94._12_4_ = 0;
        auVar40._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar20,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar20);
        auVar40._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar20;
        auVar40._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar20;
        auVar55 = NEON_ext(auVar40,auVar40,8,1);
        auVar55._8_4_ = (float)auVar55._0_4_;
        auVar55._0_8_ = auVar40._0_8_;
        auVar55._12_4_ = 0.0;
        auVar48._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar20,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar20);
        auVar48._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar20;
        auVar48._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar20;
        auVar86 = NEON_ext(auVar48,auVar48,8,1);
        auVar80._8_4_ = (float)auVar86._0_4_;
        auVar80._0_8_ = auVar48._0_8_;
        auVar80._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar55._4_4_ = local_130[1];
        auVar55._0_4_ = local_130[0];
        auVar55._8_4_ = local_130[2];
        auVar55._12_4_ = local_130[3];
        auVar80._4_4_ = local_170[1];
        auVar80._0_4_ = local_170[0];
        auVar80._8_4_ = local_170[2];
        auVar80._12_4_ = local_170[3];
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
      auVar61._0_8_ =
           CONCAT44(auVar55._4_4_ + auVar94._4_4_ * fVar20,auVar55._0_4_ + auVar94._0_4_ * fVar20);
      auVar61._8_4_ = auVar55._8_4_ + auVar94._8_4_ * fVar20;
      auVar61._12_4_ = auVar55._12_4_ + auVar94._12_4_ * fVar20;
      auVar86 = NEON_ext(auVar61,auVar61,8,1);
      auVar62._8_4_ = auVar86._0_4_;
      auVar62._0_8_ = auVar61._0_8_;
      auVar62._12_4_ = 0;
      auVar55 = auVar55 ^ (auVar55 ^ auVar62) & auVar6;
      param_5[1] = auVar55._8_8_;
      *param_5 = auVar55._0_8_;
      fVar20 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar41._0_8_ =
           CONCAT44(auVar80._4_4_ - auVar94._4_4_ * fVar20,auVar80._0_4_ - auVar94._0_4_ * fVar20);
      auVar41._8_4_ = auVar80._8_4_ - auVar94._8_4_ * fVar20;
      auVar41._12_4_ = auVar80._12_4_ - auVar94._12_4_ * fVar20;
      auVar55 = NEON_ext(auVar41,auVar41,8,1);
      auVar42._8_4_ = auVar55._0_4_;
      auVar42._0_8_ = auVar41._0_8_;
      auVar42._12_4_ = 0;
      auVar80 = auVar80 ^ (auVar80 ^ auVar42) & auVar8;
      param_6[1] = auVar80._8_8_;
      *param_6 = auVar80._0_8_;
      uVar75 = NEON_fmax(0,CONCAT44(fVar74 - fVar98,fVar23 - fVar97),4);
      *param_8 = uVar75;
      param_7[1] = auVar94._8_8_;
      *param_7 = auVar94._0_8_;
      return 1;
    }
    uVar15 = (ulong)local_174;
    uVar29 = local_174 + 1;
    local_f0[uVar15 * 2 + -7] = auVar110._8_8_;
    local_f0[uVar15 * 2 + -8] = uVar84;
    local_f0[uVar15 * 2 + -0xf] = (ulong)(uint)auVar80._8_4_;
    local_f0[uVar15 * 2 + -0x10] = auVar80._0_8_;
    *(long *)(local_d0[uVar15 - 2] + 8) = auVar55._8_8_;
    local_f0[uVar15 * 2] = auVar55._0_8_;
    if (local_174 == 3) {
      local_174 = uVar29;
      auVar55 = FUN_00237120(local_f0,local_130,local_170,&local_174);
    }
    else {
      fVar20 = (float)local_f0[0];
      fVar82 = (float)(local_f0[0] >> 0x20);
      fVar44 = (float)local_f0[1];
      fVar53 = (float)(local_f0[1] >> 0x20);
      if (local_174 == 2) {
        auVar55._8_8_ = local_f0[1];
        auVar55._0_8_ = local_f0[0];
        auVar10._4_4_ = fStack_dc;
        auVar10._0_4_ = local_e0;
        auVar10._8_4_ = fStack_d8;
        auVar10._12_4_ = fStack_d4;
        auVar78._0_4_ = local_e0 - fVar20;
        auVar78._4_4_ = fStack_dc - fVar82;
        auVar78._8_4_ = fStack_d8 - fVar44;
        auVar78._12_4_ = fStack_d4 - fVar53;
        fVar72 = local_d0[0]._0_4_;
        auVar69._0_4_ = fVar72 - fVar20;
        fVar73 = local_d0[0]._4_4_;
        auVar69._4_4_ = fVar73 - fVar82;
        fVar21 = local_d0[0]._8_4_;
        auVar69._8_4_ = fVar21 - fVar44;
        auVar69._12_4_ = local_d0[0]._12_4_ - fVar53;
        auVar86 = NEON_ext(auVar78,auVar78,8,1);
        auVar91 = NEON_ext(auVar69,auVar69,8,1);
        fVar95 = auVar78._0_4_ * auVar69._4_4_ - auVar78._4_4_ * auVar69._0_4_;
        uVar76 = NEON_ext(CONCAT44(auVar78._4_4_ * auVar69._8_4_ - auVar78._8_4_ * auVar69._4_4_,
                                   fVar95),
                          CONCAT44(auVar86._4_4_ * auVar69._4_4_ - auVar78._4_4_ * auVar91._4_4_,
                                   auVar86._0_4_ * auVar69._0_4_ - auVar78._0_4_ * auVar91._0_4_),4,
                          1);
        local_174 = 3;
        fVar24 = (float)uVar76;
        auVar87._0_4_ = fVar24 * fVar24;
        fVar83 = (float)((ulong)uVar76 >> 0x20);
        auVar87._4_4_ = fVar83 * fVar83;
        auVar87._8_4_ = fVar95 * fVar95;
        auVar87._12_4_ = 0;
        auVar86 = NEON_ext(auVar87,auVar87,8,1);
        fVar45 = auVar86._0_4_ + auVar86._4_4_;
        fVar52 = auVar87._0_4_ + auVar87._4_4_ + fVar45;
        uVar76 = CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar45,fVar52);
        if (1.1920929e-07 < fVar52) {
          if (fVar52 != 0.0) {
            auVar86 = NEON_ext(auVar10,auVar10,8,1);
            auVar91 = NEON_ext(local_d0[0],local_d0[0],8,1);
            fVar108 = local_e0 * fVar73 - fStack_dc * fVar72;
            auVar110 = NEON_ext(auVar55,auVar55,8,1);
            uVar85 = NEON_ext(CONCAT44(fStack_dc * fVar21 - fStack_d8 * fVar73,fVar108),
                              CONCAT44(auVar86._4_4_ * fVar73 - fStack_dc * auVar91._4_4_,
                                       auVar86._0_4_ * fVar72 - local_e0 * auVar91._0_4_),4,1);
            fVar52 = fVar82 * fVar72 - fVar20 * fVar73;
            uVar111 = NEON_ext(CONCAT44(fVar44 * fVar73 - fVar82 * fVar21,fVar52),
                               CONCAT44(fVar82 * auVar91._4_4_ - auVar110._4_4_ * fVar73,
                                        fVar20 * auVar91._0_4_ - auVar110._0_4_ * fVar72),4,1);
            fVar45 = fVar20 * fStack_dc - fVar82 * local_e0;
            uVar77 = NEON_ext(CONCAT44(fVar82 * fStack_d8 - fVar44 * fStack_dc,fVar45),
                              CONCAT44(auVar110._4_4_ * fStack_dc - fVar82 * auVar86._4_4_,
                                       auVar110._0_4_ * local_e0 - fVar20 * auVar86._0_4_),4,1);
            auVar100._0_4_ = (float)uVar85 * fVar24;
            auVar100._4_4_ = (float)((ulong)uVar85 >> 0x20) * fVar83;
            auVar100._8_4_ = fVar108 * fVar95;
            auVar100._12_4_ = 0;
            auVar86 = NEON_ext(auVar100,auVar100,8,1);
            auVar103._0_4_ = (float)uVar111 * fVar24;
            auVar103._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar83;
            auVar103._8_4_ = fVar52 * fVar95;
            auVar103._12_4_ = 0;
            auVar91 = NEON_ext(auVar103,auVar103,8,1);
            fVar52 = auVar100._0_4_ + auVar100._4_4_ + auVar86._0_4_ + auVar86._4_4_;
            auVar106._0_4_ = (float)uVar77 * fVar24;
            auVar106._4_4_ = (float)((ulong)uVar77 >> 0x20) * fVar83;
            auVar106._8_4_ = fVar45 * fVar95;
            auVar106._12_4_ = 0;
            fVar45 = auVar103._0_4_ + auVar103._4_4_ + auVar91._0_4_ + auVar91._4_4_;
            auVar86 = NEON_ext(auVar106,auVar106,8,1);
            fVar108 = auVar106._0_4_ + auVar106._4_4_ + auVar86._0_4_ + auVar86._4_4_;
            bVar11 = (0.0 <= fVar52 && 0.0 <= fVar45) && 0.0 <= fVar108;
            auVar107._0_4_ = -(uint)bVar11;
            auVar107._4_4_ = -(uint)bVar11;
            auVar107._8_4_ = -(uint)bVar11;
            auVar107._12_4_ = -(uint)bVar11;
            NEON_ext(auVar107,auVar107,8,1);
            if (CONCAT13((char)auVar107._12_4_,
                         CONCAT12((char)auVar107._8_4_,
                                  CONCAT11((char)auVar107._4_4_,(char)auVar107._0_4_))) == -1) {
              auVar35._0_4_ = fVar20 * fVar24;
              auVar35._4_4_ = fVar82 * fVar83;
              auVar35._8_4_ = fVar44 * fVar95;
              auVar35._12_4_ = fVar53 * 0.0;
              auVar55 = NEON_ext(auVar35,auVar35,8,1);
              uVar77 = NEON_frecpe(uVar76,4);
              uVar85 = NEON_frecps(uVar76,uVar77,4);
              fVar20 = (float)uVar77 * (float)uVar85;
              fVar82 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar82,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              fVar82 = fVar82 * (float)((ulong)uVar77 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar82,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              fVar82 = fVar82 * (float)((ulong)uVar77 >> 0x20);
              uVar77 = NEON_frecps(uVar76,CONCAT44(fVar82,fVar20),4);
              fVar20 = fVar20 * (float)uVar77;
              uVar76 = NEON_frecps(uVar76,CONCAT44(fVar82 * (float)((ulong)uVar77 >> 0x20),fVar20),4
                                  );
              fVar20 = (auVar35._0_4_ + auVar35._4_4_ + auVar55._0_4_ + auVar55._4_4_) *
                       fVar20 * (float)uVar76;
              auVar55._0_4_ = fVar24 * fVar20;
              auVar55._4_4_ = fVar83 * fVar20;
              auVar55._8_4_ = fVar95 * fVar20;
              auVar55._12_4_ = 0.0;
            }
            else {
              auVar92._0_4_ = -fVar20 * auVar78._0_4_;
              auVar92._4_4_ = -fVar82 * auVar78._4_4_;
              auVar92._8_4_ = -fVar44 * auVar78._8_4_;
              auVar92._12_4_ = auVar78._12_4_ * 0.0;
              auVar86 = NEON_ext(auVar92,auVar92,8,1);
              fVar95 = auVar86._0_4_ + auVar86._4_4_;
              auVar96._0_4_ = -local_e0 * auVar78._0_4_;
              auVar96._4_4_ = -fStack_dc * auVar78._4_4_;
              auVar96._8_4_ = -fStack_d8 * auVar78._8_4_;
              auVar96._12_4_ = auVar78._12_4_ * 0.0;
              auVar86 = NEON_ext(auVar96,auVar96,8,1);
              fVar25 = auVar86._0_4_ + auVar86._4_4_;
              fVar24 = auVar92._0_4_ + auVar92._4_4_ + fVar95;
              fVar83 = auVar96._0_4_ + auVar96._4_4_ + fVar25;
              fVar25 = auVar96._0_4_ + auVar96._4_4_ + fVar25;
              bVar11 = (0.0 <= fVar24 && fVar108 <= 0.0) && fVar83 <= 0.0;
              auVar104._0_4_ = -(uint)bVar11;
              auVar104._4_4_ = -(uint)bVar11;
              auVar104._8_4_ = -(uint)bVar11;
              auVar104._12_4_ = -(uint)bVar11;
              NEON_ext(auVar104,auVar104,8,1);
              if (CONCAT13((char)auVar104._12_4_,
                           CONCAT12((char)auVar104._8_4_,
                                    CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1) {
                uVar76 = CONCAT44((auVar92._0_4_ + auVar92._4_4_ + fVar95) - fVar25,fVar24 - fVar83)
                ;
                uVar77 = NEON_frecpe(uVar76,4);
                uVar85 = NEON_frecps(uVar76,uVar77,4);
                fVar52 = (float)uVar77 * (float)uVar85;
                fVar45 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar45,fVar52),4);
                fVar52 = fVar52 * (float)uVar77;
                fVar45 = fVar45 * (float)((ulong)uVar77 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar45,fVar52),4);
                fVar52 = fVar52 * (float)uVar77;
                fVar45 = fVar45 * (float)((ulong)uVar77 >> 0x20);
                uVar77 = NEON_frecps(uVar76,CONCAT44(fVar45,fVar52),4);
                fVar52 = fVar52 * (float)uVar77;
                uVar76 = NEON_frecps(uVar76,CONCAT44(fVar45 * (float)((ulong)uVar77 >> 0x20),fVar52)
                                     ,4);
                fVar24 = fVar24 * (float)(-(uint)(1.1920929e-07 < ABS(fVar24 - fVar83)) &
                                         (uint)(fVar52 * (float)uVar76));
                pfVar14 = local_170;
                pfVar16 = local_130;
                auVar36._0_8_ =
                     CONCAT44(fVar82 + auVar78._4_4_ * fVar24,fVar20 + auVar78._0_4_ * fVar24);
                auVar36._8_4_ = fVar44 + auVar78._8_4_ * fVar24;
                auVar36._12_4_ = fVar53 + auVar78._12_4_ * fVar24;
                auVar55 = NEON_ext(auVar36,auVar36,8,1);
                pauVar17 = (undefined1 (*) [16])local_f0;
                auVar55._8_4_ = (float)auVar55._0_4_;
                auVar55._0_8_ = auVar36._0_8_;
                auVar55._12_4_ = 0.0;
                local_174 = 2;
LAB_002a53ac:
                lVar13 = 1;
                pauVar18 = (undefined1 (*) [16])&local_e0;
              }
              else {
                auVar105._0_4_ = -local_e0 * auVar69._0_4_;
                auVar105._4_4_ = -fStack_dc * auVar69._4_4_;
                auVar105._8_4_ = -fStack_d8 * auVar69._8_4_;
                auVar105._12_4_ = auVar69._12_4_ * 0.0;
                auVar86 = NEON_ext(auVar105,auVar105,8,1);
                fVar26 = auVar86._0_4_ + auVar86._4_4_;
                auVar79._0_4_ = auVar78._0_4_ * -fVar72;
                auVar79._4_4_ = auVar78._4_4_ * -fVar73;
                auVar79._8_4_ = auVar78._8_4_ * -fVar21;
                auVar79._12_4_ = auVar78._12_4_ * 0.0;
                auVar109._0_4_ = auVar69._0_4_ * -fVar72;
                auVar109._4_4_ = auVar69._4_4_ * -fVar73;
                auVar109._8_4_ = auVar69._8_4_ * -fVar21;
                auVar109._12_4_ = auVar69._12_4_ * 0.0;
                fVar95 = auVar105._0_4_ + auVar105._4_4_ + fVar26;
                auVar86 = NEON_ext(auVar79,auVar79,8,1);
                fVar27 = auVar86._0_4_ + auVar86._4_4_;
                fVar108 = auVar79._0_4_ + auVar79._4_4_ + fVar27;
                auVar86 = NEON_ext(auVar109,auVar109,8,1);
                fVar28 = auVar86._0_4_ + auVar86._4_4_;
                fVar22 = auVar109._0_4_ + auVar109._4_4_ + fVar28;
                fVar28 = auVar109._0_4_ + auVar109._4_4_ + fVar28;
                bVar11 = (fVar83 <= fVar95 && fVar52 <= 0.0) && fVar22 <= fVar108;
                auVar101._0_4_ = -(uint)bVar11;
                auVar101._4_4_ = -(uint)bVar11;
                auVar101._8_4_ = -(uint)bVar11;
                auVar101._12_4_ = -(uint)bVar11;
                NEON_ext(auVar101,auVar101,8,1);
                if (CONCAT13((char)auVar101._12_4_,
                             CONCAT12((char)auVar101._8_4_,
                                      CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) == -1) {
                  fVar20 = (fVar95 - fVar83) + (fVar108 - fVar22);
                  uVar76 = CONCAT44(((auVar105._0_4_ + auVar105._4_4_ + fVar26) - fVar25) +
                                    ((auVar79._0_4_ + auVar79._4_4_ + fVar27) - fVar28),fVar20);
                  uVar77 = NEON_frecpe(uVar76,4);
                  uVar85 = NEON_frecps(uVar76,uVar77,4);
                  fVar82 = (float)uVar77 * (float)uVar85;
                  fVar44 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar44,fVar82),4);
                  fVar82 = fVar82 * (float)uVar77;
                  fVar44 = fVar44 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar44,fVar82),4);
                  fVar82 = fVar82 * (float)uVar77;
                  fVar44 = fVar44 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar44,fVar82),4);
                  fVar82 = fVar82 * (float)uVar77;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar44 * (float)((ulong)uVar77 >> 0x20),
                                                       fVar82),4);
                  fVar20 = (fVar95 - fVar83) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar20)) &
                                  (uint)(fVar82 * (float)uVar76));
                  auVar37._0_8_ =
                       CONCAT44(fStack_dc + (fVar73 - fStack_dc) * fVar20,
                                local_e0 + (fVar72 - local_e0) * fVar20);
                  auVar37._8_4_ = fStack_d8 + (fVar21 - fStack_d8) * fVar20;
                  auVar37._12_4_ = fStack_d4 + (local_d0[0]._12_4_ - fStack_d4) * fVar20;
                  auVar55 = NEON_ext(auVar37,auVar37,8,1);
                  auVar4._8_4_ = auVar55._0_4_;
                  auVar4._0_8_ = auVar37._0_8_;
                  pfVar14 = (float *)&uStack_160;
                  pfVar16 = (float *)&uStack_120;
                  pauVar17 = (undefined1 (*) [16])&local_e0;
                }
                else {
                  auVar102._0_4_ = -fVar20 * auVar69._0_4_;
                  auVar102._4_4_ = -fVar82 * auVar69._4_4_;
                  auVar102._8_4_ = -fVar44 * auVar69._8_4_;
                  auVar102._12_4_ = auVar69._12_4_ * 0.0;
                  auVar86 = NEON_ext(auVar102,auVar102,8,1);
                  fVar72 = auVar86._0_4_ + auVar86._4_4_;
                  fVar52 = auVar102._0_4_ + auVar102._4_4_ + fVar72;
                  bVar11 = (fVar45 <= 0.0 && 0.0 <= fVar52) && fVar22 <= 0.0;
                  auVar99._0_4_ = -(uint)bVar11;
                  auVar99._4_4_ = -(uint)bVar11;
                  auVar99._8_4_ = -(uint)bVar11;
                  auVar99._12_4_ = -(uint)bVar11;
                  NEON_ext(auVar99,auVar99,8,1);
                  if (CONCAT13((char)auVar99._12_4_,
                               CONCAT12((char)auVar99._8_4_,
                                        CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))) != -1) {
                    bVar11 = fVar24 <= 0.0 && fVar52 <= 0.0;
                    auVar70._0_4_ = -(uint)bVar11;
                    auVar70._4_4_ = -(uint)bVar11;
                    auVar70._8_4_ = -(uint)bVar11;
                    auVar70._12_4_ = -(uint)bVar11;
                    NEON_ext(auVar70,auVar70,8,1);
                    if (CONCAT13((char)auVar70._12_4_,
                                 CONCAT12((char)auVar70._8_4_,
                                          CONCAT11((char)auVar70._4_4_,(char)auVar70._0_4_))) == -1)
                    {
                      pfVar14 = local_170;
                      pfVar16 = local_130;
                      pauVar17 = (undefined1 (*) [16])local_f0;
                    }
                    else {
                      bVar11 = 0.0 <= fVar83 && fVar95 <= fVar83;
                      auVar33._0_4_ = -(uint)bVar11;
                      auVar33._4_4_ = -(uint)bVar11;
                      auVar33._8_4_ = -(uint)bVar11;
                      auVar33._12_4_ = -(uint)bVar11;
                      NEON_ext(auVar33,auVar33,8,1);
                      iVar30 = CONCAT13((char)auVar33._12_4_,
                                        CONCAT12((char)auVar33._8_4_,
                                                 CONCAT11((char)auVar33._4_4_,(char)auVar33._0_4_)))
                      ;
                      iVar65 = -(uint)(iVar30 == -1);
                      auVar34._4_4_ = iVar65;
                      auVar34._0_4_ = iVar65;
                      auVar34._8_4_ = iVar65;
                      auVar34._12_4_ = iVar65;
                      auVar55 = local_d0[0] ^ (local_d0[0] ^ auVar10) & auVar34;
                      lVar13 = 0x10;
                      if (iVar30 != -1) {
                        lVar13 = 0x20;
                      }
                      pauVar17 = (undefined1 (*) [16])((long)local_f0 + lVar13);
                      pfVar16 = (float *)((long)local_f0 + lVar13 + -0x40);
                      pfVar14 = (float *)((long)local_f0 + lVar13 + -0x80);
                    }
                    local_174 = 1;
                    goto LAB_002a53ac;
                  }
                  uVar76 = CONCAT44((auVar102._0_4_ + auVar102._4_4_ + fVar72) - fVar28,
                                    fVar52 - fVar22);
                  uVar77 = NEON_frecpe(uVar76,4);
                  uVar85 = NEON_frecps(uVar76,uVar77,4);
                  fVar45 = (float)uVar77 * (float)uVar85;
                  fVar72 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
                  fVar45 = fVar45 * (float)uVar77;
                  fVar72 = fVar72 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
                  fVar45 = fVar45 * (float)uVar77;
                  fVar72 = fVar72 * (float)((ulong)uVar77 >> 0x20);
                  uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
                  fVar45 = fVar45 * (float)uVar77;
                  uVar76 = NEON_frecps(uVar76,CONCAT44(fVar72 * (float)((ulong)uVar77 >> 0x20),
                                                       fVar45),4);
                  fVar52 = fVar52 * (float)(-(uint)(1.1920929e-07 < ABS(fVar52 - fVar22)) &
                                           (uint)(fVar45 * (float)uVar76));
                  auVar38._0_8_ =
                       CONCAT44(fVar82 + auVar69._4_4_ * fVar52,fVar20 + auVar69._0_4_ * fVar52);
                  auVar38._8_4_ = fVar44 + auVar69._8_4_ * fVar52;
                  auVar38._12_4_ = fVar53 + auVar69._12_4_ * fVar52;
                  auVar55 = NEON_ext(auVar38,auVar38,8,1);
                  auVar4._8_4_ = auVar55._0_4_;
                  auVar4._0_8_ = auVar38._0_8_;
                  pfVar14 = local_170;
                  pfVar16 = local_130;
                  pauVar17 = (undefined1 (*) [16])local_f0;
                }
                auVar55._12_4_ = 0.0;
                auVar55._0_12_ = auVar4;
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
          auVar46._0_4_ = auVar78._0_4_ * auVar78._0_4_;
          auVar46._4_4_ = auVar78._4_4_ * auVar78._4_4_;
          auVar46._8_4_ = auVar78._8_4_ * auVar78._8_4_;
          auVar46._12_4_ = auVar78._12_4_ * auVar78._12_4_;
          auVar55 = NEON_ext(auVar46,auVar46,8,1);
          fVar45 = auVar55._0_4_ + auVar55._4_4_;
          fVar52 = auVar46._0_4_ + auVar46._4_4_ + fVar45;
          uVar76 = CONCAT44(auVar46._0_4_ + auVar46._4_4_ + fVar45,fVar52);
          bVar11 = fVar52 <= 1.1920929e-07;
          auVar59._0_4_ = -(uint)bVar11;
          auVar59._4_4_ = -(uint)bVar11;
          auVar59._8_4_ = -(uint)bVar11;
          auVar59._12_4_ = -(uint)bVar11;
          NEON_ext(auVar59,auVar59,8,1);
          local_174 = 2;
          if (CONCAT13((char)auVar59._12_4_,
                       CONCAT12((char)auVar59._8_4_,
                                CONCAT11((char)auVar59._4_4_,(char)auVar59._0_4_))) != -1) {
            auVar60._0_4_ = -fVar20 * auVar78._0_4_;
            auVar60._4_4_ = -fVar82 * auVar78._4_4_;
            auVar60._8_4_ = -fVar44 * auVar78._8_4_;
            auVar60._12_4_ = auVar78._12_4_ * 0.0;
            auVar55 = NEON_ext(auVar60,auVar60,8,1);
            fVar52 = auVar55._0_4_ + auVar55._4_4_;
            uVar77 = NEON_frecpe(uVar76,4);
            uVar85 = NEON_frecps(uVar76,uVar77,4);
            fVar45 = (float)uVar77 * (float)uVar85;
            fVar72 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
            fVar45 = fVar45 * (float)uVar77;
            fVar72 = fVar72 * (float)((ulong)uVar77 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
            fVar45 = fVar45 * (float)uVar77;
            fVar72 = fVar72 * (float)((ulong)uVar77 >> 0x20);
            uVar77 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
            fVar45 = fVar45 * (float)uVar77;
            fVar72 = fVar72 * (float)((ulong)uVar77 >> 0x20);
            uVar76 = NEON_frecps(uVar76,CONCAT44(fVar72,fVar45),4);
            uVar77 = NEON_fmov(0x3f800000,4);
            uVar76 = NEON_fmin(CONCAT44((auVar60._0_4_ + auVar60._4_4_ + fVar52) *
                                        fVar72 * (float)((ulong)uVar76 >> 0x20),
                                        (auVar60._0_4_ + auVar60._4_4_ + fVar52) *
                                        fVar45 * (float)uVar76),uVar77,4);
            uVar76 = NEON_fmax(uVar76,0,4);
            fVar52 = (float)uVar76;
            fVar45 = auVar78._0_4_ * fVar52;
            fVar72 = auVar78._4_4_ * fVar52;
            fVar73 = auVar78._8_4_ * fVar52;
            fVar52 = auVar78._12_4_ * fVar52;
            goto LAB_002a4f30;
          }
LAB_002a4f44:
          auVar55._8_8_ = local_f0[1];
          auVar55._0_8_ = local_f0[0];
          local_174 = 1;
        }
      }
      else {
        bVar11 = local_174 == 1;
        local_174 = uVar29;
        if (bVar11) {
          fVar45 = local_e0 - fVar20;
          fVar72 = fStack_dc - fVar82;
          fVar73 = fStack_d8 - fVar44;
          fVar52 = fStack_d4 - fVar53;
          auVar58._0_4_ = fVar45 * fVar45;
          auVar58._4_4_ = fVar72 * fVar72;
          auVar58._8_4_ = fVar73 * fVar73;
          auVar58._12_4_ = fVar52 * fVar52;
          auVar55 = NEON_ext(auVar58,auVar58,8,1);
          fVar24 = auVar55._0_4_ + auVar55._4_4_;
          fVar21 = auVar58._0_4_ + auVar58._4_4_ + fVar24;
          uVar76 = CONCAT44(auVar58._0_4_ + auVar58._4_4_ + fVar24,fVar21);
          bVar11 = fVar21 <= 1.1920929e-07;
          auVar67._0_4_ = -(uint)bVar11;
          auVar67._4_4_ = -(uint)bVar11;
          auVar67._8_4_ = -(uint)bVar11;
          auVar67._12_4_ = -(uint)bVar11;
          NEON_ext(auVar67,auVar67,8,1);
          if (CONCAT13((char)auVar67._12_4_,
                       CONCAT12((char)auVar67._8_4_,
                                CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))) == -1)
          goto LAB_002a4f44;
          auVar68._0_4_ = -fVar20 * fVar45;
          auVar68._4_4_ = -fVar82 * fVar72;
          auVar68._8_4_ = -fVar44 * fVar73;
          auVar68._12_4_ = fVar52 * 0.0;
          auVar55 = NEON_ext(auVar68,auVar68,8,1);
          fVar21 = auVar55._0_4_ + auVar55._4_4_;
          uVar77 = NEON_frecpe(uVar76,4);
          uVar85 = NEON_frecps(uVar76,uVar77,4);
          fVar24 = (float)uVar77 * (float)uVar85;
          fVar83 = (float)((ulong)uVar77 >> 0x20) * (float)((ulong)uVar85 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar83,fVar24),4);
          fVar24 = fVar24 * (float)uVar77;
          fVar83 = fVar83 * (float)((ulong)uVar77 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar83,fVar24),4);
          fVar24 = fVar24 * (float)uVar77;
          fVar83 = fVar83 * (float)((ulong)uVar77 >> 0x20);
          uVar77 = NEON_frecps(uVar76,CONCAT44(fVar83,fVar24),4);
          fVar24 = fVar24 * (float)uVar77;
          fVar83 = fVar83 * (float)((ulong)uVar77 >> 0x20);
          uVar76 = NEON_frecps(uVar76,CONCAT44(fVar83,fVar24),4);
          uVar77 = NEON_fmov(0x3f800000,4);
          uVar76 = NEON_fmin(CONCAT44((auVar68._0_4_ + auVar68._4_4_ + fVar21) *
                                      fVar83 * (float)((ulong)uVar76 >> 0x20),
                                      (auVar68._0_4_ + auVar68._4_4_ + fVar21) *
                                      fVar24 * (float)uVar76),uVar77,4);
          uVar76 = NEON_fmax(uVar76,0,4);
          fVar21 = (float)uVar76;
          fVar45 = fVar45 * fVar21;
          fVar72 = fVar72 * fVar21;
          fVar73 = fVar73 * fVar21;
          fVar52 = fVar52 * fVar21;
LAB_002a4f30:
          auVar32._0_8_ = CONCAT44(fVar82 + fVar72,fVar20 + fVar45);
          auVar32._8_4_ = fVar44 + fVar73;
          auVar32._12_4_ = fVar53 + fVar52;
          auVar55 = NEON_ext(auVar32,auVar32,8,1);
          auVar55._8_4_ = (float)auVar55._0_4_;
          auVar55._0_8_ = auVar32._0_8_;
          auVar55._12_4_ = 0.0;
        }
      }
    }
    local_190 = auVar55._0_4_;
    auVar47._0_4_ = local_190 * local_190;
    fStack_18c = auVar55._4_4_;
    auVar47._4_4_ = fStack_18c * fStack_18c;
    fStack_188 = auVar55._8_4_;
    auVar47._8_4_ = fStack_188 * fStack_188;
    fStack_184 = auVar55._12_4_;
    auVar47._12_4_ = fStack_184 * fStack_184;
    auVar86 = NEON_ext(auVar47,auVar47,8,1);
    fVar82 = auVar86._0_4_ + auVar86._4_4_;
    fVar20 = auVar47._0_4_ + auVar47._4_4_ + fVar82;
    fVar82 = auVar47._0_4_ + auVar47._4_4_ + fVar82;
    uVar84 = CONCAT44(fVar82,fVar20);
    uVar76 = NEON_frsqrte(uVar84,4);
    fVar44 = (float)uVar76;
    fVar53 = (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar53 * fVar53,fVar44 * fVar44),uVar84,4);
    fVar44 = fVar44 * (float)uVar76;
    fVar53 = fVar53 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar53 * fVar53,fVar44 * fVar44),uVar84,4);
    fVar44 = fVar44 * (float)uVar76;
    fVar53 = fVar53 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar53 * fVar53,fVar44 * fVar44),uVar84,4);
    fVar44 = fVar44 * (float)uVar76;
    fVar53 = fVar53 * (float)((ulong)uVar76 >> 0x20);
    uVar76 = NEON_frsqrts(CONCAT44(fVar53 * fVar53,fVar44 * fVar44),uVar84,4);
    uVar15 = CONCAT44(fVar82 * fVar53 * (float)((ulong)uVar76 >> 0x20),
                      fVar20 * fVar44 * (float)uVar76);
    uVar15 = uVar15 ^ (uVar15 ^ uVar84) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
    bVar11 = (float)uVar15 < fVar23;
    bVar5 = (float)uVar75 * 0.1 < (float)uVar15 && bVar11;
    auVar71._0_4_ = -(uint)bVar5;
    auVar71._4_4_ = -(uint)bVar5;
    auVar71._8_4_ = -(uint)bVar5;
    auVar71._12_4_ = -(uint)bVar5;
    NEON_ext(auVar71,auVar71,8,1);
    if (CONCAT13((char)auVar71._12_4_,
                 CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_))) !=
        -1) {
      auVar39._0_4_ = -(uint)bVar11;
      auVar39._4_4_ = -(uint)bVar11;
      auVar39._8_4_ = -(uint)bVar11;
      auVar39._12_4_ = -(uint)bVar11;
      NEON_ext(auVar39,auVar39,8,1);
      if (CONCAT13((char)auVar39._12_4_,
                   CONCAT12((char)auVar39._8_4_,CONCAT11((char)auVar39._4_4_,(char)auVar39._0_4_)))
          == -1) {
        *param_8 = 0;
        return 2;
      }
      auVar93._0_4_ = -local_1b0;
      auVar93._4_4_ = -fStack_1ac;
      auVar93._8_4_ = -fStack_1a8;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
      auVar93._12_4_ = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x10);
      uVar75 = NEON_fmin(CONCAT44(uVar12,uVar12),CONCAT44(uVar3,uVar3),4);
      auVar81._0_4_ = (float)uVar75 * 0.2;
      auVar81._4_4_ = (float)((ulong)uVar75 >> 0x20) * 0.2;
      auVar81._8_8_ = 0;
      auVar88._0_4_ = (float)-(uint)(0.0 < fVar97);
      auVar88._4_4_ = (float)-(uint)(0.0 < fVar98);
      auVar88._8_8_ = 0;
      fVar20 = (float)((uint)auVar81._0_4_ ^
                      ((uint)auVar81._0_4_ ^ (uint)fVar97) & (uint)auVar88._0_4_);
      if (local_174 == 3) {
        FUN_00231940(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar82 = (float)local_a0;
        auVar93._12_4_ = 0;
        auVar88._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar82 + (local_110 - local_130[0]) * local_a8[0];
        auVar88._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar82 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar88._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar82 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar88._12_4_ = local_130[3] + 0.0;
        auVar81._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar82 + (local_150 - local_170[0]) * local_a8[0];
        auVar81._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar82 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar81._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar82 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar81._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar82 = (float)local_a0;
        auVar93._12_4_ = 0;
        auVar49._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar82,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar82);
        auVar49._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar82;
        auVar49._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar82;
        auVar55 = NEON_ext(auVar49,auVar49,8,1);
        auVar88._8_4_ = (float)auVar55._0_4_;
        auVar88._0_8_ = auVar49._0_8_;
        auVar88._12_4_ = 0.0;
        auVar43._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar82,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar82);
        auVar43._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar82;
        auVar43._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar82;
        auVar55 = NEON_ext(auVar43,auVar43,8,1);
        auVar81._8_4_ = (float)auVar55._0_4_;
        auVar81._0_8_ = auVar43._0_8_;
        auVar81._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar88._4_4_ = local_130[1];
        auVar88._0_4_ = local_130[0];
        auVar88._8_4_ = local_130[2];
        auVar88._12_4_ = local_130[3];
        auVar81._4_4_ = local_170[1];
        auVar81._0_4_ = local_170[0];
        auVar81._8_4_ = local_170[2];
        auVar81._12_4_ = local_170[3];
      }
      fVar82 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar7._4_4_ = iVar1;
      auVar7._0_4_ = iVar1;
      auVar7._8_4_ = iVar1;
      auVar7._12_4_ = iVar1;
      auVar9._4_4_ = iVar2;
      auVar9._0_4_ = iVar2;
      auVar9._8_4_ = iVar2;
      auVar9._12_4_ = iVar2;
      auVar63._0_8_ =
           CONCAT44(auVar88._4_4_ + auVar93._4_4_ * fVar82,auVar88._0_4_ + auVar93._0_4_ * fVar82);
      auVar63._8_4_ = auVar88._8_4_ + auVar93._8_4_ * fVar82;
      auVar63._12_4_ = auVar88._12_4_ + auVar93._12_4_ * fVar82;
      auVar55 = NEON_ext(auVar63,auVar63,8,1);
      auVar64._8_4_ = auVar55._0_4_;
      auVar64._0_8_ = auVar63._0_8_;
      auVar64._12_4_ = 0;
      auVar88 = auVar88 ^ (auVar88 ^ auVar64) & auVar7;
      param_5[1] = auVar88._8_8_;
      *param_5 = auVar88._0_8_;
      fVar82 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar50._0_8_ =
           CONCAT44(auVar81._4_4_ - auVar93._4_4_ * fVar82,auVar81._0_4_ - auVar93._0_4_ * fVar82);
      auVar50._8_4_ = auVar81._8_4_ - auVar93._8_4_ * fVar82;
      auVar50._12_4_ = auVar81._12_4_ - auVar93._12_4_ * fVar82;
      auVar55 = NEON_ext(auVar50,auVar50,8,1);
      auVar51._8_4_ = auVar55._0_4_;
      auVar51._0_8_ = auVar50._0_8_;
      auVar51._12_4_ = 0;
      uVar75 = NEON_fmax(0,CONCAT44(fVar74 - fVar98,fVar23 - fVar97),4);
      auVar81 = auVar81 ^ (auVar81 ^ auVar51) & auVar9;
      param_6[1] = auVar81._8_8_;
      *param_6 = auVar81._0_8_;
      param_7[1] = auVar93._8_8_;
      *param_7 = auVar93._0_8_;
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


