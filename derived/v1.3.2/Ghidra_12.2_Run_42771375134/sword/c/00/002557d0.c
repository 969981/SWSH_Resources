/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002557d0; name: FUN_002557d0
 */


/* WARNING: Removing unreachable block (ram,0x00256ba0) */
/* WARNING: Removing unreachable block (ram,0x0025620c) */
/* WARNING: Removing unreachable block (ram,0x00256c20) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002557d0(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
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
  float *pfVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
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
  uint uVar58;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar57;
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
  int iVar59;
  float fVar75;
  float fVar76;
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
  byte bVar90;
  byte bVar91;
  float fVar77;
  ulong uVar78;
  float fVar93;
  float fVar94;
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
  byte bVar92;
  undefined1 auVar89 [16];
  int iVar95;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined8 uVar110;
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined8 uVar111;
  float fVar117;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined8 uVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar122;
  undefined1 auVar124 [12];
  undefined8 uVar123;
  float fVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
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
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  float fVar162;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined8 uVar166;
  float fVar167;
  float fVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  byte bVar172;
  float fVar173;
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
  fVar168 = *(float *)(lVar10 + 0x10);
  fVar167 = *(float *)(lVar13 + 0x10);
  uVar34 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar10 + 0x14),*(undefined4 *)(lVar10 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar13 + 0x14),*(undefined4 *)(lVar13 + 0x14)),4);
  fVar173 = fVar168 + fVar167;
  uVar133 = *param_4;
  local_1a4 = 0;
  bVar135 = *param_11;
  uVar15 = (ulong)bVar135;
  fVar134 = (float)uVar34 * 0.1;
  if (bVar135 == 0) {
    auVar97 = *param_3;
    auVar82._0_4_ = auVar97._0_4_ * auVar97._0_4_;
    auVar82._4_4_ = auVar97._4_4_ * auVar97._4_4_;
    auVar82._8_4_ = auVar97._8_4_ * auVar97._8_4_;
    auVar82._12_4_ = auVar97._12_4_ * auVar97._12_4_;
    auVar120 = NEON_ext(auVar82,auVar82,8,1);
    auVar120._0_4_ = -(uint)(0.0 < auVar82._0_4_ + auVar82._4_4_ + auVar120._0_4_ + auVar120._4_4_);
    auVar165._8_8_ = _UNK_01d4ae58;
    auVar165._0_8_ = _DAT_01d4ae50;
    uVar143 = 0x7f7fffff7f7fffff;
    auVar120._4_4_ = auVar120._0_4_;
    auVar120._8_4_ = auVar120._0_4_;
    auVar120._12_4_ = auVar120._0_4_;
    auVar97 = auVar165 ^ (auVar165 ^ auVar97) & auVar120;
    fVar93 = auVar97._0_4_;
    auVar127._0_4_ = fVar93 * fVar93;
    fVar94 = auVar97._4_4_;
    auVar127._4_4_ = fVar94 * fVar94;
    fVar122 = auVar97._8_4_;
    auVar127._8_4_ = fVar122 * fVar122;
    auVar127._12_4_ = auVar97._12_4_ * auVar97._12_4_;
    auVar82 = NEON_ext(auVar127,auVar127,8,1);
    uStack_b8 = auVar97._8_8_;
    local_c0 = auVar97._0_8_;
    fVar77 = auVar82._0_4_ + auVar82._4_4_;
    fVar23 = auVar127._0_4_ + auVar127._4_4_ + fVar77;
    fVar77 = auVar127._0_4_ + auVar127._4_4_ + fVar77;
    uVar15 = CONCAT44(fVar77,fVar23);
    uVar34 = NEON_frsqrte(uVar15,4);
    fVar129 = (float)uVar34;
    fVar75 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    uVar78 = CONCAT44(fVar77 * fVar75 * (float)((ulong)uVar34 >> 0x20),
                      fVar23 * fVar129 * (float)uVar34);
    uVar78 = uVar78 ^ (uVar78 ^ uVar15) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
    uVar34 = NEON_frecpe(uVar78,4);
    uVar110 = NEON_frecps(uVar78,uVar34,4);
    fVar23 = (float)uVar34 * (float)uVar110;
    fVar77 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar77 = fVar77 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar77 = fVar77 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    auVar82 = ZEXT816(0);
    uVar34 = NEON_frecps(uVar78,CONCAT44(fVar77 * (float)((ulong)uVar34 >> 0x20),fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    auVar124._0_4_ = fVar93 * fVar23;
    auVar124._4_4_ = fVar94 * fVar23;
    auVar124._8_4_ = fVar122 * fVar23;
    iVar59 = -1;
  }
  else {
    fVar23 = (float)uVar133;
    uVar78 = (ulong)uVar133 >> 0x20;
    pfVar17 = *(float **)(param_1 + 0x10);
    pbVar8 = param_10;
    pbVar9 = param_9;
    pfVar12 = local_1a0 + 4;
    pfVar16 = local_1a0;
    pfVar20 = local_100;
    puVar21 = &local_180;
    pfVar14 = &local_140;
    do {
      bVar136 = *pbVar9;
      uVar133 = NEON_fmax(uVar133,CONCAT44((float)uVar78 + 0.0,fVar23 + 0.0),4);
      *pfVar12 = (float)(uint)bVar136;
      bVar137 = *pbVar8;
      uVar15 = uVar15 - 1;
      *pfVar16 = (float)(uint)bVar137;
      fVar77 = -*(float *)(lVar10 + 0x30);
      fVar93 = -*(float *)(lVar10 + 0x34);
      fVar94 = -*(float *)(lVar10 + 0x38);
      puVar1 = (uint *)(PTR_DAT_02711e70 + (ulong)bVar136 * 0x10);
      fVar77 = (float)((uint)fVar77 ^ ((uint)fVar77 ^ (uint)*(float *)(lVar10 + 0x30)) & *puVar1);
      fVar93 = (float)((uint)fVar93 ^ ((uint)fVar93 ^ (uint)*(float *)(lVar10 + 0x34)) & puVar1[1]);
      fVar94 = (float)((uint)fVar94 ^ ((uint)fVar94 ^ (uint)*(float *)(lVar10 + 0x38)) & puVar1[2]);
      auVar97 = *(undefined1 (*) [16])(lVar13 + 0x30);
      auVar96._0_4_ = -auVar97._0_4_;
      auVar96._4_4_ = -auVar97._4_4_;
      auVar96._8_4_ = -auVar97._8_4_;
      auVar96._12_4_ = 0;
      fVar122 = pfVar17[0xc] + pfVar17[8] * fVar94 + *pfVar17 * fVar77 + pfVar17[4] * fVar93;
      fVar129 = pfVar17[0xd] + pfVar17[9] * fVar94 + pfVar17[1] * fVar77 + pfVar17[5] * fVar93;
      auVar125._0_8_ = CONCAT44(fVar129,fVar122);
      auVar125._8_4_ =
           pfVar17[0xe] + pfVar17[10] * fVar94 + pfVar17[2] * fVar77 + pfVar17[6] * fVar93;
      auVar125._12_4_ = pfVar17[0xf] + 0.0;
      auVar96 = auVar96 ^ (auVar96 ^ auVar97) &
                          *(undefined1 (*) [16])(PTR_DAT_02711e70 + (ulong)bVar137 * 0x10);
      puVar21[1] = auVar96._8_8_;
      *puVar21 = auVar96._0_8_;
      auVar97._0_8_ = CONCAT44(fVar129 - auVar96._4_4_,fVar122 - auVar96._0_4_);
      auVar97._8_4_ = auVar125._8_4_ - auVar96._8_4_;
      auVar97._12_4_ = auVar125._12_4_ - auVar96._12_4_;
      *(long *)(pfVar14 + 2) = auVar125._8_8_;
      *(undefined8 *)pfVar14 = auVar125._0_8_;
      *(long *)(pfVar20 + 2) = auVar97._8_8_;
      *(undefined8 *)pfVar20 = auVar97._0_8_;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
      pfVar12 = pfVar12 + 1;
      pfVar16 = pfVar16 + 1;
      pfVar20 = pfVar20 + 4;
      puVar21 = puVar21 + 2;
      pfVar14 = pfVar14 + 4;
    } while (uVar15 != 0);
    local_1a4 = (uint)bVar135;
    if (bVar135 == 4) {
      auVar97 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar23 = local_100[0];
      fVar77 = local_100[1];
      fVar93 = (float)uStack_f8;
      fVar94 = SUB84(uStack_f8,4);
      if (local_1a4 == 3) {
        auVar97._8_8_ = uStack_f8;
        auVar97._0_4_ = local_100[0];
        auVar97._4_4_ = local_100[1];
        auVar5._4_4_ = fStack_ec;
        auVar5._0_4_ = local_f0;
        auVar5._8_4_ = fStack_e8;
        auVar5._12_4_ = fStack_e4;
        auVar112._0_4_ = local_f0 - fVar23;
        auVar112._4_4_ = fStack_ec - fVar77;
        auVar112._8_4_ = fStack_e8 - fVar93;
        auVar112._12_4_ = fStack_e4 - fVar94;
        fVar75 = local_e0[0]._0_4_;
        auVar100._0_4_ = fVar75 - fVar23;
        fVar76 = local_e0[0]._4_4_;
        auVar100._4_4_ = fVar76 - fVar77;
        fVar22 = local_e0[0]._8_4_;
        auVar100._8_4_ = fVar22 - fVar93;
        auVar100._12_4_ = local_e0[0]._12_4_ - fVar94;
        auVar82 = NEON_ext(auVar112,auVar112,8,1);
        auVar120 = NEON_ext(auVar100,auVar100,8,1);
        fVar117 = auVar112._0_4_ * auVar100._4_4_ - auVar112._4_4_ * auVar100._0_4_;
        uVar34 = NEON_ext(CONCAT44(auVar112._4_4_ * auVar100._8_4_ - auVar112._8_4_ * auVar100._4_4_
                                   ,fVar117),
                          CONCAT44(auVar82._4_4_ * auVar100._4_4_ - auVar112._4_4_ * auVar120._4_4_,
                                   auVar82._0_4_ * auVar100._0_4_ - auVar112._0_4_ * auVar120._0_4_)
                          ,4,1);
        fVar27 = (float)uVar34;
        auVar126._0_4_ = fVar27 * fVar27;
        fVar116 = (float)((ulong)uVar34 >> 0x20);
        auVar126._4_4_ = fVar116 * fVar116;
        auVar126._8_4_ = fVar117 * fVar117;
        auVar126._12_4_ = 0;
        auVar82 = NEON_ext(auVar126,auVar126,8,1);
        fVar129 = auVar82._0_4_ + auVar82._4_4_;
        fVar122 = auVar126._0_4_ + auVar126._4_4_ + fVar129;
        uVar34 = CONCAT44(auVar126._0_4_ + auVar126._4_4_ + fVar129,fVar122);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar122) {
          if (fVar122 != 0.0) {
            auVar82 = NEON_ext(auVar5,auVar5,8,1);
            auVar120 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar130 = local_f0 * fVar76 - fStack_ec * fVar75;
            auVar127 = NEON_ext(auVar97,auVar97,8,1);
            uVar111 = NEON_ext(CONCAT44(fStack_ec * fVar22 - fStack_e8 * fVar76,fVar130),
                               CONCAT44(auVar82._4_4_ * fVar76 - fStack_ec * auVar120._4_4_,
                                        auVar82._0_4_ * fVar75 - local_f0 * auVar120._0_4_),4,1);
            fVar122 = fVar77 * fVar75 - fVar23 * fVar76;
            uVar123 = NEON_ext(CONCAT44(fVar93 * fVar76 - fVar77 * fVar22,fVar122),
                               CONCAT44(fVar77 * auVar120._4_4_ - auVar127._4_4_ * fVar76,
                                        fVar23 * auVar120._0_4_ - auVar127._0_4_ * fVar75),4,1);
            fVar129 = fVar23 * fStack_ec - fVar77 * local_f0;
            uVar110 = NEON_ext(CONCAT44(fVar77 * fStack_e8 - fVar93 * fStack_ec,fVar129),
                               CONCAT44(auVar127._4_4_ * fStack_ec - fVar77 * auVar82._4_4_,
                                        auVar127._0_4_ * local_f0 - fVar23 * auVar82._0_4_),4,1);
            auVar146._0_4_ = (float)uVar111 * fVar27;
            auVar146._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar116;
            auVar146._8_4_ = fVar130 * fVar117;
            auVar146._12_4_ = 0;
            auVar82 = NEON_ext(auVar146,auVar146,8,1);
            auVar156._0_4_ = (float)uVar123 * fVar27;
            auVar156._4_4_ = (float)((ulong)uVar123 >> 0x20) * fVar116;
            auVar156._8_4_ = fVar122 * fVar117;
            auVar156._12_4_ = 0;
            auVar119._0_4_ = (float)uVar110 * fVar27;
            auVar119._4_4_ = (float)((ulong)uVar110 >> 0x20) * fVar116;
            auVar119._8_4_ = fVar129 * fVar117;
            auVar119._12_4_ = 0;
            fVar122 = auVar146._0_4_ + auVar146._4_4_ + auVar82._0_4_ + auVar82._4_4_;
            auVar82 = NEON_ext(auVar156,auVar156,8,1);
            auVar120 = NEON_ext(auVar119,auVar119,8,1);
            fVar129 = auVar156._0_4_ + auVar156._4_4_ + auVar82._0_4_ + auVar82._4_4_;
            fVar130 = auVar119._0_4_ + auVar119._4_4_ + auVar120._0_4_ + auVar120._4_4_;
            bVar7 = 0.0 <= fVar130 && (0.0 <= fVar122 && 0.0 <= fVar129);
            auVar157._0_4_ = -(uint)bVar7;
            auVar157._4_4_ = -(uint)bVar7;
            auVar157._8_4_ = -(uint)bVar7;
            auVar157._12_4_ = -(uint)bVar7;
            NEON_ext(auVar157,auVar157,8,1);
            if (CONCAT13((char)auVar157._12_4_,
                         CONCAT12((char)auVar157._8_4_,
                                  CONCAT11((char)auVar157._4_4_,(char)auVar157._0_4_))) == -1) {
              auVar38._0_4_ = fVar23 * fVar27;
              auVar38._4_4_ = fVar77 * fVar116;
              auVar38._8_4_ = fVar93 * fVar117;
              auVar38._12_4_ = fVar94 * 0.0;
              auVar97 = NEON_ext(auVar38,auVar38,8,1);
              uVar110 = NEON_frecpe(uVar34,4);
              uVar123 = NEON_frecps(uVar34,uVar110,4);
              fVar23 = (float)uVar110 * (float)uVar123;
              fVar77 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
              uVar110 = NEON_frecps(uVar34,CONCAT44(fVar77,fVar23),4);
              fVar23 = fVar23 * (float)uVar110;
              fVar77 = fVar77 * (float)((ulong)uVar110 >> 0x20);
              uVar110 = NEON_frecps(uVar34,CONCAT44(fVar77,fVar23),4);
              fVar23 = fVar23 * (float)uVar110;
              fVar77 = fVar77 * (float)((ulong)uVar110 >> 0x20);
              uVar110 = NEON_frecps(uVar34,CONCAT44(fVar77,fVar23),4);
              fVar23 = fVar23 * (float)uVar110;
              uVar34 = NEON_frecps(uVar34,CONCAT44(fVar77 * (float)((ulong)uVar110 >> 0x20),fVar23),
                                   4);
              fVar23 = (auVar38._0_4_ + auVar38._4_4_ + auVar97._0_4_ + auVar97._4_4_) *
                       fVar23 * (float)uVar34;
              auVar97._0_4_ = fVar27 * fVar23;
              auVar97._4_4_ = fVar116 * fVar23;
              auVar97._8_4_ = fVar117 * fVar23;
              auVar97._12_4_ = 0.0;
            }
            else {
              auVar131._0_4_ = -fVar23 * auVar112._0_4_;
              auVar131._4_4_ = -fVar77 * auVar112._4_4_;
              auVar131._8_4_ = -fVar93 * auVar112._8_4_;
              auVar131._12_4_ = auVar112._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar131,auVar131,8,1);
              fVar117 = auVar82._0_4_ + auVar82._4_4_;
              auVar144._0_4_ = -local_f0 * auVar112._0_4_;
              auVar144._4_4_ = -fStack_ec * auVar112._4_4_;
              auVar144._8_4_ = -fStack_e8 * auVar112._8_4_;
              auVar144._12_4_ = auVar112._12_4_ * 0.0;
              auVar82 = NEON_ext(auVar144,auVar144,8,1);
              fVar162 = auVar82._0_4_ + auVar82._4_4_;
              fVar27 = auVar131._0_4_ + auVar131._4_4_ + fVar117;
              fVar116 = auVar144._0_4_ + auVar144._4_4_ + fVar162;
              fVar162 = auVar144._0_4_ + auVar144._4_4_ + fVar162;
              bVar7 = (0.0 <= fVar27 && fVar130 <= 0.0) && fVar116 <= 0.0;
              auVar160._0_4_ = -(uint)bVar7;
              auVar160._4_4_ = -(uint)bVar7;
              auVar160._8_4_ = -(uint)bVar7;
              auVar160._12_4_ = -(uint)bVar7;
              NEON_ext(auVar160,auVar160,8,1);
              pauVar18 = (undefined1 (*) [16])&local_f0;
              if (CONCAT13((char)auVar160._12_4_,
                           CONCAT12((char)auVar160._8_4_,
                                    CONCAT11((char)auVar160._4_4_,(char)auVar160._0_4_))) == -1) {
                uVar34 = CONCAT44((auVar131._0_4_ + auVar131._4_4_ + fVar117) - fVar162,
                                  fVar27 - fVar116);
                uVar110 = NEON_frecpe(uVar34,4);
                uVar123 = NEON_frecps(uVar34,uVar110,4);
                fVar122 = (float)uVar110 * (float)uVar123;
                fVar129 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                uVar110 = NEON_frecps(uVar34,CONCAT44(fVar129,fVar122),4);
                fVar122 = fVar122 * (float)uVar110;
                fVar129 = fVar129 * (float)((ulong)uVar110 >> 0x20);
                uVar110 = NEON_frecps(uVar34,CONCAT44(fVar129,fVar122),4);
                fVar122 = fVar122 * (float)uVar110;
                fVar129 = fVar129 * (float)((ulong)uVar110 >> 0x20);
                uVar110 = NEON_frecps(uVar34,CONCAT44(fVar129,fVar122),4);
                fVar122 = fVar122 * (float)uVar110;
                uVar34 = NEON_frecps(uVar34,CONCAT44(fVar129 * (float)((ulong)uVar110 >> 0x20),
                                                     fVar122),4);
                fVar27 = fVar27 * (float)(-(uint)(1.1920929e-07 < ABS(fVar27 - fVar116)) &
                                         (uint)(fVar122 * (float)uVar34));
                lVar10 = 0;
                pauVar19 = (undefined1 (*) [16])local_100;
                auVar39._0_8_ =
                     CONCAT44(fVar77 + auVar112._4_4_ * fVar27,fVar23 + auVar112._0_4_ * fVar27);
                auVar39._8_4_ = fVar93 + auVar112._8_4_ * fVar27;
                auVar39._12_4_ = fVar94 + auVar112._12_4_ * fVar27;
                auVar97 = NEON_ext(auVar39,auVar39,8,1);
                local_1a4 = 2;
                auVar97._8_4_ = (float)auVar97._0_4_;
                auVar97._0_8_ = auVar39._0_8_;
                auVar97._12_4_ = 0.0;
LAB_0025607c:
                lVar13 = 1;
                pauVar11 = pauVar18;
                pauVar18 = pauVar19;
              }
              else {
                auVar161._0_4_ = -local_f0 * auVar100._0_4_;
                auVar161._4_4_ = -fStack_ec * auVar100._4_4_;
                auVar161._8_4_ = -fStack_e8 * auVar100._8_4_;
                auVar161._12_4_ = auVar100._12_4_ * 0.0;
                auVar82 = NEON_ext(auVar161,auVar161,8,1);
                fVar24 = auVar82._0_4_ + auVar82._4_4_;
                auVar113._0_4_ = auVar112._0_4_ * -fVar75;
                auVar113._4_4_ = auVar112._4_4_ * -fVar76;
                auVar113._8_4_ = auVar112._8_4_ * -fVar22;
                auVar113._12_4_ = auVar112._12_4_ * 0.0;
                auVar164._0_4_ = auVar100._0_4_ * -fVar75;
                auVar164._4_4_ = auVar100._4_4_ * -fVar76;
                auVar164._8_4_ = auVar100._8_4_ * -fVar22;
                auVar164._12_4_ = auVar100._12_4_ * 0.0;
                fVar117 = auVar161._0_4_ + auVar161._4_4_ + fVar24;
                auVar82 = NEON_ext(auVar113,auVar113,8,1);
                fVar29 = auVar82._0_4_ + auVar82._4_4_;
                fVar130 = auVar113._0_4_ + auVar113._4_4_ + fVar29;
                auVar82 = NEON_ext(auVar164,auVar164,8,1);
                fVar30 = auVar82._0_4_ + auVar82._4_4_;
                fVar28 = auVar164._0_4_ + auVar164._4_4_ + fVar30;
                fVar30 = auVar164._0_4_ + auVar164._4_4_ + fVar30;
                pauVar11 = local_e0;
                bVar7 = (fVar116 <= fVar117 && fVar122 <= 0.0) && fVar28 <= fVar130;
                auVar151._0_4_ = -(uint)bVar7;
                auVar151._4_4_ = -(uint)bVar7;
                auVar151._8_4_ = -(uint)bVar7;
                auVar151._12_4_ = -(uint)bVar7;
                NEON_ext(auVar151,auVar151,8,1);
                if (CONCAT13((char)auVar151._12_4_,
                             CONCAT12((char)auVar151._8_4_,
                                      CONCAT11((char)auVar151._4_4_,(char)auVar151._0_4_))) == -1) {
                  fVar23 = (fVar117 - fVar116) + (fVar130 - fVar28);
                  uVar34 = CONCAT44(((auVar161._0_4_ + auVar161._4_4_ + fVar24) - fVar162) +
                                    ((auVar113._0_4_ + auVar113._4_4_ + fVar29) - fVar30),fVar23);
                  uVar110 = NEON_frecpe(uVar34,4);
                  uVar123 = NEON_frecps(uVar34,uVar110,4);
                  fVar77 = (float)uVar110 * (float)uVar123;
                  fVar93 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar93,fVar77),4);
                  fVar77 = fVar77 * (float)uVar110;
                  fVar93 = fVar93 * (float)((ulong)uVar110 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar93,fVar77),4);
                  fVar77 = fVar77 * (float)uVar110;
                  fVar93 = fVar93 * (float)((ulong)uVar110 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar93,fVar77),4);
                  fVar77 = fVar77 * (float)uVar110;
                  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar93 * (float)((ulong)uVar110 >> 0x20),
                                                       fVar77),4);
                  fVar23 = (fVar117 - fVar116) *
                           (float)(-(uint)(1.1920929e-07 < ABS(fVar23)) &
                                  (uint)(fVar77 * (float)uVar34));
                  auVar40._0_8_ =
                       CONCAT44(fStack_ec + (fVar76 - fStack_ec) * fVar23,
                                local_f0 + (fVar75 - local_f0) * fVar23);
                  auVar40._8_4_ = fStack_e8 + (fVar22 - fStack_e8) * fVar23;
                  auVar40._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar23;
                  auVar97 = NEON_ext(auVar40,auVar40,8,1);
                  lVar10 = 1;
                  auVar2._8_4_ = auVar97._0_4_;
                  auVar2._0_8_ = auVar40._0_8_;
                }
                else {
                  auVar152._0_4_ = -fVar23 * auVar100._0_4_;
                  auVar152._4_4_ = -fVar77 * auVar100._4_4_;
                  auVar152._8_4_ = -fVar93 * auVar100._8_4_;
                  auVar152._12_4_ = auVar100._12_4_ * 0.0;
                  auVar82 = NEON_ext(auVar152,auVar152,8,1);
                  fVar75 = auVar82._0_4_ + auVar82._4_4_;
                  fVar122 = auVar152._0_4_ + auVar152._4_4_ + fVar75;
                  bVar7 = (fVar129 <= 0.0 && 0.0 <= fVar122) && fVar28 <= 0.0;
                  auVar147._0_4_ = -(uint)bVar7;
                  auVar147._4_4_ = -(uint)bVar7;
                  auVar147._8_4_ = -(uint)bVar7;
                  auVar147._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar147,auVar147,8,1);
                  if (CONCAT13((char)auVar147._12_4_,
                               CONCAT12((char)auVar147._8_4_,
                                        CONCAT11((char)auVar147._4_4_,(char)auVar147._0_4_))) != -1)
                  {
                    bVar7 = fVar27 <= 0.0 && fVar122 <= 0.0;
                    auVar101._0_4_ = -(uint)bVar7;
                    auVar101._4_4_ = -(uint)bVar7;
                    auVar101._8_4_ = -(uint)bVar7;
                    auVar101._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar101,auVar101,8,1);
                    pauVar19 = (undefined1 (*) [16])local_100;
                    if (CONCAT13((char)auVar101._12_4_,
                                 CONCAT12((char)auVar101._8_4_,
                                          CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) ==
                        -1) {
                      lVar10 = 0;
                      local_1a4 = 1;
                    }
                    else {
                      bVar7 = 0.0 <= fVar116 && fVar117 <= fVar116;
                      auVar36._0_4_ = -(uint)bVar7;
                      auVar36._4_4_ = -(uint)bVar7;
                      auVar36._8_4_ = -(uint)bVar7;
                      auVar36._12_4_ = -(uint)bVar7;
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
                      lVar10 = 1;
                      if (iVar59 != -1) {
                        lVar10 = 2;
                      }
                      pauVar19 = pauVar19 + lVar10;
                      auVar97 = local_e0[0] ^ (local_e0[0] ^ auVar5) & auVar37;
                    }
                    goto LAB_0025607c;
                  }
                  uVar34 = CONCAT44((auVar152._0_4_ + auVar152._4_4_ + fVar75) - fVar30,
                                    fVar122 - fVar28);
                  uVar110 = NEON_frecpe(uVar34,4);
                  uVar123 = NEON_frecps(uVar34,uVar110,4);
                  fVar129 = (float)uVar110 * (float)uVar123;
                  fVar75 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar110;
                  fVar75 = fVar75 * (float)((ulong)uVar110 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar110;
                  fVar75 = fVar75 * (float)((ulong)uVar110 >> 0x20);
                  uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar110;
                  uVar34 = NEON_frecps(uVar34,CONCAT44(fVar75 * (float)((ulong)uVar110 >> 0x20),
                                                       fVar129),4);
                  fVar122 = fVar122 * (float)(-(uint)(1.1920929e-07 < ABS(fVar122 - fVar28)) &
                                             (uint)(fVar129 * (float)uVar34));
                  lVar10 = 0;
                  pauVar18 = (undefined1 (*) [16])local_100;
                  auVar41._0_8_ =
                       CONCAT44(fVar77 + auVar100._4_4_ * fVar122,fVar23 + auVar100._0_4_ * fVar122)
                  ;
                  auVar41._8_4_ = fVar93 + auVar100._8_4_ * fVar122;
                  auVar41._12_4_ = fVar94 + auVar100._12_4_ * fVar122;
                  auVar97 = NEON_ext(auVar41,auVar41,8,1);
                  auVar2._8_4_ = auVar97._0_4_;
                  auVar2._0_8_ = auVar41._0_8_;
                }
                auVar97._12_4_ = 0.0;
                auVar97._0_12_ = auVar2;
                local_1a4 = 2;
                lVar13 = 2;
              }
              uStack_f8 = *(undefined8 *)((long)*pauVar18 + 8);
              local_100 = (float  [2])*(undefined8 *)*pauVar18;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar11 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar11 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar11;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar11 >> 0x20);
              local_1a0[4] = local_1a0[lVar10 + 4];
              local_1a0[5] = local_1a0[lVar13 + 4];
              fStack_138 = (float)*(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2) >> 0x20
                                  );
              local_140 = (float)*(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2);
              fStack_13c = (float)((ulong)*(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2) >> 0x20
                                  );
              uStack_128 = *(undefined8 *)(local_100 + (lVar13 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar13 * 2 + -8) * 2);
              local_1a0[0] = local_1a0[lVar10];
              local_1a0[1] = local_1a0[lVar13];
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
          auVar60._0_4_ = auVar112._0_4_ * auVar112._0_4_;
          auVar60._4_4_ = auVar112._4_4_ * auVar112._4_4_;
          auVar60._8_4_ = auVar112._8_4_ * auVar112._8_4_;
          auVar60._12_4_ = auVar112._12_4_ * auVar112._12_4_;
          auVar97 = NEON_ext(auVar60,auVar60,8,1);
          fVar129 = auVar97._0_4_ + auVar97._4_4_;
          fVar122 = auVar60._0_4_ + auVar60._4_4_ + fVar129;
          uVar34 = CONCAT44(auVar60._0_4_ + auVar60._4_4_ + fVar129,fVar122);
          bVar7 = fVar122 <= 1.1920929e-07;
          auVar80._0_4_ = -(uint)bVar7;
          auVar80._4_4_ = -(uint)bVar7;
          auVar80._8_4_ = -(uint)bVar7;
          auVar80._12_4_ = -(uint)bVar7;
          NEON_ext(auVar80,auVar80,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar80._12_4_,
                       CONCAT12((char)auVar80._8_4_,
                                CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) != -1) {
            auVar81._0_4_ = -fVar23 * auVar112._0_4_;
            auVar81._4_4_ = -fVar77 * auVar112._4_4_;
            auVar81._8_4_ = -fVar93 * auVar112._8_4_;
            auVar81._12_4_ = auVar112._12_4_ * 0.0;
            auVar97 = NEON_ext(auVar81,auVar81,8,1);
            fVar122 = auVar97._0_4_ + auVar97._4_4_;
            uVar110 = NEON_frecpe(uVar34,4);
            uVar123 = NEON_frecps(uVar34,uVar110,4);
            fVar129 = (float)uVar110 * (float)uVar123;
            fVar75 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
            uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
            fVar129 = fVar129 * (float)uVar110;
            fVar75 = fVar75 * (float)((ulong)uVar110 >> 0x20);
            uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
            fVar129 = fVar129 * (float)uVar110;
            fVar75 = fVar75 * (float)((ulong)uVar110 >> 0x20);
            uVar110 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
            fVar129 = fVar129 * (float)uVar110;
            fVar75 = fVar75 * (float)((ulong)uVar110 >> 0x20);
            uVar34 = NEON_frecps(uVar34,CONCAT44(fVar75,fVar129),4);
            uVar110 = NEON_fmov(0x3f800000,4);
            uVar34 = NEON_fmin(CONCAT44((auVar81._0_4_ + auVar81._4_4_ + fVar122) *
                                        fVar75 * (float)((ulong)uVar34 >> 0x20),
                                        (auVar81._0_4_ + auVar81._4_4_ + fVar122) *
                                        fVar129 * (float)uVar34),uVar110,4);
            uVar34 = NEON_fmax(uVar34,0,4);
            fVar122 = (float)uVar34;
            fVar129 = auVar112._0_4_ * fVar122;
            fVar75 = auVar112._4_4_ * fVar122;
            fVar76 = auVar112._8_4_ * fVar122;
            fVar122 = auVar112._12_4_ * fVar122;
            goto LAB_00255c00;
          }
LAB_00255c14:
          auVar97._8_8_ = uStack_f8;
          auVar97._0_4_ = local_100[0];
          auVar97._4_4_ = local_100[1];
          local_1a4 = 1;
        }
      }
      else if (local_1a4 == 2) {
        fVar129 = local_f0 - fVar23;
        fVar75 = fStack_ec - fVar77;
        fVar76 = fStack_e8 - fVar93;
        fVar122 = fStack_e4 - fVar94;
        auVar79._0_4_ = fVar129 * fVar129;
        auVar79._4_4_ = fVar75 * fVar75;
        auVar79._8_4_ = fVar76 * fVar76;
        auVar79._12_4_ = fVar122 * fVar122;
        auVar97 = NEON_ext(auVar79,auVar79,8,1);
        fVar27 = auVar97._0_4_ + auVar97._4_4_;
        fVar22 = auVar79._0_4_ + auVar79._4_4_ + fVar27;
        uVar34 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar27,fVar22);
        bVar7 = fVar22 <= 1.1920929e-07;
        auVar98._0_4_ = -(uint)bVar7;
        auVar98._4_4_ = -(uint)bVar7;
        auVar98._8_4_ = -(uint)bVar7;
        auVar98._12_4_ = -(uint)bVar7;
        NEON_ext(auVar98,auVar98,8,1);
        if (CONCAT13((char)auVar98._12_4_,
                     CONCAT12((char)auVar98._8_4_,CONCAT11((char)auVar98._4_4_,(char)auVar98._0_4_))
                    ) == -1) goto LAB_00255c14;
        auVar99._0_4_ = -fVar23 * fVar129;
        auVar99._4_4_ = -fVar77 * fVar75;
        auVar99._8_4_ = -fVar93 * fVar76;
        auVar99._12_4_ = fVar122 * 0.0;
        auVar97 = NEON_ext(auVar99,auVar99,8,1);
        fVar22 = auVar97._0_4_ + auVar97._4_4_;
        uVar110 = NEON_frecpe(uVar34,4);
        uVar123 = NEON_frecps(uVar34,uVar110,4);
        fVar27 = (float)uVar110 * (float)uVar123;
        fVar116 = (float)((ulong)uVar110 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
        uVar110 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar27),4);
        fVar27 = fVar27 * (float)uVar110;
        fVar116 = fVar116 * (float)((ulong)uVar110 >> 0x20);
        uVar110 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar27),4);
        fVar27 = fVar27 * (float)uVar110;
        fVar116 = fVar116 * (float)((ulong)uVar110 >> 0x20);
        uVar110 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar27),4);
        fVar27 = fVar27 * (float)uVar110;
        fVar116 = fVar116 * (float)((ulong)uVar110 >> 0x20);
        uVar34 = NEON_frecps(uVar34,CONCAT44(fVar116,fVar27),4);
        uVar110 = NEON_fmov(0x3f800000,4);
        uVar34 = NEON_fmin(CONCAT44((auVar99._0_4_ + auVar99._4_4_ + fVar22) *
                                    fVar116 * (float)((ulong)uVar34 >> 0x20),
                                    (auVar99._0_4_ + auVar99._4_4_ + fVar22) *
                                    fVar27 * (float)uVar34),uVar110,4);
        uVar34 = NEON_fmax(uVar34,0,4);
        fVar22 = (float)uVar34;
        fVar129 = fVar129 * fVar22;
        fVar75 = fVar75 * fVar22;
        fVar76 = fVar76 * fVar22;
        fVar122 = fVar122 * fVar22;
LAB_00255c00:
        auVar35._0_8_ = CONCAT44(fVar77 + fVar75,fVar23 + fVar129);
        auVar35._8_4_ = fVar93 + fVar76;
        auVar35._12_4_ = fVar94 + fVar122;
        auVar97 = NEON_ext(auVar35,auVar35,8,1);
        auVar97._8_4_ = (float)auVar97._0_4_;
        auVar97._0_8_ = auVar35._0_8_;
        auVar97._12_4_ = 0.0;
      }
    }
    fVar93 = auVar97._0_4_;
    auVar61._0_4_ = fVar93 * fVar93;
    fVar94 = auVar97._4_4_;
    auVar61._4_4_ = fVar94 * fVar94;
    fVar122 = auVar97._8_4_;
    auVar61._8_4_ = fVar122 * fVar122;
    auVar61._12_4_ = auVar97._12_4_ * auVar97._12_4_;
    auVar82 = NEON_ext(auVar61,auVar61,8,1);
    uStack_b8 = auVar97._8_8_;
    local_c0 = auVar97._0_8_;
    fVar77 = auVar82._0_4_ + auVar82._4_4_;
    fVar23 = auVar61._0_4_ + auVar61._4_4_ + fVar77;
    fVar77 = auVar61._0_4_ + auVar61._4_4_ + fVar77;
    uVar15 = CONCAT44(fVar77,fVar23);
    uVar34 = NEON_frsqrte(uVar15,4);
    fVar129 = (float)uVar34;
    fVar75 = (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    fVar129 = fVar129 * (float)uVar34;
    fVar75 = fVar75 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frsqrts(CONCAT44(fVar75 * fVar75,fVar129 * fVar129),uVar15,4);
    uVar143 = CONCAT44(fVar77 * fVar75 * (float)((ulong)uVar34 >> 0x20),
                       fVar23 * fVar129 * (float)uVar34);
    uVar143 = uVar143 ^ (uVar143 ^ uVar15) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0))
    ;
    uVar34 = NEON_frecpe(uVar143,4);
    uVar110 = NEON_frecps(uVar143,uVar34,4);
    fVar23 = (float)uVar34 * (float)uVar110;
    fVar77 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
    uVar34 = NEON_frecps(uVar143,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar77 = fVar77 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar143,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    fVar77 = fVar77 * (float)((ulong)uVar34 >> 0x20);
    uVar34 = NEON_frecps(uVar143,CONCAT44(fVar77,fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    uVar34 = NEON_frecps(uVar143,CONCAT44(fVar77 * (float)((ulong)uVar34 >> 0x20),fVar23),4);
    fVar23 = fVar23 * (float)uVar34;
    auVar124._0_4_ = fVar93 * fVar23;
    auVar124._4_4_ = fVar94 * fVar23;
    auVar124._8_4_ = fVar122 * fVar23;
    iVar59 = -(uint)(fVar134 < (float)uVar143);
    auVar82 = auVar97;
  }
  uVar110 = _UNK_01d4aa48;
  uVar34 = _DAT_01d4aa40;
  auVar62._0_4_ = -(uint)(iVar59 == -1);
  auVar62._4_4_ = -(uint)(iVar59 == -1);
  auVar62._8_4_ = -(uint)(iVar59 == -1);
  auVar62._12_4_ = -(uint)(iVar59 == -1);
  NEON_ext(auVar62,auVar62,8,1);
  bVar139 = SUB41(fVar168,0);
  bVar140 = (byte)((uint)fVar168 >> 8);
  bVar141 = (byte)((uint)fVar168 >> 0x10);
  bVar142 = (byte)((uint)fVar168 >> 0x18);
  bVar135 = SUB41(fVar167,0);
  bVar136 = (byte)((uint)fVar167 >> 8);
  bVar137 = (byte)((uint)fVar167 >> 0x10);
  bVar138 = (byte)((uint)fVar167 >> 0x18);
  if (CONCAT13((char)auVar62._12_4_,
               CONCAT12((char)auVar62._8_4_,CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) ==
      -1) {
    uVar15 = uVar143;
    do {
      uVar143 = uVar15;
      auVar82 = auVar97;
      uVar15 = (ulong)local_1a4;
      fVar23 = -auVar82._0_4_;
      fVar77 = -auVar82._4_4_;
      fVar93 = -auVar82._8_4_;
      lVar10 = *(long *)(param_1 + 8);
      pfVar12 = *(float **)(param_1 + 0x10);
      uVar33 = -(uint)(0.0 < *(float *)(param_1 + 0x20) * fVar23 +
                             *(float *)(param_1 + 0x30) * fVar77 +
                             *(float *)(param_1 + 0x40) * fVar93);
      uVar57 = -(uint)(0.0 < *(float *)(param_1 + 0x24) * fVar23 +
                             *(float *)(param_1 + 0x34) * fVar77 +
                             *(float *)(param_1 + 0x44) * fVar93);
      uVar58 = -(uint)(0.0 < *(float *)(param_1 + 0x28) * fVar23 +
                             *(float *)(param_1 + 0x38) * fVar77 +
                             *(float *)(param_1 + 0x48) * fVar93);
      bVar90 = (byte)((ulong)uVar34 >> 8);
      bVar91 = (byte)((ulong)uVar34 >> 0x10);
      bVar92 = (byte)((ulong)uVar34 >> 0x18);
      iVar59 = CONCAT13((byte)(uVar33 >> 0x18) & bVar92,
                        CONCAT12((byte)(uVar33 >> 0x10) & bVar91,
                                 CONCAT11((byte)(uVar33 >> 8) & bVar90,(byte)uVar33 & (byte)uVar34))
                       );
      bVar107 = (byte)((ulong)uVar34 >> 0x20);
      bVar108 = (byte)((ulong)uVar34 >> 0x28);
      bVar109 = (byte)((ulong)uVar34 >> 0x30);
      bVar169 = (byte)((ulong)uVar34 >> 0x38);
      auVar65._0_8_ =
           CONCAT17((byte)(uVar57 >> 0x18) & bVar169,
                    CONCAT16((byte)(uVar57 >> 0x10) & bVar109,
                             CONCAT15((byte)(uVar57 >> 8) & bVar108,
                                      CONCAT14((byte)uVar57 & bVar107,iVar59))));
      auVar65[8] = (byte)uVar58 & (byte)uVar110;
      bVar170 = (byte)((ulong)uVar110 >> 8);
      auVar65[9] = (byte)(uVar58 >> 8) & bVar170;
      bVar171 = (byte)((ulong)uVar110 >> 0x10);
      auVar65[10] = (byte)(uVar58 >> 0x10) & bVar171;
      bVar172 = (byte)((ulong)uVar110 >> 0x18);
      auVar65[0xb] = (byte)(uVar58 >> 0x18) & bVar172;
      auVar65._12_4_ = 0;
      auVar97 = NEON_ext(auVar65,auVar65,8,1);
      local_1a0[uVar15 + 4] =
           (float)(iVar59 + (int)((ulong)auVar65._0_8_ >> 0x20) + auVar97._0_4_ + auVar97._4_4_ & 7)
      ;
      lVar13 = *(long *)(param_2 + 8);
      fVar23 = -*(float *)(lVar10 + 0x30);
      fVar93 = -*(float *)(lVar10 + 0x34);
      fVar122 = -*(float *)(lVar10 + 0x38);
      fVar23 = (float)((uint)fVar23 ^ ((uint)fVar23 ^ (uint)*(float *)(lVar10 + 0x30)) & uVar33);
      fVar93 = (float)((uint)fVar93 ^ ((uint)fVar93 ^ (uint)*(float *)(lVar10 + 0x34)) & uVar57);
      fVar122 = (float)((uint)fVar122 ^ ((uint)fVar122 ^ (uint)*(float *)(lVar10 + 0x38)) & uVar58);
      auVar83._0_4_ = -(uint)(0.0 < auVar82._0_4_);
      auVar83._4_4_ = -(uint)(0.0 < auVar82._4_4_);
      auVar83._8_4_ = -(uint)(0.0 < auVar82._8_4_);
      auVar83._12_4_ = -(uint)(0.0 < auVar82._12_4_);
      fVar77 = pfVar12[0xc] + *pfVar12 * fVar23 + pfVar12[4] * fVar93 + pfVar12[8] * fVar122;
      fVar94 = pfVar12[0xd] + pfVar12[1] * fVar23 + pfVar12[5] * fVar93 + pfVar12[9] * fVar122;
      auVar74._0_8_ = CONCAT44(fVar94,fVar77);
      auVar74._8_4_ =
           pfVar12[0xe] + pfVar12[2] * fVar23 + pfVar12[6] * fVar93 + pfVar12[10] * fVar122;
      auVar74._12_4_ = pfVar12[0xf] + 0.0;
      iVar59 = CONCAT13((byte)((uint)auVar83._0_4_ >> 0x18) & bVar92,
                        CONCAT12((byte)((uint)auVar83._0_4_ >> 0x10) & bVar91,
                                 CONCAT11((byte)((uint)auVar83._0_4_ >> 8) & bVar90,
                                          (byte)auVar83._0_4_ & (byte)uVar34)));
      auVar43._0_8_ =
           CONCAT17((byte)((uint)auVar83._4_4_ >> 0x18) & bVar169,
                    CONCAT16((byte)((uint)auVar83._4_4_ >> 0x10) & bVar109,
                             CONCAT15((byte)((uint)auVar83._4_4_ >> 8) & bVar108,
                                      CONCAT14((byte)auVar83._4_4_ & bVar107,iVar59))));
      auVar43[8] = (byte)auVar83._8_4_ & (byte)uVar110;
      auVar43[9] = (byte)((uint)auVar83._8_4_ >> 8) & bVar170;
      auVar43[10] = (byte)((uint)auVar83._8_4_ >> 0x10) & bVar171;
      auVar43[0xb] = (byte)((uint)auVar83._8_4_ >> 0x18) & bVar172;
      auVar43[0xc] = (byte)auVar83._12_4_ & (byte)((ulong)uVar110 >> 0x20);
      auVar43[0xd] = (byte)((uint)auVar83._12_4_ >> 8) & (byte)((ulong)uVar110 >> 0x28);
      auVar43[0xe] = (byte)((uint)auVar83._12_4_ >> 0x10) & (byte)((ulong)uVar110 >> 0x30);
      auVar43[0xf] = (byte)((uint)auVar83._12_4_ >> 0x18) & (byte)((ulong)uVar110 >> 0x38);
      auVar97 = NEON_ext(auVar43,auVar43,8,1);
      local_1a0[uVar15] =
           (float)(iVar59 + (int)((ulong)auVar43._0_8_ >> 0x20) + auVar97._0_4_ + auVar97._4_4_ & 7)
      ;
      auVar97 = *(undefined1 (*) [16])(lVar13 + 0x30);
      auVar84._0_4_ = -auVar97._0_4_;
      auVar84._4_4_ = -auVar97._4_4_;
      auVar84._8_4_ = -auVar97._8_4_;
      auVar84._12_4_ = 0;
      auVar84 = auVar84 ^ (auVar84 ^ auVar97) & auVar83;
      fVar77 = fVar77 - auVar84._0_4_;
      fVar94 = fVar94 - auVar84._4_4_;
      auVar97._0_8_ = CONCAT44(fVar94,fVar77);
      auVar97._8_4_ = auVar74._8_4_ - auVar84._8_4_;
      auVar97._12_4_ = auVar74._12_4_ - auVar84._12_4_;
      uVar133 = NEON_fmax(uVar133,CONCAT44((float)((ulong)*param_4 >> 0x20) + 0.0,
                                           (float)*param_4 + 0.0),4);
      fVar93 = auVar124._0_4_;
      auVar102._0_4_ = fVar93 * fVar77;
      fVar77 = auVar124._4_4_;
      auVar102._4_4_ = fVar77 * fVar94;
      fVar94 = auVar124._8_4_;
      auVar102._8_4_ = fVar94 * auVar97._8_4_;
      auVar102._12_4_ = auVar97._12_4_ * 0.0;
      auVar120 = NEON_ext(auVar102,auVar102,8,1);
      fVar23 = auVar102._0_4_ + auVar102._4_4_ + auVar120._0_4_ + auVar120._4_4_;
      if (fVar173 + (float)uVar133 < fVar23) {
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
            fVar173 = *pfVar12;
            pbVar8 = param_9 + lVar10;
            fVar134 = pfVar16[-1];
            fVar167 = *pfVar16;
            lVar13 = lVar10 + 1;
            lVar10 = lVar10 + 2;
            pfVar12 = pfVar12 + 2;
            pfVar16 = pfVar16 + 2;
            *pbVar8 = SUB41(*pfVar20,0);
            (param_10 + lVar13)[-1] = SUB41(fVar134,0);
            pbVar8[1] = SUB41(fVar173,0);
            param_10[lVar13] = SUB41(fVar167,0);
          } while (uVar15 - (uVar15 & 1) != lVar10);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar134 = local_1a0[lVar10];
        param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
        param_10[lVar10] = SUB41(fVar134,0);
        return 0;
      }
      fVar122 = (float)uVar143;
      if (fVar122 * 0.999775 < fVar23) {
        if (param_9 == (byte *)0x0) goto LAB_00257080;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar94;
          *param_7 = auVar124._0_8_;
          goto joined_r0x00257130;
        }
        if (local_1a4 == 1) {
          lVar10 = 0;
          goto LAB_00257064;
        }
        lVar10 = 0;
        pfVar12 = local_1a0 + 5;
        pfVar16 = local_1a0 + 1;
        do {
          pfVar20 = pfVar12 + -1;
          fVar23 = *pfVar12;
          pbVar8 = param_9 + lVar10;
          fVar134 = pfVar16[-1];
          fVar129 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar8 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar134,0);
          pbVar8[1] = SUB41(fVar23,0);
          param_10[lVar13] = SUB41(fVar129,0);
        } while (uVar15 - (uVar15 & 1) != lVar10);
        if ((local_1a4 & 1) != 0) {
LAB_00257064:
          fVar134 = local_1a0[lVar10];
          param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
          param_10[lVar10] = SUB41(fVar134,0);
        }
LAB_00257080:
        param_7[1] = (ulong)(uint)fVar94;
        *param_7 = auVar124._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar74._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar74._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar74._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar74._12_4_ = fStack_134 + 0.0;
          auVar97._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar97._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar97._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar97._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar73._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar73._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar73._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar97 = NEON_ext(auVar73,auVar73,8,1);
          auVar74._8_4_ = (float)auVar97._0_4_;
          auVar74._0_8_ = auVar73._0_8_;
          auVar74._12_4_ = 0.0;
          auVar56._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar56._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar56._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar97 = NEON_ext(auVar56,auVar56,8,1);
          auVar97._8_4_ = (float)auVar97._0_4_;
          auVar97._0_8_ = auVar56._0_8_;
          auVar97._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar74._4_4_ = fStack_13c;
          auVar74._0_4_ = local_140;
          auVar74._8_4_ = fStack_138;
          auVar74._12_4_ = fStack_134;
          auVar97._4_4_ = local_180._4_4_;
          auVar97._0_4_ = (float)local_180;
          auVar97._8_4_ = fStack_178;
          auVar97._12_4_ = fStack_174;
        }
joined_r0x00257130:
        if ((param_12 & 1) == 0) {
          auVar89._0_8_ =
               CONCAT44((float)auVar74._4_4_ - fVar77 * fVar168,
                        (float)auVar74._0_4_ - fVar93 * fVar168);
          auVar89._8_4_ = (float)auVar74._8_4_ - fVar94 * fVar168;
          auVar89._12_4_ = (float)auVar74._12_4_ - fVar168 * 0.0;
          auVar82 = NEON_ext(auVar89,auVar89,8,1);
          auVar54._0_4_ = fVar93 * fVar167;
          auVar54._4_4_ = fVar77 * fVar167;
          auVar54._8_4_ = fVar94 * fVar167;
          auVar54._12_4_ = fVar167 * 0.0;
          param_5[1] = (ulong)auVar82._0_4_;
          *param_5 = auVar89._0_8_;
          fVar134 = fVar173;
        }
        else {
          iVar59 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          iVar95 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar90 = (byte)((uint)iVar59 >> 8);
          bVar91 = (byte)((uint)iVar59 >> 0x10);
          bVar92 = (byte)((uint)iVar59 >> 0x18);
          fVar134 = (float)CONCAT13(bVar142 & ~bVar92,
                                    CONCAT12(bVar141 & ~bVar91,
                                             CONCAT11(bVar140 & ~bVar90,bVar139 & ~(byte)iVar59)));
          auVar71._0_8_ =
               CONCAT44((float)auVar74._4_4_ - fVar77 * fVar134,
                        (float)auVar74._0_4_ - fVar93 * fVar134);
          auVar71._8_4_ = (float)auVar74._8_4_ - fVar94 * fVar134;
          auVar71._12_4_ = (float)auVar74._12_4_ - fVar134 * 0.0;
          auVar82 = NEON_ext(auVar71,auVar71,8,1);
          bVar107 = (byte)((uint)iVar95 >> 8);
          bVar108 = (byte)((uint)iVar95 >> 0x10);
          bVar109 = (byte)((uint)iVar95 >> 0x18);
          fVar167 = (float)CONCAT13(bVar138 & ~bVar109,
                                    CONCAT12(bVar137 & ~bVar108,
                                             CONCAT11(bVar136 & ~bVar107,bVar135 & ~(byte)iVar95)));
          param_5[1] = (ulong)auVar82._0_4_;
          *param_5 = auVar71._0_8_;
          fVar173 = fVar134 + fVar167;
          auVar72._0_4_ = fVar93 * fVar167;
          auVar72._4_4_ = fVar77 * fVar167;
          auVar72._8_4_ = fVar94 * fVar167;
          auVar72._12_4_ = fVar167 * 0.0;
          auVar54 = auVar97;
          auVar97 = auVar72;
          fVar134 = (float)(CONCAT17(bVar142 & ~bVar92,
                                     CONCAT16(bVar141 & ~bVar91,
                                              CONCAT15(bVar140 & ~bVar90,
                                                       CONCAT14(bVar139 & ~(byte)iVar59,fVar134))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar138 & ~bVar109,
                                     CONCAT16(bVar137 & ~bVar108,
                                              CONCAT15(bVar136 & ~bVar107,
                                                       CONCAT14(bVar135 & ~(byte)iVar95,fVar167))))
                           >> 0x20);
        }
        auVar55._0_8_ = CONCAT44(auVar54._4_4_ + auVar97._4_4_,auVar54._0_4_ + auVar97._0_4_);
        auVar55._8_4_ = auVar54._8_4_ + auVar97._8_4_;
        auVar55._12_4_ = auVar54._12_4_ + auVar97._12_4_;
        auVar97 = NEON_ext(auVar55,auVar55,8,1);
        param_6[1] = (ulong)auVar97._0_4_;
        *param_6 = auVar55._0_8_;
        *param_8 = CONCAT44((float)(uVar143 >> 0x20) - fVar134,fVar122 - fVar173);
        return 2;
      }
      uVar33 = local_1a4 + 1;
      *(long *)(local_100 + (uVar15 * 2 + -7) * 2) = auVar74._8_8_;
      *(undefined8 *)(local_100 + (uVar15 * 2 + -8) * 2) = auVar74._0_8_;
      *(long *)(local_100 + (uVar15 * 2 + -0xf) * 2) = auVar84._8_8_;
      *(long *)(local_1a0 + uVar15 * 4 + 8) = auVar84._0_8_;
      *(long *)(local_e0[uVar15 - 2] + 8) = auVar97._8_8_;
      *(undefined8 *)(local_100 + uVar15 * 4) = auVar97._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar33;
        auVar97 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar23 = local_100[0];
        fVar77 = local_100[1];
        fVar93 = (float)uStack_f8;
        fVar94 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar97._8_8_ = uStack_f8;
          auVar97._0_4_ = local_100[0];
          auVar97._4_4_ = local_100[1];
          auVar6._4_4_ = fStack_ec;
          auVar6._0_4_ = local_f0;
          auVar6._8_4_ = fStack_e8;
          auVar6._12_4_ = fStack_e4;
          auVar114._0_4_ = local_f0 - fVar23;
          auVar114._4_4_ = fStack_ec - fVar77;
          auVar114._8_4_ = fStack_e8 - fVar93;
          auVar114._12_4_ = fStack_e4 - fVar94;
          fVar76 = local_e0[0]._0_4_;
          auVar105._0_4_ = fVar76 - fVar23;
          fVar22 = local_e0[0]._4_4_;
          auVar105._4_4_ = fVar22 - fVar77;
          fVar27 = local_e0[0]._8_4_;
          auVar105._8_4_ = fVar27 - fVar93;
          auVar105._12_4_ = local_e0[0]._12_4_ - fVar94;
          auVar120 = NEON_ext(auVar114,auVar114,8,1);
          auVar127 = NEON_ext(auVar105,auVar105,8,1);
          fVar130 = auVar114._0_4_ * auVar105._4_4_ - auVar114._4_4_ * auVar105._0_4_;
          uVar123 = NEON_ext(CONCAT44(auVar114._4_4_ * auVar105._8_4_ -
                                      auVar114._8_4_ * auVar105._4_4_,fVar130),
                             CONCAT44(auVar120._4_4_ * auVar105._4_4_ -
                                      auVar114._4_4_ * auVar127._4_4_,
                                      auVar120._0_4_ * auVar105._0_4_ -
                                      auVar114._0_4_ * auVar127._0_4_),4,1);
          fVar116 = (float)uVar123;
          auVar121._0_4_ = fVar116 * fVar116;
          fVar117 = (float)((ulong)uVar123 >> 0x20);
          auVar121._4_4_ = fVar117 * fVar117;
          auVar121._8_4_ = fVar130 * fVar130;
          auVar121._12_4_ = 0;
          auVar120 = NEON_ext(auVar121,auVar121,8,1);
          fVar75 = auVar120._0_4_ + auVar120._4_4_;
          fVar129 = auVar121._0_4_ + auVar121._4_4_ + fVar75;
          uVar123 = CONCAT44(auVar121._0_4_ + auVar121._4_4_ + fVar75,fVar129);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar129) {
            if (fVar129 != 0.0) {
              auVar120 = NEON_ext(auVar6,auVar6,8,1);
              auVar127 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar162 = local_f0 * fVar22 - fStack_ec * fVar76;
              auVar165 = NEON_ext(auVar97,auVar97,8,1);
              uVar118 = NEON_ext(CONCAT44(fStack_ec * fVar27 - fStack_e8 * fVar22,fVar162),
                                 CONCAT44(auVar120._4_4_ * fVar22 - fStack_ec * auVar127._4_4_,
                                          auVar120._0_4_ * fVar76 - local_f0 * auVar127._0_4_),4,1);
              fVar129 = fVar77 * fVar76 - fVar23 * fVar22;
              uVar166 = NEON_ext(CONCAT44(fVar93 * fVar22 - fVar77 * fVar27,fVar129),
                                 CONCAT44(fVar77 * auVar127._4_4_ - auVar165._4_4_ * fVar22,
                                          fVar23 * auVar127._0_4_ - auVar165._0_4_ * fVar76),4,1);
              fVar75 = fVar23 * fStack_ec - fVar77 * local_f0;
              uVar111 = NEON_ext(CONCAT44(fVar77 * fStack_e8 - fVar93 * fStack_ec,fVar75),
                                 CONCAT44(auVar165._4_4_ * fStack_ec - fVar77 * auVar120._4_4_,
                                          auVar165._0_4_ * local_f0 - fVar23 * auVar120._0_4_),4,1);
              auVar148._0_4_ = (float)uVar118 * fVar116;
              auVar148._4_4_ = (float)((ulong)uVar118 >> 0x20) * fVar117;
              auVar148._8_4_ = fVar162 * fVar130;
              auVar148._12_4_ = 0;
              auVar120 = NEON_ext(auVar148,auVar148,8,1);
              auVar153._0_4_ = (float)uVar166 * fVar116;
              auVar153._4_4_ = (float)((ulong)uVar166 >> 0x20) * fVar117;
              auVar153._8_4_ = fVar129 * fVar130;
              auVar153._12_4_ = 0;
              auVar127 = NEON_ext(auVar153,auVar153,8,1);
              fVar129 = auVar148._0_4_ + auVar148._4_4_ + auVar120._0_4_ + auVar120._4_4_;
              auVar158._0_4_ = (float)uVar111 * fVar116;
              auVar158._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar117;
              auVar158._8_4_ = fVar75 * fVar130;
              auVar158._12_4_ = 0;
              fVar75 = auVar153._0_4_ + auVar153._4_4_ + auVar127._0_4_ + auVar127._4_4_;
              auVar120 = NEON_ext(auVar158,auVar158,8,1);
              fVar162 = auVar158._0_4_ + auVar158._4_4_ + auVar120._0_4_ + auVar120._4_4_;
              bVar7 = (0.0 <= fVar129 && 0.0 <= fVar75) && 0.0 <= fVar162;
              auVar159._0_4_ = -(uint)bVar7;
              auVar159._4_4_ = -(uint)bVar7;
              auVar159._8_4_ = -(uint)bVar7;
              auVar159._12_4_ = -(uint)bVar7;
              NEON_ext(auVar159,auVar159,8,1);
              if (CONCAT13((char)auVar159._12_4_,
                           CONCAT12((char)auVar159._8_4_,
                                    CONCAT11((char)auVar159._4_4_,(char)auVar159._0_4_))) == -1) {
                auVar47._0_4_ = fVar23 * fVar116;
                auVar47._4_4_ = fVar77 * fVar117;
                auVar47._8_4_ = fVar93 * fVar130;
                auVar47._12_4_ = fVar94 * 0.0;
                auVar97 = NEON_ext(auVar47,auVar47,8,1);
                uVar111 = NEON_frecpe(uVar123,4);
                uVar118 = NEON_frecps(uVar123,uVar111,4);
                fVar23 = (float)uVar111 * (float)uVar118;
                fVar77 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
                uVar111 = NEON_frecps(uVar123,CONCAT44(fVar77,fVar23),4);
                fVar23 = fVar23 * (float)uVar111;
                fVar77 = fVar77 * (float)((ulong)uVar111 >> 0x20);
                uVar111 = NEON_frecps(uVar123,CONCAT44(fVar77,fVar23),4);
                fVar23 = fVar23 * (float)uVar111;
                fVar77 = fVar77 * (float)((ulong)uVar111 >> 0x20);
                uVar111 = NEON_frecps(uVar123,CONCAT44(fVar77,fVar23),4);
                fVar23 = fVar23 * (float)uVar111;
                uVar123 = NEON_frecps(uVar123,CONCAT44(fVar77 * (float)((ulong)uVar111 >> 0x20),
                                                       fVar23),4);
                fVar23 = (auVar47._0_4_ + auVar47._4_4_ + auVar97._0_4_ + auVar97._4_4_) *
                         fVar23 * (float)uVar123;
                auVar97._0_4_ = fVar116 * fVar23;
                auVar97._4_4_ = fVar117 * fVar23;
                auVar97._8_4_ = fVar130 * fVar23;
                auVar97._12_4_ = 0.0;
              }
              else {
                auVar128._0_4_ = -fVar23 * auVar114._0_4_;
                auVar128._4_4_ = -fVar77 * auVar114._4_4_;
                auVar128._8_4_ = -fVar93 * auVar114._8_4_;
                auVar128._12_4_ = auVar114._12_4_ * 0.0;
                auVar120 = NEON_ext(auVar128,auVar128,8,1);
                fVar130 = auVar120._0_4_ + auVar120._4_4_;
                auVar132._0_4_ = -local_f0 * auVar114._0_4_;
                auVar132._4_4_ = -fStack_ec * auVar114._4_4_;
                auVar132._8_4_ = -fStack_e8 * auVar114._8_4_;
                auVar132._12_4_ = auVar114._12_4_ * 0.0;
                auVar120 = NEON_ext(auVar132,auVar132,8,1);
                fVar28 = auVar120._0_4_ + auVar120._4_4_;
                fVar116 = auVar128._0_4_ + auVar128._4_4_ + fVar130;
                fVar117 = auVar132._0_4_ + auVar132._4_4_ + fVar28;
                fVar28 = auVar132._0_4_ + auVar132._4_4_ + fVar28;
                bVar7 = (0.0 <= fVar116 && fVar162 <= 0.0) && fVar117 <= 0.0;
                auVar154._0_4_ = -(uint)bVar7;
                auVar154._4_4_ = -(uint)bVar7;
                auVar154._8_4_ = -(uint)bVar7;
                auVar154._12_4_ = -(uint)bVar7;
                NEON_ext(auVar154,auVar154,8,1);
                if (CONCAT13((char)auVar154._12_4_,
                             CONCAT12((char)auVar154._8_4_,
                                      CONCAT11((char)auVar154._4_4_,(char)auVar154._0_4_))) == -1) {
                  uVar123 = CONCAT44((auVar128._0_4_ + auVar128._4_4_ + fVar130) - fVar28,
                                     fVar116 - fVar117);
                  uVar111 = NEON_frecpe(uVar123,4);
                  uVar118 = NEON_frecps(uVar123,uVar111,4);
                  fVar129 = (float)uVar111 * (float)uVar118;
                  fVar75 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
                  uVar111 = NEON_frecps(uVar123,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar111;
                  fVar75 = fVar75 * (float)((ulong)uVar111 >> 0x20);
                  uVar111 = NEON_frecps(uVar123,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar111;
                  fVar75 = fVar75 * (float)((ulong)uVar111 >> 0x20);
                  uVar111 = NEON_frecps(uVar123,CONCAT44(fVar75,fVar129),4);
                  fVar129 = fVar129 * (float)uVar111;
                  uVar123 = NEON_frecps(uVar123,CONCAT44(fVar75 * (float)((ulong)uVar111 >> 0x20),
                                                         fVar129),4);
                  fVar116 = fVar116 * (float)(-(uint)(1.1920929e-07 < ABS(fVar116 - fVar117)) &
                                             (uint)(fVar129 * (float)uVar123));
                  pfVar12 = local_1a0;
                  pfVar14 = local_1a0 + 4;
                  auVar48._0_8_ =
                       CONCAT44(fVar77 + auVar114._4_4_ * fVar116,fVar23 + auVar114._0_4_ * fVar116)
                  ;
                  auVar48._8_4_ = fVar93 + auVar114._8_4_ * fVar116;
                  auVar48._12_4_ = fVar94 + auVar114._12_4_ * fVar116;
                  auVar97 = NEON_ext(auVar48,auVar48,8,1);
                  pfVar16 = (float *)&local_180;
                  pfVar20 = &local_140;
                  pauVar18 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar97._8_4_ = (float)auVar97._0_4_;
                  auVar97._0_8_ = auVar48._0_8_;
                  auVar97._12_4_ = 0.0;
LAB_00256950:
                  lVar10 = 1;
                  pauVar19 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar155._0_4_ = -local_f0 * auVar105._0_4_;
                  auVar155._4_4_ = -fStack_ec * auVar105._4_4_;
                  auVar155._8_4_ = -fStack_e8 * auVar105._8_4_;
                  auVar155._12_4_ = auVar105._12_4_ * 0.0;
                  auVar120 = NEON_ext(auVar155,auVar155,8,1);
                  fVar29 = auVar120._0_4_ + auVar120._4_4_;
                  auVar115._0_4_ = auVar114._0_4_ * -fVar76;
                  auVar115._4_4_ = auVar114._4_4_ * -fVar22;
                  auVar115._8_4_ = auVar114._8_4_ * -fVar27;
                  auVar115._12_4_ = auVar114._12_4_ * 0.0;
                  auVar163._0_4_ = auVar105._0_4_ * -fVar76;
                  auVar163._4_4_ = auVar105._4_4_ * -fVar22;
                  auVar163._8_4_ = auVar105._8_4_ * -fVar27;
                  auVar163._12_4_ = auVar105._12_4_ * 0.0;
                  fVar130 = auVar155._0_4_ + auVar155._4_4_ + fVar29;
                  auVar120 = NEON_ext(auVar115,auVar115,8,1);
                  fVar30 = auVar120._0_4_ + auVar120._4_4_;
                  fVar162 = auVar115._0_4_ + auVar115._4_4_ + fVar30;
                  auVar120 = NEON_ext(auVar163,auVar163,8,1);
                  fVar31 = auVar120._0_4_ + auVar120._4_4_;
                  fVar24 = auVar163._0_4_ + auVar163._4_4_ + fVar31;
                  fVar31 = auVar163._0_4_ + auVar163._4_4_ + fVar31;
                  bVar7 = (fVar117 <= fVar130 && fVar129 <= 0.0) && fVar24 <= fVar162;
                  auVar149._0_4_ = -(uint)bVar7;
                  auVar149._4_4_ = -(uint)bVar7;
                  auVar149._8_4_ = -(uint)bVar7;
                  auVar149._12_4_ = -(uint)bVar7;
                  NEON_ext(auVar149,auVar149,8,1);
                  if (CONCAT13((char)auVar149._12_4_,
                               CONCAT12((char)auVar149._8_4_,
                                        CONCAT11((char)auVar149._4_4_,(char)auVar149._0_4_))) == -1)
                  {
                    fVar23 = (fVar130 - fVar117) + (fVar162 - fVar24);
                    uVar123 = CONCAT44(((auVar155._0_4_ + auVar155._4_4_ + fVar29) - fVar28) +
                                       ((auVar115._0_4_ + auVar115._4_4_ + fVar30) - fVar31),fVar23)
                    ;
                    uVar111 = NEON_frecpe(uVar123,4);
                    uVar118 = NEON_frecps(uVar123,uVar111,4);
                    fVar77 = (float)uVar111 * (float)uVar118;
                    fVar93 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar93,fVar77),4);
                    fVar77 = fVar77 * (float)uVar111;
                    fVar93 = fVar93 * (float)((ulong)uVar111 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar93,fVar77),4);
                    fVar77 = fVar77 * (float)uVar111;
                    fVar93 = fVar93 * (float)((ulong)uVar111 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar93,fVar77),4);
                    fVar77 = fVar77 * (float)uVar111;
                    uVar123 = NEON_frecps(uVar123,CONCAT44(fVar93 * (float)((ulong)uVar111 >> 0x20),
                                                           fVar77),4);
                    fVar23 = (fVar130 - fVar117) *
                             (float)(-(uint)(1.1920929e-07 < ABS(fVar23)) &
                                    (uint)(fVar77 * (float)uVar123));
                    auVar49._0_8_ =
                         CONCAT44(fStack_ec + (fVar22 - fStack_ec) * fVar23,
                                  local_f0 + (fVar76 - local_f0) * fVar23);
                    auVar49._8_4_ = fStack_e8 + (fVar27 - fStack_e8) * fVar23;
                    auVar49._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar23;
                    auVar97 = NEON_ext(auVar49,auVar49,8,1);
                    auVar3._8_4_ = auVar97._0_4_;
                    auVar3._0_8_ = auVar49._0_8_;
                    pfVar12 = local_1a0 + 1;
                    pfVar14 = local_1a0 + 5;
                    pfVar16 = (float *)&uStack_170;
                    pfVar20 = (float *)&uStack_130;
                    pauVar18 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar150._0_4_ = -fVar23 * auVar105._0_4_;
                    auVar150._4_4_ = -fVar77 * auVar105._4_4_;
                    auVar150._8_4_ = -fVar93 * auVar105._8_4_;
                    auVar150._12_4_ = auVar105._12_4_ * 0.0;
                    auVar120 = NEON_ext(auVar150,auVar150,8,1);
                    fVar76 = auVar120._0_4_ + auVar120._4_4_;
                    fVar129 = auVar150._0_4_ + auVar150._4_4_ + fVar76;
                    bVar7 = (fVar75 <= 0.0 && 0.0 <= fVar129) && fVar24 <= 0.0;
                    auVar145._0_4_ = -(uint)bVar7;
                    auVar145._4_4_ = -(uint)bVar7;
                    auVar145._8_4_ = -(uint)bVar7;
                    auVar145._12_4_ = -(uint)bVar7;
                    NEON_ext(auVar145,auVar145,8,1);
                    if (CONCAT13((char)auVar145._12_4_,
                                 CONCAT12((char)auVar145._8_4_,
                                          CONCAT11((char)auVar145._4_4_,(char)auVar145._0_4_))) !=
                        -1) {
                      bVar7 = fVar116 <= 0.0 && fVar129 <= 0.0;
                      auVar106._0_4_ = -(uint)bVar7;
                      auVar106._4_4_ = -(uint)bVar7;
                      auVar106._8_4_ = -(uint)bVar7;
                      auVar106._12_4_ = -(uint)bVar7;
                      NEON_ext(auVar106,auVar106,8,1);
                      if (CONCAT13((char)auVar106._12_4_,
                                   CONCAT12((char)auVar106._8_4_,
                                            CONCAT11((char)auVar106._4_4_,(char)auVar106._0_4_))) ==
                          -1) {
                        pfVar12 = local_1a0;
                        pfVar14 = local_1a0 + 4;
                        pfVar16 = (float *)&local_180;
                        pfVar20 = &local_140;
                        pauVar18 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar7 = 0.0 <= fVar117 && fVar130 <= fVar117;
                        auVar45._0_4_ = -(uint)bVar7;
                        auVar45._4_4_ = -(uint)bVar7;
                        auVar45._8_4_ = -(uint)bVar7;
                        auVar45._12_4_ = -(uint)bVar7;
                        NEON_ext(auVar45,auVar45,8,1);
                        iVar59 = CONCAT13((char)auVar45._12_4_,
                                          CONCAT12((char)auVar45._8_4_,
                                                   CONCAT11((char)auVar45._4_4_,(char)auVar45._0_4_)
                                                  ));
                        iVar95 = -(uint)(iVar59 == -1);
                        auVar46._4_4_ = iVar95;
                        auVar46._0_4_ = iVar95;
                        auVar46._8_4_ = iVar95;
                        auVar46._12_4_ = iVar95;
                        local_1a4 = 1;
                        lVar10 = 1;
                        if (iVar59 != -1) {
                          lVar10 = 2;
                        }
                        auVar97 = local_e0[0] ^ (local_e0[0] ^ auVar6) & auVar46;
                        pauVar18 = (undefined1 (*) [16])(local_100 + lVar10 * 4);
                        pfVar20 = local_100 + (lVar10 * 2 + -8) * 2;
                        pfVar16 = local_1a0 + lVar10 * 4 + 8;
                        pfVar14 = local_1a0 + lVar10 + 4;
                        pfVar12 = local_1a0 + lVar10;
                      }
                      goto LAB_00256950;
                    }
                    uVar123 = CONCAT44((auVar150._0_4_ + auVar150._4_4_ + fVar76) - fVar31,
                                       fVar129 - fVar24);
                    uVar111 = NEON_frecpe(uVar123,4);
                    uVar118 = NEON_frecps(uVar123,uVar111,4);
                    fVar75 = (float)uVar111 * (float)uVar118;
                    fVar76 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar111;
                    fVar76 = fVar76 * (float)((ulong)uVar111 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar111;
                    fVar76 = fVar76 * (float)((ulong)uVar111 >> 0x20);
                    uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
                    fVar75 = fVar75 * (float)uVar111;
                    uVar123 = NEON_frecps(uVar123,CONCAT44(fVar76 * (float)((ulong)uVar111 >> 0x20),
                                                           fVar75),4);
                    fVar129 = fVar129 * (float)(-(uint)(1.1920929e-07 < ABS(fVar129 - fVar24)) &
                                               (uint)(fVar75 * (float)uVar123));
                    auVar50._0_8_ =
                         CONCAT44(fVar77 + auVar105._4_4_ * fVar129,
                                  fVar23 + auVar105._0_4_ * fVar129);
                    auVar50._8_4_ = fVar93 + auVar105._8_4_ * fVar129;
                    auVar50._12_4_ = fVar94 + auVar105._12_4_ * fVar129;
                    auVar97 = NEON_ext(auVar50,auVar50,8,1);
                    auVar3._8_4_ = auVar97._0_4_;
                    auVar3._0_8_ = auVar50._0_8_;
                    pfVar12 = local_1a0;
                    pfVar14 = local_1a0 + 4;
                    pfVar16 = (float *)&local_180;
                    pfVar20 = &local_140;
                    pauVar18 = (undefined1 (*) [16])local_100;
                  }
                  auVar97._12_4_ = 0.0;
                  auVar97._0_12_ = auVar3;
                  local_1a4 = 2;
                  lVar10 = 2;
                  pauVar19 = local_e0;
                }
                uStack_f8 = *(undefined8 *)((long)*pauVar18 + 8);
                local_100 = (float  [2])*(undefined8 *)*pauVar18;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar19 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar19 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar19;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
                fStack_138 = (float)*(undefined8 *)(pfVar20 + 2);
                fStack_134 = (float)((ulong)*(undefined8 *)(pfVar20 + 2) >> 0x20);
                local_140 = (float)*(undefined8 *)pfVar20;
                fStack_13c = (float)((ulong)*(undefined8 *)pfVar20 >> 0x20);
                uStack_128 = *(undefined8 *)(local_100 + (lVar10 * 2 + -7) * 2);
                uStack_130 = *(undefined8 *)(local_100 + (lVar10 * 2 + -8) * 2);
                local_1a0[4] = *pfVar14;
                local_1a0[5] = local_1a0[lVar10 + 4];
                fStack_178 = (float)*(undefined8 *)(pfVar16 + 2);
                fStack_174 = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20);
                local_180._0_4_ = (float)*(undefined8 *)pfVar16;
                local_180._4_4_ = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20);
                uStack_168 = *(undefined8 *)(local_100 + (lVar10 * 2 + -0xf) * 2);
                uStack_170 = *(undefined8 *)(local_1a0 + lVar10 * 4 + 8);
                local_1a0[0] = *pfVar12;
                local_1a0[1] = local_1a0[lVar10];
              }
            }
          }
          else {
            auVar66._0_4_ = auVar114._0_4_ * auVar114._0_4_;
            auVar66._4_4_ = auVar114._4_4_ * auVar114._4_4_;
            auVar66._8_4_ = auVar114._8_4_ * auVar114._8_4_;
            auVar66._12_4_ = auVar114._12_4_ * auVar114._12_4_;
            auVar97 = NEON_ext(auVar66,auVar66,8,1);
            fVar75 = auVar97._0_4_ + auVar97._4_4_;
            fVar129 = auVar66._0_4_ + auVar66._4_4_ + fVar75;
            uVar123 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar75,fVar129);
            bVar7 = fVar129 <= 1.1920929e-07;
            auVar86._0_4_ = -(uint)bVar7;
            auVar86._4_4_ = -(uint)bVar7;
            auVar86._8_4_ = -(uint)bVar7;
            auVar86._12_4_ = -(uint)bVar7;
            NEON_ext(auVar86,auVar86,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar86._12_4_,
                         CONCAT12((char)auVar86._8_4_,
                                  CONCAT11((char)auVar86._4_4_,(char)auVar86._0_4_))) != -1) {
              auVar87._0_4_ = -fVar23 * auVar114._0_4_;
              auVar87._4_4_ = -fVar77 * auVar114._4_4_;
              auVar87._8_4_ = -fVar93 * auVar114._8_4_;
              auVar87._12_4_ = auVar114._12_4_ * 0.0;
              auVar97 = NEON_ext(auVar87,auVar87,8,1);
              fVar129 = auVar97._0_4_ + auVar97._4_4_;
              uVar111 = NEON_frecpe(uVar123,4);
              uVar118 = NEON_frecps(uVar123,uVar111,4);
              fVar75 = (float)uVar111 * (float)uVar118;
              fVar76 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
              uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar111;
              fVar76 = fVar76 * (float)((ulong)uVar111 >> 0x20);
              uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar111;
              fVar76 = fVar76 * (float)((ulong)uVar111 >> 0x20);
              uVar111 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
              fVar75 = fVar75 * (float)uVar111;
              fVar76 = fVar76 * (float)((ulong)uVar111 >> 0x20);
              uVar123 = NEON_frecps(uVar123,CONCAT44(fVar76,fVar75),4);
              uVar111 = NEON_fmov(0x3f800000,4);
              uVar123 = NEON_fmin(CONCAT44((auVar87._0_4_ + auVar87._4_4_ + fVar129) *
                                           fVar76 * (float)((ulong)uVar123 >> 0x20),
                                           (auVar87._0_4_ + auVar87._4_4_ + fVar129) *
                                           fVar75 * (float)uVar123),uVar111,4);
              uVar123 = NEON_fmax(uVar123,0,4);
              fVar129 = (float)uVar123;
              fVar75 = auVar114._0_4_ * fVar129;
              fVar76 = auVar114._4_4_ * fVar129;
              fVar22 = auVar114._8_4_ * fVar129;
              fVar129 = auVar114._12_4_ * fVar129;
              goto LAB_002565bc;
            }
LAB_002565d0:
            auVar97._8_8_ = uStack_f8;
            auVar97._0_4_ = local_100[0];
            auVar97._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
        else {
          bVar7 = local_1a4 == 1;
          local_1a4 = uVar33;
          if (bVar7) {
            fVar75 = local_f0 - fVar23;
            fVar76 = fStack_ec - fVar77;
            fVar22 = fStack_e8 - fVar93;
            fVar129 = fStack_e4 - fVar94;
            auVar85._0_4_ = fVar75 * fVar75;
            auVar85._4_4_ = fVar76 * fVar76;
            auVar85._8_4_ = fVar22 * fVar22;
            auVar85._12_4_ = fVar129 * fVar129;
            auVar97 = NEON_ext(auVar85,auVar85,8,1);
            fVar116 = auVar97._0_4_ + auVar97._4_4_;
            fVar27 = auVar85._0_4_ + auVar85._4_4_ + fVar116;
            uVar123 = CONCAT44(auVar85._0_4_ + auVar85._4_4_ + fVar116,fVar27);
            bVar7 = fVar27 <= 1.1920929e-07;
            auVar103._0_4_ = -(uint)bVar7;
            auVar103._4_4_ = -(uint)bVar7;
            auVar103._8_4_ = -(uint)bVar7;
            auVar103._12_4_ = -(uint)bVar7;
            NEON_ext(auVar103,auVar103,8,1);
            if (CONCAT13((char)auVar103._12_4_,
                         CONCAT12((char)auVar103._8_4_,
                                  CONCAT11((char)auVar103._4_4_,(char)auVar103._0_4_))) == -1)
            goto LAB_002565d0;
            auVar104._0_4_ = -fVar23 * fVar75;
            auVar104._4_4_ = -fVar77 * fVar76;
            auVar104._8_4_ = -fVar93 * fVar22;
            auVar104._12_4_ = fVar129 * 0.0;
            auVar97 = NEON_ext(auVar104,auVar104,8,1);
            fVar27 = auVar97._0_4_ + auVar97._4_4_;
            uVar111 = NEON_frecpe(uVar123,4);
            uVar118 = NEON_frecps(uVar123,uVar111,4);
            fVar116 = (float)uVar111 * (float)uVar118;
            fVar117 = (float)((ulong)uVar111 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
            uVar111 = NEON_frecps(uVar123,CONCAT44(fVar117,fVar116),4);
            fVar116 = fVar116 * (float)uVar111;
            fVar117 = fVar117 * (float)((ulong)uVar111 >> 0x20);
            uVar111 = NEON_frecps(uVar123,CONCAT44(fVar117,fVar116),4);
            fVar116 = fVar116 * (float)uVar111;
            fVar117 = fVar117 * (float)((ulong)uVar111 >> 0x20);
            uVar111 = NEON_frecps(uVar123,CONCAT44(fVar117,fVar116),4);
            fVar116 = fVar116 * (float)uVar111;
            fVar117 = fVar117 * (float)((ulong)uVar111 >> 0x20);
            uVar123 = NEON_frecps(uVar123,CONCAT44(fVar117,fVar116),4);
            uVar111 = NEON_fmov(0x3f800000,4);
            uVar123 = NEON_fmin(CONCAT44((auVar104._0_4_ + auVar104._4_4_ + fVar27) *
                                         fVar117 * (float)((ulong)uVar123 >> 0x20),
                                         (auVar104._0_4_ + auVar104._4_4_ + fVar27) *
                                         fVar116 * (float)uVar123),uVar111,4);
            uVar123 = NEON_fmax(uVar123,0,4);
            fVar27 = (float)uVar123;
            fVar75 = fVar75 * fVar27;
            fVar76 = fVar76 * fVar27;
            fVar22 = fVar22 * fVar27;
            fVar129 = fVar129 * fVar27;
LAB_002565bc:
            auVar44._0_8_ = CONCAT44(fVar77 + fVar76,fVar23 + fVar75);
            auVar44._8_4_ = fVar93 + fVar22;
            auVar44._12_4_ = fVar94 + fVar129;
            auVar97 = NEON_ext(auVar44,auVar44,8,1);
            auVar97._8_4_ = (float)auVar97._0_4_;
            auVar97._0_8_ = auVar44._0_8_;
            auVar97._12_4_ = 0.0;
          }
        }
      }
      fVar93 = auVar97._0_4_;
      auVar67._0_4_ = fVar93 * fVar93;
      fVar94 = auVar97._4_4_;
      auVar67._4_4_ = fVar94 * fVar94;
      fVar129 = auVar97._8_4_;
      auVar67._8_4_ = fVar129 * fVar129;
      auVar67._12_4_ = auVar97._12_4_ * auVar97._12_4_;
      auVar120 = NEON_ext(auVar67,auVar67,8,1);
      uStack_b8 = auVar97._8_8_;
      local_c0 = auVar97._0_8_;
      fVar77 = auVar120._0_4_ + auVar120._4_4_;
      fVar23 = auVar67._0_4_ + auVar67._4_4_ + fVar77;
      fVar77 = auVar67._0_4_ + auVar67._4_4_ + fVar77;
      uVar78 = CONCAT44(fVar77,fVar23);
      uVar123 = NEON_frsqrte(uVar78,4);
      fVar75 = (float)uVar123;
      fVar76 = (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar123;
      fVar76 = fVar76 * (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar123;
      fVar76 = fVar76 * (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      fVar75 = fVar75 * (float)uVar123;
      fVar76 = fVar76 * (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frsqrts(CONCAT44(fVar76 * fVar76,fVar75 * fVar75),uVar78,4);
      uVar15 = CONCAT44(fVar77 * fVar76 * (float)((ulong)uVar123 >> 0x20),
                        fVar23 * fVar75 * (float)uVar123);
      uVar15 = uVar15 ^ (uVar15 ^ uVar78) & CONCAT44(-(uint)(fVar23 == 0.0),-(uint)(fVar23 == 0.0));
      uVar123 = NEON_frecpe(uVar15,4);
      uVar111 = NEON_frecps(uVar15,uVar123,4);
      fVar23 = (float)uVar123 * (float)uVar111;
      fVar77 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
      uVar123 = NEON_frecps(uVar15,CONCAT44(fVar77,fVar23),4);
      fVar23 = fVar23 * (float)uVar123;
      fVar77 = fVar77 * (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frecps(uVar15,CONCAT44(fVar77,fVar23),4);
      fVar23 = fVar23 * (float)uVar123;
      fVar77 = fVar77 * (float)((ulong)uVar123 >> 0x20);
      uVar123 = NEON_frecps(uVar15,CONCAT44(fVar77,fVar23),4);
      fVar23 = fVar23 * (float)uVar123;
      uVar123 = NEON_frecps(uVar15,CONCAT44(fVar77 * (float)((ulong)uVar123 >> 0x20),fVar23),4);
      fVar23 = fVar23 * (float)uVar123;
      auVar124._0_4_ = fVar93 * fVar23;
      auVar124._4_4_ = fVar94 * fVar23;
      auVar124._8_4_ = fVar129 * fVar23;
      bVar7 = (float)uVar15 < fVar122;
      bVar4 = fVar134 < (float)uVar15 && bVar7;
      auVar88._0_4_ = -(uint)bVar4;
      auVar88._4_4_ = -(uint)bVar4;
      auVar88._8_4_ = -(uint)bVar4;
      auVar88._12_4_ = -(uint)bVar4;
      NEON_ext(auVar88,auVar88,8,1);
    } while (CONCAT13((char)auVar88._12_4_,
                      CONCAT12((char)auVar88._8_4_,CONCAT11((char)auVar88._4_4_,(char)auVar88._0_4_)
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
  auVar63._0_4_ = (int)((uint)(ushort)uVar34 << 0x1f) >> 0x1f;
  auVar63._4_4_ = (int)((uint)uVar25 << 0x1f) >> 0x1f;
  auVar63._8_4_ = (int)((uint)uVar26 << 0x1f) >> 0x1f;
  auVar63._12_4_ = (int)((uint)uVar32 << 0x1f) >> 0x1f;
  auVar64 = NEON_ext(auVar63,auVar63,8,1);
  auVar42._0_4_ =
       (float)CONCAT13((char)((short)(uVar32 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar26 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar25 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar34 << 0xf) >> 0xf))));
  auVar42[4] = auVar64[0];
  auVar42[5] = auVar64[2];
  auVar42[6] = auVar64[4];
  auVar42[7] = auVar64[6];
  auVar42._8_8_ = 0;
  if (auVar42._0_4_ != -NAN) {
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
          fVar173 = *pfVar12;
          pbVar8 = param_9 + lVar10;
          fVar134 = pfVar16[-1];
          fVar167 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar8 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar134,0);
          pbVar8[1] = SUB41(fVar173,0);
          param_10[lVar13] = SUB41(fVar167,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar10);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar134 = local_1a0[lVar10];
      param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
      param_10[lVar10] = SUB41(fVar134,0);
    }
    return 5;
  }
  local_c0 = auVar82._0_8_;
  uStack_b8 = auVar82._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_00256d40:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar42._0_4_ =
           local_140 +
           ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0];
      auVar42._4_4_ =
           fStack_13c +
           (uStack_130._4_4_ - fStack_13c) * local_a8[0] + (fStack_11c - fStack_13c) * local_b0[0];
      auVar42._8_4_ =
           fStack_138 +
           ((float)uStack_128 - fStack_138) * local_a8[0] + (fStack_118 - fStack_138) * local_b0[0];
      auVar42._12_4_ = fStack_134 + 0.0;
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
      goto LAB_00256e50;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar51._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar51._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar51._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar97 = NEON_ext(auVar51,auVar51,8,1);
      auVar42._8_4_ = (float)auVar97._0_4_;
      auVar42._0_8_ = auVar51._0_8_;
      auVar42._12_4_ = 0.0;
      auVar68._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar68._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar68._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar97 = NEON_ext(auVar68,auVar68,8,1);
      auVar64._8_4_ = (float)auVar97._0_4_;
      auVar64._0_8_ = auVar68._0_8_;
      auVar64._12_4_ = 0.0;
      goto LAB_00256e50;
    }
    if (local_1a4 != 1) goto LAB_00256e50;
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
          pbVar8 = param_9 + lVar10;
          fVar134 = pfVar16[-1];
          fVar77 = *pfVar16;
          lVar13 = lVar10 + 1;
          lVar10 = lVar10 + 2;
          pfVar12 = pfVar12 + 2;
          pfVar16 = pfVar16 + 2;
          *pbVar8 = SUB41(*pfVar20,0);
          (param_10 + lVar13)[-1] = SUB41(fVar134,0);
          pbVar8[1] = SUB41(fVar23,0);
          param_10[lVar13] = SUB41(fVar77,0);
        } while ((ulong)uVar33 - ((ulong)uVar33 & 1) != lVar10);
        if ((uVar33 & 1) == 0) goto LAB_00256d40;
      }
      fVar134 = local_1a0[lVar10];
      param_9[lVar10] = SUB41(local_1a0[lVar10 + 4],0);
      param_10[lVar10] = SUB41(fVar134,0);
      goto LAB_00256d40;
    }
  }
  auVar42._4_4_ = fStack_13c;
  auVar42._0_4_ = local_140;
  auVar42._8_4_ = fStack_138;
  auVar42._12_4_ = fStack_134;
  auVar64._4_4_ = local_180._4_4_;
  auVar64._0_4_ = (float)local_180;
  auVar64._8_4_ = fStack_178;
  auVar64._12_4_ = fStack_174;
LAB_00256e50:
  uVar34 = NEON_frecpe(uVar143,4);
  uVar110 = NEON_frecps(uVar143,uVar34,4);
  fVar134 = (float)uVar34 * (float)uVar110;
  fVar23 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
  uVar34 = NEON_frecps(uVar143,CONCAT44(fVar23,fVar134),4);
  fVar134 = fVar134 * (float)uVar34;
  fVar23 = fVar23 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar143,CONCAT44(fVar23,fVar134),4);
  fVar134 = fVar134 * (float)uVar34;
  fVar23 = fVar23 * (float)((ulong)uVar34 >> 0x20);
  uVar34 = NEON_frecps(uVar143,CONCAT44(fVar23,fVar134),4);
  fVar134 = fVar134 * (float)uVar34;
  uVar34 = NEON_frecps(uVar143,CONCAT44(fVar23 * (float)((ulong)uVar34 >> 0x20),fVar134),4);
  fVar134 = fVar134 * (float)uVar34;
  local_c0._0_4_ = (float)local_c0 * fVar134;
  local_c0._4_4_ = local_c0._4_4_ * fVar134;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar134;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar134 = (float)uVar143;
  fVar23 = (float)(uVar143 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar53._0_8_ =
         CONCAT44(auVar42._4_4_ - local_c0._4_4_ * fVar168,auVar42._0_4_ - (float)local_c0 * fVar168
                 );
    auVar53._8_4_ = auVar42._8_4_ - (float)uStack_b8 * fVar168;
    auVar53._12_4_ = auVar42._12_4_ - fVar168 * 0.0;
    auVar70._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar167,auVar64._0_4_ + (float)local_c0 * fVar167
                 );
    auVar70._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar167;
    auVar70._12_4_ = auVar64._12_4_ + fVar167 * 0.0;
    auVar97 = NEON_ext(auVar53,auVar53,8,1);
    auVar82 = NEON_ext(auVar70,auVar70,8,1);
    param_5[1] = (ulong)auVar97._0_4_;
    *param_5 = auVar53._0_8_;
    param_6[1] = (ulong)auVar82._0_4_;
    *param_6 = auVar70._0_8_;
    *param_8 = CONCAT44(fVar23 - fVar173,fVar134 - fVar173);
  }
  else {
    iVar59 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar95 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar90 = (byte)((uint)iVar59 >> 8);
    bVar91 = (byte)((uint)iVar59 >> 0x10);
    bVar92 = (byte)((uint)iVar59 >> 0x18);
    fVar167 = (float)CONCAT13(bVar142 & ~bVar92,
                              CONCAT12(bVar141 & ~bVar91,
                                       CONCAT11(bVar140 & ~bVar90,bVar139 & ~(byte)iVar59)));
    bVar107 = (byte)((uint)iVar95 >> 8);
    bVar108 = (byte)((uint)iVar95 >> 0x10);
    bVar109 = (byte)((uint)iVar95 >> 0x18);
    fVar168 = (float)CONCAT13(bVar138 & ~bVar109,
                              CONCAT12(bVar137 & ~bVar108,
                                       CONCAT11(bVar136 & ~bVar107,bVar135 & ~(byte)iVar95)));
    auVar52._0_8_ =
         CONCAT44(auVar42._4_4_ - local_c0._4_4_ * fVar167,auVar42._0_4_ - (float)local_c0 * fVar167
                 );
    auVar52._8_4_ = auVar42._8_4_ - (float)uStack_b8 * fVar167;
    auVar52._12_4_ = auVar42._12_4_ - fVar167 * 0.0;
    auVar69._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar168,auVar64._0_4_ + (float)local_c0 * fVar168
                 );
    auVar69._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar168;
    auVar69._12_4_ = auVar64._12_4_ + fVar168 * 0.0;
    auVar97 = NEON_ext(auVar52,auVar52,8,1);
    auVar82 = NEON_ext(auVar69,auVar69,8,1);
    param_5[1] = (ulong)auVar97._0_4_;
    *param_5 = auVar52._0_8_;
    param_6[1] = (ulong)auVar82._0_4_;
    *param_6 = auVar69._0_8_;
    *param_8 = CONCAT44(fVar23 - ((float)(CONCAT17(bVar142 & ~bVar92,
                                                   CONCAT16(bVar141 & ~bVar91,
                                                            CONCAT15(bVar140 & ~bVar90,
                                                                     CONCAT14(bVar139 & ~(byte)
                                                  iVar59,fVar167)))) >> 0x20) +
                                 (float)(CONCAT17(bVar138 & ~bVar109,
                                                  CONCAT16(bVar137 & ~bVar108,
                                                           CONCAT15(bVar136 & ~bVar107,
                                                                    CONCAT14(bVar135 & ~(byte)iVar95
                                                                             ,fVar168)))) >> 0x20)),
                        fVar134 - (fVar167 + fVar168));
    if (fVar134 <= fVar173 + (float)uVar133) {
      return 2;
    }
  }
  return 4;
}


