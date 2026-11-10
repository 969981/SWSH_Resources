/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0025df50; name: FUN_0025df50
 */


/* WARNING: Removing unreachable block (ram,0x0025f66c) */
/* WARNING: Removing unreachable block (ram,0x0025ecdc) */
/* WARNING: Removing unreachable block (ram,0x0025f6f0) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0025df50(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
            byte *param_9,byte *param_10,byte *param_11,byte param_12)

{
  byte *pbVar1;
  uint *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  float *pfVar17;
  float *pfVar18;
  undefined1 (*pauVar19) [16];
  byte *pbVar20;
  byte *pbVar21;
  float fVar22;
  ushort uVar24;
  float fVar23;
  ushort uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ushort uVar33;
  float fVar30;
  float fVar31;
  float fVar32;
  uint uVar34;
  undefined8 uVar35;
  uint uVar61;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar60;
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
  int iVar62;
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
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  int iVar91;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar102 [12];
  float fVar108;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar109;
  undefined8 uVar110;
  float fVar117;
  undefined1 auVar111 [16];
  float fVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar118;
  float fVar119;
  undefined1 auVar120 [12];
  float fVar126;
  float fVar127;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar128;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined8 uVar135;
  float fVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  float fVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined8 uVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  float fVar160;
  undefined8 uVar161;
  float fVar167;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  ulong uVar168;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  float fVar176;
  undefined8 uVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar181;
  float fVar182;
  float fVar187;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined8 uVar191;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  float fVar195;
  float fVar196;
  byte local_1e0;
  byte bStack_1df;
  byte bStack_1de;
  byte bStack_1dd;
  byte bStack_1dc;
  byte bStack_1db;
  byte bStack_1da;
  byte bStack_1d9;
  byte bStack_1d8;
  byte bStack_1d7;
  byte bStack_1d6;
  byte bStack_1d5;
  float local_1c0;
  float fStack_1bc;
  ulong local_1b0;
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
  
  lVar9 = *(long *)(param_1 + 8);
  lVar12 = *(long *)(param_2 + 8);
  fVar196 = *(float *)(lVar9 + 0x10);
  uVar35 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar12 + 0x14),*(undefined4 *)(lVar12 + 0x14)),4);
  fVar195 = *(float *)(lVar12 + 0x10);
  fVar136 = (float)uVar35 * 0.1;
  fVar118 = fVar196 + fVar195;
  uVar35 = *param_4;
  local_1a4 = 0;
  local_1b0 = 0;
  uVar14 = (ulong)*param_11;
  if (uVar14 == 0) {
    auVar146 = *param_3;
    auVar188._0_4_ = auVar146._0_4_ * auVar146._0_4_;
    auVar188._4_4_ = auVar146._4_4_ * auVar146._4_4_;
    auVar188._8_4_ = auVar146._8_4_ * auVar146._8_4_;
    auVar188._12_4_ = auVar146._12_4_ * auVar146._12_4_;
    auVar185 = NEON_ext(auVar188,auVar188,8,1);
    auVar185._0_4_ =
         -(uint)(0.0 < auVar188._0_4_ + auVar188._4_4_ + auVar185._0_4_ + auVar185._4_4_);
    auVar194._8_8_ = _UNK_01d4ae58;
    auVar194._0_8_ = _DAT_01d4ae50;
    uVar168 = 0x7f7fffff7f7fffff;
    auVar185._4_4_ = auVar185._0_4_;
    auVar185._8_4_ = auVar185._0_4_;
    auVar185._12_4_ = auVar185._0_4_;
    auVar146 = auVar194 ^ (auVar194 ^ auVar146) & auVar185;
    fVar127 = auVar146._0_4_;
    auVar192._0_4_ = fVar127 * fVar127;
    fVar101 = auVar146._4_4_;
    auVar192._4_4_ = fVar101 * fVar101;
    fVar108 = auVar146._8_4_;
    auVar192._8_4_ = fVar108 * fVar108;
    auVar192._12_4_ = auVar146._12_4_ * auVar146._12_4_;
    auVar188 = NEON_ext(auVar192,auVar192,8,1);
    uStack_b8 = auVar146._8_8_;
    local_c0 = auVar146._0_8_;
    fVar126 = auVar188._0_4_ + auVar188._4_4_;
    fVar119 = auVar192._0_4_ + auVar192._4_4_ + fVar126;
    fVar126 = auVar192._0_4_ + auVar192._4_4_ + fVar126;
    uVar14 = CONCAT44(fVar126,fVar119);
    uVar135 = NEON_frsqrte(uVar14,4);
    fVar29 = (float)uVar135;
    fVar128 = (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar135;
    fVar128 = fVar128 * (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar135;
    fVar128 = fVar128 * (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar135;
    fVar128 = fVar128 * (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    uVar11 = CONCAT44(fVar126 * fVar128 * (float)((ulong)uVar135 >> 0x20),
                      fVar119 * fVar29 * (float)uVar135);
    uVar11 = uVar11 ^ (uVar11 ^ uVar14) & CONCAT44(-(uint)(fVar119 == 0.0),-(uint)(fVar119 == 0.0));
    uVar135 = NEON_frecpe(uVar11,4);
    uVar161 = NEON_frecps(uVar11,uVar135,4);
    fVar119 = (float)uVar135 * (float)uVar161;
    fVar126 = (float)((ulong)uVar135 >> 0x20) * (float)((ulong)uVar161 >> 0x20);
    uVar135 = NEON_frecps(uVar11,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar135;
    fVar126 = fVar126 * (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frecps(uVar11,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar135;
    fVar126 = fVar126 * (float)((ulong)uVar135 >> 0x20);
    uVar135 = NEON_frecps(uVar11,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar135;
    uVar135 = NEON_frecps(uVar11,CONCAT44(fVar126 * (float)((ulong)uVar135 >> 0x20),fVar119),4);
    fVar119 = fVar119 * (float)uVar135;
    auVar188 = ZEXT816(0);
    auVar102._0_4_ = fVar127 * fVar119;
    auVar102._4_4_ = fVar101 * fVar119;
    auVar102._8_4_ = fVar108 * fVar119;
    iVar62 = -1;
  }
  else {
    auVar111 = ZEXT816(0);
    pfVar17 = local_1a0 + 4;
    pfVar15 = local_1a0;
    pbVar20 = param_10;
    pbVar21 = param_9;
    uVar135 = uVar35;
    while( true ) {
      uVar14 = uVar14 - 1;
      bVar137 = *pbVar21;
      bVar138 = *pbVar20;
      *pfVar17 = (float)(uint)bVar137;
      *pfVar15 = (float)(uint)bVar138;
      pfVar13 = *(float **)(param_1 + 0x10);
      puVar2 = (uint *)(PTR_DAT_02711e70 + (ulong)bVar137 * 0x10);
      fVar119 = -*(float *)(lVar9 + 0x30);
      fVar126 = -*(float *)(lVar9 + 0x34);
      fVar127 = -*(float *)(lVar9 + 0x38);
      fVar119 = (float)((uint)fVar119 ^ ((uint)fVar119 ^ (uint)*(float *)(lVar9 + 0x30)) & *puVar2);
      fVar126 = (float)((uint)fVar126 ^ ((uint)fVar126 ^ (uint)*(float *)(lVar9 + 0x34)) & puVar2[1]
                       );
      fVar127 = (float)((uint)fVar127 ^ ((uint)fVar127 ^ (uint)*(float *)(lVar9 + 0x38)) & puVar2[2]
                       );
      fVar101 = pfVar13[0xc] + pfVar13[8] * fVar127 + *pfVar13 * fVar119 + pfVar13[4] * fVar126;
      fVar108 = pfVar13[0xd] + pfVar13[9] * fVar127 + pfVar13[1] * fVar119 + pfVar13[5] * fVar126;
      auVar103._0_8_ = CONCAT44(fVar108,fVar101);
      auVar103._8_4_ =
           pfVar13[0xe] + pfVar13[10] * fVar127 + pfVar13[2] * fVar119 + pfVar13[6] * fVar126;
      auVar103._12_4_ = pfVar13[0xf] + 0.0;
      fVar119 = *(float *)(lVar12 + 0x10);
      if (fVar119 <= 0.0) {
        auVar146 = *(undefined1 (*) [16])(lVar12 + 0x50);
        pfVar13 = (float *)(*(long *)(lVar12 + 0xa0) + (ulong)bVar138 * 0xc);
        fVar119 = *pfVar13;
        fVar126 = pfVar13[1];
        fVar127 = pfVar13[2];
        auVar120._0_4_ =
             *(float *)(lVar12 + 0x30) * fVar119 + *(float *)(lVar12 + 0x40) * fVar126 +
             auVar146._0_4_ * fVar127;
        auVar120._4_4_ =
             *(float *)(lVar12 + 0x34) * fVar119 + *(float *)(lVar12 + 0x44) * fVar126 +
             auVar146._4_4_ * fVar127;
        auVar120._8_4_ =
             *(float *)(lVar12 + 0x38) * fVar119 + *(float *)(lVar12 + 0x48) * fVar126 +
             auVar146._8_4_ * fVar127;
      }
      else {
        lVar10 = *(long *)(lVar12 + 0x90);
        lVar9 = *(long *)(lVar10 + 0x28);
        pfVar13 = (float *)(*(long *)(lVar12 + 0xa0) + (ulong)(uint)bVar138 * 0xc);
        fVar126 = *pfVar13;
        fVar127 = pfVar13[1];
        fVar29 = pfVar13[2];
        pbVar1 = (byte *)(lVar9 + (ulong)*(byte *)(lVar10 + 0x27) * 0x14 +
                          (ulong)*(byte *)(lVar10 + 0x26) * 0xc +
                          ((ulong)*(ushort *)(lVar10 + 0x24) & 0x7fff) * 2 + (ulong)bVar138 * 3);
        fVar128 = *(float *)(lVar12 + 0x60);
        fVar145 = *(float *)(lVar12 + 100);
        fVar181 = *(float *)(lVar12 + 0x68);
        fVar187 = *(float *)(lVar12 + 0x6c);
        pfVar13 = (float *)(lVar9 + (ulong)*pbVar1 * 0x14);
        fVar27 = *pfVar13;
        fVar28 = pfVar13[1];
        fVar176 = pfVar13[2];
        fVar109 = *(float *)(lVar12 + 0x30) * fVar126 + *(float *)(lVar12 + 0x40) * fVar127 +
                  *(float *)(lVar12 + 0x50) * fVar29;
        fVar116 = *(float *)(lVar12 + 0x34) * fVar126 + *(float *)(lVar12 + 0x44) * fVar127 +
                  *(float *)(lVar12 + 0x54) * fVar29;
        fVar117 = *(float *)(lVar12 + 0x38) * fVar126 + *(float *)(lVar12 + 0x48) * fVar127 +
                  *(float *)(lVar12 + 0x58) * fVar29;
        auVar129._0_4_ = fVar128 * fVar27;
        auVar129._4_4_ = fVar145 * fVar28;
        auVar129._8_4_ = fVar181 * fVar176;
        auVar129._12_4_ = fVar187 * 0.0;
        auVar146 = NEON_ext(auVar129,auVar129,8,1);
        fVar26 = auVar146._0_4_ + auVar146._4_4_;
        fVar126 = *(float *)(lVar12 + 0x70);
        fVar127 = *(float *)(lVar12 + 0x74);
        fVar29 = *(float *)(lVar12 + 0x78);
        fVar182 = *(float *)(lVar12 + 0x7c);
        fVar30 = *(float *)(lVar12 + 0x80);
        fVar23 = *(float *)(lVar12 + 0x84);
        fVar31 = *(float *)(lVar12 + 0x88);
        fVar32 = *(float *)(lVar12 + 0x8c);
        auVar169._0_4_ = fVar27 * fVar126;
        auVar169._4_4_ = fVar28 * fVar127;
        auVar169._8_4_ = fVar176 * fVar29;
        auVar169._12_4_ = fVar182 * 0.0;
        auVar146 = NEON_ext(auVar169,auVar169,8,1);
        auVar152._0_4_ = fVar27 * fVar30;
        auVar152._4_4_ = fVar28 * fVar23;
        auVar152._8_4_ = fVar176 * fVar31;
        auVar152._12_4_ = fVar32 * 0.0;
        fVar27 = auVar146._0_4_ + auVar146._4_4_;
        auVar146 = NEON_ext(auVar152,auVar152,8,1);
        fVar22 = auVar152._0_4_ + auVar152._4_4_ + auVar146._0_4_ + auVar146._4_4_;
        uVar161 = NEON_ext(CONCAT44(auVar129._0_4_ + auVar129._4_4_ + fVar26,
                                    auVar129._0_4_ + auVar129._4_4_ + fVar26),
                           CONCAT44(auVar169._0_4_ + auVar169._4_4_ + fVar27,
                                    auVar169._0_4_ + auVar169._4_4_ + fVar27),4,1);
        fVar160 = (float)uVar161;
        auVar153._0_4_ = fVar160 * fVar160;
        fVar167 = (float)((ulong)uVar161 >> 0x20);
        auVar153._4_4_ = fVar167 * fVar167;
        auVar153._8_4_ = fVar22 * fVar22;
        auVar153._12_4_ = 0;
        auVar146 = NEON_ext(auVar153,auVar153,8,1);
        fVar28 = auVar146._0_4_ + auVar146._4_4_;
        fVar27 = auVar153._0_4_ + auVar153._4_4_ + fVar28;
        fVar28 = auVar153._0_4_ + auVar153._4_4_ + fVar28;
        uVar11 = CONCAT44(fVar28,fVar27);
        uVar161 = NEON_frsqrte(uVar11,4);
        fVar176 = (float)uVar161;
        fVar26 = (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        uVar168 = CONCAT44(fVar28 * fVar26 * (float)((ulong)uVar161 >> 0x20),
                           fVar27 * fVar176 * (float)uVar161);
        uVar168 = uVar168 ^ (uVar168 ^ uVar11) &
                            CONCAT44(-(uint)(fVar27 == 0.0),-(uint)(fVar27 == 0.0));
        uVar161 = NEON_frecpe(uVar168,4);
        uVar177 = NEON_frecps(uVar168,uVar161,4);
        fVar26 = (float)uVar161 * (float)uVar177;
        fVar27 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27 * (float)((ulong)uVar161 >> 0x20),fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        pfVar13 = (float *)(lVar9 + (ulong)pbVar1[1] * 0x14);
        fVar27 = *pfVar13;
        fVar28 = pfVar13[1];
        fVar176 = pfVar13[2];
        auVar154._0_4_ = fVar160 * fVar26;
        auVar154._4_4_ = fVar167 * fVar26;
        auVar154._8_4_ = fVar22 * fVar26;
        auVar178._0_4_ = fVar128 * fVar27;
        auVar178._4_4_ = fVar145 * fVar28;
        auVar178._8_4_ = fVar181 * fVar176;
        auVar178._12_4_ = fVar187 * 0.0;
        auVar146 = NEON_ext(auVar178,auVar178,8,1);
        auVar154._12_4_ = 0;
        fVar26 = auVar146._0_4_ + auVar146._4_4_;
        auVar183._0_4_ = fVar126 * fVar27;
        auVar183._4_4_ = fVar127 * fVar28;
        auVar183._8_4_ = fVar29 * fVar176;
        auVar183._12_4_ = fVar182 * 0.0;
        auVar146 = NEON_ext(auVar183,auVar183,8,1);
        auVar170._0_4_ = fVar30 * fVar27;
        auVar170._4_4_ = fVar23 * fVar28;
        auVar170._8_4_ = fVar31 * fVar176;
        auVar170._12_4_ = fVar32 * 0.0;
        fVar27 = auVar146._0_4_ + auVar146._4_4_;
        auVar146 = NEON_ext(auVar170,auVar170,8,1);
        fVar22 = auVar170._0_4_ + auVar170._4_4_ + auVar146._0_4_ + auVar146._4_4_;
        uVar161 = NEON_ext(CONCAT44(auVar178._0_4_ + auVar178._4_4_ + fVar26,
                                    auVar178._0_4_ + auVar178._4_4_ + fVar26),
                           CONCAT44(auVar183._0_4_ + auVar183._4_4_ + fVar27,
                                    auVar183._0_4_ + auVar183._4_4_ + fVar27),4,1);
        fVar160 = (float)uVar161;
        auVar171._0_4_ = fVar160 * fVar160;
        fVar167 = (float)((ulong)uVar161 >> 0x20);
        auVar171._4_4_ = fVar167 * fVar167;
        auVar171._8_4_ = fVar22 * fVar22;
        auVar171._12_4_ = 0;
        auVar146 = NEON_ext(auVar171,auVar171,8,1);
        fVar28 = auVar146._0_4_ + auVar146._4_4_;
        fVar27 = auVar171._0_4_ + auVar171._4_4_ + fVar28;
        fVar28 = auVar171._0_4_ + auVar171._4_4_ + fVar28;
        uVar11 = CONCAT44(fVar28,fVar27);
        uVar161 = NEON_frsqrte(uVar11,4);
        fVar176 = (float)uVar161;
        fVar26 = (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        fVar176 = fVar176 * (float)uVar161;
        fVar26 = fVar26 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar26 * fVar26,fVar176 * fVar176),uVar11,4);
        uVar168 = CONCAT44(fVar28 * fVar26 * (float)((ulong)uVar161 >> 0x20),
                           fVar27 * fVar176 * (float)uVar161);
        uVar168 = uVar168 ^ (uVar168 ^ uVar11) &
                            CONCAT44(-(uint)(fVar27 == 0.0),-(uint)(fVar27 == 0.0));
        uVar161 = NEON_frecpe(uVar168,4);
        uVar177 = NEON_frecps(uVar168,uVar161,4);
        fVar26 = (float)uVar161 * (float)uVar177;
        fVar27 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27,fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar27 * (float)((ulong)uVar161 >> 0x20),fVar26),4);
        fVar26 = fVar26 * (float)uVar161;
        pfVar13 = (float *)(lVar9 + (ulong)pbVar1[2] * 0x14);
        fVar27 = *pfVar13;
        fVar28 = pfVar13[1];
        fVar176 = pfVar13[2];
        auVar172._0_4_ = fVar160 * fVar26;
        auVar172._4_4_ = fVar167 * fVar26;
        auVar172._8_4_ = fVar22 * fVar26;
        auVar121._0_4_ = fVar128 * fVar27;
        auVar121._4_4_ = fVar145 * fVar28;
        auVar121._8_4_ = fVar181 * fVar176;
        auVar121._12_4_ = fVar187 * 0.0;
        auVar146 = NEON_ext(auVar121,auVar121,8,1);
        auVar130._0_4_ = fVar126 * fVar27;
        auVar130._4_4_ = fVar127 * fVar28;
        auVar130._8_4_ = fVar29 * fVar176;
        auVar130._12_4_ = fVar182 * 0.0;
        fVar127 = auVar146._0_4_ + auVar146._4_4_;
        auVar147._0_4_ = fVar30 * fVar27;
        auVar147._4_4_ = fVar23 * fVar28;
        auVar147._8_4_ = fVar31 * fVar176;
        auVar147._12_4_ = fVar32 * 0.0;
        auVar188 = NEON_ext(auVar130,auVar130,8,1);
        auVar146 = NEON_ext(auVar147,auVar147,8,1);
        fVar29 = auVar188._0_4_ + auVar188._4_4_;
        auVar172._12_4_ = 0;
        auVar192 = NEON_ext(auVar172,auVar172,8,1);
        fVar126 = auVar147._0_4_ + auVar147._4_4_ + auVar146._0_4_ + auVar146._4_4_;
        uVar161 = NEON_ext(CONCAT44(auVar121._0_4_ + auVar121._4_4_ + fVar127,
                                    auVar121._0_4_ + auVar121._4_4_ + fVar127),
                           CONCAT44(auVar130._0_4_ + auVar130._4_4_ + fVar29,
                                    auVar130._0_4_ + auVar130._4_4_ + fVar29),4,1);
        fVar128 = (float)uVar161;
        auVar131._0_4_ = fVar128 * fVar128;
        fVar145 = (float)((ulong)uVar161 >> 0x20);
        auVar131._4_4_ = fVar145 * fVar145;
        auVar131._8_4_ = fVar126 * fVar126;
        auVar131._12_4_ = 0;
        auVar146 = NEON_ext(auVar131,auVar131,8,1);
        fVar29 = auVar146._0_4_ + auVar146._4_4_;
        fVar127 = auVar131._0_4_ + auVar131._4_4_ + fVar29;
        fVar29 = auVar131._0_4_ + auVar131._4_4_ + fVar29;
        uVar11 = CONCAT44(fVar29,fVar127);
        uVar161 = NEON_frsqrte(uVar11,4);
        fVar181 = (float)uVar161;
        fVar187 = (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar187 * fVar187,fVar181 * fVar181),uVar11,4);
        fVar181 = fVar181 * (float)uVar161;
        fVar187 = fVar187 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar187 * fVar187,fVar181 * fVar181),uVar11,4);
        fVar181 = fVar181 * (float)uVar161;
        fVar187 = fVar187 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar187 * fVar187,fVar181 * fVar181),uVar11,4);
        fVar181 = fVar181 * (float)uVar161;
        fVar187 = fVar187 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar187 * fVar187,fVar181 * fVar181),uVar11,4);
        uVar168 = CONCAT44(fVar29 * fVar187 * (float)((ulong)uVar161 >> 0x20),
                           fVar127 * fVar181 * (float)uVar161);
        uVar168 = uVar168 ^ (uVar168 ^ uVar11) &
                            CONCAT44(-(uint)(fVar127 == 0.0),-(uint)(fVar127 == 0.0));
        uVar161 = NEON_frecpe(uVar168,4);
        uVar177 = NEON_frecps(uVar168,uVar161,4);
        fVar127 = (float)uVar161 * (float)uVar177;
        fVar29 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar29,fVar127),4);
        fVar127 = fVar127 * (float)uVar161;
        fVar29 = fVar29 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar29,fVar127),4);
        fVar127 = fVar127 * (float)uVar161;
        fVar29 = fVar29 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar29,fVar127),4);
        fVar127 = fVar127 * (float)uVar161;
        uVar161 = NEON_frecps(uVar168,CONCAT44(fVar29 * (float)((ulong)uVar161 >> 0x20),fVar127),4);
        fVar127 = fVar127 * (float)uVar161;
        auVar148._0_4_ = fVar109 * auVar154._0_4_;
        auVar148._4_4_ = fVar116 * auVar154._4_4_;
        auVar148._8_4_ = fVar117 * auVar154._8_4_;
        auVar148._12_4_ = 0;
        auVar188 = NEON_ext(auVar148,auVar148,8,1);
        auVar122._0_4_ = fVar128 * fVar127;
        auVar122._4_4_ = fVar145 * fVar127;
        auVar122._8_4_ = fVar126 * fVar127;
        auVar184._0_4_ = fVar109 * auVar172._0_4_;
        auVar184._4_4_ = fVar116 * auVar172._4_4_;
        auVar184._8_4_ = fVar117 * auVar172._8_4_;
        auVar184._12_4_ = 0;
        auVar122._12_4_ = 0;
        auVar194 = NEON_ext(auVar122,auVar122,8,1);
        auVar146 = NEON_ext(auVar184,auVar184,8,1);
        auVar189._0_4_ = fVar109 * auVar122._0_4_;
        auVar189._4_4_ = fVar116 * auVar122._4_4_;
        auVar189._8_4_ = fVar117 * auVar122._8_4_;
        auVar189._12_4_ = 0;
        fVar187 = fVar119 - (auVar184._0_4_ + auVar184._4_4_ + auVar146._0_4_ + auVar146._4_4_);
        fVar128 = auVar172._0_4_ * auVar122._4_4_ - auVar172._4_4_ * auVar122._0_4_;
        auVar185 = NEON_ext(auVar154,auVar154,8,1);
        uVar177 = NEON_ext(CONCAT44(auVar172._4_4_ * auVar122._8_4_ -
                                    auVar172._8_4_ * auVar122._4_4_,fVar128),
                           CONCAT44(auVar192._4_4_ * auVar122._4_4_ -
                                    auVar172._4_4_ * auVar194._4_4_,
                                    auVar192._0_4_ * auVar122._0_4_ -
                                    auVar172._0_4_ * auVar194._0_4_),4,1);
        auVar146 = NEON_ext(auVar189,auVar189,8,1);
        auVar193._0_4_ = auVar154._0_4_ * (float)uVar177;
        fVar181 = (float)((ulong)uVar177 >> 0x20);
        auVar193._4_4_ = auVar154._4_4_ * fVar181;
        auVar193._8_4_ = auVar154._8_4_ * fVar128;
        auVar193._12_4_ = 0;
        fVar127 = fVar119 - (auVar189._0_4_ + auVar189._4_4_ + auVar146._0_4_ + auVar146._4_4_);
        fVar145 = fVar119 - (auVar148._0_4_ + auVar148._4_4_ + auVar188._0_4_ + auVar188._4_4_);
        fVar126 = auVar122._0_4_ * fVar187 - auVar172._0_4_ * fVar127;
        fVar29 = auVar122._4_4_ * fVar187 - auVar172._4_4_ * fVar127;
        auVar123._0_8_ = CONCAT44(fVar29,fVar126);
        auVar123._8_4_ = auVar122._8_4_ * fVar187 - auVar172._8_4_ * fVar127;
        auVar123._12_4_ = 0.0 - fVar127 * 0.0;
        auVar146 = NEON_ext(auVar123,auVar123,8,1);
        uVar161 = NEON_ext(auVar123._0_8_,(ulong)(uint)auVar146._0_4_,4,1);
        fVar127 = auVar154._0_4_ * (float)uVar161 - auVar154._4_4_ * fVar126;
        uVar161 = NEON_ext(CONCAT44(auVar154._4_4_ * (float)((ulong)uVar161 >> 0x20) -
                                    auVar154._8_4_ * fVar29,fVar127),
                           CONCAT44(auVar185._4_4_ * fVar29 - auVar154._4_4_ * 0.0,
                                    auVar185._0_4_ * fVar126 - auVar154._0_4_ * auVar146._0_4_),4,1)
        ;
        auVar132._0_4_ = (float)uVar161 - (float)uVar177 * fVar145;
        auVar132._4_4_ = (float)((ulong)uVar161 >> 0x20) - fVar181 * fVar145;
        auVar132._8_4_ = fVar127 - fVar128 * fVar145;
        auVar132._12_4_ = 0.0 - fVar145 * 0.0;
        auVar146 = NEON_ext(auVar193,auVar193,8,1);
        fVar126 = auVar146._0_4_ + auVar146._4_4_;
        uVar161 = CONCAT44(auVar193._0_4_ + auVar193._4_4_ + fVar126,
                           auVar193._0_4_ + auVar193._4_4_ + fVar126);
        auVar146 = NEON_ext(auVar132,auVar132,8,1);
        uVar177 = NEON_frecpe(uVar161,4);
        uVar151 = NEON_frecps(uVar161,uVar177,4);
        fVar126 = (float)uVar177 * (float)uVar151;
        fVar127 = (float)((ulong)uVar177 >> 0x20) * (float)((ulong)uVar151 >> 0x20);
        uVar177 = NEON_frecps(uVar161,CONCAT44(fVar127,fVar126),4);
        fVar126 = fVar126 * (float)uVar177;
        fVar127 = fVar127 * (float)((ulong)uVar177 >> 0x20);
        uVar177 = NEON_frecps(uVar161,CONCAT44(fVar127,fVar126),4);
        fVar126 = fVar126 * (float)uVar177;
        fVar127 = fVar127 * (float)((ulong)uVar177 >> 0x20);
        uVar177 = NEON_frecps(uVar161,CONCAT44(fVar127,fVar126),4);
        fVar126 = fVar126 * (float)uVar177;
        uVar161 = NEON_frecps(uVar161,CONCAT44(fVar127 * (float)((ulong)uVar177 >> 0x20),fVar126),4)
        ;
        fVar126 = fVar126 * (float)uVar161;
        auVar120._0_4_ = auVar132._0_4_ * fVar126;
        auVar120._4_4_ = auVar132._4_4_ * fVar126;
        auVar120._8_4_ = auVar146._0_4_ * fVar126;
        auVar112._0_4_ = (fVar109 - auVar120._0_4_) * (fVar109 - auVar120._0_4_);
        auVar112._4_4_ = (fVar116 - auVar120._4_4_) * (fVar116 - auVar120._4_4_);
        auVar112._8_4_ = (fVar117 - auVar120._8_4_) * (fVar117 - auVar120._8_4_);
        auVar112._12_4_ = 0;
        auVar146 = NEON_ext(auVar112,auVar112,8,1);
        fVar127 = auVar146._0_4_ + auVar146._4_4_;
        fVar126 = auVar112._0_4_ + auVar112._4_4_ + fVar127;
        fVar127 = auVar112._0_4_ + auVar112._4_4_ + fVar127;
        uVar11 = CONCAT44(fVar127,fVar126);
        uVar161 = NEON_frsqrte(uVar11,4);
        fVar29 = (float)uVar161;
        fVar128 = (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar11,4);
        fVar29 = fVar29 * (float)uVar161;
        fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar11,4);
        fVar29 = fVar29 * (float)uVar161;
        fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar11,4);
        fVar29 = fVar29 * (float)uVar161;
        fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
        uVar161 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar11,4);
        uVar168 = CONCAT44(fVar127 * fVar128 * (float)((ulong)uVar161 >> 0x20),
                           fVar126 * fVar29 * (float)uVar161);
        uVar168 = uVar168 ^ (uVar168 ^ uVar11) &
                            CONCAT44(-(uint)(fVar126 == 0.0),-(uint)(fVar126 == 0.0));
        auVar111._0_8_ = CONCAT44((float)(uVar168 >> 0x20) - fVar119,(float)uVar168 - fVar119);
        auVar111._8_8_ = 0;
        local_1b0 = auVar111._0_8_;
      }
      uVar11 = (ulong)local_1a4;
      auVar146._0_8_ = CONCAT44(fVar108 - auVar120._4_4_,fVar101 - auVar120._0_4_);
      auVar146._8_4_ = auVar103._8_4_ - auVar120._8_4_;
      auVar146._12_4_ = auVar103._12_4_ - 0.0;
      *(long *)(local_100 + (uVar11 * 2 + -7) * 2) = auVar103._8_8_;
      *(undefined8 *)(local_100 + (uVar11 * 2 + -8) * 2) = auVar103._0_8_;
      *(ulong *)(local_100 + (uVar11 * 2 + -0xf) * 2) = (ulong)(uint)auVar120._8_4_;
      *(long *)(local_1a0 + uVar11 * 4 + 8) = auVar120._0_8_;
      *(long *)(local_e0[uVar11 - 2] + 8) = auVar146._8_8_;
      *(undefined8 *)(local_100 + uVar11 * 4) = auVar146._0_8_;
      uVar135 = NEON_fmax(uVar135,CONCAT44((float)((ulong)uVar35 >> 0x20) + auVar111._4_4_ + 0.0,
                                           (float)uVar35 + auVar111._0_4_ + 0.0),4);
      uVar34 = local_1a4 + 1;
      if (uVar14 == 0) break;
      lVar9 = *(long *)(param_1 + 8);
      lVar12 = *(long *)(param_2 + 8);
      pbVar21 = pbVar21 + 1;
      pfVar17 = pfVar17 + 1;
      pbVar20 = pbVar20 + 1;
      pfVar15 = pfVar15 + 1;
      local_1a4 = uVar34;
    }
    if (local_1a4 == 3) {
      local_1a4 = uVar34;
      auVar146 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar119 = local_100[0];
      fVar126 = local_100[1];
      fVar127 = (float)uStack_f8;
      fVar101 = SUB84(uStack_f8,4);
      if (local_1a4 == 2) {
        auVar146._8_8_ = uStack_f8;
        auVar146._0_4_ = local_100[0];
        auVar146._4_4_ = local_100[1];
        auVar6._4_4_ = fStack_ec;
        auVar6._0_4_ = local_f0;
        auVar6._8_4_ = fStack_e8;
        auVar6._12_4_ = fStack_e4;
        auVar113._0_4_ = local_f0 - fVar119;
        auVar113._4_4_ = fStack_ec - fVar126;
        auVar113._8_4_ = fStack_e8 - fVar127;
        auVar113._12_4_ = fStack_e4 - fVar101;
        fVar128 = local_e0[0]._0_4_;
        auVar104._0_4_ = fVar128 - fVar119;
        fVar145 = local_e0[0]._4_4_;
        auVar104._4_4_ = fVar145 - fVar126;
        fVar181 = local_e0[0]._8_4_;
        auVar104._8_4_ = fVar181 - fVar127;
        auVar104._12_4_ = local_e0[0]._12_4_ - fVar101;
        auVar188 = NEON_ext(auVar113,auVar113,8,1);
        auVar185 = NEON_ext(auVar104,auVar104,8,1);
        fVar28 = auVar113._0_4_ * auVar104._4_4_ - auVar113._4_4_ * auVar104._0_4_;
        uVar35 = NEON_ext(CONCAT44(auVar113._4_4_ * auVar104._8_4_ - auVar113._8_4_ * auVar104._4_4_
                                   ,fVar28),
                          CONCAT44(auVar188._4_4_ * auVar104._4_4_ - auVar113._4_4_ * auVar185._4_4_
                                   ,auVar188._0_4_ * auVar104._0_4_ -
                                    auVar113._0_4_ * auVar185._0_4_),4,1);
        fVar187 = (float)uVar35;
        auVar124._0_4_ = fVar187 * fVar187;
        fVar27 = (float)((ulong)uVar35 >> 0x20);
        auVar124._4_4_ = fVar27 * fVar27;
        auVar124._8_4_ = fVar28 * fVar28;
        auVar124._12_4_ = 0;
        auVar188 = NEON_ext(auVar124,auVar124,8,1);
        fVar29 = auVar188._0_4_ + auVar188._4_4_;
        fVar108 = auVar124._0_4_ + auVar124._4_4_ + fVar29;
        uVar35 = CONCAT44(auVar124._0_4_ + auVar124._4_4_ + fVar29,fVar108);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar108) {
          if (fVar108 != 0.0) {
            auVar188 = NEON_ext(auVar6,auVar6,8,1);
            auVar185 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar29 = local_f0 * fVar145 - fStack_ec * fVar128;
            auVar192 = NEON_ext(auVar146,auVar146,8,1);
            uVar151 = NEON_ext(CONCAT44(fStack_ec * fVar181 - fStack_e8 * fVar145,fVar29),
                               CONCAT44(auVar188._4_4_ * fVar145 - fStack_ec * auVar185._4_4_,
                                        auVar188._0_4_ * fVar128 - local_f0 * auVar185._0_4_),4,1);
            fVar108 = fVar126 * fVar128 - fVar119 * fVar145;
            uVar161 = NEON_ext(CONCAT44(fVar127 * fVar145 - fVar126 * fVar181,fVar108),
                               CONCAT44(fVar126 * auVar185._4_4_ - auVar192._4_4_ * fVar145,
                                        fVar119 * auVar185._0_4_ - auVar192._0_4_ * fVar128),4,1);
            fVar176 = fVar119 * fStack_ec - fVar126 * local_f0;
            uVar177 = NEON_ext(CONCAT44(fVar126 * fStack_e8 - fVar127 * fStack_ec,fVar176),
                               CONCAT44(auVar192._4_4_ * fStack_ec - fVar126 * auVar188._4_4_,
                                        auVar192._0_4_ * local_f0 - fVar119 * auVar188._0_4_),4,1);
            auVar64._0_4_ = (float)uVar151 * fVar187;
            auVar64._4_4_ = (float)((ulong)uVar151 >> 0x20) * fVar27;
            auVar64._8_4_ = fVar29 * fVar28;
            auVar64._12_4_ = 0;
            auVar188 = NEON_ext(auVar64,auVar64,8,1);
            auVar155._0_4_ = (float)uVar161 * fVar187;
            auVar155._4_4_ = (float)((ulong)uVar161 >> 0x20) * fVar27;
            auVar155._8_4_ = fVar108 * fVar28;
            auVar155._12_4_ = 0;
            fVar108 = auVar64._0_4_ + auVar64._4_4_ + auVar188._0_4_ + auVar188._4_4_;
            auVar188 = NEON_ext(auVar155,auVar155,8,1);
            fVar29 = auVar155._0_4_ + auVar155._4_4_ + auVar188._0_4_ + auVar188._4_4_;
            auVar65._0_4_ = (float)uVar177 * fVar187;
            auVar65._4_4_ = (float)((ulong)uVar177 >> 0x20) * fVar27;
            auVar65._8_4_ = fVar176 * fVar28;
            auVar65._12_4_ = 0;
            auVar188 = NEON_ext(auVar65,auVar65,8,1);
            fVar176 = auVar65._0_4_ + auVar65._4_4_ + auVar188._0_4_ + auVar188._4_4_;
            bVar8 = 0.0 <= fVar176 && (0.0 <= fVar29 && 0.0 <= fVar108);
            auVar173._0_4_ = -(uint)bVar8;
            auVar173._4_4_ = -(uint)bVar8;
            auVar173._8_4_ = -(uint)bVar8;
            auVar173._12_4_ = -(uint)bVar8;
            NEON_ext(auVar173,auVar173,8,1);
            if (CONCAT13((char)auVar173._12_4_,
                         CONCAT12((char)auVar173._8_4_,
                                  CONCAT11((char)auVar173._4_4_,(char)auVar173._0_4_))) == -1) {
              auVar40._0_4_ = fVar119 * fVar187;
              auVar40._4_4_ = fVar126 * fVar27;
              auVar40._8_4_ = fVar127 * fVar28;
              auVar40._12_4_ = fVar101 * 0.0;
              auVar146 = NEON_ext(auVar40,auVar40,8,1);
              uVar161 = NEON_frecpe(uVar35,4);
              uVar177 = NEON_frecps(uVar35,uVar161,4);
              fVar119 = (float)uVar161 * (float)uVar177;
              fVar126 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
              uVar161 = NEON_frecps(uVar35,CONCAT44(fVar126,fVar119),4);
              fVar119 = fVar119 * (float)uVar161;
              fVar126 = fVar126 * (float)((ulong)uVar161 >> 0x20);
              uVar161 = NEON_frecps(uVar35,CONCAT44(fVar126,fVar119),4);
              fVar119 = fVar119 * (float)uVar161;
              fVar126 = fVar126 * (float)((ulong)uVar161 >> 0x20);
              uVar161 = NEON_frecps(uVar35,CONCAT44(fVar126,fVar119),4);
              fVar119 = fVar119 * (float)uVar161;
              uVar35 = NEON_frecps(uVar35,CONCAT44(fVar126 * (float)((ulong)uVar161 >> 0x20),fVar119
                                                  ),4);
              fVar119 = (auVar40._0_4_ + auVar40._4_4_ + auVar146._0_4_ + auVar146._4_4_) *
                        fVar119 * (float)uVar35;
              auVar146._0_4_ = fVar187 * fVar119;
              auVar146._4_4_ = fVar27 * fVar119;
              auVar146._8_4_ = fVar28 * fVar119;
              auVar146._12_4_ = 0.0;
            }
            else {
              auVar133._0_4_ = -fVar119 * auVar113._0_4_;
              auVar133._4_4_ = -fVar126 * auVar113._4_4_;
              auVar133._8_4_ = -fVar127 * auVar113._8_4_;
              auVar133._12_4_ = auVar113._12_4_ * 0.0;
              auVar188 = NEON_ext(auVar133,auVar133,8,1);
              fVar28 = auVar188._0_4_ + auVar188._4_4_;
              auVar149._0_4_ = -local_f0 * auVar113._0_4_;
              auVar149._4_4_ = -fStack_ec * auVar113._4_4_;
              auVar149._8_4_ = -fStack_e8 * auVar113._8_4_;
              auVar149._12_4_ = auVar113._12_4_ * 0.0;
              auVar188 = NEON_ext(auVar149,auVar149,8,1);
              fVar182 = auVar188._0_4_ + auVar188._4_4_;
              fVar187 = auVar133._0_4_ + auVar133._4_4_ + fVar28;
              fVar27 = auVar149._0_4_ + auVar149._4_4_ + fVar182;
              fVar182 = auVar149._0_4_ + auVar149._4_4_ + fVar182;
              bVar8 = (0.0 <= fVar187 && fVar176 <= 0.0) && fVar27 <= 0.0;
              auVar179._0_4_ = -(uint)bVar8;
              auVar179._4_4_ = -(uint)bVar8;
              auVar179._8_4_ = -(uint)bVar8;
              auVar179._12_4_ = -(uint)bVar8;
              NEON_ext(auVar179,auVar179,8,1);
              if (CONCAT13((char)auVar179._12_4_,
                           CONCAT12((char)auVar179._8_4_,
                                    CONCAT11((char)auVar179._4_4_,(char)auVar179._0_4_))) == -1) {
                uVar35 = CONCAT44((auVar133._0_4_ + auVar133._4_4_ + fVar28) - fVar182,
                                  fVar187 - fVar27);
                uVar161 = NEON_frecpe(uVar35,4);
                uVar177 = NEON_frecps(uVar35,uVar161,4);
                fVar108 = (float)uVar161 * (float)uVar177;
                fVar29 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
                uVar161 = NEON_frecps(uVar35,CONCAT44(fVar29,fVar108),4);
                fVar108 = fVar108 * (float)uVar161;
                fVar29 = fVar29 * (float)((ulong)uVar161 >> 0x20);
                uVar161 = NEON_frecps(uVar35,CONCAT44(fVar29,fVar108),4);
                fVar108 = fVar108 * (float)uVar161;
                fVar29 = fVar29 * (float)((ulong)uVar161 >> 0x20);
                uVar161 = NEON_frecps(uVar35,CONCAT44(fVar29,fVar108),4);
                fVar108 = fVar108 * (float)uVar161;
                uVar35 = NEON_frecps(uVar35,CONCAT44(fVar29 * (float)((ulong)uVar161 >> 0x20),
                                                     fVar108),4);
                fVar187 = fVar187 * (float)(-(uint)(1.1920929e-07 < ABS(fVar187 - fVar27)) &
                                           (uint)(fVar108 * (float)uVar35));
                lVar9 = 0;
                pauVar19 = (undefined1 (*) [16])local_100;
                auVar57._0_8_ =
                     CONCAT44(fVar126 + auVar113._4_4_ * fVar187,fVar119 + auVar113._0_4_ * fVar187)
                ;
                auVar57._8_4_ = fVar127 + auVar113._8_4_ * fVar187;
                auVar57._12_4_ = fVar101 + auVar113._12_4_ * fVar187;
                auVar146 = NEON_ext(auVar57,auVar57,8,1);
                auVar4._8_4_ = auVar146._0_4_;
                auVar4._0_8_ = auVar57._0_8_;
                lVar12 = 1;
                pauVar16 = (undefined1 (*) [16])&local_f0;
LAB_0025fdd4:
                auVar146._12_4_ = 0.0;
                auVar146._0_12_ = auVar4;
                local_1a4 = 2;
              }
              else {
                auVar180._0_4_ = -local_f0 * auVar104._0_4_;
                auVar180._4_4_ = -fStack_ec * auVar104._4_4_;
                auVar180._8_4_ = -fStack_e8 * auVar104._8_4_;
                auVar180._12_4_ = auVar104._12_4_ * 0.0;
                auVar188 = NEON_ext(auVar180,auVar180,8,1);
                fVar23 = auVar188._0_4_ + auVar188._4_4_;
                auVar114._0_4_ = auVar113._0_4_ * -fVar128;
                auVar114._4_4_ = auVar113._4_4_ * -fVar145;
                auVar114._8_4_ = auVar113._8_4_ * -fVar181;
                auVar114._12_4_ = auVar113._12_4_ * 0.0;
                auVar190._0_4_ = auVar104._0_4_ * -fVar128;
                auVar190._4_4_ = auVar104._4_4_ * -fVar145;
                auVar190._8_4_ = auVar104._8_4_ * -fVar181;
                auVar190._12_4_ = auVar104._12_4_ * 0.0;
                fVar28 = auVar180._0_4_ + auVar180._4_4_ + fVar23;
                auVar188 = NEON_ext(auVar114,auVar114,8,1);
                fVar31 = auVar188._0_4_ + auVar188._4_4_;
                fVar176 = auVar114._0_4_ + auVar114._4_4_ + fVar31;
                auVar188 = NEON_ext(auVar190,auVar190,8,1);
                fVar32 = auVar188._0_4_ + auVar188._4_4_;
                fVar30 = auVar190._0_4_ + auVar190._4_4_ + fVar32;
                fVar32 = auVar190._0_4_ + auVar190._4_4_ + fVar32;
                pauVar16 = local_e0;
                bVar8 = (fVar27 <= fVar28 && fVar108 <= 0.0) && fVar30 <= fVar176;
                auVar162._0_4_ = -(uint)bVar8;
                auVar162._4_4_ = -(uint)bVar8;
                auVar162._8_4_ = -(uint)bVar8;
                auVar162._12_4_ = -(uint)bVar8;
                NEON_ext(auVar162,auVar162,8,1);
                if (CONCAT13((char)auVar162._12_4_,
                             CONCAT12((char)auVar162._8_4_,
                                      CONCAT11((char)auVar162._4_4_,(char)auVar162._0_4_))) == -1) {
                  fVar119 = (fVar28 - fVar27) + (fVar176 - fVar30);
                  uVar35 = CONCAT44(((auVar180._0_4_ + auVar180._4_4_ + fVar23) - fVar182) +
                                    ((auVar114._0_4_ + auVar114._4_4_ + fVar31) - fVar32),fVar119);
                  uVar161 = NEON_frecpe(uVar35,4);
                  uVar177 = NEON_frecps(uVar35,uVar161,4);
                  fVar126 = (float)uVar161 * (float)uVar177;
                  fVar127 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar127,fVar126),4);
                  fVar126 = fVar126 * (float)uVar161;
                  fVar127 = fVar127 * (float)((ulong)uVar161 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar127,fVar126),4);
                  fVar126 = fVar126 * (float)uVar161;
                  fVar127 = fVar127 * (float)((ulong)uVar161 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar127,fVar126),4);
                  fVar126 = fVar126 * (float)uVar161;
                  uVar35 = NEON_frecps(uVar35,CONCAT44(fVar127 * (float)((ulong)uVar161 >> 0x20),
                                                       fVar126),4);
                  fVar119 = (fVar28 - fVar27) *
                            (float)(-(uint)(1.1920929e-07 < ABS(fVar119)) &
                                   (uint)(fVar126 * (float)uVar35));
                  auVar58._0_8_ =
                       CONCAT44(fStack_ec + (fVar145 - fStack_ec) * fVar119,
                                local_f0 + (fVar128 - local_f0) * fVar119);
                  auVar58._8_4_ = fStack_e8 + (fVar181 - fStack_e8) * fVar119;
                  auVar58._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar119;
                  auVar146 = NEON_ext(auVar58,auVar58,8,1);
                  lVar9 = 1;
                  auVar4._8_4_ = auVar146._0_4_;
                  auVar4._0_8_ = auVar58._0_8_;
                  lVar12 = 2;
                  pauVar19 = (undefined1 (*) [16])&local_f0;
                  goto LAB_0025fdd4;
                }
                auVar163._0_4_ = -fVar119 * auVar104._0_4_;
                auVar163._4_4_ = -fVar126 * auVar104._4_4_;
                auVar163._8_4_ = -fVar127 * auVar104._8_4_;
                auVar163._12_4_ = auVar104._12_4_ * 0.0;
                auVar188 = NEON_ext(auVar163,auVar163,8,1);
                fVar128 = auVar188._0_4_ + auVar188._4_4_;
                fVar108 = auVar163._0_4_ + auVar163._4_4_ + fVar128;
                bVar8 = (fVar29 <= 0.0 && 0.0 <= fVar108) && fVar30 <= 0.0;
                auVar156._0_4_ = -(uint)bVar8;
                auVar156._4_4_ = -(uint)bVar8;
                auVar156._8_4_ = -(uint)bVar8;
                auVar156._12_4_ = -(uint)bVar8;
                NEON_ext(auVar156,auVar156,8,1);
                if (CONCAT13((char)auVar156._12_4_,
                             CONCAT12((char)auVar156._8_4_,
                                      CONCAT11((char)auVar156._4_4_,(char)auVar156._0_4_))) == -1) {
                  uVar35 = CONCAT44((auVar163._0_4_ + auVar163._4_4_ + fVar128) - fVar32,
                                    fVar108 - fVar30);
                  uVar161 = NEON_frecpe(uVar35,4);
                  uVar177 = NEON_frecps(uVar35,uVar161,4);
                  fVar29 = (float)uVar161 * (float)uVar177;
                  fVar128 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar161;
                  fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar161;
                  fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
                  uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar161;
                  uVar35 = NEON_frecps(uVar35,CONCAT44(fVar128 * (float)((ulong)uVar161 >> 0x20),
                                                       fVar29),4);
                  fVar108 = fVar108 * (float)(-(uint)(1.1920929e-07 < ABS(fVar108 - fVar30)) &
                                             (uint)(fVar29 * (float)uVar35));
                  lVar9 = 0;
                  pauVar19 = (undefined1 (*) [16])local_100;
                  auVar59._0_8_ =
                       CONCAT44(fVar126 + auVar104._4_4_ * fVar108,
                                fVar119 + auVar104._0_4_ * fVar108);
                  auVar59._8_4_ = fVar127 + auVar104._8_4_ * fVar108;
                  auVar59._12_4_ = fVar101 + auVar104._12_4_ * fVar108;
                  auVar146 = NEON_ext(auVar59,auVar59,8,1);
                  local_1a4 = 2;
                  auVar146._8_4_ = (float)auVar146._0_4_;
                  auVar146._0_8_ = auVar59._0_8_;
                  auVar146._12_4_ = 0.0;
                  lVar12 = 2;
                }
                else {
                  bVar8 = fVar187 <= 0.0 && fVar108 <= 0.0;
                  auVar105._0_4_ = -(uint)bVar8;
                  auVar105._4_4_ = -(uint)bVar8;
                  auVar105._8_4_ = -(uint)bVar8;
                  auVar105._12_4_ = -(uint)bVar8;
                  NEON_ext(auVar105,auVar105,8,1);
                  pauVar19 = (undefined1 (*) [16])local_100;
                  if (CONCAT13((char)auVar105._12_4_,
                               CONCAT12((char)auVar105._8_4_,
                                        CONCAT11((char)auVar105._4_4_,(char)auVar105._0_4_))) == -1)
                  {
                    lVar9 = 0;
                  }
                  else {
                    bVar8 = 0.0 <= fVar27 && fVar28 <= fVar27;
                    auVar38._0_4_ = -(uint)bVar8;
                    auVar38._4_4_ = -(uint)bVar8;
                    auVar38._8_4_ = -(uint)bVar8;
                    auVar38._12_4_ = -(uint)bVar8;
                    NEON_ext(auVar38,auVar38,8,1);
                    iVar62 = CONCAT13((char)auVar38._12_4_,
                                      CONCAT12((char)auVar38._8_4_,
                                               CONCAT11((char)auVar38._4_4_,(char)auVar38._0_4_)));
                    auVar39._0_4_ = -(uint)(iVar62 == -1);
                    auVar39._4_4_ = auVar39._0_4_;
                    auVar39._8_4_ = auVar39._0_4_;
                    auVar39._12_4_ = auVar39._0_4_;
                    lVar9 = 1;
                    if (iVar62 != -1) {
                      lVar9 = 2;
                    }
                    pauVar19 = pauVar19 + lVar9;
                    auVar146 = local_e0[0] ^ (local_e0[0] ^ auVar6) & auVar39;
                  }
                  local_1a4 = 1;
                  lVar12 = 1;
                  pauVar16 = (undefined1 (*) [16])&local_f0;
                }
              }
              uStack_f8 = *(undefined8 *)((long)*pauVar19 + 8);
              local_100 = (float  [2])*(undefined8 *)*pauVar19;
              fStack_e8 = (float)*(undefined8 *)((long)*pauVar16 + 8);
              fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar16 + 8) >> 0x20);
              local_f0 = (float)*(undefined8 *)*pauVar16;
              fStack_ec = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
              fStack_138 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2);
              fStack_134 = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2) >> 0x20)
              ;
              local_140 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2);
              fStack_13c = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2) >> 0x20)
              ;
              uStack_128 = *(undefined8 *)(local_100 + (lVar12 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar12 * 2 + -8) * 2);
              local_1a0[4] = local_1a0[lVar9 + 4];
              local_1a0[5] = local_1a0[lVar12 + 4];
              fStack_178 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2);
              fStack_174 = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2) >>
                                  0x20);
              local_180._0_4_ = (float)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
              local_180._4_4_ = (float)((ulong)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8) >> 0x20);
              uStack_168 = *(undefined8 *)(local_100 + (lVar12 * 2 + -0xf) * 2);
              uStack_170 = *(undefined8 *)(local_1a0 + lVar12 * 4 + 8);
              local_1a0[0] = local_1a0[lVar9];
              local_1a0[1] = local_1a0[lVar12];
            }
          }
        }
        else {
          auVar63._0_4_ = auVar113._0_4_ * auVar113._0_4_;
          auVar63._4_4_ = auVar113._4_4_ * auVar113._4_4_;
          auVar63._8_4_ = auVar113._8_4_ * auVar113._8_4_;
          auVar63._12_4_ = auVar113._12_4_ * auVar113._12_4_;
          auVar188 = NEON_ext(auVar63,auVar63,8,1);
          fVar29 = auVar188._0_4_ + auVar188._4_4_;
          fVar108 = auVar63._0_4_ + auVar63._4_4_ + fVar29;
          uVar35 = CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar29,fVar108);
          bVar8 = fVar108 <= 1.1920929e-07;
          auVar80._0_4_ = -(uint)bVar8;
          auVar80._4_4_ = -(uint)bVar8;
          auVar80._8_4_ = -(uint)bVar8;
          auVar80._12_4_ = -(uint)bVar8;
          NEON_ext(auVar80,auVar80,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar80._12_4_,
                       CONCAT12((char)auVar80._8_4_,
                                CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) == -1) {
            local_1a4 = 1;
          }
          else {
            auVar81._0_4_ = -fVar119 * auVar113._0_4_;
            auVar81._4_4_ = -fVar126 * auVar113._4_4_;
            auVar81._8_4_ = -fVar127 * auVar113._8_4_;
            auVar81._12_4_ = auVar113._12_4_ * 0.0;
            auVar146 = NEON_ext(auVar81,auVar81,8,1);
            fVar108 = auVar146._0_4_ + auVar146._4_4_;
            uVar161 = NEON_frecpe(uVar35,4);
            uVar177 = NEON_frecps(uVar35,uVar161,4);
            fVar29 = (float)uVar161 * (float)uVar177;
            fVar128 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar128 = fVar128 * (float)((ulong)uVar161 >> 0x20);
            uVar35 = NEON_frecps(uVar35,CONCAT44(fVar128,fVar29),4);
            uVar161 = NEON_fmov(0x3f800000,4);
            uVar35 = NEON_fmin(CONCAT44((auVar81._0_4_ + auVar81._4_4_ + fVar108) *
                                        fVar128 * (float)((ulong)uVar35 >> 0x20),
                                        (auVar81._0_4_ + auVar81._4_4_ + fVar108) *
                                        fVar29 * (float)uVar35),uVar161,4);
            uVar35 = NEON_fmax(uVar35,0,4);
            fVar108 = (float)uVar35;
            auVar37._0_8_ =
                 CONCAT44(fVar126 + auVar113._4_4_ * fVar108,fVar119 + auVar113._0_4_ * fVar108);
            auVar37._8_4_ = fVar127 + auVar113._8_4_ * fVar108;
            auVar37._12_4_ = fVar101 + auVar113._12_4_ * fVar108;
            auVar146 = NEON_ext(auVar37,auVar37,8,1);
            auVar146._8_4_ = (float)auVar146._0_4_;
            auVar146._0_8_ = auVar37._0_8_;
            auVar146._12_4_ = 0.0;
          }
        }
      }
      else {
        bVar8 = local_1a4 == 1;
        local_1a4 = uVar34;
        if (bVar8) {
          auVar146._8_8_ = uStack_f8;
          auVar146._0_4_ = local_100[0];
          auVar146._4_4_ = local_100[1];
          fVar128 = local_f0 - fVar119;
          fVar145 = fStack_ec - fVar126;
          fVar181 = fStack_e8 - fVar127;
          fVar187 = fStack_e4 - fVar101;
          auVar79._0_4_ = fVar128 * fVar128;
          auVar79._4_4_ = fVar145 * fVar145;
          auVar79._8_4_ = fVar181 * fVar181;
          auVar79._12_4_ = fVar187 * fVar187;
          auVar188 = NEON_ext(auVar79,auVar79,8,1);
          fVar29 = auVar188._0_4_ + auVar188._4_4_;
          fVar108 = auVar79._0_4_ + auVar79._4_4_ + fVar29;
          uVar35 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar29,fVar108);
          bVar8 = fVar108 <= 1.1920929e-07;
          auVar92._0_4_ = -(uint)bVar8;
          auVar92._4_4_ = -(uint)bVar8;
          auVar92._8_4_ = -(uint)bVar8;
          auVar92._12_4_ = -(uint)bVar8;
          NEON_ext(auVar92,auVar92,8,1);
          if (CONCAT13((char)auVar92._12_4_,
                       CONCAT12((char)auVar92._8_4_,
                                CONCAT11((char)auVar92._4_4_,(char)auVar92._0_4_))) == -1) {
            local_1a4 = 1;
          }
          else {
            auVar93._0_4_ = -fVar119 * fVar128;
            auVar93._4_4_ = -fVar126 * fVar145;
            auVar93._8_4_ = -fVar127 * fVar181;
            auVar93._12_4_ = fVar187 * 0.0;
            auVar146 = NEON_ext(auVar93,auVar93,8,1);
            fVar108 = auVar146._0_4_ + auVar146._4_4_;
            uVar161 = NEON_frecpe(uVar35,4);
            uVar177 = NEON_frecps(uVar35,uVar161,4);
            fVar29 = (float)uVar161 * (float)uVar177;
            fVar27 = (float)((ulong)uVar161 >> 0x20) * (float)((ulong)uVar177 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar27,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar27,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
            uVar161 = NEON_frecps(uVar35,CONCAT44(fVar27,fVar29),4);
            fVar29 = fVar29 * (float)uVar161;
            fVar27 = fVar27 * (float)((ulong)uVar161 >> 0x20);
            uVar35 = NEON_frecps(uVar35,CONCAT44(fVar27,fVar29),4);
            uVar161 = NEON_fmov(0x3f800000,4);
            uVar35 = NEON_fmin(CONCAT44((auVar93._0_4_ + auVar93._4_4_ + fVar108) *
                                        fVar27 * (float)((ulong)uVar35 >> 0x20),
                                        (auVar93._0_4_ + auVar93._4_4_ + fVar108) *
                                        fVar29 * (float)uVar35),uVar161,4);
            uVar35 = NEON_fmax(uVar35,0,4);
            fVar108 = (float)uVar35;
            auVar36._0_8_ = CONCAT44(fVar126 + fVar145 * fVar108,fVar119 + fVar128 * fVar108);
            auVar36._8_4_ = fVar127 + fVar181 * fVar108;
            auVar36._12_4_ = fVar101 + fVar187 * fVar108;
            auVar146 = NEON_ext(auVar36,auVar36,8,1);
            auVar146._8_4_ = (float)auVar146._0_4_;
            auVar146._0_8_ = auVar36._0_8_;
            auVar146._12_4_ = 0.0;
          }
        }
      }
    }
    fVar127 = auVar146._0_4_;
    auVar66._0_4_ = fVar127 * fVar127;
    fVar101 = auVar146._4_4_;
    auVar66._4_4_ = fVar101 * fVar101;
    fVar108 = auVar146._8_4_;
    auVar66._8_4_ = fVar108 * fVar108;
    auVar66._12_4_ = auVar146._12_4_ * auVar146._12_4_;
    auVar188 = NEON_ext(auVar66,auVar66,8,1);
    uStack_b8 = auVar146._8_8_;
    local_c0 = auVar146._0_8_;
    fVar126 = auVar188._0_4_ + auVar188._4_4_;
    fVar119 = auVar66._0_4_ + auVar66._4_4_ + fVar126;
    fVar126 = auVar66._0_4_ + auVar66._4_4_ + fVar126;
    uVar14 = CONCAT44(fVar126,fVar119);
    uVar35 = NEON_frsqrte(uVar14,4);
    fVar29 = (float)uVar35;
    fVar128 = (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar35;
    fVar128 = fVar128 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar35;
    fVar128 = fVar128 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    fVar29 = fVar29 * (float)uVar35;
    fVar128 = fVar128 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frsqrts(CONCAT44(fVar128 * fVar128,fVar29 * fVar29),uVar14,4);
    uVar168 = CONCAT44(fVar126 * fVar128 * (float)((ulong)uVar35 >> 0x20),
                       fVar119 * fVar29 * (float)uVar35);
    uVar168 = uVar168 ^ (uVar168 ^ uVar14) &
                        CONCAT44(-(uint)(fVar119 == 0.0),-(uint)(fVar119 == 0.0));
    uVar35 = NEON_frecpe(uVar168,4);
    uVar161 = NEON_frecps(uVar168,uVar35,4);
    fVar119 = (float)uVar35 * (float)uVar161;
    fVar126 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar161 >> 0x20);
    uVar35 = NEON_frecps(uVar168,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar35;
    fVar126 = fVar126 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frecps(uVar168,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar35;
    fVar126 = fVar126 * (float)((ulong)uVar35 >> 0x20);
    uVar35 = NEON_frecps(uVar168,CONCAT44(fVar126,fVar119),4);
    fVar119 = fVar119 * (float)uVar35;
    uVar35 = NEON_frecps(uVar168,CONCAT44(fVar126 * (float)((ulong)uVar35 >> 0x20),fVar119),4);
    fVar119 = fVar119 * (float)uVar35;
    auVar102._0_4_ = fVar127 * fVar119;
    auVar102._4_4_ = fVar101 * fVar119;
    auVar102._8_4_ = fVar108 * fVar119;
    iVar62 = -(uint)(fVar136 < (float)uVar168);
    auVar188 = auVar146;
    uVar35 = uVar135;
  }
  uVar161 = _UNK_01d4aa48;
  uVar135 = _DAT_01d4aa40;
  auVar67._0_4_ = -(uint)(iVar62 == -1);
  auVar67._4_4_ = -(uint)(iVar62 == -1);
  auVar67._8_4_ = -(uint)(iVar62 == -1);
  auVar67._12_4_ = -(uint)(iVar62 == -1);
  NEON_ext(auVar67,auVar67,8,1);
  bVar141 = SUB41(fVar196,0);
  bVar142 = (byte)((uint)fVar196 >> 8);
  bVar143 = (byte)((uint)fVar196 >> 0x10);
  bVar144 = (byte)((uint)fVar196 >> 0x18);
  bVar137 = SUB41(fVar195,0);
  bVar138 = (byte)((uint)fVar195 >> 8);
  bVar139 = (byte)((uint)fVar195 >> 0x10);
  bVar140 = (byte)((uint)fVar195 >> 0x18);
  if (CONCAT13((char)auVar67._12_4_,
               CONCAT12((char)auVar67._8_4_,CONCAT11((char)auVar67._4_4_,(char)auVar67._0_4_))) ==
      -1) {
    uVar14 = uVar168;
    do {
      uVar168 = uVar14;
      auVar188 = auVar146;
      fVar119 = -auVar188._0_4_;
      fVar126 = -auVar188._4_4_;
      fVar127 = -auVar188._8_4_;
      local_1c0 = auVar102._0_4_;
      fStack_1bc = auVar102._4_4_;
      lVar9 = *(long *)(param_1 + 8);
      pfVar15 = *(float **)(param_1 + 0x10);
      local_1e0 = (byte)uVar135;
      bStack_1df = (byte)((ulong)uVar135 >> 8);
      bStack_1de = (byte)((ulong)uVar135 >> 0x10);
      bStack_1dd = (byte)((ulong)uVar135 >> 0x18);
      bStack_1dc = (byte)((ulong)uVar135 >> 0x20);
      bStack_1db = (byte)((ulong)uVar135 >> 0x28);
      bStack_1da = (byte)((ulong)uVar135 >> 0x30);
      bStack_1d9 = (byte)((ulong)uVar135 >> 0x38);
      bStack_1d8 = (byte)uVar161;
      bStack_1d7 = (byte)((ulong)uVar161 >> 8);
      bStack_1d6 = (byte)((ulong)uVar161 >> 0x10);
      bStack_1d5 = (byte)((ulong)uVar161 >> 0x18);
      uVar34 = -(uint)(0.0 < *(float *)(param_1 + 0x20) * fVar119 +
                             *(float *)(param_1 + 0x30) * fVar126 +
                             *(float *)(param_1 + 0x40) * fVar127);
      uVar60 = -(uint)(0.0 < *(float *)(param_1 + 0x24) * fVar119 +
                             *(float *)(param_1 + 0x34) * fVar126 +
                             *(float *)(param_1 + 0x44) * fVar127);
      uVar61 = -(uint)(0.0 < *(float *)(param_1 + 0x28) * fVar119 +
                             *(float *)(param_1 + 0x38) * fVar126 +
                             *(float *)(param_1 + 0x48) * fVar127);
      iVar62 = CONCAT13((byte)(uVar34 >> 0x18) & bStack_1dd,
                        CONCAT12((byte)(uVar34 >> 0x10) & bStack_1de,
                                 CONCAT11((byte)(uVar34 >> 8) & bStack_1df,(byte)uVar34 & local_1e0)
                                ));
      auVar70._0_8_ =
           CONCAT17((byte)(uVar60 >> 0x18) & bStack_1d9,
                    CONCAT16((byte)(uVar60 >> 0x10) & bStack_1da,
                             CONCAT15((byte)(uVar60 >> 8) & bStack_1db,
                                      CONCAT14((byte)uVar60 & bStack_1dc,iVar62))));
      auVar70[8] = (byte)uVar61 & bStack_1d8;
      auVar70[9] = (byte)(uVar61 >> 8) & bStack_1d7;
      auVar70[10] = (byte)(uVar61 >> 0x10) & bStack_1d6;
      auVar70[0xb] = (byte)(uVar61 >> 0x18) & bStack_1d5;
      auVar70._12_4_ = 0;
      auVar146 = NEON_ext(auVar70,auVar70,8,1);
      local_1a0[(ulong)local_1a4 + 4] =
           (float)(iVar62 + (int)((ulong)auVar70._0_8_ >> 0x20) + auVar146._0_4_ + auVar146._4_4_ &
                  7);
      auVar146 = *(undefined1 (*) [16])(pfVar15 + 8);
      auVar185 = *(undefined1 (*) [16])(pfVar15 + 0xc);
      fVar119 = -*(float *)(lVar9 + 0x30);
      fVar127 = -*(float *)(lVar9 + 0x34);
      fVar108 = -*(float *)(lVar9 + 0x38);
      fVar119 = (float)((uint)fVar119 ^ ((uint)fVar119 ^ (uint)*(float *)(lVar9 + 0x30)) & uVar34);
      fVar127 = (float)((uint)fVar127 ^ ((uint)fVar127 ^ (uint)*(float *)(lVar9 + 0x34)) & uVar60);
      fVar108 = (float)((uint)fVar108 ^ ((uint)fVar108 ^ (uint)*(float *)(lVar9 + 0x38)) & uVar61);
      fVar126 = auVar185._0_4_ +
                *pfVar15 * fVar119 + pfVar15[4] * fVar127 + auVar146._0_4_ * fVar108;
      fVar101 = auVar185._4_4_ +
                pfVar15[1] * fVar119 + pfVar15[5] * fVar127 + auVar146._4_4_ * fVar108;
      auVar42._0_8_ = CONCAT44(fVar101,fVar126);
      auVar42._8_4_ =
           auVar185._8_4_ + pfVar15[2] * fVar119 + pfVar15[6] * fVar127 + auVar146._8_4_ * fVar108;
      auVar42._12_4_ = auVar185._12_4_ + 0.0;
      auVar43 = FUN_00261b70(param_2,&local_c0,local_1a0 + local_1a4,&local_1b0);
      fVar126 = fVar126 - auVar43._0_4_;
      fVar101 = fVar101 - auVar43._4_4_;
      auVar146._0_8_ = CONCAT44(fVar101,fVar126);
      auVar146._8_4_ = auVar42._8_4_ - auVar43._8_4_;
      auVar146._12_4_ = auVar42._12_4_ - auVar43._12_4_;
      uVar35 = NEON_fmax(uVar35,CONCAT44((float)((ulong)*param_4 >> 0x20) +
                                         (float)(local_1b0 >> 0x20) + 0.0,
                                         (float)*param_4 + (float)local_1b0 + 0.0),4);
      auVar82._0_4_ = local_1c0 * fVar126;
      auVar82._4_4_ = fStack_1bc * fVar101;
      fVar126 = auVar102._8_4_;
      auVar82._8_4_ = fVar126 * auVar146._8_4_;
      auVar82._12_4_ = auVar146._12_4_ * 0.0;
      auVar185 = NEON_ext(auVar82,auVar82,8,1);
      fVar119 = auVar82._0_4_ + auVar82._4_4_ + auVar185._0_4_ + auVar185._4_4_;
      if (fVar118 + (float)uVar35 < fVar119) {
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
          pfVar15 = local_1a0 + 5;
          pfVar17 = local_1a0 + 1;
          do {
            pfVar13 = pfVar15 + -1;
            fVar136 = *pfVar15;
            pbVar21 = param_9 + lVar9;
            fVar118 = pfVar17[-1];
            fVar195 = *pfVar17;
            lVar12 = lVar9 + 1;
            lVar9 = lVar9 + 2;
            pfVar15 = pfVar15 + 2;
            pfVar17 = pfVar17 + 2;
            *pbVar21 = SUB41(*pfVar13,0);
            (param_10 + lVar12)[-1] = SUB41(fVar118,0);
            pbVar21[1] = SUB41(fVar136,0);
            param_10[lVar12] = SUB41(fVar195,0);
          } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar118 = local_1a0[lVar9];
        param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
        param_10[lVar9] = SUB41(fVar118,0);
        return 0;
      }
      fVar127 = (float)uVar168;
      uVar14 = (ulong)local_1a4;
      if (fVar127 * 0.999775 < fVar119) {
        if (param_9 == (byte *)0x0) goto LAB_0025fb54;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar126;
          *param_7 = auVar102._0_8_;
          goto joined_r0x0025fc00;
        }
        if (local_1a4 == 1) {
          lVar9 = 0;
          goto LAB_0025fb38;
        }
        lVar9 = 0;
        pfVar15 = local_1a0 + 5;
        pfVar17 = local_1a0 + 1;
        do {
          pfVar13 = pfVar15 + -1;
          fVar119 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar136 = pfVar17[-1];
          fVar101 = *pfVar17;
          lVar12 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar12)[-1] = SUB41(fVar136,0);
          pbVar21[1] = SUB41(fVar119,0);
          param_10[lVar12] = SUB41(fVar101,0);
        } while (uVar14 - (uVar14 & 1) != lVar9);
        if ((local_1a4 & 1) != 0) {
LAB_0025fb38:
          fVar136 = local_1a0[lVar9];
          param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
          param_10[lVar9] = SUB41(fVar136,0);
        }
LAB_0025fb54:
        param_7[1] = (ulong)(uint)fVar126;
        *param_7 = auVar102._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar43._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar43._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar43._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar43._12_4_ = fStack_134 + 0.0;
          auVar146._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar146._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar146._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar146._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar78._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar78._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar78._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar146 = NEON_ext(auVar78,auVar78,8,1);
          auVar43._8_4_ = (float)auVar146._0_4_;
          auVar43._0_8_ = auVar78._0_8_;
          auVar43._12_4_ = 0.0;
          auVar56._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar56._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar56._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar146 = NEON_ext(auVar56,auVar56,8,1);
          auVar146._8_4_ = (float)auVar146._0_4_;
          auVar146._0_8_ = auVar56._0_8_;
          auVar146._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar43._4_4_ = fStack_13c;
          auVar43._0_4_ = local_140;
          auVar43._8_4_ = fStack_138;
          auVar43._12_4_ = fStack_134;
          auVar146._4_4_ = local_180._4_4_;
          auVar146._0_4_ = (float)local_180;
          auVar146._8_4_ = fStack_178;
          auVar146._12_4_ = fStack_174;
        }
joined_r0x0025fc00:
        if ((param_12 & 1) == 0) {
          auVar87._0_8_ =
               CONCAT44((float)auVar43._4_4_ - fStack_1bc * fVar196,
                        (float)auVar43._0_4_ - local_1c0 * fVar196);
          auVar87._8_4_ = (float)auVar43._8_4_ - fVar126 * fVar196;
          auVar87._12_4_ = (float)auVar43._12_4_ - fVar196 * 0.0;
          auVar188 = NEON_ext(auVar87,auVar87,8,1);
          auVar54._0_4_ = local_1c0 * fVar195;
          auVar54._4_4_ = fStack_1bc * fVar195;
          auVar54._8_4_ = fVar126 * fVar195;
          auVar54._12_4_ = fVar195 * 0.0;
          param_5[1] = (ulong)auVar188._0_4_;
          *param_5 = auVar87._0_8_;
          fVar136 = fVar118;
        }
        else {
          iVar62 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          iVar91 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar88 = (byte)((uint)iVar62 >> 8);
          bVar89 = (byte)((uint)iVar62 >> 0x10);
          bVar90 = (byte)((uint)iVar62 >> 0x18);
          fVar136 = (float)CONCAT13(bVar144 & ~bVar90,
                                    CONCAT12(bVar143 & ~bVar89,
                                             CONCAT11(bVar142 & ~bVar88,bVar141 & ~(byte)iVar62)));
          auVar76._0_8_ =
               CONCAT44((float)auVar43._4_4_ - fStack_1bc * fVar136,
                        (float)auVar43._0_4_ - local_1c0 * fVar136);
          auVar76._8_4_ = (float)auVar43._8_4_ - fVar126 * fVar136;
          auVar76._12_4_ = (float)auVar43._12_4_ - fVar136 * 0.0;
          auVar188 = NEON_ext(auVar76,auVar76,8,1);
          bVar98 = (byte)((uint)iVar91 >> 8);
          bVar99 = (byte)((uint)iVar91 >> 0x10);
          bVar100 = (byte)((uint)iVar91 >> 0x18);
          fVar195 = (float)CONCAT13(bVar140 & ~bVar100,
                                    CONCAT12(bVar139 & ~bVar99,
                                             CONCAT11(bVar138 & ~bVar98,bVar137 & ~(byte)iVar91)));
          param_5[1] = (ulong)auVar188._0_4_;
          *param_5 = auVar76._0_8_;
          fVar118 = fVar136 + fVar195;
          auVar77._0_4_ = local_1c0 * fVar195;
          auVar77._4_4_ = fStack_1bc * fVar195;
          auVar77._8_4_ = fVar126 * fVar195;
          auVar77._12_4_ = fVar195 * 0.0;
          auVar54 = auVar146;
          auVar146 = auVar77;
          fVar136 = (float)(CONCAT17(bVar144 & ~bVar90,
                                     CONCAT16(bVar143 & ~bVar89,
                                              CONCAT15(bVar142 & ~bVar88,
                                                       CONCAT14(bVar141 & ~(byte)iVar62,fVar136))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar140 & ~bVar100,
                                     CONCAT16(bVar139 & ~bVar99,
                                              CONCAT15(bVar138 & ~bVar98,
                                                       CONCAT14(bVar137 & ~(byte)iVar91,fVar195))))
                           >> 0x20);
        }
        auVar55._0_8_ = CONCAT44(auVar54._4_4_ + auVar146._4_4_,auVar54._0_4_ + auVar146._0_4_);
        auVar55._8_4_ = auVar54._8_4_ + auVar146._8_4_;
        auVar55._12_4_ = auVar54._12_4_ + auVar146._12_4_;
        auVar146 = NEON_ext(auVar55,auVar55,8,1);
        param_6[1] = (ulong)auVar146._0_4_;
        *param_6 = auVar55._0_8_;
        *param_8 = CONCAT44((float)(uVar168 >> 0x20) - fVar136,fVar127 - fVar118);
        return 2;
      }
      uVar34 = local_1a4 + 1;
      *(long *)(local_100 + (uVar14 * 2 + -7) * 2) = auVar42._8_8_;
      *(undefined8 *)(local_100 + (uVar14 * 2 + -8) * 2) = auVar42._0_8_;
      *(long *)(local_100 + (uVar14 * 2 + -0xf) * 2) = auVar43._8_8_;
      *(long *)(local_1a0 + uVar14 * 4 + 8) = auVar43._0_8_;
      *(long *)(local_e0[uVar14 - 2] + 8) = auVar146._8_8_;
      *(undefined8 *)(local_100 + uVar14 * 4) = auVar146._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar34;
        auVar146 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar119 = local_100[0];
        fVar126 = local_100[1];
        fVar101 = (float)uStack_f8;
        fVar108 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar146._8_8_ = uStack_f8;
          auVar146._0_4_ = local_100[0];
          auVar146._4_4_ = local_100[1];
          auVar7._4_4_ = fStack_ec;
          auVar7._0_4_ = local_f0;
          auVar7._8_4_ = fStack_e8;
          auVar7._12_4_ = fStack_e4;
          fVar145 = local_e0[0]._0_4_;
          auVar96._0_4_ = fVar145 - fVar119;
          fVar181 = local_e0[0]._4_4_;
          auVar96._4_4_ = fVar181 - fVar126;
          fVar187 = local_e0[0]._8_4_;
          auVar96._8_4_ = fVar187 - fVar101;
          auVar96._12_4_ = local_e0[0]._12_4_ - fVar108;
          auVar106._0_4_ = local_f0 - fVar119;
          auVar106._4_4_ = fStack_ec - fVar126;
          auVar106._8_4_ = fStack_e8 - fVar101;
          auVar106._12_4_ = fStack_e4 - fVar108;
          auVar185 = NEON_ext(auVar106,auVar106,8,1);
          auVar192 = NEON_ext(auVar96,auVar96,8,1);
          fVar176 = auVar106._0_4_ * auVar96._4_4_ - auVar106._4_4_ * auVar96._0_4_;
          uVar177 = NEON_ext(CONCAT44(auVar106._4_4_ * auVar96._8_4_ -
                                      auVar106._8_4_ * auVar96._4_4_,fVar176),
                             CONCAT44(auVar185._4_4_ * auVar96._4_4_ -
                                      auVar106._4_4_ * auVar192._4_4_,
                                      auVar185._0_4_ * auVar96._0_4_ -
                                      auVar106._0_4_ * auVar192._0_4_),4,1);
          fVar27 = (float)uVar177;
          auVar115._0_4_ = fVar27 * fVar27;
          fVar28 = (float)((ulong)uVar177 >> 0x20);
          auVar115._4_4_ = fVar28 * fVar28;
          auVar115._8_4_ = fVar176 * fVar176;
          auVar115._12_4_ = 0;
          auVar185 = NEON_ext(auVar115,auVar115,8,1);
          fVar128 = auVar185._0_4_ + auVar185._4_4_;
          fVar29 = auVar115._0_4_ + auVar115._4_4_ + fVar128;
          uVar177 = CONCAT44(auVar115._0_4_ + auVar115._4_4_ + fVar128,fVar29);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar29) {
            if (fVar29 != 0.0) {
              auVar185 = NEON_ext(auVar7,auVar7,8,1);
              auVar192 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar182 = local_f0 * fVar181 - fStack_ec * fVar145;
              auVar194 = NEON_ext(auVar146,auVar146,8,1);
              uVar110 = NEON_ext(CONCAT44(fStack_ec * fVar187 - fStack_e8 * fVar181,fVar182),
                                 CONCAT44(auVar185._4_4_ * fVar181 - fStack_ec * auVar192._4_4_,
                                          auVar185._0_4_ * fVar145 - local_f0 * auVar192._0_4_),4,1)
              ;
              fVar29 = fVar126 * fVar145 - fVar119 * fVar181;
              uVar191 = NEON_ext(CONCAT44(fVar101 * fVar181 - fVar126 * fVar187,fVar29),
                                 CONCAT44(fVar126 * auVar192._4_4_ - auVar194._4_4_ * fVar181,
                                          fVar119 * auVar192._0_4_ - auVar194._0_4_ * fVar145),4,1);
              fVar128 = fVar119 * fStack_ec - fVar126 * local_f0;
              uVar151 = NEON_ext(CONCAT44(fVar126 * fStack_e8 - fVar101 * fStack_ec,fVar128),
                                 CONCAT44(auVar194._4_4_ * fStack_ec - fVar126 * auVar185._4_4_,
                                          auVar194._0_4_ * local_f0 - fVar119 * auVar185._0_4_),4,1)
              ;
              auVar157._0_4_ = (float)uVar110 * fVar27;
              auVar157._4_4_ = (float)((ulong)uVar110 >> 0x20) * fVar28;
              auVar157._8_4_ = fVar182 * fVar176;
              auVar157._12_4_ = 0;
              auVar185 = NEON_ext(auVar157,auVar157,8,1);
              auVar164._0_4_ = (float)uVar191 * fVar27;
              auVar164._4_4_ = (float)((ulong)uVar191 >> 0x20) * fVar28;
              auVar164._8_4_ = fVar29 * fVar176;
              auVar164._12_4_ = 0;
              auVar192 = NEON_ext(auVar164,auVar164,8,1);
              fVar29 = auVar157._0_4_ + auVar157._4_4_ + auVar185._0_4_ + auVar185._4_4_;
              auVar174._0_4_ = (float)uVar151 * fVar27;
              auVar174._4_4_ = (float)((ulong)uVar151 >> 0x20) * fVar28;
              auVar174._8_4_ = fVar128 * fVar176;
              auVar174._12_4_ = 0;
              fVar128 = auVar164._0_4_ + auVar164._4_4_ + auVar192._0_4_ + auVar192._4_4_;
              auVar185 = NEON_ext(auVar174,auVar174,8,1);
              fVar182 = auVar174._0_4_ + auVar174._4_4_ + auVar185._0_4_ + auVar185._4_4_;
              bVar8 = (0.0 <= fVar29 && 0.0 <= fVar128) && 0.0 <= fVar182;
              auVar175._0_4_ = -(uint)bVar8;
              auVar175._4_4_ = -(uint)bVar8;
              auVar175._8_4_ = -(uint)bVar8;
              auVar175._12_4_ = -(uint)bVar8;
              NEON_ext(auVar175,auVar175,8,1);
              if (CONCAT13((char)auVar175._12_4_,
                           CONCAT12((char)auVar175._8_4_,
                                    CONCAT11((char)auVar175._4_4_,(char)auVar175._0_4_))) == -1) {
                auVar47._0_4_ = fVar119 * fVar27;
                auVar47._4_4_ = fVar126 * fVar28;
                auVar47._8_4_ = fVar101 * fVar176;
                auVar47._12_4_ = fVar108 * 0.0;
                auVar146 = NEON_ext(auVar47,auVar47,8,1);
                uVar151 = NEON_frecpe(uVar177,4);
                uVar110 = NEON_frecps(uVar177,uVar151,4);
                fVar119 = (float)uVar151 * (float)uVar110;
                fVar126 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
                uVar151 = NEON_frecps(uVar177,CONCAT44(fVar126,fVar119),4);
                fVar119 = fVar119 * (float)uVar151;
                fVar126 = fVar126 * (float)((ulong)uVar151 >> 0x20);
                uVar151 = NEON_frecps(uVar177,CONCAT44(fVar126,fVar119),4);
                fVar119 = fVar119 * (float)uVar151;
                fVar126 = fVar126 * (float)((ulong)uVar151 >> 0x20);
                uVar151 = NEON_frecps(uVar177,CONCAT44(fVar126,fVar119),4);
                fVar119 = fVar119 * (float)uVar151;
                uVar177 = NEON_frecps(uVar177,CONCAT44(fVar126 * (float)((ulong)uVar151 >> 0x20),
                                                       fVar119),4);
                fVar119 = (auVar47._0_4_ + auVar47._4_4_ + auVar146._0_4_ + auVar146._4_4_) *
                          fVar119 * (float)uVar177;
                auVar146._0_4_ = fVar27 * fVar119;
                auVar146._4_4_ = fVar28 * fVar119;
                auVar146._8_4_ = fVar176 * fVar119;
                auVar146._12_4_ = 0.0;
              }
              else {
                auVar125._0_4_ = -fVar119 * auVar106._0_4_;
                auVar125._4_4_ = -fVar126 * auVar106._4_4_;
                auVar125._8_4_ = -fVar101 * auVar106._8_4_;
                auVar125._12_4_ = auVar106._12_4_ * 0.0;
                auVar185 = NEON_ext(auVar125,auVar125,8,1);
                fVar176 = auVar185._0_4_ + auVar185._4_4_;
                auVar134._0_4_ = -local_f0 * auVar106._0_4_;
                auVar134._4_4_ = -fStack_ec * auVar106._4_4_;
                auVar134._8_4_ = -fStack_e8 * auVar106._8_4_;
                auVar134._12_4_ = auVar106._12_4_ * 0.0;
                auVar185 = NEON_ext(auVar134,auVar134,8,1);
                fVar30 = auVar185._0_4_ + auVar185._4_4_;
                fVar27 = auVar125._0_4_ + auVar125._4_4_ + fVar176;
                fVar28 = auVar134._0_4_ + auVar134._4_4_ + fVar30;
                fVar30 = auVar134._0_4_ + auVar134._4_4_ + fVar30;
                bVar8 = (0.0 <= fVar27 && fVar182 <= 0.0) && fVar28 <= 0.0;
                auVar165._0_4_ = -(uint)bVar8;
                auVar165._4_4_ = -(uint)bVar8;
                auVar165._8_4_ = -(uint)bVar8;
                auVar165._12_4_ = -(uint)bVar8;
                NEON_ext(auVar165,auVar165,8,1);
                if (CONCAT13((char)auVar165._12_4_,
                             CONCAT12((char)auVar165._8_4_,
                                      CONCAT11((char)auVar165._4_4_,(char)auVar165._0_4_))) == -1) {
                  uVar177 = CONCAT44((auVar125._0_4_ + auVar125._4_4_ + fVar176) - fVar30,
                                     fVar27 - fVar28);
                  uVar151 = NEON_frecpe(uVar177,4);
                  uVar110 = NEON_frecps(uVar177,uVar151,4);
                  fVar29 = (float)uVar151 * (float)uVar110;
                  fVar128 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
                  uVar151 = NEON_frecps(uVar177,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar151;
                  fVar128 = fVar128 * (float)((ulong)uVar151 >> 0x20);
                  uVar151 = NEON_frecps(uVar177,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar151;
                  fVar128 = fVar128 * (float)((ulong)uVar151 >> 0x20);
                  uVar151 = NEON_frecps(uVar177,CONCAT44(fVar128,fVar29),4);
                  fVar29 = fVar29 * (float)uVar151;
                  uVar177 = NEON_frecps(uVar177,CONCAT44(fVar128 * (float)((ulong)uVar151 >> 0x20),
                                                         fVar29),4);
                  fVar27 = fVar27 * (float)(-(uint)(1.1920929e-07 < ABS(fVar27 - fVar28)) &
                                           (uint)(fVar29 * (float)uVar177));
                  pfVar15 = local_1a0;
                  pfVar18 = local_1a0 + 4;
                  auVar48._0_8_ =
                       CONCAT44(fVar126 + auVar106._4_4_ * fVar27,fVar119 + auVar106._0_4_ * fVar27)
                  ;
                  auVar48._8_4_ = fVar101 + auVar106._8_4_ * fVar27;
                  auVar48._12_4_ = fVar108 + auVar106._12_4_ * fVar27;
                  auVar146 = NEON_ext(auVar48,auVar48,8,1);
                  pfVar17 = (float *)&local_180;
                  pfVar13 = &local_140;
                  pauVar16 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar146._8_4_ = (float)auVar146._0_4_;
                  auVar146._0_8_ = auVar48._0_8_;
                  auVar146._12_4_ = 0.0;
LAB_0025f420:
                  lVar9 = 1;
                  pauVar19 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar166._0_4_ = -local_f0 * auVar96._0_4_;
                  auVar166._4_4_ = -fStack_ec * auVar96._4_4_;
                  auVar166._8_4_ = -fStack_e8 * auVar96._8_4_;
                  auVar166._12_4_ = auVar96._12_4_ * 0.0;
                  auVar185 = NEON_ext(auVar166,auVar166,8,1);
                  fVar31 = auVar185._0_4_ + auVar185._4_4_;
                  auVar107._0_4_ = auVar106._0_4_ * -fVar145;
                  auVar107._4_4_ = auVar106._4_4_ * -fVar181;
                  auVar107._8_4_ = auVar106._8_4_ * -fVar187;
                  auVar107._12_4_ = auVar106._12_4_ * 0.0;
                  auVar186._0_4_ = auVar96._0_4_ * -fVar145;
                  auVar186._4_4_ = auVar96._4_4_ * -fVar181;
                  auVar186._8_4_ = auVar96._8_4_ * -fVar187;
                  auVar186._12_4_ = auVar96._12_4_ * 0.0;
                  fVar176 = auVar166._0_4_ + auVar166._4_4_ + fVar31;
                  auVar185 = NEON_ext(auVar107,auVar107,8,1);
                  fVar32 = auVar185._0_4_ + auVar185._4_4_;
                  fVar182 = auVar107._0_4_ + auVar107._4_4_ + fVar32;
                  auVar185 = NEON_ext(auVar186,auVar186,8,1);
                  fVar22 = auVar185._0_4_ + auVar185._4_4_;
                  fVar23 = auVar186._0_4_ + auVar186._4_4_ + fVar22;
                  fVar22 = auVar186._0_4_ + auVar186._4_4_ + fVar22;
                  bVar8 = (fVar28 <= fVar176 && fVar29 <= 0.0) && fVar23 <= fVar182;
                  auVar158._0_4_ = -(uint)bVar8;
                  auVar158._4_4_ = -(uint)bVar8;
                  auVar158._8_4_ = -(uint)bVar8;
                  auVar158._12_4_ = -(uint)bVar8;
                  NEON_ext(auVar158,auVar158,8,1);
                  if (CONCAT13((char)auVar158._12_4_,
                               CONCAT12((char)auVar158._8_4_,
                                        CONCAT11((char)auVar158._4_4_,(char)auVar158._0_4_))) == -1)
                  {
                    fVar119 = (fVar176 - fVar28) + (fVar182 - fVar23);
                    uVar177 = CONCAT44(((auVar166._0_4_ + auVar166._4_4_ + fVar31) - fVar30) +
                                       ((auVar107._0_4_ + auVar107._4_4_ + fVar32) - fVar22),fVar119
                                      );
                    uVar151 = NEON_frecpe(uVar177,4);
                    uVar110 = NEON_frecps(uVar177,uVar151,4);
                    fVar126 = (float)uVar151 * (float)uVar110;
                    fVar101 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar101,fVar126),4);
                    fVar126 = fVar126 * (float)uVar151;
                    fVar101 = fVar101 * (float)((ulong)uVar151 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar101,fVar126),4);
                    fVar126 = fVar126 * (float)uVar151;
                    fVar101 = fVar101 * (float)((ulong)uVar151 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar101,fVar126),4);
                    fVar126 = fVar126 * (float)uVar151;
                    uVar177 = NEON_frecps(uVar177,CONCAT44(fVar101 * (float)((ulong)uVar151 >> 0x20)
                                                           ,fVar126),4);
                    fVar119 = (fVar176 - fVar28) *
                              (float)(-(uint)(1.1920929e-07 < ABS(fVar119)) &
                                     (uint)(fVar126 * (float)uVar177));
                    auVar49._0_8_ =
                         CONCAT44(fStack_ec + (fVar181 - fStack_ec) * fVar119,
                                  local_f0 + (fVar145 - local_f0) * fVar119);
                    auVar49._8_4_ = fStack_e8 + (fVar187 - fStack_e8) * fVar119;
                    auVar49._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar119;
                    auVar146 = NEON_ext(auVar49,auVar49,8,1);
                    auVar3._8_4_ = auVar146._0_4_;
                    auVar3._0_8_ = auVar49._0_8_;
                    pfVar15 = local_1a0 + 1;
                    pfVar18 = local_1a0 + 5;
                    pfVar17 = (float *)&uStack_170;
                    pfVar13 = (float *)&uStack_130;
                    pauVar16 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar159._0_4_ = -fVar119 * auVar96._0_4_;
                    auVar159._4_4_ = -fVar126 * auVar96._4_4_;
                    auVar159._8_4_ = -fVar101 * auVar96._8_4_;
                    auVar159._12_4_ = auVar96._12_4_ * 0.0;
                    auVar185 = NEON_ext(auVar159,auVar159,8,1);
                    fVar145 = auVar185._0_4_ + auVar185._4_4_;
                    fVar29 = auVar159._0_4_ + auVar159._4_4_ + fVar145;
                    bVar8 = (fVar128 <= 0.0 && 0.0 <= fVar29) && fVar23 <= 0.0;
                    auVar150._0_4_ = -(uint)bVar8;
                    auVar150._4_4_ = -(uint)bVar8;
                    auVar150._8_4_ = -(uint)bVar8;
                    auVar150._12_4_ = -(uint)bVar8;
                    NEON_ext(auVar150,auVar150,8,1);
                    if (CONCAT13((char)auVar150._12_4_,
                                 CONCAT12((char)auVar150._8_4_,
                                          CONCAT11((char)auVar150._4_4_,(char)auVar150._0_4_))) !=
                        -1) {
                      bVar8 = fVar27 <= 0.0 && fVar29 <= 0.0;
                      auVar97._0_4_ = -(uint)bVar8;
                      auVar97._4_4_ = -(uint)bVar8;
                      auVar97._8_4_ = -(uint)bVar8;
                      auVar97._12_4_ = -(uint)bVar8;
                      NEON_ext(auVar97,auVar97,8,1);
                      if (CONCAT13((char)auVar97._12_4_,
                                   CONCAT12((char)auVar97._8_4_,
                                            CONCAT11((char)auVar97._4_4_,(char)auVar97._0_4_))) ==
                          -1) {
                        pfVar15 = local_1a0;
                        pfVar18 = local_1a0 + 4;
                        pfVar17 = (float *)&local_180;
                        pfVar13 = &local_140;
                        pauVar16 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar8 = 0.0 <= fVar28 && fVar176 <= fVar28;
                        auVar45._0_4_ = -(uint)bVar8;
                        auVar45._4_4_ = -(uint)bVar8;
                        auVar45._8_4_ = -(uint)bVar8;
                        auVar45._12_4_ = -(uint)bVar8;
                        NEON_ext(auVar45,auVar45,8,1);
                        iVar62 = CONCAT13((char)auVar45._12_4_,
                                          CONCAT12((char)auVar45._8_4_,
                                                   CONCAT11((char)auVar45._4_4_,(char)auVar45._0_4_)
                                                  ));
                        iVar91 = -(uint)(iVar62 == -1);
                        auVar46._4_4_ = iVar91;
                        auVar46._0_4_ = iVar91;
                        auVar46._8_4_ = iVar91;
                        auVar46._12_4_ = iVar91;
                        local_1a4 = 1;
                        lVar9 = 1;
                        if (iVar62 != -1) {
                          lVar9 = 2;
                        }
                        auVar146 = local_e0[0] ^ (local_e0[0] ^ auVar7) & auVar46;
                        pauVar16 = (undefined1 (*) [16])(local_100 + lVar9 * 4);
                        pfVar13 = local_100 + (lVar9 * 2 + -8) * 2;
                        pfVar17 = local_1a0 + lVar9 * 4 + 8;
                        pfVar18 = local_1a0 + lVar9 + 4;
                        pfVar15 = local_1a0 + lVar9;
                      }
                      goto LAB_0025f420;
                    }
                    uVar177 = CONCAT44((auVar159._0_4_ + auVar159._4_4_ + fVar145) - fVar22,
                                       fVar29 - fVar23);
                    uVar151 = NEON_frecpe(uVar177,4);
                    uVar110 = NEON_frecps(uVar177,uVar151,4);
                    fVar128 = (float)uVar151 * (float)uVar110;
                    fVar145 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
                    fVar128 = fVar128 * (float)uVar151;
                    fVar145 = fVar145 * (float)((ulong)uVar151 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
                    fVar128 = fVar128 * (float)uVar151;
                    fVar145 = fVar145 * (float)((ulong)uVar151 >> 0x20);
                    uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
                    fVar128 = fVar128 * (float)uVar151;
                    uVar177 = NEON_frecps(uVar177,CONCAT44(fVar145 * (float)((ulong)uVar151 >> 0x20)
                                                           ,fVar128),4);
                    fVar29 = fVar29 * (float)(-(uint)(1.1920929e-07 < ABS(fVar29 - fVar23)) &
                                             (uint)(fVar128 * (float)uVar177));
                    auVar50._0_8_ =
                         CONCAT44(fVar126 + auVar96._4_4_ * fVar29,fVar119 + auVar96._0_4_ * fVar29)
                    ;
                    auVar50._8_4_ = fVar101 + auVar96._8_4_ * fVar29;
                    auVar50._12_4_ = fVar108 + auVar96._12_4_ * fVar29;
                    auVar146 = NEON_ext(auVar50,auVar50,8,1);
                    auVar3._8_4_ = auVar146._0_4_;
                    auVar3._0_8_ = auVar50._0_8_;
                    pfVar15 = local_1a0;
                    pfVar18 = local_1a0 + 4;
                    pfVar17 = (float *)&local_180;
                    pfVar13 = &local_140;
                    pauVar16 = (undefined1 (*) [16])local_100;
                  }
                  auVar146._12_4_ = 0.0;
                  auVar146._0_12_ = auVar3;
                  local_1a4 = 2;
                  lVar9 = 2;
                  pauVar19 = local_e0;
                }
                uStack_f8 = *(undefined8 *)((long)*pauVar16 + 8);
                local_100 = (float  [2])*(undefined8 *)*pauVar16;
                fStack_e8 = (float)*(undefined8 *)((long)*pauVar19 + 8);
                fStack_e4 = (float)((ulong)*(undefined8 *)((long)*pauVar19 + 8) >> 0x20);
                local_f0 = (float)*(undefined8 *)*pauVar19;
                fStack_ec = (float)((ulong)*(undefined8 *)*pauVar19 >> 0x20);
                fStack_138 = (float)*(undefined8 *)(pfVar13 + 2);
                fStack_134 = (float)((ulong)*(undefined8 *)(pfVar13 + 2) >> 0x20);
                local_140 = (float)*(undefined8 *)pfVar13;
                fStack_13c = (float)((ulong)*(undefined8 *)pfVar13 >> 0x20);
                uStack_128 = *(undefined8 *)(local_100 + (lVar9 * 2 + -7) * 2);
                uStack_130 = *(undefined8 *)(local_100 + (lVar9 * 2 + -8) * 2);
                local_1a0[4] = *pfVar18;
                fStack_178 = (float)*(undefined8 *)(pfVar17 + 2);
                fStack_174 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
                local_180._0_4_ = (float)*(undefined8 *)pfVar17;
                local_180._4_4_ = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
                uStack_168 = *(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2);
                uStack_170 = *(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
                local_1a0[5] = local_1a0[lVar9 + 4];
                local_1a0[0] = *pfVar15;
                local_1a0[1] = local_1a0[lVar9];
              }
            }
          }
          else {
            auVar71._0_4_ = auVar106._0_4_ * auVar106._0_4_;
            auVar71._4_4_ = auVar106._4_4_ * auVar106._4_4_;
            auVar71._8_4_ = auVar106._8_4_ * auVar106._8_4_;
            auVar71._12_4_ = auVar106._12_4_ * auVar106._12_4_;
            auVar146 = NEON_ext(auVar71,auVar71,8,1);
            fVar128 = auVar146._0_4_ + auVar146._4_4_;
            fVar29 = auVar71._0_4_ + auVar71._4_4_ + fVar128;
            uVar177 = CONCAT44(auVar71._0_4_ + auVar71._4_4_ + fVar128,fVar29);
            bVar8 = fVar29 <= 1.1920929e-07;
            auVar84._0_4_ = -(uint)bVar8;
            auVar84._4_4_ = -(uint)bVar8;
            auVar84._8_4_ = -(uint)bVar8;
            auVar84._12_4_ = -(uint)bVar8;
            NEON_ext(auVar84,auVar84,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar84._12_4_,
                         CONCAT12((char)auVar84._8_4_,
                                  CONCAT11((char)auVar84._4_4_,(char)auVar84._0_4_))) != -1) {
              auVar85._0_4_ = -fVar119 * auVar106._0_4_;
              auVar85._4_4_ = -fVar126 * auVar106._4_4_;
              auVar85._8_4_ = -fVar101 * auVar106._8_4_;
              auVar85._12_4_ = auVar106._12_4_ * 0.0;
              auVar146 = NEON_ext(auVar85,auVar85,8,1);
              fVar29 = auVar146._0_4_ + auVar146._4_4_;
              uVar151 = NEON_frecpe(uVar177,4);
              uVar110 = NEON_frecps(uVar177,uVar151,4);
              fVar128 = (float)uVar151 * (float)uVar110;
              fVar145 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
              uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
              fVar128 = fVar128 * (float)uVar151;
              fVar145 = fVar145 * (float)((ulong)uVar151 >> 0x20);
              uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
              fVar128 = fVar128 * (float)uVar151;
              fVar145 = fVar145 * (float)((ulong)uVar151 >> 0x20);
              uVar151 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
              fVar128 = fVar128 * (float)uVar151;
              fVar145 = fVar145 * (float)((ulong)uVar151 >> 0x20);
              uVar177 = NEON_frecps(uVar177,CONCAT44(fVar145,fVar128),4);
              uVar151 = NEON_fmov(0x3f800000,4);
              uVar177 = NEON_fmin(CONCAT44((auVar85._0_4_ + auVar85._4_4_ + fVar29) *
                                           fVar145 * (float)((ulong)uVar177 >> 0x20),
                                           (auVar85._0_4_ + auVar85._4_4_ + fVar29) *
                                           fVar128 * (float)uVar177),uVar151,4);
              uVar177 = NEON_fmax(uVar177,0,4);
              fVar29 = (float)uVar177;
              fVar128 = auVar106._0_4_ * fVar29;
              fVar145 = auVar106._4_4_ * fVar29;
              fVar181 = auVar106._8_4_ * fVar29;
              fVar29 = auVar106._12_4_ * fVar29;
              goto LAB_0025f08c;
            }
LAB_0025f0a0:
            auVar146._8_8_ = uStack_f8;
            auVar146._0_4_ = local_100[0];
            auVar146._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
        else {
          bVar8 = local_1a4 == 1;
          local_1a4 = uVar34;
          if (bVar8) {
            fVar128 = local_f0 - fVar119;
            fVar145 = fStack_ec - fVar126;
            fVar181 = fStack_e8 - fVar101;
            fVar29 = fStack_e4 - fVar108;
            auVar83._0_4_ = fVar128 * fVar128;
            auVar83._4_4_ = fVar145 * fVar145;
            auVar83._8_4_ = fVar181 * fVar181;
            auVar83._12_4_ = fVar29 * fVar29;
            auVar146 = NEON_ext(auVar83,auVar83,8,1);
            fVar27 = auVar146._0_4_ + auVar146._4_4_;
            fVar187 = auVar83._0_4_ + auVar83._4_4_ + fVar27;
            uVar177 = CONCAT44(auVar83._0_4_ + auVar83._4_4_ + fVar27,fVar187);
            bVar8 = fVar187 <= 1.1920929e-07;
            auVar94._0_4_ = -(uint)bVar8;
            auVar94._4_4_ = -(uint)bVar8;
            auVar94._8_4_ = -(uint)bVar8;
            auVar94._12_4_ = -(uint)bVar8;
            NEON_ext(auVar94,auVar94,8,1);
            if (CONCAT13((char)auVar94._12_4_,
                         CONCAT12((char)auVar94._8_4_,
                                  CONCAT11((char)auVar94._4_4_,(char)auVar94._0_4_))) == -1)
            goto LAB_0025f0a0;
            auVar95._0_4_ = -fVar119 * fVar128;
            auVar95._4_4_ = -fVar126 * fVar145;
            auVar95._8_4_ = -fVar101 * fVar181;
            auVar95._12_4_ = fVar29 * 0.0;
            auVar146 = NEON_ext(auVar95,auVar95,8,1);
            fVar187 = auVar146._0_4_ + auVar146._4_4_;
            uVar151 = NEON_frecpe(uVar177,4);
            uVar110 = NEON_frecps(uVar177,uVar151,4);
            fVar27 = (float)uVar151 * (float)uVar110;
            fVar28 = (float)((ulong)uVar151 >> 0x20) * (float)((ulong)uVar110 >> 0x20);
            uVar151 = NEON_frecps(uVar177,CONCAT44(fVar28,fVar27),4);
            fVar27 = fVar27 * (float)uVar151;
            fVar28 = fVar28 * (float)((ulong)uVar151 >> 0x20);
            uVar151 = NEON_frecps(uVar177,CONCAT44(fVar28,fVar27),4);
            fVar27 = fVar27 * (float)uVar151;
            fVar28 = fVar28 * (float)((ulong)uVar151 >> 0x20);
            uVar151 = NEON_frecps(uVar177,CONCAT44(fVar28,fVar27),4);
            fVar27 = fVar27 * (float)uVar151;
            fVar28 = fVar28 * (float)((ulong)uVar151 >> 0x20);
            uVar177 = NEON_frecps(uVar177,CONCAT44(fVar28,fVar27),4);
            uVar151 = NEON_fmov(0x3f800000,4);
            uVar177 = NEON_fmin(CONCAT44((auVar95._0_4_ + auVar95._4_4_ + fVar187) *
                                         fVar28 * (float)((ulong)uVar177 >> 0x20),
                                         (auVar95._0_4_ + auVar95._4_4_ + fVar187) *
                                         fVar27 * (float)uVar177),uVar151,4);
            uVar177 = NEON_fmax(uVar177,0,4);
            fVar187 = (float)uVar177;
            fVar128 = fVar128 * fVar187;
            fVar145 = fVar145 * fVar187;
            fVar181 = fVar181 * fVar187;
            fVar29 = fVar29 * fVar187;
LAB_0025f08c:
            auVar44._0_8_ = CONCAT44(fVar126 + fVar145,fVar119 + fVar128);
            auVar44._8_4_ = fVar101 + fVar181;
            auVar44._12_4_ = fVar108 + fVar29;
            auVar146 = NEON_ext(auVar44,auVar44,8,1);
            auVar146._8_4_ = (float)auVar146._0_4_;
            auVar146._0_8_ = auVar44._0_8_;
            auVar146._12_4_ = 0.0;
          }
        }
      }
      fVar101 = auVar146._0_4_;
      auVar72._0_4_ = fVar101 * fVar101;
      fVar108 = auVar146._4_4_;
      auVar72._4_4_ = fVar108 * fVar108;
      fVar29 = auVar146._8_4_;
      auVar72._8_4_ = fVar29 * fVar29;
      auVar72._12_4_ = auVar146._12_4_ * auVar146._12_4_;
      auVar185 = NEON_ext(auVar72,auVar72,8,1);
      uStack_b8 = auVar146._8_8_;
      local_c0 = auVar146._0_8_;
      fVar126 = auVar185._0_4_ + auVar185._4_4_;
      fVar119 = auVar72._0_4_ + auVar72._4_4_ + fVar126;
      fVar126 = auVar72._0_4_ + auVar72._4_4_ + fVar126;
      uVar11 = CONCAT44(fVar126,fVar119);
      uVar177 = NEON_frsqrte(uVar11,4);
      fVar128 = (float)uVar177;
      fVar145 = (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frsqrts(CONCAT44(fVar145 * fVar145,fVar128 * fVar128),uVar11,4);
      fVar128 = fVar128 * (float)uVar177;
      fVar145 = fVar145 * (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frsqrts(CONCAT44(fVar145 * fVar145,fVar128 * fVar128),uVar11,4);
      fVar128 = fVar128 * (float)uVar177;
      fVar145 = fVar145 * (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frsqrts(CONCAT44(fVar145 * fVar145,fVar128 * fVar128),uVar11,4);
      fVar128 = fVar128 * (float)uVar177;
      fVar145 = fVar145 * (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frsqrts(CONCAT44(fVar145 * fVar145,fVar128 * fVar128),uVar11,4);
      uVar14 = CONCAT44(fVar126 * fVar145 * (float)((ulong)uVar177 >> 0x20),
                        fVar119 * fVar128 * (float)uVar177);
      uVar14 = uVar14 ^ (uVar14 ^ uVar11) &
                        CONCAT44(-(uint)(fVar119 == 0.0),-(uint)(fVar119 == 0.0));
      uVar177 = NEON_frecpe(uVar14,4);
      uVar151 = NEON_frecps(uVar14,uVar177,4);
      fVar119 = (float)uVar177 * (float)uVar151;
      fVar126 = (float)((ulong)uVar177 >> 0x20) * (float)((ulong)uVar151 >> 0x20);
      uVar177 = NEON_frecps(uVar14,CONCAT44(fVar126,fVar119),4);
      fVar119 = fVar119 * (float)uVar177;
      fVar126 = fVar126 * (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frecps(uVar14,CONCAT44(fVar126,fVar119),4);
      fVar119 = fVar119 * (float)uVar177;
      fVar126 = fVar126 * (float)((ulong)uVar177 >> 0x20);
      uVar177 = NEON_frecps(uVar14,CONCAT44(fVar126,fVar119),4);
      fVar119 = fVar119 * (float)uVar177;
      uVar177 = NEON_frecps(uVar14,CONCAT44(fVar126 * (float)((ulong)uVar177 >> 0x20),fVar119),4);
      fVar119 = fVar119 * (float)uVar177;
      auVar102._0_4_ = fVar101 * fVar119;
      auVar102._4_4_ = fVar108 * fVar119;
      auVar102._8_4_ = fVar29 * fVar119;
      bVar8 = (float)uVar14 < fVar127;
      bVar5 = fVar136 < (float)uVar14 && bVar8;
      auVar86._0_4_ = -(uint)bVar5;
      auVar86._4_4_ = -(uint)bVar5;
      auVar86._8_4_ = -(uint)bVar5;
      auVar86._12_4_ = -(uint)bVar5;
      NEON_ext(auVar86,auVar86,8,1);
    } while (CONCAT13((char)auVar86._12_4_,
                      CONCAT12((char)auVar86._8_4_,CONCAT11((char)auVar86._4_4_,(char)auVar86._0_4_)
                              )) == -1);
    uVar135 = CONCAT26(-(ushort)!bVar8,
                       CONCAT24(-(ushort)!bVar8,CONCAT22(-(ushort)!bVar8,-(ushort)!bVar8)));
  }
  else {
    uVar135 = 0;
  }
  uVar24 = (ushort)((ulong)uVar135 >> 0x10);
  uVar25 = (ushort)((ulong)uVar135 >> 0x20);
  uVar33 = (ushort)((ulong)uVar135 >> 0x30);
  auVar68._0_4_ = (int)((uint)(ushort)uVar135 << 0x1f) >> 0x1f;
  auVar68._4_4_ = (int)((uint)uVar24 << 0x1f) >> 0x1f;
  auVar68._8_4_ = (int)((uint)uVar25 << 0x1f) >> 0x1f;
  auVar68._12_4_ = (int)((uint)uVar33 << 0x1f) >> 0x1f;
  auVar69 = NEON_ext(auVar68,auVar68,8,1);
  auVar41._0_4_ =
       (float)CONCAT13((char)((short)(uVar33 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar25 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar24 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar135 << 0xf) >> 0xf))));
  auVar41[4] = auVar69[0];
  auVar41[5] = auVar69[2];
  auVar41[6] = auVar69[4];
  auVar41[7] = auVar69[6];
  auVar41._8_8_ = 0;
  if (auVar41._0_4_ != -NAN) {
    if ((param_9 != (byte *)0x0) && (*param_11 = (byte)local_1a4, local_1a4 != 0)) {
      if (local_1a4 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar15 = local_1a0 + 5;
        pfVar17 = local_1a0 + 1;
        do {
          pfVar13 = pfVar15 + -1;
          fVar136 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar118 = pfVar17[-1];
          fVar195 = *pfVar17;
          lVar12 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar12)[-1] = SUB41(fVar118,0);
          pbVar21[1] = SUB41(fVar136,0);
          param_10[lVar12] = SUB41(fVar195,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar118 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar118,0);
    }
    return 5;
  }
  local_c0 = auVar188._0_8_;
  uStack_b8 = auVar188._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_0025f814:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar41._0_4_ =
           local_140 +
           ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0];
      auVar41._4_4_ =
           fStack_13c +
           (uStack_130._4_4_ - fStack_13c) * local_a8[0] + (fStack_11c - fStack_13c) * local_b0[0];
      auVar41._8_4_ =
           fStack_138 +
           ((float)uStack_128 - fStack_138) * local_a8[0] + (fStack_118 - fStack_138) * local_b0[0];
      auVar41._12_4_ = fStack_134 + 0.0;
      auVar69._0_4_ =
           (float)local_180 +
           ((float)uStack_170 - (float)local_180) * local_a8[0] +
           (local_160 - (float)local_180) * local_b0[0];
      auVar69._4_4_ =
           local_180._4_4_ +
           (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
           (fStack_15c - local_180._4_4_) * local_b0[0];
      auVar69._8_4_ =
           fStack_178 +
           ((float)uStack_168 - fStack_178) * local_a8[0] + (fStack_158 - fStack_178) * local_b0[0];
      auVar69._12_4_ = fStack_174 + 0.0;
      goto LAB_0025f92c;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar51._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar51._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar51._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar146 = NEON_ext(auVar51,auVar51,8,1);
      auVar41._8_4_ = (float)auVar146._0_4_;
      auVar41._0_8_ = auVar51._0_8_;
      auVar41._12_4_ = 0.0;
      auVar73._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar73._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar73._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar146 = NEON_ext(auVar73,auVar73,8,1);
      auVar69._8_4_ = (float)auVar146._0_4_;
      auVar69._0_8_ = auVar73._0_8_;
      auVar69._12_4_ = 0.0;
      goto LAB_0025f92c;
    }
    if (local_1a4 != 1) goto LAB_0025f92c;
  }
  else {
    uVar34 = local_1a4 - 1;
    *param_11 = (byte)uVar34;
    if (uVar34 != 0) {
      if (uVar34 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar15 = local_1a0 + 5;
        pfVar17 = local_1a0 + 1;
        do {
          pfVar13 = pfVar15 + -1;
          fVar119 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar136 = pfVar17[-1];
          fVar126 = *pfVar17;
          lVar12 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar12)[-1] = SUB41(fVar136,0);
          pbVar21[1] = SUB41(fVar119,0);
          param_10[lVar12] = SUB41(fVar126,0);
        } while ((ulong)uVar34 - ((ulong)uVar34 & 1) != lVar9);
        if ((uVar34 & 1) == 0) goto LAB_0025f814;
      }
      fVar136 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar136,0);
      goto LAB_0025f814;
    }
  }
  auVar41._4_4_ = fStack_13c;
  auVar41._0_4_ = local_140;
  auVar41._8_4_ = fStack_138;
  auVar41._12_4_ = fStack_134;
  auVar69._4_4_ = local_180._4_4_;
  auVar69._0_4_ = (float)local_180;
  auVar69._8_4_ = fStack_178;
  auVar69._12_4_ = fStack_174;
LAB_0025f92c:
  uVar135 = NEON_frecpe(uVar168,4);
  uVar161 = NEON_frecps(uVar168,uVar135,4);
  fVar136 = (float)uVar135 * (float)uVar161;
  fVar119 = (float)((ulong)uVar135 >> 0x20) * (float)((ulong)uVar161 >> 0x20);
  uVar135 = NEON_frecps(uVar168,CONCAT44(fVar119,fVar136),4);
  fVar136 = fVar136 * (float)uVar135;
  fVar119 = fVar119 * (float)((ulong)uVar135 >> 0x20);
  uVar135 = NEON_frecps(uVar168,CONCAT44(fVar119,fVar136),4);
  fVar136 = fVar136 * (float)uVar135;
  fVar119 = fVar119 * (float)((ulong)uVar135 >> 0x20);
  uVar135 = NEON_frecps(uVar168,CONCAT44(fVar119,fVar136),4);
  fVar136 = fVar136 * (float)uVar135;
  uVar135 = NEON_frecps(uVar168,CONCAT44(fVar119 * (float)((ulong)uVar135 >> 0x20),fVar136),4);
  fVar136 = fVar136 * (float)uVar135;
  local_c0._0_4_ = (float)local_c0 * fVar136;
  local_c0._4_4_ = local_c0._4_4_ * fVar136;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar136;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar136 = (float)uVar168;
  fVar119 = (float)(uVar168 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar53._0_8_ =
         CONCAT44(auVar41._4_4_ - local_c0._4_4_ * fVar196,auVar41._0_4_ - (float)local_c0 * fVar196
                 );
    auVar53._8_4_ = auVar41._8_4_ - (float)uStack_b8 * fVar196;
    auVar53._12_4_ = auVar41._12_4_ - fVar196 * 0.0;
    auVar75._0_8_ =
         CONCAT44(auVar69._4_4_ + local_c0._4_4_ * fVar195,auVar69._0_4_ + (float)local_c0 * fVar195
                 );
    auVar75._8_4_ = auVar69._8_4_ + (float)uStack_b8 * fVar195;
    auVar75._12_4_ = auVar69._12_4_ + fVar195 * 0.0;
    auVar146 = NEON_ext(auVar53,auVar53,8,1);
    auVar188 = NEON_ext(auVar75,auVar75,8,1);
    param_5[1] = (ulong)auVar146._0_4_;
    *param_5 = auVar53._0_8_;
    param_6[1] = (ulong)auVar188._0_4_;
    *param_6 = auVar75._0_8_;
    *param_8 = CONCAT44(fVar119 - fVar118,fVar136 - fVar118);
  }
  else {
    iVar62 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar91 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar88 = (byte)((uint)iVar62 >> 8);
    bVar89 = (byte)((uint)iVar62 >> 0x10);
    bVar90 = (byte)((uint)iVar62 >> 0x18);
    fVar195 = (float)CONCAT13(bVar144 & ~bVar90,
                              CONCAT12(bVar143 & ~bVar89,
                                       CONCAT11(bVar142 & ~bVar88,bVar141 & ~(byte)iVar62)));
    bVar98 = (byte)((uint)iVar91 >> 8);
    bVar99 = (byte)((uint)iVar91 >> 0x10);
    bVar100 = (byte)((uint)iVar91 >> 0x18);
    fVar196 = (float)CONCAT13(bVar140 & ~bVar100,
                              CONCAT12(bVar139 & ~bVar99,
                                       CONCAT11(bVar138 & ~bVar98,bVar137 & ~(byte)iVar91)));
    auVar52._0_8_ =
         CONCAT44(auVar41._4_4_ - local_c0._4_4_ * fVar195,auVar41._0_4_ - (float)local_c0 * fVar195
                 );
    auVar52._8_4_ = auVar41._8_4_ - (float)uStack_b8 * fVar195;
    auVar52._12_4_ = auVar41._12_4_ - fVar195 * 0.0;
    auVar74._0_8_ =
         CONCAT44(auVar69._4_4_ + local_c0._4_4_ * fVar196,auVar69._0_4_ + (float)local_c0 * fVar196
                 );
    auVar74._8_4_ = auVar69._8_4_ + (float)uStack_b8 * fVar196;
    auVar74._12_4_ = auVar69._12_4_ + fVar196 * 0.0;
    auVar146 = NEON_ext(auVar52,auVar52,8,1);
    auVar188 = NEON_ext(auVar74,auVar74,8,1);
    param_5[1] = (ulong)auVar146._0_4_;
    *param_5 = auVar52._0_8_;
    param_6[1] = (ulong)auVar188._0_4_;
    *param_6 = auVar74._0_8_;
    *param_8 = CONCAT44(fVar119 - ((float)(CONCAT17(bVar144 & ~bVar90,
                                                    CONCAT16(bVar143 & ~bVar89,
                                                             CONCAT15(bVar142 & ~bVar88,
                                                                      CONCAT14(bVar141 & ~(byte)
                                                  iVar62,fVar195)))) >> 0x20) +
                                  (float)(CONCAT17(bVar140 & ~bVar100,
                                                   CONCAT16(bVar139 & ~bVar99,
                                                            CONCAT15(bVar138 & ~bVar98,
                                                                     CONCAT14(bVar137 & ~(byte)
                                                  iVar91,fVar196)))) >> 0x20)),
                        fVar136 - (fVar195 + fVar196));
    if (fVar136 <= fVar118 + (float)uVar35) {
      return 2;
    }
  }
  return 4;
}


