/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002de860; name: FUN_002de860
 */


/* WARNING: Removing unreachable block (ram,0x002dfcd4) */
/* WARNING: Removing unreachable block (ram,0x002df314) */
/* WARNING: Removing unreachable block (ram,0x002dfd54) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002de860(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            byte *param_9,byte *param_10,byte *param_11,byte param_12)

{
  float *pfVar1;
  undefined1 auVar2 [12];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 (*pauVar10) [16];
  float *pfVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  float *pfVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  ushort uVar24;
  float fVar23;
  ushort uVar25;
  float fVar26;
  float fVar27;
  ushort uVar32;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar33;
  undefined8 uVar34;
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
  float fVar60;
  float fVar61;
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
  undefined1 auVar59 [16];
  int iVar62;
  undefined8 uVar63;
  float fVar79;
  float fVar80;
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
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar81;
  byte bVar94;
  byte bVar95;
  float fVar97;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  byte bVar96;
  undefined1 auVar93 [16];
  int iVar98;
  ulong uVar99;
  byte bVar113;
  byte bVar114;
  byte bVar115;
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
  undefined8 uVar116;
  float fVar121;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar122;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined8 uVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 uVar126;
  undefined1 auVar127 [12];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  float fVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  ulong uVar144;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
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
  float fVar157;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  float fVar164;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined8 uVar168;
  float fVar169;
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
  
  lVar9 = *(long *)(param_2 + 8);
  lVar16 = *(long *)(param_1 + 8);
  fVar157 = *(float *)(lVar16 + 0x10);
  fVar169 = *(float *)(lVar9 + 0x10);
  uVar34 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar16 + 0x14),*(undefined4 *)(lVar16 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x14)),4);
  fVar147 = fVar157 + fVar169;
  uVar63 = *param_4;
  local_1a4 = 0;
  bVar136 = *param_11;
  uVar12 = (ulong)bVar136;
  fVar135 = (float)uVar34 * 0.1;
  if (bVar136 == 0) {
    auVar101 = *param_3;
    auVar86._0_4_ = auVar101._0_4_ * auVar101._0_4_;
    auVar86._4_4_ = auVar101._4_4_ * auVar101._4_4_;
    auVar86._8_4_ = auVar101._8_4_ * auVar101._8_4_;
    auVar86._12_4_ = auVar101._12_4_ * auVar101._12_4_;
    auVar106 = NEON_ext(auVar86,auVar86,8,1);
    auVar106._0_4_ = -(uint)(0.0 < auVar86._0_4_ + auVar86._4_4_ + auVar106._0_4_ + auVar106._4_4_);
    auVar167._8_8_ = _UNK_01d4ae58;
    auVar167._0_8_ = _DAT_01d4ae50;
    uVar144 = 0x7f7fffff7f7fffff;
    auVar106._4_4_ = auVar106._0_4_;
    auVar106._8_4_ = auVar106._0_4_;
    auVar106._12_4_ = auVar106._0_4_;
    auVar101 = auVar167 ^ (auVar167 ^ auVar101) & auVar106;
    fVar60 = auVar101._0_4_;
    auVar129._0_4_ = fVar60 * fVar60;
    fVar61 = auVar101._4_4_;
    auVar129._4_4_ = fVar61 * fVar61;
    fVar81 = auVar101._8_4_;
    auVar129._8_4_ = fVar81 * fVar81;
    auVar129._12_4_ = auVar101._12_4_ * auVar101._12_4_;
    auVar86 = NEON_ext(auVar129,auVar129,8,1);
    uStack_b8 = auVar101._8_8_;
    local_c0 = auVar101._0_8_;
    fVar27 = auVar86._0_4_ + auVar86._4_4_;
    fVar22 = auVar129._0_4_ + auVar129._4_4_ + fVar27;
    fVar27 = auVar129._0_4_ + auVar129._4_4_ + fVar27;
    uVar12 = CONCAT44(fVar27,fVar22);
    uVar34 = NEON_frsqrte(uVar12,4);
    fVar97 = (float)uVar34;
    fVar79 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar34;
    fVar79 = fVar79 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar34;
    fVar79 = fVar79 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar34;
    fVar79 = fVar79 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    uVar99 = CONCAT44(fVar27 * fVar79 * (float)((ulong)uVar34 >> 0x20),
                      fVar22 * fVar97 * (float)uVar34);
    uVar99 = uVar99 ^ (uVar99 ^ uVar12) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0));
    uVar34 = NEON_frecpe(uVar99,4);
    uVar35 = NEON_frecps(uVar99,uVar34,4);
    fVar22 = (float)uVar34 * (float)uVar35;
    fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
    uVar34 = NEON_frecps(uVar99,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar99,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar99,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    uVar34 = NEON_frecps(uVar99,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    auVar86 = ZEXT816(0);
    auVar127._0_4_ = fVar60 * fVar22;
    auVar127._4_4_ = fVar61 * fVar22;
    auVar127._8_4_ = fVar81 * fVar22;
    iVar62 = -1;
  }
  else {
    pfVar14 = *(float **)(param_1 + 0x10);
    pfVar19 = local_1a0 + 4;
    pfVar11 = local_1a0;
    pfVar13 = local_100;
    puVar20 = &local_180;
    pfVar15 = &local_140;
    pbVar7 = param_10;
    pbVar8 = param_9;
    uVar34 = uVar63;
    fVar22 = fVar169;
    while( true ) {
      uVar12 = uVar12 - 1;
      bVar137 = *pbVar8;
      bVar138 = *pbVar7;
      *pfVar19 = (float)(uint)bVar137;
      *pfVar11 = (float)(uint)bVar138;
      pfVar1 = (float *)(lVar16 + 0x30 + (1 - (ulong)bVar137) * 0x10);
      fVar27 = *pfVar1;
      fVar60 = pfVar1[1];
      fVar61 = pfVar1[2];
      auVar101 = *(undefined1 (*) [16])(pfVar14 + 8);
      auVar86 = *(undefined1 (*) [16])(pfVar14 + 0xc);
      fVar81 = auVar86._0_4_ + *pfVar14 * fVar27 + pfVar14[4] * fVar60 + auVar101._0_4_ * fVar61;
      fVar97 = auVar86._4_4_ + pfVar14[1] * fVar27 + pfVar14[5] * fVar60 + auVar101._4_4_ * fVar61;
      auVar82._0_8_ = CONCAT44(fVar97,fVar81);
      auVar82._8_4_ =
           auVar86._8_4_ + pfVar14[2] * fVar27 + pfVar14[6] * fVar60 + auVar101._8_4_ * fVar61;
      auVar82._12_4_ = auVar86._12_4_ + 0.0;
      auVar36._0_4_ = *(float *)(lVar9 + 0x30) - fVar22;
      auVar36._4_4_ = *(float *)(lVar9 + 0x34) - fVar22;
      auVar36._8_4_ = *(float *)(lVar9 + 0x38) - fVar22;
      auVar36._12_4_ = *(float *)(lVar9 + 0x3c) - 0.0;
      auVar100._0_4_ = -auVar36._0_4_;
      auVar100._4_4_ = -auVar36._4_4_;
      auVar100._8_4_ = -auVar36._8_4_;
      auVar100._12_4_ = 0;
      auVar100 = auVar100 ^
                 (auVar100 ^ auVar36) &
                 *(undefined1 (*) [16])(PTR_DAT_02711e70 + (ulong)bVar138 * 0x10);
      uVar35 = *(undefined8 *)(lVar9 + 0x40);
      *(long *)(pfVar15 + 2) = auVar82._8_8_;
      *(undefined8 *)pfVar15 = auVar82._0_8_;
      puVar20[1] = auVar100._8_8_;
      *puVar20 = auVar100._0_8_;
      uVar34 = NEON_fmax(uVar34,CONCAT44((float)((ulong)uVar63 >> 0x20) +
                                         (float)((ulong)uVar35 >> 0x20) + 0.0,
                                         (float)uVar63 + (float)uVar35 + 0.0),4);
      auVar101._0_8_ = CONCAT44(fVar97 - auVar100._4_4_,fVar81 - auVar100._0_4_);
      auVar101._8_4_ = auVar82._8_4_ - auVar100._8_4_;
      auVar101._12_4_ = auVar82._12_4_ - auVar100._12_4_;
      *(long *)(pfVar13 + 2) = auVar101._8_8_;
      *(undefined8 *)pfVar13 = auVar101._0_8_;
      if (uVar12 == 0) break;
      fVar22 = *(float *)(lVar9 + 0x10);
      pbVar8 = pbVar8 + 1;
      pfVar19 = pfVar19 + 1;
      pbVar7 = pbVar7 + 1;
      pfVar11 = pfVar11 + 1;
      pfVar13 = pfVar13 + 4;
      puVar20 = puVar20 + 2;
      pfVar15 = pfVar15 + 4;
    }
    local_1a4 = (uint)bVar136;
    if (bVar136 == 4) {
      auVar101 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar22 = local_100[0];
      fVar27 = local_100[1];
      fVar60 = (float)uStack_f8;
      fVar61 = SUB84(uStack_f8,4);
      if (local_1a4 == 3) {
        auVar101._8_8_ = uStack_f8;
        auVar101._0_4_ = local_100[0];
        auVar101._4_4_ = local_100[1];
        auVar4._4_4_ = fStack_ec;
        auVar4._0_4_ = local_f0;
        auVar4._8_4_ = fStack_e8;
        auVar4._12_4_ = fStack_e4;
        auVar117._0_4_ = local_f0 - fVar22;
        auVar117._4_4_ = fStack_ec - fVar27;
        auVar117._8_4_ = fStack_e8 - fVar60;
        auVar117._12_4_ = fStack_e4 - fVar61;
        fVar79 = local_e0[0]._0_4_;
        auVar104._0_4_ = fVar79 - fVar22;
        fVar80 = local_e0[0]._4_4_;
        auVar104._4_4_ = fVar80 - fVar27;
        fVar21 = local_e0[0]._8_4_;
        auVar104._8_4_ = fVar21 - fVar60;
        auVar104._12_4_ = local_e0[0]._12_4_ - fVar61;
        auVar86 = NEON_ext(auVar117,auVar117,8,1);
        auVar106 = NEON_ext(auVar104,auVar104,8,1);
        fVar122 = auVar117._0_4_ * auVar104._4_4_ - auVar117._4_4_ * auVar104._0_4_;
        uVar63 = NEON_ext(CONCAT44(auVar117._4_4_ * auVar104._8_4_ - auVar117._8_4_ * auVar104._4_4_
                                   ,fVar122),
                          CONCAT44(auVar86._4_4_ * auVar104._4_4_ - auVar117._4_4_ * auVar106._4_4_,
                                   auVar86._0_4_ * auVar104._0_4_ - auVar117._0_4_ * auVar106._0_4_)
                          ,4,1);
        fVar26 = (float)uVar63;
        auVar128._0_4_ = fVar26 * fVar26;
        fVar121 = (float)((ulong)uVar63 >> 0x20);
        auVar128._4_4_ = fVar121 * fVar121;
        auVar128._8_4_ = fVar122 * fVar122;
        auVar128._12_4_ = 0;
        auVar86 = NEON_ext(auVar128,auVar128,8,1);
        fVar97 = auVar86._0_4_ + auVar86._4_4_;
        fVar81 = auVar128._0_4_ + auVar128._4_4_ + fVar97;
        uVar63 = CONCAT44(auVar128._0_4_ + auVar128._4_4_ + fVar97,fVar81);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar81) {
          if (fVar81 != 0.0) {
            auVar86 = NEON_ext(auVar4,auVar4,8,1);
            auVar106 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar131 = local_f0 * fVar80 - fStack_ec * fVar79;
            auVar129 = NEON_ext(auVar101,auVar101,8,1);
            uVar116 = NEON_ext(CONCAT44(fStack_ec * fVar21 - fStack_e8 * fVar80,fVar131),
                               CONCAT44(auVar86._4_4_ * fVar80 - fStack_ec * auVar106._4_4_,
                                        auVar86._0_4_ * fVar79 - local_f0 * auVar106._0_4_),4,1);
            fVar81 = fVar27 * fVar79 - fVar22 * fVar80;
            uVar126 = NEON_ext(CONCAT44(fVar60 * fVar80 - fVar27 * fVar21,fVar81),
                               CONCAT44(fVar27 * auVar106._4_4_ - auVar129._4_4_ * fVar80,
                                        fVar22 * auVar106._0_4_ - auVar129._0_4_ * fVar79),4,1);
            fVar97 = fVar22 * fStack_ec - fVar27 * local_f0;
            uVar35 = NEON_ext(CONCAT44(fVar27 * fStack_e8 - fVar60 * fStack_ec,fVar97),
                              CONCAT44(auVar129._4_4_ * fStack_ec - fVar27 * auVar86._4_4_,
                                       auVar129._0_4_ * local_f0 - fVar22 * auVar86._0_4_),4,1);
            auVar132._0_4_ = (float)uVar116 * fVar26;
            auVar132._4_4_ = (float)((ulong)uVar116 >> 0x20) * fVar121;
            auVar132._8_4_ = fVar131 * fVar122;
            auVar132._12_4_ = 0;
            auVar86 = NEON_ext(auVar132,auVar132,8,1);
            auVar158._0_4_ = (float)uVar126 * fVar26;
            auVar158._4_4_ = (float)((ulong)uVar126 >> 0x20) * fVar121;
            auVar158._8_4_ = fVar81 * fVar122;
            auVar158._12_4_ = 0;
            auVar124._0_4_ = (float)uVar35 * fVar26;
            auVar124._4_4_ = (float)((ulong)uVar35 >> 0x20) * fVar121;
            auVar124._8_4_ = fVar97 * fVar122;
            auVar124._12_4_ = 0;
            fVar81 = auVar132._0_4_ + auVar132._4_4_ + auVar86._0_4_ + auVar86._4_4_;
            auVar86 = NEON_ext(auVar158,auVar158,8,1);
            auVar106 = NEON_ext(auVar124,auVar124,8,1);
            fVar97 = auVar158._0_4_ + auVar158._4_4_ + auVar86._0_4_ + auVar86._4_4_;
            fVar131 = auVar124._0_4_ + auVar124._4_4_ + auVar106._0_4_ + auVar106._4_4_;
            bVar6 = 0.0 <= fVar131 && (0.0 <= fVar81 && 0.0 <= fVar97);
            auVar159._0_4_ = -(uint)bVar6;
            auVar159._4_4_ = -(uint)bVar6;
            auVar159._8_4_ = -(uint)bVar6;
            auVar159._12_4_ = -(uint)bVar6;
            NEON_ext(auVar159,auVar159,8,1);
            if (CONCAT13((char)auVar159._12_4_,
                         CONCAT12((char)auVar159._8_4_,
                                  CONCAT11((char)auVar159._4_4_,(char)auVar159._0_4_))) == -1) {
              auVar40._0_4_ = fVar22 * fVar26;
              auVar40._4_4_ = fVar27 * fVar121;
              auVar40._8_4_ = fVar60 * fVar122;
              auVar40._12_4_ = fVar61 * 0.0;
              auVar101 = NEON_ext(auVar40,auVar40,8,1);
              uVar35 = NEON_frecpe(uVar63,4);
              uVar126 = NEON_frecps(uVar63,uVar35,4);
              fVar22 = (float)uVar35 * (float)uVar126;
              fVar27 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
              uVar35 = NEON_frecps(uVar63,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar35;
              fVar27 = fVar27 * (float)((ulong)uVar35 >> 0x20);
              uVar35 = NEON_frecps(uVar63,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar35;
              fVar27 = fVar27 * (float)((ulong)uVar35 >> 0x20);
              uVar35 = NEON_frecps(uVar63,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar35;
              uVar63 = NEON_frecps(uVar63,CONCAT44(fVar27 * (float)((ulong)uVar35 >> 0x20),fVar22),4
                                  );
              fVar22 = (auVar40._0_4_ + auVar40._4_4_ + auVar101._0_4_ + auVar101._4_4_) *
                       fVar22 * (float)uVar63;
              auVar101._0_4_ = fVar26 * fVar22;
              auVar101._4_4_ = fVar121 * fVar22;
              auVar101._8_4_ = fVar122 * fVar22;
              auVar101._12_4_ = 0.0;
            }
            else {
              auVar145._0_4_ = -fVar22 * auVar117._0_4_;
              auVar145._4_4_ = -fVar27 * auVar117._4_4_;
              auVar145._8_4_ = -fVar60 * auVar117._8_4_;
              auVar145._12_4_ = auVar117._12_4_ * 0.0;
              auVar86 = NEON_ext(auVar145,auVar145,8,1);
              fVar122 = auVar86._0_4_ + auVar86._4_4_;
              auVar148._0_4_ = -local_f0 * auVar117._0_4_;
              auVar148._4_4_ = -fStack_ec * auVar117._4_4_;
              auVar148._8_4_ = -fStack_e8 * auVar117._8_4_;
              auVar148._12_4_ = auVar117._12_4_ * 0.0;
              auVar86 = NEON_ext(auVar148,auVar148,8,1);
              fVar164 = auVar86._0_4_ + auVar86._4_4_;
              fVar26 = auVar145._0_4_ + auVar145._4_4_ + fVar122;
              fVar121 = auVar148._0_4_ + auVar148._4_4_ + fVar164;
              fVar164 = auVar148._0_4_ + auVar148._4_4_ + fVar164;
              bVar6 = (0.0 <= fVar26 && fVar131 <= 0.0) && fVar121 <= 0.0;
              auVar162._0_4_ = -(uint)bVar6;
              auVar162._4_4_ = -(uint)bVar6;
              auVar162._8_4_ = -(uint)bVar6;
              auVar162._12_4_ = -(uint)bVar6;
              NEON_ext(auVar162,auVar162,8,1);
              pauVar18 = (undefined1 (*) [16])&local_f0;
              if (CONCAT13((char)auVar162._12_4_,
                           CONCAT12((char)auVar162._8_4_,
                                    CONCAT11((char)auVar162._4_4_,(char)auVar162._0_4_))) == -1) {
                uVar63 = CONCAT44((auVar145._0_4_ + auVar145._4_4_ + fVar122) - fVar164,
                                  fVar26 - fVar121);
                uVar35 = NEON_frecpe(uVar63,4);
                uVar126 = NEON_frecps(uVar63,uVar35,4);
                fVar81 = (float)uVar35 * (float)uVar126;
                fVar97 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
                uVar35 = NEON_frecps(uVar63,CONCAT44(fVar97,fVar81),4);
                fVar81 = fVar81 * (float)uVar35;
                fVar97 = fVar97 * (float)((ulong)uVar35 >> 0x20);
                uVar35 = NEON_frecps(uVar63,CONCAT44(fVar97,fVar81),4);
                fVar81 = fVar81 * (float)uVar35;
                fVar97 = fVar97 * (float)((ulong)uVar35 >> 0x20);
                uVar35 = NEON_frecps(uVar63,CONCAT44(fVar97,fVar81),4);
                fVar81 = fVar81 * (float)uVar35;
                uVar63 = NEON_frecps(uVar63,CONCAT44(fVar97 * (float)((ulong)uVar35 >> 0x20),fVar81)
                                     ,4);
                fVar26 = fVar26 * (float)(-(uint)(1.1920929e-07 < ABS(fVar26 - fVar121)) &
                                         (uint)(fVar81 * (float)uVar63));
                lVar9 = 0;
                auVar41._0_8_ =
                     CONCAT44(fVar27 + auVar117._4_4_ * fVar26,fVar22 + auVar117._0_4_ * fVar26);
                auVar41._8_4_ = fVar60 + auVar117._8_4_ * fVar26;
                auVar41._12_4_ = fVar61 + auVar117._12_4_ * fVar26;
                auVar101 = NEON_ext(auVar41,auVar41,8,1);
                pauVar17 = (undefined1 (*) [16])local_100;
                auVar101._8_4_ = (float)auVar101._0_4_;
                auVar101._0_8_ = auVar41._0_8_;
                auVar101._12_4_ = 0.0;
                local_1a4 = 2;
LAB_002df180:
                lVar16 = 1;
                pauVar10 = pauVar18;
                pauVar18 = pauVar17;
              }
              else {
                auVar163._0_4_ = -local_f0 * auVar104._0_4_;
                auVar163._4_4_ = -fStack_ec * auVar104._4_4_;
                auVar163._8_4_ = -fStack_e8 * auVar104._8_4_;
                auVar163._12_4_ = auVar104._12_4_ * 0.0;
                auVar86 = NEON_ext(auVar163,auVar163,8,1);
                fVar23 = auVar86._0_4_ + auVar86._4_4_;
                auVar118._0_4_ = auVar117._0_4_ * -fVar79;
                auVar118._4_4_ = auVar117._4_4_ * -fVar80;
                auVar118._8_4_ = auVar117._8_4_ * -fVar21;
                auVar118._12_4_ = auVar117._12_4_ * 0.0;
                auVar166._0_4_ = auVar104._0_4_ * -fVar79;
                auVar166._4_4_ = auVar104._4_4_ * -fVar80;
                auVar166._8_4_ = auVar104._8_4_ * -fVar21;
                auVar166._12_4_ = auVar104._12_4_ * 0.0;
                fVar122 = auVar163._0_4_ + auVar163._4_4_ + fVar23;
                auVar86 = NEON_ext(auVar118,auVar118,8,1);
                fVar29 = auVar86._0_4_ + auVar86._4_4_;
                fVar131 = auVar118._0_4_ + auVar118._4_4_ + fVar29;
                auVar86 = NEON_ext(auVar166,auVar166,8,1);
                fVar30 = auVar86._0_4_ + auVar86._4_4_;
                fVar28 = auVar166._0_4_ + auVar166._4_4_ + fVar30;
                fVar30 = auVar166._0_4_ + auVar166._4_4_ + fVar30;
                pauVar10 = local_e0;
                bVar6 = (fVar121 <= fVar122 && fVar81 <= 0.0) && fVar28 <= fVar131;
                auVar152._0_4_ = -(uint)bVar6;
                auVar152._4_4_ = -(uint)bVar6;
                auVar152._8_4_ = -(uint)bVar6;
                auVar152._12_4_ = -(uint)bVar6;
                NEON_ext(auVar152,auVar152,8,1);
                if (CONCAT13((char)auVar152._12_4_,
                             CONCAT12((char)auVar152._8_4_,
                                      CONCAT11((char)auVar152._4_4_,(char)auVar152._0_4_))) == -1) {
                  local_1a4 = 2;
                  lVar9 = 1;
                  fVar22 = (fVar122 - fVar121) + (fVar131 - fVar28);
                  uVar63 = CONCAT44(((auVar163._0_4_ + auVar163._4_4_ + fVar23) - fVar164) +
                                    ((auVar118._0_4_ + auVar118._4_4_ + fVar29) - fVar30),fVar22);
                  uVar35 = NEON_frecpe(uVar63,4);
                  uVar126 = NEON_frecps(uVar63,uVar35,4);
                  fVar27 = (float)uVar35 * (float)uVar126;
                  fVar60 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar60,fVar27),4);
                  fVar27 = fVar27 * (float)uVar35;
                  fVar60 = fVar60 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar60,fVar27),4);
                  fVar27 = fVar27 * (float)uVar35;
                  fVar60 = fVar60 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar60,fVar27),4);
                  fVar27 = fVar27 * (float)uVar35;
                  uVar63 = NEON_frecps(uVar63,CONCAT44(fVar60 * (float)((ulong)uVar35 >> 0x20),
                                                       fVar27),4);
                  fVar22 = (fVar122 - fVar121) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar22)) &
                                  (uint)(fVar27 * (float)uVar63));
                  auVar42._0_8_ =
                       CONCAT44(fStack_ec + (fVar80 - fStack_ec) * fVar22,
                                local_f0 + (fVar79 - local_f0) * fVar22);
                  auVar42._8_4_ = fStack_e8 + (fVar21 - fStack_e8) * fVar22;
                  auVar42._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar22;
                  auVar101 = NEON_ext(auVar42,auVar42,8,1);
                  auVar101._8_4_ = (float)auVar101._0_4_;
                  auVar101._0_8_ = auVar42._0_8_;
                  auVar101._12_4_ = 0.0;
                  lVar16 = 2;
                }
                else {
                  auVar153._0_4_ = -fVar22 * auVar104._0_4_;
                  auVar153._4_4_ = -fVar27 * auVar104._4_4_;
                  auVar153._8_4_ = -fVar60 * auVar104._8_4_;
                  auVar153._12_4_ = auVar104._12_4_ * 0.0;
                  auVar86 = NEON_ext(auVar153,auVar153,8,1);
                  fVar79 = auVar86._0_4_ + auVar86._4_4_;
                  fVar81 = auVar153._0_4_ + auVar153._4_4_ + fVar79;
                  bVar6 = (fVar97 <= 0.0 && 0.0 <= fVar81) && fVar28 <= 0.0;
                  auVar133._0_4_ = -(uint)bVar6;
                  auVar133._4_4_ = -(uint)bVar6;
                  auVar133._8_4_ = -(uint)bVar6;
                  auVar133._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar133,auVar133,8,1);
                  if (CONCAT13((char)auVar133._12_4_,
                               CONCAT12((char)auVar133._8_4_,
                                        CONCAT11((char)auVar133._4_4_,(char)auVar133._0_4_))) != -1)
                  {
                    bVar6 = fVar26 <= 0.0 && fVar81 <= 0.0;
                    auVar105._0_4_ = -(uint)bVar6;
                    auVar105._4_4_ = -(uint)bVar6;
                    auVar105._8_4_ = -(uint)bVar6;
                    auVar105._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar105,auVar105,8,1);
                    pauVar17 = (undefined1 (*) [16])local_100;
                    if (CONCAT13((char)auVar105._12_4_,
                                 CONCAT12((char)auVar105._8_4_,
                                          CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) ==
                        -1) {
                      lVar9 = 0;
                      local_1a4 = 1;
                    }
                    else {
                      bVar6 = 0.0 <= fVar121 && fVar122 <= fVar121;
                      auVar38._0_4_ = -(uint)bVar6;
                      auVar38._4_4_ = -(uint)bVar6;
                      auVar38._8_4_ = -(uint)bVar6;
                      auVar38._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar38,auVar38,8,1);
                      iVar62 = CONCAT13((char)auVar38._12_4_,
                                        CONCAT12((char)auVar38._8_4_,
                                                 CONCAT11((char)auVar38._4_4_,(char)auVar38._0_4_)))
                      ;
                      auVar39._0_4_ = -(uint)(iVar62 == -1);
                      auVar39._4_4_ = auVar39._0_4_;
                      auVar39._8_4_ = auVar39._0_4_;
                      auVar39._12_4_ = auVar39._0_4_;
                      local_1a4 = 1;
                      lVar9 = 1;
                      if (iVar62 != -1) {
                        lVar9 = 2;
                      }
                      pauVar17 = pauVar17 + lVar9;
                      auVar101 = local_e0[0] ^ (local_e0[0] ^ auVar4) & auVar39;
                    }
                    goto LAB_002df180;
                  }
                  uVar63 = CONCAT44((auVar153._0_4_ + auVar153._4_4_ + fVar79) - fVar30,
                                    fVar81 - fVar28);
                  uVar35 = NEON_frecpe(uVar63,4);
                  uVar126 = NEON_frecps(uVar63,uVar35,4);
                  fVar97 = (float)uVar35 * (float)uVar126;
                  fVar79 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar35;
                  fVar79 = fVar79 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar35;
                  fVar79 = fVar79 * (float)((ulong)uVar35 >> 0x20);
                  uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar35;
                  uVar63 = NEON_frecps(uVar63,CONCAT44(fVar79 * (float)((ulong)uVar35 >> 0x20),
                                                       fVar97),4);
                  fVar81 = fVar81 * (float)(-(uint)(1.1920929e-07 < ABS(fVar81 - fVar28)) &
                                           (uint)(fVar97 * (float)uVar63));
                  lVar9 = 0;
                  pauVar18 = (undefined1 (*) [16])local_100;
                  auVar43._0_8_ =
                       CONCAT44(fVar27 + auVar104._4_4_ * fVar81,fVar22 + auVar104._0_4_ * fVar81);
                  auVar43._8_4_ = fVar60 + auVar104._8_4_ * fVar81;
                  auVar43._12_4_ = fVar61 + auVar104._12_4_ * fVar81;
                  auVar101 = NEON_ext(auVar43,auVar43,8,1);
                  local_1a4 = 2;
                  auVar101._8_4_ = (float)auVar101._0_4_;
                  auVar101._0_8_ = auVar43._0_8_;
                  auVar101._12_4_ = 0.0;
                  lVar16 = 2;
                }
              }
              uStack_f8 = *(undefined8 *)((long)*pauVar18 + 8);
              local_100 = (float  [2])*(undefined8 *)*pauVar18;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar10 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar10 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar10;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
              local_1a0[4] = local_1a0[lVar9 + 4];
              local_1a0[5] = local_1a0[lVar16 + 4];
              fStack_138 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2) >> 0x20)
              ;
              local_140 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2);
              fStack_13c = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2) >> 0x20)
              ;
              uStack_128 = *(undefined8 *)(local_100 + (lVar16 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar16 * 2 + -8) * 2);
              local_1a0[0] = local_1a0[lVar9];
              local_1a0[1] = local_1a0[lVar16];
              fStack_178 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2);
              fStack_174 = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2) >>
                                  0x20);
              local_180._0_4_ = (float)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
              local_180._4_4_ = (float)((ulong)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8) >> 0x20);
              uStack_168 = *(undefined8 *)(local_100 + (lVar16 * 2 + -0xf) * 2);
              uStack_170 = *(undefined8 *)(local_1a0 + lVar16 * 4 + 8);
            }
          }
        }
        else {
          auVar64._0_4_ = auVar117._0_4_ * auVar117._0_4_;
          auVar64._4_4_ = auVar117._4_4_ * auVar117._4_4_;
          auVar64._8_4_ = auVar117._8_4_ * auVar117._8_4_;
          auVar64._12_4_ = auVar117._12_4_ * auVar117._12_4_;
          auVar101 = NEON_ext(auVar64,auVar64,8,1);
          fVar97 = auVar101._0_4_ + auVar101._4_4_;
          fVar81 = auVar64._0_4_ + auVar64._4_4_ + fVar97;
          uVar63 = CONCAT44(auVar64._0_4_ + auVar64._4_4_ + fVar97,fVar81);
          bVar6 = fVar81 <= 1.1920929e-07;
          auVar84._0_4_ = -(uint)bVar6;
          auVar84._4_4_ = -(uint)bVar6;
          auVar84._8_4_ = -(uint)bVar6;
          auVar84._12_4_ = -(uint)bVar6;
          NEON_ext(auVar84,auVar84,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar84._12_4_,
                       CONCAT12((char)auVar84._8_4_,
                                CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_))) == -1)
          goto LAB_002decfc;
          auVar85._0_4_ = -fVar22 * auVar117._0_4_;
          auVar85._4_4_ = -fVar27 * auVar117._4_4_;
          auVar85._8_4_ = -fVar60 * auVar117._8_4_;
          auVar85._12_4_ = auVar117._12_4_ * 0.0;
          auVar101 = NEON_ext(auVar85,auVar85,8,1);
          fVar81 = auVar101._0_4_ + auVar101._4_4_;
          uVar35 = NEON_frecpe(uVar63,4);
          uVar126 = NEON_frecps(uVar63,uVar35,4);
          fVar97 = (float)uVar35 * (float)uVar126;
          fVar79 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
          fVar97 = fVar97 * (float)uVar35;
          fVar79 = fVar79 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
          fVar97 = fVar97 * (float)uVar35;
          fVar79 = fVar79 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
          fVar97 = fVar97 * (float)uVar35;
          fVar79 = fVar79 * (float)((ulong)uVar35 >> 0x20);
          uVar63 = NEON_frecps(uVar63,CONCAT44(fVar79,fVar97),4);
          uVar35 = NEON_fmov(0x3f800000,4);
          uVar63 = NEON_fmin(CONCAT44((auVar85._0_4_ + auVar85._4_4_ + fVar81) *
                                      fVar79 * (float)((ulong)uVar63 >> 0x20),
                                      (auVar85._0_4_ + auVar85._4_4_ + fVar81) *
                                      fVar97 * (float)uVar63),uVar35,4);
          uVar63 = NEON_fmax(uVar63,0,4);
          fVar81 = (float)uVar63;
          fVar97 = auVar117._0_4_ * fVar81;
          fVar79 = auVar117._4_4_ * fVar81;
          fVar80 = auVar117._8_4_ * fVar81;
          fVar81 = auVar117._12_4_ * fVar81;
LAB_002dece8:
          auVar37._0_8_ = CONCAT44(fVar27 + fVar79,fVar22 + fVar97);
          auVar37._8_4_ = fVar60 + fVar80;
          auVar37._12_4_ = fVar61 + fVar81;
          auVar101 = NEON_ext(auVar37,auVar37,8,1);
          auVar101._8_4_ = (float)auVar101._0_4_;
          auVar101._0_8_ = auVar37._0_8_;
          auVar101._12_4_ = 0.0;
        }
      }
      else if (local_1a4 == 2) {
        fVar97 = local_f0 - fVar22;
        fVar79 = fStack_ec - fVar27;
        fVar80 = fStack_e8 - fVar60;
        fVar81 = fStack_e4 - fVar61;
        auVar83._0_4_ = fVar97 * fVar97;
        auVar83._4_4_ = fVar79 * fVar79;
        auVar83._8_4_ = fVar80 * fVar80;
        auVar83._12_4_ = fVar81 * fVar81;
        auVar101 = NEON_ext(auVar83,auVar83,8,1);
        fVar26 = auVar101._0_4_ + auVar101._4_4_;
        fVar21 = auVar83._0_4_ + auVar83._4_4_ + fVar26;
        uVar63 = CONCAT44(auVar83._0_4_ + auVar83._4_4_ + fVar26,fVar21);
        bVar6 = fVar21 <= 1.1920929e-07;
        auVar102._0_4_ = -(uint)bVar6;
        auVar102._4_4_ = -(uint)bVar6;
        auVar102._8_4_ = -(uint)bVar6;
        auVar102._12_4_ = -(uint)bVar6;
        NEON_ext(auVar102,auVar102,8,1);
        if (CONCAT13((char)auVar102._12_4_,
                     CONCAT12((char)auVar102._8_4_,
                              CONCAT11((char)auVar102._4_4_,(char)auVar102._0_4_))) != -1) {
          auVar103._0_4_ = -fVar22 * fVar97;
          auVar103._4_4_ = -fVar27 * fVar79;
          auVar103._8_4_ = -fVar60 * fVar80;
          auVar103._12_4_ = fVar81 * 0.0;
          auVar101 = NEON_ext(auVar103,auVar103,8,1);
          fVar21 = auVar101._0_4_ + auVar101._4_4_;
          uVar35 = NEON_frecpe(uVar63,4);
          uVar126 = NEON_frecps(uVar63,uVar35,4);
          fVar26 = (float)uVar35 * (float)uVar126;
          fVar121 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar126 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar121,fVar26),4);
          fVar26 = fVar26 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar121,fVar26),4);
          fVar26 = fVar26 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar35 = NEON_frecps(uVar63,CONCAT44(fVar121,fVar26),4);
          fVar26 = fVar26 * (float)uVar35;
          fVar121 = fVar121 * (float)((ulong)uVar35 >> 0x20);
          uVar63 = NEON_frecps(uVar63,CONCAT44(fVar121,fVar26),4);
          uVar35 = NEON_fmov(0x3f800000,4);
          uVar63 = NEON_fmin(CONCAT44((auVar103._0_4_ + auVar103._4_4_ + fVar21) *
                                      fVar121 * (float)((ulong)uVar63 >> 0x20),
                                      (auVar103._0_4_ + auVar103._4_4_ + fVar21) *
                                      fVar26 * (float)uVar63),uVar35,4);
          uVar63 = NEON_fmax(uVar63,0,4);
          fVar21 = (float)uVar63;
          fVar97 = fVar97 * fVar21;
          fVar79 = fVar79 * fVar21;
          fVar80 = fVar80 * fVar21;
          fVar81 = fVar81 * fVar21;
          goto LAB_002dece8;
        }
LAB_002decfc:
        auVar101._8_8_ = uStack_f8;
        auVar101._0_4_ = local_100[0];
        auVar101._4_4_ = local_100[1];
        local_1a4 = 1;
      }
    }
    fVar60 = auVar101._0_4_;
    auVar65._0_4_ = fVar60 * fVar60;
    fVar61 = auVar101._4_4_;
    auVar65._4_4_ = fVar61 * fVar61;
    fVar81 = auVar101._8_4_;
    auVar65._8_4_ = fVar81 * fVar81;
    auVar65._12_4_ = auVar101._12_4_ * auVar101._12_4_;
    auVar86 = NEON_ext(auVar65,auVar65,8,1);
    uStack_b8 = auVar101._8_8_;
    local_c0 = auVar101._0_8_;
    fVar27 = auVar86._0_4_ + auVar86._4_4_;
    fVar22 = auVar65._0_4_ + auVar65._4_4_ + fVar27;
    fVar27 = auVar65._0_4_ + auVar65._4_4_ + fVar27;
    uVar12 = CONCAT44(fVar27,fVar22);
    uVar63 = NEON_frsqrte(uVar12,4);
    fVar97 = (float)uVar63;
    fVar79 = (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar63;
    fVar79 = fVar79 * (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar63;
    fVar79 = fVar79 * (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    fVar97 = fVar97 * (float)uVar63;
    fVar79 = fVar79 * (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frsqrts(CONCAT44(fVar79 * fVar79,fVar97 * fVar97),uVar12,4);
    uVar144 = CONCAT44(fVar27 * fVar79 * (float)((ulong)uVar63 >> 0x20),
                       fVar22 * fVar97 * (float)uVar63);
    uVar144 = uVar144 ^ (uVar144 ^ uVar12) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0))
    ;
    uVar63 = NEON_frecpe(uVar144,4);
    uVar35 = NEON_frecps(uVar144,uVar63,4);
    fVar22 = (float)uVar63 * (float)uVar35;
    fVar27 = (float)((ulong)uVar63 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
    uVar63 = NEON_frecps(uVar144,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar63;
    fVar27 = fVar27 * (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frecps(uVar144,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar63;
    fVar27 = fVar27 * (float)((ulong)uVar63 >> 0x20);
    uVar63 = NEON_frecps(uVar144,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar63;
    uVar63 = NEON_frecps(uVar144,CONCAT44(fVar27 * (float)((ulong)uVar63 >> 0x20),fVar22),4);
    fVar22 = fVar22 * (float)uVar63;
    auVar127._0_4_ = fVar60 * fVar22;
    auVar127._4_4_ = fVar61 * fVar22;
    auVar127._8_4_ = fVar81 * fVar22;
    iVar62 = -(uint)(fVar135 < (float)uVar144);
    auVar86 = auVar101;
    uVar63 = uVar34;
  }
  uVar35 = _UNK_01d4aa48;
  uVar34 = _DAT_01d4aa40;
  auVar66._0_4_ = -(uint)(iVar62 == -1);
  auVar66._4_4_ = -(uint)(iVar62 == -1);
  auVar66._8_4_ = -(uint)(iVar62 == -1);
  auVar66._12_4_ = -(uint)(iVar62 == -1);
  NEON_ext(auVar66,auVar66,8,1);
  bVar140 = SUB41(fVar157,0);
  bVar141 = (byte)((uint)fVar157 >> 8);
  bVar142 = (byte)((uint)fVar157 >> 0x10);
  bVar143 = (byte)((uint)fVar157 >> 0x18);
  bVar136 = SUB41(fVar169,0);
  bVar137 = (byte)((uint)fVar169 >> 8);
  bVar138 = (byte)((uint)fVar169 >> 0x10);
  bVar139 = (byte)((uint)fVar169 >> 0x18);
  if (CONCAT13((char)auVar66._12_4_,
               CONCAT12((char)auVar66._8_4_,CONCAT11((char)auVar66._4_4_,(char)auVar66._0_4_))) ==
      -1) {
    uVar12 = uVar144;
    do {
      uVar144 = uVar12;
      auVar86 = auVar101;
      uVar12 = (ulong)local_1a4;
      fVar22 = -auVar86._0_4_;
      fVar60 = -auVar86._4_4_;
      fVar81 = -auVar86._8_4_;
      lVar9 = *(long *)(param_1 + 8);
      pfVar11 = *(float **)(param_1 + 0x10);
      fVar27 = *(float *)(param_1 + 0x20) * fVar22 + *(float *)(param_1 + 0x30) * fVar60 +
               *(float *)(param_1 + 0x40) * fVar81;
      fVar61 = *(float *)(param_1 + 0x24) * fVar22 + *(float *)(param_1 + 0x34) * fVar60 +
               *(float *)(param_1 + 0x44) * fVar81;
      fVar22 = *(float *)(param_1 + 0x28) * fVar22 + *(float *)(param_1 + 0x38) * fVar60 +
               *(float *)(param_1 + 0x48) * fVar81;
      auVar69._0_4_ = *(float *)(lVar9 + 0x30) * fVar27;
      auVar69._4_4_ = *(float *)(lVar9 + 0x34) * fVar61;
      auVar69._8_4_ = *(float *)(lVar9 + 0x38) * fVar22;
      auVar69._12_4_ = *(float *)(lVar9 + 0x3c) * 0.0;
      auVar106 = NEON_ext(auVar69,auVar69,8,1);
      auVar45._0_4_ = fVar27 * *(float *)(lVar9 + 0x40);
      auVar45._4_4_ = fVar61 * *(float *)(lVar9 + 0x44);
      auVar45._8_4_ = fVar22 * *(float *)(lVar9 + 0x48);
      auVar45._12_4_ = *(float *)(lVar9 + 0x4c) * 0.0;
      auVar101 = NEON_ext(auVar45,auVar45,8,1);
      uVar33 = -(uint)(auVar45._0_4_ + auVar45._4_4_ + auVar101._0_4_ + auVar101._4_4_ <
                      auVar69._0_4_ + auVar69._4_4_ + auVar106._0_4_ + auVar106._4_4_);
      local_1a0[uVar12 + 4] = (float)(uVar33 & 1);
      lVar16 = *(long *)(param_2 + 8);
      fVar22 = (float)(*(uint *)(lVar9 + 0x40) ^
                      (*(uint *)(lVar9 + 0x40) ^ *(uint *)(lVar9 + 0x30)) & uVar33);
      fVar60 = (float)(*(uint *)(lVar9 + 0x44) ^
                      (*(uint *)(lVar9 + 0x44) ^ *(uint *)(lVar9 + 0x34)) & uVar33);
      fVar81 = (float)(*(uint *)(lVar9 + 0x48) ^
                      (*(uint *)(lVar9 + 0x48) ^ *(uint *)(lVar9 + 0x38)) & uVar33);
      fVar27 = pfVar11[0xc] + pfVar11[8] * fVar81 + *pfVar11 * fVar22 + pfVar11[4] * fVar60;
      fVar61 = pfVar11[0xd] + pfVar11[9] * fVar81 + pfVar11[1] * fVar22 + pfVar11[5] * fVar60;
      auVar78._0_8_ = CONCAT44(fVar61,fVar27);
      auVar78._8_4_ =
           pfVar11[0xe] + pfVar11[10] * fVar81 + pfVar11[2] * fVar22 + pfVar11[6] * fVar60;
      auVar78._12_4_ = pfVar11[0xf] + 0.0;
      fVar22 = *(float *)(lVar16 + 0x10);
      auVar46._0_4_ = *(float *)(lVar16 + 0x30) - fVar22;
      auVar46._4_4_ = *(float *)(lVar16 + 0x34) - fVar22;
      auVar46._8_4_ = *(float *)(lVar16 + 0x38) - fVar22;
      auVar46._12_4_ = *(float *)(lVar16 + 0x3c) - 0.0;
      auVar87._0_4_ = -(uint)(0.0 < auVar86._0_4_);
      auVar87._4_4_ = -(uint)(0.0 < auVar86._4_4_);
      auVar87._8_4_ = -(uint)(0.0 < auVar86._8_4_);
      auVar87._12_4_ = -(uint)(0.0 < auVar86._12_4_);
      iVar62 = CONCAT13((byte)((uint)auVar87._0_4_ >> 0x18) & (byte)((ulong)uVar34 >> 0x18),
                        CONCAT12((byte)((uint)auVar87._0_4_ >> 0x10) & (byte)((ulong)uVar34 >> 0x10)
                                 ,CONCAT11((byte)((uint)auVar87._0_4_ >> 8) &
                                           (byte)((ulong)uVar34 >> 8),
                                           (byte)auVar87._0_4_ & (byte)uVar34)));
      auVar107._0_8_ =
           CONCAT17((byte)((uint)auVar87._4_4_ >> 0x18) & (byte)((ulong)uVar34 >> 0x38),
                    CONCAT16((byte)((uint)auVar87._4_4_ >> 0x10) & (byte)((ulong)uVar34 >> 0x30),
                             CONCAT15((byte)((uint)auVar87._4_4_ >> 8) &
                                      (byte)((ulong)uVar34 >> 0x28),
                                      CONCAT14((byte)auVar87._4_4_ & (byte)((ulong)uVar34 >> 0x20),
                                               iVar62))));
      auVar107[8] = (byte)auVar87._8_4_ & (byte)uVar35;
      auVar107[9] = (byte)((uint)auVar87._8_4_ >> 8) & (byte)((ulong)uVar35 >> 8);
      auVar107[10] = (byte)((uint)auVar87._8_4_ >> 0x10) & (byte)((ulong)uVar35 >> 0x10);
      auVar107[0xb] = (byte)((uint)auVar87._8_4_ >> 0x18) & (byte)((ulong)uVar35 >> 0x18);
      auVar107[0xc] = (byte)auVar87._12_4_ & (byte)((ulong)uVar35 >> 0x20);
      auVar107[0xd] = (byte)((uint)auVar87._12_4_ >> 8) & (byte)((ulong)uVar35 >> 0x28);
      auVar107[0xe] = (byte)((uint)auVar87._12_4_ >> 0x10) & (byte)((ulong)uVar35 >> 0x30);
      auVar107[0xf] = (byte)((uint)auVar87._12_4_ >> 0x18) & (byte)((ulong)uVar35 >> 0x38);
      auVar101 = NEON_ext(auVar107,auVar107,8,1);
      auVar88._0_4_ = -auVar46._0_4_;
      auVar88._4_4_ = -auVar46._4_4_;
      auVar88._8_4_ = -auVar46._8_4_;
      auVar88._12_4_ = 0;
      local_1a0[uVar12] =
           (float)(iVar62 + (int)((ulong)auVar107._0_8_ >> 0x20) + auVar101._0_4_ + auVar101._4_4_ &
                  7);
      auVar88 = auVar88 ^ (auVar88 ^ auVar46) & auVar87;
      fVar27 = fVar27 - auVar88._0_4_;
      fVar61 = fVar61 - auVar88._4_4_;
      auVar101._0_8_ = CONCAT44(fVar61,fVar27);
      auVar101._8_4_ = auVar78._8_4_ - auVar88._8_4_;
      auVar101._12_4_ = auVar78._12_4_ - auVar88._12_4_;
      uVar63 = NEON_fmax(uVar63,CONCAT44((float)((ulong)*param_4 >> 0x20) +
                                         (float)((ulong)*(undefined8 *)(lVar16 + 0x40) >> 0x20) +
                                         0.0,(float)*param_4 +
                                             (float)*(undefined8 *)(lVar16 + 0x40) + 0.0),4);
      fVar60 = auVar127._0_4_;
      auVar108._0_4_ = fVar60 * fVar27;
      fVar27 = auVar127._4_4_;
      auVar108._4_4_ = fVar27 * fVar61;
      fVar61 = auVar127._8_4_;
      auVar108._8_4_ = fVar61 * auVar101._8_4_;
      auVar108._12_4_ = auVar101._12_4_ * 0.0;
      auVar106 = NEON_ext(auVar108,auVar108,8,1);
      fVar22 = auVar108._0_4_ + auVar108._4_4_ + auVar106._0_4_ + auVar106._4_4_;
      if (fVar147 + (float)uVar63 < fVar22) {
        if (param_9 == (byte *)0x0) {
          return 0;
        }
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          return 0;
        }
        if (local_1a4 == 1) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          pfVar11 = local_1a0 + 5;
          pfVar15 = local_1a0 + 1;
          do {
            pfVar19 = pfVar11 + -1;
            fVar147 = *pfVar11;
            pbVar8 = param_9 + lVar9;
            fVar135 = pfVar15[-1];
            fVar157 = *pfVar15;
            lVar16 = lVar9 + 1;
            lVar9 = lVar9 + 2;
            pfVar11 = pfVar11 + 2;
            pfVar15 = pfVar15 + 2;
            *pbVar8 = SUB41(*pfVar19,0);
            (param_10 + lVar16)[-1] = SUB41(fVar135,0);
            pbVar8[1] = SUB41(fVar147,0);
            param_10[lVar16] = SUB41(fVar157,0);
          } while (uVar12 - (uVar12 & 1) != lVar9);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar135 = local_1a0[lVar9];
        param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
        param_10[lVar9] = SUB41(fVar135,0);
        return 0;
      }
      fVar81 = (float)uVar144;
      if (fVar81 * 0.999775 < fVar22) {
        if (param_9 == (byte *)0x0) goto LAB_002e01c0;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar61;
          *param_7 = auVar127._0_8_;
          goto joined_r0x002e0270;
        }
        if (local_1a4 == 1) {
          lVar9 = 0;
          goto LAB_002e01a4;
        }
        lVar9 = 0;
        pfVar11 = local_1a0 + 5;
        pfVar15 = local_1a0 + 1;
        do {
          pfVar19 = pfVar11 + -1;
          fVar22 = *pfVar11;
          pbVar8 = param_9 + lVar9;
          fVar135 = pfVar15[-1];
          fVar97 = *pfVar15;
          lVar16 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar8 = SUB41(*pfVar19,0);
          (param_10 + lVar16)[-1] = SUB41(fVar135,0);
          pbVar8[1] = SUB41(fVar22,0);
          param_10[lVar16] = SUB41(fVar97,0);
        } while (uVar12 - (uVar12 & 1) != lVar9);
        if ((local_1a4 & 1) != 0) {
LAB_002e01a4:
          fVar135 = local_1a0[lVar9];
          param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
          param_10[lVar9] = SUB41(fVar135,0);
        }
LAB_002e01c0:
        param_7[1] = (ulong)(uint)fVar61;
        *param_7 = auVar127._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar78._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar78._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar78._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar78._12_4_ = fStack_134 + 0.0;
          auVar101._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar101._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar101._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar101._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar77._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar77._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar77._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar101 = NEON_ext(auVar77,auVar77,8,1);
          auVar78._8_4_ = (float)auVar101._0_4_;
          auVar78._0_8_ = auVar77._0_8_;
          auVar78._12_4_ = 0.0;
          auVar59._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar59._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar59._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar101 = NEON_ext(auVar59,auVar59,8,1);
          auVar101._8_4_ = (float)auVar101._0_4_;
          auVar101._0_8_ = auVar59._0_8_;
          auVar101._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar78._4_4_ = fStack_13c;
          auVar78._0_4_ = local_140;
          auVar78._8_4_ = fStack_138;
          auVar78._12_4_ = fStack_134;
          auVar101._4_4_ = local_180._4_4_;
          auVar101._0_4_ = (float)local_180;
          auVar101._8_4_ = fStack_178;
          auVar101._12_4_ = fStack_174;
        }
joined_r0x002e0270:
        if ((param_12 & 1) == 0) {
          auVar93._0_8_ =
               CONCAT44((float)auVar78._4_4_ - fVar27 * fVar157,
                        (float)auVar78._0_4_ - fVar60 * fVar157);
          auVar93._8_4_ = (float)auVar78._8_4_ - fVar61 * fVar157;
          auVar93._12_4_ = (float)auVar78._12_4_ - fVar157 * 0.0;
          auVar86 = NEON_ext(auVar93,auVar93,8,1);
          auVar57._0_4_ = fVar60 * fVar169;
          auVar57._4_4_ = fVar27 * fVar169;
          auVar57._8_4_ = fVar61 * fVar169;
          auVar57._12_4_ = fVar169 * 0.0;
          param_5[1] = (ulong)auVar86._0_4_;
          *param_5 = auVar93._0_8_;
          fVar135 = fVar147;
        }
        else {
          iVar62 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          iVar98 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar94 = (byte)((uint)iVar62 >> 8);
          bVar95 = (byte)((uint)iVar62 >> 0x10);
          bVar96 = (byte)((uint)iVar62 >> 0x18);
          fVar135 = (float)CONCAT13(bVar143 & ~bVar96,
                                    CONCAT12(bVar142 & ~bVar95,
                                             CONCAT11(bVar141 & ~bVar94,bVar140 & ~(byte)iVar62)));
          auVar75._0_8_ =
               CONCAT44((float)auVar78._4_4_ - fVar27 * fVar135,
                        (float)auVar78._0_4_ - fVar60 * fVar135);
          auVar75._8_4_ = (float)auVar78._8_4_ - fVar61 * fVar135;
          auVar75._12_4_ = (float)auVar78._12_4_ - fVar135 * 0.0;
          auVar86 = NEON_ext(auVar75,auVar75,8,1);
          bVar113 = (byte)((uint)iVar98 >> 8);
          bVar114 = (byte)((uint)iVar98 >> 0x10);
          bVar115 = (byte)((uint)iVar98 >> 0x18);
          fVar157 = (float)CONCAT13(bVar139 & ~bVar115,
                                    CONCAT12(bVar138 & ~bVar114,
                                             CONCAT11(bVar137 & ~bVar113,bVar136 & ~(byte)iVar98)));
          param_5[1] = (ulong)auVar86._0_4_;
          *param_5 = auVar75._0_8_;
          fVar147 = fVar135 + fVar157;
          auVar76._0_4_ = fVar60 * fVar157;
          auVar76._4_4_ = fVar27 * fVar157;
          auVar76._8_4_ = fVar61 * fVar157;
          auVar76._12_4_ = fVar157 * 0.0;
          auVar57 = auVar101;
          auVar101 = auVar76;
          fVar135 = (float)(CONCAT17(bVar143 & ~bVar96,
                                     CONCAT16(bVar142 & ~bVar95,
                                              CONCAT15(bVar141 & ~bVar94,
                                                       CONCAT14(bVar140 & ~(byte)iVar62,fVar135))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar139 & ~bVar115,
                                     CONCAT16(bVar138 & ~bVar114,
                                              CONCAT15(bVar137 & ~bVar113,
                                                       CONCAT14(bVar136 & ~(byte)iVar98,fVar157))))
                           >> 0x20);
        }
        auVar58._0_8_ = CONCAT44(auVar57._4_4_ + auVar101._4_4_,auVar57._0_4_ + auVar101._0_4_);
        auVar58._8_4_ = auVar57._8_4_ + auVar101._8_4_;
        auVar58._12_4_ = auVar57._12_4_ + auVar101._12_4_;
        auVar101 = NEON_ext(auVar58,auVar58,8,1);
        param_6[1] = (ulong)auVar101._0_4_;
        *param_6 = auVar58._0_8_;
        *param_8 = CONCAT44((float)(uVar144 >> 0x20) - fVar135,fVar81 - fVar147);
        return 2;
      }
      uVar33 = local_1a4 + 1;
      *(long *)(local_100 + (uVar12 * 2 + -7) * 2) = auVar78._8_8_;
      *(undefined8 *)(local_100 + (uVar12 * 2 + -8) * 2) = auVar78._0_8_;
      *(long *)(local_100 + (uVar12 * 2 + -0xf) * 2) = auVar88._8_8_;
      *(long *)(local_1a0 + uVar12 * 4 + 8) = auVar88._0_8_;
      *(long *)(local_e0[uVar12 - 2] + 8) = auVar101._8_8_;
      *(undefined8 *)(local_100 + uVar12 * 4) = auVar101._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar33;
        auVar101 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar22 = local_100[0];
        fVar27 = local_100[1];
        fVar60 = (float)uStack_f8;
        fVar61 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar101._8_8_ = uStack_f8;
          auVar101._0_4_ = local_100[0];
          auVar101._4_4_ = local_100[1];
          auVar5._4_4_ = fStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = fStack_e8;
          auVar5._12_4_ = fStack_e4;
          auVar119._0_4_ = local_f0 - fVar22;
          auVar119._4_4_ = fStack_ec - fVar27;
          auVar119._8_4_ = fStack_e8 - fVar60;
          auVar119._12_4_ = fStack_e4 - fVar61;
          fVar80 = local_e0[0]._0_4_;
          auVar111._0_4_ = fVar80 - fVar22;
          fVar21 = local_e0[0]._4_4_;
          auVar111._4_4_ = fVar21 - fVar27;
          fVar26 = local_e0[0]._8_4_;
          auVar111._8_4_ = fVar26 - fVar60;
          auVar111._12_4_ = local_e0[0]._12_4_ - fVar61;
          auVar106 = NEON_ext(auVar119,auVar119,8,1);
          auVar129 = NEON_ext(auVar111,auVar111,8,1);
          fVar131 = auVar119._0_4_ * auVar111._4_4_ - auVar119._4_4_ * auVar111._0_4_;
          uVar126 = NEON_ext(CONCAT44(auVar119._4_4_ * auVar111._8_4_ -
                                      auVar119._8_4_ * auVar111._4_4_,fVar131),
                             CONCAT44(auVar106._4_4_ * auVar111._4_4_ -
                                      auVar119._4_4_ * auVar129._4_4_,
                                      auVar106._0_4_ * auVar111._0_4_ -
                                      auVar119._0_4_ * auVar129._0_4_),4,1);
          fVar121 = (float)uVar126;
          auVar125._0_4_ = fVar121 * fVar121;
          fVar122 = (float)((ulong)uVar126 >> 0x20);
          auVar125._4_4_ = fVar122 * fVar122;
          auVar125._8_4_ = fVar131 * fVar131;
          auVar125._12_4_ = 0;
          auVar106 = NEON_ext(auVar125,auVar125,8,1);
          fVar79 = auVar106._0_4_ + auVar106._4_4_;
          fVar97 = auVar125._0_4_ + auVar125._4_4_ + fVar79;
          uVar126 = CONCAT44(auVar125._0_4_ + auVar125._4_4_ + fVar79,fVar97);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar97) {
            if (fVar97 != 0.0) {
              auVar106 = NEON_ext(auVar5,auVar5,8,1);
              auVar129 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar164 = local_f0 * fVar21 - fStack_ec * fVar80;
              auVar167 = NEON_ext(auVar101,auVar101,8,1);
              uVar123 = NEON_ext(CONCAT44(fStack_ec * fVar26 - fStack_e8 * fVar21,fVar164),
                                 CONCAT44(auVar106._4_4_ * fVar21 - fStack_ec * auVar129._4_4_,
                                          auVar106._0_4_ * fVar80 - local_f0 * auVar129._0_4_),4,1);
              fVar97 = fVar27 * fVar80 - fVar22 * fVar21;
              uVar168 = NEON_ext(CONCAT44(fVar60 * fVar21 - fVar27 * fVar26,fVar97),
                                 CONCAT44(fVar27 * auVar129._4_4_ - auVar167._4_4_ * fVar21,
                                          fVar22 * auVar129._0_4_ - auVar167._0_4_ * fVar80),4,1);
              fVar79 = fVar22 * fStack_ec - fVar27 * local_f0;
              uVar116 = NEON_ext(CONCAT44(fVar27 * fStack_e8 - fVar60 * fStack_ec,fVar79),
                                 CONCAT44(auVar167._4_4_ * fStack_ec - fVar27 * auVar106._4_4_,
                                          auVar167._0_4_ * local_f0 - fVar22 * auVar106._0_4_),4,1);
              auVar149._0_4_ = (float)uVar123 * fVar121;
              auVar149._4_4_ = (float)((ulong)uVar123 >> 0x20) * fVar122;
              auVar149._8_4_ = fVar164 * fVar131;
              auVar149._12_4_ = 0;
              auVar106 = NEON_ext(auVar149,auVar149,8,1);
              auVar154._0_4_ = (float)uVar168 * fVar121;
              auVar154._4_4_ = (float)((ulong)uVar168 >> 0x20) * fVar122;
              auVar154._8_4_ = fVar97 * fVar131;
              auVar154._12_4_ = 0;
              auVar129 = NEON_ext(auVar154,auVar154,8,1);
              fVar97 = auVar149._0_4_ + auVar149._4_4_ + auVar106._0_4_ + auVar106._4_4_;
              auVar160._0_4_ = (float)uVar116 * fVar121;
              auVar160._4_4_ = (float)((ulong)uVar116 >> 0x20) * fVar122;
              auVar160._8_4_ = fVar79 * fVar131;
              auVar160._12_4_ = 0;
              fVar79 = auVar154._0_4_ + auVar154._4_4_ + auVar129._0_4_ + auVar129._4_4_;
              auVar106 = NEON_ext(auVar160,auVar160,8,1);
              fVar164 = auVar160._0_4_ + auVar160._4_4_ + auVar106._0_4_ + auVar106._4_4_;
              bVar6 = (0.0 <= fVar97 && 0.0 <= fVar79) && 0.0 <= fVar164;
              auVar161._0_4_ = -(uint)bVar6;
              auVar161._4_4_ = -(uint)bVar6;
              auVar161._8_4_ = -(uint)bVar6;
              auVar161._12_4_ = -(uint)bVar6;
              NEON_ext(auVar161,auVar161,8,1);
              if (CONCAT13((char)auVar161._12_4_,
                           CONCAT12((char)auVar161._8_4_,
                                    CONCAT11((char)auVar161._4_4_,(char)auVar161._0_4_))) == -1) {
                auVar50._0_4_ = fVar22 * fVar121;
                auVar50._4_4_ = fVar27 * fVar122;
                auVar50._8_4_ = fVar60 * fVar131;
                auVar50._12_4_ = fVar61 * 0.0;
                auVar101 = NEON_ext(auVar50,auVar50,8,1);
                uVar116 = NEON_frecpe(uVar126,4);
                uVar123 = NEON_frecps(uVar126,uVar116,4);
                fVar22 = (float)uVar116 * (float)uVar123;
                fVar27 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                uVar116 = NEON_frecps(uVar126,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar116;
                fVar27 = fVar27 * (float)((ulong)uVar116 >> 0x20);
                uVar116 = NEON_frecps(uVar126,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar116;
                fVar27 = fVar27 * (float)((ulong)uVar116 >> 0x20);
                uVar116 = NEON_frecps(uVar126,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar116;
                uVar126 = NEON_frecps(uVar126,CONCAT44(fVar27 * (float)((ulong)uVar116 >> 0x20),
                                                       fVar22),4);
                fVar22 = (auVar50._0_4_ + auVar50._4_4_ + auVar101._0_4_ + auVar101._4_4_) *
                         fVar22 * (float)uVar126;
                auVar101._0_4_ = fVar121 * fVar22;
                auVar101._4_4_ = fVar122 * fVar22;
                auVar101._8_4_ = fVar131 * fVar22;
                auVar101._12_4_ = 0.0;
              }
              else {
                auVar130._0_4_ = -fVar22 * auVar119._0_4_;
                auVar130._4_4_ = -fVar27 * auVar119._4_4_;
                auVar130._8_4_ = -fVar60 * auVar119._8_4_;
                auVar130._12_4_ = auVar119._12_4_ * 0.0;
                auVar106 = NEON_ext(auVar130,auVar130,8,1);
                fVar131 = auVar106._0_4_ + auVar106._4_4_;
                auVar134._0_4_ = -local_f0 * auVar119._0_4_;
                auVar134._4_4_ = -fStack_ec * auVar119._4_4_;
                auVar134._8_4_ = -fStack_e8 * auVar119._8_4_;
                auVar134._12_4_ = auVar119._12_4_ * 0.0;
                auVar106 = NEON_ext(auVar134,auVar134,8,1);
                fVar28 = auVar106._0_4_ + auVar106._4_4_;
                fVar121 = auVar130._0_4_ + auVar130._4_4_ + fVar131;
                fVar122 = auVar134._0_4_ + auVar134._4_4_ + fVar28;
                fVar28 = auVar134._0_4_ + auVar134._4_4_ + fVar28;
                bVar6 = (0.0 <= fVar121 && fVar164 <= 0.0) && fVar122 <= 0.0;
                auVar155._0_4_ = -(uint)bVar6;
                auVar155._4_4_ = -(uint)bVar6;
                auVar155._8_4_ = -(uint)bVar6;
                auVar155._12_4_ = -(uint)bVar6;
                NEON_ext(auVar155,auVar155,8,1);
                if (CONCAT13((char)auVar155._12_4_,
                             CONCAT12((char)auVar155._8_4_,
                                      CONCAT11((char)auVar155._4_4_,(char)auVar155._0_4_))) == -1) {
                  uVar126 = CONCAT44((auVar130._0_4_ + auVar130._4_4_ + fVar131) - fVar28,
                                     fVar121 - fVar122);
                  uVar116 = NEON_frecpe(uVar126,4);
                  uVar123 = NEON_frecps(uVar126,uVar116,4);
                  fVar97 = (float)uVar116 * (float)uVar123;
                  fVar79 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                  uVar116 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar116;
                  fVar79 = fVar79 * (float)((ulong)uVar116 >> 0x20);
                  uVar116 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar116;
                  fVar79 = fVar79 * (float)((ulong)uVar116 >> 0x20);
                  uVar116 = NEON_frecps(uVar126,CONCAT44(fVar79,fVar97),4);
                  fVar97 = fVar97 * (float)uVar116;
                  uVar126 = NEON_frecps(uVar126,CONCAT44(fVar79 * (float)((ulong)uVar116 >> 0x20),
                                                         fVar97),4);
                  fVar121 = fVar121 * (float)(-(uint)(1.1920929e-07 < ABS(fVar121 - fVar122)) &
                                             (uint)(fVar97 * (float)uVar126));
                  pfVar11 = local_1a0;
                  pfVar13 = local_1a0 + 4;
                  auVar51._0_8_ =
                       CONCAT44(fVar27 + auVar119._4_4_ * fVar121,fVar22 + auVar119._0_4_ * fVar121)
                  ;
                  auVar51._8_4_ = fVar60 + auVar119._8_4_ * fVar121;
                  auVar51._12_4_ = fVar61 + auVar119._12_4_ * fVar121;
                  auVar101 = NEON_ext(auVar51,auVar51,8,1);
                  pfVar15 = (float *)&local_180;
                  pfVar19 = &local_140;
                  pauVar18 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar101._8_4_ = (float)auVar101._0_4_;
                  auVar101._0_8_ = auVar51._0_8_;
                  auVar101._12_4_ = 0.0;
LAB_002dfa84:
                  lVar9 = 1;
                  pauVar17 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar156._0_4_ = -local_f0 * auVar111._0_4_;
                  auVar156._4_4_ = -fStack_ec * auVar111._4_4_;
                  auVar156._8_4_ = -fStack_e8 * auVar111._8_4_;
                  auVar156._12_4_ = auVar111._12_4_ * 0.0;
                  auVar106 = NEON_ext(auVar156,auVar156,8,1);
                  fVar29 = auVar106._0_4_ + auVar106._4_4_;
                  auVar120._0_4_ = auVar119._0_4_ * -fVar80;
                  auVar120._4_4_ = auVar119._4_4_ * -fVar21;
                  auVar120._8_4_ = auVar119._8_4_ * -fVar26;
                  auVar120._12_4_ = auVar119._12_4_ * 0.0;
                  auVar165._0_4_ = auVar111._0_4_ * -fVar80;
                  auVar165._4_4_ = auVar111._4_4_ * -fVar21;
                  auVar165._8_4_ = auVar111._8_4_ * -fVar26;
                  auVar165._12_4_ = auVar111._12_4_ * 0.0;
                  fVar131 = auVar156._0_4_ + auVar156._4_4_ + fVar29;
                  auVar106 = NEON_ext(auVar120,auVar120,8,1);
                  fVar30 = auVar106._0_4_ + auVar106._4_4_;
                  fVar164 = auVar120._0_4_ + auVar120._4_4_ + fVar30;
                  auVar106 = NEON_ext(auVar165,auVar165,8,1);
                  fVar31 = auVar106._0_4_ + auVar106._4_4_;
                  fVar23 = auVar165._0_4_ + auVar165._4_4_ + fVar31;
                  fVar31 = auVar165._0_4_ + auVar165._4_4_ + fVar31;
                  bVar6 = (fVar122 <= fVar131 && fVar97 <= 0.0) && fVar23 <= fVar164;
                  auVar150._0_4_ = -(uint)bVar6;
                  auVar150._4_4_ = -(uint)bVar6;
                  auVar150._8_4_ = -(uint)bVar6;
                  auVar150._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar150,auVar150,8,1);
                  if (CONCAT13((char)auVar150._12_4_,
                               CONCAT12((char)auVar150._8_4_,
                                        CONCAT11((char)auVar150._4_4_,(char)auVar150._0_4_))) == -1)
                  {
                    fVar22 = (fVar131 - fVar122) + (fVar164 - fVar23);
                    uVar126 = CONCAT44(((auVar156._0_4_ + auVar156._4_4_ + fVar29) - fVar28) +
                                       ((auVar120._0_4_ + auVar120._4_4_ + fVar30) - fVar31),fVar22)
                    ;
                    uVar116 = NEON_frecpe(uVar126,4);
                    uVar123 = NEON_frecps(uVar126,uVar116,4);
                    fVar27 = (float)uVar116 * (float)uVar123;
                    fVar60 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar60,fVar27),4);
                    fVar27 = fVar27 * (float)uVar116;
                    fVar60 = fVar60 * (float)((ulong)uVar116 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar60,fVar27),4);
                    fVar27 = fVar27 * (float)uVar116;
                    fVar60 = fVar60 * (float)((ulong)uVar116 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar60,fVar27),4);
                    fVar27 = fVar27 * (float)uVar116;
                    uVar126 = NEON_frecps(uVar126,CONCAT44(fVar60 * (float)((ulong)uVar116 >> 0x20),
                                                           fVar27),4);
                    fVar22 = (fVar131 - fVar122) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar22)) &
                                    (uint)(fVar27 * (float)uVar126));
                    auVar52._0_8_ =
                         CONCAT44(fStack_ec + (fVar21 - fStack_ec) * fVar22,
                                  local_f0 + (fVar80 - local_f0) * fVar22);
                    auVar52._8_4_ = fStack_e8 + (fVar26 - fStack_e8) * fVar22;
                    auVar52._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar22;
                    auVar101 = NEON_ext(auVar52,auVar52,8,1);
                    auVar2._8_4_ = auVar101._0_4_;
                    auVar2._0_8_ = auVar52._0_8_;
                    pfVar11 = local_1a0 + 1;
                    pfVar13 = local_1a0 + 5;
                    pfVar15 = (float *)&uStack_170;
                    pfVar19 = (float *)&uStack_130;
                    pauVar18 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar151._0_4_ = -fVar22 * auVar111._0_4_;
                    auVar151._4_4_ = -fVar27 * auVar111._4_4_;
                    auVar151._8_4_ = -fVar60 * auVar111._8_4_;
                    auVar151._12_4_ = auVar111._12_4_ * 0.0;
                    auVar106 = NEON_ext(auVar151,auVar151,8,1);
                    fVar80 = auVar106._0_4_ + auVar106._4_4_;
                    fVar97 = auVar151._0_4_ + auVar151._4_4_ + fVar80;
                    bVar6 = (fVar79 <= 0.0 && 0.0 <= fVar97) && fVar23 <= 0.0;
                    auVar146._0_4_ = -(uint)bVar6;
                    auVar146._4_4_ = -(uint)bVar6;
                    auVar146._8_4_ = -(uint)bVar6;
                    auVar146._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar146,auVar146,8,1);
                    if (CONCAT13((char)auVar146._12_4_,
                                 CONCAT12((char)auVar146._8_4_,
                                          CONCAT11((char)auVar146._4_4_,(char)auVar146._0_4_))) !=
                        -1) {
                      bVar6 = fVar121 <= 0.0 && fVar97 <= 0.0;
                      auVar112._0_4_ = -(uint)bVar6;
                      auVar112._4_4_ = -(uint)bVar6;
                      auVar112._8_4_ = -(uint)bVar6;
                      auVar112._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar112,auVar112,8,1);
                      if (CONCAT13((char)auVar112._12_4_,
                                   CONCAT12((char)auVar112._8_4_,
                                            CONCAT11((char)auVar112._4_4_,(char)auVar112._0_4_))) ==
                          -1) {
                        pfVar11 = local_1a0;
                        pfVar13 = local_1a0 + 4;
                        pfVar15 = (float *)&local_180;
                        pfVar19 = &local_140;
                        pauVar18 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar6 = 0.0 <= fVar122 && fVar131 <= fVar122;
                        auVar48._0_4_ = -(uint)bVar6;
                        auVar48._4_4_ = -(uint)bVar6;
                        auVar48._8_4_ = -(uint)bVar6;
                        auVar48._12_4_ = -(uint)bVar6;
                        NEON_ext(auVar48,auVar48,8,1);
                        iVar62 = CONCAT13((char)auVar48._12_4_,
                                          CONCAT12((char)auVar48._8_4_,
                                                   CONCAT11((char)auVar48._4_4_,(char)auVar48._0_4_)
                                                  ));
                        iVar98 = -(uint)(iVar62 == -1);
                        auVar49._4_4_ = iVar98;
                        auVar49._0_4_ = iVar98;
                        auVar49._8_4_ = iVar98;
                        auVar49._12_4_ = iVar98;
                        local_1a4 = 1;
                        lVar9 = 1;
                        if (iVar62 != -1) {
                          lVar9 = 2;
                        }
                        auVar101 = local_e0[0] ^ (local_e0[0] ^ auVar5) & auVar49;
                        pauVar18 = (undefined1 (*) [16])(local_100 + lVar9 * 4);
                        pfVar19 = local_100 + (lVar9 * 2 + -8) * 2;
                        pfVar15 = local_1a0 + lVar9 * 4 + 8;
                        pfVar13 = local_1a0 + lVar9 + 4;
                        pfVar11 = local_1a0 + lVar9;
                      }
                      goto LAB_002dfa84;
                    }
                    uVar126 = CONCAT44((auVar151._0_4_ + auVar151._4_4_ + fVar80) - fVar31,
                                       fVar97 - fVar23);
                    uVar116 = NEON_frecpe(uVar126,4);
                    uVar123 = NEON_frecps(uVar126,uVar116,4);
                    fVar79 = (float)uVar116 * (float)uVar123;
                    fVar80 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
                    fVar79 = fVar79 * (float)uVar116;
                    fVar80 = fVar80 * (float)((ulong)uVar116 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
                    fVar79 = fVar79 * (float)uVar116;
                    fVar80 = fVar80 * (float)((ulong)uVar116 >> 0x20);
                    uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
                    fVar79 = fVar79 * (float)uVar116;
                    uVar126 = NEON_frecps(uVar126,CONCAT44(fVar80 * (float)((ulong)uVar116 >> 0x20),
                                                           fVar79),4);
                    fVar97 = fVar97 * (float)(-(uint)(1.1920929e-07 < ABS(fVar97 - fVar23)) &
                                             (uint)(fVar79 * (float)uVar126));
                    auVar53._0_8_ =
                         CONCAT44(fVar27 + auVar111._4_4_ * fVar97,fVar22 + auVar111._0_4_ * fVar97)
                    ;
                    auVar53._8_4_ = fVar60 + auVar111._8_4_ * fVar97;
                    auVar53._12_4_ = fVar61 + auVar111._12_4_ * fVar97;
                    auVar101 = NEON_ext(auVar53,auVar53,8,1);
                    auVar2._8_4_ = auVar101._0_4_;
                    auVar2._0_8_ = auVar53._0_8_;
                    pfVar11 = local_1a0;
                    pfVar13 = local_1a0 + 4;
                    pfVar15 = (float *)&local_180;
                    pfVar19 = &local_140;
                    pauVar18 = (undefined1 (*) [16])local_100;
                  }
                  auVar101._12_4_ = 0.0;
                  auVar101._0_12_ = auVar2;
                  local_1a4 = 2;
                  lVar9 = 2;
                  pauVar17 = local_e0;
                }
                uStack_f8 = *(undefined8 *)((long)*pauVar18 + 8);
                local_100 = (float  [2])*(undefined8 *)*pauVar18;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar17 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar17 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar17;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
                fStack_138 = (float)*(undefined8 *)(pfVar19 + 2);
                fStack_134 = (float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20);
                local_140 = (float)*(undefined8 *)pfVar19;
                fStack_13c = (float)((ulong)*(undefined8 *)pfVar19 >> 0x20);
                uStack_128 = *(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2);
                uStack_130 = *(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2);
                local_1a0[4] = *pfVar13;
                local_1a0[5] = local_1a0[lVar9 + 4];
                fStack_178 = (float)*(undefined8 *)(pfVar15 + 2);
                fStack_174 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                local_180._0_4_ = (float)*(undefined8 *)pfVar15;
                local_180._4_4_ = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                uStack_168 = *(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2);
                uStack_170 = *(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
                local_1a0[0] = *pfVar11;
                local_1a0[1] = local_1a0[lVar9];
              }
            }
          }
          else {
            auVar70._0_4_ = auVar119._0_4_ * auVar119._0_4_;
            auVar70._4_4_ = auVar119._4_4_ * auVar119._4_4_;
            auVar70._8_4_ = auVar119._8_4_ * auVar119._8_4_;
            auVar70._12_4_ = auVar119._12_4_ * auVar119._12_4_;
            auVar101 = NEON_ext(auVar70,auVar70,8,1);
            fVar79 = auVar101._0_4_ + auVar101._4_4_;
            fVar97 = auVar70._0_4_ + auVar70._4_4_ + fVar79;
            uVar126 = CONCAT44(auVar70._0_4_ + auVar70._4_4_ + fVar79,fVar97);
            bVar6 = fVar97 <= 1.1920929e-07;
            auVar90._0_4_ = -(uint)bVar6;
            auVar90._4_4_ = -(uint)bVar6;
            auVar90._8_4_ = -(uint)bVar6;
            auVar90._12_4_ = -(uint)bVar6;
            NEON_ext(auVar90,auVar90,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar90._12_4_,
                         CONCAT12((char)auVar90._8_4_,
                                  CONCAT11((char)auVar90._4_4_,(char)auVar90._0_4_))) == -1)
            goto LAB_002df704;
            auVar91._0_4_ = -fVar22 * auVar119._0_4_;
            auVar91._4_4_ = -fVar27 * auVar119._4_4_;
            auVar91._8_4_ = -fVar60 * auVar119._8_4_;
            auVar91._12_4_ = auVar119._12_4_ * 0.0;
            auVar101 = NEON_ext(auVar91,auVar91,8,1);
            fVar97 = auVar101._0_4_ + auVar101._4_4_;
            uVar116 = NEON_frecpe(uVar126,4);
            uVar123 = NEON_frecps(uVar126,uVar116,4);
            fVar79 = (float)uVar116 * (float)uVar123;
            fVar80 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
            uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
            fVar79 = fVar79 * (float)uVar116;
            fVar80 = fVar80 * (float)((ulong)uVar116 >> 0x20);
            uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
            fVar79 = fVar79 * (float)uVar116;
            fVar80 = fVar80 * (float)((ulong)uVar116 >> 0x20);
            uVar116 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
            fVar79 = fVar79 * (float)uVar116;
            fVar80 = fVar80 * (float)((ulong)uVar116 >> 0x20);
            uVar126 = NEON_frecps(uVar126,CONCAT44(fVar80,fVar79),4);
            uVar116 = NEON_fmov(0x3f800000,4);
            uVar126 = NEON_fmin(CONCAT44((auVar91._0_4_ + auVar91._4_4_ + fVar97) *
                                         fVar80 * (float)((ulong)uVar126 >> 0x20),
                                         (auVar91._0_4_ + auVar91._4_4_ + fVar97) *
                                         fVar79 * (float)uVar126),uVar116,4);
            uVar126 = NEON_fmax(uVar126,0,4);
            fVar97 = (float)uVar126;
            fVar79 = auVar119._0_4_ * fVar97;
            fVar80 = auVar119._4_4_ * fVar97;
            fVar21 = auVar119._8_4_ * fVar97;
            fVar97 = auVar119._12_4_ * fVar97;
LAB_002df6f0:
            auVar47._0_8_ = CONCAT44(fVar27 + fVar80,fVar22 + fVar79);
            auVar47._8_4_ = fVar60 + fVar21;
            auVar47._12_4_ = fVar61 + fVar97;
            auVar101 = NEON_ext(auVar47,auVar47,8,1);
            auVar101._8_4_ = (float)auVar101._0_4_;
            auVar101._0_8_ = auVar47._0_8_;
            auVar101._12_4_ = 0.0;
          }
        }
        else {
          bVar6 = local_1a4 == 1;
          local_1a4 = uVar33;
          if (bVar6) {
            fVar79 = local_f0 - fVar22;
            fVar80 = fStack_ec - fVar27;
            fVar21 = fStack_e8 - fVar60;
            fVar97 = fStack_e4 - fVar61;
            auVar89._0_4_ = fVar79 * fVar79;
            auVar89._4_4_ = fVar80 * fVar80;
            auVar89._8_4_ = fVar21 * fVar21;
            auVar89._12_4_ = fVar97 * fVar97;
            auVar101 = NEON_ext(auVar89,auVar89,8,1);
            fVar121 = auVar101._0_4_ + auVar101._4_4_;
            fVar26 = auVar89._0_4_ + auVar89._4_4_ + fVar121;
            uVar126 = CONCAT44(auVar89._0_4_ + auVar89._4_4_ + fVar121,fVar26);
            bVar6 = fVar26 <= 1.1920929e-07;
            auVar109._0_4_ = -(uint)bVar6;
            auVar109._4_4_ = -(uint)bVar6;
            auVar109._8_4_ = -(uint)bVar6;
            auVar109._12_4_ = -(uint)bVar6;
            NEON_ext(auVar109,auVar109,8,1);
            if (CONCAT13((char)auVar109._12_4_,
                         CONCAT12((char)auVar109._8_4_,
                                  CONCAT11((char)auVar109._4_4_,(char)auVar109._0_4_))) != -1) {
              auVar110._0_4_ = -fVar22 * fVar79;
              auVar110._4_4_ = -fVar27 * fVar80;
              auVar110._8_4_ = -fVar60 * fVar21;
              auVar110._12_4_ = fVar97 * 0.0;
              auVar101 = NEON_ext(auVar110,auVar110,8,1);
              fVar26 = auVar101._0_4_ + auVar101._4_4_;
              uVar116 = NEON_frecpe(uVar126,4);
              uVar123 = NEON_frecps(uVar126,uVar116,4);
              fVar121 = (float)uVar116 * (float)uVar123;
              fVar122 = (float)((ulong)uVar116 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
              uVar116 = NEON_frecps(uVar126,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar116;
              fVar122 = fVar122 * (float)((ulong)uVar116 >> 0x20);
              uVar116 = NEON_frecps(uVar126,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar116;
              fVar122 = fVar122 * (float)((ulong)uVar116 >> 0x20);
              uVar116 = NEON_frecps(uVar126,CONCAT44(fVar122,fVar121),4);
              fVar121 = fVar121 * (float)uVar116;
              fVar122 = fVar122 * (float)((ulong)uVar116 >> 0x20);
              uVar126 = NEON_frecps(uVar126,CONCAT44(fVar122,fVar121),4);
              uVar116 = NEON_fmov(0x3f800000,4);
              uVar126 = NEON_fmin(CONCAT44((auVar110._0_4_ + auVar110._4_4_ + fVar26) *
                                           fVar122 * (float)((ulong)uVar126 >> 0x20),
                                           (auVar110._0_4_ + auVar110._4_4_ + fVar26) *
                                           fVar121 * (float)uVar126),uVar116,4);
              uVar126 = NEON_fmax(uVar126,0,4);
              fVar26 = (float)uVar126;
              fVar79 = fVar79 * fVar26;
              fVar80 = fVar80 * fVar26;
              fVar21 = fVar21 * fVar26;
              fVar97 = fVar97 * fVar26;
              goto LAB_002df6f0;
            }
LAB_002df704:
            auVar101._8_8_ = uStack_f8;
            auVar101._0_4_ = local_100[0];
            auVar101._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
      }
      fVar60 = auVar101._0_4_;
      auVar71._0_4_ = fVar60 * fVar60;
      fVar61 = auVar101._4_4_;
      auVar71._4_4_ = fVar61 * fVar61;
      fVar97 = auVar101._8_4_;
      auVar71._8_4_ = fVar97 * fVar97;
      auVar71._12_4_ = auVar101._12_4_ * auVar101._12_4_;
      auVar106 = NEON_ext(auVar71,auVar71,8,1);
      uStack_b8 = auVar101._8_8_;
      local_c0 = auVar101._0_8_;
      fVar27 = auVar106._0_4_ + auVar106._4_4_;
      fVar22 = auVar71._0_4_ + auVar71._4_4_ + fVar27;
      fVar27 = auVar71._0_4_ + auVar71._4_4_ + fVar27;
      uVar99 = CONCAT44(fVar27,fVar22);
      uVar126 = NEON_frsqrte(uVar99,4);
      fVar79 = (float)uVar126;
      fVar80 = (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frsqrts(CONCAT44(fVar80 * fVar80,fVar79 * fVar79),uVar99,4);
      fVar79 = fVar79 * (float)uVar126;
      fVar80 = fVar80 * (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frsqrts(CONCAT44(fVar80 * fVar80,fVar79 * fVar79),uVar99,4);
      fVar79 = fVar79 * (float)uVar126;
      fVar80 = fVar80 * (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frsqrts(CONCAT44(fVar80 * fVar80,fVar79 * fVar79),uVar99,4);
      fVar79 = fVar79 * (float)uVar126;
      fVar80 = fVar80 * (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frsqrts(CONCAT44(fVar80 * fVar80,fVar79 * fVar79),uVar99,4);
      uVar12 = CONCAT44(fVar27 * fVar80 * (float)((ulong)uVar126 >> 0x20),
                        fVar22 * fVar79 * (float)uVar126);
      uVar12 = uVar12 ^ (uVar12 ^ uVar99) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0));
      uVar126 = NEON_frecpe(uVar12,4);
      uVar116 = NEON_frecps(uVar12,uVar126,4);
      fVar22 = (float)uVar126 * (float)uVar116;
      fVar27 = (float)((ulong)uVar126 >> 0x20) * (float)((ulong)uVar116 >> 0x20);
      uVar126 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar126;
      fVar27 = fVar27 * (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar126;
      fVar27 = fVar27 * (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar126;
      uVar126 = NEON_frecps(uVar12,CONCAT44(fVar27 * (float)((ulong)uVar126 >> 0x20),fVar22),4);
      fVar22 = fVar22 * (float)uVar126;
      auVar127._0_4_ = fVar60 * fVar22;
      auVar127._4_4_ = fVar61 * fVar22;
      auVar127._8_4_ = fVar97 * fVar22;
      bVar6 = (float)uVar12 < fVar81;
      bVar3 = fVar135 < (float)uVar12 && bVar6;
      auVar92._0_4_ = -(uint)bVar3;
      auVar92._4_4_ = -(uint)bVar3;
      auVar92._8_4_ = -(uint)bVar3;
      auVar92._12_4_ = -(uint)bVar3;
      NEON_ext(auVar92,auVar92,8,1);
    } while (CONCAT13((char)auVar92._12_4_,
                      CONCAT12((char)auVar92._8_4_,CONCAT11((char)auVar92._4_4_,(char)auVar92._0_4_)
                              )) == -1);
    uVar34 = CONCAT26(-(ushort)!bVar6,
                      CONCAT24(-(ushort)!bVar6,CONCAT22(-(ushort)!bVar6,-(ushort)!bVar6)));
  }
  else {
    uVar34 = 0;
  }
  uVar24 = (ushort)((ulong)uVar34 >> 0x10);
  uVar25 = (ushort)((ulong)uVar34 >> 0x20);
  uVar32 = (ushort)((ulong)uVar34 >> 0x30);
  auVar67._0_4_ = (int)((uint)(ushort)uVar34 << 0x1f) >> 0x1f;
  auVar67._4_4_ = (int)((uint)uVar24 << 0x1f) >> 0x1f;
  auVar67._8_4_ = (int)((uint)uVar25 << 0x1f) >> 0x1f;
  auVar67._12_4_ = (int)((uint)uVar32 << 0x1f) >> 0x1f;
  auVar68 = NEON_ext(auVar67,auVar67,8,1);
  auVar44._0_4_ =
       (float)CONCAT13((char)((short)(uVar32 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar25 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar24 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar34 << 0xf) >> 0xf))));
  auVar44[4] = auVar68[0];
  auVar44[5] = auVar68[2];
  auVar44[6] = auVar68[4];
  auVar44[7] = auVar68[6];
  auVar44._8_8_ = 0;
  if (auVar44._0_4_ != -NAN) {
    if ((param_9 != (byte *)0x0) && (*param_11 = (byte)local_1a4, local_1a4 != 0)) {
      if (local_1a4 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar11 = local_1a0 + 5;
        pfVar15 = local_1a0 + 1;
        do {
          pfVar19 = pfVar11 + -1;
          fVar147 = *pfVar11;
          pbVar8 = param_9 + lVar9;
          fVar135 = pfVar15[-1];
          fVar157 = *pfVar15;
          lVar16 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar8 = SUB41(*pfVar19,0);
          (param_10 + lVar16)[-1] = SUB41(fVar135,0);
          pbVar8[1] = SUB41(fVar147,0);
          param_10[lVar16] = SUB41(fVar157,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar135 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar135,0);
    }
    return 5;
  }
  local_c0 = auVar86._0_8_;
  uStack_b8 = auVar86._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_002dfe78:
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
      auVar68._0_4_ =
           (float)local_180 +
           ((float)uStack_170 - (float)local_180) * local_a8[0] +
           (local_160 - (float)local_180) * local_b0[0];
      auVar68._4_4_ =
           local_180._4_4_ +
           (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
           (fStack_15c - local_180._4_4_) * local_b0[0];
      auVar68._8_4_ =
           fStack_178 +
           ((float)uStack_168 - fStack_178) * local_a8[0] + (fStack_158 - fStack_178) * local_b0[0];
      auVar68._12_4_ = fStack_174 + 0.0;
      goto LAB_002dff90;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar54._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar54._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar54._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar101 = NEON_ext(auVar54,auVar54,8,1);
      auVar44._8_4_ = (float)auVar101._0_4_;
      auVar44._0_8_ = auVar54._0_8_;
      auVar44._12_4_ = 0.0;
      auVar72._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar72._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar72._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar101 = NEON_ext(auVar72,auVar72,8,1);
      auVar68._8_4_ = (float)auVar101._0_4_;
      auVar68._0_8_ = auVar72._0_8_;
      auVar68._12_4_ = 0.0;
      goto LAB_002dff90;
    }
    if (local_1a4 != 1) goto LAB_002dff90;
  }
  else {
    uVar33 = local_1a4 - 1;
    *param_11 = (byte)uVar33;
    if (uVar33 != 0) {
      if (uVar33 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar11 = local_1a0 + 5;
        pfVar15 = local_1a0 + 1;
        do {
          pfVar19 = pfVar11 + -1;
          fVar22 = *pfVar11;
          pbVar8 = param_9 + lVar9;
          fVar135 = pfVar15[-1];
          fVar27 = *pfVar15;
          lVar16 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar8 = SUB41(*pfVar19,0);
          (param_10 + lVar16)[-1] = SUB41(fVar135,0);
          pbVar8[1] = SUB41(fVar22,0);
          param_10[lVar16] = SUB41(fVar27,0);
        } while ((ulong)uVar33 - ((ulong)uVar33 & 1) != lVar9);
        if ((uVar33 & 1) == 0) goto LAB_002dfe78;
      }
      fVar135 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar135,0);
      goto LAB_002dfe78;
    }
  }
  auVar44._4_4_ = fStack_13c;
  auVar44._0_4_ = local_140;
  auVar44._8_4_ = fStack_138;
  auVar44._12_4_ = fStack_134;
  auVar68._4_4_ = local_180._4_4_;
  auVar68._0_4_ = (float)local_180;
  auVar68._8_4_ = fStack_178;
  auVar68._12_4_ = fStack_174;
LAB_002dff90:
  uVar34 = NEON_frecpe(uVar144,4);
  uVar35 = NEON_frecps(uVar144,uVar34,4);
  fVar135 = (float)uVar34 * (float)uVar35;
  fVar22 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  uVar34 = NEON_frecps(uVar144,CONCAT44(fVar22,fVar135),4);
  fVar135 = fVar135 * (float)uVar34;
  fVar22 = fVar22 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar144,CONCAT44(fVar22,fVar135),4);
  fVar135 = fVar135 * (float)uVar34;
  fVar22 = fVar22 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar144,CONCAT44(fVar22,fVar135),4);
  fVar135 = fVar135 * (float)uVar34;
  uVar34 = NEON_frecps(uVar144,CONCAT44(fVar22 * (float)((ulong)uVar34 >> 0x20),fVar135),4);
  fVar135 = fVar135 * (float)uVar34;
  local_c0._0_4_ = (float)local_c0 * fVar135;
  local_c0._4_4_ = local_c0._4_4_ * fVar135;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar135;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar135 = (float)uVar144;
  fVar22 = (float)(uVar144 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar56._0_8_ =
         CONCAT44(auVar44._4_4_ - local_c0._4_4_ * fVar157,auVar44._0_4_ - (float)local_c0 * fVar157
                 );
    auVar56._8_4_ = auVar44._8_4_ - (float)uStack_b8 * fVar157;
    auVar56._12_4_ = auVar44._12_4_ - fVar157 * 0.0;
    auVar74._0_8_ =
         CONCAT44(auVar68._4_4_ + local_c0._4_4_ * fVar169,auVar68._0_4_ + (float)local_c0 * fVar169
                 );
    auVar74._8_4_ = auVar68._8_4_ + (float)uStack_b8 * fVar169;
    auVar74._12_4_ = auVar68._12_4_ + fVar169 * 0.0;
    auVar101 = NEON_ext(auVar56,auVar56,8,1);
    auVar86 = NEON_ext(auVar74,auVar74,8,1);
    param_5[1] = (ulong)auVar101._0_4_;
    *param_5 = auVar56._0_8_;
    param_6[1] = (ulong)auVar86._0_4_;
    *param_6 = auVar74._0_8_;
    *param_8 = CONCAT44(fVar22 - fVar147,fVar135 - fVar147);
  }
  else {
    iVar62 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar98 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar94 = (byte)((uint)iVar62 >> 8);
    bVar95 = (byte)((uint)iVar62 >> 0x10);
    bVar96 = (byte)((uint)iVar62 >> 0x18);
    fVar157 = (float)CONCAT13(bVar143 & ~bVar96,
                              CONCAT12(bVar142 & ~bVar95,
                                       CONCAT11(bVar141 & ~bVar94,bVar140 & ~(byte)iVar62)));
    bVar113 = (byte)((uint)iVar98 >> 8);
    bVar114 = (byte)((uint)iVar98 >> 0x10);
    bVar115 = (byte)((uint)iVar98 >> 0x18);
    fVar169 = (float)CONCAT13(bVar139 & ~bVar115,
                              CONCAT12(bVar138 & ~bVar114,
                                       CONCAT11(bVar137 & ~bVar113,bVar136 & ~(byte)iVar98)));
    auVar55._0_8_ =
         CONCAT44(auVar44._4_4_ - local_c0._4_4_ * fVar157,auVar44._0_4_ - (float)local_c0 * fVar157
                 );
    auVar55._8_4_ = auVar44._8_4_ - (float)uStack_b8 * fVar157;
    auVar55._12_4_ = auVar44._12_4_ - fVar157 * 0.0;
    auVar73._0_8_ =
         CONCAT44(auVar68._4_4_ + local_c0._4_4_ * fVar169,auVar68._0_4_ + (float)local_c0 * fVar169
                 );
    auVar73._8_4_ = auVar68._8_4_ + (float)uStack_b8 * fVar169;
    auVar73._12_4_ = auVar68._12_4_ + fVar169 * 0.0;
    auVar101 = NEON_ext(auVar55,auVar55,8,1);
    auVar86 = NEON_ext(auVar73,auVar73,8,1);
    param_5[1] = (ulong)auVar101._0_4_;
    *param_5 = auVar55._0_8_;
    param_6[1] = (ulong)auVar86._0_4_;
    *param_6 = auVar73._0_8_;
    *param_8 = CONCAT44(fVar22 - ((float)(CONCAT17(bVar143 & ~bVar96,
                                                   CONCAT16(bVar142 & ~bVar95,
                                                            CONCAT15(bVar141 & ~bVar94,
                                                                     CONCAT14(bVar140 & ~(byte)
                                                  iVar62,fVar157)))) >> 0x20) +
                                 (float)(CONCAT17(bVar139 & ~bVar115,
                                                  CONCAT16(bVar138 & ~bVar114,
                                                           CONCAT15(bVar137 & ~bVar113,
                                                                    CONCAT14(bVar136 & ~(byte)iVar98
                                                                             ,fVar169)))) >> 0x20)),
                        fVar135 - (fVar157 + fVar169));
    if (fVar135 <= fVar147 + (float)uVar63) {
      return 2;
    }
  }
  return 4;
}


