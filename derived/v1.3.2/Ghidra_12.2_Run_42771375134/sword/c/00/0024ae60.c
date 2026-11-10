/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024ae60; name: FUN_0024ae60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0024ae60(long param_1,long param_2,float *param_3,undefined8 *param_4,undefined8 *param_5,
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
  long lVar16;
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
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
  int iVar43;
  float fVar44;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  float fVar77;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar76 [16];
  int iVar79;
  ulong uVar80;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined8 uVar81;
  float fVar87;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  ulong uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar115;
  undefined1 auVar116 [16];
  undefined8 uVar117;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  uint local_164;
  float local_160 [4];
  undefined8 uStack_150;
  undefined8 uStack_148;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float local_120 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 local_e0 [2];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 local_c0 [2] [16];
  float local_a0 [2];
  float local_98 [2];
  
  local_164 = 0;
  fVar20 = *param_3;
  fVar23 = param_3[1];
  fVar66 = param_3[2];
  fVar77 = param_3[3];
  auVar83._0_4_ = fVar20 * fVar20;
  auVar83._4_4_ = fVar23 * fVar23;
  auVar83._8_4_ = fVar66 * fVar66;
  auVar83._12_4_ = fVar77 * fVar77;
  auVar57 = NEON_ext(auVar83,auVar83,8,1);
  uVar29 = -(uint)(0.0 < auVar83._0_4_ + auVar83._4_4_ + auVar57._0_4_ + auVar57._4_4_);
  local_180 = (float)(_DAT_01d4ae50 ^ (_DAT_01d4ae50 ^ (uint)fVar20) & uVar29);
  fStack_17c = (float)(_UNK_01d4ae54 ^ (_UNK_01d4ae54 ^ (uint)fVar23) & uVar29);
  fStack_178 = (float)(_UNK_01d4ae58 ^ (_UNK_01d4ae58 ^ (uint)fVar66) & uVar29);
  fStack_174 = (float)(_UNK_01d4ae5c ^ (_UNK_01d4ae5c ^ (uint)fVar77) & uVar29);
  auVar96._0_4_ = local_180 * local_180;
  auVar96._4_4_ = fStack_17c * fStack_17c;
  auVar96._8_4_ = fStack_178 * fStack_178;
  auVar96._12_4_ = fStack_174 * fStack_174;
  auVar57 = NEON_ext(auVar96,auVar96,8,1);
  lVar16 = *(long *)(param_1 + 8);
  iVar1 = -(*(byte *)(lVar16 + 0x24) & 1);
  fVar23 = auVar57._0_4_ + auVar57._4_4_;
  fVar20 = auVar96._0_4_ + auVar96._4_4_ + fVar23;
  fVar23 = auVar96._0_4_ + auVar96._4_4_ + fVar23;
  uVar14 = CONCAT44(fVar23,fVar20);
  uVar68 = NEON_frsqrte(uVar14,4);
  uVar80 = CONCAT44(iVar1,iVar1) &
           CONCAT44(*(undefined4 *)(lVar16 + 0x10),*(undefined4 *)(lVar16 + 0x10));
  fVar66 = (float)uVar68;
  fVar77 = (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar66 * fVar66),uVar14,4);
  fVar66 = fVar66 * (float)uVar68;
  fVar77 = fVar77 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar66 * fVar66),uVar14,4);
  fVar66 = fVar66 * (float)uVar68;
  fVar77 = fVar77 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar66 * fVar66),uVar14,4);
  fVar66 = fVar66 * (float)uVar68;
  fVar77 = fVar77 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar66 * fVar66),uVar14,4);
  lVar13 = *(long *)(param_2 + 8);
  iVar2 = -(*(byte *)(lVar13 + 0x24) & 1);
  uVar88 = CONCAT44(iVar2,iVar2) &
           CONCAT44(*(undefined4 *)(lVar13 + 0x10),*(undefined4 *)(lVar13 + 0x10));
  fVar104 = (float)uVar80 + (float)uVar88;
  fVar105 = (float)(uVar80 >> 0x20) + (float)(uVar88 >> 0x20);
  uVar80 = CONCAT44(fVar23 * fVar77 * (float)((ulong)uVar68 >> 0x20),fVar20 * fVar66 * (float)uVar68
                   );
  uVar80 = uVar80 ^ (uVar80 ^ uVar14) & CONCAT44(-(uint)(fVar20 == 0.0),-(uint)(fVar20 == 0.0));
  uVar68 = NEON_frecpe(uVar80,4);
  uVar69 = NEON_frecps(uVar80,uVar68,4);
  fVar20 = (float)uVar68 * (float)uVar69;
  fVar23 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
  uVar68 = NEON_frecps(uVar80,CONCAT44(fVar23,fVar20),4);
  fVar20 = fVar20 * (float)uVar68;
  fVar23 = fVar23 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frecps(uVar80,CONCAT44(fVar23,fVar20),4);
  fVar20 = fVar20 * (float)uVar68;
  fVar23 = fVar23 * (float)((ulong)uVar68 >> 0x20);
  uVar68 = NEON_frecps(uVar80,CONCAT44(fVar23,fVar20),4);
  fVar20 = fVar20 * (float)uVar68;
  uVar68 = NEON_frecps(uVar80,CONCAT44(fVar23 * (float)((ulong)uVar68 >> 0x20),fVar20),4);
  fVar20 = fVar20 * (float)uVar68;
  fVar23 = local_180 * fVar20;
  fVar66 = fStack_17c * fVar20;
  fVar20 = fStack_178 * fVar20;
  uVar68 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar16 + 0x14),*(undefined4 *)(lVar16 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),4);
  uVar14 = 0x7f7fffff7f7fffff;
  uVar69 = *param_4;
  auVar57._4_4_ = fStack_17c;
  auVar57._0_4_ = local_180;
  auVar57._8_4_ = fStack_178;
  auVar57._12_4_ = fStack_174;
  do {
    fVar42 = -auVar57._0_4_;
    fVar51 = -auVar57._4_4_;
    fVar53 = -auVar57._8_4_;
    uStack_188 = auVar57._8_8_;
    local_190 = auVar57._0_8_;
    auVar83 = *(undefined1 (*) [16])(lVar16 + 0x30);
    auVar96 = *(undefined1 (*) [16])(lVar16 + 0x40);
    auVar82._0_4_ = fVar42 * auVar83._0_4_;
    auVar82._4_4_ = fVar51 * auVar83._4_4_;
    auVar82._8_4_ = fVar53 * auVar83._8_4_;
    auVar82._12_4_ = auVar83._12_4_ * 0.0;
    auVar92 = NEON_ext(auVar82,auVar82,8,1);
    auVar95 = *(undefined1 (*) [16])(lVar16 + 0x50);
    fVar77 = auVar82._0_4_ + auVar82._4_4_ + auVar92._0_4_ + auVar92._4_4_;
    auVar93._0_4_ = fVar42 * auVar96._0_4_;
    auVar93._4_4_ = fVar51 * auVar96._4_4_;
    auVar93._8_4_ = fVar53 * auVar96._8_4_;
    auVar93._12_4_ = auVar96._12_4_ * 0.0;
    auVar101 = NEON_ext(auVar93,auVar93,8,1);
    auVar92._0_4_ = fVar42 * auVar95._0_4_;
    auVar92._4_4_ = fVar51 * auVar95._4_4_;
    auVar92._8_4_ = fVar53 * auVar95._8_4_;
    auVar92._12_4_ = auVar95._12_4_ * 0.0;
    auVar102 = NEON_ext(auVar92,auVar92,8,1);
    fVar42 = auVar93._0_4_ + auVar93._4_4_ + auVar101._0_4_ + auVar101._4_4_;
    fVar51 = auVar92._0_4_ + auVar92._4_4_ + auVar102._0_4_ + auVar102._4_4_;
    iVar43 = -(uint)(fVar51 < fVar42);
    iVar79 = -(uint)(fVar51 < fVar77 && fVar42 < fVar77);
    auVar94._4_4_ = iVar43;
    auVar94._0_4_ = iVar43;
    auVar94._8_4_ = iVar43;
    auVar94._12_4_ = iVar43;
    auVar95 = auVar95 ^ (auVar95 ^ auVar96) & auVar94;
    auVar101._4_4_ = iVar79;
    auVar101._0_4_ = iVar79;
    auVar101._8_4_ = iVar79;
    auVar101._12_4_ = iVar79;
    auVar95 = auVar95 ^ (auVar95 ^ auVar83) & auVar101;
    auVar102._0_4_ = -(uint)(0.0 < auVar57._0_4_);
    auVar102._4_4_ = -(uint)(0.0 < auVar57._4_4_);
    auVar102._8_4_ = -(uint)(0.0 < auVar57._8_4_);
    auVar102._12_4_ = -(uint)(0.0 < auVar57._12_4_);
    auVar57 = *(undefined1 (*) [16])(lVar13 + 0x30);
    auVar58._0_4_ = -auVar57._0_4_;
    auVar58._4_4_ = -auVar57._4_4_;
    auVar58._8_4_ = -auVar57._8_4_;
    auVar58._12_4_ = 0;
    auVar58 = auVar58 ^ (auVar58 ^ auVar57) & auVar102;
    fVar77 = auVar95._0_4_ - auVar58._0_4_;
    fVar42 = auVar95._4_4_ - auVar58._4_4_;
    auVar57._0_8_ = CONCAT44(fVar42,fVar77);
    auVar57._8_4_ = auVar95._8_4_ - auVar58._8_4_;
    auVar57._12_4_ = auVar95._12_4_ - auVar58._12_4_;
    auVar70._0_4_ = fVar23 * fVar77;
    auVar70._4_4_ = fVar66 * fVar42;
    auVar70._8_4_ = fVar20 * auVar57._8_4_;
    auVar70._12_4_ = auVar57._12_4_ * 0.0;
    auVar83 = NEON_ext(auVar70,auVar70,8,1);
    fVar77 = auVar70._0_4_ + auVar70._4_4_ + auVar83._0_4_ + auVar83._4_4_;
    if ((float)uVar69 + fVar104 < fVar77) {
      return 0;
    }
    fVar42 = (float)uVar14;
    fVar51 = (float)(uVar14 >> 0x20);
    bVar11 = fVar104 < fVar77 && fVar42 * 0.999775 < fVar77;
    auVar71._0_4_ = -(uint)bVar11;
    auVar71._4_4_ = -(uint)bVar11;
    auVar71._8_4_ = -(uint)bVar11;
    auVar71._12_4_ = -(uint)bVar11;
    NEON_ext(auVar71,auVar71,8,1);
    if (CONCAT13((char)auVar71._12_4_,
                 CONCAT12((char)auVar71._8_4_,CONCAT11((char)auVar71._4_4_,(char)auVar71._0_4_))) ==
        -1) {
      auVar99._0_8_ = CONCAT44(-fVar66,-fVar23);
      auVar99._8_4_ = -fVar20;
      auVar99._12_4_ = 0;
      if (local_164 == 3) {
        FUN_00231940(&local_180,local_e0,(undefined1 (*) [16])&local_d0,local_c0,local_98,local_a0);
        auVar99._12_4_ = 0;
        auVar57._0_4_ =
             local_120[0] +
             ((float)uStack_110 - local_120[0]) * local_98[0] +
             (local_100 - local_120[0]) * local_a0[0];
        auVar57._4_4_ =
             local_120[1] +
             (uStack_110._4_4_ - local_120[1]) * local_98[0] +
             (fStack_fc - local_120[1]) * local_a0[0];
        auVar57._8_4_ =
             local_120[2] +
             ((float)uStack_108 - local_120[2]) * local_98[0] +
             (fStack_f8 - local_120[2]) * local_a0[0];
        auVar57._12_4_ = local_120[3] + 0.0;
        auVar95._0_4_ =
             local_160[0] +
             ((float)uStack_150 - local_160[0]) * local_98[0] +
             (local_140 - local_160[0]) * local_a0[0];
        auVar95._4_4_ =
             local_160[1] +
             (uStack_150._4_4_ - local_160[1]) * local_98[0] +
             (fStack_13c - local_160[1]) * local_a0[0];
        auVar95._8_4_ =
             local_160[2] +
             ((float)uStack_148 - local_160[2]) * local_98[0] +
             (fStack_138 - local_160[2]) * local_a0[0];
        auVar95._12_4_ = local_160[3] + 0.0;
      }
      else if (local_164 == 2) {
        FUN_002318c0(&local_180,local_e0,(undefined1 (*) [16])&local_d0,local_98);
        auVar99._12_4_ = 0;
        auVar38._0_8_ =
             CONCAT44(local_120[1] + (uStack_110._4_4_ - local_120[1]) * local_98[0],
                      local_120[0] + ((float)uStack_110 - local_120[0]) * local_98[0]);
        auVar38._8_4_ = local_120[2] + ((float)uStack_108 - local_120[2]) * local_98[0];
        auVar38._12_4_ = local_120[3] + (uStack_108._4_4_ - local_120[3]) * local_98[0];
        auVar57 = NEON_ext(auVar38,auVar38,8,1);
        auVar57._8_4_ = (float)auVar57._0_4_;
        auVar57._0_8_ = auVar38._0_8_;
        auVar57._12_4_ = 0.0;
        auVar47._0_8_ =
             CONCAT44(local_160[1] + (uStack_150._4_4_ - local_160[1]) * local_98[0],
                      local_160[0] + ((float)uStack_150 - local_160[0]) * local_98[0]);
        auVar47._8_4_ = local_160[2] + ((float)uStack_148 - local_160[2]) * local_98[0];
        auVar47._12_4_ = local_160[3] + (uStack_148._4_4_ - local_160[3]) * local_98[0];
        auVar83 = NEON_ext(auVar47,auVar47,8,1);
        auVar95._8_4_ = (float)auVar83._0_4_;
        auVar95._0_8_ = auVar47._0_8_;
        auVar95._12_4_ = 0.0;
      }
      else if (local_164 == 1) {
        auVar57._4_4_ = local_120[1];
        auVar57._0_4_ = local_120[0];
        auVar57._8_4_ = local_120[2];
        auVar57._12_4_ = local_120[3];
        auVar95._4_4_ = local_160[1];
        auVar95._0_4_ = local_160[0];
        auVar95._8_4_ = local_160[2];
        auVar95._12_4_ = local_160[3];
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
      auVar62._0_8_ =
           CONCAT44(auVar57._4_4_ + auVar99._4_4_ * fVar20,auVar57._0_4_ + auVar99._0_4_ * fVar20);
      auVar62._8_4_ = auVar57._8_4_ + auVar99._8_4_ * fVar20;
      auVar62._12_4_ = auVar57._12_4_ + auVar99._12_4_ * fVar20;
      auVar83 = NEON_ext(auVar62,auVar62,8,1);
      auVar63._8_4_ = auVar83._0_4_;
      auVar63._0_8_ = auVar62._0_8_;
      auVar63._12_4_ = 0;
      auVar57 = auVar57 ^ (auVar57 ^ auVar63) & auVar6;
      param_5[1] = auVar57._8_8_;
      *param_5 = auVar57._0_8_;
      fVar20 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar39._0_8_ =
           CONCAT44(auVar95._4_4_ - auVar99._4_4_ * fVar20,auVar95._0_4_ - auVar99._0_4_ * fVar20);
      auVar39._8_4_ = auVar95._8_4_ - auVar99._8_4_ * fVar20;
      auVar39._12_4_ = auVar95._12_4_ - auVar99._12_4_ * fVar20;
      auVar57 = NEON_ext(auVar39,auVar39,8,1);
      auVar40._8_4_ = auVar57._0_4_;
      auVar40._0_8_ = auVar39._0_8_;
      auVar40._12_4_ = 0;
      auVar95 = auVar95 ^ (auVar95 ^ auVar40) & auVar8;
      param_6[1] = auVar95._8_8_;
      *param_6 = auVar95._0_8_;
      uVar68 = NEON_fmax(0,CONCAT44(fVar51 - fVar105,fVar42 - fVar104),4);
      *param_8 = uVar68;
      param_7[1] = auVar99._8_8_;
      *param_7 = auVar99._0_8_;
      return 1;
    }
    uVar14 = (ulong)local_164;
    uVar29 = local_164 + 1;
    local_e0[uVar14 * 2 + -7] = auVar95._8_8_;
    local_e0[uVar14 * 2 + -8] = auVar95._0_8_;
    local_e0[uVar14 * 2 + -0xf] = auVar58._8_8_;
    local_e0[uVar14 * 2 + -0x10] = auVar58._0_8_;
    *(long *)(local_c0[uVar14 - 2] + 8) = auVar57._8_8_;
    local_e0[uVar14 * 2] = auVar57._0_8_;
    if (local_164 == 3) {
      local_164 = uVar29;
      auVar57 = FUN_00237120(local_e0,local_120,local_160,&local_164);
    }
    else {
      fVar77 = (float)local_e0[0];
      fVar53 = SUB84(local_e0[0],4);
      fVar67 = (float)local_e0[1];
      fVar78 = SUB84(local_e0[1],4);
      if (local_164 == 2) {
        auVar57._8_8_ = local_e0[1];
        auVar57._0_8_ = local_e0[0];
        auVar10._4_4_ = fStack_cc;
        auVar10._0_4_ = local_d0;
        auVar10._8_4_ = fStack_c8;
        auVar10._12_4_ = fStack_c4;
        auVar84._0_4_ = local_d0 - fVar77;
        auVar84._4_4_ = fStack_cc - fVar53;
        auVar84._8_4_ = fStack_c8 - fVar67;
        auVar84._12_4_ = fStack_c4 - fVar78;
        fVar52 = local_c0[0]._0_4_;
        auVar74._0_4_ = fVar52 - fVar77;
        fVar54 = local_c0[0]._4_4_;
        auVar74._4_4_ = fVar54 - fVar53;
        fVar21 = local_c0[0]._8_4_;
        auVar74._8_4_ = fVar21 - fVar67;
        auVar74._12_4_ = local_c0[0]._12_4_ - fVar78;
        auVar83 = NEON_ext(auVar84,auVar84,8,1);
        auVar96 = NEON_ext(auVar74,auVar74,8,1);
        fVar100 = auVar84._0_4_ * auVar74._4_4_ - auVar84._4_4_ * auVar74._0_4_;
        uVar56 = NEON_ext(CONCAT44(auVar84._4_4_ * auVar74._8_4_ - auVar84._8_4_ * auVar74._4_4_,
                                   fVar100),
                          CONCAT44(auVar83._4_4_ * auVar74._4_4_ - auVar84._4_4_ * auVar96._4_4_,
                                   auVar83._0_4_ * auVar74._0_4_ - auVar84._0_4_ * auVar96._0_4_),4,
                          1);
        local_164 = 3;
        fVar24 = (float)uVar56;
        auVar90._0_4_ = fVar24 * fVar24;
        fVar87 = (float)((ulong)uVar56 >> 0x20);
        auVar90._4_4_ = fVar87 * fVar87;
        auVar90._8_4_ = fVar100 * fVar100;
        auVar90._12_4_ = 0;
        auVar83 = NEON_ext(auVar90,auVar90,8,1);
        fVar44 = auVar83._0_4_ + auVar83._4_4_;
        fVar55 = auVar90._0_4_ + auVar90._4_4_ + fVar44;
        uVar56 = CONCAT44(auVar90._0_4_ + auVar90._4_4_ + fVar44,fVar55);
        if (1.1920929e-07 < fVar55) {
          if (fVar55 != 0.0) {
            auVar83 = NEON_ext(auVar10,auVar10,8,1);
            auVar96 = NEON_ext(local_c0[0],local_c0[0],8,1);
            fVar115 = local_d0 * fVar54 - fStack_cc * fVar52;
            auVar95 = NEON_ext(auVar57,auVar57,8,1);
            uVar89 = NEON_ext(CONCAT44(fStack_cc * fVar21 - fStack_c8 * fVar54,fVar115),
                              CONCAT44(auVar83._4_4_ * fVar54 - fStack_cc * auVar96._4_4_,
                                       auVar83._0_4_ * fVar52 - local_d0 * auVar96._0_4_),4,1);
            fVar55 = fVar53 * fVar52 - fVar77 * fVar54;
            uVar117 = NEON_ext(CONCAT44(fVar67 * fVar54 - fVar53 * fVar21,fVar55),
                               CONCAT44(fVar53 * auVar96._4_4_ - auVar95._4_4_ * fVar54,
                                        fVar77 * auVar96._0_4_ - auVar95._0_4_ * fVar52),4,1);
            fVar44 = fVar77 * fStack_cc - fVar53 * local_d0;
            uVar81 = NEON_ext(CONCAT44(fVar53 * fStack_c8 - fVar67 * fStack_cc,fVar44),
                              CONCAT44(auVar95._4_4_ * fStack_cc - fVar53 * auVar83._4_4_,
                                       auVar95._0_4_ * local_d0 - fVar77 * auVar83._0_4_),4,1);
            auVar107._0_4_ = (float)uVar89 * fVar24;
            auVar107._4_4_ = (float)((ulong)uVar89 >> 0x20) * fVar87;
            auVar107._8_4_ = fVar115 * fVar100;
            auVar107._12_4_ = 0;
            auVar83 = NEON_ext(auVar107,auVar107,8,1);
            auVar110._0_4_ = (float)uVar117 * fVar24;
            auVar110._4_4_ = (float)((ulong)uVar117 >> 0x20) * fVar87;
            auVar110._8_4_ = fVar55 * fVar100;
            auVar110._12_4_ = 0;
            auVar96 = NEON_ext(auVar110,auVar110,8,1);
            fVar55 = auVar107._0_4_ + auVar107._4_4_ + auVar83._0_4_ + auVar83._4_4_;
            auVar113._0_4_ = (float)uVar81 * fVar24;
            auVar113._4_4_ = (float)((ulong)uVar81 >> 0x20) * fVar87;
            auVar113._8_4_ = fVar44 * fVar100;
            auVar113._12_4_ = 0;
            fVar44 = auVar110._0_4_ + auVar110._4_4_ + auVar96._0_4_ + auVar96._4_4_;
            auVar83 = NEON_ext(auVar113,auVar113,8,1);
            fVar115 = auVar113._0_4_ + auVar113._4_4_ + auVar83._0_4_ + auVar83._4_4_;
            bVar11 = (0.0 <= fVar55 && 0.0 <= fVar44) && 0.0 <= fVar115;
            auVar114._0_4_ = -(uint)bVar11;
            auVar114._4_4_ = -(uint)bVar11;
            auVar114._8_4_ = -(uint)bVar11;
            auVar114._12_4_ = -(uint)bVar11;
            NEON_ext(auVar114,auVar114,8,1);
            if (CONCAT13((char)auVar114._12_4_,
                         CONCAT12((char)auVar114._8_4_,
                                  CONCAT11((char)auVar114._4_4_,(char)auVar114._0_4_))) == -1) {
              auVar33._0_4_ = fVar77 * fVar24;
              auVar33._4_4_ = fVar53 * fVar87;
              auVar33._8_4_ = fVar67 * fVar100;
              auVar33._12_4_ = fVar78 * 0.0;
              auVar57 = NEON_ext(auVar33,auVar33,8,1);
              uVar81 = NEON_frecpe(uVar56,4);
              uVar89 = NEON_frecps(uVar56,uVar81,4);
              fVar77 = (float)uVar81 * (float)uVar89;
              fVar53 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
              uVar81 = NEON_frecps(uVar56,CONCAT44(fVar53,fVar77),4);
              fVar77 = fVar77 * (float)uVar81;
              fVar53 = fVar53 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar56,CONCAT44(fVar53,fVar77),4);
              fVar77 = fVar77 * (float)uVar81;
              fVar53 = fVar53 * (float)((ulong)uVar81 >> 0x20);
              uVar81 = NEON_frecps(uVar56,CONCAT44(fVar53,fVar77),4);
              fVar77 = fVar77 * (float)uVar81;
              uVar56 = NEON_frecps(uVar56,CONCAT44(fVar53 * (float)((ulong)uVar81 >> 0x20),fVar77),4
                                  );
              fVar77 = (auVar33._0_4_ + auVar33._4_4_ + auVar57._0_4_ + auVar57._4_4_) *
                       fVar77 * (float)uVar56;
              auVar57._0_4_ = fVar24 * fVar77;
              auVar57._4_4_ = fVar87 * fVar77;
              auVar57._8_4_ = fVar100 * fVar77;
              auVar57._12_4_ = 0.0;
            }
            else {
              auVar97._0_4_ = -fVar77 * auVar84._0_4_;
              auVar97._4_4_ = -fVar53 * auVar84._4_4_;
              auVar97._8_4_ = -fVar67 * auVar84._8_4_;
              auVar97._12_4_ = auVar84._12_4_ * 0.0;
              auVar83 = NEON_ext(auVar97,auVar97,8,1);
              fVar100 = auVar83._0_4_ + auVar83._4_4_;
              auVar103._0_4_ = -local_d0 * auVar84._0_4_;
              auVar103._4_4_ = -fStack_cc * auVar84._4_4_;
              auVar103._8_4_ = -fStack_c8 * auVar84._8_4_;
              auVar103._12_4_ = auVar84._12_4_ * 0.0;
              auVar83 = NEON_ext(auVar103,auVar103,8,1);
              fVar25 = auVar83._0_4_ + auVar83._4_4_;
              fVar24 = auVar97._0_4_ + auVar97._4_4_ + fVar100;
              fVar87 = auVar103._0_4_ + auVar103._4_4_ + fVar25;
              fVar25 = auVar103._0_4_ + auVar103._4_4_ + fVar25;
              bVar11 = (0.0 <= fVar24 && fVar115 <= 0.0) && fVar87 <= 0.0;
              auVar111._0_4_ = -(uint)bVar11;
              auVar111._4_4_ = -(uint)bVar11;
              auVar111._8_4_ = -(uint)bVar11;
              auVar111._12_4_ = -(uint)bVar11;
              NEON_ext(auVar111,auVar111,8,1);
              if (CONCAT13((char)auVar111._12_4_,
                           CONCAT12((char)auVar111._8_4_,
                                    CONCAT11((char)auVar111._4_4_,(char)auVar111._0_4_))) == -1) {
                uVar56 = CONCAT44((auVar97._0_4_ + auVar97._4_4_ + fVar100) - fVar25,fVar24 - fVar87
                                 );
                uVar81 = NEON_frecpe(uVar56,4);
                uVar89 = NEON_frecps(uVar56,uVar81,4);
                fVar55 = (float)uVar81 * (float)uVar89;
                fVar44 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                uVar81 = NEON_frecps(uVar56,CONCAT44(fVar44,fVar55),4);
                fVar55 = fVar55 * (float)uVar81;
                fVar44 = fVar44 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar56,CONCAT44(fVar44,fVar55),4);
                fVar55 = fVar55 * (float)uVar81;
                fVar44 = fVar44 * (float)((ulong)uVar81 >> 0x20);
                uVar81 = NEON_frecps(uVar56,CONCAT44(fVar44,fVar55),4);
                fVar55 = fVar55 * (float)uVar81;
                uVar56 = NEON_frecps(uVar56,CONCAT44(fVar44 * (float)((ulong)uVar81 >> 0x20),fVar55)
                                     ,4);
                fVar24 = fVar24 * (float)(-(uint)(1.1920929e-07 < ABS(fVar24 - fVar87)) &
                                         (uint)(fVar55 * (float)uVar56));
                pfVar15 = local_160;
                pfVar17 = local_120;
                auVar34._0_8_ =
                     CONCAT44(fVar53 + auVar84._4_4_ * fVar24,fVar77 + auVar84._0_4_ * fVar24);
                auVar34._8_4_ = fVar67 + auVar84._8_4_ * fVar24;
                auVar34._12_4_ = fVar78 + auVar84._12_4_ * fVar24;
                auVar57 = NEON_ext(auVar34,auVar34,8,1);
                pauVar18 = (undefined1 (*) [16])local_e0;
                auVar57._8_4_ = (float)auVar57._0_4_;
                auVar57._0_8_ = auVar34._0_8_;
                auVar57._12_4_ = 0.0;
                local_164 = 2;
LAB_0024b7b4:
                lVar13 = 1;
                pauVar19 = (undefined1 (*) [16])&local_d0;
              }
              else {
                auVar112._0_4_ = -local_d0 * auVar74._0_4_;
                auVar112._4_4_ = -fStack_cc * auVar74._4_4_;
                auVar112._8_4_ = -fStack_c8 * auVar74._8_4_;
                auVar112._12_4_ = auVar74._12_4_ * 0.0;
                auVar83 = NEON_ext(auVar112,auVar112,8,1);
                fVar26 = auVar83._0_4_ + auVar83._4_4_;
                auVar85._0_4_ = auVar84._0_4_ * -fVar52;
                auVar85._4_4_ = auVar84._4_4_ * -fVar54;
                auVar85._8_4_ = auVar84._8_4_ * -fVar21;
                auVar85._12_4_ = auVar84._12_4_ * 0.0;
                auVar116._0_4_ = auVar74._0_4_ * -fVar52;
                auVar116._4_4_ = auVar74._4_4_ * -fVar54;
                auVar116._8_4_ = auVar74._8_4_ * -fVar21;
                auVar116._12_4_ = auVar74._12_4_ * 0.0;
                fVar100 = auVar112._0_4_ + auVar112._4_4_ + fVar26;
                auVar83 = NEON_ext(auVar85,auVar85,8,1);
                fVar27 = auVar83._0_4_ + auVar83._4_4_;
                fVar115 = auVar85._0_4_ + auVar85._4_4_ + fVar27;
                auVar83 = NEON_ext(auVar116,auVar116,8,1);
                fVar28 = auVar83._0_4_ + auVar83._4_4_;
                fVar22 = auVar116._0_4_ + auVar116._4_4_ + fVar28;
                fVar28 = auVar116._0_4_ + auVar116._4_4_ + fVar28;
                bVar11 = (fVar87 <= fVar100 && fVar55 <= 0.0) && fVar22 <= fVar115;
                auVar108._0_4_ = -(uint)bVar11;
                auVar108._4_4_ = -(uint)bVar11;
                auVar108._8_4_ = -(uint)bVar11;
                auVar108._12_4_ = -(uint)bVar11;
                NEON_ext(auVar108,auVar108,8,1);
                if (CONCAT13((char)auVar108._12_4_,
                             CONCAT12((char)auVar108._8_4_,
                                      CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) == -1) {
                  fVar77 = (fVar100 - fVar87) + (fVar115 - fVar22);
                  uVar56 = CONCAT44(((auVar112._0_4_ + auVar112._4_4_ + fVar26) - fVar25) +
                                    ((auVar85._0_4_ + auVar85._4_4_ + fVar27) - fVar28),fVar77);
                  uVar81 = NEON_frecpe(uVar56,4);
                  uVar89 = NEON_frecps(uVar56,uVar81,4);
                  fVar53 = (float)uVar81 * (float)uVar89;
                  fVar67 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar67,fVar53),4);
                  fVar53 = fVar53 * (float)uVar81;
                  fVar67 = fVar67 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar67,fVar53),4);
                  fVar53 = fVar53 * (float)uVar81;
                  fVar67 = fVar67 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar67,fVar53),4);
                  fVar53 = fVar53 * (float)uVar81;
                  uVar56 = NEON_frecps(uVar56,CONCAT44(fVar67 * (float)((ulong)uVar81 >> 0x20),
                                                       fVar53),4);
                  fVar77 = (fVar100 - fVar87) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar77)) &
                                  (uint)(fVar53 * (float)uVar56));
                  auVar35._0_8_ =
                       CONCAT44(fStack_cc + (fVar54 - fStack_cc) * fVar77,
                                local_d0 + (fVar52 - local_d0) * fVar77);
                  auVar35._8_4_ = fStack_c8 + (fVar21 - fStack_c8) * fVar77;
                  auVar35._12_4_ = fStack_c4 + (local_c0[0]._12_4_ - fStack_c4) * fVar77;
                  auVar57 = NEON_ext(auVar35,auVar35,8,1);
                  auVar4._8_4_ = auVar57._0_4_;
                  auVar4._0_8_ = auVar35._0_8_;
                  pfVar15 = (float *)&uStack_150;
                  pfVar17 = (float *)&uStack_110;
                  pauVar18 = (undefined1 (*) [16])&local_d0;
                }
                else {
                  auVar109._0_4_ = -fVar77 * auVar74._0_4_;
                  auVar109._4_4_ = -fVar53 * auVar74._4_4_;
                  auVar109._8_4_ = -fVar67 * auVar74._8_4_;
                  auVar109._12_4_ = auVar74._12_4_ * 0.0;
                  auVar83 = NEON_ext(auVar109,auVar109,8,1);
                  fVar52 = auVar83._0_4_ + auVar83._4_4_;
                  fVar55 = auVar109._0_4_ + auVar109._4_4_ + fVar52;
                  bVar11 = (fVar44 <= 0.0 && 0.0 <= fVar55) && fVar22 <= 0.0;
                  auVar106._0_4_ = -(uint)bVar11;
                  auVar106._4_4_ = -(uint)bVar11;
                  auVar106._8_4_ = -(uint)bVar11;
                  auVar106._12_4_ = -(uint)bVar11;
                  NEON_ext(auVar106,auVar106,8,1);
                  if (CONCAT13((char)auVar106._12_4_,
                               CONCAT12((char)auVar106._8_4_,
                                        CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) != -1)
                  {
                    bVar11 = fVar24 <= 0.0 && fVar55 <= 0.0;
                    auVar75._0_4_ = -(uint)bVar11;
                    auVar75._4_4_ = -(uint)bVar11;
                    auVar75._8_4_ = -(uint)bVar11;
                    auVar75._12_4_ = -(uint)bVar11;
                    NEON_ext(auVar75,auVar75,8,1);
                    if (CONCAT13((char)auVar75._12_4_,
                                 CONCAT12((char)auVar75._8_4_,
                                          CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_))) == -1)
                    {
                      pfVar15 = local_160;
                      pfVar17 = local_120;
                      pauVar18 = (undefined1 (*) [16])local_e0;
                    }
                    else {
                      bVar11 = 0.0 <= fVar87 && fVar100 <= fVar87;
                      auVar31._0_4_ = -(uint)bVar11;
                      auVar31._4_4_ = -(uint)bVar11;
                      auVar31._8_4_ = -(uint)bVar11;
                      auVar31._12_4_ = -(uint)bVar11;
                      NEON_ext(auVar31,auVar31,8,1);
                      iVar43 = CONCAT13((char)auVar31._12_4_,
                                        CONCAT12((char)auVar31._8_4_,
                                                 CONCAT11((char)auVar31._4_4_,(char)auVar31._0_4_)))
                      ;
                      iVar79 = -(uint)(iVar43 == -1);
                      auVar32._4_4_ = iVar79;
                      auVar32._0_4_ = iVar79;
                      auVar32._8_4_ = iVar79;
                      auVar32._12_4_ = iVar79;
                      auVar57 = local_c0[0] ^ (local_c0[0] ^ auVar10) & auVar32;
                      lVar13 = 0x10;
                      if (iVar43 != -1) {
                        lVar13 = 0x20;
                      }
                      pauVar18 = (undefined1 (*) [16])((long)local_e0 + lVar13);
                      pfVar17 = (float *)((long)local_e0 + lVar13 + -0x40);
                      pfVar15 = (float *)((long)local_e0 + lVar13 + -0x80);
                    }
                    local_164 = 1;
                    goto LAB_0024b7b4;
                  }
                  uVar56 = CONCAT44((auVar109._0_4_ + auVar109._4_4_ + fVar52) - fVar28,
                                    fVar55 - fVar22);
                  uVar81 = NEON_frecpe(uVar56,4);
                  uVar89 = NEON_frecps(uVar56,uVar81,4);
                  fVar44 = (float)uVar81 * (float)uVar89;
                  fVar52 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  fVar52 = fVar52 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  fVar52 = fVar52 * (float)((ulong)uVar81 >> 0x20);
                  uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
                  fVar44 = fVar44 * (float)uVar81;
                  uVar56 = NEON_frecps(uVar56,CONCAT44(fVar52 * (float)((ulong)uVar81 >> 0x20),
                                                       fVar44),4);
                  fVar55 = fVar55 * (float)(-(uint)(1.1920929e-07 < ABS(fVar55 - fVar22)) &
                                           (uint)(fVar44 * (float)uVar56));
                  auVar36._0_8_ =
                       CONCAT44(fVar53 + auVar74._4_4_ * fVar55,fVar77 + auVar74._0_4_ * fVar55);
                  auVar36._8_4_ = fVar67 + auVar74._8_4_ * fVar55;
                  auVar36._12_4_ = fVar78 + auVar74._12_4_ * fVar55;
                  auVar57 = NEON_ext(auVar36,auVar36,8,1);
                  auVar4._8_4_ = auVar57._0_4_;
                  auVar4._0_8_ = auVar36._0_8_;
                  pfVar15 = local_160;
                  pfVar17 = local_120;
                  pauVar18 = (undefined1 (*) [16])local_e0;
                }
                auVar57._12_4_ = 0.0;
                auVar57._0_12_ = auVar4;
                local_164 = 2;
                lVar13 = 2;
                pauVar19 = local_c0;
              }
              local_e0[1] = *(undefined8 *)((long)*pauVar18 + 8);
              local_e0[0] = *(undefined8 *)*pauVar18;
              fStack_c8 = (float)*(undefined8 *)((long)*pauVar19 + 8);
              fStack_c4 = (float)((ulong)*(undefined8 *)((long)*pauVar19 + 8) >> 0x20);
              local_d0 = (float)*(undefined8 *)*pauVar19;
              fStack_cc = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
              local_120[2] = (float)*(undefined8 *)(pfVar17 + 2);
              local_120[3] = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
              local_120[0] = (float)*(undefined8 *)pfVar17;
              local_120[1] = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
              uStack_108 = local_e0[lVar13 * 2 + -7];
              uStack_110 = local_e0[lVar13 * 2 + -8];
              local_160[2] = (float)*(undefined8 *)(pfVar15 + 2);
              local_160[3] = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
              local_160[0] = (float)*(undefined8 *)pfVar15;
              local_160[1] = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
              uStack_148 = local_e0[lVar13 * 2 + -0xf];
              uStack_150 = local_e0[lVar13 * 2 + -0x10];
            }
          }
        }
        else {
          auVar45._0_4_ = auVar84._0_4_ * auVar84._0_4_;
          auVar45._4_4_ = auVar84._4_4_ * auVar84._4_4_;
          auVar45._8_4_ = auVar84._8_4_ * auVar84._8_4_;
          auVar45._12_4_ = auVar84._12_4_ * auVar84._12_4_;
          auVar57 = NEON_ext(auVar45,auVar45,8,1);
          fVar44 = auVar57._0_4_ + auVar57._4_4_;
          fVar55 = auVar45._0_4_ + auVar45._4_4_ + fVar44;
          uVar56 = CONCAT44(auVar45._0_4_ + auVar45._4_4_ + fVar44,fVar55);
          bVar11 = fVar55 <= 1.1920929e-07;
          auVar60._0_4_ = -(uint)bVar11;
          auVar60._4_4_ = -(uint)bVar11;
          auVar60._8_4_ = -(uint)bVar11;
          auVar60._12_4_ = -(uint)bVar11;
          NEON_ext(auVar60,auVar60,8,1);
          local_164 = 2;
          if (CONCAT13((char)auVar60._12_4_,
                       CONCAT12((char)auVar60._8_4_,
                                CONCAT11((char)auVar60._4_4_,(char)auVar60._0_4_))) != -1) {
            auVar61._0_4_ = -fVar77 * auVar84._0_4_;
            auVar61._4_4_ = -fVar53 * auVar84._4_4_;
            auVar61._8_4_ = -fVar67 * auVar84._8_4_;
            auVar61._12_4_ = auVar84._12_4_ * 0.0;
            auVar57 = NEON_ext(auVar61,auVar61,8,1);
            fVar55 = auVar57._0_4_ + auVar57._4_4_;
            uVar81 = NEON_frecpe(uVar56,4);
            uVar89 = NEON_frecps(uVar56,uVar81,4);
            fVar44 = (float)uVar81 * (float)uVar89;
            fVar52 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
            uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar52 = fVar52 * (float)((ulong)uVar81 >> 0x20);
            uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar52 = fVar52 * (float)((ulong)uVar81 >> 0x20);
            uVar81 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
            fVar44 = fVar44 * (float)uVar81;
            fVar52 = fVar52 * (float)((ulong)uVar81 >> 0x20);
            uVar56 = NEON_frecps(uVar56,CONCAT44(fVar52,fVar44),4);
            uVar81 = NEON_fmov(0x3f800000,4);
            uVar56 = NEON_fmin(CONCAT44((auVar61._0_4_ + auVar61._4_4_ + fVar55) *
                                        fVar52 * (float)((ulong)uVar56 >> 0x20),
                                        (auVar61._0_4_ + auVar61._4_4_ + fVar55) *
                                        fVar44 * (float)uVar56),uVar81,4);
            uVar56 = NEON_fmax(uVar56,0,4);
            fVar55 = (float)uVar56;
            fVar44 = auVar84._0_4_ * fVar55;
            fVar52 = auVar84._4_4_ * fVar55;
            fVar54 = auVar84._8_4_ * fVar55;
            fVar55 = auVar84._12_4_ * fVar55;
            goto LAB_0024b33c;
          }
LAB_0024b350:
          auVar57._8_8_ = local_e0[1];
          auVar57._0_8_ = local_e0[0];
          local_164 = 1;
        }
      }
      else {
        bVar11 = local_164 == 1;
        local_164 = uVar29;
        if (bVar11) {
          fVar44 = local_d0 - fVar77;
          fVar52 = fStack_cc - fVar53;
          fVar54 = fStack_c8 - fVar67;
          fVar55 = fStack_c4 - fVar78;
          auVar59._0_4_ = fVar44 * fVar44;
          auVar59._4_4_ = fVar52 * fVar52;
          auVar59._8_4_ = fVar54 * fVar54;
          auVar59._12_4_ = fVar55 * fVar55;
          auVar57 = NEON_ext(auVar59,auVar59,8,1);
          fVar24 = auVar57._0_4_ + auVar57._4_4_;
          fVar21 = auVar59._0_4_ + auVar59._4_4_ + fVar24;
          uVar56 = CONCAT44(auVar59._0_4_ + auVar59._4_4_ + fVar24,fVar21);
          bVar11 = fVar21 <= 1.1920929e-07;
          auVar72._0_4_ = -(uint)bVar11;
          auVar72._4_4_ = -(uint)bVar11;
          auVar72._8_4_ = -(uint)bVar11;
          auVar72._12_4_ = -(uint)bVar11;
          NEON_ext(auVar72,auVar72,8,1);
          if (CONCAT13((char)auVar72._12_4_,
                       CONCAT12((char)auVar72._8_4_,
                                CONCAT11((char)auVar72._4_4_,(char)auVar72._0_4_))) == -1)
          goto LAB_0024b350;
          auVar73._0_4_ = -fVar77 * fVar44;
          auVar73._4_4_ = -fVar53 * fVar52;
          auVar73._8_4_ = -fVar67 * fVar54;
          auVar73._12_4_ = fVar55 * 0.0;
          auVar57 = NEON_ext(auVar73,auVar73,8,1);
          fVar21 = auVar57._0_4_ + auVar57._4_4_;
          uVar81 = NEON_frecpe(uVar56,4);
          uVar89 = NEON_frecps(uVar56,uVar81,4);
          fVar24 = (float)uVar81 * (float)uVar89;
          fVar87 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
          uVar81 = NEON_frecps(uVar56,CONCAT44(fVar87,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar87 = fVar87 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar56,CONCAT44(fVar87,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar87 = fVar87 * (float)((ulong)uVar81 >> 0x20);
          uVar81 = NEON_frecps(uVar56,CONCAT44(fVar87,fVar24),4);
          fVar24 = fVar24 * (float)uVar81;
          fVar87 = fVar87 * (float)((ulong)uVar81 >> 0x20);
          uVar56 = NEON_frecps(uVar56,CONCAT44(fVar87,fVar24),4);
          uVar81 = NEON_fmov(0x3f800000,4);
          uVar56 = NEON_fmin(CONCAT44((auVar73._0_4_ + auVar73._4_4_ + fVar21) *
                                      fVar87 * (float)((ulong)uVar56 >> 0x20),
                                      (auVar73._0_4_ + auVar73._4_4_ + fVar21) *
                                      fVar24 * (float)uVar56),uVar81,4);
          uVar56 = NEON_fmax(uVar56,0,4);
          fVar21 = (float)uVar56;
          fVar44 = fVar44 * fVar21;
          fVar52 = fVar52 * fVar21;
          fVar54 = fVar54 * fVar21;
          fVar55 = fVar55 * fVar21;
LAB_0024b33c:
          auVar30._0_8_ = CONCAT44(fVar53 + fVar52,fVar77 + fVar44);
          auVar30._8_4_ = fVar67 + fVar54;
          auVar30._12_4_ = fVar78 + fVar55;
          auVar57 = NEON_ext(auVar30,auVar30,8,1);
          auVar57._8_4_ = (float)auVar57._0_4_;
          auVar57._0_8_ = auVar30._0_8_;
          auVar57._12_4_ = 0.0;
        }
      }
    }
    local_180 = auVar57._0_4_;
    auVar46._0_4_ = local_180 * local_180;
    fStack_17c = auVar57._4_4_;
    auVar46._4_4_ = fStack_17c * fStack_17c;
    fStack_178 = auVar57._8_4_;
    auVar46._8_4_ = fStack_178 * fStack_178;
    fStack_174 = auVar57._12_4_;
    auVar46._12_4_ = fStack_174 * fStack_174;
    auVar83 = NEON_ext(auVar46,auVar46,8,1);
    fVar53 = auVar83._0_4_ + auVar83._4_4_;
    fVar77 = auVar46._0_4_ + auVar46._4_4_ + fVar53;
    fVar53 = auVar46._0_4_ + auVar46._4_4_ + fVar53;
    uVar80 = CONCAT44(fVar53,fVar77);
    uVar56 = NEON_frsqrte(uVar80,4);
    fVar67 = (float)uVar56;
    fVar78 = (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar67 * fVar67),uVar80,4);
    fVar67 = fVar67 * (float)uVar56;
    fVar78 = fVar78 * (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar67 * fVar67),uVar80,4);
    fVar67 = fVar67 * (float)uVar56;
    fVar78 = fVar78 * (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar67 * fVar67),uVar80,4);
    fVar67 = fVar67 * (float)uVar56;
    fVar78 = fVar78 * (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frsqrts(CONCAT44(fVar78 * fVar78,fVar67 * fVar67),uVar80,4);
    uVar14 = CONCAT44(fVar53 * fVar78 * (float)((ulong)uVar56 >> 0x20),
                      fVar77 * fVar67 * (float)uVar56);
    uVar14 = uVar14 ^ (uVar14 ^ uVar80) & CONCAT44(-(uint)(fVar77 == 0.0),-(uint)(fVar77 == 0.0));
    bVar11 = (float)uVar14 < fVar42;
    bVar5 = (float)uVar68 * 0.1 < (float)uVar14 && bVar11;
    auVar76._0_4_ = -(uint)bVar5;
    auVar76._4_4_ = -(uint)bVar5;
    auVar76._8_4_ = -(uint)bVar5;
    auVar76._12_4_ = -(uint)bVar5;
    NEON_ext(auVar76,auVar76,8,1);
    if (CONCAT13((char)auVar76._12_4_,
                 CONCAT12((char)auVar76._8_4_,CONCAT11((char)auVar76._4_4_,(char)auVar76._0_4_))) !=
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
      auVar98._0_8_ = CONCAT44(-fVar66,-fVar23);
      auVar98._8_4_ = -fVar20;
      uVar12 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x10);
      auVar98._12_4_ = 0;
      uVar3 = *(undefined4 *)(*(long *)(param_2 + 8) + 0x10);
      uVar68 = NEON_fmin(CONCAT44(uVar12,uVar12),CONCAT44(uVar3,uVar3),4);
      auVar86._0_4_ = (float)uVar68 * 0.2;
      auVar86._4_4_ = (float)((ulong)uVar68 >> 0x20) * 0.2;
      auVar86._8_8_ = 0;
      auVar91._0_4_ = (float)-(uint)(0.0 < fVar104);
      auVar91._4_4_ = (float)-(uint)(0.0 < fVar105);
      auVar91._8_8_ = 0;
      fVar20 = (float)((uint)auVar86._0_4_ ^
                      ((uint)auVar86._0_4_ ^ (uint)fVar104) & (uint)auVar91._0_4_);
      if (local_164 == 3) {
        FUN_00231940(&local_190,local_e0,(undefined1 (*) [16])&local_d0,local_c0,local_98,local_a0);
        auVar98._12_4_ = 0;
        auVar91._0_4_ =
             local_120[0] +
             ((float)uStack_110 - local_120[0]) * local_98[0] +
             (local_100 - local_120[0]) * local_a0[0];
        auVar91._4_4_ =
             local_120[1] +
             (uStack_110._4_4_ - local_120[1]) * local_98[0] +
             (fStack_fc - local_120[1]) * local_a0[0];
        auVar91._8_4_ =
             local_120[2] +
             ((float)uStack_108 - local_120[2]) * local_98[0] +
             (fStack_f8 - local_120[2]) * local_a0[0];
        auVar91._12_4_ = local_120[3] + 0.0;
        auVar86._0_4_ =
             local_160[0] +
             ((float)uStack_150 - local_160[0]) * local_98[0] +
             (local_140 - local_160[0]) * local_a0[0];
        auVar86._4_4_ =
             local_160[1] +
             (uStack_150._4_4_ - local_160[1]) * local_98[0] +
             (fStack_13c - local_160[1]) * local_a0[0];
        auVar86._8_4_ =
             local_160[2] +
             ((float)uStack_148 - local_160[2]) * local_98[0] +
             (fStack_138 - local_160[2]) * local_a0[0];
        auVar86._12_4_ = local_160[3] + 0.0;
      }
      else if (local_164 == 2) {
        FUN_002318c0(&local_190,local_e0,(undefined1 (*) [16])&local_d0,local_98);
        auVar98._12_4_ = 0;
        auVar48._0_8_ =
             CONCAT44(local_120[1] + (uStack_110._4_4_ - local_120[1]) * local_98[0],
                      local_120[0] + ((float)uStack_110 - local_120[0]) * local_98[0]);
        auVar48._8_4_ = local_120[2] + ((float)uStack_108 - local_120[2]) * local_98[0];
        auVar48._12_4_ = local_120[3] + (uStack_108._4_4_ - local_120[3]) * local_98[0];
        auVar57 = NEON_ext(auVar48,auVar48,8,1);
        auVar91._8_4_ = (float)auVar57._0_4_;
        auVar91._0_8_ = auVar48._0_8_;
        auVar91._12_4_ = 0.0;
        auVar41._0_8_ =
             CONCAT44(local_160[1] + (uStack_150._4_4_ - local_160[1]) * local_98[0],
                      local_160[0] + ((float)uStack_150 - local_160[0]) * local_98[0]);
        auVar41._8_4_ = local_160[2] + ((float)uStack_148 - local_160[2]) * local_98[0];
        auVar41._12_4_ = local_160[3] + (uStack_148._4_4_ - local_160[3]) * local_98[0];
        auVar57 = NEON_ext(auVar41,auVar41,8,1);
        auVar86._8_4_ = (float)auVar57._0_4_;
        auVar86._0_8_ = auVar41._0_8_;
        auVar86._12_4_ = 0.0;
      }
      else if (local_164 == 1) {
        auVar91._4_4_ = local_120[1];
        auVar91._0_4_ = local_120[0];
        auVar91._8_4_ = local_120[2];
        auVar91._12_4_ = local_120[3];
        auVar86._4_4_ = local_160[1];
        auVar86._0_4_ = local_160[0];
        auVar86._8_4_ = local_160[2];
        auVar86._12_4_ = local_160[3];
      }
      fVar23 = *(float *)(*(long *)(param_1 + 8) + 0x10);
      auVar7._4_4_ = iVar1;
      auVar7._0_4_ = iVar1;
      auVar7._8_4_ = iVar1;
      auVar7._12_4_ = iVar1;
      auVar9._4_4_ = iVar2;
      auVar9._0_4_ = iVar2;
      auVar9._8_4_ = iVar2;
      auVar9._12_4_ = iVar2;
      auVar64._0_8_ =
           CONCAT44(auVar91._4_4_ + auVar98._4_4_ * fVar23,auVar91._0_4_ + auVar98._0_4_ * fVar23);
      auVar64._8_4_ = auVar91._8_4_ + auVar98._8_4_ * fVar23;
      auVar64._12_4_ = auVar91._12_4_ + auVar98._12_4_ * fVar23;
      auVar57 = NEON_ext(auVar64,auVar64,8,1);
      auVar65._8_4_ = auVar57._0_4_;
      auVar65._0_8_ = auVar64._0_8_;
      auVar65._12_4_ = 0;
      auVar91 = auVar91 ^ (auVar91 ^ auVar65) & auVar7;
      param_5[1] = auVar91._8_8_;
      *param_5 = auVar91._0_8_;
      fVar23 = *(float *)(*(long *)(param_2 + 8) + 0x10);
      auVar49._0_8_ =
           CONCAT44(auVar86._4_4_ - auVar98._4_4_ * fVar23,auVar86._0_4_ - auVar98._0_4_ * fVar23);
      auVar49._8_4_ = auVar86._8_4_ - auVar98._8_4_ * fVar23;
      auVar49._12_4_ = auVar86._12_4_ - auVar98._12_4_ * fVar23;
      auVar57 = NEON_ext(auVar49,auVar49,8,1);
      auVar50._8_4_ = auVar57._0_4_;
      auVar50._0_8_ = auVar49._0_8_;
      auVar50._12_4_ = 0;
      uVar68 = NEON_fmax(0,CONCAT44(fVar51 - fVar105,fVar42 - fVar104),4);
      auVar86 = auVar86 ^ (auVar86 ^ auVar50) & auVar9;
      param_6[1] = auVar86._8_8_;
      *param_6 = auVar86._0_8_;
      param_7[1] = auVar98._8_8_;
      *param_7 = auVar98._0_8_;
      *param_8 = uVar68;
      uVar12 = 1;
      if ((float)uVar68 <= fVar20) {
        uVar12 = 2;
      }
      return uVar12;
    }
    uVar56 = NEON_frecpe(uVar14,4);
    uVar81 = NEON_frecps(uVar14,uVar56,4);
    fVar20 = (float)uVar56 * (float)uVar81;
    fVar23 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
    uVar56 = NEON_frecps(uVar14,CONCAT44(fVar23,fVar20),4);
    fVar20 = fVar20 * (float)uVar56;
    fVar23 = fVar23 * (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frecps(uVar14,CONCAT44(fVar23,fVar20),4);
    fVar20 = fVar20 * (float)uVar56;
    fVar23 = fVar23 * (float)((ulong)uVar56 >> 0x20);
    uVar56 = NEON_frecps(uVar14,CONCAT44(fVar23,fVar20),4);
    fVar20 = fVar20 * (float)uVar56;
    uVar56 = NEON_frecps(uVar14,CONCAT44(fVar23 * (float)((ulong)uVar56 >> 0x20),fVar20),4);
    fVar20 = fVar20 * (float)uVar56;
    lVar16 = *(long *)(param_1 + 8);
    fVar23 = local_180 * fVar20;
    fVar66 = fStack_17c * fVar20;
    fVar20 = fStack_178 * fVar20;
    lVar13 = *(long *)(param_2 + 8);
  } while( true );
}


