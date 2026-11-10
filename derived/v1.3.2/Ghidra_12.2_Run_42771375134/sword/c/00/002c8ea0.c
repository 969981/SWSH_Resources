/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002c8ea0; name: FUN_002c8ea0
 */


/* WARNING: Removing unreachable block (ram,0x002ca31c) */
/* WARNING: Removing unreachable block (ram,0x002c9954) */
/* WARNING: Removing unreachable block (ram,0x002ca39c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002c8ea0(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            byte *param_9,byte *param_10,byte *param_11,byte param_12)

{
  uint *puVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  ulong uVar15;
  float *pfVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  float *pfVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  ushort uVar25;
  float fVar24;
  ushort uVar26;
  float fVar27;
  ushort uVar32;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar33;
  undefined8 uVar34;
  uint uVar60;
  undefined1 auVar36 [16];
  undefined8 uVar35;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar59;
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar61;
  undefined8 uVar62;
  float fVar77;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  byte bVar92;
  byte bVar93;
  float fVar78;
  float fVar95;
  float fVar96;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  byte bVar94;
  undefined1 auVar91 [16];
  int iVar97;
  ulong uVar98;
  byte bVar110;
  byte bVar111;
  byte bVar112;
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
  float fVar113;
  undefined8 uVar114;
  float fVar120;
  float fVar121;
  float fVar123;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar122;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 uVar124;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined8 uVar125;
  undefined1 auVar128 [16];
  undefined1 auVar129 [12];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar134;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  ulong uVar146;
  float fVar147;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar165;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined8 uVar169;
  float fVar170;
  float fVar171;
  byte bVar172;
  byte bVar173;
  byte bVar174;
  byte bVar175;
  uint local_1a4;
  float local_1a0 [8];
  undefined8 local_180;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float local_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float local_100 [2];
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_e0 [2] [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0 [2];
  float local_a8 [2];
  
  lVar13 = *(long *)(param_2 + 8);
  lVar10 = *(long *)(param_1 + 8);
  fVar171 = *(float *)(lVar10 + 0x10);
  fVar170 = *(float *)(lVar13 + 0x10);
  uVar34 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),4);
  fVar147 = fVar171 + fVar170;
  uVar62 = *param_4;
  local_1a4 = 0;
  bVar138 = *param_11;
  uVar15 = (ulong)bVar138;
  fVar137 = (float)uVar34 * 0.1;
  if (bVar138 == 0) {
    auVar100 = *param_3;
    auVar83._0_4_ = auVar100._0_4_ * auVar100._0_4_;
    auVar83._4_4_ = auVar100._4_4_ * auVar100._4_4_;
    auVar83._8_4_ = auVar100._8_4_ * auVar100._8_4_;
    auVar83._12_4_ = auVar100._12_4_ * auVar100._12_4_;
    auVar127 = NEON_ext(auVar83,auVar83,8,1);
    auVar127._0_4_ = -(uint)(0.0 < auVar83._0_4_ + auVar83._4_4_ + auVar127._0_4_ + auVar127._4_4_);
    auVar168._8_8_ = _UNK_01d4ae58;
    auVar168._0_8_ = _DAT_01d4ae50;
    uVar146 = 0x7f7fffff7f7fffff;
    auVar127._4_4_ = auVar127._0_4_;
    auVar127._8_4_ = auVar127._0_4_;
    auVar127._12_4_ = auVar127._0_4_;
    auVar100 = auVar168 ^ (auVar168 ^ auVar100) & auVar127;
    fVar78 = auVar100._0_4_;
    auVar132._0_4_ = fVar78 * fVar78;
    fVar95 = auVar100._4_4_;
    auVar132._4_4_ = fVar95 * fVar95;
    fVar113 = auVar100._8_4_;
    auVar132._8_4_ = fVar113 * fVar113;
    auVar132._12_4_ = auVar100._12_4_ * auVar100._12_4_;
    auVar83 = NEON_ext(auVar132,auVar132,8,1);
    uStack_b8 = auVar100._8_8_;
    local_c0 = auVar100._0_8_;
    fVar96 = auVar83._0_4_ + auVar83._4_4_;
    fVar23 = auVar132._0_4_ + auVar132._4_4_ + fVar96;
    fVar96 = auVar132._0_4_ + auVar132._4_4_ + fVar96;
    uVar15 = CONCAT44(fVar96,fVar23);
    uVar34 = NEON_frsqrte(uVar15,4);
    fVar120 = (float)uVar34;
    fVar123 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar34;
    fVar123 = fVar123 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar34;
    fVar123 = fVar123 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar34;
    fVar123 = fVar123 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    uVar98 = CONCAT44(fVar96 * fVar123 * (float)((ulong)uVar34 >> 0x20),
                      fVar23 * fVar120 * (float)uVar34);
    uVar98 = uVar98 ^ (uVar98 ^ uVar15) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
    uVar34 = NEON_frecpe(uVar98,4);
    uVar35 = NEON_frecps(uVar98,uVar34,4);
    fVar23 = (float)uVar34 * (float)uVar35;
    fVar96 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
    uVar34 = NEON_frecps(uVar98,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar96 = fVar96 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar98,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar96 = fVar96 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar98,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    uVar34 = NEON_frecps(uVar98,CONCAT44(fVar96 * (float)((ulong)uVar34 >> 0x20),fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    auVar83 = ZEXT816(0);
    auVar129._0_4_ = fVar78 * fVar23;
    auVar129._4_4_ = fVar95 * fVar23;
    auVar129._8_4_ = fVar113 * fVar23;
    iVar61 = -1;
  }
  else {
    pfVar19 = *(float **)(param_1 + 0x10);
    pfVar20 = local_1a0 + 4;
    pfVar12 = local_1a0;
    pfVar14 = local_100;
    puVar21 = &local_180;
    pfVar16 = &local_140;
    pbVar8 = param_10;
    pbVar9 = param_9;
    uVar34 = uVar62;
    fVar23 = fVar170;
    fVar96 = fVar171;
    while( true ) {
      uVar15 = uVar15 - 1;
      bVar139 = *pbVar9;
      bVar140 = *pbVar8;
      *pfVar20 = (float)(uint)bVar139;
      *pfVar12 = (float)(uint)bVar140;
      auVar100 = *(undefined1 (*) [16])(pfVar19 + 0xc);
      fVar78 = *(float *)(lVar10 + 0x30) - fVar96;
      fVar95 = *(float *)(lVar10 + 0x34) - fVar96;
      fVar96 = *(float *)(lVar10 + 0x38) - fVar96;
      fVar113 = -fVar78;
      fVar120 = -fVar95;
      fVar123 = -fVar96;
      puVar1 = (uint *)(PTR_DAT_02711e70 + (ulong)bVar139 * 0x10);
      fVar113 = (float)((uint)fVar113 ^ ((uint)fVar113 ^ (uint)fVar78) & *puVar1);
      fVar120 = (float)((uint)fVar120 ^ ((uint)fVar120 ^ (uint)fVar95) & puVar1[1]);
      fVar123 = (float)((uint)fVar123 ^ ((uint)fVar123 ^ (uint)fVar96) & puVar1[2]);
      uVar124 = *(undefined8 *)(lVar10 + 0x40);
      fVar96 = auVar100._0_4_ + pfVar19[8] * fVar123 + *pfVar19 * fVar113 + pfVar19[4] * fVar120;
      fVar78 = auVar100._4_4_ + pfVar19[9] * fVar123 + pfVar19[1] * fVar113 + pfVar19[5] * fVar120;
      auVar79._0_8_ = CONCAT44(fVar78,fVar96);
      auVar79._8_4_ =
           auVar100._8_4_ + pfVar19[10] * fVar123 + pfVar19[2] * fVar113 + pfVar19[6] * fVar120;
      auVar79._12_4_ = auVar100._12_4_ + 0.0;
      auVar36._0_4_ = *(float *)(lVar13 + 0x30) - fVar23;
      auVar36._4_4_ = *(float *)(lVar13 + 0x34) - fVar23;
      auVar36._8_4_ = *(float *)(lVar13 + 0x38) - fVar23;
      auVar36._12_4_ = *(float *)(lVar13 + 0x3c) - 0.0;
      auVar99._0_4_ = -auVar36._0_4_;
      auVar99._4_4_ = -auVar36._4_4_;
      auVar99._8_4_ = -auVar36._8_4_;
      auVar99._12_4_ = 0;
      auVar99 = auVar99 ^ (auVar99 ^ auVar36) &
                          *(undefined1 (*) [16])(PTR_DAT_02711e70 + (ulong)bVar140 * 0x10);
      uVar35 = *(undefined8 *)(lVar13 + 0x40);
      *(long *)(pfVar16 + 2) = auVar79._8_8_;
      *(undefined8 *)pfVar16 = auVar79._0_8_;
      puVar21[1] = auVar99._8_8_;
      *puVar21 = auVar99._0_8_;
      uVar34 = NEON_fmax(uVar34,CONCAT44((float)((ulong)uVar62 >> 0x20) +
                                         (float)((ulong)uVar124 >> 0x20) +
                                         (float)((ulong)uVar35 >> 0x20),
                                         (float)uVar62 + (float)uVar124 + (float)uVar35),4);
      auVar100._0_8_ = CONCAT44(fVar78 - auVar99._4_4_,fVar96 - auVar99._0_4_);
      auVar100._8_4_ = auVar79._8_4_ - auVar99._8_4_;
      auVar100._12_4_ = auVar79._12_4_ - auVar99._12_4_;
      *(long *)(pfVar14 + 2) = auVar100._8_8_;
      *(undefined8 *)pfVar14 = auVar100._0_8_;
      if (uVar15 == 0) break;
      fVar96 = *(float *)(lVar10 + 0x10);
      fVar23 = *(float *)(lVar13 + 0x10);
      pbVar9 = pbVar9 + 1;
      pfVar20 = pfVar20 + 1;
      pbVar8 = pbVar8 + 1;
      pfVar12 = pfVar12 + 1;
      pfVar14 = pfVar14 + 4;
      puVar21 = puVar21 + 2;
      pfVar16 = pfVar16 + 4;
    }
    local_1a4 = (uint)bVar138;
    if (bVar138 == 4) {
      auVar100 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar23 = local_100[0];
      fVar96 = local_100[1];
      fVar78 = (float)uStack_f8;
      fVar95 = SUB84(uStack_f8,4);
      if (local_1a4 == 3) {
        auVar100._8_8_ = uStack_f8;
        auVar100._0_4_ = local_100[0];
        auVar100._4_4_ = local_100[1];
        auVar5._4_4_ = fStack_ec;
        auVar5._0_4_ = local_f0;
        auVar5._8_4_ = fStack_e8;
        auVar5._12_4_ = fStack_e4;
        auVar115._0_4_ = local_f0 - fVar23;
        auVar115._4_4_ = fStack_ec - fVar96;
        auVar115._8_4_ = fStack_e8 - fVar78;
        auVar115._12_4_ = fStack_e4 - fVar95;
        fVar123 = local_e0[0]._0_4_;
        auVar103._0_4_ = fVar123 - fVar23;
        fVar77 = local_e0[0]._4_4_;
        auVar103._4_4_ = fVar77 - fVar96;
        fVar22 = local_e0[0]._8_4_;
        auVar103._8_4_ = fVar22 - fVar78;
        auVar103._12_4_ = local_e0[0]._12_4_ - fVar95;
        auVar83 = NEON_ext(auVar115,auVar115,8,1);
        auVar127 = NEON_ext(auVar103,auVar103,8,1);
        fVar122 = auVar115._0_4_ * auVar103._4_4_ - auVar115._4_4_ * auVar103._0_4_;
        uVar62 = NEON_ext(CONCAT44(auVar115._4_4_ * auVar103._8_4_ - auVar115._8_4_ * auVar103._4_4_
                                   ,fVar122),
                          CONCAT44(auVar83._4_4_ * auVar103._4_4_ - auVar115._4_4_ * auVar127._4_4_,
                                   auVar83._0_4_ * auVar103._0_4_ - auVar115._0_4_ * auVar127._0_4_)
                          ,4,1);
        fVar27 = (float)uVar62;
        auVar126._0_4_ = fVar27 * fVar27;
        fVar121 = (float)((ulong)uVar62 >> 0x20);
        auVar126._4_4_ = fVar121 * fVar121;
        auVar126._8_4_ = fVar122 * fVar122;
        auVar126._12_4_ = 0;
        auVar83 = NEON_ext(auVar126,auVar126,8,1);
        fVar120 = auVar83._0_4_ + auVar83._4_4_;
        fVar113 = auVar126._0_4_ + auVar126._4_4_ + fVar120;
        uVar62 = CONCAT44(auVar126._0_4_ + auVar126._4_4_ + fVar120,fVar113);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar113) {
          if (fVar113 != 0.0) {
            auVar83 = NEON_ext(auVar5,auVar5,8,1);
            auVar127 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar120 = local_f0 * fVar77 - fStack_ec * fVar123;
            auVar132 = NEON_ext(auVar100,auVar100,8,1);
            uVar114 = NEON_ext(CONCAT44(fStack_ec * fVar22 - fStack_e8 * fVar77,fVar120),
                               CONCAT44(auVar83._4_4_ * fVar77 - fStack_ec * auVar127._4_4_,
                                        auVar83._0_4_ * fVar123 - local_f0 * auVar127._0_4_),4,1);
            fVar113 = fVar96 * fVar123 - fVar23 * fVar77;
            uVar35 = NEON_ext(CONCAT44(fVar78 * fVar77 - fVar96 * fVar22,fVar113),
                              CONCAT44(fVar96 * auVar127._4_4_ - auVar132._4_4_ * fVar77,
                                       fVar23 * auVar127._0_4_ - auVar132._0_4_ * fVar123),4,1);
            fVar134 = fVar23 * fStack_ec - fVar96 * local_f0;
            uVar124 = NEON_ext(CONCAT44(fVar96 * fStack_e8 - fVar78 * fStack_ec,fVar134),
                               CONCAT44(auVar132._4_4_ * fStack_ec - fVar96 * auVar83._4_4_,
                                        auVar132._0_4_ * local_f0 - fVar23 * auVar83._0_4_),4,1);
            auVar130._0_4_ = (float)uVar114 * fVar27;
            auVar130._4_4_ = (float)((ulong)uVar114 >> 0x20) * fVar121;
            auVar130._8_4_ = fVar120 * fVar122;
            auVar130._12_4_ = 0;
            auVar83 = NEON_ext(auVar130,auVar130,8,1);
            auVar150._0_4_ = (float)uVar35 * fVar27;
            auVar150._4_4_ = (float)((ulong)uVar35 >> 0x20) * fVar121;
            auVar150._8_4_ = fVar113 * fVar122;
            auVar150._12_4_ = 0;
            fVar113 = auVar130._0_4_ + auVar130._4_4_ + auVar83._0_4_ + auVar83._4_4_;
            auVar83 = NEON_ext(auVar150,auVar150,8,1);
            fVar120 = auVar150._0_4_ + auVar150._4_4_ + auVar83._0_4_ + auVar83._4_4_;
            auVar131._0_4_ = (float)uVar124 * fVar27;
            auVar131._4_4_ = (float)((ulong)uVar124 >> 0x20) * fVar121;
            auVar131._8_4_ = fVar134 * fVar122;
            auVar131._12_4_ = 0;
            auVar83 = NEON_ext(auVar131,auVar131,8,1);
            fVar134 = auVar131._0_4_ + auVar131._4_4_ + auVar83._0_4_ + auVar83._4_4_;
            bVar7 = 0.0 <= fVar134 && (0.0 <= fVar120 && 0.0 <= fVar113);
            auVar160._0_4_ = -(uint)bVar7;
            auVar160._4_4_ = -(uint)bVar7;
            auVar160._8_4_ = -(uint)bVar7;
            auVar160._12_4_ = -(uint)bVar7;
            NEON_ext(auVar160,auVar160,8,1);
            if (CONCAT13((char)auVar160._12_4_,
                         CONCAT12((char)auVar160._8_4_,
                                  CONCAT11((char)auVar160._4_4_,(char)auVar160._0_4_))) == -1) {
              auVar40._0_4_ = fVar23 * fVar27;
              auVar40._4_4_ = fVar96 * fVar121;
              auVar40._8_4_ = fVar78 * fVar122;
              auVar40._12_4_ = fVar95 * 0.0;
              auVar100 = NEON_ext(auVar40,auVar40,8,1);
              uVar35 = NEON_frecpe(uVar62,4);
              uVar124 = NEON_frecps(uVar62,uVar35,4);
              fVar23 = (float)uVar35 * (float)uVar124;
              fVar96 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
              uVar35 = NEON_frecps(uVar62,CONCAT44(fVar96,fVar23),4);
              fVar23 = fVar23 * (float)uVar35;
              fVar96 = fVar96 * (float)((ulong)uVar35 >> 0x20);
              uVar35 = NEON_frecps(uVar62,CONCAT44(fVar96,fVar23),4);
              fVar23 = fVar23 * (float)uVar35;
              fVar96 = fVar96 * (float)((ulong)uVar35 >> 0x20);
              uVar35 = NEON_frecps(uVar62,CONCAT44(fVar96,fVar23),4);
              fVar23 = fVar23 * (float)uVar35;
              uVar62 = NEON_frecps(uVar62,CONCAT44(fVar96 * (float)((ulong)uVar35 >> 0x20),fVar23),4
                                  );
              fVar23 = (auVar40._0_4_ + auVar40._4_4_ + auVar100._0_4_ + auVar100._4_4_) *
                       fVar23 * (float)uVar62;
              auVar100._0_4_ = fVar27 * fVar23;
              auVar100._4_4_ = fVar121 * fVar23;
              auVar100._8_4_ = fVar122 * fVar23;
              auVar100._12_4_ = 0.0;
            }
            else {
              auVar135._0_4_ = -fVar23 * auVar115._0_4_;
              auVar135._4_4_ = -fVar96 * auVar115._4_4_;
              auVar135._8_4_ = -fVar78 * auVar115._8_4_;
              auVar135._12_4_ = auVar115._12_4_ * 0.0;
              auVar83 = NEON_ext(auVar135,auVar135,8,1);
              fVar122 = auVar83._0_4_ + auVar83._4_4_;
              auVar148._0_4_ = -local_f0 * auVar115._0_4_;
              auVar148._4_4_ = -fStack_ec * auVar115._4_4_;
              auVar148._8_4_ = -fStack_e8 * auVar115._8_4_;
              auVar148._12_4_ = auVar115._12_4_ * 0.0;
              auVar83 = NEON_ext(auVar148,auVar148,8,1);
              fVar165 = auVar83._0_4_ + auVar83._4_4_;
              fVar27 = auVar135._0_4_ + auVar135._4_4_ + fVar122;
              fVar121 = auVar148._0_4_ + auVar148._4_4_ + fVar165;
              fVar165 = auVar148._0_4_ + auVar148._4_4_ + fVar165;
              bVar7 = (0.0 <= fVar27 && fVar134 <= 0.0) && fVar121 <= 0.0;
              auVar163._0_4_ = -(uint)bVar7;
              auVar163._4_4_ = -(uint)bVar7;
              auVar163._8_4_ = -(uint)bVar7;
              auVar163._12_4_ = -(uint)bVar7;
              NEON_ext(auVar163,auVar163,8,1);
              pauVar17 = (undefined1 (*) [16])&local_f0;
              if (CONCAT13((char)auVar163._12_4_,
                           CONCAT12((char)auVar163._8_4_,
                                    CONCAT11((char)auVar163._4_4_,(char)auVar163._0_4_))) == -1) {
                uVar62 = CONCAT44((auVar135._0_4_ + auVar135._4_4_ + fVar122) - fVar165,
                                  fVar27 - fVar121);
                uVar35 = NEON_frecpe(uVar62,4);
                uVar124 = NEON_frecps(uVar62,uVar35,4);
                fVar113 = (float)uVar35 * (float)uVar124;
                fVar120 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
                uVar35 = NEON_frecps(uVar62,CONCAT44(fVar120,fVar113),4);
                fVar113 = fVar113 * (float)uVar35;
                fVar120 = fVar120 * (float)((ulong)uVar35 >> 0x20);
                uVar35 = NEON_frecps(uVar62,CONCAT44(fVar120,fVar113),4);
                fVar113 = fVar113 * (float)uVar35;
                fVar120 = fVar120 * (float)((ulong)uVar35 >> 0x20);
                uVar35 = NEON_frecps(uVar62,CONCAT44(fVar120,fVar113),4);
                fVar113 = fVar113 * (float)uVar35;
                uVar62 = NEON_frecps(uVar62,CONCAT44(fVar120 * (float)((ulong)uVar35 >> 0x20),
                                                     fVar113),4);
                fVar27 = fVar27 * (float)(-(uint)(1.1920929e-07 < ABS(fVar27 - fVar121)) &
                                         (uint)(fVar113 * (float)uVar62));
                lVar10 = 0;
                pauVar18 = (undefined1 (*) [16])local_100;
                auVar41._0_8_ =
                     CONCAT44(fVar96 + auVar115._4_4_ * fVar27,fVar23 + auVar115._0_4_ * fVar27);
                auVar41._8_4_ = fVar78 + auVar115._8_4_ * fVar27;
                auVar41._12_4_ = fVar95 + auVar115._12_4_ * fVar27;
                auVar100 = NEON_ext(auVar41,auVar41,8,1);
                local_1a4 = 2;
                auVar100._8_4_ = (float)auVar100._0_4_;
                auVar100._0_8_ = auVar41._0_8_;
                auVar100._12_4_ = 0.0;
LAB_002c97c4:
                lVar13 = 1;
                pauVar11 = pauVar17;
                pauVar17 = pauVar18;
              }
              else {
                auVar164._0_4_ = -local_f0 * auVar103._0_4_;
                auVar164._4_4_ = -fStack_ec * auVar103._4_4_;
                auVar164._8_4_ = -fStack_e8 * auVar103._8_4_;
                auVar164._12_4_ = auVar103._12_4_ * 0.0;
                auVar83 = NEON_ext(auVar164,auVar164,8,1);
                fVar24 = auVar83._0_4_ + auVar83._4_4_;
                auVar116._0_4_ = auVar115._0_4_ * -fVar123;
                auVar116._4_4_ = auVar115._4_4_ * -fVar77;
                auVar116._8_4_ = auVar115._8_4_ * -fVar22;
                auVar116._12_4_ = auVar115._12_4_ * 0.0;
                auVar167._0_4_ = auVar103._0_4_ * -fVar123;
                auVar167._4_4_ = auVar103._4_4_ * -fVar77;
                auVar167._8_4_ = auVar103._8_4_ * -fVar22;
                auVar167._12_4_ = auVar103._12_4_ * 0.0;
                fVar122 = auVar164._0_4_ + auVar164._4_4_ + fVar24;
                auVar83 = NEON_ext(auVar116,auVar116,8,1);
                fVar29 = auVar83._0_4_ + auVar83._4_4_;
                fVar134 = auVar116._0_4_ + auVar116._4_4_ + fVar29;
                auVar83 = NEON_ext(auVar167,auVar167,8,1);
                fVar30 = auVar83._0_4_ + auVar83._4_4_;
                fVar28 = auVar167._0_4_ + auVar167._4_4_ + fVar30;
                fVar30 = auVar167._0_4_ + auVar167._4_4_ + fVar30;
                pauVar11 = local_e0;
                bVar7 = (fVar121 <= fVar122 && fVar113 <= 0.0) && fVar28 <= fVar134;
                auVar155._0_4_ = -(uint)bVar7;
                auVar155._4_4_ = -(uint)bVar7;
                auVar155._8_4_ = -(uint)bVar7;
                auVar155._12_4_ = -(uint)bVar7;
                NEON_ext(auVar155,auVar155,8,1);
                if (CONCAT13((char)auVar155._12_4_,
                             CONCAT12((char)auVar155._8_4_,
                                      CONCAT11((char)auVar155._4_4_,(char)auVar155._0_4_))) == -1) {
                  fVar23 = (fVar122 - fVar121) + (fVar134 - fVar28);
                  uVar62 = CONCAT44(((auVar164._0_4_ + auVar164._4_4_ + fVar24) - fVar165) +
                                    ((auVar116._0_4_ + auVar116._4_4_ + fVar29) - fVar30),fVar23);
                  uVar35 = NEON_frecpe(uVar62,4);
                  uVar124 = NEON_frecps(uVar62,uVar35,4);
                  fVar96 = (float)uVar35 * (float)uVar124;
                  fVar78 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar78,fVar96),4);
                  fVar96 = fVar96 * (float)uVar35;
                  fVar78 = fVar78 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar78,fVar96),4);
                  fVar96 = fVar96 * (float)uVar35;
                  fVar78 = fVar78 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar78,fVar96),4);
                  fVar96 = fVar96 * (float)uVar35;
                  uVar62 = NEON_frecps(uVar62,CONCAT44(fVar78 * (float)((ulong)uVar35 >> 0x20),
                                                       fVar96),4);
                  fVar23 = (fVar122 - fVar121) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar23)) &
                                  (uint)(fVar96 * (float)uVar62));
                  auVar42._0_8_ =
                       CONCAT44(fStack_ec + (fVar77 - fStack_ec) * fVar23,
                                local_f0 + (fVar123 - local_f0) * fVar23);
                  auVar42._8_4_ = fStack_e8 + (fVar22 - fStack_e8) * fVar23;
                  auVar42._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar23;
                  auVar100 = NEON_ext(auVar42,auVar42,8,1);
                  lVar10 = 1;
                  auVar2._8_4_ = auVar100._0_4_;
                  auVar2._0_8_ = auVar42._0_8_;
                }
                else {
                  auVar156._0_4_ = -fVar23 * auVar103._0_4_;
                  auVar156._4_4_ = -fVar96 * auVar103._4_4_;
                  auVar156._8_4_ = -fVar78 * auVar103._8_4_;
                  auVar156._12_4_ = auVar103._12_4_ * 0.0;
                  auVar83 = NEON_ext(auVar156,auVar156,8,1);
                  fVar123 = auVar83._0_4_ + auVar83._4_4_;
                  fVar113 = auVar156._0_4_ + auVar156._4_4_ + fVar123;
                  bVar7 = (fVar120 <= 0.0 && 0.0 <= fVar113) && fVar28 <= 0.0;
                  auVar151._0_4_ = -(uint)bVar7;
                  auVar151._4_4_ = -(uint)bVar7;
                  auVar151._8_4_ = -(uint)bVar7;
                  auVar151._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar151,auVar151,8,1);
                  if (CONCAT13((char)auVar151._12_4_,
                               CONCAT12((char)auVar151._8_4_,
                                        CONCAT11((char)auVar151._4_4_,(char)auVar151._0_4_))) != -1)
                  {
                    bVar7 = fVar27 <= 0.0 && fVar113 <= 0.0;
                    auVar104._0_4_ = -(uint)bVar7;
                    auVar104._4_4_ = -(uint)bVar7;
                    auVar104._8_4_ = -(uint)bVar7;
                    auVar104._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar104,auVar104,8,1);
                    pauVar18 = (undefined1 (*) [16])local_100;
                    if (CONCAT13((char)auVar104._12_4_,
                                 CONCAT12((char)auVar104._8_4_,
                                          CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) ==
                        -1) {
                      lVar10 = 0;
                      local_1a4 = 1;
                    }
                    else {
                      bVar7 = 0.0 <= fVar121 && fVar122 <= fVar121;
                      auVar38._0_4_ = -(uint)bVar7;
                      auVar38._4_4_ = -(uint)bVar7;
                      auVar38._8_4_ = -(uint)bVar7;
                      auVar38._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar38,auVar38,8,1);
                      iVar61 = CONCAT13((char)auVar38._12_4_,
                                        CONCAT12((char)auVar38._8_4_,
                                                 CONCAT11((char)auVar38._4_4_,(char)auVar38._0_4_)))
                      ;
                      auVar39._0_4_ = -(uint)(iVar61 == -1);
                      auVar39._4_4_ = auVar39._0_4_;
                      auVar39._8_4_ = auVar39._0_4_;
                      auVar39._12_4_ = auVar39._0_4_;
                      local_1a4 = 1;
                      lVar10 = 1;
                      if (iVar61 != -1) {
                        lVar10 = 2;
                      }
                      pauVar18 = pauVar18 + lVar10;
                      auVar100 = local_e0[0] ^ (local_e0[0] ^ auVar5) & auVar39;
                    }
                    goto LAB_002c97c4;
                  }
                  uVar62 = CONCAT44((auVar156._0_4_ + auVar156._4_4_ + fVar123) - fVar30,
                                    fVar113 - fVar28);
                  uVar35 = NEON_frecpe(uVar62,4);
                  uVar124 = NEON_frecps(uVar62,uVar35,4);
                  fVar120 = (float)uVar35 * (float)uVar124;
                  fVar123 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar35;
                  fVar123 = fVar123 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar35;
                  fVar123 = fVar123 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar35;
                  uVar62 = NEON_frecps(uVar62,CONCAT44(fVar123 * (float)((ulong)uVar35 >> 0x20),
                                                       fVar120),4);
                  fVar113 = fVar113 * (float)(-(uint)(1.1920929e-07 < ABS(fVar113 - fVar28)) &
                                             (uint)(fVar120 * (float)uVar62));
                  lVar10 = 0;
                  pauVar17 = (undefined1 (*) [16])local_100;
                  auVar43._0_8_ =
                       CONCAT44(fVar96 + auVar103._4_4_ * fVar113,fVar23 + auVar103._0_4_ * fVar113)
                  ;
                  auVar43._8_4_ = fVar78 + auVar103._8_4_ * fVar113;
                  auVar43._12_4_ = fVar95 + auVar103._12_4_ * fVar113;
                  auVar100 = NEON_ext(auVar43,auVar43,8,1);
                  auVar2._8_4_ = auVar100._0_4_;
                  auVar2._0_8_ = auVar43._0_8_;
                }
                auVar100._12_4_ = 0.0;
                auVar100._0_12_ = auVar2;
                local_1a4 = 2;
                lVar13 = 2;
              }
              uStack_f8 = *(undefined8 *)((long)*pauVar17 + 8);
              local_100 = (float  [2])*(undefined8 *)*pauVar17;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar11 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar11 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar11;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
              local_1a0[4] = local_1a0[lVar10 + 4];
              local_1a0[5] = local_1a0[lVar13 + 4];
              local_1a0[0] = local_1a0[lVar10];
              local_1a0[1] = local_1a0[lVar13];
              fStack_138 = (float)*(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2) >> 0x20
                                  );
              local_140 = (float)*(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2);
              fStack_13c = (float)((ulong)*(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2) >> 0x20
                                  );
              uStack_128 = *(undefined8 *)(local_100 + (lVar13 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar13 * 2 + -8) * 2);
              fStack_178 = (float)*(undefined8 *)(local_100 + (lVar10 * 2 + -0xf) * 2);
              fStack_174 = (float)((ulong)*(undefined8 *)(local_100 + (lVar10 * 2 + -0xf) * 2) >>
                                  0x20);
              local_180._0_4_ = (float)*(undefined8 *)(local_1a0 + lVar10 * 4 + 8);
              local_180._4_4_ = (float)((ulong)*(undefined8 *)(local_1a0 + lVar10 * 4 + 8) >> 0x20);
              uStack_168 = *(undefined8 *)(local_100 + (lVar13 * 2 + -0xf) * 2);
              uStack_170 = *(undefined8 *)(local_1a0 + lVar13 * 4 + 8);
            }
          }
        }
        else {
          auVar63._0_4_ = auVar115._0_4_ * auVar115._0_4_;
          auVar63._4_4_ = auVar115._4_4_ * auVar115._4_4_;
          auVar63._8_4_ = auVar115._8_4_ * auVar115._8_4_;
          auVar63._12_4_ = auVar115._12_4_ * auVar115._12_4_;
          auVar100 = NEON_ext(auVar63,auVar63,8,1);
          fVar120 = auVar100._0_4_ + auVar100._4_4_;
          fVar113 = auVar63._0_4_ + auVar63._4_4_ + fVar120;
          uVar62 = CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar120,fVar113);
          bVar7 = fVar113 <= 1.1920929e-07;
          auVar81._0_4_ = -(uint)bVar7;
          auVar81._4_4_ = -(uint)bVar7;
          auVar81._8_4_ = -(uint)bVar7;
          auVar81._12_4_ = -(uint)bVar7;
          NEON_ext(auVar81,auVar81,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar81._12_4_,
                       CONCAT12((char)auVar81._8_4_,
                                CONCAT11((char)auVar81._4_4_,(char)auVar81._0_4_))) == -1)
          goto LAB_002c9354;
          auVar82._0_4_ = -fVar23 * auVar115._0_4_;
          auVar82._4_4_ = -fVar96 * auVar115._4_4_;
          auVar82._8_4_ = -fVar78 * auVar115._8_4_;
          auVar82._12_4_ = auVar115._12_4_ * 0.0;
          auVar100 = NEON_ext(auVar82,auVar82,8,1);
          fVar113 = auVar100._0_4_ + auVar100._4_4_;
          uVar35 = NEON_frecpe(uVar62,4);
          uVar124 = NEON_frecps(uVar62,uVar35,4);
          fVar120 = (float)uVar35 * (float)uVar124;
          fVar123 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
          fVar120 = fVar120 * (float)uVar35;
          fVar123 = fVar123 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
          fVar120 = fVar120 * (float)uVar35;
          fVar123 = fVar123 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
          fVar120 = fVar120 * (float)uVar35;
          fVar123 = fVar123 * (float)((ulong)uVar35 >> 0x20);
          uVar62 = NEON_frecps(uVar62,CONCAT44(fVar123,fVar120),4);
          uVar35 = NEON_fmov(0x3f800000,4);
          uVar62 = NEON_fmin(CONCAT44((auVar82._0_4_ + auVar82._4_4_ + fVar113) *
                                      fVar123 * (float)((ulong)uVar62 >> 0x20),
                                      (auVar82._0_4_ + auVar82._4_4_ + fVar113) *
                                      fVar120 * (float)uVar62),uVar35,4);
          uVar62 = NEON_fmax(uVar62,0,4);
          fVar113 = (float)uVar62;
          fVar120 = auVar115._0_4_ * fVar113;
          fVar123 = auVar115._4_4_ * fVar113;
          fVar77 = auVar115._8_4_ * fVar113;
          fVar113 = auVar115._12_4_ * fVar113;
LAB_002c9340:
          auVar37._0_8_ = CONCAT44(fVar96 + fVar123,fVar23 + fVar120);
          auVar37._8_4_ = fVar78 + fVar77;
          auVar37._12_4_ = fVar95 + fVar113;
          auVar100 = NEON_ext(auVar37,auVar37,8,1);
          auVar100._8_4_ = (float)auVar100._0_4_;
          auVar100._0_8_ = auVar37._0_8_;
          auVar100._12_4_ = 0.0;
        }
      }
      else if (local_1a4 == 2) {
        fVar120 = local_f0 - fVar23;
        fVar123 = fStack_ec - fVar96;
        fVar77 = fStack_e8 - fVar78;
        fVar113 = fStack_e4 - fVar95;
        auVar80._0_4_ = fVar120 * fVar120;
        auVar80._4_4_ = fVar123 * fVar123;
        auVar80._8_4_ = fVar77 * fVar77;
        auVar80._12_4_ = fVar113 * fVar113;
        auVar100 = NEON_ext(auVar80,auVar80,8,1);
        fVar27 = auVar100._0_4_ + auVar100._4_4_;
        fVar22 = auVar80._0_4_ + auVar80._4_4_ + fVar27;
        uVar62 = CONCAT44(auVar80._0_4_ + auVar80._4_4_ + fVar27,fVar22);
        bVar7 = fVar22 <= 1.1920929e-07;
        auVar101._0_4_ = -(uint)bVar7;
        auVar101._4_4_ = -(uint)bVar7;
        auVar101._8_4_ = -(uint)bVar7;
        auVar101._12_4_ = -(uint)bVar7;
        NEON_ext(auVar101,auVar101,8,1);
        if (CONCAT13((char)auVar101._12_4_,
                     CONCAT12((char)auVar101._8_4_,
                              CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) != -1) {
          auVar102._0_4_ = -fVar23 * fVar120;
          auVar102._4_4_ = -fVar96 * fVar123;
          auVar102._8_4_ = -fVar78 * fVar77;
          auVar102._12_4_ = fVar113 * 0.0;
          auVar100 = NEON_ext(auVar102,auVar102,8,1);
          fVar22 = auVar100._0_4_ + auVar100._4_4_;
          uVar35 = NEON_frecpe(uVar62,4);
          uVar124 = NEON_frecps(uVar62,uVar35,4);
          fVar27 = (float)uVar35 * (float)uVar124;
          fVar121 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar124 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar121,fVar27),4);
          fVar27 = fVar27 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar121,fVar27),4);
          fVar27 = fVar27 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar62,CONCAT44(fVar121,fVar27),4);
          fVar27 = fVar27 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar62 = NEON_frecps(uVar62,CONCAT44(fVar121,fVar27),4);
          uVar35 = NEON_fmov(0x3f800000,4);
          uVar62 = NEON_fmin(CONCAT44((auVar102._0_4_ + auVar102._4_4_ + fVar22) *
                                      fVar121 * (float)((ulong)uVar62 >> 0x20),
                                      (auVar102._0_4_ + auVar102._4_4_ + fVar22) *
                                      fVar27 * (float)uVar62),uVar35,4);
          uVar62 = NEON_fmax(uVar62,0,4);
          fVar22 = (float)uVar62;
          fVar120 = fVar120 * fVar22;
          fVar123 = fVar123 * fVar22;
          fVar77 = fVar77 * fVar22;
          fVar113 = fVar113 * fVar22;
          goto LAB_002c9340;
        }
LAB_002c9354:
        auVar100._8_8_ = uStack_f8;
        auVar100._0_4_ = local_100[0];
        auVar100._4_4_ = local_100[1];
        local_1a4 = 1;
      }
    }
    fVar78 = auVar100._0_4_;
    auVar64._0_4_ = fVar78 * fVar78;
    fVar95 = auVar100._4_4_;
    auVar64._4_4_ = fVar95 * fVar95;
    fVar113 = auVar100._8_4_;
    auVar64._8_4_ = fVar113 * fVar113;
    auVar64._12_4_ = auVar100._12_4_ * auVar100._12_4_;
    auVar83 = NEON_ext(auVar64,auVar64,8,1);
    uStack_b8 = auVar100._8_8_;
    local_c0 = auVar100._0_8_;
    fVar96 = auVar83._0_4_ + auVar83._4_4_;
    fVar23 = auVar64._0_4_ + auVar64._4_4_ + fVar96;
    fVar96 = auVar64._0_4_ + auVar64._4_4_ + fVar96;
    uVar15 = CONCAT44(fVar96,fVar23);
    uVar62 = NEON_frsqrte(uVar15,4);
    fVar120 = (float)uVar62;
    fVar123 = (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar62;
    fVar123 = fVar123 * (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar62;
    fVar123 = fVar123 * (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    fVar120 = fVar120 * (float)uVar62;
    fVar123 = fVar123 * (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frsqrts(CONCAT44(fVar123 * fVar123,fVar120 * fVar120),uVar15,4);
    uVar146 = CONCAT44(fVar96 * fVar123 * (float)((ulong)uVar62 >> 0x20),
                       fVar23 * fVar120 * (float)uVar62);
    uVar146 = uVar146 ^ (uVar146 ^ uVar15) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0))
    ;
    uVar62 = NEON_frecpe(uVar146,4);
    uVar35 = NEON_frecps(uVar146,uVar62,4);
    fVar23 = (float)uVar62 * (float)uVar35;
    fVar96 = (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
    uVar62 = NEON_frecps(uVar146,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar62;
    fVar96 = fVar96 * (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frecps(uVar146,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar62;
    fVar96 = fVar96 * (float)((ulong)uVar62 >> 0x20);
    uVar62 = NEON_frecps(uVar146,CONCAT44(fVar96,fVar23),4);
    fVar23 = fVar23 * (float)uVar62;
    uVar62 = NEON_frecps(uVar146,CONCAT44(fVar96 * (float)((ulong)uVar62 >> 0x20),fVar23),4);
    fVar23 = fVar23 * (float)uVar62;
    auVar129._0_4_ = fVar78 * fVar23;
    auVar129._4_4_ = fVar95 * fVar23;
    auVar129._8_4_ = fVar113 * fVar23;
    iVar61 = -(uint)(fVar137 < (float)uVar146);
    auVar83 = auVar100;
    uVar62 = uVar34;
  }
  uVar35 = _UNK_01d4aa48;
  uVar34 = _DAT_01d4aa40;
  auVar65._0_4_ = -(uint)(iVar61 == -1);
  auVar65._4_4_ = -(uint)(iVar61 == -1);
  auVar65._8_4_ = -(uint)(iVar61 == -1);
  auVar65._12_4_ = -(uint)(iVar61 == -1);
  NEON_ext(auVar65,auVar65,8,1);
  bVar142 = SUB41(fVar171,0);
  bVar143 = (byte)((uint)fVar171 >> 8);
  bVar144 = (byte)((uint)fVar171 >> 0x10);
  bVar145 = (byte)((uint)fVar171 >> 0x18);
  bVar138 = SUB41(fVar170,0);
  bVar139 = (byte)((uint)fVar170 >> 8);
  bVar140 = (byte)((uint)fVar170 >> 0x10);
  bVar141 = (byte)((uint)fVar170 >> 0x18);
  if (CONCAT13((char)auVar65._12_4_,
               CONCAT12((char)auVar65._8_4_,CONCAT11((char)auVar65._4_4_,(char)auVar65._0_4_))) ==
      -1) {
    uVar15 = uVar146;
    do {
      uVar146 = uVar15;
      auVar83 = auVar100;
      fVar96 = -auVar83._0_4_;
      fVar78 = -auVar83._4_4_;
      fVar95 = -auVar83._8_4_;
      lVar10 = *(long *)(param_1 + 8);
      pfVar12 = *(float **)(param_1 + 0x10);
      fVar23 = *(float *)(lVar10 + 0x10);
      uVar33 = -(uint)(0.0 < *(float *)(param_1 + 0x20) * fVar96 +
                             *(float *)(param_1 + 0x30) * fVar78 +
                             *(float *)(param_1 + 0x40) * fVar95);
      uVar59 = -(uint)(0.0 < *(float *)(param_1 + 0x24) * fVar96 +
                             *(float *)(param_1 + 0x34) * fVar78 +
                             *(float *)(param_1 + 0x44) * fVar95);
      uVar60 = -(uint)(0.0 < *(float *)(param_1 + 0x28) * fVar96 +
                             *(float *)(param_1 + 0x38) * fVar78 +
                             *(float *)(param_1 + 0x48) * fVar95);
      uVar15 = (ulong)local_1a4;
      fVar78 = *(float *)(lVar10 + 0x30) - fVar23;
      fVar113 = *(float *)(lVar10 + 0x34) - fVar23;
      fVar23 = *(float *)(lVar10 + 0x38) - fVar23;
      bVar92 = (byte)((ulong)uVar34 >> 8);
      bVar93 = (byte)((ulong)uVar34 >> 0x10);
      bVar94 = (byte)((ulong)uVar34 >> 0x18);
      iVar61 = CONCAT13((byte)(uVar33 >> 0x18) & bVar94,
                        CONCAT12((byte)(uVar33 >> 0x10) & bVar93,
                                 CONCAT11((byte)(uVar33 >> 8) & bVar92,(byte)uVar33 & (byte)uVar34))
                       );
      bVar110 = (byte)((ulong)uVar34 >> 0x20);
      bVar111 = (byte)((ulong)uVar34 >> 0x28);
      bVar112 = (byte)((ulong)uVar34 >> 0x30);
      bVar172 = (byte)((ulong)uVar34 >> 0x38);
      auVar84._0_8_ =
           CONCAT17((byte)(uVar59 >> 0x18) & bVar172,
                    CONCAT16((byte)(uVar59 >> 0x10) & bVar112,
                             CONCAT15((byte)(uVar59 >> 8) & bVar111,
                                      CONCAT14((byte)uVar59 & bVar110,iVar61))));
      auVar84[8] = (byte)uVar60 & (byte)uVar35;
      bVar173 = (byte)((ulong)uVar35 >> 8);
      auVar84[9] = (byte)(uVar60 >> 8) & bVar173;
      bVar174 = (byte)((ulong)uVar35 >> 0x10);
      auVar84[10] = (byte)(uVar60 >> 0x10) & bVar174;
      bVar175 = (byte)((ulong)uVar35 >> 0x18);
      auVar84[0xb] = (byte)(uVar60 >> 0x18) & bVar175;
      auVar84._12_4_ = 0;
      auVar100 = NEON_ext(auVar84,auVar84,8,1);
      fVar96 = -fVar78;
      fVar95 = -fVar113;
      fVar120 = -fVar23;
      local_1a0[uVar15 + 4] =
           (float)(iVar61 + (int)((ulong)auVar84._0_8_ >> 0x20) + auVar100._0_4_ + auVar100._4_4_ &
                  7);
      fVar96 = (float)((uint)fVar96 ^ ((uint)fVar96 ^ (uint)fVar78) & uVar33);
      fVar95 = (float)((uint)fVar95 ^ ((uint)fVar95 ^ (uint)fVar113) & uVar59);
      fVar120 = (float)((uint)fVar120 ^ ((uint)fVar120 ^ (uint)fVar23) & uVar60);
      lVar13 = *(long *)(param_2 + 8);
      uVar124 = *(undefined8 *)(lVar10 + 0x40);
      fVar78 = pfVar12[0xc] + pfVar12[8] * fVar120 + *pfVar12 * fVar96 + pfVar12[4] * fVar95;
      fVar113 = pfVar12[0xd] + pfVar12[9] * fVar120 + pfVar12[1] * fVar96 + pfVar12[5] * fVar95;
      auVar76._0_8_ = CONCAT44(fVar113,fVar78);
      auVar76._8_4_ =
           pfVar12[0xe] + pfVar12[10] * fVar120 + pfVar12[2] * fVar96 + pfVar12[6] * fVar95;
      auVar76._12_4_ = pfVar12[0xf] + 0.0;
      fVar23 = *(float *)(lVar13 + 0x10);
      auVar45._0_4_ = *(float *)(lVar13 + 0x30) - fVar23;
      auVar45._4_4_ = *(float *)(lVar13 + 0x34) - fVar23;
      auVar45._8_4_ = *(float *)(lVar13 + 0x38) - fVar23;
      auVar45._12_4_ = *(float *)(lVar13 + 0x3c) - 0.0;
      auVar85._0_4_ = -(uint)(0.0 < auVar83._0_4_);
      auVar85._4_4_ = -(uint)(0.0 < auVar83._4_4_);
      auVar85._8_4_ = -(uint)(0.0 < auVar83._8_4_);
      auVar85._12_4_ = -(uint)(0.0 < auVar83._12_4_);
      iVar61 = CONCAT13((byte)((uint)auVar85._0_4_ >> 0x18) & bVar94,
                        CONCAT12((byte)((uint)auVar85._0_4_ >> 0x10) & bVar93,
                                 CONCAT11((byte)((uint)auVar85._0_4_ >> 8) & bVar92,
                                          (byte)auVar85._0_4_ & (byte)uVar34)));
      auVar117._0_8_ =
           CONCAT17((byte)((uint)auVar85._4_4_ >> 0x18) & bVar172,
                    CONCAT16((byte)((uint)auVar85._4_4_ >> 0x10) & bVar112,
                             CONCAT15((byte)((uint)auVar85._4_4_ >> 8) & bVar111,
                                      CONCAT14((byte)auVar85._4_4_ & bVar110,iVar61))));
      auVar117[8] = (byte)auVar85._8_4_ & (byte)uVar35;
      auVar117[9] = (byte)((uint)auVar85._8_4_ >> 8) & bVar173;
      auVar117[10] = (byte)((uint)auVar85._8_4_ >> 0x10) & bVar174;
      auVar117[0xb] = (byte)((uint)auVar85._8_4_ >> 0x18) & bVar175;
      auVar117[0xc] = (byte)auVar85._12_4_ & (byte)((ulong)uVar35 >> 0x20);
      auVar117[0xd] = (byte)((uint)auVar85._12_4_ >> 8) & (byte)((ulong)uVar35 >> 0x28);
      auVar117[0xe] = (byte)((uint)auVar85._12_4_ >> 0x10) & (byte)((ulong)uVar35 >> 0x30);
      auVar117[0xf] = (byte)((uint)auVar85._12_4_ >> 0x18) & (byte)((ulong)uVar35 >> 0x38);
      auVar100 = NEON_ext(auVar117,auVar117,8,1);
      auVar86._0_4_ = -auVar45._0_4_;
      auVar86._4_4_ = -auVar45._4_4_;
      auVar86._8_4_ = -auVar45._8_4_;
      auVar86._12_4_ = 0;
      local_1a0[uVar15] =
           (float)(iVar61 + (int)((ulong)auVar117._0_8_ >> 0x20) + auVar100._0_4_ + auVar100._4_4_ &
                  7);
      auVar86 = auVar86 ^ (auVar86 ^ auVar45) & auVar85;
      fVar78 = fVar78 - auVar86._0_4_;
      fVar113 = fVar113 - auVar86._4_4_;
      auVar100._0_8_ = CONCAT44(fVar113,fVar78);
      auVar100._8_4_ = auVar76._8_4_ - auVar86._8_4_;
      auVar100._12_4_ = auVar76._12_4_ - auVar86._12_4_;
      uVar62 = NEON_fmax(uVar62,CONCAT44((float)((ulong)*param_4 >> 0x20) +
                                         (float)((ulong)uVar124 >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar13 + 0x40) >> 0x20),
                                         (float)*param_4 +
                                         (float)uVar124 + (float)*(undefined8 *)(lVar13 + 0x40)),4);
      fVar96 = auVar129._0_4_;
      auVar105._0_4_ = fVar96 * fVar78;
      fVar78 = auVar129._4_4_;
      auVar105._4_4_ = fVar78 * fVar113;
      fVar95 = auVar129._8_4_;
      auVar105._8_4_ = fVar95 * auVar100._8_4_;
      auVar105._12_4_ = auVar100._12_4_ * 0.0;
      auVar127 = NEON_ext(auVar105,auVar105,8,1);
      fVar23 = auVar105._0_4_ + auVar105._4_4_ + auVar127._0_4_ + auVar127._4_4_;
      if (fVar147 + (float)uVar62 < fVar23) {
        if (param_9 == (byte *)0x0) {
          return 0;
        }
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          return 0;
        }
        if (local_1a4 == 1) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          pfVar12 = local_1a0 + 5;
          pfVar16 = local_1a0 + 1;
          do {
            pfVar20 = pfVar12 + -1;
            fVar147 = *pfVar12;
            pbVar9 = param_9 + lVar10;
            fVar137 = pfVar16[-1];
            fVar170 = *pfVar16;
            lVar13 = lVar10 + 1;
            lVar10 = lVar10 + 2;
            pfVar12 = pfVar12 + 2;
            pfVar16 = pfVar16 + 2;
            *pbVar9 = SUB41(*pfVar20,0);
            (param_10 + lVar13)[-1] = SUB41(fVar137,0);
            pbVar9[1] = SUB41(fVar147,0);
            param_10[lVar13] = SUB41(fVar170,0);
          } while (uVar15 - (uVar15 & 1) != lVar10);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar137 = local_1a0[lVar10];
        param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
        param_10[lVar10] = SUB41(fVar137,0);
        return 0;
      }
      fVar113 = (float)uVar146;
      if (fVar113 * 0.999775 < fVar23) {
        if (param_9 == (byte *)0x0) goto LAB_002ca7fc;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar95;
          *param_7 = auVar129._0_8_;
          goto joined_r0x002ca8ac;
        }
        if (local_1a4 == 1) {
          lVar10 = 0;
          goto LAB_002ca7e0;
        }
        lVar10 = 0;
        pfVar12 = local_1a0 + 5;
        pfVar16 = local_1a0 + 1;
        do {
          pfVar20 = pfVar12 + -1;
          fVar23 = *pfVar12;
          pbVar9 = param_9 + lVar10;
          fVar137 = pfVar16[-1];
          fVar120 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar9 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar137,0);
          pbVar9[1] = SUB41(fVar23,0);
          param_10[lVar13] = SUB41(fVar120,0);
        } while (uVar15 - (uVar15 & 1) != lVar10);
        if ((local_1a4 & 1) != 0) {
LAB_002ca7e0:
          fVar137 = local_1a0[lVar10];
          param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
          param_10[lVar10] = SUB41(fVar137,0);
        }
LAB_002ca7fc:
        param_7[1] = (ulong)(uint)fVar95;
        *param_7 = auVar129._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar76._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar76._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar76._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar76._12_4_ = fStack_134 + 0.0;
          auVar100._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar100._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar100._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar100._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar75._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar75._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar75._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar100 = NEON_ext(auVar75,auVar75,8,1);
          auVar76._8_4_ = (float)auVar100._0_4_;
          auVar76._0_8_ = auVar75._0_8_;
          auVar76._12_4_ = 0.0;
          auVar58._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar58._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar58._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar100 = NEON_ext(auVar58,auVar58,8,1);
          auVar100._8_4_ = (float)auVar100._0_4_;
          auVar100._0_8_ = auVar58._0_8_;
          auVar100._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar76._4_4_ = fStack_13c;
          auVar76._0_4_ = local_140;
          auVar76._8_4_ = fStack_138;
          auVar76._12_4_ = fStack_134;
          auVar100._4_4_ = local_180._4_4_;
          auVar100._0_4_ = (float)local_180;
          auVar100._8_4_ = fStack_178;
          auVar100._12_4_ = fStack_174;
        }
joined_r0x002ca8ac:
        if ((param_12 & 1) == 0) {
          auVar91._0_8_ =
               CONCAT44((float)auVar76._4_4_ - fVar78 * fVar171,
                        (float)auVar76._0_4_ - fVar96 * fVar171);
          auVar91._8_4_ = (float)auVar76._8_4_ - fVar95 * fVar171;
          auVar91._12_4_ = (float)auVar76._12_4_ - fVar171 * 0.0;
          auVar83 = NEON_ext(auVar91,auVar91,8,1);
          auVar56._0_4_ = fVar96 * fVar170;
          auVar56._4_4_ = fVar78 * fVar170;
          auVar56._8_4_ = fVar95 * fVar170;
          auVar56._12_4_ = fVar170 * 0.0;
          param_5[1] = (ulong)auVar83._0_4_;
          *param_5 = auVar91._0_8_;
          fVar137 = fVar147;
        }
        else {
          iVar61 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          bVar92 = (byte)((uint)iVar61 >> 8);
          bVar93 = (byte)((uint)iVar61 >> 0x10);
          bVar94 = (byte)((uint)iVar61 >> 0x18);
          fVar137 = (float)CONCAT13(bVar145 & ~bVar94,
                                    CONCAT12(bVar144 & ~bVar93,
                                             CONCAT11(bVar143 & ~bVar92,bVar142 & ~(byte)iVar61)));
          auVar73._0_8_ =
               CONCAT44((float)auVar76._4_4_ - fVar78 * fVar137,
                        (float)auVar76._0_4_ - fVar96 * fVar137);
          auVar73._8_4_ = (float)auVar76._8_4_ - fVar95 * fVar137;
          auVar73._12_4_ = (float)auVar76._12_4_ - fVar137 * 0.0;
          auVar83 = NEON_ext(auVar73,auVar73,8,1);
          iVar97 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar110 = (byte)((uint)iVar97 >> 8);
          bVar111 = (byte)((uint)iVar97 >> 0x10);
          bVar112 = (byte)((uint)iVar97 >> 0x18);
          fVar170 = (float)CONCAT13(bVar141 & ~bVar112,
                                    CONCAT12(bVar140 & ~bVar111,
                                             CONCAT11(bVar139 & ~bVar110,bVar138 & ~(byte)iVar97)));
          fVar147 = fVar137 + fVar170;
          param_5[1] = (ulong)auVar83._0_4_;
          *param_5 = auVar73._0_8_;
          auVar74._0_4_ = fVar96 * fVar170;
          auVar74._4_4_ = fVar78 * fVar170;
          auVar74._8_4_ = fVar95 * fVar170;
          auVar74._12_4_ = fVar170 * 0.0;
          auVar56 = auVar100;
          auVar100 = auVar74;
          fVar137 = (float)(CONCAT17(bVar145 & ~bVar94,
                                     CONCAT16(bVar144 & ~bVar93,
                                              CONCAT15(bVar143 & ~bVar92,
                                                       CONCAT14(bVar142 & ~(byte)iVar61,fVar137))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar141 & ~bVar112,
                                     CONCAT16(bVar140 & ~bVar111,
                                              CONCAT15(bVar139 & ~bVar110,
                                                       CONCAT14(bVar138 & ~(byte)iVar97,fVar170))))
                           >> 0x20);
        }
        auVar57._0_8_ = CONCAT44(auVar56._4_4_ + auVar100._4_4_,auVar56._0_4_ + auVar100._0_4_);
        auVar57._8_4_ = auVar56._8_4_ + auVar100._8_4_;
        auVar57._12_4_ = auVar56._12_4_ + auVar100._12_4_;
        auVar100 = NEON_ext(auVar57,auVar57,8,1);
        param_6[1] = (ulong)auVar100._0_4_;
        *param_6 = auVar57._0_8_;
        *param_8 = CONCAT44((float)(uVar146 >> 0x20) - fVar137,fVar113 - fVar147);
        return 2;
      }
      uVar33 = local_1a4 + 1;
      *(long *)(local_100 + (uVar15 * 2 + -7) * 2) = auVar76._8_8_;
      *(undefined8 *)(local_100 + (uVar15 * 2 + -8) * 2) = auVar76._0_8_;
      *(long *)(local_100 + (uVar15 * 2 + -0xf) * 2) = auVar86._8_8_;
      *(long *)(local_1a0 + uVar15 * 4 + 8) = auVar86._0_8_;
      *(long *)(local_e0[uVar15 - 2] + 8) = auVar100._8_8_;
      *(undefined8 *)(local_100 + uVar15 * 4) = auVar100._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar33;
        auVar100 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar23 = local_100[0];
        fVar96 = local_100[1];
        fVar78 = (float)uStack_f8;
        fVar95 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar100._8_8_ = uStack_f8;
          auVar100._0_4_ = local_100[0];
          auVar100._4_4_ = local_100[1];
          auVar6._4_4_ = fStack_ec;
          auVar6._0_4_ = local_f0;
          auVar6._8_4_ = fStack_e8;
          auVar6._12_4_ = fStack_e4;
          auVar118._0_4_ = local_f0 - fVar23;
          auVar118._4_4_ = fStack_ec - fVar96;
          auVar118._8_4_ = fStack_e8 - fVar78;
          auVar118._12_4_ = fStack_e4 - fVar95;
          fVar77 = local_e0[0]._0_4_;
          auVar108._0_4_ = fVar77 - fVar23;
          fVar22 = local_e0[0]._4_4_;
          auVar108._4_4_ = fVar22 - fVar96;
          fVar27 = local_e0[0]._8_4_;
          auVar108._8_4_ = fVar27 - fVar78;
          auVar108._12_4_ = local_e0[0]._12_4_ - fVar95;
          auVar127 = NEON_ext(auVar118,auVar118,8,1);
          auVar132 = NEON_ext(auVar108,auVar108,8,1);
          fVar134 = auVar118._0_4_ * auVar108._4_4_ - auVar118._4_4_ * auVar108._0_4_;
          uVar124 = NEON_ext(CONCAT44(auVar118._4_4_ * auVar108._8_4_ -
                                      auVar118._8_4_ * auVar108._4_4_,fVar134),
                             CONCAT44(auVar127._4_4_ * auVar108._4_4_ -
                                      auVar118._4_4_ * auVar132._4_4_,
                                      auVar127._0_4_ * auVar108._0_4_ -
                                      auVar118._0_4_ * auVar132._0_4_),4,1);
          fVar121 = (float)uVar124;
          auVar128._0_4_ = fVar121 * fVar121;
          fVar122 = (float)((ulong)uVar124 >> 0x20);
          auVar128._4_4_ = fVar122 * fVar122;
          auVar128._8_4_ = fVar134 * fVar134;
          auVar128._12_4_ = 0;
          auVar127 = NEON_ext(auVar128,auVar128,8,1);
          fVar123 = auVar127._0_4_ + auVar127._4_4_;
          fVar120 = auVar128._0_4_ + auVar128._4_4_ + fVar123;
          uVar124 = CONCAT44(auVar128._0_4_ + auVar128._4_4_ + fVar123,fVar120);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar120) {
            if (fVar120 != 0.0) {
              auVar127 = NEON_ext(auVar6,auVar6,8,1);
              auVar132 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar165 = local_f0 * fVar22 - fStack_ec * fVar77;
              auVar168 = NEON_ext(auVar100,auVar100,8,1);
              uVar125 = NEON_ext(CONCAT44(fStack_ec * fVar27 - fStack_e8 * fVar22,fVar165),
                                 CONCAT44(auVar127._4_4_ * fVar22 - fStack_ec * auVar132._4_4_,
                                          auVar127._0_4_ * fVar77 - local_f0 * auVar132._0_4_),4,1);
              fVar120 = fVar96 * fVar77 - fVar23 * fVar22;
              uVar169 = NEON_ext(CONCAT44(fVar78 * fVar22 - fVar96 * fVar27,fVar120),
                                 CONCAT44(fVar96 * auVar132._4_4_ - auVar168._4_4_ * fVar22,
                                          fVar23 * auVar132._0_4_ - auVar168._0_4_ * fVar77),4,1);
              fVar123 = fVar23 * fStack_ec - fVar96 * local_f0;
              uVar114 = NEON_ext(CONCAT44(fVar96 * fStack_e8 - fVar78 * fStack_ec,fVar123),
                                 CONCAT44(auVar168._4_4_ * fStack_ec - fVar96 * auVar127._4_4_,
                                          auVar168._0_4_ * local_f0 - fVar23 * auVar127._0_4_),4,1);
              auVar152._0_4_ = (float)uVar125 * fVar121;
              auVar152._4_4_ = (float)((ulong)uVar125 >> 0x20) * fVar122;
              auVar152._8_4_ = fVar165 * fVar134;
              auVar152._12_4_ = 0;
              auVar127 = NEON_ext(auVar152,auVar152,8,1);
              auVar157._0_4_ = (float)uVar169 * fVar121;
              auVar157._4_4_ = (float)((ulong)uVar169 >> 0x20) * fVar122;
              auVar157._8_4_ = fVar120 * fVar134;
              auVar157._12_4_ = 0;
              auVar132 = NEON_ext(auVar157,auVar157,8,1);
              fVar120 = auVar152._0_4_ + auVar152._4_4_ + auVar127._0_4_ + auVar127._4_4_;
              auVar161._0_4_ = (float)uVar114 * fVar121;
              auVar161._4_4_ = (float)((ulong)uVar114 >> 0x20) * fVar122;
              auVar161._8_4_ = fVar123 * fVar134;
              auVar161._12_4_ = 0;
              fVar123 = auVar157._0_4_ + auVar157._4_4_ + auVar132._0_4_ + auVar132._4_4_;
              auVar127 = NEON_ext(auVar161,auVar161,8,1);
              fVar165 = auVar161._0_4_ + auVar161._4_4_ + auVar127._0_4_ + auVar127._4_4_;
              bVar7 = (0.0 <= fVar120 && 0.0 <= fVar123) && 0.0 <= fVar165;
              auVar162._0_4_ = -(uint)bVar7;
              auVar162._4_4_ = -(uint)bVar7;
              auVar162._8_4_ = -(uint)bVar7;
              auVar162._12_4_ = -(uint)bVar7;
              NEON_ext(auVar162,auVar162,8,1);
              if (CONCAT13((char)auVar162._12_4_,
                           CONCAT12((char)auVar162._8_4_,
                                    CONCAT11((char)auVar162._4_4_,(char)auVar162._0_4_))) == -1) {
                auVar49._0_4_ = fVar23 * fVar121;
                auVar49._4_4_ = fVar96 * fVar122;
                auVar49._8_4_ = fVar78 * fVar134;
                auVar49._12_4_ = fVar95 * 0.0;
                auVar100 = NEON_ext(auVar49,auVar49,8,1);
                uVar114 = NEON_frecpe(uVar124,4);
                uVar125 = NEON_frecps(uVar124,uVar114,4);
                fVar23 = (float)uVar114 * (float)uVar125;
                fVar96 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                uVar114 = NEON_frecps(uVar124,CONCAT44(fVar96,fVar23),4);
                fVar23 = fVar23 * (float)uVar114;
                fVar96 = fVar96 * (float)((ulong)uVar114 >> 0x20);
                uVar114 = NEON_frecps(uVar124,CONCAT44(fVar96,fVar23),4);
                fVar23 = fVar23 * (float)uVar114;
                fVar96 = fVar96 * (float)((ulong)uVar114 >> 0x20);
                uVar114 = NEON_frecps(uVar124,CONCAT44(fVar96,fVar23),4);
                fVar23 = fVar23 * (float)uVar114;
                uVar124 = NEON_frecps(uVar124,CONCAT44(fVar96 * (float)((ulong)uVar114 >> 0x20),
                                                       fVar23),4);
                fVar23 = (auVar49._0_4_ + auVar49._4_4_ + auVar100._0_4_ + auVar100._4_4_) *
                         fVar23 * (float)uVar124;
                auVar100._0_4_ = fVar121 * fVar23;
                auVar100._4_4_ = fVar122 * fVar23;
                auVar100._8_4_ = fVar134 * fVar23;
                auVar100._12_4_ = 0.0;
              }
              else {
                auVar133._0_4_ = -fVar23 * auVar118._0_4_;
                auVar133._4_4_ = -fVar96 * auVar118._4_4_;
                auVar133._8_4_ = -fVar78 * auVar118._8_4_;
                auVar133._12_4_ = auVar118._12_4_ * 0.0;
                auVar127 = NEON_ext(auVar133,auVar133,8,1);
                fVar134 = auVar127._0_4_ + auVar127._4_4_;
                auVar136._0_4_ = -local_f0 * auVar118._0_4_;
                auVar136._4_4_ = -fStack_ec * auVar118._4_4_;
                auVar136._8_4_ = -fStack_e8 * auVar118._8_4_;
                auVar136._12_4_ = auVar118._12_4_ * 0.0;
                auVar127 = NEON_ext(auVar136,auVar136,8,1);
                fVar28 = auVar127._0_4_ + auVar127._4_4_;
                fVar121 = auVar133._0_4_ + auVar133._4_4_ + fVar134;
                fVar122 = auVar136._0_4_ + auVar136._4_4_ + fVar28;
                fVar28 = auVar136._0_4_ + auVar136._4_4_ + fVar28;
                bVar7 = (0.0 <= fVar121 && fVar165 <= 0.0) && fVar122 <= 0.0;
                auVar158._0_4_ = -(uint)bVar7;
                auVar158._4_4_ = -(uint)bVar7;
                auVar158._8_4_ = -(uint)bVar7;
                auVar158._12_4_ = -(uint)bVar7;
                NEON_ext(auVar158,auVar158,8,1);
                if (CONCAT13((char)auVar158._12_4_,
                             CONCAT12((char)auVar158._8_4_,
                                      CONCAT11((char)auVar158._4_4_,(char)auVar158._0_4_))) == -1) {
                  uVar124 = CONCAT44((auVar133._0_4_ + auVar133._4_4_ + fVar134) - fVar28,
                                     fVar121 - fVar122);
                  uVar114 = NEON_frecpe(uVar124,4);
                  uVar125 = NEON_frecps(uVar124,uVar114,4);
                  fVar120 = (float)uVar114 * (float)uVar125;
                  fVar123 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                  uVar114 = NEON_frecps(uVar124,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar114;
                  fVar123 = fVar123 * (float)((ulong)uVar114 >> 0x20);
                  uVar114 = NEON_frecps(uVar124,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar114;
                  fVar123 = fVar123 * (float)((ulong)uVar114 >> 0x20);
                  uVar114 = NEON_frecps(uVar124,CONCAT44(fVar123,fVar120),4);
                  fVar120 = fVar120 * (float)uVar114;
                  uVar124 = NEON_frecps(uVar124,CONCAT44(fVar123 * (float)((ulong)uVar114 >> 0x20),
                                                         fVar120),4);
                  fVar121 = fVar121 * (float)(-(uint)(1.1920929e-07 < ABS(fVar121 - fVar122)) &
                                             (uint)(fVar120 * (float)uVar124));
                  pfVar12 = local_1a0;
                  pfVar14 = local_1a0 + 4;
                  auVar50._0_8_ =
                       CONCAT44(fVar96 + auVar118._4_4_ * fVar121,fVar23 + auVar118._0_4_ * fVar121)
                  ;
                  auVar50._8_4_ = fVar78 + auVar118._8_4_ * fVar121;
                  auVar50._12_4_ = fVar95 + auVar118._12_4_ * fVar121;
                  auVar100 = NEON_ext(auVar50,auVar50,8,1);
                  pfVar16 = (float *)&local_180;
                  pfVar20 = &local_140;
                  pauVar17 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar100._8_4_ = (float)auVar100._0_4_;
                  auVar100._0_8_ = auVar50._0_8_;
                  auVar100._12_4_ = 0.0;
LAB_002ca0d0:
                  lVar10 = 1;
                  pauVar18 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar159._0_4_ = -local_f0 * auVar108._0_4_;
                  auVar159._4_4_ = -fStack_ec * auVar108._4_4_;
                  auVar159._8_4_ = -fStack_e8 * auVar108._8_4_;
                  auVar159._12_4_ = auVar108._12_4_ * 0.0;
                  auVar127 = NEON_ext(auVar159,auVar159,8,1);
                  fVar29 = auVar127._0_4_ + auVar127._4_4_;
                  auVar119._0_4_ = auVar118._0_4_ * -fVar77;
                  auVar119._4_4_ = auVar118._4_4_ * -fVar22;
                  auVar119._8_4_ = auVar118._8_4_ * -fVar27;
                  auVar119._12_4_ = auVar118._12_4_ * 0.0;
                  auVar166._0_4_ = auVar108._0_4_ * -fVar77;
                  auVar166._4_4_ = auVar108._4_4_ * -fVar22;
                  auVar166._8_4_ = auVar108._8_4_ * -fVar27;
                  auVar166._12_4_ = auVar108._12_4_ * 0.0;
                  fVar134 = auVar159._0_4_ + auVar159._4_4_ + fVar29;
                  auVar127 = NEON_ext(auVar119,auVar119,8,1);
                  fVar30 = auVar127._0_4_ + auVar127._4_4_;
                  fVar165 = auVar119._0_4_ + auVar119._4_4_ + fVar30;
                  auVar127 = NEON_ext(auVar166,auVar166,8,1);
                  fVar31 = auVar127._0_4_ + auVar127._4_4_;
                  fVar24 = auVar166._0_4_ + auVar166._4_4_ + fVar31;
                  fVar31 = auVar166._0_4_ + auVar166._4_4_ + fVar31;
                  bVar7 = (fVar122 <= fVar134 && fVar120 <= 0.0) && fVar24 <= fVar165;
                  auVar153._0_4_ = -(uint)bVar7;
                  auVar153._4_4_ = -(uint)bVar7;
                  auVar153._8_4_ = -(uint)bVar7;
                  auVar153._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar153,auVar153,8,1);
                  if (CONCAT13((char)auVar153._12_4_,
                               CONCAT12((char)auVar153._8_4_,
                                        CONCAT11((char)auVar153._4_4_,(char)auVar153._0_4_))) == -1)
                  {
                    fVar23 = (fVar134 - fVar122) + (fVar165 - fVar24);
                    uVar124 = CONCAT44(((auVar159._0_4_ + auVar159._4_4_ + fVar29) - fVar28) +
                                       ((auVar119._0_4_ + auVar119._4_4_ + fVar30) - fVar31),fVar23)
                    ;
                    uVar114 = NEON_frecpe(uVar124,4);
                    uVar125 = NEON_frecps(uVar124,uVar114,4);
                    fVar96 = (float)uVar114 * (float)uVar125;
                    fVar78 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar78,fVar96),4);
                    fVar96 = fVar96 * (float)uVar114;
                    fVar78 = fVar78 * (float)((ulong)uVar114 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar78,fVar96),4);
                    fVar96 = fVar96 * (float)uVar114;
                    fVar78 = fVar78 * (float)((ulong)uVar114 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar78,fVar96),4);
                    fVar96 = fVar96 * (float)uVar114;
                    uVar124 = NEON_frecps(uVar124,CONCAT44(fVar78 * (float)((ulong)uVar114 >> 0x20),
                                                           fVar96),4);
                    fVar23 = (fVar134 - fVar122) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar23)) &
                                    (uint)(fVar96 * (float)uVar124));
                    auVar51._0_8_ =
                         CONCAT44(fStack_ec + (fVar22 - fStack_ec) * fVar23,
                                  local_f0 + (fVar77 - local_f0) * fVar23);
                    auVar51._8_4_ = fStack_e8 + (fVar27 - fStack_e8) * fVar23;
                    auVar51._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar23;
                    auVar100 = NEON_ext(auVar51,auVar51,8,1);
                    auVar3._8_4_ = auVar100._0_4_;
                    auVar3._0_8_ = auVar51._0_8_;
                    pfVar12 = local_1a0 + 1;
                    pfVar14 = local_1a0 + 5;
                    pfVar16 = (float *)&uStack_170;
                    pfVar20 = (float *)&uStack_130;
                    pauVar17 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar154._0_4_ = -fVar23 * auVar108._0_4_;
                    auVar154._4_4_ = -fVar96 * auVar108._4_4_;
                    auVar154._8_4_ = -fVar78 * auVar108._8_4_;
                    auVar154._12_4_ = auVar108._12_4_ * 0.0;
                    auVar127 = NEON_ext(auVar154,auVar154,8,1);
                    fVar77 = auVar127._0_4_ + auVar127._4_4_;
                    fVar120 = auVar154._0_4_ + auVar154._4_4_ + fVar77;
                    bVar7 = (fVar123 <= 0.0 && 0.0 <= fVar120) && fVar24 <= 0.0;
                    auVar149._0_4_ = -(uint)bVar7;
                    auVar149._4_4_ = -(uint)bVar7;
                    auVar149._8_4_ = -(uint)bVar7;
                    auVar149._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar149,auVar149,8,1);
                    if (CONCAT13((char)auVar149._12_4_,
                                 CONCAT12((char)auVar149._8_4_,
                                          CONCAT11((char)auVar149._4_4_,(char)auVar149._0_4_))) !=
                        -1) {
                      bVar7 = fVar121 <= 0.0 && fVar120 <= 0.0;
                      auVar109._0_4_ = -(uint)bVar7;
                      auVar109._4_4_ = -(uint)bVar7;
                      auVar109._8_4_ = -(uint)bVar7;
                      auVar109._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar109,auVar109,8,1);
                      if (CONCAT13((char)auVar109._12_4_,
                                   CONCAT12((char)auVar109._8_4_,
                                            CONCAT11((char)auVar109._4_4_,(char)auVar109._0_4_))) ==
                          -1) {
                        pfVar12 = local_1a0;
                        pfVar14 = local_1a0 + 4;
                        pfVar16 = (float *)&local_180;
                        pfVar20 = &local_140;
                        pauVar17 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar7 = 0.0 <= fVar122 && fVar134 <= fVar122;
                        auVar47._0_4_ = -(uint)bVar7;
                        auVar47._4_4_ = -(uint)bVar7;
                        auVar47._8_4_ = -(uint)bVar7;
                        auVar47._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar47,auVar47,8,1);
                        iVar61 = CONCAT13((char)auVar47._12_4_,
                                          CONCAT12((char)auVar47._8_4_,
                                                   CONCAT11((char)auVar47._4_4_,(char)auVar47._0_4_)
                                                  ));
                        iVar97 = -(uint)(iVar61 == -1);
                        auVar48._4_4_ = iVar97;
                        auVar48._0_4_ = iVar97;
                        auVar48._8_4_ = iVar97;
                        auVar48._12_4_ = iVar97;
                        local_1a4 = 1;
                        lVar10 = 1;
                        if (iVar61 != -1) {
                          lVar10 = 2;
                        }
                        auVar100 = local_e0[0] ^ (local_e0[0] ^ auVar6) & auVar48;
                        pauVar17 = (undefined1 (*) [16])(local_100 + lVar10 * 4);
                        pfVar20 = local_100 + (lVar10 * 2 + -8) * 2;
                        pfVar16 = local_1a0 + lVar10 * 4 + 8;
                        pfVar14 = local_1a0 + lVar10 + 4;
                        pfVar12 = local_1a0 + lVar10;
                      }
                      goto LAB_002ca0d0;
                    }
                    uVar124 = CONCAT44((auVar154._0_4_ + auVar154._4_4_ + fVar77) - fVar31,
                                       fVar120 - fVar24);
                    uVar114 = NEON_frecpe(uVar124,4);
                    uVar125 = NEON_frecps(uVar124,uVar114,4);
                    fVar123 = (float)uVar114 * (float)uVar125;
                    fVar77 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
                    fVar123 = fVar123 * (float)uVar114;
                    fVar77 = fVar77 * (float)((ulong)uVar114 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
                    fVar123 = fVar123 * (float)uVar114;
                    fVar77 = fVar77 * (float)((ulong)uVar114 >> 0x20);
                    uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
                    fVar123 = fVar123 * (float)uVar114;
                    uVar124 = NEON_frecps(uVar124,CONCAT44(fVar77 * (float)((ulong)uVar114 >> 0x20),
                                                           fVar123),4);
                    fVar120 = fVar120 * (float)(-(uint)(1.1920929e-07 < ABS(fVar120 - fVar24)) &
                                               (uint)(fVar123 * (float)uVar124));
                    auVar52._0_8_ =
                         CONCAT44(fVar96 + auVar108._4_4_ * fVar120,
                                  fVar23 + auVar108._0_4_ * fVar120);
                    auVar52._8_4_ = fVar78 + auVar108._8_4_ * fVar120;
                    auVar52._12_4_ = fVar95 + auVar108._12_4_ * fVar120;
                    auVar100 = NEON_ext(auVar52,auVar52,8,1);
                    auVar3._8_4_ = auVar100._0_4_;
                    auVar3._0_8_ = auVar52._0_8_;
                    pfVar12 = local_1a0;
                    pfVar14 = local_1a0 + 4;
                    pfVar16 = (float *)&local_180;
                    pfVar20 = &local_140;
                    pauVar17 = (undefined1 (*) [16])local_100;
                  }
                  auVar100._12_4_ = 0.0;
                  auVar100._0_12_ = auVar3;
                  local_1a4 = 2;
                  lVar10 = 2;
                  pauVar18 = local_e0;
                }
                uStack_f8 = *(undefined8 *)((long)*pauVar17 + 8);
                local_100 = (float  [2])*(undefined8 *)*pauVar17;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar18 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar18 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar18;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar18 >> 0x20);
                fStack_138 = (float)*(undefined8 *)(pfVar20 + 2);
                fStack_134 = (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
                local_140 = (float)*(undefined8 *)pfVar20;
                fStack_13c = (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
                uStack_128 = *(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2);
                uStack_130 = *(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2);
                local_1a0[4] = *pfVar14;
                local_1a0[5] = local_1a0[lVar10 + 4];
                local_1a0[0] = *pfVar12;
                local_1a0[1] = local_1a0[lVar10];
                fStack_178 = (float)*(undefined8 *)(pfVar16 + 2);
                fStack_174 = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20);
                local_180._0_4_ = (float)*(undefined8 *)pfVar16;
                local_180._4_4_ = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20);
                uStack_168 = *(undefined8 *)(local_100 + (lVar10 * 2 + -0xf) * 2);
                uStack_170 = *(undefined8 *)(local_1a0 + lVar10 * 4 + 8);
              }
            }
          }
          else {
            auVar68._0_4_ = auVar118._0_4_ * auVar118._0_4_;
            auVar68._4_4_ = auVar118._4_4_ * auVar118._4_4_;
            auVar68._8_4_ = auVar118._8_4_ * auVar118._8_4_;
            auVar68._12_4_ = auVar118._12_4_ * auVar118._12_4_;
            auVar100 = NEON_ext(auVar68,auVar68,8,1);
            fVar123 = auVar100._0_4_ + auVar100._4_4_;
            fVar120 = auVar68._0_4_ + auVar68._4_4_ + fVar123;
            uVar124 = CONCAT44(auVar68._0_4_ + auVar68._4_4_ + fVar123,fVar120);
            bVar7 = fVar120 <= 1.1920929e-07;
            auVar88._0_4_ = -(uint)bVar7;
            auVar88._4_4_ = -(uint)bVar7;
            auVar88._8_4_ = -(uint)bVar7;
            auVar88._12_4_ = -(uint)bVar7;
            NEON_ext(auVar88,auVar88,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar88._12_4_,
                         CONCAT12((char)auVar88._8_4_,
                                  CONCAT11((char)auVar88._4_4_,(char)auVar88._0_4_))) == -1)
            goto LAB_002c9d50;
            auVar89._0_4_ = -fVar23 * auVar118._0_4_;
            auVar89._4_4_ = -fVar96 * auVar118._4_4_;
            auVar89._8_4_ = -fVar78 * auVar118._8_4_;
            auVar89._12_4_ = auVar118._12_4_ * 0.0;
            auVar100 = NEON_ext(auVar89,auVar89,8,1);
            fVar120 = auVar100._0_4_ + auVar100._4_4_;
            uVar114 = NEON_frecpe(uVar124,4);
            uVar125 = NEON_frecps(uVar124,uVar114,4);
            fVar123 = (float)uVar114 * (float)uVar125;
            fVar77 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
            uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
            fVar123 = fVar123 * (float)uVar114;
            fVar77 = fVar77 * (float)((ulong)uVar114 >> 0x20);
            uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
            fVar123 = fVar123 * (float)uVar114;
            fVar77 = fVar77 * (float)((ulong)uVar114 >> 0x20);
            uVar114 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
            fVar123 = fVar123 * (float)uVar114;
            fVar77 = fVar77 * (float)((ulong)uVar114 >> 0x20);
            uVar124 = NEON_frecps(uVar124,CONCAT44(fVar77,fVar123),4);
            uVar114 = NEON_fmov(0x3f800000,4);
            uVar124 = NEON_fmin(CONCAT44((auVar89._0_4_ + auVar89._4_4_ + fVar120) *
                                         fVar77 * (float)((ulong)uVar124 >> 0x20),
                                         (auVar89._0_4_ + auVar89._4_4_ + fVar120) *
                                         fVar123 * (float)uVar124),uVar114,4);
            uVar124 = NEON_fmax(uVar124,0,4);
            fVar120 = (float)uVar124;
            fVar123 = auVar118._0_4_ * fVar120;
            fVar77 = auVar118._4_4_ * fVar120;
            fVar22 = auVar118._8_4_ * fVar120;
            fVar120 = auVar118._12_4_ * fVar120;
LAB_002c9d3c:
            auVar46._0_8_ = CONCAT44(fVar96 + fVar77,fVar23 + fVar123);
            auVar46._8_4_ = fVar78 + fVar22;
            auVar46._12_4_ = fVar95 + fVar120;
            auVar100 = NEON_ext(auVar46,auVar46,8,1);
            auVar100._8_4_ = (float)auVar100._0_4_;
            auVar100._0_8_ = auVar46._0_8_;
            auVar100._12_4_ = 0.0;
          }
        }
        else {
          bVar7 = local_1a4 == 1;
          local_1a4 = uVar33;
          if (bVar7) {
            fVar123 = local_f0 - fVar23;
            fVar77 = fStack_ec - fVar96;
            fVar22 = fStack_e8 - fVar78;
            fVar120 = fStack_e4 - fVar95;
            auVar87._0_4_ = fVar123 * fVar123;
            auVar87._4_4_ = fVar77 * fVar77;
            auVar87._8_4_ = fVar22 * fVar22;
            auVar87._12_4_ = fVar120 * fVar120;
            auVar100 = NEON_ext(auVar87,auVar87,8,1);
            fVar121 = auVar100._0_4_ + auVar100._4_4_;
            fVar27 = auVar87._0_4_ + auVar87._4_4_ + fVar121;
            uVar124 = CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar121,fVar27);
            bVar7 = fVar27 <= 1.1920929e-07;
            auVar106._0_4_ = -(uint)bVar7;
            auVar106._4_4_ = -(uint)bVar7;
            auVar106._8_4_ = -(uint)bVar7;
            auVar106._12_4_ = -(uint)bVar7;
            NEON_ext(auVar106,auVar106,8,1);
            if (CONCAT13((char)auVar106._12_4_,
                         CONCAT12((char)auVar106._8_4_,
                                  CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) != -1) {
              auVar107._0_4_ = -fVar23 * fVar123;
              auVar107._4_4_ = -fVar96 * fVar77;
              auVar107._8_4_ = -fVar78 * fVar22;
              auVar107._12_4_ = fVar120 * 0.0;
              auVar100 = NEON_ext(auVar107,auVar107,8,1);
              fVar27 = auVar100._0_4_ + auVar100._4_4_;
              uVar114 = NEON_frecpe(uVar124,4);
              uVar125 = NEON_frecps(uVar124,uVar114,4);
              fVar121 = (float)uVar114 * (float)uVar125;
              fVar122 = (float)((ulong)uVar114 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
              uVar114 = NEON_frecps(uVar124,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar114;
              fVar122 = fVar122 * (float)((ulong)uVar114 >> 0x20);
              uVar114 = NEON_frecps(uVar124,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar114;
              fVar122 = fVar122 * (float)((ulong)uVar114 >> 0x20);
              uVar114 = NEON_frecps(uVar124,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar114;
              fVar122 = fVar122 * (float)((ulong)uVar114 >> 0x20);
              uVar124 = NEON_frecps(uVar124,CONCAT44(fVar122,fVar121),4);
              uVar114 = NEON_fmov(0x3f800000,4);
              uVar124 = NEON_fmin(CONCAT44((auVar107._0_4_ + auVar107._4_4_ + fVar27) *
                                           fVar122 * (float)((ulong)uVar124 >> 0x20),
                                           (auVar107._0_4_ + auVar107._4_4_ + fVar27) *
                                           fVar121 * (float)uVar124),uVar114,4);
              uVar124 = NEON_fmax(uVar124,0,4);
              fVar27 = (float)uVar124;
              fVar123 = fVar123 * fVar27;
              fVar77 = fVar77 * fVar27;
              fVar22 = fVar22 * fVar27;
              fVar120 = fVar120 * fVar27;
              goto LAB_002c9d3c;
            }
LAB_002c9d50:
            auVar100._8_8_ = uStack_f8;
            auVar100._0_4_ = local_100[0];
            auVar100._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
      }
      fVar78 = auVar100._0_4_;
      auVar69._0_4_ = fVar78 * fVar78;
      fVar95 = auVar100._4_4_;
      auVar69._4_4_ = fVar95 * fVar95;
      fVar120 = auVar100._8_4_;
      auVar69._8_4_ = fVar120 * fVar120;
      auVar69._12_4_ = auVar100._12_4_ * auVar100._12_4_;
      auVar127 = NEON_ext(auVar69,auVar69,8,1);
      uStack_b8 = auVar100._8_8_;
      local_c0 = auVar100._0_8_;
      fVar96 = auVar127._0_4_ + auVar127._4_4_;
      fVar23 = auVar69._0_4_ + auVar69._4_4_ + fVar96;
      fVar96 = auVar69._0_4_ + auVar69._4_4_ + fVar96;
      uVar98 = CONCAT44(fVar96,fVar23);
      uVar124 = NEON_frsqrte(uVar98,4);
      fVar123 = (float)uVar124;
      fVar77 = (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar123 * fVar123),uVar98,4);
      fVar123 = fVar123 * (float)uVar124;
      fVar77 = fVar77 * (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar123 * fVar123),uVar98,4);
      fVar123 = fVar123 * (float)uVar124;
      fVar77 = fVar77 * (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar123 * fVar123),uVar98,4);
      fVar123 = fVar123 * (float)uVar124;
      fVar77 = fVar77 * (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frsqrts(CONCAT44(fVar77 * fVar77,fVar123 * fVar123),uVar98,4);
      uVar15 = CONCAT44(fVar96 * fVar77 * (float)((ulong)uVar124 >> 0x20),
                        fVar23 * fVar123 * (float)uVar124);
      uVar15 = uVar15 ^ (uVar15 ^ uVar98) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
      uVar124 = NEON_frecpe(uVar15,4);
      uVar114 = NEON_frecps(uVar15,uVar124,4);
      fVar23 = (float)uVar124 * (float)uVar114;
      fVar96 = (float)((ulong)uVar124 >> 0x20) * (float)((ulong)uVar114 >> 0x20);
      uVar124 = NEON_frecps(uVar15,CONCAT44(fVar96,fVar23),4);
      fVar23 = fVar23 * (float)uVar124;
      fVar96 = fVar96 * (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frecps(uVar15,CONCAT44(fVar96,fVar23),4);
      fVar23 = fVar23 * (float)uVar124;
      fVar96 = fVar96 * (float)((ulong)uVar124 >> 0x20);
      uVar124 = NEON_frecps(uVar15,CONCAT44(fVar96,fVar23),4);
      fVar23 = fVar23 * (float)uVar124;
      uVar124 = NEON_frecps(uVar15,CONCAT44(fVar96 * (float)((ulong)uVar124 >> 0x20),fVar23),4);
      fVar23 = fVar23 * (float)uVar124;
      auVar129._0_4_ = fVar78 * fVar23;
      auVar129._4_4_ = fVar95 * fVar23;
      auVar129._8_4_ = fVar120 * fVar23;
      bVar7 = (float)uVar15 < fVar113;
      bVar4 = fVar137 < (float)uVar15 && bVar7;
      auVar90._0_4_ = -(uint)bVar4;
      auVar90._4_4_ = -(uint)bVar4;
      auVar90._8_4_ = -(uint)bVar4;
      auVar90._12_4_ = -(uint)bVar4;
      NEON_ext(auVar90,auVar90,8,1);
    } while (CONCAT13((char)auVar90._12_4_,
                      CONCAT12((char)auVar90._8_4_,CONCAT11((char)auVar90._4_4_,(char)auVar90._0_4_)
                              )) == -1);
    uVar34 = CONCAT26(-(ushort)!bVar7,
                      CONCAT24(-(ushort)!bVar7,CONCAT22(-(ushort)!bVar7,-(ushort)!bVar7)));
  }
  else {
    uVar34 = 0;
  }
  uVar25 = (ushort)((ulong)uVar34 >> 0x10);
  uVar26 = (ushort)((ulong)uVar34 >> 0x20);
  uVar32 = (ushort)((ulong)uVar34 >> 0x30);
  auVar66._0_4_ = (int)((uint)(ushort)uVar34 << 0x1f) >> 0x1f;
  auVar66._4_4_ = (int)((uint)uVar25 << 0x1f) >> 0x1f;
  auVar66._8_4_ = (int)((uint)uVar26 << 0x1f) >> 0x1f;
  auVar66._12_4_ = (int)((uint)uVar32 << 0x1f) >> 0x1f;
  auVar67 = NEON_ext(auVar66,auVar66,8,1);
  auVar44._0_4_ =
       (float)CONCAT13((char)((short)(uVar32 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar26 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar25 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar34 << 0xf) >> 0xf))));
  auVar44[4] = auVar67[0];
  auVar44[5] = auVar67[2];
  auVar44[6] = auVar67[4];
  auVar44[7] = auVar67[6];
  auVar44._8_8_ = 0;
  if (auVar44._0_4_ != -NAN) {
    if ((param_9 != (byte *)0x0) && (*param_11 = (byte)local_1a4, local_1a4 != 0)) {
      if (local_1a4 == 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pfVar12 = local_1a0 + 5;
        pfVar16 = local_1a0 + 1;
        do {
          pfVar20 = pfVar12 + -1;
          fVar147 = *pfVar12;
          pbVar9 = param_9 + lVar10;
          fVar137 = pfVar16[-1];
          fVar170 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar9 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar137,0);
          pbVar9[1] = SUB41(fVar147,0);
          param_10[lVar13] = SUB41(fVar170,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar10);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar137 = local_1a0[lVar10];
      param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
      param_10[lVar10] = SUB41(fVar137,0);
    }
    return 5;
  }
  local_c0 = auVar83._0_8_;
  uStack_b8 = auVar83._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_002ca4bc:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar44._0_4_ =
           local_140 +
           ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0];
      auVar44._4_4_ =
           fStack_13c +
           (uStack_130._4_4_ - fStack_13c) * local_a8[0] + (fStack_11c - fStack_13c) * local_b0[0];
      auVar44._8_4_ =
           fStack_138 +
           ((float)uStack_128 - fStack_138) * local_a8[0] + (fStack_118 - fStack_138) * local_b0[0];
      auVar44._12_4_ = fStack_134 + 0.0;
      auVar67._0_4_ =
           (float)local_180 +
           ((float)uStack_170 - (float)local_180) * local_a8[0] +
           (local_160 - (float)local_180) * local_b0[0];
      auVar67._4_4_ =
           local_180._4_4_ +
           (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
           (fStack_15c - local_180._4_4_) * local_b0[0];
      auVar67._8_4_ =
           fStack_178 +
           ((float)uStack_168 - fStack_178) * local_a8[0] + (fStack_158 - fStack_178) * local_b0[0];
      auVar67._12_4_ = fStack_174 + 0.0;
      goto LAB_002ca5cc;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar53._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar53._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar53._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar100 = NEON_ext(auVar53,auVar53,8,1);
      auVar44._8_4_ = (float)auVar100._0_4_;
      auVar44._0_8_ = auVar53._0_8_;
      auVar44._12_4_ = 0.0;
      auVar70._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar70._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar70._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar100 = NEON_ext(auVar70,auVar70,8,1);
      auVar67._8_4_ = (float)auVar100._0_4_;
      auVar67._0_8_ = auVar70._0_8_;
      auVar67._12_4_ = 0.0;
      goto LAB_002ca5cc;
    }
    if (local_1a4 != 1) goto LAB_002ca5cc;
  }
  else {
    uVar33 = local_1a4 - 1;
    *param_11 = (byte)uVar33;
    if (uVar33 != 0) {
      if (uVar33 == 1) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        pfVar12 = local_1a0 + 5;
        pfVar16 = local_1a0 + 1;
        do {
          pfVar20 = pfVar12 + -1;
          fVar23 = *pfVar12;
          pbVar9 = param_9 + lVar10;
          fVar137 = pfVar16[-1];
          fVar96 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar9 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar137,0);
          pbVar9[1] = SUB41(fVar23,0);
          param_10[lVar13] = SUB41(fVar96,0);
        } while ((ulong)uVar33 - ((ulong)uVar33 & 1) != lVar10);
        if ((uVar33 & 1) == 0) goto LAB_002ca4bc;
      }
      fVar137 = local_1a0[lVar10];
      param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
      param_10[lVar10] = SUB41(fVar137,0);
      goto LAB_002ca4bc;
    }
  }
  auVar44._4_4_ = fStack_13c;
  auVar44._0_4_ = local_140;
  auVar44._8_4_ = fStack_138;
  auVar44._12_4_ = fStack_134;
  auVar67._4_4_ = local_180._4_4_;
  auVar67._0_4_ = (float)local_180;
  auVar67._8_4_ = fStack_178;
  auVar67._12_4_ = fStack_174;
LAB_002ca5cc:
  uVar34 = NEON_frecpe(uVar146,4);
  uVar35 = NEON_frecps(uVar146,uVar34,4);
  fVar137 = (float)uVar34 * (float)uVar35;
  fVar23 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  uVar34 = NEON_frecps(uVar146,CONCAT44(fVar23,fVar137),4);
  fVar137 = fVar137 * (float)uVar34;
  fVar23 = fVar23 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar146,CONCAT44(fVar23,fVar137),4);
  fVar137 = fVar137 * (float)uVar34;
  fVar23 = fVar23 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar146,CONCAT44(fVar23,fVar137),4);
  fVar137 = fVar137 * (float)uVar34;
  uVar34 = NEON_frecps(uVar146,CONCAT44(fVar23 * (float)((ulong)uVar34 >> 0x20),fVar137),4);
  fVar137 = fVar137 * (float)uVar34;
  local_c0._0_4_ = (float)local_c0 * fVar137;
  local_c0._4_4_ = local_c0._4_4_ * fVar137;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar137;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar137 = (float)uVar146;
  fVar23 = (float)(uVar146 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar55._0_8_ =
         CONCAT44(auVar44._4_4_ - local_c0._4_4_ * fVar171,auVar44._0_4_ - (float)local_c0 * fVar171
                 );
    auVar55._8_4_ = auVar44._8_4_ - (float)uStack_b8 * fVar171;
    auVar55._12_4_ = auVar44._12_4_ - fVar171 * 0.0;
    auVar72._0_8_ =
         CONCAT44(auVar67._4_4_ + local_c0._4_4_ * fVar170,auVar67._0_4_ + (float)local_c0 * fVar170
                 );
    auVar72._8_4_ = auVar67._8_4_ + (float)uStack_b8 * fVar170;
    auVar72._12_4_ = auVar67._12_4_ + fVar170 * 0.0;
    auVar100 = NEON_ext(auVar55,auVar55,8,1);
    auVar83 = NEON_ext(auVar72,auVar72,8,1);
    param_5[1] = (ulong)auVar100._0_4_;
    *param_5 = auVar55._0_8_;
    param_6[1] = (ulong)auVar83._0_4_;
    *param_6 = auVar72._0_8_;
    *param_8 = CONCAT44(fVar23 - fVar147,fVar137 - fVar147);
  }
  else {
    iVar61 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar97 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar92 = (byte)((uint)iVar61 >> 8);
    bVar93 = (byte)((uint)iVar61 >> 0x10);
    bVar94 = (byte)((uint)iVar61 >> 0x18);
    fVar170 = (float)CONCAT13(bVar145 & ~bVar94,
                              CONCAT12(bVar144 & ~bVar93,
                                       CONCAT11(bVar143 & ~bVar92,bVar142 & ~(byte)iVar61)));
    bVar110 = (byte)((uint)iVar97 >> 8);
    bVar111 = (byte)((uint)iVar97 >> 0x10);
    bVar112 = (byte)((uint)iVar97 >> 0x18);
    fVar171 = (float)CONCAT13(bVar141 & ~bVar112,
                              CONCAT12(bVar140 & ~bVar111,
                                       CONCAT11(bVar139 & ~bVar110,bVar138 & ~(byte)iVar97)));
    auVar54._0_8_ =
         CONCAT44(auVar44._4_4_ - local_c0._4_4_ * fVar170,auVar44._0_4_ - (float)local_c0 * fVar170
                 );
    auVar54._8_4_ = auVar44._8_4_ - (float)uStack_b8 * fVar170;
    auVar54._12_4_ = auVar44._12_4_ - fVar170 * 0.0;
    auVar71._0_8_ =
         CONCAT44(auVar67._4_4_ + local_c0._4_4_ * fVar171,auVar67._0_4_ + (float)local_c0 * fVar171
                 );
    auVar71._8_4_ = auVar67._8_4_ + (float)uStack_b8 * fVar171;
    auVar71._12_4_ = auVar67._12_4_ + fVar171 * 0.0;
    auVar100 = NEON_ext(auVar54,auVar54,8,1);
    auVar83 = NEON_ext(auVar71,auVar71,8,1);
    param_5[1] = (ulong)auVar100._0_4_;
    *param_5 = auVar54._0_8_;
    param_6[1] = (ulong)auVar83._0_4_;
    *param_6 = auVar71._0_8_;
    *param_8 = CONCAT44(fVar23 - ((float)(CONCAT17(bVar145 & ~bVar94,
                                                   CONCAT16(bVar144 & ~bVar93,
                                                            CONCAT15(bVar143 & ~bVar92,
                                                                     CONCAT14(bVar142 & ~(byte)
                                                  iVar61,fVar170)))) >> 0x20) +
                                 (float)(CONCAT17(bVar141 & ~bVar112,
                                                  CONCAT16(bVar140 & ~bVar111,
                                                           CONCAT15(bVar139 & ~bVar110,
                                                                    CONCAT14(bVar138 & ~(byte)iVar97
                                                                             ,fVar171)))) >> 0x20)),
                        fVar137 - (fVar170 + fVar171));
    if (fVar137 <= fVar147 + (float)uVar62) {
      return 2;
    }
  }
  return 4;
}


