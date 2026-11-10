/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00220760; name: FUN_00220760
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00220760(long param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 *param_5,
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
  float fVar54;
  float fVar56;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar55;
  float fVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar58;
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
  int iVar70;
  float fVar77;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  undefined8 uVar79;
  float fVar85;
  undefined8 uVar80;
  undefined8 uVar81;
  float fVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  ulong uVar87;
  undefined8 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulong uVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar111;
  undefined1 auVar112 [16];
  undefined8 uVar113;
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
  fVar78 = param_3[2];
  fVar85 = param_3[3];
  auVar47._0_4_ = fVar20 * fVar20;
  auVar47._4_4_ = fVar23 * fVar23;
  auVar47._8_4_ = fVar78 * fVar78;
  auVar47._12_4_ = fVar85 * fVar85;
  auVar59 = NEON_ext(auVar47,auVar47,8,1);
  uVar29 = -(uint)(0.0 < auVar47._0_4_ + auVar47._4_4_ + auVar59._0_4_ + auVar59._4_4_);
  local_190 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar20) & uVar29);
  fStack_18c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar23) & uVar29);
  fStack_188 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar78) & uVar29);
  fStack_184 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar85) & uVar29);
  auVar97._0_4_ = local_190 * local_190;
  auVar97._4_4_ = fStack_18c * fStack_18c;
  auVar97._8_4_ = fStack_188 * fStack_188;
  auVar97._12_4_ = fStack_184 * fStack_184;
  auVar59 = NEON_ext(auVar97,auVar97,8,1);
  lVar13 = *(long *)(param_1 + 8);
  iVar1 = -(*(byte *)(lVar13 + 0x24) & 1);
  fVar23 = auVar59._0_4_ + auVar59._4_4_;
  fVar20 = auVar97._0_4_ + auVar97._4_4_ + fVar23;
  fVar23 = auVar97._0_4_ + auVar97._4_4_ + fVar23;
  uVar14 = CONCAT44(fVar23,fVar20);
  uVar79 = NEON_frsqrte(uVar14,4);
  uVar87 = CONCAT44(iVar1,iVar1) &
           CONCAT44(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x10));
  fVar78 = (float)uVar79;
  fVar85 = (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar78 * fVar78),uVar14,4);
  fVar78 = fVar78 * (float)uVar79;
  fVar85 = fVar85 * (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar78 * fVar78),uVar14,4);
  fVar78 = fVar78 * (float)uVar79;
  fVar85 = fVar85 * (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar78 * fVar78),uVar14,4);
  fVar78 = fVar78 * (float)uVar79;
  fVar85 = fVar85 * (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frsqrts(CONCAT44(fVar85 * fVar85,fVar78 * fVar78),uVar14,4);
  lVar19 = *(long *)(param_2 + 8);
  iVar2 = -(*(byte *)(lVar19 + 0x24) & 1);
  uVar91 = CONCAT44(iVar2,iVar2) &
           CONCAT44(*(undefined4 *)(lVar19 + 0x10),*(undefined4 *)(lVar19 + 0x10));
  uVar58 = *param_4;
  fVar100 = (float)uVar87 + (float)uVar91;
  fVar101 = (float)(uVar87 >> 0x20) + (float)(uVar91 >> 0x20);
  uVar87 = CONCAT44(fVar23 * fVar85 * (float)((ulong)uVar79 >> 0x20),fVar20 * fVar78 * (float)uVar79
                   );
  uVar87 = uVar87 ^ (uVar87 ^ uVar14) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar79 = NEON_frecpe(uVar87,4);
  uVar80 = NEON_frecps(uVar87,uVar79,4);
  fStack_1a8 = (float)uVar79 * (float)uVar80;
  fVar20 = (float)((ulong)uVar79 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
  uVar79 = NEON_frecps(uVar87,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar79;
  fVar20 = fVar20 * (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frecps(uVar87,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar79;
  fVar20 = fVar20 * (float)((ulong)uVar79 >> 0x20);
  uVar79 = NEON_frecps(uVar87,CONCAT44(fVar20,fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar79;
  uVar79 = NEON_frecps(uVar87,CONCAT44(fVar20 * (float)((ulong)uVar79 >> 0x20),fStack_1a8),4);
  fStack_1a8 = fStack_1a8 * (float)uVar79;
  local_1b0 = local_190 * fStack_1a8;
  fStack_1ac = fStack_18c * fStack_1a8;
  fStack_1a8 = fStack_188 * fStack_1a8;
  uVar79 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar19 + 0x14),*(undefined4 *)(lVar19 + 0x14)),4);
  uVar14 = 0x7f7fffff7f7fffff;
  auVar59._4_4_ = fStack_18c;
  auVar59._0_4_ = local_190;
  auVar59._8_4_ = fStack_188;
  auVar59._12_4_ = fStack_184;
  do {
    uStack_198 = auVar59._8_8_;
    local_1a0 = auVar59._0_8_;
    fVar20 = auVar59._0_4_;
    fVar23 = auVar59._4_4_;
    fVar78 = auVar59._8_4_;
    fVar85 = auVar59._12_4_;
    auVar71._0_4_ = fVar20 * *(float *)(lVar19 + 0x40);
    auVar71._4_4_ = fVar23 * *(float *)(lVar19 + 0x44);
    auVar71._8_4_ = fVar78 * *(float *)(lVar19 + 0x48);
    auVar71._12_4_ = fVar85 * *(float *)(lVar19 + 0x4c);
    auVar60._0_4_ = fVar20 * *(float *)(lVar19 + 0x30);
    auVar60._4_4_ = fVar23 * *(float *)(lVar19 + 0x34);
    auVar60._8_4_ = fVar78 * *(float *)(lVar19 + 0x38);
    auVar60._12_4_ = fVar85 * *(float *)(lVar19 + 0x3c);
    auVar31._0_4_ = fVar20 * *(float *)(lVar19 + 0x50);
    auVar31._4_4_ = fVar23 * *(float *)(lVar19 + 0x54);
    auVar31._8_4_ = fVar78 * *(float *)(lVar19 + 0x58);
    auVar31._12_4_ = fVar85 * *(float *)(lVar19 + 0x5c);
    auVar59 = *(undefined1 (*) [16])(lVar13 + 0x30);
    auVar47 = *(undefined1 (*) [16])(lVar13 + 0x40);
    auVar92._0_4_ = -fVar20 * auVar59._0_4_;
    auVar92._4_4_ = -fVar23 * auVar59._4_4_;
    auVar92._8_4_ = -fVar78 * auVar59._8_4_;
    auVar92._12_4_ = auVar59._12_4_ * 0.0;
    auVar97 = NEON_ext(auVar92,auVar92,8,1);
    auVar45._0_4_ = -fVar20 * auVar47._0_4_;
    auVar45._4_4_ = -fVar23 * auVar47._4_4_;
    auVar45._8_4_ = -fVar78 * auVar47._8_4_;
    auVar45._12_4_ = auVar47._12_4_ * 0.0;
    auVar98 = NEON_ext(auVar45,auVar45,8,1);
    auVar46._0_4_ =
         -(uint)(auVar45._0_4_ + auVar45._4_4_ + auVar98._0_4_ + auVar98._4_4_ <
                auVar92._0_4_ + auVar92._4_4_ + auVar97._0_4_ + auVar97._4_4_);
    auVar46._4_4_ = auVar46._0_4_;
    auVar46._8_4_ = auVar46._0_4_;
    auVar46._12_4_ = auVar46._0_4_;
    auVar47 = auVar47 ^ (auVar47 ^ auVar59) & auVar46;
    auVar97 = NEON_ext(auVar71,auVar71,8,1);
    auVar59 = NEON_ext(auVar60,auVar60,8,1);
    fVar20 = auVar59._0_4_ + auVar59._4_4_;
    auVar59 = NEON_ext(auVar31,auVar31,8,1);
    fVar23 = auVar97._0_4_ + auVar97._4_4_;
    local_a0 = NEON_ext(CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar20,
                                 auVar60._0_4_ + auVar60._4_4_ + fVar20),
                        CONCAT44(auVar71._0_4_ + auVar71._4_4_ + fVar23,
                                 auVar71._0_4_ + auVar71._4_4_ + fVar23),4,1);
    uStack_98 = (ulong)(uint)(auVar31._0_4_ + auVar31._4_4_ + auVar59._0_4_ + auVar59._4_4_);
    uVar87 = FUN_00222070(lVar19,&local_a0);
    pfVar15 = (float *)(*(long *)(lVar19 + 0xa0) + (uVar87 & 0xffffffff) * 0xc);
    fVar20 = *pfVar15;
    fVar23 = pfVar15[1];
    fVar78 = pfVar15[2];
    fVar85 = *(float *)(lVar19 + 0x30) * fVar20 + *(float *)(lVar19 + 0x40) * fVar23 +
             *(float *)(lVar19 + 0x50) * fVar78;
    fVar54 = *(float *)(lVar19 + 0x34) * fVar20 + *(float *)(lVar19 + 0x44) * fVar23 +
             *(float *)(lVar19 + 0x54) * fVar78;
    auVar98._0_8_ = CONCAT44(fVar54,fVar85);
    auVar98._8_4_ =
         *(float *)(lVar19 + 0x38) * fVar20 + *(float *)(lVar19 + 0x48) * fVar23 +
         *(float *)(lVar19 + 0x58) * fVar78;
    auVar98._12_4_ = 0.0;
    fVar85 = auVar47._0_4_ - fVar85;
    fVar54 = auVar47._4_4_ - fVar54;
    auVar59._0_8_ = CONCAT44(fVar54,fVar85);
    auVar59._8_4_ = auVar47._8_4_ - auVar98._8_4_;
    auVar59._12_4_ = auVar47._12_4_ - 0.0;
    auVar61._0_4_ = local_1b0 * fVar85;
    auVar61._4_4_ = fStack_1ac * fVar54;
    auVar61._8_4_ = fStack_1a8 * auVar59._8_4_;
    auVar61._12_4_ = auVar59._12_4_ * 0.0;
    auVar97 = NEON_ext(auVar61,auVar61,8,1);
    fVar20 = auVar61._0_4_ + auVar61._4_4_ + auVar97._0_4_ + auVar97._4_4_;
    if ((float)uVar58 + fVar100 < fVar20) {
      return 0;
    }
    fVar23 = (float)uVar14;
    fVar78 = (float)(uVar14 >> 0x20);
    bVar11 = fVar100 < fVar20 && fVar23 * 0.999775 < fVar20;
    auVar62._0_4_ = -(uint)bVar11;
    auVar62._4_4_ = -(uint)bVar11;
    auVar62._8_4_ = -(uint)bVar11;
    auVar62._12_4_ = -(uint)bVar11;
    NEON_ext(auVar62,auVar62,8,1);
    if (CONCAT13((char)auVar62._12_4_,
                 CONCAT12((char)auVar62._8_4_,CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) ==
        -1) {
      auVar95._0_4_ = -local_1b0;
      auVar95._4_4_ = -fStack_1ac;
      auVar95._8_4_ = -fStack_1a8;
      auVar95._12_4_ = 0;
      if (local_174 == 3) {
        FUN_00231940(&local_190,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar20 = (float)local_a0;
        auVar95._12_4_ = 0;
        auVar59._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar20 + (local_110 - local_130[0]) * local_a8[0];
        auVar59._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar20 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar59._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar20 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar59._12_4_ = local_130[3] + 0.0;
        auVar98._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar20 + (local_150 - local_170[0]) * local_a8[0];
        auVar98._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar20 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar98._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar20 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar98._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_190,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar20 = (float)local_a0;
        auVar95._12_4_ = 0;
        auVar40._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar20,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar20);
        auVar40._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar20;
        auVar40._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar20;
        auVar59 = NEON_ext(auVar40,auVar40,8,1);
        auVar59._8_4_ = (float)auVar59._0_4_;
        auVar59._0_8_ = auVar40._0_8_;
        auVar59._12_4_ = 0.0;
        auVar50._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar20,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar20);
        auVar50._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar20;
        auVar50._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar20;
        auVar47 = NEON_ext(auVar50,auVar50,8,1);
        auVar98._8_4_ = (float)auVar47._0_4_;
        auVar98._0_8_ = auVar50._0_8_;
        auVar98._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar59._4_4_ = local_130[1];
        auVar59._0_4_ = local_130[0];
        auVar59._8_4_ = local_130[2];
        auVar59._12_4_ = local_130[3];
        auVar98._4_4_ = local_170[1];
        auVar98._0_4_ = local_170[0];
        auVar98._8_4_ = local_170[2];
        auVar98._12_4_ = local_170[3];
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
      auVar66._0_8_ =
           CONCAT44(auVar59._4_4_ + auVar95._4_4_ * fVar20,auVar59._0_4_ + auVar95._0_4_ * fVar20);
      auVar66._8_4_ = auVar59._8_4_ + auVar95._8_4_ * fVar20;
      auVar66._12_4_ = auVar59._12_4_ + auVar95._12_4_ * fVar20;
      auVar47 = NEON_ext(auVar66,auVar66,8,1);
      auVar67._8_4_ = auVar47._0_4_;
      auVar67._0_8_ = auVar66._0_8_;
      auVar67._12_4_ = 0;
      auVar59 = auVar59 ^ (auVar59 ^ auVar67) & auVar6;
      param_5[1] = auVar59._8_8_;
      *param_5 = auVar59._0_8_;
      fVar20 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar41._0_8_ =
           CONCAT44(auVar98._4_4_ - auVar95._4_4_ * fVar20,auVar98._0_4_ - auVar95._0_4_ * fVar20);
      auVar41._8_4_ = auVar98._8_4_ - auVar95._8_4_ * fVar20;
      auVar41._12_4_ = auVar98._12_4_ - auVar95._12_4_ * fVar20;
      auVar59 = NEON_ext(auVar41,auVar41,8,1);
      auVar42._8_4_ = auVar59._0_4_;
      auVar42._0_8_ = auVar41._0_8_;
      auVar42._12_4_ = 0;
      auVar98 = auVar98 ^ (auVar98 ^ auVar42) & auVar8;
      param_6[1] = auVar98._8_8_;
      *param_6 = auVar98._0_8_;
      uVar79 = NEON_fmax(0,CONCAT44(fVar78 - fVar101,fVar23 - fVar100),4);
      *param_8 = uVar79;
      param_7[1] = auVar95._8_8_;
      *param_7 = auVar95._0_8_;
      return 1;
    }
    uVar14 = (ulong)local_174;
    uVar29 = local_174 + 1;
    local_f0[uVar14 * 2 + -7] = auVar47._8_8_;
    local_f0[uVar14 * 2 + -8] = auVar47._0_8_;
    local_f0[uVar14 * 2 + -0xf] = (ulong)(uint)auVar98._8_4_;
    local_f0[uVar14 * 2 + -0x10] = auVar98._0_8_;
    *(long *)(local_d0[uVar14 - 2] + 8) = auVar59._8_8_;
    local_f0[uVar14 * 2] = auVar59._0_8_;
    if (local_174 == 3) {
      local_174 = uVar29;
      auVar59 = FUN_00237120(local_f0,local_130,local_170,&local_174);
    }
    else {
      fVar20 = (float)local_f0[0];
      fVar85 = (float)(local_f0[0] >> 0x20);
      fVar54 = (float)local_f0[1];
      fVar77 = (float)(local_f0[1] >> 0x20);
      if (local_174 == 2) {
        auVar59._8_8_ = local_f0[1];
        auVar59._0_8_ = local_f0[0];
        auVar10._4_4_ = fStack_dc;
        auVar10._0_4_ = local_e0;
        auVar10._8_4_ = fStack_d8;
        auVar10._12_4_ = fStack_d4;
        auVar82._0_4_ = local_e0 - fVar20;
        auVar82._4_4_ = fStack_dc - fVar85;
        auVar82._8_4_ = fStack_d8 - fVar54;
        auVar82._12_4_ = fStack_d4 - fVar77;
        fVar55 = local_d0[0]._0_4_;
        auVar74._0_4_ = fVar55 - fVar20;
        fVar56 = local_d0[0]._4_4_;
        auVar74._4_4_ = fVar56 - fVar85;
        fVar21 = local_d0[0]._8_4_;
        auVar74._8_4_ = fVar21 - fVar54;
        auVar74._12_4_ = local_d0[0]._12_4_ - fVar77;
        auVar47 = NEON_ext(auVar82,auVar82,8,1);
        auVar97 = NEON_ext(auVar74,auVar74,8,1);
        fVar96 = auVar82._0_4_ * auVar74._4_4_ - auVar82._4_4_ * auVar74._0_4_;
        uVar80 = NEON_ext(CONCAT44(auVar82._4_4_ * auVar74._8_4_ - auVar82._8_4_ * auVar74._4_4_,
                                   fVar96),
                          CONCAT44(auVar47._4_4_ * auVar74._4_4_ - auVar82._4_4_ * auVar97._4_4_,
                                   auVar47._0_4_ * auVar74._0_4_ - auVar82._0_4_ * auVar97._0_4_),4,
                          1);
        local_174 = 3;
        fVar24 = (float)uVar80;
        auVar89._0_4_ = fVar24 * fVar24;
        fVar86 = (float)((ulong)uVar80 >> 0x20);
        auVar89._4_4_ = fVar86 * fVar86;
        auVar89._8_4_ = fVar96 * fVar96;
        auVar89._12_4_ = 0;
        auVar47 = NEON_ext(auVar89,auVar89,8,1);
        fVar44 = auVar47._0_4_ + auVar47._4_4_;
        fVar57 = auVar89._0_4_ + auVar89._4_4_ + fVar44;
        uVar80 = CONCAT44(auVar89._0_4_ + auVar89._4_4_ + fVar44,fVar57);
        if (1.1920929e-07 < fVar57) {
          if (fVar57 != 0.0) {
            auVar47 = NEON_ext(auVar10,auVar10,8,1);
            auVar97 = NEON_ext(local_d0[0],local_d0[0],8,1);
            fVar111 = local_e0 * fVar56 - fStack_dc * fVar55;
            auVar98 = NEON_ext(auVar59,auVar59,8,1);
            uVar88 = NEON_ext(CONCAT44(fStack_dc * fVar21 - fStack_d8 * fVar56,fVar111),
                              CONCAT44(auVar47._4_4_ * fVar56 - fStack_dc * auVar97._4_4_,
                                       auVar47._0_4_ * fVar55 - local_e0 * auVar97._0_4_),4,1);
            fVar57 = fVar85 * fVar55 - fVar20 * fVar56;
            uVar113 = NEON_ext(CONCAT44(fVar54 * fVar56 - fVar85 * fVar21,fVar57),
                               CONCAT44(fVar85 * auVar97._4_4_ - auVar98._4_4_ * fVar56,
                                        fVar20 * auVar97._0_4_ - auVar98._0_4_ * fVar55),4,1);
            fVar44 = fVar20 * fStack_dc - fVar85 * local_e0;
            uVar81 = NEON_ext(CONCAT44(fVar85 * fStack_d8 - fVar54 * fStack_dc,fVar44),
                              CONCAT44(auVar98._4_4_ * fStack_dc - fVar85 * auVar47._4_4_,
                                       auVar98._0_4_ * local_e0 - fVar20 * auVar47._0_4_),4,1);
            auVar103._0_4_ = (float)uVar88 * fVar24;
            auVar103._4_4_ = (float)((ulong)uVar88 >> 0x20) * fVar86;
            auVar103._8_4_ = fVar111 * fVar96;
            auVar103._12_4_ = 0;
            auVar47 = NEON_ext(auVar103,auVar103,8,1);
            auVar106._0_4_ = (float)uVar113 * fVar24;
            auVar106._4_4_ = (float)((ulong)uVar113 >> 0x20) * fVar86;
            auVar106._8_4_ = fVar57 * fVar96;
            auVar106._12_4_ = 0;
            auVar97 = NEON_ext(auVar106,auVar106,8,1);
            fVar57 = auVar103._0_4_ + auVar103._4_4_ + auVar47._0_4_ + auVar47._4_4_;
            auVar109._0_4_ = (float)uVar81 * fVar24;
            auVar109._4_4_ = (float)((ulong)uVar81 >> 0x20) * fVar86;
            auVar109._8_4_ = fVar44 * fVar96;
            auVar109._12_4_ = 0;
            fVar44 = auVar106._0_4_ + auVar106._4_4_ + auVar97._0_4_ + auVar97._4_4_;
            auVar47 = NEON_ext(auVar109,auVar109,8,1);
            fVar111 = auVar109._0_4_ + auVar109._4_4_ + auVar47._0_4_ + auVar47._4_4_;
            bVar11 = (0.0 <= fVar57 && 0.0 <= fVar44) && 0.0 <= fVar111;
            auVar110._0_4_ = -(uint)bVar11;
            auVar110._4_4_ = -(uint)bVar11;
            auVar110._8_4_ = -(uint)bVar11;
            auVar110._12_4_ = -(uint)bVar11;
            NEON_ext(auVar110,auVar110,8,1);
            if (CONCAT13((char)auVar110._12_4_,
                         CONCAT12((char)auVar110._8_4_,
                                  CONCAT11((char)auVar110._4_4_,(char)auVar110._0_4_))) == -1) {
              auVar35._0_4_ = fVar20 * fVar24;
              auVar35._4_4_ = fVar85 * fVar86;
              auVar35._8_4_ = fVar54 * fVar96;
              auVar35._12_4_ = fVar77 * 0.0;
              auVar59 = NEON_ext(auVar35,auVar35,8,1);
              uVar81 = NEON_frecpe(uVar80,4);
              uVar88 = NEON_frecps(uVar80,uVar81,4);
              fVar20 = (float)uVar81 * (float)uVar88;
              fVar85 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
              uVar81 = NEON_frecps(uVar80,CONCAT44(fVar85,fVar20),4);
              fVar20 = fVar20 * (float)uVar81;
              fVar85 = fVar85 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar80,CONCAT44(fVar85,fVar20),4);
              fVar20 = fVar20 * (float)uVar81;
              fVar85 = fVar85 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar80,CONCAT44(fVar85,fVar20),4);
              fVar20 = fVar20 * (float)uVar81;
              uVar80 = NEON_frecps(uVar80,CONCAT44(fVar85 * (float)((ulong)uVar81 >> 0x20),fVar20),4
                                  );
              fVar20 = (auVar35._0_4_ + auVar35._4_4_ + auVar59._0_4_ + auVar59._4_4_) *
                       fVar20 * (float)uVar80;
              auVar59._0_4_ = fVar24 * fVar20;
              auVar59._4_4_ = fVar86 * fVar20;
              auVar59._8_4_ = fVar96 * fVar20;
              auVar59._12_4_ = 0.0;
            }
            else {
              auVar93._0_4_ = -fVar20 * auVar82._0_4_;
              auVar93._4_4_ = -fVar85 * auVar82._4_4_;
              auVar93._8_4_ = -fVar54 * auVar82._8_4_;
              auVar93._12_4_ = auVar82._12_4_ * 0.0;
              auVar47 = NEON_ext(auVar93,auVar93,8,1);
              fVar96 = auVar47._0_4_ + auVar47._4_4_;
              auVar99._0_4_ = -local_e0 * auVar82._0_4_;
              auVar99._4_4_ = -fStack_dc * auVar82._4_4_;
              auVar99._8_4_ = -fStack_d8 * auVar82._8_4_;
              auVar99._12_4_ = auVar82._12_4_ * 0.0;
              auVar47 = NEON_ext(auVar99,auVar99,8,1);
              fVar25 = auVar47._0_4_ + auVar47._4_4_;
              fVar24 = auVar93._0_4_ + auVar93._4_4_ + fVar96;
              fVar86 = auVar99._0_4_ + auVar99._4_4_ + fVar25;
              fVar25 = auVar99._0_4_ + auVar99._4_4_ + fVar25;
              bVar11 = (0.0 <= fVar24 && fVar111 <= 0.0) && fVar86 <= 0.0;
              auVar107._0_4_ = -(uint)bVar11;
              auVar107._4_4_ = -(uint)bVar11;
              auVar107._8_4_ = -(uint)bVar11;
              auVar107._12_4_ = -(uint)bVar11;
              NEON_ext(auVar107,auVar107,8,1);
              if (CONCAT13((char)auVar107._12_4_,
                           CONCAT12((char)auVar107._8_4_,
                                    CONCAT11((char)auVar107._4_4_,(char)auVar107._0_4_))) == -1) {
                uVar80 = CONCAT44((auVar93._0_4_ + auVar93._4_4_ + fVar96) - fVar25,fVar24 - fVar86)
                ;
                uVar81 = NEON_frecpe(uVar80,4);
                uVar88 = NEON_frecps(uVar80,uVar81,4);
                fVar57 = (float)uVar81 * (float)uVar88;
                fVar44 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                uVar81 = NEON_frecps(uVar80,CONCAT44(fVar44,fVar57),4);
                fVar57 = fVar57 * (float)uVar81;
                fVar44 = fVar44 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar80,CONCAT44(fVar44,fVar57),4);
                fVar57 = fVar57 * (float)uVar81;
                fVar44 = fVar44 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar80,CONCAT44(fVar44,fVar57),4);
                fVar57 = fVar57 * (float)uVar81;
                uVar80 = NEON_frecps(uVar80,CONCAT44(fVar44 * (float)((ulong)uVar81 >> 0x20),fVar57)
                                     ,4);
                fVar24 = fVar24 * (float)(-(uint)(1.1920929e-07 < ABS(fVar24 - fVar86)) &
                                         (uint)(fVar57 * (float)uVar80));
                pfVar15 = local_170;
                pfVar16 = local_130;
                auVar36._0_8_ =
                     CONCAT44(fVar85 + auVar82._4_4_ * fVar24,fVar20 + auVar82._0_4_ * fVar24);
                auVar36._8_4_ = fVar54 + auVar82._8_4_ * fVar24;
                auVar36._12_4_ = fVar77 + auVar82._12_4_ * fVar24;
                auVar59 = NEON_ext(auVar36,auVar36,8,1);
                pauVar17 = (undefined1 (*) [16])local_f0;
                auVar59._8_4_ = (float)auVar59._0_4_;
                auVar59._0_8_ = auVar36._0_8_;
                auVar59._12_4_ = 0.0;
                local_174 = 2;
LAB_00221120:
                lVar13 = 1;
                pauVar18 = (undefined1 (*) [16])&local_e0;
              }
              else {
                auVar108._0_4_ = -local_e0 * auVar74._0_4_;
                auVar108._4_4_ = -fStack_dc * auVar74._4_4_;
                auVar108._8_4_ = -fStack_d8 * auVar74._8_4_;
                auVar108._12_4_ = auVar74._12_4_ * 0.0;
                auVar47 = NEON_ext(auVar108,auVar108,8,1);
                fVar26 = auVar47._0_4_ + auVar47._4_4_;
                auVar83._0_4_ = auVar82._0_4_ * -fVar55;
                auVar83._4_4_ = auVar82._4_4_ * -fVar56;
                auVar83._8_4_ = auVar82._8_4_ * -fVar21;
                auVar83._12_4_ = auVar82._12_4_ * 0.0;
                auVar112._0_4_ = auVar74._0_4_ * -fVar55;
                auVar112._4_4_ = auVar74._4_4_ * -fVar56;
                auVar112._8_4_ = auVar74._8_4_ * -fVar21;
                auVar112._12_4_ = auVar74._12_4_ * 0.0;
                fVar96 = auVar108._0_4_ + auVar108._4_4_ + fVar26;
                auVar47 = NEON_ext(auVar83,auVar83,8,1);
                fVar27 = auVar47._0_4_ + auVar47._4_4_;
                fVar111 = auVar83._0_4_ + auVar83._4_4_ + fVar27;
                auVar47 = NEON_ext(auVar112,auVar112,8,1);
                fVar28 = auVar47._0_4_ + auVar47._4_4_;
                fVar22 = auVar112._0_4_ + auVar112._4_4_ + fVar28;
                fVar28 = auVar112._0_4_ + auVar112._4_4_ + fVar28;
                bVar11 = (fVar86 <= fVar96 && fVar57 <= 0.0) && fVar22 <= fVar111;
                auVar104._0_4_ = -(uint)bVar11;
                auVar104._4_4_ = -(uint)bVar11;
                auVar104._8_4_ = -(uint)bVar11;
                auVar104._12_4_ = -(uint)bVar11;
                NEON_ext(auVar104,auVar104,8,1);
                if (CONCAT13((char)auVar104._12_4_,
                             CONCAT12((char)auVar104._8_4_,
                                      CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) == -1) {
                  fVar20 = (fVar96 - fVar86) + (fVar111 - fVar22);
                  uVar80 = CONCAT44(((auVar108._0_4_ + auVar108._4_4_ + fVar26) - fVar25) +
                                    ((auVar83._0_4_ + auVar83._4_4_ + fVar27) - fVar28),fVar20);
                  uVar81 = NEON_frecpe(uVar80,4);
                  uVar88 = NEON_frecps(uVar80,uVar81,4);
                  fVar85 = (float)uVar81 * (float)uVar88;
                  fVar54 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar54,fVar85),4);
                  fVar85 = fVar85 * (float)uVar81;
                  fVar54 = fVar54 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar54,fVar85),4);
                  fVar85 = fVar85 * (float)uVar81;
                  fVar54 = fVar54 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar54,fVar85),4);
                  fVar85 = fVar85 * (float)uVar81;
                  uVar80 = NEON_frecps(uVar80,CONCAT44(fVar54 * (float)((ulong)uVar81 >> 0x20),
                                                       fVar85),4);
                  fVar20 = (fVar96 - fVar86) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar20)) &
                                  (uint)(fVar85 * (float)uVar80));
                  auVar37._0_8_ =
                       CONCAT44(fStack_dc + (fVar56 - fStack_dc) * fVar20,
                                local_e0 + (fVar55 - local_e0) * fVar20);
                  auVar37._8_4_ = fStack_d8 + (fVar21 - fStack_d8) * fVar20;
                  auVar37._12_4_ = fStack_d4 + (local_d0[0]._12_4_ - fStack_d4) * fVar20;
                  auVar59 = NEON_ext(auVar37,auVar37,8,1);
                  auVar4._8_4_ = auVar59._0_4_;
                  auVar4._0_8_ = auVar37._0_8_;
                  pfVar15 = (float *)&uStack_160;
                  pfVar16 = (float *)&uStack_120;
                  pauVar17 = (undefined1 (*) [16])&local_e0;
                }
                else {
                  auVar105._0_4_ = -fVar20 * auVar74._0_4_;
                  auVar105._4_4_ = -fVar85 * auVar74._4_4_;
                  auVar105._8_4_ = -fVar54 * auVar74._8_4_;
                  auVar105._12_4_ = auVar74._12_4_ * 0.0;
                  auVar47 = NEON_ext(auVar105,auVar105,8,1);
                  fVar55 = auVar47._0_4_ + auVar47._4_4_;
                  fVar57 = auVar105._0_4_ + auVar105._4_4_ + fVar55;
                  bVar11 = (fVar44 <= 0.0 && 0.0 <= fVar57) && fVar22 <= 0.0;
                  auVar102._0_4_ = -(uint)bVar11;
                  auVar102._4_4_ = -(uint)bVar11;
                  auVar102._8_4_ = -(uint)bVar11;
                  auVar102._12_4_ = -(uint)bVar11;
                  NEON_ext(auVar102,auVar102,8,1);
                  if (CONCAT13((char)auVar102._12_4_,
                               CONCAT12((char)auVar102._8_4_,
                                        CONCAT11((char)auVar102._4_4_,(char)auVar102._0_4_))) != -1)
                  {
                    bVar11 = fVar24 <= 0.0 && fVar57 <= 0.0;
                    auVar75._0_4_ = -(uint)bVar11;
                    auVar75._4_4_ = -(uint)bVar11;
                    auVar75._8_4_ = -(uint)bVar11;
                    auVar75._12_4_ = -(uint)bVar11;
                    NEON_ext(auVar75,auVar75,8,1);
                    if (CONCAT13((char)auVar75._12_4_,
                                 CONCAT12((char)auVar75._8_4_,
                                          CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_))) == -1)
                    {
                      pfVar15 = local_170;
                      pfVar16 = local_130;
                      pauVar17 = (undefined1 (*) [16])local_f0;
                    }
                    else {
                      bVar11 = 0.0 <= fVar86 && fVar96 <= fVar86;
                      auVar33._0_4_ = -(uint)bVar11;
                      auVar33._4_4_ = -(uint)bVar11;
                      auVar33._8_4_ = -(uint)bVar11;
                      auVar33._12_4_ = -(uint)bVar11;
                      NEON_ext(auVar33,auVar33,8,1);
                      iVar30 = CONCAT13((char)auVar33._12_4_,
                                        CONCAT12((char)auVar33._8_4_,
                                                 CONCAT11((char)auVar33._4_4_,(char)auVar33._0_4_)))
                      ;
                      iVar70 = -(uint)(iVar30 == -1);
                      auVar34._4_4_ = iVar70;
                      auVar34._0_4_ = iVar70;
                      auVar34._8_4_ = iVar70;
                      auVar34._12_4_ = iVar70;
                      auVar59 = local_d0[0] ^ (local_d0[0] ^ auVar10) & auVar34;
                      lVar13 = 0x10;
                      if (iVar30 != -1) {
                        lVar13 = 0x20;
                      }
                      pauVar17 = (undefined1 (*) [16])((long)local_f0 + lVar13);
                      pfVar16 = (float *)((long)local_f0 + lVar13 + -0x40);
                      pfVar15 = (float *)((long)local_f0 + lVar13 + -0x80);
                    }
                    local_174 = 1;
                    goto LAB_00221120;
                  }
                  uVar80 = CONCAT44((auVar105._0_4_ + auVar105._4_4_ + fVar55) - fVar28,
                                    fVar57 - fVar22);
                  uVar81 = NEON_frecpe(uVar80,4);
                  uVar88 = NEON_frecps(uVar80,uVar81,4);
                  fVar44 = (float)uVar81 * (float)uVar88;
                  fVar55 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  fVar55 = fVar55 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  fVar55 = fVar55 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  uVar80 = NEON_frecps(uVar80,CONCAT44(fVar55 * (float)((ulong)uVar81 >> 0x20),
                                                       fVar44),4);
                  fVar57 = fVar57 * (float)(-(uint)(1.1920929e-07 < ABS(fVar57 - fVar22)) &
                                           (uint)(fVar44 * (float)uVar80));
                  auVar38._0_8_ =
                       CONCAT44(fVar85 + auVar74._4_4_ * fVar57,fVar20 + auVar74._0_4_ * fVar57);
                  auVar38._8_4_ = fVar54 + auVar74._8_4_ * fVar57;
                  auVar38._12_4_ = fVar77 + auVar74._12_4_ * fVar57;
                  auVar59 = NEON_ext(auVar38,auVar38,8,1);
                  auVar4._8_4_ = auVar59._0_4_;
                  auVar4._0_8_ = auVar38._0_8_;
                  pfVar15 = local_170;
                  pfVar16 = local_130;
                  pauVar17 = (undefined1 (*) [16])local_f0;
                }
                auVar59._12_4_ = 0.0;
                auVar59._0_12_ = auVar4;
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
              local_170[2] = (float)*(undefined8 *)(pfVar15 + 2);
              local_170[3] = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
              local_170[0] = (float)*(undefined8 *)pfVar15;
              local_170[1] = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
            }
          }
        }
        else {
          auVar48._0_4_ = auVar82._0_4_ * auVar82._0_4_;
          auVar48._4_4_ = auVar82._4_4_ * auVar82._4_4_;
          auVar48._8_4_ = auVar82._8_4_ * auVar82._8_4_;
          auVar48._12_4_ = auVar82._12_4_ * auVar82._12_4_;
          auVar59 = NEON_ext(auVar48,auVar48,8,1);
          fVar44 = auVar59._0_4_ + auVar59._4_4_;
          fVar57 = auVar48._0_4_ + auVar48._4_4_ + fVar44;
          uVar80 = CONCAT44(auVar48._0_4_ + auVar48._4_4_ + fVar44,fVar57);
          bVar11 = fVar57 <= 1.1920929e-07;
          auVar64._0_4_ = -(uint)bVar11;
          auVar64._4_4_ = -(uint)bVar11;
          auVar64._8_4_ = -(uint)bVar11;
          auVar64._12_4_ = -(uint)bVar11;
          NEON_ext(auVar64,auVar64,8,1);
          local_174 = 2;
          if (CONCAT13((char)auVar64._12_4_,
                       CONCAT12((char)auVar64._8_4_,
                                CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) != -1) {
            auVar65._0_4_ = -fVar20 * auVar82._0_4_;
            auVar65._4_4_ = -fVar85 * auVar82._4_4_;
            auVar65._8_4_ = -fVar54 * auVar82._8_4_;
            auVar65._12_4_ = auVar82._12_4_ * 0.0;
            auVar59 = NEON_ext(auVar65,auVar65,8,1);
            fVar57 = auVar59._0_4_ + auVar59._4_4_;
            uVar81 = NEON_frecpe(uVar80,4);
            uVar88 = NEON_frecps(uVar80,uVar81,4);
            fVar44 = (float)uVar81 * (float)uVar88;
            fVar55 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
            uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar55 = fVar55 * (float)((ulong)uVar81 >> 0x20);
            uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar55 = fVar55 * (float)((ulong)uVar81 >> 0x20);
            uVar81 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar55 = fVar55 * (float)((ulong)uVar81 >> 0x20);
            uVar80 = NEON_frecps(uVar80,CONCAT44(fVar55,fVar44),4);
            uVar81 = NEON_fmov(0x3f800000,4);
            uVar80 = NEON_fmin(CONCAT44((auVar65._0_4_ + auVar65._4_4_ + fVar57) *
                                        fVar55 * (float)((ulong)uVar80 >> 0x20),
                                        (auVar65._0_4_ + auVar65._4_4_ + fVar57) *
                                        fVar44 * (float)uVar80),uVar81,4);
            uVar80 = NEON_fmax(uVar80,0,4);
            fVar57 = (float)uVar80;
            fVar44 = auVar82._0_4_ * fVar57;
            fVar55 = auVar82._4_4_ * fVar57;
            fVar56 = auVar82._8_4_ * fVar57;
            fVar57 = auVar82._12_4_ * fVar57;
            goto LAB_00220ca4;
          }
LAB_00220cb8:
          auVar59._8_8_ = local_f0[1];
          auVar59._0_8_ = local_f0[0];
          local_174 = 1;
        }
      }
      else {
        bVar11 = local_174 == 1;
        local_174 = uVar29;
        if (bVar11) {
          fVar44 = local_e0 - fVar20;
          fVar55 = fStack_dc - fVar85;
          fVar56 = fStack_d8 - fVar54;
          fVar57 = fStack_d4 - fVar77;
          auVar63._0_4_ = fVar44 * fVar44;
          auVar63._4_4_ = fVar55 * fVar55;
          auVar63._8_4_ = fVar56 * fVar56;
          auVar63._12_4_ = fVar57 * fVar57;
          auVar59 = NEON_ext(auVar63,auVar63,8,1);
          fVar24 = auVar59._0_4_ + auVar59._4_4_;
          fVar21 = auVar63._0_4_ + auVar63._4_4_ + fVar24;
          uVar80 = CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar24,fVar21);
          bVar11 = fVar21 <= 1.1920929e-07;
          auVar72._0_4_ = -(uint)bVar11;
          auVar72._4_4_ = -(uint)bVar11;
          auVar72._8_4_ = -(uint)bVar11;
          auVar72._12_4_ = -(uint)bVar11;
          NEON_ext(auVar72,auVar72,8,1);
          if (CONCAT13((char)auVar72._12_4_,
                       CONCAT12((char)auVar72._8_4_,
                                CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_))) == -1)
          goto LAB_00220cb8;
          auVar73._0_4_ = -fVar20 * fVar44;
          auVar73._4_4_ = -fVar85 * fVar55;
          auVar73._8_4_ = -fVar54 * fVar56;
          auVar73._12_4_ = fVar57 * 0.0;
          auVar59 = NEON_ext(auVar73,auVar73,8,1);
          fVar21 = auVar59._0_4_ + auVar59._4_4_;
          uVar81 = NEON_frecpe(uVar80,4);
          uVar88 = NEON_frecps(uVar80,uVar81,4);
          fVar24 = (float)uVar81 * (float)uVar88;
          fVar86 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar88 >> 0x20);
          uVar81 = NEON_frecps(uVar80,CONCAT44(fVar86,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar86 = fVar86 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar80,CONCAT44(fVar86,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar86 = fVar86 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar80,CONCAT44(fVar86,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar86 = fVar86 * (float)((ulong)uVar81 >> 0x20);
          uVar80 = NEON_frecps(uVar80,CONCAT44(fVar86,fVar24),4);
          uVar81 = NEON_fmov(0x3f800000,4);
          uVar80 = NEON_fmin(CONCAT44((auVar73._0_4_ + auVar73._4_4_ + fVar21) *
                                      fVar86 * (float)((ulong)uVar80 >> 0x20),
                                      (auVar73._0_4_ + auVar73._4_4_ + fVar21) *
                                      fVar24 * (float)uVar80),uVar81,4);
          uVar80 = NEON_fmax(uVar80,0,4);
          fVar21 = (float)uVar80;
          fVar44 = fVar44 * fVar21;
          fVar55 = fVar55 * fVar21;
          fVar56 = fVar56 * fVar21;
          fVar57 = fVar57 * fVar21;
LAB_00220ca4:
          auVar32._0_8_ = CONCAT44(fVar85 + fVar55,fVar20 + fVar44);
          auVar32._8_4_ = fVar54 + fVar56;
          auVar32._12_4_ = fVar77 + fVar57;
          auVar59 = NEON_ext(auVar32,auVar32,8,1);
          auVar59._8_4_ = (float)auVar59._0_4_;
          auVar59._0_8_ = auVar32._0_8_;
          auVar59._12_4_ = 0.0;
        }
      }
    }
    local_190 = auVar59._0_4_;
    auVar49._0_4_ = local_190 * local_190;
    fStack_18c = auVar59._4_4_;
    auVar49._4_4_ = fStack_18c * fStack_18c;
    fStack_188 = auVar59._8_4_;
    auVar49._8_4_ = fStack_188 * fStack_188;
    fStack_184 = auVar59._12_4_;
    auVar49._12_4_ = fStack_184 * fStack_184;
    auVar47 = NEON_ext(auVar49,auVar49,8,1);
    fVar85 = auVar47._0_4_ + auVar47._4_4_;
    fVar20 = auVar49._0_4_ + auVar49._4_4_ + fVar85;
    fVar85 = auVar49._0_4_ + auVar49._4_4_ + fVar85;
    uVar87 = CONCAT44(fVar85,fVar20);
    uVar80 = NEON_frsqrte(uVar87,4);
    fVar54 = (float)uVar80;
    fVar77 = (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar54 * fVar54),uVar87,4);
    fVar54 = fVar54 * (float)uVar80;
    fVar77 = fVar77 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar54 * fVar54),uVar87,4);
    fVar54 = fVar54 * (float)uVar80;
    fVar77 = fVar77 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar54 * fVar54),uVar87,4);
    fVar54 = fVar54 * (float)uVar80;
    fVar77 = fVar77 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar54 * fVar54),uVar87,4);
    uVar14 = CONCAT44(fVar85 * fVar77 * (float)((ulong)uVar80 >> 0x20),
                      fVar20 * fVar54 * (float)uVar80);
    uVar14 = uVar14 ^ (uVar14 ^ uVar87) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
    bVar11 = (float)uVar14 < fVar23;
    bVar5 = (float)uVar79 * 0.1 < (float)uVar14 && bVar11;
    auVar76._0_4_ = -(uint)bVar5;
    auVar76._4_4_ = -(uint)bVar5;
    auVar76._8_4_ = -(uint)bVar5;
    auVar76._12_4_ = -(uint)bVar5;
    NEON_ext(auVar76,auVar76,8,1);
    if (CONCAT13((char)auVar76._12_4_,
                 CONCAT12((char)auVar76._8_4_,CONCAT11((char)auVar76._4_4_,(char)auVar76._0_4_))) !=
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
      auVar94._0_4_ = -local_1b0;
      auVar94._4_4_ = -fStack_1ac;
      auVar94._8_4_ = -fStack_1a8;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
      auVar94._12_4_ = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x10);
      uVar79 = NEON_fmin(CONCAT44(uVar12,uVar12),CONCAT44(uVar3,uVar3),4);
      auVar84._0_4_ = (float)uVar79 * 0.2;
      auVar84._4_4_ = (float)((ulong)uVar79 >> 0x20) * 0.2;
      auVar84._8_8_ = 0;
      auVar90._0_4_ = (float)-(uint)(0.0 < fVar100);
      auVar90._4_4_ = (float)-(uint)(0.0 < fVar101);
      auVar90._8_8_ = 0;
      fVar20 = (float)((uint)auVar84._0_4_ ^
                      ((uint)auVar84._0_4_ ^ (uint)fVar100) & (uint)auVar90._0_4_);
      if (local_174 == 3) {
        FUN_00231940(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,local_d0,&local_a0,local_a8)
        ;
        fVar85 = (float)local_a0;
        auVar94._12_4_ = 0;
        auVar90._0_4_ =
             local_130[0] +
             ((float)uStack_120 - local_130[0]) * fVar85 + (local_110 - local_130[0]) * local_a8[0];
        auVar90._4_4_ =
             local_130[1] +
             (uStack_120._4_4_ - local_130[1]) * fVar85 + (fStack_10c - local_130[1]) * local_a8[0];
        auVar90._8_4_ =
             local_130[2] +
             ((float)uStack_118 - local_130[2]) * fVar85 + (fStack_108 - local_130[2]) * local_a8[0]
        ;
        auVar90._12_4_ = local_130[3] + 0.0;
        auVar84._0_4_ =
             local_170[0] +
             ((float)uStack_160 - local_170[0]) * fVar85 + (local_150 - local_170[0]) * local_a8[0];
        auVar84._4_4_ =
             local_170[1] +
             (uStack_160._4_4_ - local_170[1]) * fVar85 + (fStack_14c - local_170[1]) * local_a8[0];
        auVar84._8_4_ =
             local_170[2] +
             ((float)uStack_158 - local_170[2]) * fVar85 + (fStack_148 - local_170[2]) * local_a8[0]
        ;
        auVar84._12_4_ = local_170[3] + 0.0;
      }
      else if (local_174 == 2) {
        FUN_002318c0(&local_1a0,local_f0,(undefined1 (*) [16])&local_e0,&local_a0);
        fVar85 = (float)local_a0;
        auVar94._12_4_ = 0;
        auVar51._0_8_ =
             CONCAT44(local_130[1] + (uStack_120._4_4_ - local_130[1]) * fVar85,
                      local_130[0] + ((float)uStack_120 - local_130[0]) * fVar85);
        auVar51._8_4_ = local_130[2] + ((float)uStack_118 - local_130[2]) * fVar85;
        auVar51._12_4_ = local_130[3] + (uStack_118._4_4_ - local_130[3]) * fVar85;
        auVar59 = NEON_ext(auVar51,auVar51,8,1);
        auVar90._8_4_ = (float)auVar59._0_4_;
        auVar90._0_8_ = auVar51._0_8_;
        auVar90._12_4_ = 0.0;
        auVar43._0_8_ =
             CONCAT44(local_170[1] + (uStack_160._4_4_ - local_170[1]) * fVar85,
                      local_170[0] + ((float)uStack_160 - local_170[0]) * fVar85);
        auVar43._8_4_ = local_170[2] + ((float)uStack_158 - local_170[2]) * fVar85;
        auVar43._12_4_ = local_170[3] + (uStack_158._4_4_ - local_170[3]) * fVar85;
        auVar59 = NEON_ext(auVar43,auVar43,8,1);
        auVar84._8_4_ = (float)auVar59._0_4_;
        auVar84._0_8_ = auVar43._0_8_;
        auVar84._12_4_ = 0.0;
      }
      else if (local_174 == 1) {
        auVar90._4_4_ = local_130[1];
        auVar90._0_4_ = local_130[0];
        auVar90._8_4_ = local_130[2];
        auVar90._12_4_ = local_130[3];
        auVar84._4_4_ = local_170[1];
        auVar84._0_4_ = local_170[0];
        auVar84._8_4_ = local_170[2];
        auVar84._12_4_ = local_170[3];
      }
      fVar85 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar7._4_4_ = iVar1;
      auVar7._0_4_ = iVar1;
      auVar7._8_4_ = iVar1;
      auVar7._12_4_ = iVar1;
      auVar9._4_4_ = iVar2;
      auVar9._0_4_ = iVar2;
      auVar9._8_4_ = iVar2;
      auVar9._12_4_ = iVar2;
      auVar68._0_8_ =
           CONCAT44(auVar90._4_4_ + auVar94._4_4_ * fVar85,auVar90._0_4_ + auVar94._0_4_ * fVar85);
      auVar68._8_4_ = auVar90._8_4_ + auVar94._8_4_ * fVar85;
      auVar68._12_4_ = auVar90._12_4_ + auVar94._12_4_ * fVar85;
      auVar59 = NEON_ext(auVar68,auVar68,8,1);
      auVar69._8_4_ = auVar59._0_4_;
      auVar69._0_8_ = auVar68._0_8_;
      auVar69._12_4_ = 0;
      auVar90 = auVar90 ^ (auVar90 ^ auVar69) & auVar7;
      param_5[1] = auVar90._8_8_;
      *param_5 = auVar90._0_8_;
      fVar85 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar52._0_8_ =
           CONCAT44(auVar84._4_4_ - auVar94._4_4_ * fVar85,auVar84._0_4_ - auVar94._0_4_ * fVar85);
      auVar52._8_4_ = auVar84._8_4_ - auVar94._8_4_ * fVar85;
      auVar52._12_4_ = auVar84._12_4_ - auVar94._12_4_ * fVar85;
      auVar59 = NEON_ext(auVar52,auVar52,8,1);
      auVar53._8_4_ = auVar59._0_4_;
      auVar53._0_8_ = auVar52._0_8_;
      auVar53._12_4_ = 0;
      uVar79 = NEON_fmax(0,CONCAT44(fVar78 - fVar101,fVar23 - fVar100),4);
      auVar84 = auVar84 ^ (auVar84 ^ auVar53) & auVar9;
      param_6[1] = auVar84._8_8_;
      *param_6 = auVar84._0_8_;
      param_7[1] = auVar94._8_8_;
      *param_7 = auVar94._0_8_;
      *param_8 = uVar79;
      uVar12 = 1;
      if ((float)uVar79 <= fVar20) {
        uVar12 = 2;
      }
      return uVar12;
    }
    uVar80 = NEON_frecpe(uVar14,4);
    uVar81 = NEON_frecps(uVar14,uVar80,4);
    fStack_1a8 = (float)uVar80 * (float)uVar81;
    fVar20 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
    uVar80 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar80;
    fVar20 = fVar20 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar80;
    fVar20 = fVar20 * (float)((ulong)uVar80 >> 0x20);
    uVar80 = NEON_frecps(uVar14,CONCAT44(fVar20,fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar80;
    uVar80 = NEON_frecps(uVar14,CONCAT44(fVar20 * (float)((ulong)uVar80 >> 0x20),fStack_1a8),4);
    fStack_1a8 = fStack_1a8 * (float)uVar80;
    lVar13 = *(long *)(param_1 + 8);
    local_1b0 = local_190 * fStack_1a8;
    fStack_1ac = fStack_18c * fStack_1a8;
    fStack_1a8 = fStack_188 * fStack_1a8;
    lVar19 = *(long *)(param_2 + 8);
  } while( true );
}


