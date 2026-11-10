/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002e77c0; name: FUN_002e77c0
 */


/* WARNING: Removing unreachable block (ram,0x002e8bc0) */
/* WARNING: Removing unreachable block (ram,0x002e81e0) */
/* WARNING: Removing unreachable block (ram,0x002e8c40) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002e77c0(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,float *param_7,undefined8 *param_8,byte *param_9
            ,byte *param_10,byte *param_11,byte param_12)

{
  uint *puVar1;
  long lVar2;
  float *pfVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  undefined1 (*pauVar13) [16];
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  float *pfVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  ushort uVar27;
  float fVar26;
  ushort uVar28;
  float fVar29;
  float fVar30;
  ushort uVar35;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar61;
  float fVar76;
  float fVar77;
  undefined1 auVar62 [16];
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
  float fVar78;
  ulong uVar79;
  byte bVar92;
  byte bVar93;
  float fVar95;
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
  uint uVar96;
  int iVar97;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  undefined1 auVar98 [16];
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
  undefined8 uVar112;
  float fVar117;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar118;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  uint uVar119;
  uint uVar123;
  uint uVar124;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined8 uVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 uVar133;
  float fVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  ulong uVar143;
  float fVar144;
  float fVar147;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
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
  float fVar164;
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined8 uVar168;
  float fVar169;
  float fVar170;
  float fVar171;
  uint local_1a4;
  uint local_1a0 [8];
  float local_180 [2];
  undefined8 uStack_178;
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
  
  lVar17 = *(long *)(param_2 + 8);
  lVar12 = *(long *)(param_1 + 8);
  fVar170 = *(float *)(lVar12 + 0x10);
  fVar169 = *(float *)(lVar17 + 0x10);
  uVar37 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar12 + 0x14),*(undefined4 *)(lVar12 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar17 + 0x14),*(undefined4 *)(lVar17 + 0x14)),4);
  fVar171 = fVar170 + fVar169;
  uVar133 = *param_4;
  local_1a4 = 0;
  bVar135 = *param_11;
  uVar15 = (ulong)bVar135;
  fVar134 = (float)uVar37 * 0.1;
  if (bVar135 == 0) {
    auVar98 = *param_3;
    auVar84._0_4_ = auVar98._0_4_ * auVar98._0_4_;
    auVar84._4_4_ = auVar98._4_4_ * auVar98._4_4_;
    auVar84._8_4_ = auVar98._8_4_ * auVar98._8_4_;
    auVar84._12_4_ = auVar98._12_4_ * auVar98._12_4_;
    auVar127 = NEON_ext(auVar84,auVar84,8,1);
    auVar127._0_4_ = -(uint)(0.0 < auVar84._0_4_ + auVar84._4_4_ + auVar127._0_4_ + auVar127._4_4_);
    auVar167._8_8_ = _UNK_01d4ae58;
    auVar167._0_8_ = _DAT_01d4ae50;
    uVar143 = 0x7f7fffff7f7fffff;
    auVar127._4_4_ = auVar127._0_4_;
    auVar127._8_4_ = auVar127._0_4_;
    auVar127._12_4_ = auVar127._0_4_;
    auVar98 = auVar167 ^ (auVar167 ^ auVar98) & auVar127;
    fVar144 = auVar98._0_4_;
    auVar128._0_4_ = fVar144 * fVar144;
    fVar147 = auVar98._4_4_;
    auVar128._4_4_ = fVar147 * fVar147;
    fVar77 = auVar98._8_4_;
    auVar128._8_4_ = fVar77 * fVar77;
    auVar128._12_4_ = auVar98._12_4_ * auVar98._12_4_;
    auVar84 = NEON_ext(auVar128,auVar128,8,1);
    uStack_b8 = auVar98._8_8_;
    local_c0 = auVar98._0_8_;
    fVar30 = auVar84._0_4_ + auVar84._4_4_;
    fVar25 = auVar128._0_4_ + auVar128._4_4_ + fVar30;
    fVar30 = auVar128._0_4_ + auVar128._4_4_ + fVar30;
    uVar15 = CONCAT44(fVar30,fVar25);
    uVar37 = NEON_frsqrte(uVar15,4);
    fVar78 = (float)uVar37;
    fVar95 = (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    uVar79 = CONCAT44(fVar30 * fVar95 * (float)((ulong)uVar37 >> 0x20),
                      fVar25 * fVar78 * (float)uVar37);
    uVar79 = uVar79 ^ (uVar79 ^ uVar15) & CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0));
    uVar37 = NEON_frecpe(uVar79,4);
    uVar112 = NEON_frecps(uVar79,uVar37,4);
    fVar25 = (float)uVar37 * (float)uVar112;
    fVar30 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
    uVar37 = NEON_frecps(uVar79,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar30 = fVar30 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frecps(uVar79,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar30 = fVar30 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frecps(uVar79,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    auVar84 = ZEXT816(0);
    uVar37 = NEON_frecps(uVar79,CONCAT44(fVar30 * (float)((ulong)uVar37 >> 0x20),fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar144 = fVar144 * fVar25;
    fVar147 = fVar147 * fVar25;
    fVar77 = fVar77 * fVar25;
    iVar61 = -1;
  }
  else {
    fVar25 = (float)uVar133;
    uVar79 = (ulong)uVar133 >> 0x20;
    pfVar22 = *(float **)(param_1 + 0x10);
    pbVar10 = param_10;
    pbVar11 = param_9;
    puVar14 = local_1a0 + 4;
    puVar16 = local_1a0;
    pfVar18 = local_100;
    pfVar21 = local_180;
    pfVar23 = &local_140;
    do {
      lVar2 = lVar12 + (ulong)*pbVar11 * 0x10;
      *puVar14 = (uint)*pbVar11;
      bVar136 = *pbVar10;
      *puVar16 = (uint)bVar136;
      fVar30 = *(float *)(lVar2 + 0x30);
      fVar144 = *(float *)(lVar2 + 0x34);
      fVar147 = *(float *)(lVar2 + 0x38);
      auVar98 = *(undefined1 (*) [16])(pfVar22 + 8);
      auVar84 = *(undefined1 (*) [16])(pfVar22 + 0xc);
      uVar133 = NEON_fmax(uVar133,CONCAT44((float)uVar79 + 0.0,fVar25 + 0.0),4);
      uVar15 = uVar15 - 1;
      fVar78 = auVar84._0_4_ + *pfVar22 * fVar30 + pfVar22[4] * fVar144 + auVar98._0_4_ * fVar147;
      fVar95 = auVar84._4_4_ + pfVar22[1] * fVar30 + pfVar22[5] * fVar144 + auVar98._4_4_ * fVar147;
      auVar80._0_8_ = CONCAT44(fVar95,fVar78);
      auVar80._8_4_ =
           auVar84._8_4_ + pfVar22[2] * fVar30 + pfVar22[6] * fVar144 + auVar98._8_4_ * fVar147;
      auVar80._12_4_ = auVar84._12_4_ + 0.0;
      pfVar3 = (float *)(lVar17 + 0x30 + (1 - (ulong)bVar136) * 0x10);
      fVar30 = *pfVar3;
      fVar144 = pfVar3[1];
      fVar147 = pfVar3[2];
      fVar77 = pfVar3[3];
      *(long *)(pfVar23 + 2) = auVar80._8_8_;
      *(undefined8 *)pfVar23 = auVar80._0_8_;
      pfVar21[2] = fVar147;
      pfVar21[3] = fVar77;
      *pfVar21 = fVar30;
      pfVar21[1] = fVar144;
      auVar98._0_8_ = CONCAT44(fVar95 - fVar144,fVar78 - fVar30);
      auVar98._8_4_ = auVar80._8_4_ - fVar147;
      auVar98._12_4_ = auVar80._12_4_ - fVar77;
      *(long *)(pfVar18 + 2) = auVar98._8_8_;
      *(undefined8 *)pfVar18 = auVar98._0_8_;
      pbVar10 = pbVar10 + 1;
      pbVar11 = pbVar11 + 1;
      puVar14 = puVar14 + 1;
      puVar16 = puVar16 + 1;
      pfVar18 = pfVar18 + 4;
      pfVar21 = pfVar21 + 4;
      pfVar23 = pfVar23 + 4;
    } while (uVar15 != 0);
    local_1a4 = (uint)bVar135;
    if (bVar135 == 4) {
      auVar98 = FUN_00238f80(local_100,&local_140,local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar25 = local_100[0];
      fVar30 = local_100[1];
      fVar144 = (float)uStack_f8;
      fVar147 = SUB84(uStack_f8,4);
      if (local_1a4 == 3) {
        auVar98._8_8_ = uStack_f8;
        auVar98._0_4_ = local_100[0];
        auVar98._4_4_ = local_100[1];
        auVar7._4_4_ = fStack_ec;
        auVar7._0_4_ = local_f0;
        auVar7._8_4_ = fStack_e8;
        auVar7._12_4_ = fStack_e4;
        auVar113._0_4_ = local_f0 - fVar25;
        auVar113._4_4_ = fStack_ec - fVar30;
        auVar113._8_4_ = fStack_e8 - fVar144;
        auVar113._12_4_ = fStack_e4 - fVar147;
        fVar95 = local_e0[0]._0_4_;
        auVar101._0_4_ = fVar95 - fVar25;
        fVar76 = local_e0[0]._4_4_;
        auVar101._4_4_ = fVar76 - fVar30;
        fVar24 = local_e0[0]._8_4_;
        auVar101._8_4_ = fVar24 - fVar144;
        auVar101._12_4_ = local_e0[0]._12_4_ - fVar147;
        auVar84 = NEON_ext(auVar113,auVar113,8,1);
        auVar127 = NEON_ext(auVar101,auVar101,8,1);
        fVar118 = auVar113._0_4_ * auVar101._4_4_ - auVar113._4_4_ * auVar101._0_4_;
        uVar37 = NEON_ext(CONCAT44(auVar113._4_4_ * auVar101._8_4_ - auVar113._8_4_ * auVar101._4_4_
                                   ,fVar118),
                          CONCAT44(auVar84._4_4_ * auVar101._4_4_ - auVar113._4_4_ * auVar127._4_4_,
                                   auVar84._0_4_ * auVar101._0_4_ - auVar113._0_4_ * auVar127._0_4_)
                          ,4,1);
        fVar29 = (float)uVar37;
        auVar126._0_4_ = fVar29 * fVar29;
        fVar117 = (float)((ulong)uVar37 >> 0x20);
        auVar126._4_4_ = fVar117 * fVar117;
        auVar126._8_4_ = fVar118 * fVar118;
        auVar126._12_4_ = 0;
        auVar84 = NEON_ext(auVar126,auVar126,8,1);
        fVar78 = auVar84._0_4_ + auVar84._4_4_;
        fVar77 = auVar126._0_4_ + auVar126._4_4_ + fVar78;
        uVar37 = CONCAT44(auVar126._0_4_ + auVar126._4_4_ + fVar78,fVar77);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar77) {
          if (fVar77 != 0.0) {
            auVar84 = NEON_ext(auVar7,auVar7,8,1);
            auVar127 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar130 = local_f0 * fVar76 - fStack_ec * fVar95;
            auVar128 = NEON_ext(auVar98,auVar98,8,1);
            uVar168 = NEON_ext(CONCAT44(fStack_ec * fVar24 - fStack_e8 * fVar76,fVar130),
                               CONCAT44(auVar84._4_4_ * fVar76 - fStack_ec * auVar127._4_4_,
                                        auVar84._0_4_ * fVar95 - local_f0 * auVar127._0_4_),4,1);
            fVar77 = fVar30 * fVar95 - fVar25 * fVar76;
            uVar125 = NEON_ext(CONCAT44(fVar144 * fVar76 - fVar30 * fVar24,fVar77),
                               CONCAT44(fVar30 * auVar127._4_4_ - auVar128._4_4_ * fVar76,
                                        fVar25 * auVar127._0_4_ - auVar128._0_4_ * fVar95),4,1);
            fVar78 = fVar25 * fStack_ec - fVar30 * local_f0;
            uVar112 = NEON_ext(CONCAT44(fVar30 * fStack_e8 - fVar144 * fStack_ec,fVar78),
                               CONCAT44(auVar128._4_4_ * fStack_ec - fVar30 * auVar84._4_4_,
                                        auVar128._0_4_ * local_f0 - fVar25 * auVar84._0_4_),4,1);
            auVar148._0_4_ = (float)uVar168 * fVar29;
            auVar148._4_4_ = (float)((ulong)uVar168 >> 0x20) * fVar117;
            auVar148._8_4_ = fVar130 * fVar118;
            auVar148._12_4_ = 0;
            auVar84 = NEON_ext(auVar148,auVar148,8,1);
            auVar158._0_4_ = (float)uVar125 * fVar29;
            auVar158._4_4_ = (float)((ulong)uVar125 >> 0x20) * fVar117;
            auVar158._8_4_ = fVar77 * fVar118;
            auVar158._12_4_ = 0;
            auVar120._0_4_ = (float)uVar112 * fVar29;
            auVar120._4_4_ = (float)((ulong)uVar112 >> 0x20) * fVar117;
            auVar120._8_4_ = fVar78 * fVar118;
            auVar120._12_4_ = 0;
            fVar77 = auVar148._0_4_ + auVar148._4_4_ + auVar84._0_4_ + auVar84._4_4_;
            auVar84 = NEON_ext(auVar158,auVar158,8,1);
            auVar127 = NEON_ext(auVar120,auVar120,8,1);
            fVar78 = auVar158._0_4_ + auVar158._4_4_ + auVar84._0_4_ + auVar84._4_4_;
            fVar130 = auVar120._0_4_ + auVar120._4_4_ + auVar127._0_4_ + auVar127._4_4_;
            bVar9 = 0.0 <= fVar130 && (0.0 <= fVar77 && 0.0 <= fVar78);
            auVar159._0_4_ = -(uint)bVar9;
            auVar159._4_4_ = -(uint)bVar9;
            auVar159._8_4_ = -(uint)bVar9;
            auVar159._12_4_ = -(uint)bVar9;
            NEON_ext(auVar159,auVar159,8,1);
            if (CONCAT13((char)auVar159._12_4_,
                         CONCAT12((char)auVar159._8_4_,
                                  CONCAT11((char)auVar159._4_4_,(char)auVar159._0_4_))) == -1) {
              auVar41._0_4_ = fVar25 * fVar29;
              auVar41._4_4_ = fVar30 * fVar117;
              auVar41._8_4_ = fVar144 * fVar118;
              auVar41._12_4_ = fVar147 * 0.0;
              auVar98 = NEON_ext(auVar41,auVar41,8,1);
              uVar112 = NEON_frecpe(uVar37,4);
              uVar125 = NEON_frecps(uVar37,uVar112,4);
              fVar25 = (float)uVar112 * (float)uVar125;
              fVar30 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar30,fVar25),4);
              fVar25 = fVar25 * (float)uVar112;
              fVar30 = fVar30 * (float)((ulong)uVar112 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar30,fVar25),4);
              fVar25 = fVar25 * (float)uVar112;
              fVar30 = fVar30 * (float)((ulong)uVar112 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar30,fVar25),4);
              fVar25 = fVar25 * (float)uVar112;
              uVar37 = NEON_frecps(uVar37,CONCAT44(fVar30 * (float)((ulong)uVar112 >> 0x20),fVar25),
                                   4);
              fVar25 = (auVar41._0_4_ + auVar41._4_4_ + auVar98._0_4_ + auVar98._4_4_) *
                       fVar25 * (float)uVar37;
              auVar98._0_4_ = fVar29 * fVar25;
              auVar98._4_4_ = fVar117 * fVar25;
              auVar98._8_4_ = fVar118 * fVar25;
              auVar98._12_4_ = 0.0;
            }
            else {
              auVar131._0_4_ = -fVar25 * auVar113._0_4_;
              auVar131._4_4_ = -fVar30 * auVar113._4_4_;
              auVar131._8_4_ = -fVar144 * auVar113._8_4_;
              auVar131._12_4_ = auVar113._12_4_ * 0.0;
              auVar84 = NEON_ext(auVar131,auVar131,8,1);
              fVar118 = auVar84._0_4_ + auVar84._4_4_;
              auVar145._0_4_ = -local_f0 * auVar113._0_4_;
              auVar145._4_4_ = -fStack_ec * auVar113._4_4_;
              auVar145._8_4_ = -fStack_e8 * auVar113._8_4_;
              auVar145._12_4_ = auVar113._12_4_ * 0.0;
              auVar84 = NEON_ext(auVar145,auVar145,8,1);
              fVar164 = auVar84._0_4_ + auVar84._4_4_;
              fVar29 = auVar131._0_4_ + auVar131._4_4_ + fVar118;
              fVar117 = auVar145._0_4_ + auVar145._4_4_ + fVar164;
              fVar164 = auVar145._0_4_ + auVar145._4_4_ + fVar164;
              bVar9 = (0.0 <= fVar29 && fVar130 <= 0.0) && fVar117 <= 0.0;
              auVar162._0_4_ = -(uint)bVar9;
              auVar162._4_4_ = -(uint)bVar9;
              auVar162._8_4_ = -(uint)bVar9;
              auVar162._12_4_ = -(uint)bVar9;
              NEON_ext(auVar162,auVar162,8,1);
              pauVar19 = (undefined1 (*) [16])&local_f0;
              if (CONCAT13((char)auVar162._12_4_,
                           CONCAT12((char)auVar162._8_4_,
                                    CONCAT11((char)auVar162._4_4_,(char)auVar162._0_4_))) == -1) {
                uVar37 = CONCAT44((auVar131._0_4_ + auVar131._4_4_ + fVar118) - fVar164,
                                  fVar29 - fVar117);
                uVar112 = NEON_frecpe(uVar37,4);
                uVar125 = NEON_frecps(uVar37,uVar112,4);
                fVar77 = (float)uVar112 * (float)uVar125;
                fVar78 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar78,fVar77),4);
                fVar77 = fVar77 * (float)uVar112;
                fVar78 = fVar78 * (float)((ulong)uVar112 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar78,fVar77),4);
                fVar77 = fVar77 * (float)uVar112;
                fVar78 = fVar78 * (float)((ulong)uVar112 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar78,fVar77),4);
                fVar77 = fVar77 * (float)uVar112;
                uVar37 = NEON_frecps(uVar37,CONCAT44(fVar78 * (float)((ulong)uVar112 >> 0x20),fVar77
                                                    ),4);
                fVar29 = fVar29 * (float)(-(uint)(1.1920929e-07 < ABS(fVar29 - fVar117)) &
                                         (uint)(fVar77 * (float)uVar37));
                lVar12 = 0;
                pauVar20 = (undefined1 (*) [16])local_100;
                auVar42._0_8_ =
                     CONCAT44(fVar30 + auVar113._4_4_ * fVar29,fVar25 + auVar113._0_4_ * fVar29);
                auVar42._8_4_ = fVar144 + auVar113._8_4_ * fVar29;
                auVar42._12_4_ = fVar147 + auVar113._12_4_ * fVar29;
                auVar98 = NEON_ext(auVar42,auVar42,8,1);
                local_1a4 = 2;
                auVar98._8_4_ = (float)auVar98._0_4_;
                auVar98._0_8_ = auVar42._0_8_;
                auVar98._12_4_ = 0.0;
LAB_002e8054:
                lVar17 = 1;
                pauVar13 = pauVar19;
                pauVar19 = pauVar20;
              }
              else {
                auVar163._0_4_ = -local_f0 * auVar101._0_4_;
                auVar163._4_4_ = -fStack_ec * auVar101._4_4_;
                auVar163._8_4_ = -fStack_e8 * auVar101._8_4_;
                auVar163._12_4_ = auVar101._12_4_ * 0.0;
                auVar84 = NEON_ext(auVar163,auVar163,8,1);
                fVar26 = auVar84._0_4_ + auVar84._4_4_;
                auVar114._0_4_ = auVar113._0_4_ * -fVar95;
                auVar114._4_4_ = auVar113._4_4_ * -fVar76;
                auVar114._8_4_ = auVar113._8_4_ * -fVar24;
                auVar114._12_4_ = auVar113._12_4_ * 0.0;
                auVar166._0_4_ = auVar101._0_4_ * -fVar95;
                auVar166._4_4_ = auVar101._4_4_ * -fVar76;
                auVar166._8_4_ = auVar101._8_4_ * -fVar24;
                auVar166._12_4_ = auVar101._12_4_ * 0.0;
                fVar118 = auVar163._0_4_ + auVar163._4_4_ + fVar26;
                auVar84 = NEON_ext(auVar114,auVar114,8,1);
                fVar32 = auVar84._0_4_ + auVar84._4_4_;
                fVar130 = auVar114._0_4_ + auVar114._4_4_ + fVar32;
                auVar84 = NEON_ext(auVar166,auVar166,8,1);
                fVar33 = auVar84._0_4_ + auVar84._4_4_;
                fVar31 = auVar166._0_4_ + auVar166._4_4_ + fVar33;
                fVar33 = auVar166._0_4_ + auVar166._4_4_ + fVar33;
                pauVar13 = local_e0;
                bVar9 = (fVar117 <= fVar118 && fVar77 <= 0.0) && fVar31 <= fVar130;
                auVar153._0_4_ = -(uint)bVar9;
                auVar153._4_4_ = -(uint)bVar9;
                auVar153._8_4_ = -(uint)bVar9;
                auVar153._12_4_ = -(uint)bVar9;
                NEON_ext(auVar153,auVar153,8,1);
                if (CONCAT13((char)auVar153._12_4_,
                             CONCAT12((char)auVar153._8_4_,
                                      CONCAT11((char)auVar153._4_4_,(char)auVar153._0_4_))) == -1) {
                  fVar25 = (fVar118 - fVar117) + (fVar130 - fVar31);
                  uVar37 = CONCAT44(((auVar163._0_4_ + auVar163._4_4_ + fVar26) - fVar164) +
                                    ((auVar114._0_4_ + auVar114._4_4_ + fVar32) - fVar33),fVar25);
                  uVar112 = NEON_frecpe(uVar37,4);
                  uVar125 = NEON_frecps(uVar37,uVar112,4);
                  fVar30 = (float)uVar112 * (float)uVar125;
                  fVar144 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar30),4);
                  fVar30 = fVar30 * (float)uVar112;
                  fVar144 = fVar144 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar30),4);
                  fVar30 = fVar30 * (float)uVar112;
                  fVar144 = fVar144 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar30),4);
                  fVar30 = fVar30 * (float)uVar112;
                  uVar37 = NEON_frecps(uVar37,CONCAT44(fVar144 * (float)((ulong)uVar112 >> 0x20),
                                                       fVar30),4);
                  fVar25 = (fVar118 - fVar117) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar25)) &
                                  (uint)(fVar30 * (float)uVar37));
                  auVar43._0_8_ =
                       CONCAT44(fStack_ec + (fVar76 - fStack_ec) * fVar25,
                                local_f0 + (fVar95 - local_f0) * fVar25);
                  auVar43._8_4_ = fStack_e8 + (fVar24 - fStack_e8) * fVar25;
                  auVar43._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar25;
                  auVar98 = NEON_ext(auVar43,auVar43,8,1);
                  lVar12 = 1;
                  auVar4._8_4_ = auVar98._0_4_;
                  auVar4._0_8_ = auVar43._0_8_;
                }
                else {
                  auVar154._0_4_ = -fVar25 * auVar101._0_4_;
                  auVar154._4_4_ = -fVar30 * auVar101._4_4_;
                  auVar154._8_4_ = -fVar144 * auVar101._8_4_;
                  auVar154._12_4_ = auVar101._12_4_ * 0.0;
                  auVar84 = NEON_ext(auVar154,auVar154,8,1);
                  fVar95 = auVar84._0_4_ + auVar84._4_4_;
                  fVar77 = auVar154._0_4_ + auVar154._4_4_ + fVar95;
                  bVar9 = (fVar78 <= 0.0 && 0.0 <= fVar77) && fVar31 <= 0.0;
                  auVar149._0_4_ = -(uint)bVar9;
                  auVar149._4_4_ = -(uint)bVar9;
                  auVar149._8_4_ = -(uint)bVar9;
                  auVar149._12_4_ = -(uint)bVar9;
                  NEON_ext(auVar149,auVar149,8,1);
                  if (CONCAT13((char)auVar149._12_4_,
                               CONCAT12((char)auVar149._8_4_,
                                        CONCAT11((char)auVar149._4_4_,(char)auVar149._0_4_))) != -1)
                  {
                    bVar9 = fVar29 <= 0.0 && fVar77 <= 0.0;
                    auVar102._0_4_ = -(uint)bVar9;
                    auVar102._4_4_ = -(uint)bVar9;
                    auVar102._8_4_ = -(uint)bVar9;
                    auVar102._12_4_ = -(uint)bVar9;
                    NEON_ext(auVar102,auVar102,8,1);
                    pauVar20 = (undefined1 (*) [16])local_100;
                    if (CONCAT13((char)auVar102._12_4_,
                                 CONCAT12((char)auVar102._8_4_,
                                          CONCAT11((char)auVar102._4_4_,(char)auVar102._0_4_))) ==
                        -1) {
                      lVar12 = 0;
                      local_1a4 = 1;
                    }
                    else {
                      bVar9 = 0.0 <= fVar117 && fVar118 <= fVar117;
                      auVar39._0_4_ = -(uint)bVar9;
                      auVar39._4_4_ = -(uint)bVar9;
                      auVar39._8_4_ = -(uint)bVar9;
                      auVar39._12_4_ = -(uint)bVar9;
                      NEON_ext(auVar39,auVar39,8,1);
                      iVar61 = CONCAT13((char)auVar39._12_4_,
                                        CONCAT12((char)auVar39._8_4_,
                                                 CONCAT11((char)auVar39._4_4_,(char)auVar39._0_4_)))
                      ;
                      auVar40._0_4_ = -(uint)(iVar61 == -1);
                      auVar40._4_4_ = auVar40._0_4_;
                      auVar40._8_4_ = auVar40._0_4_;
                      auVar40._12_4_ = auVar40._0_4_;
                      local_1a4 = 1;
                      lVar12 = 1;
                      if (iVar61 != -1) {
                        lVar12 = 2;
                      }
                      pauVar20 = pauVar20 + lVar12;
                      auVar98 = local_e0[0] ^ (local_e0[0] ^ auVar7) & auVar40;
                    }
                    goto LAB_002e8054;
                  }
                  uVar37 = CONCAT44((auVar154._0_4_ + auVar154._4_4_ + fVar95) - fVar33,
                                    fVar77 - fVar31);
                  uVar112 = NEON_frecpe(uVar37,4);
                  uVar125 = NEON_frecps(uVar37,uVar112,4);
                  fVar78 = (float)uVar112 * (float)uVar125;
                  fVar95 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  uVar37 = NEON_frecps(uVar37,CONCAT44(fVar95 * (float)((ulong)uVar112 >> 0x20),
                                                       fVar78),4);
                  fVar77 = fVar77 * (float)(-(uint)(1.1920929e-07 < ABS(fVar77 - fVar31)) &
                                           (uint)(fVar78 * (float)uVar37));
                  lVar12 = 0;
                  pauVar19 = (undefined1 (*) [16])local_100;
                  auVar44._0_8_ =
                       CONCAT44(fVar30 + auVar101._4_4_ * fVar77,fVar25 + auVar101._0_4_ * fVar77);
                  auVar44._8_4_ = fVar144 + auVar101._8_4_ * fVar77;
                  auVar44._12_4_ = fVar147 + auVar101._12_4_ * fVar77;
                  auVar98 = NEON_ext(auVar44,auVar44,8,1);
                  auVar4._8_4_ = auVar98._0_4_;
                  auVar4._0_8_ = auVar44._0_8_;
                }
                auVar98._12_4_ = 0.0;
                auVar98._0_12_ = auVar4;
                local_1a4 = 2;
                lVar17 = 2;
              }
              uStack_f8 = *(undefined8 *)((long)*pauVar19 + 8);
              local_100 = (float  [2])*(undefined8 *)*pauVar19;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar13 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar13 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar13;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar13 >> 0x20);
              local_1a0[4] = local_1a0[lVar12 + 4];
              local_1a0[5] = local_1a0[lVar17 + 4];
              local_1a0[0] = local_1a0[lVar12];
              local_1a0[1] = local_1a0[lVar17];
              fStack_138 = (float)*(undefined8 *)(local_100 + (lVar12 * 2 + -7) * 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(local_100 + (lVar12 * 2 + -7) * 2) >> 0x20
                                  );
              local_140 = (float)*(undefined8 *)(local_100 + (lVar12 * 2 + -8) * 2);
              fStack_13c = (float)((ulong)*(undefined8 *)(local_100 + (lVar12 * 2 + -8) * 2) >> 0x20
                                  );
              uStack_128 = *(undefined8 *)(local_100 + (lVar17 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar17 * 2 + -8) * 2);
              uStack_178._0_4_ = (float)*(undefined8 *)(local_180 + lVar12 * 4 + 2);
              uStack_178._4_4_ = (float)((ulong)*(undefined8 *)(local_180 + lVar12 * 4 + 2) >> 0x20)
              ;
              local_180[0] = (float)*(undefined8 *)(local_180 + lVar12 * 4);
              local_180[1] = (float)((ulong)*(undefined8 *)(local_180 + lVar12 * 4) >> 0x20);
              uStack_168 = *(undefined8 *)(local_180 + lVar17 * 4 + 2);
              uStack_170 = *(undefined8 *)(local_180 + lVar17 * 4);
            }
          }
        }
        else {
          auVar62._0_4_ = auVar113._0_4_ * auVar113._0_4_;
          auVar62._4_4_ = auVar113._4_4_ * auVar113._4_4_;
          auVar62._8_4_ = auVar113._8_4_ * auVar113._8_4_;
          auVar62._12_4_ = auVar113._12_4_ * auVar113._12_4_;
          auVar98 = NEON_ext(auVar62,auVar62,8,1);
          fVar78 = auVar98._0_4_ + auVar98._4_4_;
          fVar77 = auVar62._0_4_ + auVar62._4_4_ + fVar78;
          uVar37 = CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar78,fVar77);
          bVar9 = fVar77 <= 1.1920929e-07;
          auVar82._0_4_ = -(uint)bVar9;
          auVar82._4_4_ = -(uint)bVar9;
          auVar82._8_4_ = -(uint)bVar9;
          auVar82._12_4_ = -(uint)bVar9;
          NEON_ext(auVar82,auVar82,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar82._12_4_,
                       CONCAT12((char)auVar82._8_4_,
                                CONCAT11((char)auVar82._4_4_,(char)auVar82._0_4_))) != -1) {
            auVar83._0_4_ = -fVar25 * auVar113._0_4_;
            auVar83._4_4_ = -fVar30 * auVar113._4_4_;
            auVar83._8_4_ = -fVar144 * auVar113._8_4_;
            auVar83._12_4_ = auVar113._12_4_ * 0.0;
            auVar98 = NEON_ext(auVar83,auVar83,8,1);
            fVar77 = auVar98._0_4_ + auVar98._4_4_;
            uVar112 = NEON_frecpe(uVar37,4);
            uVar125 = NEON_frecps(uVar37,uVar112,4);
            fVar78 = (float)uVar112 * (float)uVar125;
            fVar95 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
            fVar78 = fVar78 * (float)uVar112;
            fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
            fVar78 = fVar78 * (float)uVar112;
            fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
            fVar78 = fVar78 * (float)uVar112;
            fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
            uVar37 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
            uVar112 = NEON_fmov(0x3f800000,4);
            uVar37 = NEON_fmin(CONCAT44((auVar83._0_4_ + auVar83._4_4_ + fVar77) *
                                        fVar95 * (float)((ulong)uVar37 >> 0x20),
                                        (auVar83._0_4_ + auVar83._4_4_ + fVar77) *
                                        fVar78 * (float)uVar37),uVar112,4);
            uVar37 = NEON_fmax(uVar37,0,4);
            fVar77 = (float)uVar37;
            fVar78 = auVar113._0_4_ * fVar77;
            fVar95 = auVar113._4_4_ * fVar77;
            fVar76 = auVar113._8_4_ * fVar77;
            fVar77 = auVar113._12_4_ * fVar77;
            goto LAB_002e7bd8;
          }
LAB_002e7bec:
          auVar98._8_8_ = uStack_f8;
          auVar98._0_4_ = local_100[0];
          auVar98._4_4_ = local_100[1];
          local_1a4 = 1;
        }
      }
      else if (local_1a4 == 2) {
        fVar78 = local_f0 - fVar25;
        fVar95 = fStack_ec - fVar30;
        fVar76 = fStack_e8 - fVar144;
        fVar77 = fStack_e4 - fVar147;
        auVar81._0_4_ = fVar78 * fVar78;
        auVar81._4_4_ = fVar95 * fVar95;
        auVar81._8_4_ = fVar76 * fVar76;
        auVar81._12_4_ = fVar77 * fVar77;
        auVar98 = NEON_ext(auVar81,auVar81,8,1);
        fVar29 = auVar98._0_4_ + auVar98._4_4_;
        fVar24 = auVar81._0_4_ + auVar81._4_4_ + fVar29;
        uVar37 = CONCAT44(auVar81._0_4_ + auVar81._4_4_ + fVar29,fVar24);
        bVar9 = fVar24 <= 1.1920929e-07;
        auVar99._0_4_ = -(uint)bVar9;
        auVar99._4_4_ = -(uint)bVar9;
        auVar99._8_4_ = -(uint)bVar9;
        auVar99._12_4_ = -(uint)bVar9;
        NEON_ext(auVar99,auVar99,8,1);
        if (CONCAT13((char)auVar99._12_4_,
                     CONCAT12((char)auVar99._8_4_,CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))
                    ) == -1) goto LAB_002e7bec;
        auVar100._0_4_ = -fVar25 * fVar78;
        auVar100._4_4_ = -fVar30 * fVar95;
        auVar100._8_4_ = -fVar144 * fVar76;
        auVar100._12_4_ = fVar77 * 0.0;
        auVar98 = NEON_ext(auVar100,auVar100,8,1);
        fVar24 = auVar98._0_4_ + auVar98._4_4_;
        uVar112 = NEON_frecpe(uVar37,4);
        uVar125 = NEON_frecps(uVar37,uVar112,4);
        fVar29 = (float)uVar112 * (float)uVar125;
        fVar117 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
        uVar112 = NEON_frecps(uVar37,CONCAT44(fVar117,fVar29),4);
        fVar29 = fVar29 * (float)uVar112;
        fVar117 = fVar117 * (float)((ulong)uVar112 >> 0x20);
        uVar112 = NEON_frecps(uVar37,CONCAT44(fVar117,fVar29),4);
        fVar29 = fVar29 * (float)uVar112;
        fVar117 = fVar117 * (float)((ulong)uVar112 >> 0x20);
        uVar112 = NEON_frecps(uVar37,CONCAT44(fVar117,fVar29),4);
        fVar29 = fVar29 * (float)uVar112;
        fVar117 = fVar117 * (float)((ulong)uVar112 >> 0x20);
        uVar37 = NEON_frecps(uVar37,CONCAT44(fVar117,fVar29),4);
        uVar112 = NEON_fmov(0x3f800000,4);
        uVar37 = NEON_fmin(CONCAT44((auVar100._0_4_ + auVar100._4_4_ + fVar24) *
                                    fVar117 * (float)((ulong)uVar37 >> 0x20),
                                    (auVar100._0_4_ + auVar100._4_4_ + fVar24) *
                                    fVar29 * (float)uVar37),uVar112,4);
        uVar37 = NEON_fmax(uVar37,0,4);
        fVar24 = (float)uVar37;
        fVar78 = fVar78 * fVar24;
        fVar95 = fVar95 * fVar24;
        fVar76 = fVar76 * fVar24;
        fVar77 = fVar77 * fVar24;
LAB_002e7bd8:
        auVar38._0_8_ = CONCAT44(fVar30 + fVar95,fVar25 + fVar78);
        auVar38._8_4_ = fVar144 + fVar76;
        auVar38._12_4_ = fVar147 + fVar77;
        auVar98 = NEON_ext(auVar38,auVar38,8,1);
        auVar98._8_4_ = (float)auVar98._0_4_;
        auVar98._0_8_ = auVar38._0_8_;
        auVar98._12_4_ = 0.0;
      }
    }
    fVar144 = auVar98._0_4_;
    auVar63._0_4_ = fVar144 * fVar144;
    fVar147 = auVar98._4_4_;
    auVar63._4_4_ = fVar147 * fVar147;
    fVar77 = auVar98._8_4_;
    auVar63._8_4_ = fVar77 * fVar77;
    auVar63._12_4_ = auVar98._12_4_ * auVar98._12_4_;
    auVar84 = NEON_ext(auVar63,auVar63,8,1);
    uStack_b8 = auVar98._8_8_;
    local_c0 = auVar98._0_8_;
    fVar30 = auVar84._0_4_ + auVar84._4_4_;
    fVar25 = auVar63._0_4_ + auVar63._4_4_ + fVar30;
    fVar30 = auVar63._0_4_ + auVar63._4_4_ + fVar30;
    uVar15 = CONCAT44(fVar30,fVar25);
    uVar37 = NEON_frsqrte(uVar15,4);
    fVar78 = (float)uVar37;
    fVar95 = (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    fVar78 = fVar78 * (float)uVar37;
    fVar95 = fVar95 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frsqrts(CONCAT44(fVar95 * fVar95,fVar78 * fVar78),uVar15,4);
    uVar143 = CONCAT44(fVar30 * fVar95 * (float)((ulong)uVar37 >> 0x20),
                       fVar25 * fVar78 * (float)uVar37);
    uVar143 = uVar143 ^ (uVar143 ^ uVar15) & CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0))
    ;
    uVar37 = NEON_frecpe(uVar143,4);
    uVar112 = NEON_frecps(uVar143,uVar37,4);
    fVar25 = (float)uVar37 * (float)uVar112;
    fVar30 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
    uVar37 = NEON_frecps(uVar143,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar30 = fVar30 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frecps(uVar143,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar30 = fVar30 * (float)((ulong)uVar37 >> 0x20);
    uVar37 = NEON_frecps(uVar143,CONCAT44(fVar30,fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    uVar37 = NEON_frecps(uVar143,CONCAT44(fVar30 * (float)((ulong)uVar37 >> 0x20),fVar25),4);
    fVar25 = fVar25 * (float)uVar37;
    fVar144 = fVar144 * fVar25;
    fVar147 = fVar147 * fVar25;
    fVar77 = fVar77 * fVar25;
    iVar61 = -(uint)(fVar134 < (float)uVar143);
    auVar84 = auVar98;
  }
  auVar64._0_4_ = -(uint)(iVar61 == -1);
  auVar64._4_4_ = -(uint)(iVar61 == -1);
  auVar64._8_4_ = -(uint)(iVar61 == -1);
  auVar64._12_4_ = -(uint)(iVar61 == -1);
  NEON_ext(auVar64,auVar64,8,1);
  bVar139 = SUB41(fVar170,0);
  bVar140 = (byte)((uint)fVar170 >> 8);
  bVar141 = (byte)((uint)fVar170 >> 0x10);
  bVar142 = (byte)((uint)fVar170 >> 0x18);
  bVar135 = SUB41(fVar169,0);
  bVar136 = (byte)((uint)fVar169 >> 8);
  bVar137 = (byte)((uint)fVar169 >> 0x10);
  bVar138 = (byte)((uint)fVar169 >> 0x18);
  if (CONCAT13((char)auVar64._12_4_,
               CONCAT12((char)auVar64._8_4_,CONCAT11((char)auVar64._4_4_,(char)auVar64._0_4_))) ==
      -1) {
    uVar15 = uVar143;
    do {
      uVar143 = uVar15;
      auVar84 = auVar98;
      uVar15 = (ulong)local_1a4;
      fVar118 = auVar84._0_4_;
      fVar95 = -fVar118;
      fVar130 = auVar84._4_4_;
      fVar24 = -fVar130;
      fVar164 = auVar84._8_4_;
      fVar117 = -fVar164;
      lVar12 = *(long *)(param_1 + 8);
      pfVar18 = *(float **)(param_1 + 0x10);
      fVar25 = *(float *)(lVar12 + 0x50);
      fVar30 = *(float *)(lVar12 + 0x54);
      fVar78 = *(float *)(lVar12 + 0x58);
      fVar76 = *(float *)(param_1 + 0x20) * fVar95 + *(float *)(param_1 + 0x30) * fVar24 +
               *(float *)(param_1 + 0x40) * fVar117;
      fVar29 = *(float *)(param_1 + 0x24) * fVar95 + *(float *)(param_1 + 0x34) * fVar24 +
               *(float *)(param_1 + 0x44) * fVar117;
      fVar95 = *(float *)(param_1 + 0x28) * fVar95 + *(float *)(param_1 + 0x38) * fVar24 +
               *(float *)(param_1 + 0x48) * fVar117;
      auVar103._0_4_ = *(float *)(lVar12 + 0x30) * fVar76;
      auVar103._4_4_ = *(float *)(lVar12 + 0x34) * fVar29;
      auVar103._8_4_ = *(float *)(lVar12 + 0x38) * fVar95;
      auVar103._12_4_ = *(float *)(lVar12 + 0x3c) * 0.0;
      auVar98 = NEON_ext(auVar103,auVar103,8,1);
      auVar121._0_4_ = *(float *)(lVar12 + 0x40) * fVar76;
      auVar121._4_4_ = *(float *)(lVar12 + 0x44) * fVar29;
      auVar121._8_4_ = *(float *)(lVar12 + 0x48) * fVar95;
      auVar121._12_4_ = *(float *)(lVar12 + 0x4c) * 0.0;
      auVar46._0_4_ = fVar25 * fVar76;
      auVar46._4_4_ = fVar30 * fVar29;
      auVar46._8_4_ = fVar78 * fVar95;
      auVar46._12_4_ = *(float *)(lVar12 + 0x5c) * 0.0;
      auVar127 = NEON_ext(auVar121,auVar121,8,1);
      auVar128 = NEON_ext(auVar46,auVar46,8,1);
      fVar95 = auVar103._0_4_ + auVar103._4_4_ + auVar98._0_4_ + auVar98._4_4_;
      fVar76 = auVar121._0_4_ + auVar121._4_4_ + auVar127._0_4_ + auVar127._4_4_;
      fVar24 = auVar46._0_4_ + auVar46._4_4_ + auVar128._0_4_ + auVar128._4_4_;
      uVar36 = -(uint)(fVar24 < fVar76);
      uVar96 = -(uint)(fVar76 < fVar95 && fVar24 < fVar95);
      uVar119 = (uint)fVar25 ^ ((uint)fVar25 ^ (uint)*(float *)(lVar12 + 0x40)) & uVar36;
      uVar123 = (uint)fVar30 ^ ((uint)fVar30 ^ (uint)*(float *)(lVar12 + 0x44)) & uVar36;
      uVar124 = (uint)fVar78 ^ ((uint)fVar78 ^ (uint)*(float *)(lVar12 + 0x48)) & uVar36;
      fVar78 = (float)(uVar119 ^ (uVar119 ^ (uint)*(float *)(lVar12 + 0x30)) & uVar96);
      fVar95 = (float)(uVar123 ^ (uVar123 ^ (uint)*(float *)(lVar12 + 0x34)) & uVar96);
      fVar76 = (float)(uVar124 ^ (uVar124 ^ (uint)*(float *)(lVar12 + 0x38)) & uVar96);
      local_1a0[uVar15 + 4] =
           ((byte)~(byte)uVar36 & 2 | uVar36 & 1) &
           (uint)CONCAT12(~(byte)(uVar96 >> 0x10),CONCAT11(~(byte)(uVar96 >> 8),~(byte)uVar96));
      lVar12 = *(long *)(param_2 + 8);
      fVar25 = pfVar18[0xc] + pfVar18[8] * fVar76 + *pfVar18 * fVar78 + pfVar18[4] * fVar95;
      fVar30 = pfVar18[0xd] + pfVar18[9] * fVar76 + pfVar18[1] * fVar78 + pfVar18[5] * fVar95;
      auVar75._0_8_ = CONCAT44(fVar30,fVar25);
      auVar75._8_4_ =
           pfVar18[0xe] + pfVar18[10] * fVar76 + pfVar18[2] * fVar78 + pfVar18[6] * fVar95;
      auVar75._12_4_ = pfVar18[0xf] + 0.0;
      auVar85._0_4_ = fVar118 * *(float *)(lVar12 + 0x40);
      auVar85._4_4_ = fVar130 * *(float *)(lVar12 + 0x44);
      auVar85._8_4_ = fVar164 * *(float *)(lVar12 + 0x48);
      auVar85._12_4_ = auVar84._12_4_ * *(float *)(lVar12 + 0x4c);
      auVar47._0_4_ = fVar118 * *(float *)(lVar12 + 0x30);
      auVar47._4_4_ = fVar130 * *(float *)(lVar12 + 0x34);
      auVar47._8_4_ = fVar164 * *(float *)(lVar12 + 0x38);
      auVar47._12_4_ = auVar84._12_4_ * *(float *)(lVar12 + 0x3c);
      auVar98 = NEON_ext(auVar47,auVar47,8,1);
      auVar127 = NEON_ext(auVar85,auVar85,8,1);
      uVar36 = -(uint)(auVar85._0_4_ + auVar85._4_4_ + auVar127._0_4_ + auVar127._4_4_ <
                      auVar47._0_4_ + auVar47._4_4_ + auVar98._0_4_ + auVar98._4_4_);
      auVar86._4_4_ = uVar36;
      auVar86._0_4_ = uVar36;
      auVar86._8_4_ = uVar36;
      auVar86._12_4_ = uVar36;
      local_1a0[uVar15] = uVar36 & 1;
      auVar127 = *(undefined1 (*) [16])(lVar12 + 0x40) ^
                 (*(undefined1 (*) [16])(lVar12 + 0x40) ^ *(undefined1 (*) [16])(lVar12 + 0x30)) &
                 auVar86;
      fVar25 = fVar25 - auVar127._0_4_;
      fVar30 = fVar30 - auVar127._4_4_;
      auVar98._0_8_ = CONCAT44(fVar30,fVar25);
      auVar98._8_4_ = auVar75._8_4_ - auVar127._8_4_;
      auVar98._12_4_ = auVar75._12_4_ - auVar127._12_4_;
      uVar133 = NEON_fmax(uVar133,CONCAT44((float)((ulong)*param_4 >> 0x20) + 0.0,
                                           (float)*param_4 + 0.0),4);
      auVar104._0_4_ = fVar144 * fVar25;
      auVar104._4_4_ = fVar147 * fVar30;
      auVar104._8_4_ = fVar77 * auVar98._8_4_;
      auVar104._12_4_ = auVar98._12_4_ * 0.0;
      auVar128 = NEON_ext(auVar104,auVar104,8,1);
      fVar25 = auVar104._0_4_ + auVar104._4_4_ + auVar128._0_4_ + auVar128._4_4_;
      if (fVar171 + (float)uVar133 < fVar25) {
        if (param_9 == (byte *)0x0) {
          return 0;
        }
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          return 0;
        }
        if (local_1a4 == 1) {
          lVar12 = 0;
        }
        else {
          lVar12 = 0;
          puVar14 = local_1a0 + 5;
          puVar16 = local_1a0 + 1;
          do {
            puVar1 = puVar14 + -1;
            uVar96 = *puVar14;
            pbVar10 = param_9 + lVar12;
            uVar36 = puVar16[-1];
            uVar119 = *puVar16;
            lVar17 = lVar12 + 1;
            lVar12 = lVar12 + 2;
            puVar14 = puVar14 + 2;
            puVar16 = puVar16 + 2;
            *pbVar10 = (byte)*puVar1;
            (param_10 + lVar17)[-1] = (byte)uVar36;
            pbVar10[1] = (byte)uVar96;
            param_10[lVar17] = (byte)uVar119;
          } while (uVar15 - (uVar15 & 1) != lVar12);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        uVar36 = local_1a0[lVar12];
        param_9[lVar12] = (byte)local_1a0[lVar12 + 4];
        param_10[lVar12] = (byte)uVar36;
        return 0;
      }
      fVar30 = (float)uVar143;
      if (fVar30 * 0.999775 < fVar25) {
        if (param_9 == (byte *)0x0) goto LAB_002e90a0;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          *(ulong *)(param_7 + 2) = (ulong)(uint)fVar77;
          *param_7 = fVar144;
          param_7[1] = fVar147;
          goto joined_r0x002e9150;
        }
        if (local_1a4 == 1) {
          lVar12 = 0;
          goto LAB_002e9084;
        }
        lVar12 = 0;
        puVar14 = local_1a0 + 5;
        puVar16 = local_1a0 + 1;
        do {
          puVar1 = puVar14 + -1;
          uVar96 = *puVar14;
          pbVar10 = param_9 + lVar12;
          uVar36 = puVar16[-1];
          uVar119 = *puVar16;
          lVar17 = lVar12 + 1;
          lVar12 = lVar12 + 2;
          puVar14 = puVar14 + 2;
          puVar16 = puVar16 + 2;
          *pbVar10 = (byte)*puVar1;
          (param_10 + lVar17)[-1] = (byte)uVar36;
          pbVar10[1] = (byte)uVar96;
          param_10[lVar17] = (byte)uVar119;
        } while (uVar15 - (uVar15 & 1) != lVar12);
        if ((local_1a4 & 1) != 0) {
LAB_002e9084:
          uVar36 = local_1a0[lVar12];
          param_9[lVar12] = (byte)local_1a0[lVar12 + 4];
          param_10[lVar12] = (byte)uVar36;
        }
LAB_002e90a0:
        *(ulong *)(param_7 + 2) = (ulong)(uint)fVar77;
        *param_7 = fVar144;
        param_7[1] = fVar147;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar75._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar75._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar75._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar75._12_4_ = fStack_134 + 0.0;
          auVar98._0_4_ =
               local_180[0] +
               ((float)uStack_170 - local_180[0]) * local_a8[0] +
               (local_160 - local_180[0]) * local_b0[0];
          auVar98._4_4_ =
               local_180[1] +
               (uStack_170._4_4_ - local_180[1]) * local_a8[0] +
               (fStack_15c - local_180[1]) * local_b0[0];
          auVar98._8_4_ =
               (float)uStack_178 +
               ((float)uStack_168 - (float)uStack_178) * local_a8[0] +
               (fStack_158 - (float)uStack_178) * local_b0[0];
          auVar98._12_4_ = uStack_178._4_4_ + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar74._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar74._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar74._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar98 = NEON_ext(auVar74,auVar74,8,1);
          auVar75._8_4_ = (float)auVar98._0_4_;
          auVar75._0_8_ = auVar74._0_8_;
          auVar75._12_4_ = 0.0;
          auVar60._0_8_ =
               CONCAT44(local_180[1] + (uStack_170._4_4_ - local_180[1]) * local_a8[0],
                        local_180[0] + ((float)uStack_170 - local_180[0]) * local_a8[0]);
          auVar60._8_4_ = (float)uStack_178 + ((float)uStack_168 - (float)uStack_178) * local_a8[0];
          auVar60._12_4_ = uStack_178._4_4_ + (uStack_168._4_4_ - uStack_178._4_4_) * local_a8[0];
          auVar98 = NEON_ext(auVar60,auVar60,8,1);
          auVar98._8_4_ = (float)auVar98._0_4_;
          auVar98._0_8_ = auVar60._0_8_;
          auVar98._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar75._4_4_ = fStack_13c;
          auVar75._0_4_ = local_140;
          auVar75._8_4_ = fStack_138;
          auVar75._12_4_ = fStack_134;
          auVar98._4_4_ = local_180[1];
          auVar98._0_4_ = local_180[0];
          auVar98._8_4_ = (float)uStack_178;
          auVar98._12_4_ = uStack_178._4_4_;
        }
joined_r0x002e9150:
        if ((param_12 & 1) == 0) {
          auVar91._0_8_ =
               CONCAT44((float)auVar75._4_4_ - fVar147 * fVar170,
                        (float)auVar75._0_4_ - fVar144 * fVar170);
          auVar91._8_4_ = (float)auVar75._8_4_ - fVar77 * fVar170;
          auVar91._12_4_ = (float)auVar75._12_4_ - fVar170 * 0.0;
          auVar84 = NEON_ext(auVar91,auVar91,8,1);
          auVar58._0_4_ = fVar144 * fVar169;
          auVar58._4_4_ = fVar147 * fVar169;
          auVar58._8_4_ = fVar77 * fVar169;
          auVar58._12_4_ = fVar169 * 0.0;
          param_5[1] = (ulong)auVar84._0_4_;
          *param_5 = auVar91._0_8_;
          fVar134 = fVar171;
        }
        else {
          iVar61 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          bVar92 = (byte)((uint)iVar61 >> 8);
          bVar93 = (byte)((uint)iVar61 >> 0x10);
          bVar94 = (byte)((uint)iVar61 >> 0x18);
          fVar134 = (float)CONCAT13(bVar142 & ~bVar94,
                                    CONCAT12(bVar141 & ~bVar93,
                                             CONCAT11(bVar140 & ~bVar92,bVar139 & ~(byte)iVar61)));
          auVar72._0_8_ =
               CONCAT44((float)auVar75._4_4_ - fVar147 * fVar134,
                        (float)auVar75._0_4_ - fVar144 * fVar134);
          auVar72._8_4_ = (float)auVar75._8_4_ - fVar77 * fVar134;
          auVar72._12_4_ = (float)auVar75._12_4_ - fVar134 * 0.0;
          auVar84 = NEON_ext(auVar72,auVar72,8,1);
          iVar97 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar109 = (byte)((uint)iVar97 >> 8);
          bVar110 = (byte)((uint)iVar97 >> 0x10);
          bVar111 = (byte)((uint)iVar97 >> 0x18);
          fVar169 = (float)CONCAT13(bVar138 & ~bVar111,
                                    CONCAT12(bVar137 & ~bVar110,
                                             CONCAT11(bVar136 & ~bVar109,bVar135 & ~(byte)iVar97)));
          fVar171 = fVar134 + fVar169;
          param_5[1] = (ulong)auVar84._0_4_;
          *param_5 = auVar72._0_8_;
          auVar73._0_4_ = fVar144 * fVar169;
          auVar73._4_4_ = fVar147 * fVar169;
          auVar73._8_4_ = fVar77 * fVar169;
          auVar73._12_4_ = fVar169 * 0.0;
          auVar58 = auVar98;
          auVar98 = auVar73;
          fVar134 = (float)(CONCAT17(bVar142 & ~bVar94,
                                     CONCAT16(bVar141 & ~bVar93,
                                              CONCAT15(bVar140 & ~bVar92,
                                                       CONCAT14(bVar139 & ~(byte)iVar61,fVar134))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar138 & ~bVar111,
                                     CONCAT16(bVar137 & ~bVar110,
                                              CONCAT15(bVar136 & ~bVar109,
                                                       CONCAT14(bVar135 & ~(byte)iVar97,fVar169))))
                           >> 0x20);
        }
        auVar59._0_8_ = CONCAT44(auVar58._4_4_ + auVar98._4_4_,auVar58._0_4_ + auVar98._0_4_);
        auVar59._8_4_ = auVar58._8_4_ + auVar98._8_4_;
        auVar59._12_4_ = auVar58._12_4_ + auVar98._12_4_;
        auVar98 = NEON_ext(auVar59,auVar59,8,1);
        param_6[1] = (ulong)auVar98._0_4_;
        *param_6 = auVar59._0_8_;
        *param_8 = CONCAT44((float)(uVar143 >> 0x20) - fVar134,fVar30 - fVar171);
        return 2;
      }
      uVar36 = local_1a4 + 1;
      *(long *)(local_100 + (uVar15 * 2 + -7) * 2) = auVar75._8_8_;
      *(undefined8 *)(local_100 + (uVar15 * 2 + -8) * 2) = auVar75._0_8_;
      *(long *)(local_180 + uVar15 * 4 + 2) = auVar127._8_8_;
      *(long *)(local_180 + uVar15 * 4) = auVar127._0_8_;
      *(long *)(local_e0[uVar15 - 2] + 8) = auVar98._8_8_;
      *(undefined8 *)(local_100 + uVar15 * 4) = auVar98._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar36;
        auVar98 = FUN_00238f80(local_100,&local_140,local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar25 = local_100[0];
        fVar144 = local_100[1];
        fVar147 = (float)uStack_f8;
        fVar77 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar98._8_8_ = uStack_f8;
          auVar98._0_4_ = local_100[0];
          auVar98._4_4_ = local_100[1];
          auVar8._4_4_ = fStack_ec;
          auVar8._0_4_ = local_f0;
          auVar8._8_4_ = fStack_e8;
          auVar8._12_4_ = fStack_e4;
          auVar115._0_4_ = local_f0 - fVar25;
          auVar115._4_4_ = fStack_ec - fVar144;
          auVar115._8_4_ = fStack_e8 - fVar147;
          auVar115._12_4_ = fStack_e4 - fVar77;
          fVar76 = local_e0[0]._0_4_;
          auVar107._0_4_ = fVar76 - fVar25;
          fVar24 = local_e0[0]._4_4_;
          auVar107._4_4_ = fVar24 - fVar144;
          fVar29 = local_e0[0]._8_4_;
          auVar107._8_4_ = fVar29 - fVar147;
          auVar107._12_4_ = local_e0[0]._12_4_ - fVar77;
          auVar127 = NEON_ext(auVar115,auVar115,8,1);
          auVar128 = NEON_ext(auVar107,auVar107,8,1);
          fVar130 = auVar115._0_4_ * auVar107._4_4_ - auVar115._4_4_ * auVar107._0_4_;
          uVar37 = NEON_ext(CONCAT44(auVar115._4_4_ * auVar107._8_4_ -
                                     auVar115._8_4_ * auVar107._4_4_,fVar130),
                            CONCAT44(auVar127._4_4_ * auVar107._4_4_ -
                                     auVar115._4_4_ * auVar128._4_4_,
                                     auVar127._0_4_ * auVar107._0_4_ -
                                     auVar115._0_4_ * auVar128._0_4_),4,1);
          fVar117 = (float)uVar37;
          auVar122._0_4_ = fVar117 * fVar117;
          fVar118 = (float)((ulong)uVar37 >> 0x20);
          auVar122._4_4_ = fVar118 * fVar118;
          auVar122._8_4_ = fVar130 * fVar130;
          auVar122._12_4_ = 0;
          auVar127 = NEON_ext(auVar122,auVar122,8,1);
          fVar95 = auVar127._0_4_ + auVar127._4_4_;
          fVar78 = auVar122._0_4_ + auVar122._4_4_ + fVar95;
          uVar37 = CONCAT44(auVar122._0_4_ + auVar122._4_4_ + fVar95,fVar78);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar78) {
            if (fVar78 != 0.0) {
              auVar127 = NEON_ext(auVar8,auVar8,8,1);
              auVar128 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar164 = local_f0 * fVar24 - fStack_ec * fVar76;
              auVar167 = NEON_ext(auVar98,auVar98,8,1);
              uVar125 = NEON_ext(CONCAT44(fStack_ec * fVar29 - fStack_e8 * fVar24,fVar164),
                                 CONCAT44(auVar127._4_4_ * fVar24 - fStack_ec * auVar128._4_4_,
                                          auVar127._0_4_ * fVar76 - local_f0 * auVar128._0_4_),4,1);
              fVar78 = fVar144 * fVar76 - fVar25 * fVar24;
              uVar168 = NEON_ext(CONCAT44(fVar147 * fVar24 - fVar144 * fVar29,fVar78),
                                 CONCAT44(fVar144 * auVar128._4_4_ - auVar167._4_4_ * fVar24,
                                          fVar25 * auVar128._0_4_ - auVar167._0_4_ * fVar76),4,1);
              fVar95 = fVar25 * fStack_ec - fVar144 * local_f0;
              uVar112 = NEON_ext(CONCAT44(fVar144 * fStack_e8 - fVar147 * fStack_ec,fVar95),
                                 CONCAT44(auVar167._4_4_ * fStack_ec - fVar144 * auVar127._4_4_,
                                          auVar167._0_4_ * local_f0 - fVar25 * auVar127._0_4_),4,1);
              auVar150._0_4_ = (float)uVar125 * fVar117;
              auVar150._4_4_ = (float)((ulong)uVar125 >> 0x20) * fVar118;
              auVar150._8_4_ = fVar164 * fVar130;
              auVar150._12_4_ = 0;
              auVar127 = NEON_ext(auVar150,auVar150,8,1);
              auVar155._0_4_ = (float)uVar168 * fVar117;
              auVar155._4_4_ = (float)((ulong)uVar168 >> 0x20) * fVar118;
              auVar155._8_4_ = fVar78 * fVar130;
              auVar155._12_4_ = 0;
              auVar128 = NEON_ext(auVar155,auVar155,8,1);
              fVar78 = auVar150._0_4_ + auVar150._4_4_ + auVar127._0_4_ + auVar127._4_4_;
              auVar160._0_4_ = (float)uVar112 * fVar117;
              auVar160._4_4_ = (float)((ulong)uVar112 >> 0x20) * fVar118;
              auVar160._8_4_ = fVar95 * fVar130;
              auVar160._12_4_ = 0;
              fVar95 = auVar155._0_4_ + auVar155._4_4_ + auVar128._0_4_ + auVar128._4_4_;
              auVar127 = NEON_ext(auVar160,auVar160,8,1);
              fVar164 = auVar160._0_4_ + auVar160._4_4_ + auVar127._0_4_ + auVar127._4_4_;
              bVar9 = (0.0 <= fVar78 && 0.0 <= fVar95) && 0.0 <= fVar164;
              auVar161._0_4_ = -(uint)bVar9;
              auVar161._4_4_ = -(uint)bVar9;
              auVar161._8_4_ = -(uint)bVar9;
              auVar161._12_4_ = -(uint)bVar9;
              NEON_ext(auVar161,auVar161,8,1);
              if (CONCAT13((char)auVar161._12_4_,
                           CONCAT12((char)auVar161._8_4_,
                                    CONCAT11((char)auVar161._4_4_,(char)auVar161._0_4_))) == -1) {
                auVar51._0_4_ = fVar25 * fVar117;
                auVar51._4_4_ = fVar144 * fVar118;
                auVar51._8_4_ = fVar147 * fVar130;
                auVar51._12_4_ = fVar77 * 0.0;
                auVar98 = NEON_ext(auVar51,auVar51,8,1);
                uVar112 = NEON_frecpe(uVar37,4);
                uVar125 = NEON_frecps(uVar37,uVar112,4);
                fVar25 = (float)uVar112 * (float)uVar125;
                fVar144 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar25),4);
                fVar25 = fVar25 * (float)uVar112;
                fVar144 = fVar144 * (float)((ulong)uVar112 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar25),4);
                fVar25 = fVar25 * (float)uVar112;
                fVar144 = fVar144 * (float)((ulong)uVar112 >> 0x20);
                uVar112 = NEON_frecps(uVar37,CONCAT44(fVar144,fVar25),4);
                fVar25 = fVar25 * (float)uVar112;
                uVar37 = NEON_frecps(uVar37,CONCAT44(fVar144 * (float)((ulong)uVar112 >> 0x20),
                                                     fVar25),4);
                fVar25 = (auVar51._0_4_ + auVar51._4_4_ + auVar98._0_4_ + auVar98._4_4_) *
                         fVar25 * (float)uVar37;
                auVar98._0_4_ = fVar117 * fVar25;
                auVar98._4_4_ = fVar118 * fVar25;
                auVar98._8_4_ = fVar130 * fVar25;
                auVar98._12_4_ = 0.0;
              }
              else {
                auVar129._0_4_ = -fVar25 * auVar115._0_4_;
                auVar129._4_4_ = -fVar144 * auVar115._4_4_;
                auVar129._8_4_ = -fVar147 * auVar115._8_4_;
                auVar129._12_4_ = auVar115._12_4_ * 0.0;
                auVar127 = NEON_ext(auVar129,auVar129,8,1);
                fVar130 = auVar127._0_4_ + auVar127._4_4_;
                auVar132._0_4_ = -local_f0 * auVar115._0_4_;
                auVar132._4_4_ = -fStack_ec * auVar115._4_4_;
                auVar132._8_4_ = -fStack_e8 * auVar115._8_4_;
                auVar132._12_4_ = auVar115._12_4_ * 0.0;
                auVar127 = NEON_ext(auVar132,auVar132,8,1);
                fVar31 = auVar127._0_4_ + auVar127._4_4_;
                fVar117 = auVar129._0_4_ + auVar129._4_4_ + fVar130;
                fVar118 = auVar132._0_4_ + auVar132._4_4_ + fVar31;
                fVar31 = auVar132._0_4_ + auVar132._4_4_ + fVar31;
                bVar9 = (0.0 <= fVar117 && fVar164 <= 0.0) && fVar118 <= 0.0;
                auVar156._0_4_ = -(uint)bVar9;
                auVar156._4_4_ = -(uint)bVar9;
                auVar156._8_4_ = -(uint)bVar9;
                auVar156._12_4_ = -(uint)bVar9;
                NEON_ext(auVar156,auVar156,8,1);
                if (CONCAT13((char)auVar156._12_4_,
                             CONCAT12((char)auVar156._8_4_,
                                      CONCAT11((char)auVar156._4_4_,(char)auVar156._0_4_))) == -1) {
                  uVar37 = CONCAT44((auVar129._0_4_ + auVar129._4_4_ + fVar130) - fVar31,
                                    fVar117 - fVar118);
                  uVar112 = NEON_frecpe(uVar37,4);
                  uVar125 = NEON_frecps(uVar37,uVar112,4);
                  fVar78 = (float)uVar112 * (float)uVar125;
                  fVar95 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  fVar95 = fVar95 * (float)((ulong)uVar112 >> 0x20);
                  uVar112 = NEON_frecps(uVar37,CONCAT44(fVar95,fVar78),4);
                  fVar78 = fVar78 * (float)uVar112;
                  uVar37 = NEON_frecps(uVar37,CONCAT44(fVar95 * (float)((ulong)uVar112 >> 0x20),
                                                       fVar78),4);
                  fVar117 = fVar117 * (float)(-(uint)(1.1920929e-07 < ABS(fVar117 - fVar118)) &
                                             (uint)(fVar78 * (float)uVar37));
                  puVar14 = local_1a0;
                  puVar16 = local_1a0 + 4;
                  auVar52._0_8_ =
                       CONCAT44(fVar144 + auVar115._4_4_ * fVar117,fVar25 + auVar115._0_4_ * fVar117
                               );
                  auVar52._8_4_ = fVar147 + auVar115._8_4_ * fVar117;
                  auVar52._12_4_ = fVar77 + auVar115._12_4_ * fVar117;
                  auVar98 = NEON_ext(auVar52,auVar52,8,1);
                  pfVar18 = local_180;
                  pfVar21 = &local_140;
                  pauVar19 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar98._8_4_ = (float)auVar98._0_4_;
                  auVar98._0_8_ = auVar52._0_8_;
                  auVar98._12_4_ = 0.0;
LAB_002e8974:
                  lVar12 = 1;
                  pauVar20 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar157._0_4_ = -local_f0 * auVar107._0_4_;
                  auVar157._4_4_ = -fStack_ec * auVar107._4_4_;
                  auVar157._8_4_ = -fStack_e8 * auVar107._8_4_;
                  auVar157._12_4_ = auVar107._12_4_ * 0.0;
                  auVar127 = NEON_ext(auVar157,auVar157,8,1);
                  fVar32 = auVar127._0_4_ + auVar127._4_4_;
                  auVar116._0_4_ = auVar115._0_4_ * -fVar76;
                  auVar116._4_4_ = auVar115._4_4_ * -fVar24;
                  auVar116._8_4_ = auVar115._8_4_ * -fVar29;
                  auVar116._12_4_ = auVar115._12_4_ * 0.0;
                  auVar165._0_4_ = auVar107._0_4_ * -fVar76;
                  auVar165._4_4_ = auVar107._4_4_ * -fVar24;
                  auVar165._8_4_ = auVar107._8_4_ * -fVar29;
                  auVar165._12_4_ = auVar107._12_4_ * 0.0;
                  fVar130 = auVar157._0_4_ + auVar157._4_4_ + fVar32;
                  auVar127 = NEON_ext(auVar116,auVar116,8,1);
                  fVar33 = auVar127._0_4_ + auVar127._4_4_;
                  fVar164 = auVar116._0_4_ + auVar116._4_4_ + fVar33;
                  auVar127 = NEON_ext(auVar165,auVar165,8,1);
                  fVar34 = auVar127._0_4_ + auVar127._4_4_;
                  fVar26 = auVar165._0_4_ + auVar165._4_4_ + fVar34;
                  fVar34 = auVar165._0_4_ + auVar165._4_4_ + fVar34;
                  bVar9 = (fVar118 <= fVar130 && fVar78 <= 0.0) && fVar26 <= fVar164;
                  auVar151._0_4_ = -(uint)bVar9;
                  auVar151._4_4_ = -(uint)bVar9;
                  auVar151._8_4_ = -(uint)bVar9;
                  auVar151._12_4_ = -(uint)bVar9;
                  NEON_ext(auVar151,auVar151,8,1);
                  if (CONCAT13((char)auVar151._12_4_,
                               CONCAT12((char)auVar151._8_4_,
                                        CONCAT11((char)auVar151._4_4_,(char)auVar151._0_4_))) == -1)
                  {
                    fVar25 = (fVar130 - fVar118) + (fVar164 - fVar26);
                    uVar37 = CONCAT44(((auVar157._0_4_ + auVar157._4_4_ + fVar32) - fVar31) +
                                      ((auVar116._0_4_ + auVar116._4_4_ + fVar33) - fVar34),fVar25);
                    uVar112 = NEON_frecpe(uVar37,4);
                    uVar125 = NEON_frecps(uVar37,uVar112,4);
                    fVar144 = (float)uVar112 * (float)uVar125;
                    fVar147 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar147,fVar144),4);
                    fVar144 = fVar144 * (float)uVar112;
                    fVar147 = fVar147 * (float)((ulong)uVar112 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar147,fVar144),4);
                    fVar144 = fVar144 * (float)uVar112;
                    fVar147 = fVar147 * (float)((ulong)uVar112 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar147,fVar144),4);
                    fVar144 = fVar144 * (float)uVar112;
                    uVar37 = NEON_frecps(uVar37,CONCAT44(fVar147 * (float)((ulong)uVar112 >> 0x20),
                                                         fVar144),4);
                    fVar25 = (fVar130 - fVar118) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar25)) &
                                    (uint)(fVar144 * (float)uVar37));
                    auVar53._0_8_ =
                         CONCAT44(fStack_ec + (fVar24 - fStack_ec) * fVar25,
                                  local_f0 + (fVar76 - local_f0) * fVar25);
                    auVar53._8_4_ = fStack_e8 + (fVar29 - fStack_e8) * fVar25;
                    auVar53._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar25;
                    auVar98 = NEON_ext(auVar53,auVar53,8,1);
                    auVar5._8_4_ = auVar98._0_4_;
                    auVar5._0_8_ = auVar53._0_8_;
                    puVar14 = local_1a0 + 1;
                    puVar16 = local_1a0 + 5;
                    pfVar18 = (float *)&uStack_170;
                    pfVar21 = (float *)&uStack_130;
                    pauVar19 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar152._0_4_ = -fVar25 * auVar107._0_4_;
                    auVar152._4_4_ = -fVar144 * auVar107._4_4_;
                    auVar152._8_4_ = -fVar147 * auVar107._8_4_;
                    auVar152._12_4_ = auVar107._12_4_ * 0.0;
                    auVar127 = NEON_ext(auVar152,auVar152,8,1);
                    fVar76 = auVar127._0_4_ + auVar127._4_4_;
                    fVar78 = auVar152._0_4_ + auVar152._4_4_ + fVar76;
                    bVar9 = (fVar95 <= 0.0 && 0.0 <= fVar78) && fVar26 <= 0.0;
                    auVar146._0_4_ = -(uint)bVar9;
                    auVar146._4_4_ = -(uint)bVar9;
                    auVar146._8_4_ = -(uint)bVar9;
                    auVar146._12_4_ = -(uint)bVar9;
                    NEON_ext(auVar146,auVar146,8,1);
                    if (CONCAT13((char)auVar146._12_4_,
                                 CONCAT12((char)auVar146._8_4_,
                                          CONCAT11((char)auVar146._4_4_,(char)auVar146._0_4_))) !=
                        -1) {
                      bVar9 = fVar117 <= 0.0 && fVar78 <= 0.0;
                      auVar108._0_4_ = -(uint)bVar9;
                      auVar108._4_4_ = -(uint)bVar9;
                      auVar108._8_4_ = -(uint)bVar9;
                      auVar108._12_4_ = -(uint)bVar9;
                      NEON_ext(auVar108,auVar108,8,1);
                      if (CONCAT13((char)auVar108._12_4_,
                                   CONCAT12((char)auVar108._8_4_,
                                            CONCAT11((char)auVar108._4_4_,(char)auVar108._0_4_))) ==
                          -1) {
                        puVar14 = local_1a0;
                        puVar16 = local_1a0 + 4;
                        pfVar18 = local_180;
                        pfVar21 = &local_140;
                        pauVar19 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar9 = 0.0 <= fVar118 && fVar130 <= fVar118;
                        auVar49._0_4_ = -(uint)bVar9;
                        auVar49._4_4_ = -(uint)bVar9;
                        auVar49._8_4_ = -(uint)bVar9;
                        auVar49._12_4_ = -(uint)bVar9;
                        NEON_ext(auVar49,auVar49,8,1);
                        iVar61 = CONCAT13((char)auVar49._12_4_,
                                          CONCAT12((char)auVar49._8_4_,
                                                   CONCAT11((char)auVar49._4_4_,(char)auVar49._0_4_)
                                                  ));
                        iVar97 = -(uint)(iVar61 == -1);
                        auVar50._4_4_ = iVar97;
                        auVar50._0_4_ = iVar97;
                        auVar50._8_4_ = iVar97;
                        auVar50._12_4_ = iVar97;
                        local_1a4 = 1;
                        lVar12 = 1;
                        if (iVar61 != -1) {
                          lVar12 = 2;
                        }
                        auVar98 = local_e0[0] ^ (local_e0[0] ^ auVar8) & auVar50;
                        pauVar19 = (undefined1 (*) [16])(local_100 + lVar12 * 4);
                        pfVar21 = local_100 + (lVar12 * 2 + -8) * 2;
                        pfVar18 = local_180 + lVar12 * 4;
                        puVar16 = local_1a0 + lVar12 + 4;
                        puVar14 = local_1a0 + lVar12;
                      }
                      goto LAB_002e8974;
                    }
                    uVar37 = CONCAT44((auVar152._0_4_ + auVar152._4_4_ + fVar76) - fVar34,
                                      fVar78 - fVar26);
                    uVar112 = NEON_frecpe(uVar37,4);
                    uVar125 = NEON_frecps(uVar37,uVar112,4);
                    fVar95 = (float)uVar112 * (float)uVar125;
                    fVar76 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
                    fVar95 = fVar95 * (float)uVar112;
                    fVar76 = fVar76 * (float)((ulong)uVar112 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
                    fVar95 = fVar95 * (float)uVar112;
                    fVar76 = fVar76 * (float)((ulong)uVar112 >> 0x20);
                    uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
                    fVar95 = fVar95 * (float)uVar112;
                    uVar37 = NEON_frecps(uVar37,CONCAT44(fVar76 * (float)((ulong)uVar112 >> 0x20),
                                                         fVar95),4);
                    fVar78 = fVar78 * (float)(-(uint)(1.1920929e-07 < ABS(fVar78 - fVar26)) &
                                             (uint)(fVar95 * (float)uVar37));
                    auVar54._0_8_ =
                         CONCAT44(fVar144 + auVar107._4_4_ * fVar78,fVar25 + auVar107._0_4_ * fVar78
                                 );
                    auVar54._8_4_ = fVar147 + auVar107._8_4_ * fVar78;
                    auVar54._12_4_ = fVar77 + auVar107._12_4_ * fVar78;
                    auVar98 = NEON_ext(auVar54,auVar54,8,1);
                    auVar5._8_4_ = auVar98._0_4_;
                    auVar5._0_8_ = auVar54._0_8_;
                    puVar14 = local_1a0;
                    puVar16 = local_1a0 + 4;
                    pfVar18 = local_180;
                    pfVar21 = &local_140;
                    pauVar19 = (undefined1 (*) [16])local_100;
                  }
                  auVar98._12_4_ = 0.0;
                  auVar98._0_12_ = auVar5;
                  local_1a4 = 2;
                  lVar12 = 2;
                  pauVar20 = local_e0;
                }
                uStack_f8 = *(undefined8 *)((long)*pauVar19 + 8);
                local_100 = (float  [2])*(undefined8 *)*pauVar19;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar20 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar20 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar20;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
                fStack_138 = (float)*(undefined8 *)(pfVar21 + 2);
                fStack_134 = (float)((ulong)*(undefined8 *)(pfVar21 + 2) >> 0x20);
                local_140 = (float)*(undefined8 *)pfVar21;
                fStack_13c = (float)((ulong)*(undefined8 *)pfVar21 >> 0x20);
                uStack_128 = *(undefined8 *)(local_100 + (lVar12 * 2 + -7) * 2);
                uStack_130 = *(undefined8 *)(local_100 + (lVar12 * 2 + -8) * 2);
                local_1a0[4] = *puVar16;
                local_1a0[5] = local_1a0[lVar12 + 4];
                local_1a0[0] = *puVar14;
                local_1a0[1] = local_1a0[lVar12];
                uStack_178._0_4_ = (float)*(undefined8 *)(pfVar18 + 2);
                uStack_178._4_4_ = (float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20);
                local_180[0] = (float)*(undefined8 *)pfVar18;
                local_180[1] = (float)((ulong)*(undefined8 *)pfVar18 >> 0x20);
                uStack_168 = *(undefined8 *)(local_180 + lVar12 * 4 + 2);
                uStack_170 = *(undefined8 *)(local_180 + lVar12 * 4);
              }
            }
          }
          else {
            auVar67._0_4_ = auVar115._0_4_ * auVar115._0_4_;
            auVar67._4_4_ = auVar115._4_4_ * auVar115._4_4_;
            auVar67._8_4_ = auVar115._8_4_ * auVar115._8_4_;
            auVar67._12_4_ = auVar115._12_4_ * auVar115._12_4_;
            auVar98 = NEON_ext(auVar67,auVar67,8,1);
            fVar95 = auVar98._0_4_ + auVar98._4_4_;
            fVar78 = auVar67._0_4_ + auVar67._4_4_ + fVar95;
            uVar37 = CONCAT44(auVar67._0_4_ + auVar67._4_4_ + fVar95,fVar78);
            bVar9 = fVar78 <= 1.1920929e-07;
            auVar88._0_4_ = -(uint)bVar9;
            auVar88._4_4_ = -(uint)bVar9;
            auVar88._8_4_ = -(uint)bVar9;
            auVar88._12_4_ = -(uint)bVar9;
            NEON_ext(auVar88,auVar88,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar88._12_4_,
                         CONCAT12((char)auVar88._8_4_,
                                  CONCAT11((char)auVar88._4_4_,(char)auVar88._0_4_))) != -1) {
              auVar89._0_4_ = -fVar25 * auVar115._0_4_;
              auVar89._4_4_ = -fVar144 * auVar115._4_4_;
              auVar89._8_4_ = -fVar147 * auVar115._8_4_;
              auVar89._12_4_ = auVar115._12_4_ * 0.0;
              auVar98 = NEON_ext(auVar89,auVar89,8,1);
              fVar78 = auVar98._0_4_ + auVar98._4_4_;
              uVar112 = NEON_frecpe(uVar37,4);
              uVar125 = NEON_frecps(uVar37,uVar112,4);
              fVar95 = (float)uVar112 * (float)uVar125;
              fVar76 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
              fVar95 = fVar95 * (float)uVar112;
              fVar76 = fVar76 * (float)((ulong)uVar112 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
              fVar95 = fVar95 * (float)uVar112;
              fVar76 = fVar76 * (float)((ulong)uVar112 >> 0x20);
              uVar112 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
              fVar95 = fVar95 * (float)uVar112;
              fVar76 = fVar76 * (float)((ulong)uVar112 >> 0x20);
              uVar37 = NEON_frecps(uVar37,CONCAT44(fVar76,fVar95),4);
              uVar112 = NEON_fmov(0x3f800000,4);
              uVar37 = NEON_fmin(CONCAT44((auVar89._0_4_ + auVar89._4_4_ + fVar78) *
                                          fVar76 * (float)((ulong)uVar37 >> 0x20),
                                          (auVar89._0_4_ + auVar89._4_4_ + fVar78) *
                                          fVar95 * (float)uVar37),uVar112,4);
              uVar37 = NEON_fmax(uVar37,0,4);
              fVar78 = (float)uVar37;
              fVar95 = auVar115._0_4_ * fVar78;
              fVar76 = auVar115._4_4_ * fVar78;
              fVar24 = auVar115._8_4_ * fVar78;
              fVar78 = auVar115._12_4_ * fVar78;
              goto LAB_002e85e0;
            }
LAB_002e85f4:
            auVar98._8_8_ = uStack_f8;
            auVar98._0_4_ = local_100[0];
            auVar98._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
        else {
          bVar9 = local_1a4 == 1;
          local_1a4 = uVar36;
          if (bVar9) {
            fVar95 = local_f0 - fVar25;
            fVar76 = fStack_ec - fVar144;
            fVar24 = fStack_e8 - fVar147;
            fVar78 = fStack_e4 - fVar77;
            auVar87._0_4_ = fVar95 * fVar95;
            auVar87._4_4_ = fVar76 * fVar76;
            auVar87._8_4_ = fVar24 * fVar24;
            auVar87._12_4_ = fVar78 * fVar78;
            auVar98 = NEON_ext(auVar87,auVar87,8,1);
            fVar117 = auVar98._0_4_ + auVar98._4_4_;
            fVar29 = auVar87._0_4_ + auVar87._4_4_ + fVar117;
            uVar37 = CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar117,fVar29);
            bVar9 = fVar29 <= 1.1920929e-07;
            auVar105._0_4_ = -(uint)bVar9;
            auVar105._4_4_ = -(uint)bVar9;
            auVar105._8_4_ = -(uint)bVar9;
            auVar105._12_4_ = -(uint)bVar9;
            NEON_ext(auVar105,auVar105,8,1);
            if (CONCAT13((char)auVar105._12_4_,
                         CONCAT12((char)auVar105._8_4_,
                                  CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) == -1)
            goto LAB_002e85f4;
            auVar106._0_4_ = -fVar25 * fVar95;
            auVar106._4_4_ = -fVar144 * fVar76;
            auVar106._8_4_ = -fVar147 * fVar24;
            auVar106._12_4_ = fVar78 * 0.0;
            auVar98 = NEON_ext(auVar106,auVar106,8,1);
            fVar29 = auVar98._0_4_ + auVar98._4_4_;
            uVar112 = NEON_frecpe(uVar37,4);
            uVar125 = NEON_frecps(uVar37,uVar112,4);
            fVar117 = (float)uVar112 * (float)uVar125;
            fVar118 = (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar125 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar118,fVar117),4);
            fVar117 = fVar117 * (float)uVar112;
            fVar118 = fVar118 * (float)((ulong)uVar112 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar118,fVar117),4);
            fVar117 = fVar117 * (float)uVar112;
            fVar118 = fVar118 * (float)((ulong)uVar112 >> 0x20);
            uVar112 = NEON_frecps(uVar37,CONCAT44(fVar118,fVar117),4);
            fVar117 = fVar117 * (float)uVar112;
            fVar118 = fVar118 * (float)((ulong)uVar112 >> 0x20);
            uVar37 = NEON_frecps(uVar37,CONCAT44(fVar118,fVar117),4);
            uVar112 = NEON_fmov(0x3f800000,4);
            uVar37 = NEON_fmin(CONCAT44((auVar106._0_4_ + auVar106._4_4_ + fVar29) *
                                        fVar118 * (float)((ulong)uVar37 >> 0x20),
                                        (auVar106._0_4_ + auVar106._4_4_ + fVar29) *
                                        fVar117 * (float)uVar37),uVar112,4);
            uVar37 = NEON_fmax(uVar37,0,4);
            fVar29 = (float)uVar37;
            fVar95 = fVar95 * fVar29;
            fVar76 = fVar76 * fVar29;
            fVar24 = fVar24 * fVar29;
            fVar78 = fVar78 * fVar29;
LAB_002e85e0:
            auVar48._0_8_ = CONCAT44(fVar144 + fVar76,fVar25 + fVar95);
            auVar48._8_4_ = fVar147 + fVar24;
            auVar48._12_4_ = fVar77 + fVar78;
            auVar98 = NEON_ext(auVar48,auVar48,8,1);
            auVar98._8_4_ = (float)auVar98._0_4_;
            auVar98._0_8_ = auVar48._0_8_;
            auVar98._12_4_ = 0.0;
          }
        }
      }
      fVar144 = auVar98._0_4_;
      auVar68._0_4_ = fVar144 * fVar144;
      fVar147 = auVar98._4_4_;
      auVar68._4_4_ = fVar147 * fVar147;
      fVar77 = auVar98._8_4_;
      auVar68._8_4_ = fVar77 * fVar77;
      auVar68._12_4_ = auVar98._12_4_ * auVar98._12_4_;
      auVar127 = NEON_ext(auVar68,auVar68,8,1);
      uStack_b8 = auVar98._8_8_;
      local_c0 = auVar98._0_8_;
      fVar78 = auVar127._0_4_ + auVar127._4_4_;
      fVar25 = auVar68._0_4_ + auVar68._4_4_ + fVar78;
      fVar78 = auVar68._0_4_ + auVar68._4_4_ + fVar78;
      uVar79 = CONCAT44(fVar78,fVar25);
      uVar37 = NEON_frsqrte(uVar79,4);
      fVar95 = (float)uVar37;
      fVar76 = (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar95 * fVar95),uVar79,4);
      fVar95 = fVar95 * (float)uVar37;
      fVar76 = fVar76 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar95 * fVar95),uVar79,4);
      fVar95 = fVar95 * (float)uVar37;
      fVar76 = fVar76 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar95 * fVar95),uVar79,4);
      fVar95 = fVar95 * (float)uVar37;
      fVar76 = fVar76 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar95 * fVar95),uVar79,4);
      uVar15 = CONCAT44(fVar78 * fVar76 * (float)((ulong)uVar37 >> 0x20),
                        fVar25 * fVar95 * (float)uVar37);
      uVar15 = uVar15 ^ (uVar15 ^ uVar79) & CONCAT44(-(uint)(fVar25 == 0.0),-(uint)(fVar25 == 0.0));
      uVar37 = NEON_frecpe(uVar15,4);
      uVar112 = NEON_frecps(uVar15,uVar37,4);
      fVar25 = (float)uVar37 * (float)uVar112;
      fVar78 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
      uVar37 = NEON_frecps(uVar15,CONCAT44(fVar78,fVar25),4);
      fVar25 = fVar25 * (float)uVar37;
      fVar78 = fVar78 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frecps(uVar15,CONCAT44(fVar78,fVar25),4);
      fVar25 = fVar25 * (float)uVar37;
      fVar78 = fVar78 * (float)((ulong)uVar37 >> 0x20);
      uVar37 = NEON_frecps(uVar15,CONCAT44(fVar78,fVar25),4);
      fVar25 = fVar25 * (float)uVar37;
      uVar37 = NEON_frecps(uVar15,CONCAT44(fVar78 * (float)((ulong)uVar37 >> 0x20),fVar25),4);
      fVar25 = fVar25 * (float)uVar37;
      fVar144 = fVar144 * fVar25;
      fVar147 = fVar147 * fVar25;
      fVar77 = fVar77 * fVar25;
      bVar9 = (float)uVar15 < fVar30;
      bVar6 = fVar134 < (float)uVar15 && bVar9;
      auVar90._0_4_ = -(uint)bVar6;
      auVar90._4_4_ = -(uint)bVar6;
      auVar90._8_4_ = -(uint)bVar6;
      auVar90._12_4_ = -(uint)bVar6;
      NEON_ext(auVar90,auVar90,8,1);
    } while (CONCAT13((char)auVar90._12_4_,
                      CONCAT12((char)auVar90._8_4_,CONCAT11((char)auVar90._4_4_,(char)auVar90._0_4_)
                              )) == -1);
    uVar37 = CONCAT26(-(ushort)!bVar9,
                      CONCAT24(-(ushort)!bVar9,CONCAT22(-(ushort)!bVar9,-(ushort)!bVar9)));
  }
  else {
    uVar37 = 0;
  }
  uVar27 = (ushort)((ulong)uVar37 >> 0x10);
  uVar28 = (ushort)((ulong)uVar37 >> 0x20);
  uVar35 = (ushort)((ulong)uVar37 >> 0x30);
  auVar65._0_4_ = (int)((uint)(ushort)uVar37 << 0x1f) >> 0x1f;
  auVar65._4_4_ = (int)((uint)uVar27 << 0x1f) >> 0x1f;
  auVar65._8_4_ = (int)((uint)uVar28 << 0x1f) >> 0x1f;
  auVar65._12_4_ = (int)((uint)uVar35 << 0x1f) >> 0x1f;
  auVar66 = NEON_ext(auVar65,auVar65,8,1);
  auVar45._0_4_ =
       (float)CONCAT13((char)((short)(uVar35 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar28 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar27 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar37 << 0xf) >> 0xf))));
  auVar45[4] = auVar66[0];
  auVar45[5] = auVar66[2];
  auVar45[6] = auVar66[4];
  auVar45[7] = auVar66[6];
  auVar45._8_8_ = 0;
  if (auVar45._0_4_ != -NAN) {
    if ((param_9 != (byte *)0x0) && (*param_11 = (byte)local_1a4, local_1a4 != 0)) {
      if (local_1a4 == 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        puVar14 = local_1a0 + 5;
        puVar16 = local_1a0 + 1;
        do {
          puVar1 = puVar14 + -1;
          uVar96 = *puVar14;
          pbVar10 = param_9 + lVar12;
          uVar36 = puVar16[-1];
          uVar119 = *puVar16;
          lVar17 = lVar12 + 1;
          lVar12 = lVar12 + 2;
          puVar14 = puVar14 + 2;
          puVar16 = puVar16 + 2;
          *pbVar10 = (byte)*puVar1;
          (param_10 + lVar17)[-1] = (byte)uVar36;
          pbVar10[1] = (byte)uVar96;
          param_10[lVar17] = (byte)uVar119;
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar12);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      uVar36 = local_1a0[lVar12];
      param_9[lVar12] = (byte)local_1a0[lVar12 + 4];
      param_10[lVar12] = (byte)uVar36;
    }
    return 5;
  }
  local_c0 = auVar84._0_8_;
  uStack_b8 = auVar84._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_002e8d60:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar45._0_4_ =
           local_140 +
           ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0];
      auVar45._4_4_ =
           fStack_13c +
           (uStack_130._4_4_ - fStack_13c) * local_a8[0] + (fStack_11c - fStack_13c) * local_b0[0];
      auVar45._8_4_ =
           fStack_138 +
           ((float)uStack_128 - fStack_138) * local_a8[0] + (fStack_118 - fStack_138) * local_b0[0];
      auVar45._12_4_ = fStack_134 + 0.0;
      auVar66._0_4_ =
           local_180[0] +
           ((float)uStack_170 - local_180[0]) * local_a8[0] +
           (local_160 - local_180[0]) * local_b0[0];
      auVar66._4_4_ =
           local_180[1] +
           (uStack_170._4_4_ - local_180[1]) * local_a8[0] +
           (fStack_15c - local_180[1]) * local_b0[0];
      auVar66._8_4_ =
           (float)uStack_178 +
           ((float)uStack_168 - (float)uStack_178) * local_a8[0] +
           (fStack_158 - (float)uStack_178) * local_b0[0];
      auVar66._12_4_ = uStack_178._4_4_ + 0.0;
      goto LAB_002e8e70;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar55._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar55._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar55._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar98 = NEON_ext(auVar55,auVar55,8,1);
      auVar45._8_4_ = (float)auVar98._0_4_;
      auVar45._0_8_ = auVar55._0_8_;
      auVar45._12_4_ = 0.0;
      auVar69._0_8_ =
           CONCAT44(local_180[1] + (uStack_170._4_4_ - local_180[1]) * local_a8[0],
                    local_180[0] + ((float)uStack_170 - local_180[0]) * local_a8[0]);
      auVar69._8_4_ = (float)uStack_178 + ((float)uStack_168 - (float)uStack_178) * local_a8[0];
      auVar69._12_4_ = uStack_178._4_4_ + (uStack_168._4_4_ - uStack_178._4_4_) * local_a8[0];
      auVar98 = NEON_ext(auVar69,auVar69,8,1);
      auVar66._8_4_ = (float)auVar98._0_4_;
      auVar66._0_8_ = auVar69._0_8_;
      auVar66._12_4_ = 0.0;
      goto LAB_002e8e70;
    }
    if (local_1a4 != 1) goto LAB_002e8e70;
  }
  else {
    uVar36 = local_1a4 - 1;
    *param_11 = (byte)uVar36;
    if (uVar36 != 0) {
      if (uVar36 == 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        puVar14 = local_1a0 + 5;
        puVar16 = local_1a0 + 1;
        do {
          puVar1 = puVar14 + -1;
          uVar119 = *puVar14;
          pbVar10 = param_9 + lVar12;
          uVar96 = puVar16[-1];
          uVar123 = *puVar16;
          lVar17 = lVar12 + 1;
          lVar12 = lVar12 + 2;
          puVar14 = puVar14 + 2;
          puVar16 = puVar16 + 2;
          *pbVar10 = (byte)*puVar1;
          (param_10 + lVar17)[-1] = (byte)uVar96;
          pbVar10[1] = (byte)uVar119;
          param_10[lVar17] = (byte)uVar123;
        } while ((ulong)uVar36 - ((ulong)uVar36 & 1) != lVar12);
        if ((uVar36 & 1) == 0) goto LAB_002e8d60;
      }
      uVar36 = local_1a0[lVar12];
      param_9[lVar12] = (byte)local_1a0[lVar12 + 4];
      param_10[lVar12] = (byte)uVar36;
      goto LAB_002e8d60;
    }
  }
  auVar45._4_4_ = fStack_13c;
  auVar45._0_4_ = local_140;
  auVar45._8_4_ = fStack_138;
  auVar45._12_4_ = fStack_134;
  auVar66._4_4_ = local_180[1];
  auVar66._0_4_ = local_180[0];
  auVar66._8_4_ = (float)uStack_178;
  auVar66._12_4_ = uStack_178._4_4_;
LAB_002e8e70:
  uVar37 = NEON_frecpe(uVar143,4);
  uVar112 = NEON_frecps(uVar143,uVar37,4);
  fVar134 = (float)uVar37 * (float)uVar112;
  fVar25 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar112 >> 0x20);
  uVar37 = NEON_frecps(uVar143,CONCAT44(fVar25,fVar134),4);
  fVar134 = fVar134 * (float)uVar37;
  fVar25 = fVar25 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frecps(uVar143,CONCAT44(fVar25,fVar134),4);
  fVar134 = fVar134 * (float)uVar37;
  fVar25 = fVar25 * (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frecps(uVar143,CONCAT44(fVar25,fVar134),4);
  fVar134 = fVar134 * (float)uVar37;
  uVar37 = NEON_frecps(uVar143,CONCAT44(fVar25 * (float)((ulong)uVar37 >> 0x20),fVar134),4);
  fVar134 = fVar134 * (float)uVar37;
  local_c0._0_4_ = (float)local_c0 * fVar134;
  local_c0._4_4_ = local_c0._4_4_ * fVar134;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar134;
  *(ulong *)(param_7 + 2) = (ulong)(uint)(float)uStack_b8;
  *(ulong *)param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar134 = (float)uVar143;
  fVar25 = (float)(uVar143 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar57._0_8_ =
         CONCAT44(auVar45._4_4_ - local_c0._4_4_ * fVar170,auVar45._0_4_ - (float)local_c0 * fVar170
                 );
    auVar57._8_4_ = auVar45._8_4_ - (float)uStack_b8 * fVar170;
    auVar57._12_4_ = auVar45._12_4_ - fVar170 * 0.0;
    auVar71._0_8_ =
         CONCAT44(auVar66._4_4_ + local_c0._4_4_ * fVar169,auVar66._0_4_ + (float)local_c0 * fVar169
                 );
    auVar71._8_4_ = auVar66._8_4_ + (float)uStack_b8 * fVar169;
    auVar71._12_4_ = auVar66._12_4_ + fVar169 * 0.0;
    auVar98 = NEON_ext(auVar57,auVar57,8,1);
    auVar84 = NEON_ext(auVar71,auVar71,8,1);
    param_5[1] = (ulong)auVar98._0_4_;
    *param_5 = auVar57._0_8_;
    param_6[1] = (ulong)auVar84._0_4_;
    *param_6 = auVar71._0_8_;
    *param_8 = CONCAT44(fVar25 - fVar171,fVar134 - fVar171);
  }
  else {
    iVar61 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar97 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar92 = (byte)((uint)iVar61 >> 8);
    bVar93 = (byte)((uint)iVar61 >> 0x10);
    bVar94 = (byte)((uint)iVar61 >> 0x18);
    fVar169 = (float)CONCAT13(bVar142 & ~bVar94,
                              CONCAT12(bVar141 & ~bVar93,
                                       CONCAT11(bVar140 & ~bVar92,bVar139 & ~(byte)iVar61)));
    bVar109 = (byte)((uint)iVar97 >> 8);
    bVar110 = (byte)((uint)iVar97 >> 0x10);
    bVar111 = (byte)((uint)iVar97 >> 0x18);
    fVar170 = (float)CONCAT13(bVar138 & ~bVar111,
                              CONCAT12(bVar137 & ~bVar110,
                                       CONCAT11(bVar136 & ~bVar109,bVar135 & ~(byte)iVar97)));
    auVar56._0_8_ =
         CONCAT44(auVar45._4_4_ - local_c0._4_4_ * fVar169,auVar45._0_4_ - (float)local_c0 * fVar169
                 );
    auVar56._8_4_ = auVar45._8_4_ - (float)uStack_b8 * fVar169;
    auVar56._12_4_ = auVar45._12_4_ - fVar169 * 0.0;
    auVar70._0_8_ =
         CONCAT44(auVar66._4_4_ + local_c0._4_4_ * fVar170,auVar66._0_4_ + (float)local_c0 * fVar170
                 );
    auVar70._8_4_ = auVar66._8_4_ + (float)uStack_b8 * fVar170;
    auVar70._12_4_ = auVar66._12_4_ + fVar170 * 0.0;
    auVar98 = NEON_ext(auVar56,auVar56,8,1);
    auVar84 = NEON_ext(auVar70,auVar70,8,1);
    param_5[1] = (ulong)auVar98._0_4_;
    *param_5 = auVar56._0_8_;
    param_6[1] = (ulong)auVar84._0_4_;
    *param_6 = auVar70._0_8_;
    *param_8 = CONCAT44(fVar25 - ((float)(CONCAT17(bVar142 & ~bVar94,
                                                   CONCAT16(bVar141 & ~bVar93,
                                                            CONCAT15(bVar140 & ~bVar92,
                                                                     CONCAT14(bVar139 & ~(byte)
                                                  iVar61,fVar169)))) >> 0x20) +
                                 (float)(CONCAT17(bVar138 & ~bVar111,
                                                  CONCAT16(bVar137 & ~bVar110,
                                                           CONCAT15(bVar136 & ~bVar109,
                                                                    CONCAT14(bVar135 & ~(byte)iVar97
                                                                             ,fVar170)))) >> 0x20)),
                        fVar134 - (fVar169 + fVar170));
    if (fVar134 <= fVar171 + (float)uVar133) {
      return 2;
    }
  }
  return 4;
}


