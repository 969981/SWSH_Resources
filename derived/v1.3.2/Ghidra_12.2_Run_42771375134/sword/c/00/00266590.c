/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00266590; name: FUN_00266590
 */


/* WARNING: Removing unreachable block (ram,0x002678e8) */
/* WARNING: Removing unreachable block (ram,0x00266f88) */
/* WARNING: Removing unreachable block (ram,0x0026796c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00266590(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            byte *param_9,byte *param_10,byte *param_11,byte param_12)

{
  undefined1 auVar1 [12];
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
  long lVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  float *pfVar18;
  undefined8 *puVar19;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar57;
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
  float fVar58;
  int iVar59;
  float fVar75;
  float fVar76;
  float fVar77;
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
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  ulong uVar78;
  byte bVar91;
  byte bVar92;
  byte bVar93;
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
  int iVar94;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined8 uVar108;
  float fVar115;
  undefined1 auVar109 [12];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar116;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar117;
  float fVar120;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 uVar126;
  float fVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  ulong uVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar155;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined8 uVar158;
  float fVar159;
  float fVar160;
  float fVar161;
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
  float local_140 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined8 local_100 [2];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined1 local_e0 [2] [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0 [2];
  float local_a8 [2];
  
  lVar14 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_2 + 8);
  fVar160 = *(float *)(lVar14 + 0x10);
  fVar159 = *(float *)(lVar9 + 0x10);
  uVar34 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar14 + 0x14),*(undefined4 *)(lVar14 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x14)),4);
  fVar161 = fVar160 + fVar159;
  uVar126 = *param_4;
  local_1a4 = 0;
  bVar128 = *param_11;
  uVar12 = (ulong)bVar128;
  fVar127 = (float)uVar34 * 0.1;
  if (bVar128 == 0) {
    auVar95 = *param_3;
    auVar82._0_4_ = auVar95._0_4_ * auVar95._0_4_;
    auVar82._4_4_ = auVar95._4_4_ * auVar95._4_4_;
    auVar82._8_4_ = auVar95._8_4_ * auVar95._8_4_;
    auVar82._12_4_ = auVar95._12_4_ * auVar95._12_4_;
    auVar100 = NEON_ext(auVar82,auVar82,8,1);
    auVar100._0_4_ = -(uint)(0.0 < auVar82._0_4_ + auVar82._4_4_ + auVar100._0_4_ + auVar100._4_4_);
    auVar112._8_8_ = _UNK_01d4ae58;
    auVar112._0_8_ = _DAT_01d4ae50;
    uVar136 = 0x7f7fffff7f7fffff;
    auVar100._4_4_ = auVar100._0_4_;
    auVar100._8_4_ = auVar100._0_4_;
    auVar100._12_4_ = auVar100._0_4_;
    auVar95 = auVar112 ^ (auVar112 ^ auVar95) & auVar100;
    fVar120 = auVar95._0_4_;
    auVar84._0_4_ = fVar120 * fVar120;
    fVar57 = auVar95._4_4_;
    auVar84._4_4_ = fVar57 * fVar57;
    fVar77 = auVar95._8_4_;
    auVar84._8_4_ = fVar77 * fVar77;
    auVar84._12_4_ = auVar95._12_4_ * auVar95._12_4_;
    auVar82 = NEON_ext(auVar84,auVar84,8,1);
    uStack_b8 = auVar95._8_8_;
    local_c0 = auVar95._0_8_;
    fVar27 = auVar82._0_4_ + auVar82._4_4_;
    fVar22 = auVar84._0_4_ + auVar84._4_4_ + fVar27;
    fVar27 = auVar84._0_4_ + auVar84._4_4_ + fVar27;
    uVar12 = CONCAT44(fVar27,fVar22);
    uVar34 = NEON_frsqrte(uVar12,4);
    fVar58 = (float)uVar34;
    fVar75 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    uVar78 = CONCAT44(fVar27 * fVar75 * (float)((ulong)uVar34 >> 0x20),
                      fVar22 * fVar58 * (float)uVar34);
    uVar78 = uVar78 ^ (uVar78 ^ uVar12) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0));
    uVar34 = NEON_frecpe(uVar78,4);
    uVar108 = NEON_frecps(uVar78,uVar34,4);
    fVar22 = (float)uVar34 * (float)uVar108;
    fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar108 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    auVar82 = ZEXT816(0);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    auVar109._0_4_ = fVar120 * fVar22;
    auVar109._4_4_ = fVar57 * fVar22;
    auVar109._8_4_ = fVar77 * fVar22;
    iVar59 = -1;
  }
  else {
    fVar22 = (float)uVar126;
    uVar78 = (ulong)uVar126 >> 0x20;
    pbVar7 = param_10;
    pbVar8 = param_9;
    pfVar11 = local_1a0 + 4;
    pfVar15 = local_1a0;
    puVar19 = local_100;
    puVar20 = &local_180;
    pfVar18 = local_140;
    do {
      bVar129 = *pbVar8;
      *pfVar11 = (float)(uint)bVar129;
      bVar130 = *pbVar7;
      *pfVar15 = (float)(uint)bVar130;
      auVar82 = *(undefined1 (*) [16])(*(long *)(lVar9 + 0xa0) + (ulong)bVar130 * 0xc);
      uVar126 = NEON_fmax(uVar126,CONCAT44((float)uVar78 + 0.0,fVar22 + 0.0),4);
      pfVar13 = (float *)(lVar14 + 0x30 + (1 - (ulong)bVar129) * 0x10);
      fVar27 = *pfVar13;
      fVar120 = pfVar13[1];
      fVar57 = pfVar13[2];
      fVar77 = pfVar13[3];
      uVar12 = uVar12 - 1;
      pfVar18[2] = fVar57;
      pfVar18[3] = fVar77;
      *pfVar18 = fVar27;
      pfVar18[1] = fVar120;
      auVar95._0_8_ = CONCAT44(fVar120 - auVar82._4_4_,fVar27 - auVar82._0_4_);
      auVar95._8_4_ = fVar57 - auVar82._8_4_;
      auVar95._12_4_ = fVar77 - 0.0;
      puVar20[1] = (ulong)(uint)auVar82._8_4_;
      *puVar20 = auVar82._0_8_;
      puVar19[1] = auVar95._8_8_;
      *puVar19 = auVar95._0_8_;
      pbVar7 = pbVar7 + 1;
      pbVar8 = pbVar8 + 1;
      pfVar11 = pfVar11 + 1;
      pfVar15 = pfVar15 + 1;
      puVar19 = puVar19 + 2;
      puVar20 = puVar20 + 2;
      pfVar18 = pfVar18 + 4;
    } while (uVar12 != 0);
    local_1a4 = (uint)bVar128;
    if (bVar128 == 4) {
      auVar95 = FUN_00238f80(local_100,local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar22 = (float)local_100[0];
      fVar27 = SUB84(local_100[0],4);
      fVar120 = (float)local_100[1];
      fVar57 = SUB84(local_100[1],4);
      if (local_1a4 == 3) {
        auVar95._8_8_ = local_100[1];
        auVar95._0_8_ = local_100[0];
        auVar4._4_4_ = fStack_ec;
        auVar4._0_4_ = local_f0;
        auVar4._8_4_ = fStack_e8;
        auVar4._12_4_ = fStack_e4;
        auVar110._0_4_ = local_f0 - fVar22;
        auVar110._4_4_ = fStack_ec - fVar27;
        auVar110._8_4_ = fStack_e8 - fVar120;
        auVar110._12_4_ = fStack_e4 - fVar57;
        fVar75 = local_e0[0]._0_4_;
        auVar98._0_4_ = fVar75 - fVar22;
        fVar76 = local_e0[0]._4_4_;
        auVar98._4_4_ = fVar76 - fVar27;
        fVar21 = local_e0[0]._8_4_;
        auVar98._8_4_ = fVar21 - fVar120;
        auVar98._12_4_ = local_e0[0]._12_4_ - fVar57;
        auVar82 = NEON_ext(auVar110,auVar110,8,1);
        auVar100 = NEON_ext(auVar98,auVar98,8,1);
        fVar116 = auVar110._0_4_ * auVar98._4_4_ - auVar110._4_4_ * auVar98._0_4_;
        uVar34 = NEON_ext(CONCAT44(auVar110._4_4_ * auVar98._8_4_ - auVar110._8_4_ * auVar98._4_4_,
                                   fVar116),
                          CONCAT44(auVar82._4_4_ * auVar98._4_4_ - auVar110._4_4_ * auVar100._4_4_,
                                   auVar82._0_4_ * auVar98._0_4_ - auVar110._0_4_ * auVar100._0_4_),
                          4,1);
        fVar26 = (float)uVar34;
        auVar118._0_4_ = fVar26 * fVar26;
        fVar115 = (float)((ulong)uVar34 >> 0x20);
        auVar118._4_4_ = fVar115 * fVar115;
        auVar118._8_4_ = fVar116 * fVar116;
        auVar118._12_4_ = 0;
        auVar82 = NEON_ext(auVar118,auVar118,8,1);
        fVar58 = auVar82._0_4_ + auVar82._4_4_;
        fVar77 = auVar118._0_4_ + auVar118._4_4_ + fVar58;
        uVar34 = CONCAT44(auVar118._0_4_ + auVar118._4_4_ + fVar58,fVar77);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar77) {
          if (fVar77 != 0.0) {
            auVar82 = NEON_ext(auVar4,auVar4,8,1);
            auVar100 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar123 = local_f0 * fVar76 - fStack_ec * fVar75;
            auVar84 = NEON_ext(auVar95,auVar95,8,1);
            uVar158 = NEON_ext(CONCAT44(fStack_ec * fVar21 - fStack_e8 * fVar76,fVar123),
                               CONCAT44(auVar82._4_4_ * fVar76 - fStack_ec * auVar100._4_4_,
                                        auVar82._0_4_ * fVar75 - local_f0 * auVar100._0_4_),4,1);
            fVar77 = fVar27 * fVar75 - fVar22 * fVar76;
            uVar117 = NEON_ext(CONCAT44(fVar120 * fVar76 - fVar27 * fVar21,fVar77),
                               CONCAT44(fVar27 * auVar100._4_4_ - auVar84._4_4_ * fVar76,
                                        fVar22 * auVar100._0_4_ - auVar84._0_4_ * fVar75),4,1);
            fVar58 = fVar22 * fStack_ec - fVar27 * local_f0;
            uVar108 = NEON_ext(CONCAT44(fVar27 * fStack_e8 - fVar120 * fStack_ec,fVar58),
                               CONCAT44(auVar84._4_4_ * fStack_ec - fVar27 * auVar82._4_4_,
                                        auVar84._0_4_ * local_f0 - fVar22 * auVar82._0_4_),4,1);
            auVar139._0_4_ = (float)uVar158 * fVar26;
            auVar139._4_4_ = (float)((ulong)uVar158 >> 0x20) * fVar115;
            auVar139._8_4_ = fVar123 * fVar116;
            auVar139._12_4_ = 0;
            auVar82 = NEON_ext(auVar139,auVar139,8,1);
            auVar149._0_4_ = (float)uVar117 * fVar26;
            auVar149._4_4_ = (float)((ulong)uVar117 >> 0x20) * fVar115;
            auVar149._8_4_ = fVar77 * fVar116;
            auVar149._12_4_ = 0;
            auVar121._0_4_ = (float)uVar108 * fVar26;
            auVar121._4_4_ = (float)((ulong)uVar108 >> 0x20) * fVar115;
            auVar121._8_4_ = fVar58 * fVar116;
            auVar121._12_4_ = 0;
            fVar77 = auVar139._0_4_ + auVar139._4_4_ + auVar82._0_4_ + auVar82._4_4_;
            auVar82 = NEON_ext(auVar149,auVar149,8,1);
            auVar100 = NEON_ext(auVar121,auVar121,8,1);
            fVar58 = auVar149._0_4_ + auVar149._4_4_ + auVar82._0_4_ + auVar82._4_4_;
            fVar123 = auVar121._0_4_ + auVar121._4_4_ + auVar100._0_4_ + auVar100._4_4_;
            bVar6 = 0.0 <= fVar123 && (0.0 <= fVar77 && 0.0 <= fVar58);
            auVar150._0_4_ = -(uint)bVar6;
            auVar150._4_4_ = -(uint)bVar6;
            auVar150._8_4_ = -(uint)bVar6;
            auVar150._12_4_ = -(uint)bVar6;
            NEON_ext(auVar150,auVar150,8,1);
            if (CONCAT13((char)auVar150._12_4_,
                         CONCAT12((char)auVar150._8_4_,
                                  CONCAT11((char)auVar150._4_4_,(char)auVar150._0_4_))) == -1) {
              auVar38._0_4_ = fVar22 * fVar26;
              auVar38._4_4_ = fVar27 * fVar115;
              auVar38._8_4_ = fVar120 * fVar116;
              auVar38._12_4_ = fVar57 * 0.0;
              auVar95 = NEON_ext(auVar38,auVar38,8,1);
              uVar108 = NEON_frecpe(uVar34,4);
              uVar117 = NEON_frecps(uVar34,uVar108,4);
              fVar22 = (float)uVar108 * (float)uVar117;
              fVar27 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar108;
              fVar27 = fVar27 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar108;
              fVar27 = fVar27 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
              fVar22 = fVar22 * (float)uVar108;
              uVar34 = NEON_frecps(uVar34,CONCAT44(fVar27 * (float)((ulong)uVar108 >> 0x20),fVar22),
                                   4);
              fVar22 = (auVar38._0_4_ + auVar38._4_4_ + auVar95._0_4_ + auVar95._4_4_) *
                       fVar22 * (float)uVar34;
              auVar95._0_4_ = fVar26 * fVar22;
              auVar95._4_4_ = fVar115 * fVar22;
              auVar95._8_4_ = fVar116 * fVar22;
              auVar95._12_4_ = 0.0;
            }
            else {
              auVar124._0_4_ = -fVar22 * auVar110._0_4_;
              auVar124._4_4_ = -fVar27 * auVar110._4_4_;
              auVar124._8_4_ = -fVar120 * auVar110._8_4_;
              auVar124._12_4_ = auVar110._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar124,auVar124,8,1);
              fVar116 = auVar82._0_4_ + auVar82._4_4_;
              auVar137._0_4_ = -local_f0 * auVar110._0_4_;
              auVar137._4_4_ = -fStack_ec * auVar110._4_4_;
              auVar137._8_4_ = -fStack_e8 * auVar110._8_4_;
              auVar137._12_4_ = auVar110._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar137,auVar137,8,1);
              fVar155 = auVar82._0_4_ + auVar82._4_4_;
              fVar26 = auVar124._0_4_ + auVar124._4_4_ + fVar116;
              fVar115 = auVar137._0_4_ + auVar137._4_4_ + fVar155;
              fVar155 = auVar137._0_4_ + auVar137._4_4_ + fVar155;
              bVar6 = (0.0 <= fVar26 && fVar123 <= 0.0) && fVar115 <= 0.0;
              auVar153._0_4_ = -(uint)bVar6;
              auVar153._4_4_ = -(uint)bVar6;
              auVar153._8_4_ = -(uint)bVar6;
              auVar153._12_4_ = -(uint)bVar6;
              NEON_ext(auVar153,auVar153,8,1);
              pauVar16 = (undefined1 (*) [16])&local_f0;
              if (CONCAT13((char)auVar153._12_4_,
                           CONCAT12((char)auVar153._8_4_,
                                    CONCAT11((char)auVar153._4_4_,(char)auVar153._0_4_))) == -1) {
                uVar34 = CONCAT44((auVar124._0_4_ + auVar124._4_4_ + fVar116) - fVar155,
                                  fVar26 - fVar115);
                uVar108 = NEON_frecpe(uVar34,4);
                uVar117 = NEON_frecps(uVar34,uVar108,4);
                fVar77 = (float)uVar108 * (float)uVar117;
                fVar58 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar58,fVar77),4);
                fVar77 = fVar77 * (float)uVar108;
                fVar58 = fVar58 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar58,fVar77),4);
                fVar77 = fVar77 * (float)uVar108;
                fVar58 = fVar58 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar58,fVar77),4);
                fVar77 = fVar77 * (float)uVar108;
                uVar34 = NEON_frecps(uVar34,CONCAT44(fVar58 * (float)((ulong)uVar108 >> 0x20),fVar77
                                                    ),4);
                fVar26 = fVar26 * (float)(-(uint)(1.1920929e-07 < ABS(fVar26 - fVar115)) &
                                         (uint)(fVar77 * (float)uVar34));
                lVar9 = 0;
                pauVar17 = (undefined1 (*) [16])local_100;
                auVar39._0_8_ =
                     CONCAT44(fVar27 + auVar110._4_4_ * fVar26,fVar22 + auVar110._0_4_ * fVar26);
                auVar39._8_4_ = fVar120 + auVar110._8_4_ * fVar26;
                auVar39._12_4_ = fVar57 + auVar110._12_4_ * fVar26;
                auVar95 = NEON_ext(auVar39,auVar39,8,1);
                local_1a4 = 2;
                auVar95._8_4_ = (float)auVar95._0_4_;
                auVar95._0_8_ = auVar39._0_8_;
                auVar95._12_4_ = 0.0;
LAB_00266dfc:
                lVar14 = 1;
                pauVar10 = pauVar16;
                pauVar16 = pauVar17;
              }
              else {
                auVar154._0_4_ = -local_f0 * auVar98._0_4_;
                auVar154._4_4_ = -fStack_ec * auVar98._4_4_;
                auVar154._8_4_ = -fStack_e8 * auVar98._8_4_;
                auVar154._12_4_ = auVar98._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar154,auVar154,8,1);
                fVar23 = auVar82._0_4_ + auVar82._4_4_;
                auVar111._0_4_ = auVar110._0_4_ * -fVar75;
                auVar111._4_4_ = auVar110._4_4_ * -fVar76;
                auVar111._8_4_ = auVar110._8_4_ * -fVar21;
                auVar111._12_4_ = auVar110._12_4_ * 0.0;
                auVar157._0_4_ = auVar98._0_4_ * -fVar75;
                auVar157._4_4_ = auVar98._4_4_ * -fVar76;
                auVar157._8_4_ = auVar98._8_4_ * -fVar21;
                auVar157._12_4_ = auVar98._12_4_ * 0.0;
                fVar116 = auVar154._0_4_ + auVar154._4_4_ + fVar23;
                auVar82 = NEON_ext(auVar111,auVar111,8,1);
                fVar29 = auVar82._0_4_ + auVar82._4_4_;
                fVar123 = auVar111._0_4_ + auVar111._4_4_ + fVar29;
                auVar82 = NEON_ext(auVar157,auVar157,8,1);
                fVar30 = auVar82._0_4_ + auVar82._4_4_;
                fVar28 = auVar157._0_4_ + auVar157._4_4_ + fVar30;
                fVar30 = auVar157._0_4_ + auVar157._4_4_ + fVar30;
                pauVar10 = local_e0;
                bVar6 = (fVar115 <= fVar116 && fVar77 <= 0.0) && fVar28 <= fVar123;
                auVar144._0_4_ = -(uint)bVar6;
                auVar144._4_4_ = -(uint)bVar6;
                auVar144._8_4_ = -(uint)bVar6;
                auVar144._12_4_ = -(uint)bVar6;
                NEON_ext(auVar144,auVar144,8,1);
                if (CONCAT13((char)auVar144._12_4_,
                             CONCAT12((char)auVar144._8_4_,
                                      CONCAT11((char)auVar144._4_4_,(char)auVar144._0_4_))) == -1) {
                  fVar22 = (fVar116 - fVar115) + (fVar123 - fVar28);
                  uVar34 = CONCAT44(((auVar154._0_4_ + auVar154._4_4_ + fVar23) - fVar155) +
                                    ((auVar111._0_4_ + auVar111._4_4_ + fVar29) - fVar30),fVar22);
                  uVar108 = NEON_frecpe(uVar34,4);
                  uVar117 = NEON_frecps(uVar34,uVar108,4);
                  fVar27 = (float)uVar108 * (float)uVar117;
                  fVar120 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                  fVar27 = fVar27 * (float)uVar108;
                  fVar120 = fVar120 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                  fVar27 = fVar27 * (float)uVar108;
                  fVar120 = fVar120 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                  fVar27 = fVar27 * (float)uVar108;
                  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar120 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar27),4);
                  fVar22 = (fVar116 - fVar115) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar22)) &
                                  (uint)(fVar27 * (float)uVar34));
                  auVar40._0_8_ =
                       CONCAT44(fStack_ec + (fVar76 - fStack_ec) * fVar22,
                                local_f0 + (fVar75 - local_f0) * fVar22);
                  auVar40._8_4_ = fStack_e8 + (fVar21 - fStack_e8) * fVar22;
                  auVar40._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar22;
                  auVar95 = NEON_ext(auVar40,auVar40,8,1);
                  lVar9 = 1;
                  auVar1._8_4_ = auVar95._0_4_;
                  auVar1._0_8_ = auVar40._0_8_;
                }
                else {
                  auVar145._0_4_ = -fVar22 * auVar98._0_4_;
                  auVar145._4_4_ = -fVar27 * auVar98._4_4_;
                  auVar145._8_4_ = -fVar120 * auVar98._8_4_;
                  auVar145._12_4_ = auVar98._12_4_ * 0.0;
                  auVar82 = NEON_ext(auVar145,auVar145,8,1);
                  fVar75 = auVar82._0_4_ + auVar82._4_4_;
                  fVar77 = auVar145._0_4_ + auVar145._4_4_ + fVar75;
                  bVar6 = (fVar58 <= 0.0 && 0.0 <= fVar77) && fVar28 <= 0.0;
                  auVar140._0_4_ = -(uint)bVar6;
                  auVar140._4_4_ = -(uint)bVar6;
                  auVar140._8_4_ = -(uint)bVar6;
                  auVar140._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar140,auVar140,8,1);
                  if (CONCAT13((char)auVar140._12_4_,
                               CONCAT12((char)auVar140._8_4_,
                                        CONCAT11((char)auVar140._4_4_,(char)auVar140._0_4_))) != -1)
                  {
                    bVar6 = fVar26 <= 0.0 && fVar77 <= 0.0;
                    auVar99._0_4_ = -(uint)bVar6;
                    auVar99._4_4_ = -(uint)bVar6;
                    auVar99._8_4_ = -(uint)bVar6;
                    auVar99._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar99,auVar99,8,1);
                    pauVar17 = (undefined1 (*) [16])local_100;
                    if (CONCAT13((char)auVar99._12_4_,
                                 CONCAT12((char)auVar99._8_4_,
                                          CONCAT11((char)auVar99._4_4_,(char)auVar99._0_4_))) == -1)
                    {
                      lVar9 = 0;
                      local_1a4 = 1;
                    }
                    else {
                      bVar6 = 0.0 <= fVar115 && fVar116 <= fVar115;
                      auVar36._0_4_ = -(uint)bVar6;
                      auVar36._4_4_ = -(uint)bVar6;
                      auVar36._8_4_ = -(uint)bVar6;
                      auVar36._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar36,auVar36,8,1);
                      iVar59 = CONCAT13((char)auVar36._12_4_,
                                        CONCAT12((char)auVar36._8_4_,
                                                 CONCAT11((char)auVar36._4_4_,(char)auVar36._0_4_)))
                      ;
                      auVar37._0_4_ = -(uint)(iVar59 == -1);
                      auVar37._4_4_ = auVar37._0_4_;
                      auVar37._8_4_ = auVar37._0_4_;
                      auVar37._12_4_ = auVar37._0_4_;
                      local_1a4 = 1;
                      lVar9 = 1;
                      if (iVar59 != -1) {
                        lVar9 = 2;
                      }
                      pauVar17 = pauVar17 + lVar9;
                      auVar95 = local_e0[0] ^ (local_e0[0] ^ auVar4) & auVar37;
                    }
                    goto LAB_00266dfc;
                  }
                  uVar34 = CONCAT44((auVar145._0_4_ + auVar145._4_4_ + fVar75) - fVar30,
                                    fVar77 - fVar28);
                  uVar108 = NEON_frecpe(uVar34,4);
                  uVar117 = NEON_frecps(uVar34,uVar108,4);
                  fVar58 = (float)uVar108 * (float)uVar117;
                  fVar75 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar75 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar58),4);
                  fVar77 = fVar77 * (float)(-(uint)(1.1920929e-07 < ABS(fVar77 - fVar28)) &
                                           (uint)(fVar58 * (float)uVar34));
                  lVar9 = 0;
                  pauVar16 = (undefined1 (*) [16])local_100;
                  auVar41._0_8_ =
                       CONCAT44(fVar27 + auVar98._4_4_ * fVar77,fVar22 + auVar98._0_4_ * fVar77);
                  auVar41._8_4_ = fVar120 + auVar98._8_4_ * fVar77;
                  auVar41._12_4_ = fVar57 + auVar98._12_4_ * fVar77;
                  auVar95 = NEON_ext(auVar41,auVar41,8,1);
                  auVar1._8_4_ = auVar95._0_4_;
                  auVar1._0_8_ = auVar41._0_8_;
                }
                auVar95._12_4_ = 0.0;
                auVar95._0_12_ = auVar1;
                local_1a4 = 2;
                lVar14 = 2;
              }
              local_100[1] = *(undefined8 *)((long)*pauVar16 + 8);
              local_100[0] = *(undefined8 *)*pauVar16;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar10 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar10 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar10;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
              local_1a0[4] = local_1a0[lVar9 + 4];
              local_1a0[5] = local_1a0[lVar14 + 4];
              uStack_138._0_4_ = (float)*(undefined8 *)(local_140 + lVar9 * 4 + 2);
              uStack_138._4_4_ = (float)((ulong)*(undefined8 *)(local_140 + lVar9 * 4 + 2) >> 0x20);
              local_140[0] = (float)*(undefined8 *)(local_140 + lVar9 * 4);
              local_140[1] = (float)((ulong)*(undefined8 *)(local_140 + lVar9 * 4) >> 0x20);
              uStack_128 = *(undefined8 *)(local_140 + lVar14 * 4 + 2);
              uStack_130 = *(undefined8 *)(local_140 + lVar14 * 4);
              local_1a0[0] = local_1a0[lVar9];
              fStack_178 = (float)*(undefined8 *)(local_140 + lVar9 * 4 + -0xe);
              fStack_174 = (float)((ulong)*(undefined8 *)(local_140 + lVar9 * 4 + -0xe) >> 0x20);
              local_180._0_4_ = (float)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
              local_180._4_4_ = (float)((ulong)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8) >> 0x20);
              uStack_168 = *(undefined8 *)(local_140 + lVar14 * 4 + -0xe);
              uStack_170 = *(undefined8 *)(local_1a0 + lVar14 * 4 + 8);
              local_1a0[1] = local_1a0[lVar14];
            }
          }
        }
        else {
          auVar60._0_4_ = auVar110._0_4_ * auVar110._0_4_;
          auVar60._4_4_ = auVar110._4_4_ * auVar110._4_4_;
          auVar60._8_4_ = auVar110._8_4_ * auVar110._8_4_;
          auVar60._12_4_ = auVar110._12_4_ * auVar110._12_4_;
          auVar95 = NEON_ext(auVar60,auVar60,8,1);
          fVar58 = auVar95._0_4_ + auVar95._4_4_;
          fVar77 = auVar60._0_4_ + auVar60._4_4_ + fVar58;
          uVar34 = CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar58,fVar77);
          bVar6 = fVar77 <= 1.1920929e-07;
          auVar80._0_4_ = -(uint)bVar6;
          auVar80._4_4_ = -(uint)bVar6;
          auVar80._8_4_ = -(uint)bVar6;
          auVar80._12_4_ = -(uint)bVar6;
          NEON_ext(auVar80,auVar80,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar80._12_4_,
                       CONCAT12((char)auVar80._8_4_,
                                CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) != -1) {
            auVar81._0_4_ = -fVar22 * auVar110._0_4_;
            auVar81._4_4_ = -fVar27 * auVar110._4_4_;
            auVar81._8_4_ = -fVar120 * auVar110._8_4_;
            auVar81._12_4_ = auVar110._12_4_ * 0.0;
            auVar95 = NEON_ext(auVar81,auVar81,8,1);
            fVar77 = auVar95._0_4_ + auVar95._4_4_;
            uVar108 = NEON_frecpe(uVar34,4);
            uVar117 = NEON_frecps(uVar34,uVar108,4);
            fVar58 = (float)uVar108 * (float)uVar117;
            fVar75 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
            fVar58 = fVar58 * (float)uVar108;
            fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
            fVar58 = fVar58 * (float)uVar108;
            fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
            fVar58 = fVar58 * (float)uVar108;
            fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
            uVar34 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
            uVar108 = NEON_fmov(0x3f800000,4);
            uVar34 = NEON_fmin(CONCAT44((auVar81._0_4_ + auVar81._4_4_ + fVar77) *
                                        fVar75 * (float)((ulong)uVar34 >> 0x20),
                                        (auVar81._0_4_ + auVar81._4_4_ + fVar77) *
                                        fVar58 * (float)uVar34),uVar108,4);
            uVar34 = NEON_fmax(uVar34,0,4);
            fVar77 = (float)uVar34;
            fVar58 = auVar110._0_4_ * fVar77;
            fVar75 = auVar110._4_4_ * fVar77;
            fVar76 = auVar110._8_4_ * fVar77;
            fVar77 = auVar110._12_4_ * fVar77;
            goto LAB_00266980;
          }
LAB_00266994:
          auVar95._8_8_ = local_100[1];
          auVar95._0_8_ = local_100[0];
          local_1a4 = 1;
        }
      }
      else if (local_1a4 == 2) {
        fVar58 = local_f0 - fVar22;
        fVar75 = fStack_ec - fVar27;
        fVar76 = fStack_e8 - fVar120;
        fVar77 = fStack_e4 - fVar57;
        auVar79._0_4_ = fVar58 * fVar58;
        auVar79._4_4_ = fVar75 * fVar75;
        auVar79._8_4_ = fVar76 * fVar76;
        auVar79._12_4_ = fVar77 * fVar77;
        auVar95 = NEON_ext(auVar79,auVar79,8,1);
        fVar26 = auVar95._0_4_ + auVar95._4_4_;
        fVar21 = auVar79._0_4_ + auVar79._4_4_ + fVar26;
        uVar34 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar26,fVar21);
        bVar6 = fVar21 <= 1.1920929e-07;
        auVar96._0_4_ = -(uint)bVar6;
        auVar96._4_4_ = -(uint)bVar6;
        auVar96._8_4_ = -(uint)bVar6;
        auVar96._12_4_ = -(uint)bVar6;
        NEON_ext(auVar96,auVar96,8,1);
        if (CONCAT13((char)auVar96._12_4_,
                     CONCAT12((char)auVar96._8_4_,CONCAT11((char)auVar96._4_4_,(char)auVar96._0_4_))
                    ) == -1) goto LAB_00266994;
        auVar97._0_4_ = -fVar22 * fVar58;
        auVar97._4_4_ = -fVar27 * fVar75;
        auVar97._8_4_ = -fVar120 * fVar76;
        auVar97._12_4_ = fVar77 * 0.0;
        auVar95 = NEON_ext(auVar97,auVar97,8,1);
        fVar21 = auVar95._0_4_ + auVar95._4_4_;
        uVar108 = NEON_frecpe(uVar34,4);
        uVar117 = NEON_frecps(uVar34,uVar108,4);
        fVar26 = (float)uVar108 * (float)uVar117;
        fVar115 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
        uVar108 = NEON_frecps(uVar34,CONCAT44(fVar115,fVar26),4);
        fVar26 = fVar26 * (float)uVar108;
        fVar115 = fVar115 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar34,CONCAT44(fVar115,fVar26),4);
        fVar26 = fVar26 * (float)uVar108;
        fVar115 = fVar115 * (float)((ulong)uVar108 >> 0x20);
        uVar108 = NEON_frecps(uVar34,CONCAT44(fVar115,fVar26),4);
        fVar26 = fVar26 * (float)uVar108;
        fVar115 = fVar115 * (float)((ulong)uVar108 >> 0x20);
        uVar34 = NEON_frecps(uVar34,CONCAT44(fVar115,fVar26),4);
        uVar108 = NEON_fmov(0x3f800000,4);
        uVar34 = NEON_fmin(CONCAT44((auVar97._0_4_ + auVar97._4_4_ + fVar21) *
                                    fVar115 * (float)((ulong)uVar34 >> 0x20),
                                    (auVar97._0_4_ + auVar97._4_4_ + fVar21) *
                                    fVar26 * (float)uVar34),uVar108,4);
        uVar34 = NEON_fmax(uVar34,0,4);
        fVar21 = (float)uVar34;
        fVar58 = fVar58 * fVar21;
        fVar75 = fVar75 * fVar21;
        fVar76 = fVar76 * fVar21;
        fVar77 = fVar77 * fVar21;
LAB_00266980:
        auVar35._0_8_ = CONCAT44(fVar27 + fVar75,fVar22 + fVar58);
        auVar35._8_4_ = fVar120 + fVar76;
        auVar35._12_4_ = fVar57 + fVar77;
        auVar95 = NEON_ext(auVar35,auVar35,8,1);
        auVar95._8_4_ = (float)auVar95._0_4_;
        auVar95._0_8_ = auVar35._0_8_;
        auVar95._12_4_ = 0.0;
      }
    }
    fVar120 = auVar95._0_4_;
    auVar61._0_4_ = fVar120 * fVar120;
    fVar57 = auVar95._4_4_;
    auVar61._4_4_ = fVar57 * fVar57;
    fVar77 = auVar95._8_4_;
    auVar61._8_4_ = fVar77 * fVar77;
    auVar61._12_4_ = auVar95._12_4_ * auVar95._12_4_;
    auVar82 = NEON_ext(auVar61,auVar61,8,1);
    uStack_b8 = auVar95._8_8_;
    local_c0 = auVar95._0_8_;
    fVar27 = auVar82._0_4_ + auVar82._4_4_;
    fVar22 = auVar61._0_4_ + auVar61._4_4_ + fVar27;
    fVar27 = auVar61._0_4_ + auVar61._4_4_ + fVar27;
    uVar12 = CONCAT44(fVar27,fVar22);
    uVar34 = NEON_frsqrte(uVar12,4);
    fVar58 = (float)uVar34;
    fVar75 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    fVar58 = fVar58 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar58 * fVar58),uVar12,4);
    uVar136 = CONCAT44(fVar27 * fVar75 * (float)((ulong)uVar34 >> 0x20),
                       fVar22 * fVar58 * (float)uVar34);
    uVar136 = uVar136 ^ (uVar136 ^ uVar12) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0))
    ;
    uVar34 = NEON_frecpe(uVar136,4);
    uVar108 = NEON_frecps(uVar136,uVar34,4);
    fVar22 = (float)uVar34 * (float)uVar108;
    fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar108 >> 0x20);
    uVar34 = NEON_frecps(uVar136,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar136,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar136,CONCAT44(fVar27,fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    uVar34 = NEON_frecps(uVar136,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar22),4);
    fVar22 = fVar22 * (float)uVar34;
    auVar109._0_4_ = fVar120 * fVar22;
    auVar109._4_4_ = fVar57 * fVar22;
    auVar109._8_4_ = fVar77 * fVar22;
    iVar59 = -(uint)(fVar127 < (float)uVar136);
    auVar82 = auVar95;
  }
  auVar62._0_4_ = -(uint)(iVar59 == -1);
  auVar62._4_4_ = -(uint)(iVar59 == -1);
  auVar62._8_4_ = -(uint)(iVar59 == -1);
  auVar62._12_4_ = -(uint)(iVar59 == -1);
  NEON_ext(auVar62,auVar62,8,1);
  bVar132 = SUB41(fVar160,0);
  bVar133 = (byte)((uint)fVar160 >> 8);
  bVar134 = (byte)((uint)fVar160 >> 0x10);
  bVar135 = (byte)((uint)fVar160 >> 0x18);
  bVar128 = SUB41(fVar159,0);
  bVar129 = (byte)((uint)fVar159 >> 8);
  bVar130 = (byte)((uint)fVar159 >> 0x10);
  bVar131 = (byte)((uint)fVar159 >> 0x18);
  if (CONCAT13((char)auVar62._12_4_,
               CONCAT12((char)auVar62._8_4_,CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) ==
      -1) {
    uVar12 = uVar136;
    do {
      uVar136 = uVar12;
      auVar82 = auVar95;
      lVar9 = *(long *)(param_1 + 8);
      uVar12 = (ulong)local_1a4;
      auVar65._0_4_ = -auVar82._0_4_ * *(float *)(lVar9 + 0x30);
      auVar65._4_4_ = -auVar82._4_4_ * *(float *)(lVar9 + 0x34);
      auVar65._8_4_ = -auVar82._8_4_ * *(float *)(lVar9 + 0x38);
      auVar65._12_4_ = *(float *)(lVar9 + 0x3c) * 0.0;
      auVar100 = NEON_ext(auVar65,auVar65,8,1);
      auVar43._0_4_ = -auVar82._0_4_ * *(float *)(lVar9 + 0x40);
      auVar43._4_4_ = -auVar82._4_4_ * *(float *)(lVar9 + 0x44);
      auVar43._8_4_ = -auVar82._8_4_ * *(float *)(lVar9 + 0x48);
      auVar43._12_4_ = *(float *)(lVar9 + 0x4c) * 0.0;
      auVar95 = NEON_ext(auVar43,auVar43,8,1);
      uVar33 = -(uint)(auVar43._0_4_ + auVar43._4_4_ + auVar95._0_4_ + auVar95._4_4_ <
                      auVar65._0_4_ + auVar65._4_4_ + auVar100._0_4_ + auVar100._4_4_);
      local_1a0[uVar12 + 4] = (float)(uVar33 & 1);
      auVar83._4_4_ = uVar33;
      auVar83._0_4_ = uVar33;
      auVar83._8_4_ = uVar33;
      auVar83._12_4_ = uVar33;
      lVar14 = *(long *)(param_2 + 8);
      auVar84 = *(undefined1 (*) [16])(lVar9 + 0x40) ^
                (*(undefined1 (*) [16])(lVar9 + 0x40) ^ *(undefined1 (*) [16])(lVar9 + 0x30)) &
                auVar83;
      fVar22 = (float)FUN_00222070(lVar14,&local_c0);
      local_1a0[uVar12] = fVar22;
      auVar100 = *(undefined1 (*) [16])(*(long *)(lVar14 + 0xa0) + (long)(int)fVar22 * 0xc);
      auVar74._0_12_ = auVar100._0_12_;
      auVar74._12_4_ = 0.0;
      fVar22 = auVar84._0_4_ - auVar100._0_4_;
      fVar27 = auVar84._4_4_ - auVar100._4_4_;
      auVar95._0_8_ = CONCAT44(fVar27,fVar22);
      auVar95._8_4_ = auVar84._8_4_ - auVar100._8_4_;
      auVar95._12_4_ = auVar84._12_4_ - 0.0;
      uVar126 = NEON_fmax(uVar126,CONCAT44((float)((ulong)*param_4 >> 0x20) + 0.0,
                                           (float)*param_4 + 0.0),4);
      fVar120 = auVar109._0_4_;
      auVar85._0_4_ = fVar120 * fVar22;
      fVar57 = auVar109._4_4_;
      auVar85._4_4_ = fVar57 * fVar27;
      fVar27 = auVar109._8_4_;
      auVar85._8_4_ = fVar27 * auVar95._8_4_;
      auVar85._12_4_ = auVar95._12_4_ * 0.0;
      auVar112 = NEON_ext(auVar85,auVar85,8,1);
      fVar22 = auVar85._0_4_ + auVar85._4_4_ + auVar112._0_4_ + auVar112._4_4_;
      if (fVar161 + (float)uVar126 < fVar22) {
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
            pfVar18 = pfVar11 + -1;
            fVar161 = *pfVar11;
            pbVar7 = param_9 + lVar9;
            fVar127 = pfVar15[-1];
            fVar159 = *pfVar15;
            lVar14 = lVar9 + 1;
            lVar9 = lVar9 + 2;
            pfVar11 = pfVar11 + 2;
            pfVar15 = pfVar15 + 2;
            *pbVar7 = SUB41(*pfVar18,0);
            (param_10 + lVar14)[-1] = SUB41(fVar127,0);
            pbVar7[1] = SUB41(fVar161,0);
            param_10[lVar14] = SUB41(fVar159,0);
          } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar127 = local_1a0[lVar9];
        param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
        param_10[lVar9] = SUB41(fVar127,0);
        return 0;
      }
      fVar77 = (float)uVar136;
      uVar12 = (ulong)local_1a4;
      if (fVar77 * 0.999775 < fVar22) {
        if (param_9 == (byte *)0x0) goto LAB_00267dec;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar27;
          *param_7 = auVar109._0_8_;
          goto joined_r0x00267e98;
        }
        if (local_1a4 == 1) {
          lVar9 = 0;
          goto LAB_00267dcc;
        }
        lVar9 = 0;
        pfVar11 = local_1a0 + 5;
        pfVar15 = local_1a0 + 1;
        do {
          pfVar18 = pfVar11 + -1;
          fVar22 = *pfVar11;
          pbVar7 = param_9 + lVar9;
          fVar127 = pfVar15[-1];
          fVar58 = *pfVar15;
          lVar14 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar7 = SUB41(*pfVar18,0);
          (param_10 + lVar14)[-1] = SUB41(fVar127,0);
          pbVar7[1] = SUB41(fVar22,0);
          param_10[lVar14] = SUB41(fVar58,0);
        } while (uVar12 - (uVar12 & 1) != lVar9);
        if ((local_1a4 & 1) != 0) {
LAB_00267dcc:
          fVar127 = local_1a0[lVar9];
          param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
          param_10[lVar9] = SUB41(fVar127,0);
        }
LAB_00267dec:
        param_7[1] = (ulong)(uint)fVar27;
        *param_7 = auVar109._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar74._0_4_ =
               local_140[0] +
               ((float)uStack_130 - local_140[0]) * local_a8[0] +
               (local_120 - local_140[0]) * local_b0[0];
          auVar74._4_4_ =
               local_140[1] +
               (uStack_130._4_4_ - local_140[1]) * local_a8[0] +
               (fStack_11c - local_140[1]) * local_b0[0];
          auVar74._8_4_ =
               (float)uStack_138 +
               ((float)uStack_128 - (float)uStack_138) * local_a8[0] +
               (fStack_118 - (float)uStack_138) * local_b0[0];
          auVar74._12_4_ = uStack_138._4_4_ + 0.0;
          auVar95._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar95._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar95._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar95._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar73._0_8_ =
               CONCAT44(local_140[1] + (uStack_130._4_4_ - local_140[1]) * local_a8[0],
                        local_140[0] + ((float)uStack_130 - local_140[0]) * local_a8[0]);
          auVar73._8_4_ = (float)uStack_138 + ((float)uStack_128 - (float)uStack_138) * local_a8[0];
          auVar73._12_4_ = uStack_138._4_4_ + (uStack_128._4_4_ - uStack_138._4_4_) * local_a8[0];
          auVar95 = NEON_ext(auVar73,auVar73,8,1);
          auVar74._8_4_ = (float)auVar95._0_4_;
          auVar74._0_8_ = auVar73._0_8_;
          auVar74._12_4_ = 0.0;
          auVar56._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar56._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar56._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar95 = NEON_ext(auVar56,auVar56,8,1);
          auVar95._8_4_ = (float)auVar95._0_4_;
          auVar95._0_8_ = auVar56._0_8_;
          auVar95._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar74._4_4_ = local_140[1];
          auVar74._0_4_ = local_140[0];
          auVar74._8_4_ = (float)uStack_138;
          auVar74._12_4_ = uStack_138._4_4_;
          auVar95._4_4_ = local_180._4_4_;
          auVar95._0_4_ = (float)local_180;
          auVar95._8_4_ = fStack_178;
          auVar95._12_4_ = fStack_174;
        }
joined_r0x00267e98:
        if ((param_12 & 1) == 0) {
          auVar90._0_8_ =
               CONCAT44((float)auVar74._4_4_ - fVar57 * fVar160,
                        (float)auVar74._0_4_ - fVar120 * fVar160);
          auVar90._8_4_ = (float)auVar74._8_4_ - fVar27 * fVar160;
          auVar90._12_4_ = (float)auVar74._12_4_ - fVar160 * 0.0;
          auVar82 = NEON_ext(auVar90,auVar90,8,1);
          auVar54._0_4_ = fVar120 * fVar159;
          auVar54._4_4_ = fVar57 * fVar159;
          auVar54._8_4_ = fVar27 * fVar159;
          auVar54._12_4_ = fVar159 * 0.0;
          param_5[1] = (ulong)auVar82._0_4_;
          *param_5 = auVar90._0_8_;
          fVar127 = fVar161;
        }
        else {
          iVar59 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          iVar94 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar91 = (byte)((uint)iVar59 >> 8);
          bVar92 = (byte)((uint)iVar59 >> 0x10);
          bVar93 = (byte)((uint)iVar59 >> 0x18);
          fVar127 = (float)CONCAT13(bVar135 & ~bVar93,
                                    CONCAT12(bVar134 & ~bVar92,
                                             CONCAT11(bVar133 & ~bVar91,bVar132 & ~(byte)iVar59)));
          auVar71._0_8_ =
               CONCAT44((float)auVar74._4_4_ - fVar57 * fVar127,
                        (float)auVar74._0_4_ - fVar120 * fVar127);
          auVar71._8_4_ = (float)auVar74._8_4_ - fVar27 * fVar127;
          auVar71._12_4_ = (float)auVar74._12_4_ - fVar127 * 0.0;
          auVar82 = NEON_ext(auVar71,auVar71,8,1);
          bVar105 = (byte)((uint)iVar94 >> 8);
          bVar106 = (byte)((uint)iVar94 >> 0x10);
          bVar107 = (byte)((uint)iVar94 >> 0x18);
          fVar159 = (float)CONCAT13(bVar131 & ~bVar107,
                                    CONCAT12(bVar130 & ~bVar106,
                                             CONCAT11(bVar129 & ~bVar105,bVar128 & ~(byte)iVar94)));
          param_5[1] = (ulong)auVar82._0_4_;
          *param_5 = auVar71._0_8_;
          fVar161 = fVar127 + fVar159;
          auVar72._0_4_ = fVar120 * fVar159;
          auVar72._4_4_ = fVar57 * fVar159;
          auVar72._8_4_ = fVar27 * fVar159;
          auVar72._12_4_ = fVar159 * 0.0;
          auVar54 = auVar95;
          auVar95 = auVar72;
          fVar127 = (float)(CONCAT17(bVar135 & ~bVar93,
                                     CONCAT16(bVar134 & ~bVar92,
                                              CONCAT15(bVar133 & ~bVar91,
                                                       CONCAT14(bVar132 & ~(byte)iVar59,fVar127))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar131 & ~bVar107,
                                     CONCAT16(bVar130 & ~bVar106,
                                              CONCAT15(bVar129 & ~bVar105,
                                                       CONCAT14(bVar128 & ~(byte)iVar94,fVar159))))
                           >> 0x20);
        }
        auVar55._0_8_ = CONCAT44(auVar54._4_4_ + auVar95._4_4_,auVar54._0_4_ + auVar95._0_4_);
        auVar55._8_4_ = auVar54._8_4_ + auVar95._8_4_;
        auVar55._12_4_ = auVar54._12_4_ + auVar95._12_4_;
        auVar95 = NEON_ext(auVar55,auVar55,8,1);
        param_6[1] = (ulong)auVar95._0_4_;
        *param_6 = auVar55._0_8_;
        *param_8 = CONCAT44((float)(uVar136 >> 0x20) - fVar127,fVar77 - fVar161);
        return 2;
      }
      *(long *)(local_140 + uVar12 * 4 + 2) = auVar84._8_8_;
      *(long *)(local_140 + uVar12 * 4) = auVar84._0_8_;
      *(ulong *)(local_140 + uVar12 * 4 + -0xe) = (ulong)(uint)auVar100._8_4_;
      *(long *)(local_1a0 + uVar12 * 4 + 8) = auVar100._0_8_;
      uVar33 = local_1a4 + 1;
      *(long *)(local_e0[uVar12 - 2] + 8) = auVar95._8_8_;
      local_100[uVar12 * 2] = auVar95._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar33;
        auVar95 = FUN_00238f80(local_100,local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar22 = (float)local_100[0];
        fVar27 = SUB84(local_100[0],4);
        fVar120 = (float)local_100[1];
        fVar57 = SUB84(local_100[1],4);
        if (local_1a4 == 2) {
          auVar95._8_8_ = local_100[1];
          auVar95._0_8_ = local_100[0];
          auVar5._4_4_ = fStack_ec;
          auVar5._0_4_ = local_f0;
          auVar5._8_4_ = fStack_e8;
          auVar5._12_4_ = fStack_e4;
          fVar76 = local_e0[0]._0_4_;
          auVar103._0_4_ = fVar76 - fVar22;
          fVar21 = local_e0[0]._4_4_;
          auVar103._4_4_ = fVar21 - fVar27;
          fVar26 = local_e0[0]._8_4_;
          auVar103._8_4_ = fVar26 - fVar120;
          auVar103._12_4_ = local_e0[0]._12_4_ - fVar57;
          auVar113._0_4_ = local_f0 - fVar22;
          auVar113._4_4_ = fStack_ec - fVar27;
          auVar113._8_4_ = fStack_e8 - fVar120;
          auVar113._12_4_ = fStack_e4 - fVar57;
          auVar100 = NEON_ext(auVar113,auVar113,8,1);
          auVar84 = NEON_ext(auVar103,auVar103,8,1);
          fVar123 = auVar113._0_4_ * auVar103._4_4_ - auVar113._4_4_ * auVar103._0_4_;
          uVar34 = NEON_ext(CONCAT44(auVar113._4_4_ * auVar103._8_4_ -
                                     auVar113._8_4_ * auVar103._4_4_,fVar123),
                            CONCAT44(auVar100._4_4_ * auVar103._4_4_ -
                                     auVar113._4_4_ * auVar84._4_4_,
                                     auVar100._0_4_ * auVar103._0_4_ -
                                     auVar113._0_4_ * auVar84._0_4_),4,1);
          fVar115 = (float)uVar34;
          auVar119._0_4_ = fVar115 * fVar115;
          fVar116 = (float)((ulong)uVar34 >> 0x20);
          auVar119._4_4_ = fVar116 * fVar116;
          auVar119._8_4_ = fVar123 * fVar123;
          auVar119._12_4_ = 0;
          auVar100 = NEON_ext(auVar119,auVar119,8,1);
          fVar75 = auVar100._0_4_ + auVar100._4_4_;
          fVar58 = auVar119._0_4_ + auVar119._4_4_ + fVar75;
          uVar34 = CONCAT44(auVar119._0_4_ + auVar119._4_4_ + fVar75,fVar58);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar58) {
            if (fVar58 != 0.0) {
              auVar100 = NEON_ext(auVar5,auVar5,8,1);
              auVar84 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar155 = local_f0 * fVar21 - fStack_ec * fVar76;
              auVar112 = NEON_ext(auVar95,auVar95,8,1);
              uVar117 = NEON_ext(CONCAT44(fStack_ec * fVar26 - fStack_e8 * fVar21,fVar155),
                                 CONCAT44(auVar100._4_4_ * fVar21 - fStack_ec * auVar84._4_4_,
                                          auVar100._0_4_ * fVar76 - local_f0 * auVar84._0_4_),4,1);
              fVar58 = fVar27 * fVar76 - fVar22 * fVar21;
              uVar158 = NEON_ext(CONCAT44(fVar120 * fVar21 - fVar27 * fVar26,fVar58),
                                 CONCAT44(fVar27 * auVar84._4_4_ - auVar112._4_4_ * fVar21,
                                          fVar22 * auVar84._0_4_ - auVar112._0_4_ * fVar76),4,1);
              fVar75 = fVar22 * fStack_ec - fVar27 * local_f0;
              uVar108 = NEON_ext(CONCAT44(fVar27 * fStack_e8 - fVar120 * fStack_ec,fVar75),
                                 CONCAT44(auVar112._4_4_ * fStack_ec - fVar27 * auVar100._4_4_,
                                          auVar112._0_4_ * local_f0 - fVar22 * auVar100._0_4_),4,1);
              auVar141._0_4_ = (float)uVar117 * fVar115;
              auVar141._4_4_ = (float)((ulong)uVar117 >> 0x20) * fVar116;
              auVar141._8_4_ = fVar155 * fVar123;
              auVar141._12_4_ = 0;
              auVar100 = NEON_ext(auVar141,auVar141,8,1);
              auVar146._0_4_ = (float)uVar158 * fVar115;
              auVar146._4_4_ = (float)((ulong)uVar158 >> 0x20) * fVar116;
              auVar146._8_4_ = fVar58 * fVar123;
              auVar146._12_4_ = 0;
              auVar84 = NEON_ext(auVar146,auVar146,8,1);
              fVar58 = auVar141._0_4_ + auVar141._4_4_ + auVar100._0_4_ + auVar100._4_4_;
              auVar151._0_4_ = (float)uVar108 * fVar115;
              auVar151._4_4_ = (float)((ulong)uVar108 >> 0x20) * fVar116;
              auVar151._8_4_ = fVar75 * fVar123;
              auVar151._12_4_ = 0;
              fVar75 = auVar146._0_4_ + auVar146._4_4_ + auVar84._0_4_ + auVar84._4_4_;
              auVar100 = NEON_ext(auVar151,auVar151,8,1);
              fVar155 = auVar151._0_4_ + auVar151._4_4_ + auVar100._0_4_ + auVar100._4_4_;
              bVar6 = (0.0 <= fVar58 && 0.0 <= fVar75) && 0.0 <= fVar155;
              auVar152._0_4_ = -(uint)bVar6;
              auVar152._4_4_ = -(uint)bVar6;
              auVar152._8_4_ = -(uint)bVar6;
              auVar152._12_4_ = -(uint)bVar6;
              NEON_ext(auVar152,auVar152,8,1);
              if (CONCAT13((char)auVar152._12_4_,
                           CONCAT12((char)auVar152._8_4_,
                                    CONCAT11((char)auVar152._4_4_,(char)auVar152._0_4_))) == -1) {
                auVar47._0_4_ = fVar22 * fVar115;
                auVar47._4_4_ = fVar27 * fVar116;
                auVar47._8_4_ = fVar120 * fVar123;
                auVar47._12_4_ = fVar57 * 0.0;
                auVar95 = NEON_ext(auVar47,auVar47,8,1);
                uVar108 = NEON_frecpe(uVar34,4);
                uVar117 = NEON_frecps(uVar34,uVar108,4);
                fVar22 = (float)uVar108 * (float)uVar117;
                fVar27 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar108;
                fVar27 = fVar27 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar108;
                fVar27 = fVar27 * (float)((ulong)uVar108 >> 0x20);
                uVar108 = NEON_frecps(uVar34,CONCAT44(fVar27,fVar22),4);
                fVar22 = fVar22 * (float)uVar108;
                uVar34 = NEON_frecps(uVar34,CONCAT44(fVar27 * (float)((ulong)uVar108 >> 0x20),fVar22
                                                    ),4);
                fVar22 = (auVar47._0_4_ + auVar47._4_4_ + auVar95._0_4_ + auVar95._4_4_) *
                         fVar22 * (float)uVar34;
                auVar95._0_4_ = fVar115 * fVar22;
                auVar95._4_4_ = fVar116 * fVar22;
                auVar95._8_4_ = fVar123 * fVar22;
                auVar95._12_4_ = 0.0;
              }
              else {
                auVar122._0_4_ = -fVar22 * auVar113._0_4_;
                auVar122._4_4_ = -fVar27 * auVar113._4_4_;
                auVar122._8_4_ = -fVar120 * auVar113._8_4_;
                auVar122._12_4_ = auVar113._12_4_ * 0.0;
                auVar100 = NEON_ext(auVar122,auVar122,8,1);
                fVar123 = auVar100._0_4_ + auVar100._4_4_;
                auVar125._0_4_ = -local_f0 * auVar113._0_4_;
                auVar125._4_4_ = -fStack_ec * auVar113._4_4_;
                auVar125._8_4_ = -fStack_e8 * auVar113._8_4_;
                auVar125._12_4_ = auVar113._12_4_ * 0.0;
                auVar100 = NEON_ext(auVar125,auVar125,8,1);
                fVar28 = auVar100._0_4_ + auVar100._4_4_;
                fVar115 = auVar122._0_4_ + auVar122._4_4_ + fVar123;
                fVar116 = auVar125._0_4_ + auVar125._4_4_ + fVar28;
                fVar28 = auVar125._0_4_ + auVar125._4_4_ + fVar28;
                bVar6 = (0.0 <= fVar115 && fVar155 <= 0.0) && fVar116 <= 0.0;
                auVar147._0_4_ = -(uint)bVar6;
                auVar147._4_4_ = -(uint)bVar6;
                auVar147._8_4_ = -(uint)bVar6;
                auVar147._12_4_ = -(uint)bVar6;
                NEON_ext(auVar147,auVar147,8,1);
                if (CONCAT13((char)auVar147._12_4_,
                             CONCAT12((char)auVar147._8_4_,
                                      CONCAT11((char)auVar147._4_4_,(char)auVar147._0_4_))) == -1) {
                  uVar34 = CONCAT44((auVar122._0_4_ + auVar122._4_4_ + fVar123) - fVar28,
                                    fVar115 - fVar116);
                  uVar108 = NEON_frecpe(uVar34,4);
                  uVar117 = NEON_frecps(uVar34,uVar108,4);
                  fVar58 = (float)uVar108 * (float)uVar117;
                  fVar75 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  fVar75 = fVar75 * (float)((ulong)uVar108 >> 0x20);
                  uVar108 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar58),4);
                  fVar58 = fVar58 * (float)uVar108;
                  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar75 * (float)((ulong)uVar108 >> 0x20),
                                                       fVar58),4);
                  fVar115 = fVar115 * (float)(-(uint)(1.1920929e-07 < ABS(fVar115 - fVar116)) &
                                             (uint)(fVar58 * (float)uVar34));
                  pfVar11 = local_1a0;
                  pfVar13 = local_1a0 + 4;
                  auVar48._0_8_ =
                       CONCAT44(fVar27 + auVar113._4_4_ * fVar115,fVar22 + auVar113._0_4_ * fVar115)
                  ;
                  auVar48._8_4_ = fVar120 + auVar113._8_4_ * fVar115;
                  auVar48._12_4_ = fVar57 + auVar113._12_4_ * fVar115;
                  auVar95 = NEON_ext(auVar48,auVar48,8,1);
                  pfVar15 = (float *)&local_180;
                  pfVar18 = local_140;
                  pauVar16 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar95._8_4_ = (float)auVar95._0_4_;
                  auVar95._0_8_ = auVar48._0_8_;
                  auVar95._12_4_ = 0.0;
LAB_00267694:
                  lVar9 = 1;
                  pauVar17 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar148._0_4_ = -local_f0 * auVar103._0_4_;
                  auVar148._4_4_ = -fStack_ec * auVar103._4_4_;
                  auVar148._8_4_ = -fStack_e8 * auVar103._8_4_;
                  auVar148._12_4_ = auVar103._12_4_ * 0.0;
                  auVar100 = NEON_ext(auVar148,auVar148,8,1);
                  fVar29 = auVar100._0_4_ + auVar100._4_4_;
                  auVar114._0_4_ = auVar113._0_4_ * -fVar76;
                  auVar114._4_4_ = auVar113._4_4_ * -fVar21;
                  auVar114._8_4_ = auVar113._8_4_ * -fVar26;
                  auVar114._12_4_ = auVar113._12_4_ * 0.0;
                  auVar156._0_4_ = auVar103._0_4_ * -fVar76;
                  auVar156._4_4_ = auVar103._4_4_ * -fVar21;
                  auVar156._8_4_ = auVar103._8_4_ * -fVar26;
                  auVar156._12_4_ = auVar103._12_4_ * 0.0;
                  fVar123 = auVar148._0_4_ + auVar148._4_4_ + fVar29;
                  auVar100 = NEON_ext(auVar114,auVar114,8,1);
                  fVar30 = auVar100._0_4_ + auVar100._4_4_;
                  fVar155 = auVar114._0_4_ + auVar114._4_4_ + fVar30;
                  auVar100 = NEON_ext(auVar156,auVar156,8,1);
                  fVar31 = auVar100._0_4_ + auVar100._4_4_;
                  fVar23 = auVar156._0_4_ + auVar156._4_4_ + fVar31;
                  fVar31 = auVar156._0_4_ + auVar156._4_4_ + fVar31;
                  bVar6 = (fVar116 <= fVar123 && fVar58 <= 0.0) && fVar23 <= fVar155;
                  auVar142._0_4_ = -(uint)bVar6;
                  auVar142._4_4_ = -(uint)bVar6;
                  auVar142._8_4_ = -(uint)bVar6;
                  auVar142._12_4_ = -(uint)bVar6;
                  NEON_ext(auVar142,auVar142,8,1);
                  if (CONCAT13((char)auVar142._12_4_,
                               CONCAT12((char)auVar142._8_4_,
                                        CONCAT11((char)auVar142._4_4_,(char)auVar142._0_4_))) == -1)
                  {
                    fVar22 = (fVar123 - fVar116) + (fVar155 - fVar23);
                    uVar34 = CONCAT44(((auVar148._0_4_ + auVar148._4_4_ + fVar29) - fVar28) +
                                      ((auVar114._0_4_ + auVar114._4_4_ + fVar30) - fVar31),fVar22);
                    uVar108 = NEON_frecpe(uVar34,4);
                    uVar117 = NEON_frecps(uVar34,uVar108,4);
                    fVar27 = (float)uVar108 * (float)uVar117;
                    fVar120 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                    fVar27 = fVar27 * (float)uVar108;
                    fVar120 = fVar120 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                    fVar27 = fVar27 * (float)uVar108;
                    fVar120 = fVar120 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar120,fVar27),4);
                    fVar27 = fVar27 * (float)uVar108;
                    uVar34 = NEON_frecps(uVar34,CONCAT44(fVar120 * (float)((ulong)uVar108 >> 0x20),
                                                         fVar27),4);
                    fVar22 = (fVar123 - fVar116) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar22)) &
                                    (uint)(fVar27 * (float)uVar34));
                    auVar49._0_8_ =
                         CONCAT44(fStack_ec + (fVar21 - fStack_ec) * fVar22,
                                  local_f0 + (fVar76 - local_f0) * fVar22);
                    auVar49._8_4_ = fStack_e8 + (fVar26 - fStack_e8) * fVar22;
                    auVar49._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar22;
                    auVar95 = NEON_ext(auVar49,auVar49,8,1);
                    auVar2._8_4_ = auVar95._0_4_;
                    auVar2._0_8_ = auVar49._0_8_;
                    pfVar11 = local_1a0 + 1;
                    pfVar13 = local_1a0 + 5;
                    pfVar15 = (float *)&uStack_170;
                    pfVar18 = (float *)&uStack_130;
                    pauVar16 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar143._0_4_ = -fVar22 * auVar103._0_4_;
                    auVar143._4_4_ = -fVar27 * auVar103._4_4_;
                    auVar143._8_4_ = -fVar120 * auVar103._8_4_;
                    auVar143._12_4_ = auVar103._12_4_ * 0.0;
                    auVar100 = NEON_ext(auVar143,auVar143,8,1);
                    fVar76 = auVar100._0_4_ + auVar100._4_4_;
                    fVar58 = auVar143._0_4_ + auVar143._4_4_ + fVar76;
                    bVar6 = (fVar75 <= 0.0 && 0.0 <= fVar58) && fVar23 <= 0.0;
                    auVar138._0_4_ = -(uint)bVar6;
                    auVar138._4_4_ = -(uint)bVar6;
                    auVar138._8_4_ = -(uint)bVar6;
                    auVar138._12_4_ = -(uint)bVar6;
                    NEON_ext(auVar138,auVar138,8,1);
                    if (CONCAT13((char)auVar138._12_4_,
                                 CONCAT12((char)auVar138._8_4_,
                                          CONCAT11((char)auVar138._4_4_,(char)auVar138._0_4_))) !=
                        -1) {
                      bVar6 = fVar115 <= 0.0 && fVar58 <= 0.0;
                      auVar104._0_4_ = -(uint)bVar6;
                      auVar104._4_4_ = -(uint)bVar6;
                      auVar104._8_4_ = -(uint)bVar6;
                      auVar104._12_4_ = -(uint)bVar6;
                      NEON_ext(auVar104,auVar104,8,1);
                      if (CONCAT13((char)auVar104._12_4_,
                                   CONCAT12((char)auVar104._8_4_,
                                            CONCAT11((char)auVar104._4_4_,(char)auVar104._0_4_))) ==
                          -1) {
                        pfVar11 = local_1a0;
                        pfVar13 = local_1a0 + 4;
                        pfVar15 = (float *)&local_180;
                        pfVar18 = local_140;
                        pauVar16 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar6 = 0.0 <= fVar116 && fVar123 <= fVar116;
                        auVar45._0_4_ = -(uint)bVar6;
                        auVar45._4_4_ = -(uint)bVar6;
                        auVar45._8_4_ = -(uint)bVar6;
                        auVar45._12_4_ = -(uint)bVar6;
                        NEON_ext(auVar45,auVar45,8,1);
                        iVar59 = CONCAT13((char)auVar45._12_4_,
                                          CONCAT12((char)auVar45._8_4_,
                                                   CONCAT11((char)auVar45._4_4_,(char)auVar45._0_4_)
                                                  ));
                        iVar94 = -(uint)(iVar59 == -1);
                        auVar46._4_4_ = iVar94;
                        auVar46._0_4_ = iVar94;
                        auVar46._8_4_ = iVar94;
                        auVar46._12_4_ = iVar94;
                        local_1a4 = 1;
                        lVar9 = 1;
                        if (iVar59 != -1) {
                          lVar9 = 2;
                        }
                        auVar95 = local_e0[0] ^ (local_e0[0] ^ auVar5) & auVar46;
                        pfVar18 = local_140 + lVar9 * 4;
                        pauVar16 = (undefined1 (*) [16])(local_100 + lVar9 * 2);
                        pfVar15 = local_1a0 + lVar9 * 4 + 8;
                        pfVar13 = local_1a0 + lVar9 + 4;
                        pfVar11 = local_1a0 + lVar9;
                      }
                      goto LAB_00267694;
                    }
                    uVar34 = CONCAT44((auVar143._0_4_ + auVar143._4_4_ + fVar76) - fVar31,
                                      fVar58 - fVar23);
                    uVar108 = NEON_frecpe(uVar34,4);
                    uVar117 = NEON_frecps(uVar34,uVar108,4);
                    fVar75 = (float)uVar108 * (float)uVar117;
                    fVar76 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar108;
                    fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar108;
                    fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
                    uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar108;
                    uVar34 = NEON_frecps(uVar34,CONCAT44(fVar76 * (float)((ulong)uVar108 >> 0x20),
                                                         fVar75),4);
                    fVar58 = fVar58 * (float)(-(uint)(1.1920929e-07 < ABS(fVar58 - fVar23)) &
                                             (uint)(fVar75 * (float)uVar34));
                    auVar50._0_8_ =
                         CONCAT44(fVar27 + auVar103._4_4_ * fVar58,fVar22 + auVar103._0_4_ * fVar58)
                    ;
                    auVar50._8_4_ = fVar120 + auVar103._8_4_ * fVar58;
                    auVar50._12_4_ = fVar57 + auVar103._12_4_ * fVar58;
                    auVar95 = NEON_ext(auVar50,auVar50,8,1);
                    auVar2._8_4_ = auVar95._0_4_;
                    auVar2._0_8_ = auVar50._0_8_;
                    pfVar11 = local_1a0;
                    pfVar13 = local_1a0 + 4;
                    pfVar15 = (float *)&local_180;
                    pfVar18 = local_140;
                    pauVar16 = (undefined1 (*) [16])local_100;
                  }
                  auVar95._12_4_ = 0.0;
                  auVar95._0_12_ = auVar2;
                  local_1a4 = 2;
                  lVar9 = 2;
                  pauVar17 = local_e0;
                }
                local_100[1] = *(undefined8 *)((long)*pauVar16 + 8);
                local_100[0] = *(undefined8 *)*pauVar16;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar17 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar17 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar17;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
                uStack_138._0_4_ = (float)*(undefined8 *)(pfVar18 + 2);
                uStack_138._4_4_ = (float)((ulong)*(undefined8 *)(pfVar18 + 2) >> 0x20);
                local_140[0] = (float)*(undefined8 *)pfVar18;
                local_140[1] = (float)((ulong)*(undefined8 *)pfVar18 >> 0x20);
                uStack_128 = *(undefined8 *)(local_140 + lVar9 * 4 + 2);
                uStack_130 = *(undefined8 *)(local_140 + lVar9 * 4);
                local_1a0[4] = *pfVar13;
                local_1a0[0] = *pfVar11;
                local_1a0[5] = local_1a0[lVar9 + 4];
                local_1a0[1] = local_1a0[lVar9];
                fStack_178 = (float)*(undefined8 *)(pfVar15 + 2);
                fStack_174 = (float)((ulong)*(undefined8 *)(pfVar15 + 2) >> 0x20);
                local_180._0_4_ = (float)*(undefined8 *)pfVar15;
                local_180._4_4_ = (float)((ulong)*(undefined8 *)pfVar15 >> 0x20);
                uStack_168 = *(undefined8 *)(local_140 + lVar9 * 4 + -0xe);
                uStack_170 = *(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
              }
            }
          }
          else {
            auVar66._0_4_ = auVar113._0_4_ * auVar113._0_4_;
            auVar66._4_4_ = auVar113._4_4_ * auVar113._4_4_;
            auVar66._8_4_ = auVar113._8_4_ * auVar113._8_4_;
            auVar66._12_4_ = auVar113._12_4_ * auVar113._12_4_;
            auVar95 = NEON_ext(auVar66,auVar66,8,1);
            fVar75 = auVar95._0_4_ + auVar95._4_4_;
            fVar58 = auVar66._0_4_ + auVar66._4_4_ + fVar75;
            uVar34 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar75,fVar58);
            bVar6 = fVar58 <= 1.1920929e-07;
            auVar87._0_4_ = -(uint)bVar6;
            auVar87._4_4_ = -(uint)bVar6;
            auVar87._8_4_ = -(uint)bVar6;
            auVar87._12_4_ = -(uint)bVar6;
            NEON_ext(auVar87,auVar87,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar87._12_4_,
                         CONCAT12((char)auVar87._8_4_,
                                  CONCAT11((char)auVar87._4_4_,(char)auVar87._0_4_))) != -1) {
              auVar88._0_4_ = -fVar22 * auVar113._0_4_;
              auVar88._4_4_ = -fVar27 * auVar113._4_4_;
              auVar88._8_4_ = -fVar120 * auVar113._8_4_;
              auVar88._12_4_ = auVar113._12_4_ * 0.0;
              auVar95 = NEON_ext(auVar88,auVar88,8,1);
              fVar58 = auVar95._0_4_ + auVar95._4_4_;
              uVar108 = NEON_frecpe(uVar34,4);
              uVar117 = NEON_frecps(uVar34,uVar108,4);
              fVar75 = (float)uVar108 * (float)uVar117;
              fVar76 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar108;
              fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar108;
              fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
              uVar108 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar108;
              fVar76 = fVar76 * (float)((ulong)uVar108 >> 0x20);
              uVar34 = NEON_frecps(uVar34,CONCAT44(fVar76,fVar75),4);
              uVar108 = NEON_fmov(0x3f800000,4);
              uVar34 = NEON_fmin(CONCAT44((auVar88._0_4_ + auVar88._4_4_ + fVar58) *
                                          fVar76 * (float)((ulong)uVar34 >> 0x20),
                                          (auVar88._0_4_ + auVar88._4_4_ + fVar58) *
                                          fVar75 * (float)uVar34),uVar108,4);
              uVar34 = NEON_fmax(uVar34,0,4);
              fVar58 = (float)uVar34;
              fVar75 = auVar113._0_4_ * fVar58;
              fVar76 = auVar113._4_4_ * fVar58;
              fVar21 = auVar113._8_4_ * fVar58;
              fVar58 = auVar113._12_4_ * fVar58;
              goto LAB_002672f8;
            }
LAB_0026730c:
            auVar95._8_8_ = local_100[1];
            auVar95._0_8_ = local_100[0];
            local_1a4 = 1;
          }
        }
        else {
          bVar6 = local_1a4 == 1;
          local_1a4 = uVar33;
          if (bVar6) {
            fVar75 = local_f0 - fVar22;
            fVar76 = fStack_ec - fVar27;
            fVar21 = fStack_e8 - fVar120;
            fVar58 = fStack_e4 - fVar57;
            auVar86._0_4_ = fVar75 * fVar75;
            auVar86._4_4_ = fVar76 * fVar76;
            auVar86._8_4_ = fVar21 * fVar21;
            auVar86._12_4_ = fVar58 * fVar58;
            auVar95 = NEON_ext(auVar86,auVar86,8,1);
            fVar115 = auVar95._0_4_ + auVar95._4_4_;
            fVar26 = auVar86._0_4_ + auVar86._4_4_ + fVar115;
            uVar34 = CONCAT44(auVar86._0_4_ + auVar86._4_4_ + fVar115,fVar26);
            bVar6 = fVar26 <= 1.1920929e-07;
            auVar101._0_4_ = -(uint)bVar6;
            auVar101._4_4_ = -(uint)bVar6;
            auVar101._8_4_ = -(uint)bVar6;
            auVar101._12_4_ = -(uint)bVar6;
            NEON_ext(auVar101,auVar101,8,1);
            if (CONCAT13((char)auVar101._12_4_,
                         CONCAT12((char)auVar101._8_4_,
                                  CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) == -1)
            goto LAB_0026730c;
            auVar102._0_4_ = -fVar22 * fVar75;
            auVar102._4_4_ = -fVar27 * fVar76;
            auVar102._8_4_ = -fVar120 * fVar21;
            auVar102._12_4_ = fVar58 * 0.0;
            auVar95 = NEON_ext(auVar102,auVar102,8,1);
            fVar26 = auVar95._0_4_ + auVar95._4_4_;
            uVar108 = NEON_frecpe(uVar34,4);
            uVar117 = NEON_frecps(uVar34,uVar108,4);
            fVar115 = (float)uVar108 * (float)uVar117;
            fVar116 = (float)((ulong)uVar108 >> 0x20) * (float)((ulong)uVar117 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar115),4);
            fVar115 = fVar115 * (float)uVar108;
            fVar116 = fVar116 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar115),4);
            fVar115 = fVar115 * (float)uVar108;
            fVar116 = fVar116 * (float)((ulong)uVar108 >> 0x20);
            uVar108 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar115),4);
            fVar115 = fVar115 * (float)uVar108;
            fVar116 = fVar116 * (float)((ulong)uVar108 >> 0x20);
            uVar34 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar115),4);
            uVar108 = NEON_fmov(0x3f800000,4);
            uVar34 = NEON_fmin(CONCAT44((auVar102._0_4_ + auVar102._4_4_ + fVar26) *
                                        fVar116 * (float)((ulong)uVar34 >> 0x20),
                                        (auVar102._0_4_ + auVar102._4_4_ + fVar26) *
                                        fVar115 * (float)uVar34),uVar108,4);
            uVar34 = NEON_fmax(uVar34,0,4);
            fVar26 = (float)uVar34;
            fVar75 = fVar75 * fVar26;
            fVar76 = fVar76 * fVar26;
            fVar21 = fVar21 * fVar26;
            fVar58 = fVar58 * fVar26;
LAB_002672f8:
            auVar44._0_8_ = CONCAT44(fVar27 + fVar76,fVar22 + fVar75);
            auVar44._8_4_ = fVar120 + fVar21;
            auVar44._12_4_ = fVar57 + fVar58;
            auVar95 = NEON_ext(auVar44,auVar44,8,1);
            auVar95._8_4_ = (float)auVar95._0_4_;
            auVar95._0_8_ = auVar44._0_8_;
            auVar95._12_4_ = 0.0;
          }
        }
      }
      fVar120 = auVar95._0_4_;
      auVar67._0_4_ = fVar120 * fVar120;
      fVar57 = auVar95._4_4_;
      auVar67._4_4_ = fVar57 * fVar57;
      fVar58 = auVar95._8_4_;
      auVar67._8_4_ = fVar58 * fVar58;
      auVar67._12_4_ = auVar95._12_4_ * auVar95._12_4_;
      auVar100 = NEON_ext(auVar67,auVar67,8,1);
      uStack_b8 = auVar95._8_8_;
      local_c0 = auVar95._0_8_;
      fVar27 = auVar100._0_4_ + auVar100._4_4_;
      fVar22 = auVar67._0_4_ + auVar67._4_4_ + fVar27;
      fVar27 = auVar67._0_4_ + auVar67._4_4_ + fVar27;
      uVar78 = CONCAT44(fVar27,fVar22);
      uVar34 = NEON_frsqrte(uVar78,4);
      fVar75 = (float)uVar34;
      fVar76 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar34;
      fVar76 = fVar76 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar34;
      fVar76 = fVar76 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar34;
      fVar76 = fVar76 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      uVar12 = CONCAT44(fVar27 * fVar76 * (float)((ulong)uVar34 >> 0x20),
                        fVar22 * fVar75 * (float)uVar34);
      uVar12 = uVar12 ^ (uVar12 ^ uVar78) & CONCAT44(-(uint)(fVar22 == 0.0),-(uint)(fVar22 == 0.0));
      uVar34 = NEON_frecpe(uVar12,4);
      uVar108 = NEON_frecps(uVar12,uVar34,4);
      fVar22 = (float)uVar34 * (float)uVar108;
      fVar27 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar108 >> 0x20);
      uVar34 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar34;
      fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar34;
      fVar27 = fVar27 * (float)((ulong)uVar34 >> 0x20);
      uVar34 = NEON_frecps(uVar12,CONCAT44(fVar27,fVar22),4);
      fVar22 = fVar22 * (float)uVar34;
      uVar34 = NEON_frecps(uVar12,CONCAT44(fVar27 * (float)((ulong)uVar34 >> 0x20),fVar22),4);
      fVar22 = fVar22 * (float)uVar34;
      auVar109._0_4_ = fVar120 * fVar22;
      auVar109._4_4_ = fVar57 * fVar22;
      auVar109._8_4_ = fVar58 * fVar22;
      bVar6 = (float)uVar12 < fVar77;
      bVar3 = fVar127 < (float)uVar12 && bVar6;
      auVar89._0_4_ = -(uint)bVar3;
      auVar89._4_4_ = -(uint)bVar3;
      auVar89._8_4_ = -(uint)bVar3;
      auVar89._12_4_ = -(uint)bVar3;
      NEON_ext(auVar89,auVar89,8,1);
    } while (CONCAT13((char)auVar89._12_4_,
                      CONCAT12((char)auVar89._8_4_,CONCAT11((char)auVar89._4_4_,(char)auVar89._0_4_)
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
  auVar63._0_4_ = (int)((uint)(ushort)uVar34 << 0x1f) >> 0x1f;
  auVar63._4_4_ = (int)((uint)uVar24 << 0x1f) >> 0x1f;
  auVar63._8_4_ = (int)((uint)uVar25 << 0x1f) >> 0x1f;
  auVar63._12_4_ = (int)((uint)uVar32 << 0x1f) >> 0x1f;
  auVar64 = NEON_ext(auVar63,auVar63,8,1);
  auVar42._0_4_ =
       (float)CONCAT13((char)((short)(uVar32 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar25 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar24 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar34 << 0xf) >> 0xf))));
  auVar42[4] = auVar64[0];
  auVar42[5] = auVar64[2];
  auVar42[6] = auVar64[4];
  auVar42[7] = auVar64[6];
  auVar42._8_8_ = 0;
  if (auVar42._0_4_ != -NAN) {
    if ((param_9 != (byte *)0x0) && (*param_11 = (byte)local_1a4, local_1a4 != 0)) {
      if (local_1a4 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar11 = local_1a0 + 5;
        pfVar15 = local_1a0 + 1;
        do {
          pfVar18 = pfVar11 + -1;
          fVar161 = *pfVar11;
          pbVar7 = param_9 + lVar9;
          fVar127 = pfVar15[-1];
          fVar159 = *pfVar15;
          lVar14 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar7 = SUB41(*pfVar18,0);
          (param_10 + lVar14)[-1] = SUB41(fVar127,0);
          pbVar7[1] = SUB41(fVar161,0);
          param_10[lVar14] = SUB41(fVar159,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar127 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar127,0);
    }
    return 5;
  }
  local_c0 = auVar82._0_8_;
  uStack_b8 = auVar82._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_00267a9c:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar42._0_4_ =
           local_140[0] +
           ((float)uStack_130 - local_140[0]) * local_a8[0] +
           (local_120 - local_140[0]) * local_b0[0];
      auVar42._4_4_ =
           local_140[1] +
           (uStack_130._4_4_ - local_140[1]) * local_a8[0] +
           (fStack_11c - local_140[1]) * local_b0[0];
      auVar42._8_4_ =
           (float)uStack_138 +
           ((float)uStack_128 - (float)uStack_138) * local_a8[0] +
           (fStack_118 - (float)uStack_138) * local_b0[0];
      auVar42._12_4_ = uStack_138._4_4_ + 0.0;
      auVar64._0_4_ =
           (float)local_180 +
           ((float)uStack_170 - (float)local_180) * local_a8[0] +
           (local_160 - (float)local_180) * local_b0[0];
      auVar64._4_4_ =
           local_180._4_4_ +
           (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
           (fStack_15c - local_180._4_4_) * local_b0[0];
      auVar64._8_4_ =
           fStack_178 +
           ((float)uStack_168 - fStack_178) * local_a8[0] + (fStack_158 - fStack_178) * local_b0[0];
      auVar64._12_4_ = fStack_174 + 0.0;
      goto LAB_00267bbc;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar51._0_8_ =
           CONCAT44(local_140[1] + (uStack_130._4_4_ - local_140[1]) * local_a8[0],
                    local_140[0] + ((float)uStack_130 - local_140[0]) * local_a8[0]);
      auVar51._8_4_ = (float)uStack_138 + ((float)uStack_128 - (float)uStack_138) * local_a8[0];
      auVar51._12_4_ = uStack_138._4_4_ + (uStack_128._4_4_ - uStack_138._4_4_) * local_a8[0];
      auVar95 = NEON_ext(auVar51,auVar51,8,1);
      auVar42._8_4_ = (float)auVar95._0_4_;
      auVar42._0_8_ = auVar51._0_8_;
      auVar42._12_4_ = 0.0;
      auVar68._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar68._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar68._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar95 = NEON_ext(auVar68,auVar68,8,1);
      auVar64._8_4_ = (float)auVar95._0_4_;
      auVar64._0_8_ = auVar68._0_8_;
      auVar64._12_4_ = 0.0;
      goto LAB_00267bbc;
    }
    if (local_1a4 != 1) goto LAB_00267bbc;
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
          pfVar18 = pfVar11 + -1;
          fVar22 = *pfVar11;
          pbVar7 = param_9 + lVar9;
          fVar127 = pfVar15[-1];
          fVar27 = *pfVar15;
          lVar14 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar11 = pfVar11 + 2;
          pfVar15 = pfVar15 + 2;
          *pbVar7 = SUB41(*pfVar18,0);
          (param_10 + lVar14)[-1] = SUB41(fVar127,0);
          pbVar7[1] = SUB41(fVar22,0);
          param_10[lVar14] = SUB41(fVar27,0);
        } while ((ulong)uVar33 - ((ulong)uVar33 & 1) != lVar9);
        if ((uVar33 & 1) == 0) goto LAB_00267a9c;
      }
      fVar127 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar127,0);
      goto LAB_00267a9c;
    }
  }
  auVar42._4_4_ = local_140[1];
  auVar42._0_4_ = local_140[0];
  auVar42._8_4_ = (float)uStack_138;
  auVar42._12_4_ = uStack_138._4_4_;
  auVar64._4_4_ = local_180._4_4_;
  auVar64._0_4_ = (float)local_180;
  auVar64._8_4_ = fStack_178;
  auVar64._12_4_ = fStack_174;
LAB_00267bbc:
  uVar34 = NEON_frecpe(uVar136,4);
  uVar108 = NEON_frecps(uVar136,uVar34,4);
  fVar127 = (float)uVar34 * (float)uVar108;
  fVar22 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar108 >> 0x20);
  uVar34 = NEON_frecps(uVar136,CONCAT44(fVar22,fVar127),4);
  fVar127 = fVar127 * (float)uVar34;
  fVar22 = fVar22 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar136,CONCAT44(fVar22,fVar127),4);
  fVar127 = fVar127 * (float)uVar34;
  fVar22 = fVar22 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar136,CONCAT44(fVar22,fVar127),4);
  fVar127 = fVar127 * (float)uVar34;
  uVar34 = NEON_frecps(uVar136,CONCAT44(fVar22 * (float)((ulong)uVar34 >> 0x20),fVar127),4);
  fVar127 = fVar127 * (float)uVar34;
  local_c0._0_4_ = (float)local_c0 * fVar127;
  local_c0._4_4_ = local_c0._4_4_ * fVar127;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar127;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar127 = (float)uVar136;
  fVar22 = (float)(uVar136 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar53._0_8_ =
         CONCAT44(auVar42._4_4_ - local_c0._4_4_ * fVar160,auVar42._0_4_ - (float)local_c0 * fVar160
                 );
    auVar53._8_4_ = auVar42._8_4_ - (float)uStack_b8 * fVar160;
    auVar53._12_4_ = auVar42._12_4_ - fVar160 * 0.0;
    auVar70._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar159,auVar64._0_4_ + (float)local_c0 * fVar159
                 );
    auVar70._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar159;
    auVar70._12_4_ = auVar64._12_4_ + fVar159 * 0.0;
    auVar95 = NEON_ext(auVar53,auVar53,8,1);
    auVar82 = NEON_ext(auVar70,auVar70,8,1);
    param_5[1] = (ulong)auVar95._0_4_;
    *param_5 = auVar53._0_8_;
    param_6[1] = (ulong)auVar82._0_4_;
    *param_6 = auVar70._0_8_;
    *param_8 = CONCAT44(fVar22 - fVar161,fVar127 - fVar161);
  }
  else {
    iVar59 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar94 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar91 = (byte)((uint)iVar59 >> 8);
    bVar92 = (byte)((uint)iVar59 >> 0x10);
    bVar93 = (byte)((uint)iVar59 >> 0x18);
    fVar159 = (float)CONCAT13(bVar135 & ~bVar93,
                              CONCAT12(bVar134 & ~bVar92,
                                       CONCAT11(bVar133 & ~bVar91,bVar132 & ~(byte)iVar59)));
    bVar105 = (byte)((uint)iVar94 >> 8);
    bVar106 = (byte)((uint)iVar94 >> 0x10);
    bVar107 = (byte)((uint)iVar94 >> 0x18);
    fVar160 = (float)CONCAT13(bVar131 & ~bVar107,
                              CONCAT12(bVar130 & ~bVar106,
                                       CONCAT11(bVar129 & ~bVar105,bVar128 & ~(byte)iVar94)));
    auVar52._0_8_ =
         CONCAT44(auVar42._4_4_ - local_c0._4_4_ * fVar159,auVar42._0_4_ - (float)local_c0 * fVar159
                 );
    auVar52._8_4_ = auVar42._8_4_ - (float)uStack_b8 * fVar159;
    auVar52._12_4_ = auVar42._12_4_ - fVar159 * 0.0;
    auVar69._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar160,auVar64._0_4_ + (float)local_c0 * fVar160
                 );
    auVar69._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar160;
    auVar69._12_4_ = auVar64._12_4_ + fVar160 * 0.0;
    auVar95 = NEON_ext(auVar52,auVar52,8,1);
    auVar82 = NEON_ext(auVar69,auVar69,8,1);
    param_5[1] = (ulong)auVar95._0_4_;
    *param_5 = auVar52._0_8_;
    param_6[1] = (ulong)auVar82._0_4_;
    *param_6 = auVar69._0_8_;
    *param_8 = CONCAT44(fVar22 - ((float)(CONCAT17(bVar135 & ~bVar93,
                                                   CONCAT16(bVar134 & ~bVar92,
                                                            CONCAT15(bVar133 & ~bVar91,
                                                                     CONCAT14(bVar132 & ~(byte)
                                                  iVar59,fVar159)))) >> 0x20) +
                                 (float)(CONCAT17(bVar131 & ~bVar107,
                                                  CONCAT16(bVar130 & ~bVar106,
                                                           CONCAT15(bVar129 & ~bVar105,
                                                                    CONCAT14(bVar128 & ~(byte)iVar94
                                                                             ,fVar160)))) >> 0x20)),
                        fVar127 - (fVar159 + fVar160));
    if (fVar127 <= fVar161 + (float)uVar126) {
      return 2;
    }
  }
  return 4;
}


