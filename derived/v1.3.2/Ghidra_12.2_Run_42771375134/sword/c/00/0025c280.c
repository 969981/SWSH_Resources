/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0025c280; name: FUN_0025c280
 */


/* WARNING: Removing unreachable block (ram,0x0025d6f8) */
/* WARNING: Removing unreachable block (ram,0x0025cd68) */
/* WARNING: Removing unreachable block (ram,0x0025d77c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0025c280(long param_1,long param_2,undefined1 (*param_3) [16],undefined8 *param_4,
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
  ulong uVar10;
  long lVar11;
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
  ushort uVar23;
  float fVar22;
  ushort uVar24;
  ushort uVar27;
  float fVar25;
  float fVar26;
  uint uVar28;
  undefined8 uVar29;
  uint uVar56;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar55;
  undefined1 auVar37 [16];
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
  int iVar57;
  float fVar74;
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
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  byte bVar84;
  byte bVar85;
  byte bVar86;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  int iVar87;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar97;
  float fVar105;
  undefined1 auVar98 [12];
  float fVar104;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined1 auVar112 [12];
  undefined8 uVar111;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar120;
  undefined8 uVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar127;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined8 uVar130;
  float fVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  ulong uVar140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  float fVar144;
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
  undefined8 uVar157;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  float fVar161;
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  float fVar165;
  undefined8 uVar166;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined8 uVar173;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  float fVar177;
  float fVar178;
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
  
  lVar11 = *(long *)(param_1 + 8);
  lVar9 = *(long *)(param_2 + 8);
  fVar178 = *(float *)(lVar11 + 0x10);
  uVar29 = NEON_fmin(CONCAT44(*(undefined4 *)(lVar11 + 0x14),*(undefined4 *)(lVar11 + 0x14)),
                     CONCAT44(*(undefined4 *)(lVar9 + 0x14),*(undefined4 *)(lVar9 + 0x14)),4);
  fVar177 = *(float *)(lVar9 + 0x10);
  fVar131 = (float)uVar29 * 0.1;
  fVar120 = fVar178 + fVar177;
  uVar29 = *param_4;
  local_1a4 = 0;
  local_1b0 = 0;
  uVar14 = (ulong)*param_11;
  if (uVar14 == 0) {
    auVar145 = *param_3;
    auVar167._0_4_ = auVar145._0_4_ * auVar145._0_4_;
    auVar167._4_4_ = auVar145._4_4_ * auVar145._4_4_;
    auVar167._8_4_ = auVar145._8_4_ * auVar145._8_4_;
    auVar167._12_4_ = auVar145._12_4_ * auVar145._12_4_;
    auVar170 = NEON_ext(auVar167,auVar167,8,1);
    auVar170._0_4_ =
         -(uint)(0.0 < auVar167._0_4_ + auVar167._4_4_ + auVar170._0_4_ + auVar170._4_4_);
    auVar176._8_8_ = _UNK_01d4ae58;
    auVar176._0_8_ = _DAT_01d4ae50;
    uVar140 = 0x7f7fffff7f7fffff;
    auVar170._4_4_ = auVar170._0_4_;
    auVar170._8_4_ = auVar170._0_4_;
    auVar170._12_4_ = auVar170._0_4_;
    auVar145 = auVar176 ^ (auVar176 ^ auVar145) & auVar170;
    fVar119 = auVar145._0_4_;
    auVar174._0_4_ = fVar119 * fVar119;
    fVar97 = auVar145._4_4_;
    auVar174._4_4_ = fVar97 * fVar97;
    fVar104 = auVar145._8_4_;
    auVar174._8_4_ = fVar104 * fVar104;
    auVar174._12_4_ = auVar145._12_4_ * auVar145._12_4_;
    auVar167 = NEON_ext(auVar174,auVar174,8,1);
    uStack_b8 = auVar145._8_8_;
    local_c0 = auVar145._0_8_;
    fVar117 = auVar167._0_4_ + auVar167._4_4_;
    fVar107 = auVar174._0_4_ + auVar174._4_4_ + fVar117;
    fVar117 = auVar174._0_4_ + auVar174._4_4_ + fVar117;
    uVar14 = CONCAT44(fVar117,fVar107);
    uVar130 = NEON_frsqrte(uVar14,4);
    fVar108 = (float)uVar130;
    fVar109 = (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar130;
    fVar109 = fVar109 * (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar130;
    fVar109 = fVar109 * (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar130;
    fVar109 = fVar109 * (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    uVar10 = CONCAT44(fVar117 * fVar109 * (float)((ulong)uVar130 >> 0x20),
                      fVar107 * fVar108 * (float)uVar130);
    uVar10 = uVar10 ^ (uVar10 ^ uVar14) & CONCAT44(-(uint)(fVar107 == 0.0),-(uint)(fVar107 == 0.0));
    uVar130 = NEON_frecpe(uVar10,4);
    uVar166 = NEON_frecps(uVar10,uVar130,4);
    fVar107 = (float)uVar130 * (float)uVar166;
    fVar117 = (float)((ulong)uVar130 >> 0x20) * (float)((ulong)uVar166 >> 0x20);
    uVar130 = NEON_frecps(uVar10,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar130;
    fVar117 = fVar117 * (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frecps(uVar10,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar130;
    fVar117 = fVar117 * (float)((ulong)uVar130 >> 0x20);
    uVar130 = NEON_frecps(uVar10,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar130;
    uVar130 = NEON_frecps(uVar10,CONCAT44(fVar117 * (float)((ulong)uVar130 >> 0x20),fVar107),4);
    fVar107 = fVar107 * (float)uVar130;
    auVar167 = ZEXT816(0);
    auVar98._0_4_ = fVar119 * fVar107;
    auVar98._4_4_ = fVar97 * fVar107;
    auVar98._8_4_ = fVar104 * fVar107;
    iVar57 = -1;
  }
  else {
    auVar122 = ZEXT816(0);
    pfVar17 = local_1a0 + 4;
    pfVar15 = local_1a0;
    pbVar20 = param_10;
    pbVar21 = param_9;
    uVar130 = uVar29;
    while( true ) {
      uVar14 = uVar14 - 1;
      bVar132 = *pbVar21;
      bVar133 = *pbVar20;
      *pfVar17 = (float)(uint)bVar132;
      *pfVar15 = (float)(uint)bVar133;
      pfVar13 = *(float **)(param_1 + 0x10);
      puVar2 = (uint *)(PTR_DAT_02711e70 + (ulong)bVar132 * 0x10);
      fVar107 = -*(float *)(lVar11 + 0x30);
      fVar117 = -*(float *)(lVar11 + 0x34);
      fVar119 = -*(float *)(lVar11 + 0x38);
      auVar145 = *(undefined1 (*) [16])(pfVar13 + 0xc);
      fVar107 = (float)((uint)fVar107 ^ ((uint)fVar107 ^ (uint)*(float *)(lVar11 + 0x30)) & *puVar2)
      ;
      fVar117 = (float)((uint)fVar117 ^
                       ((uint)fVar117 ^ (uint)*(float *)(lVar11 + 0x34)) & puVar2[1]);
      fVar119 = (float)((uint)fVar119 ^
                       ((uint)fVar119 ^ (uint)*(float *)(lVar11 + 0x38)) & puVar2[2]);
      fVar108 = *(float *)(lVar9 + 0x10);
      fVar97 = auVar145._0_4_ + pfVar13[8] * fVar119 + *pfVar13 * fVar107 + pfVar13[4] * fVar117;
      fVar104 = auVar145._4_4_ + pfVar13[9] * fVar119 + pfVar13[1] * fVar107 + pfVar13[5] * fVar117;
      auVar99._0_8_ = CONCAT44(fVar104,fVar97);
      auVar99._8_4_ =
           auVar145._8_4_ + pfVar13[10] * fVar119 + pfVar13[2] * fVar107 + pfVar13[6] * fVar117;
      auVar99._12_4_ = auVar145._12_4_ + 0.0;
      if (fVar108 <= 0.0) {
        auVar112 = SUB1612(*(undefined1 (*) [16])(*(long *)(lVar9 + 0xa0) + (ulong)bVar133 * 0xc),0)
        ;
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x90);
        lVar11 = *(long *)(lVar12 + 0x28);
        pfVar13 = (float *)(*(long *)(lVar9 + 0xa0) + (ulong)(uint)bVar133 * 0xc);
        fVar107 = *pfVar13;
        fVar117 = pfVar13[1];
        fVar119 = pfVar13[2];
        pbVar1 = (byte *)(lVar11 + (ulong)*(byte *)(lVar12 + 0x27) * 0x14 +
                          (ulong)*(byte *)(lVar12 + 0x26) * 0xc +
                          ((ulong)*(ushort *)(lVar12 + 0x24) & 0x7fff) * 2 + (ulong)bVar133 * 3);
        auVar145 = *(undefined1 (*) [16])(lVar11 + (ulong)*pbVar1 * 0x14);
        auVar167 = *(undefined1 (*) [16])(lVar11 + (ulong)pbVar1[1] * 0x14);
        fVar105 = auVar145._4_4_;
        auVar170 = *(undefined1 (*) [16])(lVar11 + (ulong)pbVar1[2] * 0x14);
        fVar110 = auVar167._4_4_;
        fVar106 = auVar145._8_4_;
        fVar25 = auVar170._4_4_;
        auVar123._0_12_ = auVar145._0_12_;
        auVar123._12_4_ = 0;
        fVar127 = auVar167._8_4_;
        auVar141._0_12_ = auVar167._0_12_;
        auVar141._12_4_ = 0;
        auVar174 = NEON_ext(auVar141,auVar141,8,1);
        fVar22 = auVar170._8_4_;
        fVar109 = auVar167._0_4_;
        auVar151._0_12_ = auVar170._0_12_;
        auVar151._12_4_ = 0;
        auVar176 = NEON_ext(auVar151,auVar151,8,1);
        fVar74 = auVar145._0_4_;
        auVar162._0_4_ = fVar107 * fVar74;
        auVar162._4_4_ = fVar117 * fVar105;
        auVar162._8_4_ = fVar119 * fVar106;
        auVar162._12_4_ = 0;
        auVar167 = NEON_ext(auVar162,auVar162,8,1);
        fVar118 = auVar170._0_4_;
        auVar168._0_4_ = fVar107 * fVar109;
        auVar168._4_4_ = fVar117 * fVar110;
        auVar168._8_4_ = fVar119 * fVar127;
        auVar168._12_4_ = 0;
        fVar144 = fVar109 * fVar25 - fVar110 * fVar118;
        auVar170 = NEON_ext(auVar168,auVar168,8,1);
        auVar171._0_4_ = fVar107 * fVar118;
        auVar171._4_4_ = fVar117 * fVar25;
        auVar171._8_4_ = fVar119 * fVar22;
        auVar171._12_4_ = 0;
        uVar157 = NEON_ext(CONCAT44(fVar110 * fVar22 - fVar127 * fVar25,fVar144),
                           CONCAT44(auVar174._4_4_ * fVar25 - fVar110 * auVar176._4_4_,
                                    auVar174._0_4_ * fVar118 - fVar109 * auVar176._0_4_),4,1);
        auVar145 = NEON_ext(auVar171,auVar171,8,1);
        fVar165 = fVar108 - (auVar168._0_4_ + auVar168._4_4_ + auVar170._0_4_ + auVar170._4_4_);
        fVar161 = fVar108 - (auVar162._0_4_ + auVar162._4_4_ + auVar167._0_4_ + auVar167._4_4_);
        fVar108 = fVar108 - (auVar171._0_4_ + auVar171._4_4_ + auVar145._0_4_ + auVar145._4_4_);
        auVar175._0_4_ = fVar74 * (float)uVar157;
        fVar26 = (float)((ulong)uVar157 >> 0x20);
        auVar175._4_4_ = fVar105 * fVar26;
        auVar175._8_4_ = fVar106 * fVar144;
        auVar175._12_4_ = 0;
        auVar145 = NEON_ext(auVar175,auVar175,8,1);
        fVar109 = fVar118 * fVar165 - fVar109 * fVar108;
        fVar118 = fVar25 * fVar165 - fVar110 * fVar108;
        auVar113._0_8_ = CONCAT44(fVar118,fVar109);
        auVar113._8_4_ = fVar22 * fVar165 - fVar127 * fVar108;
        auVar113._12_4_ = 0.0 - fVar108 * 0.0;
        auVar170 = NEON_ext(auVar123,auVar123,8,1);
        auVar167 = NEON_ext(auVar113,auVar113,8,1);
        uVar166 = NEON_ext(auVar113._0_8_,(ulong)(uint)auVar167._0_4_,4,1);
        fVar110 = fVar74 * (float)uVar166 - fVar105 * fVar109;
        uVar121 = NEON_ext(CONCAT44(fVar105 * (float)((ulong)uVar166 >> 0x20) - fVar106 * fVar118,
                                    fVar110),
                           CONCAT44(auVar170._4_4_ * fVar118 - fVar105 * 0.0,
                                    auVar170._0_4_ * fVar109 - fVar74 * auVar167._0_4_),4,1);
        fVar108 = auVar145._0_4_ + auVar145._4_4_;
        uVar166 = CONCAT44(auVar175._0_4_ + auVar175._4_4_ + fVar108,
                           auVar175._0_4_ + auVar175._4_4_ + fVar108);
        auVar124._0_4_ = (float)uVar121 - (float)uVar157 * fVar161;
        auVar124._4_4_ = (float)((ulong)uVar121 >> 0x20) - fVar26 * fVar161;
        auVar124._8_4_ = fVar110 - fVar144 * fVar161;
        auVar124._12_4_ = 0.0 - fVar161 * 0.0;
        auVar145 = NEON_ext(auVar124,auVar124,8,1);
        uVar121 = NEON_frecpe(uVar166,4);
        uVar157 = NEON_frecps(uVar166,uVar121,4);
        fVar108 = (float)uVar121 * (float)uVar157;
        fVar109 = (float)((ulong)uVar121 >> 0x20) * (float)((ulong)uVar157 >> 0x20);
        uVar121 = NEON_frecps(uVar166,CONCAT44(fVar109,fVar108),4);
        fVar108 = fVar108 * (float)uVar121;
        fVar109 = fVar109 * (float)((ulong)uVar121 >> 0x20);
        uVar121 = NEON_frecps(uVar166,CONCAT44(fVar109,fVar108),4);
        fVar108 = fVar108 * (float)uVar121;
        fVar109 = fVar109 * (float)((ulong)uVar121 >> 0x20);
        uVar121 = NEON_frecps(uVar166,CONCAT44(fVar109,fVar108),4);
        fVar108 = fVar108 * (float)uVar121;
        uVar166 = NEON_frecps(uVar166,CONCAT44(fVar109 * (float)((ulong)uVar121 >> 0x20),fVar108),4)
        ;
        fVar108 = fVar108 * (float)uVar166;
        auVar112._0_4_ = auVar124._0_4_ * fVar108;
        auVar112._4_4_ = auVar124._4_4_ * fVar108;
        auVar112._8_4_ = auVar145._0_4_ * fVar108;
        auVar30._0_4_ = (fVar107 - auVar112._0_4_) * (fVar107 - auVar112._0_4_);
        auVar30._4_4_ = (fVar117 - auVar112._4_4_) * (fVar117 - auVar112._4_4_);
        auVar30._8_4_ = (fVar119 - auVar112._8_4_) * (fVar119 - auVar112._8_4_);
        auVar30._12_4_ = 0;
        auVar145 = NEON_ext(auVar30,auVar30,8,1);
        fVar117 = auVar145._0_4_ + auVar145._4_4_;
        fVar107 = auVar30._0_4_ + auVar30._4_4_ + fVar117;
        fVar117 = auVar30._0_4_ + auVar30._4_4_ + fVar117;
        uVar10 = CONCAT44(fVar117,fVar107);
        uVar166 = NEON_frsqrte(uVar10,4);
        fVar119 = (float)uVar166;
        fVar108 = (float)((ulong)uVar166 >> 0x20);
        uVar166 = NEON_frsqrts(CONCAT44(fVar108 * fVar108,fVar119 * fVar119),uVar10,4);
        fVar119 = fVar119 * (float)uVar166;
        fVar108 = fVar108 * (float)((ulong)uVar166 >> 0x20);
        uVar166 = NEON_frsqrts(CONCAT44(fVar108 * fVar108,fVar119 * fVar119),uVar10,4);
        fVar119 = fVar119 * (float)uVar166;
        fVar108 = fVar108 * (float)((ulong)uVar166 >> 0x20);
        uVar166 = NEON_frsqrts(CONCAT44(fVar108 * fVar108,fVar119 * fVar119),uVar10,4);
        fVar119 = fVar119 * (float)uVar166;
        fVar108 = fVar108 * (float)((ulong)uVar166 >> 0x20);
        uVar166 = NEON_frsqrts(CONCAT44(fVar108 * fVar108,fVar119 * fVar119),uVar10,4);
        uVar140 = CONCAT44(fVar117 * fVar108 * (float)((ulong)uVar166 >> 0x20),
                           fVar107 * fVar119 * (float)uVar166);
        auVar122._0_8_ =
             uVar140 ^ (uVar140 ^ uVar10) &
                       CONCAT44(-(uint)(fVar107 == 0.0),-(uint)(fVar107 == 0.0));
        auVar122._8_8_ = 0;
        local_1b0 = auVar122._0_8_;
      }
      uVar10 = (ulong)local_1a4;
      auVar145._0_8_ = CONCAT44(fVar104 - auVar112._4_4_,fVar97 - auVar112._0_4_);
      auVar145._8_4_ = auVar99._8_4_ - auVar112._8_4_;
      auVar145._12_4_ = auVar99._12_4_ - 0.0;
      *(long *)(local_100 + (uVar10 * 2 + -7) * 2) = auVar99._8_8_;
      *(undefined8 *)(local_100 + (uVar10 * 2 + -8) * 2) = auVar99._0_8_;
      *(ulong *)(local_100 + (uVar10 * 2 + -0xf) * 2) = (ulong)(uint)auVar112._8_4_;
      *(long *)(local_1a0 + uVar10 * 4 + 8) = auVar112._0_8_;
      *(long *)(local_e0[uVar10 - 2] + 8) = auVar145._8_8_;
      *(undefined8 *)(local_100 + uVar10 * 4) = auVar145._0_8_;
      uVar130 = NEON_fmax(uVar130,CONCAT44((float)((ulong)uVar29 >> 0x20) + auVar122._4_4_ + 0.0,
                                           (float)uVar29 + auVar122._0_4_ + 0.0),4);
      uVar28 = local_1a4 + 1;
      if (uVar14 == 0) break;
      lVar11 = *(long *)(param_1 + 8);
      lVar9 = *(long *)(param_2 + 8);
      pbVar21 = pbVar21 + 1;
      pfVar17 = pfVar17 + 1;
      pbVar20 = pbVar20 + 1;
      pfVar15 = pfVar15 + 1;
      local_1a4 = uVar28;
    }
    if (local_1a4 == 3) {
      local_1a4 = uVar28;
      auVar145 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
    }
    else {
      fVar107 = local_100[0];
      fVar117 = local_100[1];
      fVar119 = (float)uStack_f8;
      fVar97 = SUB84(uStack_f8,4);
      if (local_1a4 == 2) {
        auVar145._8_8_ = uStack_f8;
        auVar145._0_4_ = local_100[0];
        auVar145._4_4_ = local_100[1];
        auVar6._4_4_ = fStack_ec;
        auVar6._0_4_ = local_f0;
        auVar6._8_4_ = fStack_e8;
        auVar6._12_4_ = fStack_e4;
        auVar114._0_4_ = local_f0 - fVar107;
        auVar114._4_4_ = fStack_ec - fVar117;
        auVar114._8_4_ = fStack_e8 - fVar119;
        auVar114._12_4_ = fStack_e4 - fVar97;
        fVar109 = local_e0[0]._0_4_;
        auVar100._0_4_ = fVar109 - fVar107;
        fVar110 = local_e0[0]._4_4_;
        auVar100._4_4_ = fVar110 - fVar117;
        fVar118 = local_e0[0]._8_4_;
        auVar100._8_4_ = fVar118 - fVar119;
        auVar100._12_4_ = local_e0[0]._12_4_ - fVar97;
        auVar167 = NEON_ext(auVar114,auVar114,8,1);
        auVar170 = NEON_ext(auVar100,auVar100,8,1);
        fVar106 = auVar114._0_4_ * auVar100._4_4_ - auVar114._4_4_ * auVar100._0_4_;
        uVar29 = NEON_ext(CONCAT44(auVar114._4_4_ * auVar100._8_4_ - auVar114._8_4_ * auVar100._4_4_
                                   ,fVar106),
                          CONCAT44(auVar167._4_4_ * auVar100._4_4_ - auVar114._4_4_ * auVar170._4_4_
                                   ,auVar167._0_4_ * auVar100._0_4_ -
                                    auVar114._0_4_ * auVar170._0_4_),4,1);
        fVar74 = (float)uVar29;
        auVar125._0_4_ = fVar74 * fVar74;
        fVar105 = (float)((ulong)uVar29 >> 0x20);
        auVar125._4_4_ = fVar105 * fVar105;
        auVar125._8_4_ = fVar106 * fVar106;
        auVar125._12_4_ = 0;
        auVar167 = NEON_ext(auVar125,auVar125,8,1);
        fVar108 = auVar167._0_4_ + auVar167._4_4_;
        fVar104 = auVar125._0_4_ + auVar125._4_4_ + fVar108;
        uVar29 = CONCAT44(auVar125._0_4_ + auVar125._4_4_ + fVar108,fVar104);
        local_1a4 = 3;
        if (1.1920929e-07 < fVar104) {
          if (fVar104 != 0.0) {
            auVar167 = NEON_ext(auVar6,auVar6,8,1);
            auVar170 = NEON_ext(local_e0[0],local_e0[0],8,1);
            fVar108 = local_f0 * fVar110 - fStack_ec * fVar109;
            auVar174 = NEON_ext(auVar145,auVar145,8,1);
            uVar157 = NEON_ext(CONCAT44(fStack_ec * fVar118 - fStack_e8 * fVar110,fVar108),
                               CONCAT44(auVar167._4_4_ * fVar110 - fStack_ec * auVar170._4_4_,
                                        auVar167._0_4_ * fVar109 - local_f0 * auVar170._0_4_),4,1);
            fVar104 = fVar117 * fVar109 - fVar107 * fVar110;
            uVar166 = NEON_ext(CONCAT44(fVar119 * fVar110 - fVar117 * fVar118,fVar104),
                               CONCAT44(fVar117 * auVar170._4_4_ - auVar174._4_4_ * fVar110,
                                        fVar107 * auVar170._0_4_ - auVar174._0_4_ * fVar109),4,1);
            fVar127 = fVar107 * fStack_ec - fVar117 * local_f0;
            uVar121 = NEON_ext(CONCAT44(fVar117 * fStack_e8 - fVar119 * fStack_ec,fVar127),
                               CONCAT44(auVar174._4_4_ * fStack_ec - fVar117 * auVar167._4_4_,
                                        auVar174._0_4_ * local_f0 - fVar107 * auVar167._0_4_),4,1);
            auVar59._0_4_ = (float)uVar157 * fVar74;
            auVar59._4_4_ = (float)((ulong)uVar157 >> 0x20) * fVar105;
            auVar59._8_4_ = fVar108 * fVar106;
            auVar59._12_4_ = 0;
            auVar167 = NEON_ext(auVar59,auVar59,8,1);
            auVar146._0_4_ = (float)uVar166 * fVar74;
            auVar146._4_4_ = (float)((ulong)uVar166 >> 0x20) * fVar105;
            auVar146._8_4_ = fVar104 * fVar106;
            auVar146._12_4_ = 0;
            fVar104 = auVar59._0_4_ + auVar59._4_4_ + auVar167._0_4_ + auVar167._4_4_;
            auVar167 = NEON_ext(auVar146,auVar146,8,1);
            fVar108 = auVar146._0_4_ + auVar146._4_4_ + auVar167._0_4_ + auVar167._4_4_;
            auVar60._0_4_ = (float)uVar121 * fVar74;
            auVar60._4_4_ = (float)((ulong)uVar121 >> 0x20) * fVar105;
            auVar60._8_4_ = fVar127 * fVar106;
            auVar60._12_4_ = 0;
            auVar167 = NEON_ext(auVar60,auVar60,8,1);
            fVar127 = auVar60._0_4_ + auVar60._4_4_ + auVar167._0_4_ + auVar167._4_4_;
            bVar8 = 0.0 <= fVar127 && (0.0 <= fVar108 && 0.0 <= fVar104);
            auVar158._0_4_ = -(uint)bVar8;
            auVar158._4_4_ = -(uint)bVar8;
            auVar158._8_4_ = -(uint)bVar8;
            auVar158._12_4_ = -(uint)bVar8;
            NEON_ext(auVar158,auVar158,8,1);
            if (CONCAT13((char)auVar158._12_4_,
                         CONCAT12((char)auVar158._8_4_,
                                  CONCAT11((char)auVar158._4_4_,(char)auVar158._0_4_))) == -1) {
              auVar35._0_4_ = fVar107 * fVar74;
              auVar35._4_4_ = fVar117 * fVar105;
              auVar35._8_4_ = fVar119 * fVar106;
              auVar35._12_4_ = fVar97 * 0.0;
              auVar145 = NEON_ext(auVar35,auVar35,8,1);
              uVar166 = NEON_frecpe(uVar29,4);
              uVar121 = NEON_frecps(uVar29,uVar166,4);
              fVar107 = (float)uVar166 * (float)uVar121;
              fVar117 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
              uVar166 = NEON_frecps(uVar29,CONCAT44(fVar117,fVar107),4);
              fVar107 = fVar107 * (float)uVar166;
              fVar117 = fVar117 * (float)((ulong)uVar166 >> 0x20);
              uVar166 = NEON_frecps(uVar29,CONCAT44(fVar117,fVar107),4);
              fVar107 = fVar107 * (float)uVar166;
              fVar117 = fVar117 * (float)((ulong)uVar166 >> 0x20);
              uVar166 = NEON_frecps(uVar29,CONCAT44(fVar117,fVar107),4);
              fVar107 = fVar107 * (float)uVar166;
              uVar29 = NEON_frecps(uVar29,CONCAT44(fVar117 * (float)((ulong)uVar166 >> 0x20),fVar107
                                                  ),4);
              fVar107 = (auVar35._0_4_ + auVar35._4_4_ + auVar145._0_4_ + auVar145._4_4_) *
                        fVar107 * (float)uVar29;
              auVar145._0_4_ = fVar74 * fVar107;
              auVar145._4_4_ = fVar105 * fVar107;
              auVar145._8_4_ = fVar106 * fVar107;
              auVar145._12_4_ = 0.0;
            }
            else {
              auVar128._0_4_ = -fVar107 * auVar114._0_4_;
              auVar128._4_4_ = -fVar117 * auVar114._4_4_;
              auVar128._8_4_ = -fVar119 * auVar114._8_4_;
              auVar128._12_4_ = auVar114._12_4_ * 0.0;
              auVar167 = NEON_ext(auVar128,auVar128,8,1);
              fVar106 = auVar167._0_4_ + auVar167._4_4_;
              auVar142._0_4_ = -local_f0 * auVar114._0_4_;
              auVar142._4_4_ = -fStack_ec * auVar114._4_4_;
              auVar142._8_4_ = -fStack_e8 * auVar114._8_4_;
              auVar142._12_4_ = auVar114._12_4_ * 0.0;
              auVar167 = NEON_ext(auVar142,auVar142,8,1);
              fVar144 = auVar167._0_4_ + auVar167._4_4_;
              fVar74 = auVar128._0_4_ + auVar128._4_4_ + fVar106;
              fVar105 = auVar142._0_4_ + auVar142._4_4_ + fVar144;
              fVar144 = auVar142._0_4_ + auVar142._4_4_ + fVar144;
              bVar8 = (0.0 <= fVar74 && fVar127 <= 0.0) && fVar105 <= 0.0;
              auVar163._0_4_ = -(uint)bVar8;
              auVar163._4_4_ = -(uint)bVar8;
              auVar163._8_4_ = -(uint)bVar8;
              auVar163._12_4_ = -(uint)bVar8;
              NEON_ext(auVar163,auVar163,8,1);
              if (CONCAT13((char)auVar163._12_4_,
                           CONCAT12((char)auVar163._8_4_,
                                    CONCAT11((char)auVar163._4_4_,(char)auVar163._0_4_))) == -1) {
                uVar29 = CONCAT44((auVar128._0_4_ + auVar128._4_4_ + fVar106) - fVar144,
                                  fVar74 - fVar105);
                uVar166 = NEON_frecpe(uVar29,4);
                uVar121 = NEON_frecps(uVar29,uVar166,4);
                fVar104 = (float)uVar166 * (float)uVar121;
                fVar108 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
                uVar166 = NEON_frecps(uVar29,CONCAT44(fVar108,fVar104),4);
                fVar104 = fVar104 * (float)uVar166;
                fVar108 = fVar108 * (float)((ulong)uVar166 >> 0x20);
                uVar166 = NEON_frecps(uVar29,CONCAT44(fVar108,fVar104),4);
                fVar104 = fVar104 * (float)uVar166;
                fVar108 = fVar108 * (float)((ulong)uVar166 >> 0x20);
                uVar166 = NEON_frecps(uVar29,CONCAT44(fVar108,fVar104),4);
                fVar104 = fVar104 * (float)uVar166;
                uVar29 = NEON_frecps(uVar29,CONCAT44(fVar108 * (float)((ulong)uVar166 >> 0x20),
                                                     fVar104),4);
                fVar74 = fVar74 * (float)(-(uint)(1.1920929e-07 < ABS(fVar74 - fVar105)) &
                                         (uint)(fVar104 * (float)uVar29));
                lVar9 = 0;
                pauVar19 = (undefined1 (*) [16])local_100;
                auVar52._0_8_ =
                     CONCAT44(fVar117 + auVar114._4_4_ * fVar74,fVar107 + auVar114._0_4_ * fVar74);
                auVar52._8_4_ = fVar119 + auVar114._8_4_ * fVar74;
                auVar52._12_4_ = fVar97 + auVar114._12_4_ * fVar74;
                auVar145 = NEON_ext(auVar52,auVar52,8,1);
                auVar4._8_4_ = auVar145._0_4_;
                auVar4._0_8_ = auVar52._0_8_;
                lVar11 = 1;
                pauVar16 = (undefined1 (*) [16])&local_f0;
LAB_0025de60:
                auVar145._12_4_ = 0.0;
                auVar145._0_12_ = auVar4;
                local_1a4 = 2;
              }
              else {
                auVar164._0_4_ = -local_f0 * auVar100._0_4_;
                auVar164._4_4_ = -fStack_ec * auVar100._4_4_;
                auVar164._8_4_ = -fStack_e8 * auVar100._8_4_;
                auVar164._12_4_ = auVar100._12_4_ * 0.0;
                auVar167 = NEON_ext(auVar164,auVar164,8,1);
                fVar22 = auVar167._0_4_ + auVar167._4_4_;
                auVar115._0_4_ = auVar114._0_4_ * -fVar109;
                auVar115._4_4_ = auVar114._4_4_ * -fVar110;
                auVar115._8_4_ = auVar114._8_4_ * -fVar118;
                auVar115._12_4_ = auVar114._12_4_ * 0.0;
                auVar172._0_4_ = auVar100._0_4_ * -fVar109;
                auVar172._4_4_ = auVar100._4_4_ * -fVar110;
                auVar172._8_4_ = auVar100._8_4_ * -fVar118;
                auVar172._12_4_ = auVar100._12_4_ * 0.0;
                fVar106 = auVar164._0_4_ + auVar164._4_4_ + fVar22;
                auVar167 = NEON_ext(auVar115,auVar115,8,1);
                fVar26 = auVar167._0_4_ + auVar167._4_4_;
                fVar127 = auVar115._0_4_ + auVar115._4_4_ + fVar26;
                auVar167 = NEON_ext(auVar172,auVar172,8,1);
                fVar161 = auVar167._0_4_ + auVar167._4_4_;
                fVar25 = auVar172._0_4_ + auVar172._4_4_ + fVar161;
                fVar161 = auVar172._0_4_ + auVar172._4_4_ + fVar161;
                pauVar16 = local_e0;
                bVar8 = (fVar105 <= fVar106 && fVar104 <= 0.0) && fVar25 <= fVar127;
                auVar152._0_4_ = -(uint)bVar8;
                auVar152._4_4_ = -(uint)bVar8;
                auVar152._8_4_ = -(uint)bVar8;
                auVar152._12_4_ = -(uint)bVar8;
                NEON_ext(auVar152,auVar152,8,1);
                if (CONCAT13((char)auVar152._12_4_,
                             CONCAT12((char)auVar152._8_4_,
                                      CONCAT11((char)auVar152._4_4_,(char)auVar152._0_4_))) == -1) {
                  fVar107 = (fVar106 - fVar105) + (fVar127 - fVar25);
                  uVar29 = CONCAT44(((auVar164._0_4_ + auVar164._4_4_ + fVar22) - fVar144) +
                                    ((auVar115._0_4_ + auVar115._4_4_ + fVar26) - fVar161),fVar107);
                  uVar166 = NEON_frecpe(uVar29,4);
                  uVar121 = NEON_frecps(uVar29,uVar166,4);
                  fVar117 = (float)uVar166 * (float)uVar121;
                  fVar119 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar119,fVar117),4);
                  fVar117 = fVar117 * (float)uVar166;
                  fVar119 = fVar119 * (float)((ulong)uVar166 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar119,fVar117),4);
                  fVar117 = fVar117 * (float)uVar166;
                  fVar119 = fVar119 * (float)((ulong)uVar166 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar119,fVar117),4);
                  fVar117 = fVar117 * (float)uVar166;
                  uVar29 = NEON_frecps(uVar29,CONCAT44(fVar119 * (float)((ulong)uVar166 >> 0x20),
                                                       fVar117),4);
                  fVar107 = (fVar106 - fVar105) *
                            (float)(-(uint)(1.1920929e-07 < ABS(fVar107)) &
                                   (uint)(fVar117 * (float)uVar29));
                  auVar53._0_8_ =
                       CONCAT44(fStack_ec + (fVar110 - fStack_ec) * fVar107,
                                local_f0 + (fVar109 - local_f0) * fVar107);
                  auVar53._8_4_ = fStack_e8 + (fVar118 - fStack_e8) * fVar107;
                  auVar53._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar107;
                  auVar145 = NEON_ext(auVar53,auVar53,8,1);
                  lVar9 = 1;
                  auVar4._8_4_ = auVar145._0_4_;
                  auVar4._0_8_ = auVar53._0_8_;
                  lVar11 = 2;
                  pauVar19 = (undefined1 (*) [16])&local_f0;
                  goto LAB_0025de60;
                }
                auVar153._0_4_ = -fVar107 * auVar100._0_4_;
                auVar153._4_4_ = -fVar117 * auVar100._4_4_;
                auVar153._8_4_ = -fVar119 * auVar100._8_4_;
                auVar153._12_4_ = auVar100._12_4_ * 0.0;
                auVar167 = NEON_ext(auVar153,auVar153,8,1);
                fVar109 = auVar167._0_4_ + auVar167._4_4_;
                fVar104 = auVar153._0_4_ + auVar153._4_4_ + fVar109;
                bVar8 = (fVar108 <= 0.0 && 0.0 <= fVar104) && fVar25 <= 0.0;
                auVar147._0_4_ = -(uint)bVar8;
                auVar147._4_4_ = -(uint)bVar8;
                auVar147._8_4_ = -(uint)bVar8;
                auVar147._12_4_ = -(uint)bVar8;
                NEON_ext(auVar147,auVar147,8,1);
                if (CONCAT13((char)auVar147._12_4_,
                             CONCAT12((char)auVar147._8_4_,
                                      CONCAT11((char)auVar147._4_4_,(char)auVar147._0_4_))) == -1) {
                  uVar29 = CONCAT44((auVar153._0_4_ + auVar153._4_4_ + fVar109) - fVar161,
                                    fVar104 - fVar25);
                  uVar166 = NEON_frecpe(uVar29,4);
                  uVar121 = NEON_frecps(uVar29,uVar166,4);
                  fVar108 = (float)uVar166 * (float)uVar121;
                  fVar109 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar166;
                  fVar109 = fVar109 * (float)((ulong)uVar166 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar166;
                  fVar109 = fVar109 * (float)((ulong)uVar166 >> 0x20);
                  uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar166;
                  uVar29 = NEON_frecps(uVar29,CONCAT44(fVar109 * (float)((ulong)uVar166 >> 0x20),
                                                       fVar108),4);
                  fVar104 = fVar104 * (float)(-(uint)(1.1920929e-07 < ABS(fVar104 - fVar25)) &
                                             (uint)(fVar108 * (float)uVar29));
                  lVar9 = 0;
                  pauVar19 = (undefined1 (*) [16])local_100;
                  auVar54._0_8_ =
                       CONCAT44(fVar117 + auVar100._4_4_ * fVar104,
                                fVar107 + auVar100._0_4_ * fVar104);
                  auVar54._8_4_ = fVar119 + auVar100._8_4_ * fVar104;
                  auVar54._12_4_ = fVar97 + auVar100._12_4_ * fVar104;
                  auVar145 = NEON_ext(auVar54,auVar54,8,1);
                  local_1a4 = 2;
                  auVar145._8_4_ = (float)auVar145._0_4_;
                  auVar145._0_8_ = auVar54._0_8_;
                  auVar145._12_4_ = 0.0;
                  lVar11 = 2;
                }
                else {
                  bVar8 = fVar74 <= 0.0 && fVar104 <= 0.0;
                  auVar101._0_4_ = -(uint)bVar8;
                  auVar101._4_4_ = -(uint)bVar8;
                  auVar101._8_4_ = -(uint)bVar8;
                  auVar101._12_4_ = -(uint)bVar8;
                  NEON_ext(auVar101,auVar101,8,1);
                  pauVar19 = (undefined1 (*) [16])local_100;
                  if (CONCAT13((char)auVar101._12_4_,
                               CONCAT12((char)auVar101._8_4_,
                                        CONCAT11((char)auVar101._4_4_,(char)auVar101._0_4_))) == -1)
                  {
                    lVar9 = 0;
                  }
                  else {
                    bVar8 = 0.0 <= fVar105 && fVar106 <= fVar105;
                    auVar33._0_4_ = -(uint)bVar8;
                    auVar33._4_4_ = -(uint)bVar8;
                    auVar33._8_4_ = -(uint)bVar8;
                    auVar33._12_4_ = -(uint)bVar8;
                    NEON_ext(auVar33,auVar33,8,1);
                    iVar57 = CONCAT13((char)auVar33._12_4_,
                                      CONCAT12((char)auVar33._8_4_,
                                               CONCAT11((char)auVar33._4_4_,(char)auVar33._0_4_)));
                    auVar34._0_4_ = -(uint)(iVar57 == -1);
                    auVar34._4_4_ = auVar34._0_4_;
                    auVar34._8_4_ = auVar34._0_4_;
                    auVar34._12_4_ = auVar34._0_4_;
                    lVar9 = 1;
                    if (iVar57 != -1) {
                      lVar9 = 2;
                    }
                    pauVar19 = pauVar19 + lVar9;
                    auVar145 = local_e0[0] ^ (local_e0[0] ^ auVar6) & auVar34;
                  }
                  local_1a4 = 1;
                  lVar11 = 1;
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
              uStack_128 = *(undefined8 *)(local_100 + (lVar11 * 2 + -7) * 2);
              uStack_130 = *(undefined8 *)(local_100 + (lVar11 * 2 + -8) * 2);
              local_1a0[4] = local_1a0[lVar9 + 4];
              local_1a0[5] = local_1a0[lVar11 + 4];
              fStack_178 = (float)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2);
              fStack_174 = (float)((ulong)*(undefined8 *)(local_100 + (lVar9 * 2 + -0xf) * 2) >>
                                  0x20);
              local_180._0_4_ = (float)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8);
              local_180._4_4_ = (float)((ulong)*(undefined8 *)(local_1a0 + lVar9 * 4 + 8) >> 0x20);
              uStack_168 = *(undefined8 *)(local_100 + (lVar11 * 2 + -0xf) * 2);
              uStack_170 = *(undefined8 *)(local_1a0 + lVar11 * 4 + 8);
              local_1a0[0] = local_1a0[lVar9];
              local_1a0[1] = local_1a0[lVar11];
            }
          }
        }
        else {
          auVar58._0_4_ = auVar114._0_4_ * auVar114._0_4_;
          auVar58._4_4_ = auVar114._4_4_ * auVar114._4_4_;
          auVar58._8_4_ = auVar114._8_4_ * auVar114._8_4_;
          auVar58._12_4_ = auVar114._12_4_ * auVar114._12_4_;
          auVar167 = NEON_ext(auVar58,auVar58,8,1);
          fVar108 = auVar167._0_4_ + auVar167._4_4_;
          fVar104 = auVar58._0_4_ + auVar58._4_4_ + fVar108;
          uVar29 = CONCAT44(auVar58._0_4_ + auVar58._4_4_ + fVar108,fVar104);
          bVar8 = fVar104 <= 1.1920929e-07;
          auVar76._0_4_ = -(uint)bVar8;
          auVar76._4_4_ = -(uint)bVar8;
          auVar76._8_4_ = -(uint)bVar8;
          auVar76._12_4_ = -(uint)bVar8;
          NEON_ext(auVar76,auVar76,8,1);
          local_1a4 = 2;
          if (CONCAT13((char)auVar76._12_4_,
                       CONCAT12((char)auVar76._8_4_,
                                CONCAT11((char)auVar76._4_4_,(char)auVar76._0_4_))) == -1) {
            local_1a4 = 1;
          }
          else {
            auVar77._0_4_ = -fVar107 * auVar114._0_4_;
            auVar77._4_4_ = -fVar117 * auVar114._4_4_;
            auVar77._8_4_ = -fVar119 * auVar114._8_4_;
            auVar77._12_4_ = auVar114._12_4_ * 0.0;
            auVar145 = NEON_ext(auVar77,auVar77,8,1);
            fVar104 = auVar145._0_4_ + auVar145._4_4_;
            uVar166 = NEON_frecpe(uVar29,4);
            uVar121 = NEON_frecps(uVar29,uVar166,4);
            fVar108 = (float)uVar166 * (float)uVar121;
            fVar109 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar109 = fVar109 * (float)((ulong)uVar166 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar109 = fVar109 * (float)((ulong)uVar166 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar109 = fVar109 * (float)((ulong)uVar166 >> 0x20);
            uVar29 = NEON_frecps(uVar29,CONCAT44(fVar109,fVar108),4);
            uVar166 = NEON_fmov(0x3f800000,4);
            uVar29 = NEON_fmin(CONCAT44((auVar77._0_4_ + auVar77._4_4_ + fVar104) *
                                        fVar109 * (float)((ulong)uVar29 >> 0x20),
                                        (auVar77._0_4_ + auVar77._4_4_ + fVar104) *
                                        fVar108 * (float)uVar29),uVar166,4);
            uVar29 = NEON_fmax(uVar29,0,4);
            fVar104 = (float)uVar29;
            auVar32._0_8_ =
                 CONCAT44(fVar117 + auVar114._4_4_ * fVar104,fVar107 + auVar114._0_4_ * fVar104);
            auVar32._8_4_ = fVar119 + auVar114._8_4_ * fVar104;
            auVar32._12_4_ = fVar97 + auVar114._12_4_ * fVar104;
            auVar145 = NEON_ext(auVar32,auVar32,8,1);
            auVar145._8_4_ = (float)auVar145._0_4_;
            auVar145._0_8_ = auVar32._0_8_;
            auVar145._12_4_ = 0.0;
          }
        }
      }
      else {
        bVar8 = local_1a4 == 1;
        local_1a4 = uVar28;
        if (bVar8) {
          auVar145._8_8_ = uStack_f8;
          auVar145._0_4_ = local_100[0];
          auVar145._4_4_ = local_100[1];
          fVar109 = local_f0 - fVar107;
          fVar110 = fStack_ec - fVar117;
          fVar118 = fStack_e8 - fVar119;
          fVar74 = fStack_e4 - fVar97;
          auVar75._0_4_ = fVar109 * fVar109;
          auVar75._4_4_ = fVar110 * fVar110;
          auVar75._8_4_ = fVar118 * fVar118;
          auVar75._12_4_ = fVar74 * fVar74;
          auVar167 = NEON_ext(auVar75,auVar75,8,1);
          fVar108 = auVar167._0_4_ + auVar167._4_4_;
          fVar104 = auVar75._0_4_ + auVar75._4_4_ + fVar108;
          uVar29 = CONCAT44(auVar75._0_4_ + auVar75._4_4_ + fVar108,fVar104);
          bVar8 = fVar104 <= 1.1920929e-07;
          auVar88._0_4_ = -(uint)bVar8;
          auVar88._4_4_ = -(uint)bVar8;
          auVar88._8_4_ = -(uint)bVar8;
          auVar88._12_4_ = -(uint)bVar8;
          NEON_ext(auVar88,auVar88,8,1);
          if (CONCAT13((char)auVar88._12_4_,
                       CONCAT12((char)auVar88._8_4_,
                                CONCAT11((char)auVar88._4_4_,(char)auVar88._0_4_))) == -1) {
            local_1a4 = 1;
          }
          else {
            auVar89._0_4_ = -fVar107 * fVar109;
            auVar89._4_4_ = -fVar117 * fVar110;
            auVar89._8_4_ = -fVar119 * fVar118;
            auVar89._12_4_ = fVar74 * 0.0;
            auVar145 = NEON_ext(auVar89,auVar89,8,1);
            fVar104 = auVar145._0_4_ + auVar145._4_4_;
            uVar166 = NEON_frecpe(uVar29,4);
            uVar121 = NEON_frecps(uVar29,uVar166,4);
            fVar108 = (float)uVar166 * (float)uVar121;
            fVar105 = (float)((ulong)uVar166 >> 0x20) * (float)((ulong)uVar121 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar105,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar105 = fVar105 * (float)((ulong)uVar166 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar105,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar105 = fVar105 * (float)((ulong)uVar166 >> 0x20);
            uVar166 = NEON_frecps(uVar29,CONCAT44(fVar105,fVar108),4);
            fVar108 = fVar108 * (float)uVar166;
            fVar105 = fVar105 * (float)((ulong)uVar166 >> 0x20);
            uVar29 = NEON_frecps(uVar29,CONCAT44(fVar105,fVar108),4);
            uVar166 = NEON_fmov(0x3f800000,4);
            uVar29 = NEON_fmin(CONCAT44((auVar89._0_4_ + auVar89._4_4_ + fVar104) *
                                        fVar105 * (float)((ulong)uVar29 >> 0x20),
                                        (auVar89._0_4_ + auVar89._4_4_ + fVar104) *
                                        fVar108 * (float)uVar29),uVar166,4);
            uVar29 = NEON_fmax(uVar29,0,4);
            fVar104 = (float)uVar29;
            auVar31._0_8_ = CONCAT44(fVar117 + fVar110 * fVar104,fVar107 + fVar109 * fVar104);
            auVar31._8_4_ = fVar119 + fVar118 * fVar104;
            auVar31._12_4_ = fVar97 + fVar74 * fVar104;
            auVar145 = NEON_ext(auVar31,auVar31,8,1);
            auVar145._8_4_ = (float)auVar145._0_4_;
            auVar145._0_8_ = auVar31._0_8_;
            auVar145._12_4_ = 0.0;
          }
        }
      }
    }
    fVar119 = auVar145._0_4_;
    auVar61._0_4_ = fVar119 * fVar119;
    fVar97 = auVar145._4_4_;
    auVar61._4_4_ = fVar97 * fVar97;
    fVar104 = auVar145._8_4_;
    auVar61._8_4_ = fVar104 * fVar104;
    auVar61._12_4_ = auVar145._12_4_ * auVar145._12_4_;
    auVar167 = NEON_ext(auVar61,auVar61,8,1);
    uStack_b8 = auVar145._8_8_;
    local_c0 = auVar145._0_8_;
    fVar117 = auVar167._0_4_ + auVar167._4_4_;
    fVar107 = auVar61._0_4_ + auVar61._4_4_ + fVar117;
    fVar117 = auVar61._0_4_ + auVar61._4_4_ + fVar117;
    uVar14 = CONCAT44(fVar117,fVar107);
    uVar29 = NEON_frsqrte(uVar14,4);
    fVar108 = (float)uVar29;
    fVar109 = (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar29;
    fVar109 = fVar109 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar29;
    fVar109 = fVar109 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    fVar108 = fVar108 * (float)uVar29;
    fVar109 = fVar109 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frsqrts(CONCAT44(fVar109 * fVar109,fVar108 * fVar108),uVar14,4);
    uVar140 = CONCAT44(fVar117 * fVar109 * (float)((ulong)uVar29 >> 0x20),
                       fVar107 * fVar108 * (float)uVar29);
    uVar140 = uVar140 ^ (uVar140 ^ uVar14) &
                        CONCAT44(-(uint)(fVar107 == 0.0),-(uint)(fVar107 == 0.0));
    uVar29 = NEON_frecpe(uVar140,4);
    uVar166 = NEON_frecps(uVar140,uVar29,4);
    fVar107 = (float)uVar29 * (float)uVar166;
    fVar117 = (float)((ulong)uVar29 >> 0x20) * (float)((ulong)uVar166 >> 0x20);
    uVar29 = NEON_frecps(uVar140,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar29;
    fVar117 = fVar117 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frecps(uVar140,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar29;
    fVar117 = fVar117 * (float)((ulong)uVar29 >> 0x20);
    uVar29 = NEON_frecps(uVar140,CONCAT44(fVar117,fVar107),4);
    fVar107 = fVar107 * (float)uVar29;
    uVar29 = NEON_frecps(uVar140,CONCAT44(fVar117 * (float)((ulong)uVar29 >> 0x20),fVar107),4);
    fVar107 = fVar107 * (float)uVar29;
    auVar98._0_4_ = fVar119 * fVar107;
    auVar98._4_4_ = fVar97 * fVar107;
    auVar98._8_4_ = fVar104 * fVar107;
    iVar57 = -(uint)(fVar131 < (float)uVar140);
    auVar167 = auVar145;
    uVar29 = uVar130;
  }
  uVar166 = _UNK_01d4aa48;
  uVar130 = _DAT_01d4aa40;
  auVar62._0_4_ = -(uint)(iVar57 == -1);
  auVar62._4_4_ = -(uint)(iVar57 == -1);
  auVar62._8_4_ = -(uint)(iVar57 == -1);
  auVar62._12_4_ = -(uint)(iVar57 == -1);
  NEON_ext(auVar62,auVar62,8,1);
  bVar136 = SUB41(fVar178,0);
  bVar137 = (byte)((uint)fVar178 >> 8);
  bVar138 = (byte)((uint)fVar178 >> 0x10);
  bVar139 = (byte)((uint)fVar178 >> 0x18);
  bVar132 = SUB41(fVar177,0);
  bVar133 = (byte)((uint)fVar177 >> 8);
  bVar134 = (byte)((uint)fVar177 >> 0x10);
  bVar135 = (byte)((uint)fVar177 >> 0x18);
  if (CONCAT13((char)auVar62._12_4_,
               CONCAT12((char)auVar62._8_4_,CONCAT11((char)auVar62._4_4_,(char)auVar62._0_4_))) ==
      -1) {
    uVar14 = uVar140;
    do {
      uVar140 = uVar14;
      auVar167 = auVar145;
      fVar107 = -auVar167._0_4_;
      fVar117 = -auVar167._4_4_;
      fVar119 = -auVar167._8_4_;
      local_1c0 = auVar98._0_4_;
      fStack_1bc = auVar98._4_4_;
      lVar9 = *(long *)(param_1 + 8);
      pfVar15 = *(float **)(param_1 + 0x10);
      local_1e0 = (byte)uVar130;
      bStack_1df = (byte)((ulong)uVar130 >> 8);
      bStack_1de = (byte)((ulong)uVar130 >> 0x10);
      bStack_1dd = (byte)((ulong)uVar130 >> 0x18);
      bStack_1dc = (byte)((ulong)uVar130 >> 0x20);
      bStack_1db = (byte)((ulong)uVar130 >> 0x28);
      bStack_1da = (byte)((ulong)uVar130 >> 0x30);
      bStack_1d9 = (byte)((ulong)uVar130 >> 0x38);
      bStack_1d8 = (byte)uVar166;
      bStack_1d7 = (byte)((ulong)uVar166 >> 8);
      bStack_1d6 = (byte)((ulong)uVar166 >> 0x10);
      bStack_1d5 = (byte)((ulong)uVar166 >> 0x18);
      uVar28 = -(uint)(0.0 < *(float *)(param_1 + 0x20) * fVar107 +
                             *(float *)(param_1 + 0x30) * fVar117 +
                             *(float *)(param_1 + 0x40) * fVar119);
      uVar55 = -(uint)(0.0 < *(float *)(param_1 + 0x24) * fVar107 +
                             *(float *)(param_1 + 0x34) * fVar117 +
                             *(float *)(param_1 + 0x44) * fVar119);
      uVar56 = -(uint)(0.0 < *(float *)(param_1 + 0x28) * fVar107 +
                             *(float *)(param_1 + 0x38) * fVar117 +
                             *(float *)(param_1 + 0x48) * fVar119);
      iVar57 = CONCAT13((byte)(uVar28 >> 0x18) & bStack_1dd,
                        CONCAT12((byte)(uVar28 >> 0x10) & bStack_1de,
                                 CONCAT11((byte)(uVar28 >> 8) & bStack_1df,(byte)uVar28 & local_1e0)
                                ));
      auVar65._0_8_ =
           CONCAT17((byte)(uVar55 >> 0x18) & bStack_1d9,
                    CONCAT16((byte)(uVar55 >> 0x10) & bStack_1da,
                             CONCAT15((byte)(uVar55 >> 8) & bStack_1db,
                                      CONCAT14((byte)uVar55 & bStack_1dc,iVar57))));
      auVar65[8] = (byte)uVar56 & bStack_1d8;
      auVar65[9] = (byte)(uVar56 >> 8) & bStack_1d7;
      auVar65[10] = (byte)(uVar56 >> 0x10) & bStack_1d6;
      auVar65[0xb] = (byte)(uVar56 >> 0x18) & bStack_1d5;
      auVar65._12_4_ = 0;
      auVar145 = NEON_ext(auVar65,auVar65,8,1);
      local_1a0[(ulong)local_1a4 + 4] =
           (float)(iVar57 + (int)((ulong)auVar65._0_8_ >> 0x20) + auVar145._0_4_ + auVar145._4_4_ &
                  7);
      auVar145 = *(undefined1 (*) [16])(pfVar15 + 8);
      auVar170 = *(undefined1 (*) [16])(pfVar15 + 0xc);
      fVar107 = -*(float *)(lVar9 + 0x30);
      fVar119 = -*(float *)(lVar9 + 0x34);
      fVar104 = -*(float *)(lVar9 + 0x38);
      fVar107 = (float)((uint)fVar107 ^ ((uint)fVar107 ^ (uint)*(float *)(lVar9 + 0x30)) & uVar28);
      fVar119 = (float)((uint)fVar119 ^ ((uint)fVar119 ^ (uint)*(float *)(lVar9 + 0x34)) & uVar55);
      fVar104 = (float)((uint)fVar104 ^ ((uint)fVar104 ^ (uint)*(float *)(lVar9 + 0x38)) & uVar56);
      fVar117 = auVar170._0_4_ +
                *pfVar15 * fVar107 + pfVar15[4] * fVar119 + auVar145._0_4_ * fVar104;
      fVar97 = auVar170._4_4_ +
               pfVar15[1] * fVar107 + pfVar15[5] * fVar119 + auVar145._4_4_ * fVar104;
      auVar37._0_8_ = CONCAT44(fVar97,fVar117);
      auVar37._8_4_ =
           auVar170._8_4_ + pfVar15[2] * fVar107 + pfVar15[6] * fVar119 + auVar145._8_4_ * fVar104;
      auVar37._12_4_ = auVar170._12_4_ + 0.0;
      auVar38 = FUN_00260f00(param_2,&local_c0,local_1a0 + local_1a4,&local_1b0);
      fVar117 = fVar117 - auVar38._0_4_;
      fVar97 = fVar97 - auVar38._4_4_;
      auVar145._0_8_ = CONCAT44(fVar97,fVar117);
      auVar145._8_4_ = auVar37._8_4_ - auVar38._8_4_;
      auVar145._12_4_ = auVar37._12_4_ - auVar38._12_4_;
      uVar29 = NEON_fmax(uVar29,CONCAT44((float)((ulong)*param_4 >> 0x20) +
                                         (float)(local_1b0 >> 0x20) + 0.0,
                                         (float)*param_4 + (float)local_1b0 + 0.0),4);
      auVar78._0_4_ = local_1c0 * fVar117;
      auVar78._4_4_ = fStack_1bc * fVar97;
      fVar117 = auVar98._8_4_;
      auVar78._8_4_ = fVar117 * auVar145._8_4_;
      auVar78._12_4_ = auVar145._12_4_ * 0.0;
      auVar170 = NEON_ext(auVar78,auVar78,8,1);
      fVar107 = auVar78._0_4_ + auVar78._4_4_ + auVar170._0_4_ + auVar170._4_4_;
      if (fVar120 + (float)uVar29 < fVar107) {
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
            fVar131 = *pfVar15;
            pbVar21 = param_9 + lVar9;
            fVar120 = pfVar17[-1];
            fVar177 = *pfVar17;
            lVar11 = lVar9 + 1;
            lVar9 = lVar9 + 2;
            pfVar15 = pfVar15 + 2;
            pfVar17 = pfVar17 + 2;
            *pbVar21 = SUB41(*pfVar13,0);
            (param_10 + lVar11)[-1] = SUB41(fVar120,0);
            pbVar21[1] = SUB41(fVar131,0);
            param_10[lVar11] = SUB41(fVar177,0);
          } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
          if ((local_1a4 & 1) == 0) {
            return 0;
          }
        }
        fVar120 = local_1a0[lVar9];
        param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
        param_10[lVar9] = SUB41(fVar120,0);
        return 0;
      }
      fVar119 = (float)uVar140;
      uVar14 = (ulong)local_1a4;
      if (fVar119 * 0.999775 < fVar107) {
        if (param_9 == (byte *)0x0) goto LAB_0025dbe0;
        *param_11 = (byte)local_1a4;
        if (local_1a4 == 0) {
          param_7[1] = (ulong)(uint)fVar117;
          *param_7 = auVar98._0_8_;
          goto joined_r0x0025dc8c;
        }
        if (local_1a4 == 1) {
          lVar9 = 0;
          goto LAB_0025dbc4;
        }
        lVar9 = 0;
        pfVar15 = local_1a0 + 5;
        pfVar17 = local_1a0 + 1;
        do {
          pfVar13 = pfVar15 + -1;
          fVar107 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar131 = pfVar17[-1];
          fVar97 = *pfVar17;
          lVar11 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar11)[-1] = SUB41(fVar131,0);
          pbVar21[1] = SUB41(fVar107,0);
          param_10[lVar11] = SUB41(fVar97,0);
        } while (uVar14 - (uVar14 & 1) != lVar9);
        if ((local_1a4 & 1) != 0) {
LAB_0025dbc4:
          fVar131 = local_1a0[lVar9];
          param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
          param_10[lVar9] = SUB41(fVar131,0);
        }
LAB_0025dbe0:
        param_7[1] = (ulong)(uint)fVar117;
        *param_7 = auVar98._0_8_;
        if (local_1a4 == 3) {
          FUN_00231940(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_e0,local_a8,local_b0
                      );
          auVar38._0_4_ =
               local_140 +
               ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0]
          ;
          auVar38._4_4_ =
               fStack_13c +
               (uStack_130._4_4_ - fStack_13c) * local_a8[0] +
               (fStack_11c - fStack_13c) * local_b0[0];
          auVar38._8_4_ =
               fStack_138 +
               ((float)uStack_128 - fStack_138) * local_a8[0] +
               (fStack_118 - fStack_138) * local_b0[0];
          auVar38._12_4_ = fStack_134 + 0.0;
          auVar145._0_4_ =
               (float)local_180 +
               ((float)uStack_170 - (float)local_180) * local_a8[0] +
               (local_160 - (float)local_180) * local_b0[0];
          auVar145._4_4_ =
               local_180._4_4_ +
               (uStack_170._4_4_ - local_180._4_4_) * local_a8[0] +
               (fStack_15c - local_180._4_4_) * local_b0[0];
          auVar145._8_4_ =
               fStack_178 +
               ((float)uStack_168 - fStack_178) * local_a8[0] +
               (fStack_158 - fStack_178) * local_b0[0];
          auVar145._12_4_ = fStack_174 + 0.0;
        }
        else if (local_1a4 == 2) {
          FUN_002318c0(&local_c0,local_100,(undefined1 (*) [16])&local_f0,local_a8);
          auVar73._0_8_ =
               CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                        local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
          auVar73._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
          auVar73._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
          auVar145 = NEON_ext(auVar73,auVar73,8,1);
          auVar38._8_4_ = (float)auVar145._0_4_;
          auVar38._0_8_ = auVar73._0_8_;
          auVar38._12_4_ = 0.0;
          auVar51._0_8_ =
               CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                        (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
          auVar51._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
          auVar51._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
          auVar145 = NEON_ext(auVar51,auVar51,8,1);
          auVar145._8_4_ = (float)auVar145._0_4_;
          auVar145._0_8_ = auVar51._0_8_;
          auVar145._12_4_ = 0.0;
        }
        else if (local_1a4 == 1) {
          auVar38._4_4_ = fStack_13c;
          auVar38._0_4_ = local_140;
          auVar38._8_4_ = fStack_138;
          auVar38._12_4_ = fStack_134;
          auVar145._4_4_ = local_180._4_4_;
          auVar145._0_4_ = (float)local_180;
          auVar145._8_4_ = fStack_178;
          auVar145._12_4_ = fStack_174;
        }
joined_r0x0025dc8c:
        if ((param_12 & 1) == 0) {
          auVar83._0_8_ =
               CONCAT44((float)auVar38._4_4_ - fStack_1bc * fVar178,
                        (float)auVar38._0_4_ - local_1c0 * fVar178);
          auVar83._8_4_ = (float)auVar38._8_4_ - fVar117 * fVar178;
          auVar83._12_4_ = (float)auVar38._12_4_ - fVar178 * 0.0;
          auVar167 = NEON_ext(auVar83,auVar83,8,1);
          auVar49._0_4_ = local_1c0 * fVar177;
          auVar49._4_4_ = fStack_1bc * fVar177;
          auVar49._8_4_ = fVar117 * fVar177;
          auVar49._12_4_ = fVar177 * 0.0;
          param_5[1] = (ulong)auVar167._0_4_;
          *param_5 = auVar83._0_8_;
          fVar131 = fVar120;
        }
        else {
          iVar57 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
          iVar87 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
          bVar84 = (byte)((uint)iVar57 >> 8);
          bVar85 = (byte)((uint)iVar57 >> 0x10);
          bVar86 = (byte)((uint)iVar57 >> 0x18);
          fVar131 = (float)CONCAT13(bVar139 & ~bVar86,
                                    CONCAT12(bVar138 & ~bVar85,
                                             CONCAT11(bVar137 & ~bVar84,bVar136 & ~(byte)iVar57)));
          auVar71._0_8_ =
               CONCAT44((float)auVar38._4_4_ - fStack_1bc * fVar131,
                        (float)auVar38._0_4_ - local_1c0 * fVar131);
          auVar71._8_4_ = (float)auVar38._8_4_ - fVar117 * fVar131;
          auVar71._12_4_ = (float)auVar38._12_4_ - fVar131 * 0.0;
          auVar167 = NEON_ext(auVar71,auVar71,8,1);
          bVar94 = (byte)((uint)iVar87 >> 8);
          bVar95 = (byte)((uint)iVar87 >> 0x10);
          bVar96 = (byte)((uint)iVar87 >> 0x18);
          fVar177 = (float)CONCAT13(bVar135 & ~bVar96,
                                    CONCAT12(bVar134 & ~bVar95,
                                             CONCAT11(bVar133 & ~bVar94,bVar132 & ~(byte)iVar87)));
          param_5[1] = (ulong)auVar167._0_4_;
          *param_5 = auVar71._0_8_;
          fVar120 = fVar131 + fVar177;
          auVar72._0_4_ = local_1c0 * fVar177;
          auVar72._4_4_ = fStack_1bc * fVar177;
          auVar72._8_4_ = fVar117 * fVar177;
          auVar72._12_4_ = fVar177 * 0.0;
          auVar49 = auVar145;
          auVar145 = auVar72;
          fVar131 = (float)(CONCAT17(bVar139 & ~bVar86,
                                     CONCAT16(bVar138 & ~bVar85,
                                              CONCAT15(bVar137 & ~bVar84,
                                                       CONCAT14(bVar136 & ~(byte)iVar57,fVar131))))
                           >> 0x20) +
                    (float)(CONCAT17(bVar135 & ~bVar96,
                                     CONCAT16(bVar134 & ~bVar95,
                                              CONCAT15(bVar133 & ~bVar94,
                                                       CONCAT14(bVar132 & ~(byte)iVar87,fVar177))))
                           >> 0x20);
        }
        auVar50._0_8_ = CONCAT44(auVar49._4_4_ + auVar145._4_4_,auVar49._0_4_ + auVar145._0_4_);
        auVar50._8_4_ = auVar49._8_4_ + auVar145._8_4_;
        auVar50._12_4_ = auVar49._12_4_ + auVar145._12_4_;
        auVar145 = NEON_ext(auVar50,auVar50,8,1);
        param_6[1] = (ulong)auVar145._0_4_;
        *param_6 = auVar50._0_8_;
        *param_8 = CONCAT44((float)(uVar140 >> 0x20) - fVar131,fVar119 - fVar120);
        return 2;
      }
      uVar28 = local_1a4 + 1;
      *(long *)(local_100 + (uVar14 * 2 + -7) * 2) = auVar37._8_8_;
      *(undefined8 *)(local_100 + (uVar14 * 2 + -8) * 2) = auVar37._0_8_;
      *(long *)(local_100 + (uVar14 * 2 + -0xf) * 2) = auVar38._8_8_;
      *(long *)(local_1a0 + uVar14 * 4 + 8) = auVar38._0_8_;
      *(long *)(local_e0[uVar14 - 2] + 8) = auVar145._8_8_;
      *(undefined8 *)(local_100 + uVar14 * 4) = auVar145._0_8_;
      if (local_1a4 == 3) {
        local_1a4 = uVar28;
        auVar145 = FUN_00238f80(local_100,&local_140,&local_180,local_1a0 + 4,local_1a0,&local_1a4);
      }
      else {
        fVar107 = local_100[0];
        fVar117 = local_100[1];
        fVar97 = (float)uStack_f8;
        fVar104 = SUB84(uStack_f8,4);
        if (local_1a4 == 2) {
          auVar145._8_8_ = uStack_f8;
          auVar145._0_4_ = local_100[0];
          auVar145._4_4_ = local_100[1];
          auVar7._4_4_ = fStack_ec;
          auVar7._0_4_ = local_f0;
          auVar7._8_4_ = fStack_e8;
          auVar7._12_4_ = fStack_e4;
          fVar110 = local_e0[0]._0_4_;
          auVar92._0_4_ = fVar110 - fVar107;
          fVar118 = local_e0[0]._4_4_;
          auVar92._4_4_ = fVar118 - fVar117;
          fVar74 = local_e0[0]._8_4_;
          auVar92._8_4_ = fVar74 - fVar97;
          auVar92._12_4_ = local_e0[0]._12_4_ - fVar104;
          auVar102._0_4_ = local_f0 - fVar107;
          auVar102._4_4_ = fStack_ec - fVar117;
          auVar102._8_4_ = fStack_e8 - fVar97;
          auVar102._12_4_ = fStack_e4 - fVar104;
          auVar170 = NEON_ext(auVar102,auVar102,8,1);
          auVar174 = NEON_ext(auVar92,auVar92,8,1);
          fVar127 = auVar102._0_4_ * auVar92._4_4_ - auVar102._4_4_ * auVar92._0_4_;
          uVar121 = NEON_ext(CONCAT44(auVar102._4_4_ * auVar92._8_4_ -
                                      auVar102._8_4_ * auVar92._4_4_,fVar127),
                             CONCAT44(auVar170._4_4_ * auVar92._4_4_ -
                                      auVar102._4_4_ * auVar174._4_4_,
                                      auVar170._0_4_ * auVar92._0_4_ -
                                      auVar102._0_4_ * auVar174._0_4_),4,1);
          fVar105 = (float)uVar121;
          auVar116._0_4_ = fVar105 * fVar105;
          fVar106 = (float)((ulong)uVar121 >> 0x20);
          auVar116._4_4_ = fVar106 * fVar106;
          auVar116._8_4_ = fVar127 * fVar127;
          auVar116._12_4_ = 0;
          auVar170 = NEON_ext(auVar116,auVar116,8,1);
          fVar109 = auVar170._0_4_ + auVar170._4_4_;
          fVar108 = auVar116._0_4_ + auVar116._4_4_ + fVar109;
          uVar121 = CONCAT44(auVar116._0_4_ + auVar116._4_4_ + fVar109,fVar108);
          local_1a4 = 3;
          if (1.1920929e-07 < fVar108) {
            if (fVar108 != 0.0) {
              auVar170 = NEON_ext(auVar7,auVar7,8,1);
              auVar174 = NEON_ext(local_e0[0],local_e0[0],8,1);
              fVar144 = local_f0 * fVar118 - fStack_ec * fVar110;
              auVar176 = NEON_ext(auVar145,auVar145,8,1);
              uVar111 = NEON_ext(CONCAT44(fStack_ec * fVar74 - fStack_e8 * fVar118,fVar144),
                                 CONCAT44(auVar170._4_4_ * fVar118 - fStack_ec * auVar174._4_4_,
                                          auVar170._0_4_ * fVar110 - local_f0 * auVar174._0_4_),4,1)
              ;
              fVar108 = fVar117 * fVar110 - fVar107 * fVar118;
              uVar173 = NEON_ext(CONCAT44(fVar97 * fVar118 - fVar117 * fVar74,fVar108),
                                 CONCAT44(fVar117 * auVar174._4_4_ - auVar176._4_4_ * fVar118,
                                          fVar107 * auVar174._0_4_ - auVar176._0_4_ * fVar110),4,1);
              fVar109 = fVar107 * fStack_ec - fVar117 * local_f0;
              uVar157 = NEON_ext(CONCAT44(fVar117 * fStack_e8 - fVar97 * fStack_ec,fVar109),
                                 CONCAT44(auVar176._4_4_ * fStack_ec - fVar117 * auVar170._4_4_,
                                          auVar176._0_4_ * local_f0 - fVar107 * auVar170._0_4_),4,1)
              ;
              auVar148._0_4_ = (float)uVar111 * fVar105;
              auVar148._4_4_ = (float)((ulong)uVar111 >> 0x20) * fVar106;
              auVar148._8_4_ = fVar144 * fVar127;
              auVar148._12_4_ = 0;
              auVar170 = NEON_ext(auVar148,auVar148,8,1);
              auVar154._0_4_ = (float)uVar173 * fVar105;
              auVar154._4_4_ = (float)((ulong)uVar173 >> 0x20) * fVar106;
              auVar154._8_4_ = fVar108 * fVar127;
              auVar154._12_4_ = 0;
              auVar174 = NEON_ext(auVar154,auVar154,8,1);
              fVar108 = auVar148._0_4_ + auVar148._4_4_ + auVar170._0_4_ + auVar170._4_4_;
              auVar159._0_4_ = (float)uVar157 * fVar105;
              auVar159._4_4_ = (float)((ulong)uVar157 >> 0x20) * fVar106;
              auVar159._8_4_ = fVar109 * fVar127;
              auVar159._12_4_ = 0;
              fVar109 = auVar154._0_4_ + auVar154._4_4_ + auVar174._0_4_ + auVar174._4_4_;
              auVar170 = NEON_ext(auVar159,auVar159,8,1);
              fVar144 = auVar159._0_4_ + auVar159._4_4_ + auVar170._0_4_ + auVar170._4_4_;
              bVar8 = (0.0 <= fVar108 && 0.0 <= fVar109) && 0.0 <= fVar144;
              auVar160._0_4_ = -(uint)bVar8;
              auVar160._4_4_ = -(uint)bVar8;
              auVar160._8_4_ = -(uint)bVar8;
              auVar160._12_4_ = -(uint)bVar8;
              NEON_ext(auVar160,auVar160,8,1);
              if (CONCAT13((char)auVar160._12_4_,
                           CONCAT12((char)auVar160._8_4_,
                                    CONCAT11((char)auVar160._4_4_,(char)auVar160._0_4_))) == -1) {
                auVar42._0_4_ = fVar107 * fVar105;
                auVar42._4_4_ = fVar117 * fVar106;
                auVar42._8_4_ = fVar97 * fVar127;
                auVar42._12_4_ = fVar104 * 0.0;
                auVar145 = NEON_ext(auVar42,auVar42,8,1);
                uVar157 = NEON_frecpe(uVar121,4);
                uVar111 = NEON_frecps(uVar121,uVar157,4);
                fVar107 = (float)uVar157 * (float)uVar111;
                fVar117 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
                uVar157 = NEON_frecps(uVar121,CONCAT44(fVar117,fVar107),4);
                fVar107 = fVar107 * (float)uVar157;
                fVar117 = fVar117 * (float)((ulong)uVar157 >> 0x20);
                uVar157 = NEON_frecps(uVar121,CONCAT44(fVar117,fVar107),4);
                fVar107 = fVar107 * (float)uVar157;
                fVar117 = fVar117 * (float)((ulong)uVar157 >> 0x20);
                uVar157 = NEON_frecps(uVar121,CONCAT44(fVar117,fVar107),4);
                fVar107 = fVar107 * (float)uVar157;
                uVar121 = NEON_frecps(uVar121,CONCAT44(fVar117 * (float)((ulong)uVar157 >> 0x20),
                                                       fVar107),4);
                fVar107 = (auVar42._0_4_ + auVar42._4_4_ + auVar145._0_4_ + auVar145._4_4_) *
                          fVar107 * (float)uVar121;
                auVar145._0_4_ = fVar105 * fVar107;
                auVar145._4_4_ = fVar106 * fVar107;
                auVar145._8_4_ = fVar127 * fVar107;
                auVar145._12_4_ = 0.0;
              }
              else {
                auVar126._0_4_ = -fVar107 * auVar102._0_4_;
                auVar126._4_4_ = -fVar117 * auVar102._4_4_;
                auVar126._8_4_ = -fVar97 * auVar102._8_4_;
                auVar126._12_4_ = auVar102._12_4_ * 0.0;
                auVar170 = NEON_ext(auVar126,auVar126,8,1);
                fVar127 = auVar170._0_4_ + auVar170._4_4_;
                auVar129._0_4_ = -local_f0 * auVar102._0_4_;
                auVar129._4_4_ = -fStack_ec * auVar102._4_4_;
                auVar129._8_4_ = -fStack_e8 * auVar102._8_4_;
                auVar129._12_4_ = auVar102._12_4_ * 0.0;
                auVar170 = NEON_ext(auVar129,auVar129,8,1);
                fVar25 = auVar170._0_4_ + auVar170._4_4_;
                fVar105 = auVar126._0_4_ + auVar126._4_4_ + fVar127;
                fVar106 = auVar129._0_4_ + auVar129._4_4_ + fVar25;
                fVar25 = auVar129._0_4_ + auVar129._4_4_ + fVar25;
                bVar8 = (0.0 <= fVar105 && fVar144 <= 0.0) && fVar106 <= 0.0;
                auVar155._0_4_ = -(uint)bVar8;
                auVar155._4_4_ = -(uint)bVar8;
                auVar155._8_4_ = -(uint)bVar8;
                auVar155._12_4_ = -(uint)bVar8;
                NEON_ext(auVar155,auVar155,8,1);
                if (CONCAT13((char)auVar155._12_4_,
                             CONCAT12((char)auVar155._8_4_,
                                      CONCAT11((char)auVar155._4_4_,(char)auVar155._0_4_))) == -1) {
                  uVar121 = CONCAT44((auVar126._0_4_ + auVar126._4_4_ + fVar127) - fVar25,
                                     fVar105 - fVar106);
                  uVar157 = NEON_frecpe(uVar121,4);
                  uVar111 = NEON_frecps(uVar121,uVar157,4);
                  fVar108 = (float)uVar157 * (float)uVar111;
                  fVar109 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
                  uVar157 = NEON_frecps(uVar121,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar157;
                  fVar109 = fVar109 * (float)((ulong)uVar157 >> 0x20);
                  uVar157 = NEON_frecps(uVar121,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar157;
                  fVar109 = fVar109 * (float)((ulong)uVar157 >> 0x20);
                  uVar157 = NEON_frecps(uVar121,CONCAT44(fVar109,fVar108),4);
                  fVar108 = fVar108 * (float)uVar157;
                  uVar121 = NEON_frecps(uVar121,CONCAT44(fVar109 * (float)((ulong)uVar157 >> 0x20),
                                                         fVar108),4);
                  fVar105 = fVar105 * (float)(-(uint)(1.1920929e-07 < ABS(fVar105 - fVar106)) &
                                             (uint)(fVar108 * (float)uVar121));
                  pfVar15 = local_1a0;
                  pfVar18 = local_1a0 + 4;
                  auVar43._0_8_ =
                       CONCAT44(fVar117 + auVar102._4_4_ * fVar105,
                                fVar107 + auVar102._0_4_ * fVar105);
                  auVar43._8_4_ = fVar97 + auVar102._8_4_ * fVar105;
                  auVar43._12_4_ = fVar104 + auVar102._12_4_ * fVar105;
                  auVar145 = NEON_ext(auVar43,auVar43,8,1);
                  pfVar17 = (float *)&local_180;
                  pfVar13 = &local_140;
                  pauVar16 = (undefined1 (*) [16])local_100;
                  local_1a4 = 2;
                  auVar145._8_4_ = (float)auVar145._0_4_;
                  auVar145._0_8_ = auVar43._0_8_;
                  auVar145._12_4_ = 0.0;
LAB_0025d4ac:
                  lVar9 = 1;
                  pauVar19 = (undefined1 (*) [16])&local_f0;
                }
                else {
                  auVar156._0_4_ = -local_f0 * auVar92._0_4_;
                  auVar156._4_4_ = -fStack_ec * auVar92._4_4_;
                  auVar156._8_4_ = -fStack_e8 * auVar92._8_4_;
                  auVar156._12_4_ = auVar92._12_4_ * 0.0;
                  auVar170 = NEON_ext(auVar156,auVar156,8,1);
                  fVar26 = auVar170._0_4_ + auVar170._4_4_;
                  auVar103._0_4_ = auVar102._0_4_ * -fVar110;
                  auVar103._4_4_ = auVar102._4_4_ * -fVar118;
                  auVar103._8_4_ = auVar102._8_4_ * -fVar74;
                  auVar103._12_4_ = auVar102._12_4_ * 0.0;
                  auVar169._0_4_ = auVar92._0_4_ * -fVar110;
                  auVar169._4_4_ = auVar92._4_4_ * -fVar118;
                  auVar169._8_4_ = auVar92._8_4_ * -fVar74;
                  auVar169._12_4_ = auVar92._12_4_ * 0.0;
                  fVar127 = auVar156._0_4_ + auVar156._4_4_ + fVar26;
                  auVar170 = NEON_ext(auVar103,auVar103,8,1);
                  fVar161 = auVar170._0_4_ + auVar170._4_4_;
                  fVar144 = auVar103._0_4_ + auVar103._4_4_ + fVar161;
                  auVar170 = NEON_ext(auVar169,auVar169,8,1);
                  fVar165 = auVar170._0_4_ + auVar170._4_4_;
                  fVar22 = auVar169._0_4_ + auVar169._4_4_ + fVar165;
                  fVar165 = auVar169._0_4_ + auVar169._4_4_ + fVar165;
                  bVar8 = (fVar106 <= fVar127 && fVar108 <= 0.0) && fVar22 <= fVar144;
                  auVar149._0_4_ = -(uint)bVar8;
                  auVar149._4_4_ = -(uint)bVar8;
                  auVar149._8_4_ = -(uint)bVar8;
                  auVar149._12_4_ = -(uint)bVar8;
                  NEON_ext(auVar149,auVar149,8,1);
                  if (CONCAT13((char)auVar149._12_4_,
                               CONCAT12((char)auVar149._8_4_,
                                        CONCAT11((char)auVar149._4_4_,(char)auVar149._0_4_))) == -1)
                  {
                    fVar107 = (fVar127 - fVar106) + (fVar144 - fVar22);
                    uVar121 = CONCAT44(((auVar156._0_4_ + auVar156._4_4_ + fVar26) - fVar25) +
                                       ((auVar103._0_4_ + auVar103._4_4_ + fVar161) - fVar165),
                                       fVar107);
                    uVar157 = NEON_frecpe(uVar121,4);
                    uVar111 = NEON_frecps(uVar121,uVar157,4);
                    fVar117 = (float)uVar157 * (float)uVar111;
                    fVar97 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar97,fVar117),4);
                    fVar117 = fVar117 * (float)uVar157;
                    fVar97 = fVar97 * (float)((ulong)uVar157 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar97,fVar117),4);
                    fVar117 = fVar117 * (float)uVar157;
                    fVar97 = fVar97 * (float)((ulong)uVar157 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar97,fVar117),4);
                    fVar117 = fVar117 * (float)uVar157;
                    uVar121 = NEON_frecps(uVar121,CONCAT44(fVar97 * (float)((ulong)uVar157 >> 0x20),
                                                           fVar117),4);
                    fVar107 = (fVar127 - fVar106) *
                              (float)(-(uint)(1.1920929e-07 < ABS(fVar107)) &
                                     (uint)(fVar117 * (float)uVar121));
                    auVar44._0_8_ =
                         CONCAT44(fStack_ec + (fVar118 - fStack_ec) * fVar107,
                                  local_f0 + (fVar110 - local_f0) * fVar107);
                    auVar44._8_4_ = fStack_e8 + (fVar74 - fStack_e8) * fVar107;
                    auVar44._12_4_ = fStack_e4 + (local_e0[0]._12_4_ - fStack_e4) * fVar107;
                    auVar145 = NEON_ext(auVar44,auVar44,8,1);
                    auVar3._8_4_ = auVar145._0_4_;
                    auVar3._0_8_ = auVar44._0_8_;
                    pfVar15 = local_1a0 + 1;
                    pfVar18 = local_1a0 + 5;
                    pfVar17 = (float *)&uStack_170;
                    pfVar13 = (float *)&uStack_130;
                    pauVar16 = (undefined1 (*) [16])&local_f0;
                  }
                  else {
                    auVar150._0_4_ = -fVar107 * auVar92._0_4_;
                    auVar150._4_4_ = -fVar117 * auVar92._4_4_;
                    auVar150._8_4_ = -fVar97 * auVar92._8_4_;
                    auVar150._12_4_ = auVar92._12_4_ * 0.0;
                    auVar170 = NEON_ext(auVar150,auVar150,8,1);
                    fVar110 = auVar170._0_4_ + auVar170._4_4_;
                    fVar108 = auVar150._0_4_ + auVar150._4_4_ + fVar110;
                    bVar8 = (fVar109 <= 0.0 && 0.0 <= fVar108) && fVar22 <= 0.0;
                    auVar143._0_4_ = -(uint)bVar8;
                    auVar143._4_4_ = -(uint)bVar8;
                    auVar143._8_4_ = -(uint)bVar8;
                    auVar143._12_4_ = -(uint)bVar8;
                    NEON_ext(auVar143,auVar143,8,1);
                    if (CONCAT13((char)auVar143._12_4_,
                                 CONCAT12((char)auVar143._8_4_,
                                          CONCAT11((char)auVar143._4_4_,(char)auVar143._0_4_))) !=
                        -1) {
                      bVar8 = fVar105 <= 0.0 && fVar108 <= 0.0;
                      auVar93._0_4_ = -(uint)bVar8;
                      auVar93._4_4_ = -(uint)bVar8;
                      auVar93._8_4_ = -(uint)bVar8;
                      auVar93._12_4_ = -(uint)bVar8;
                      NEON_ext(auVar93,auVar93,8,1);
                      if (CONCAT13((char)auVar93._12_4_,
                                   CONCAT12((char)auVar93._8_4_,
                                            CONCAT11((char)auVar93._4_4_,(char)auVar93._0_4_))) ==
                          -1) {
                        pfVar15 = local_1a0;
                        pfVar18 = local_1a0 + 4;
                        pfVar17 = (float *)&local_180;
                        pfVar13 = &local_140;
                        pauVar16 = (undefined1 (*) [16])local_100;
                        local_1a4 = 1;
                      }
                      else {
                        bVar8 = 0.0 <= fVar106 && fVar127 <= fVar106;
                        auVar40._0_4_ = -(uint)bVar8;
                        auVar40._4_4_ = -(uint)bVar8;
                        auVar40._8_4_ = -(uint)bVar8;
                        auVar40._12_4_ = -(uint)bVar8;
                        NEON_ext(auVar40,auVar40,8,1);
                        iVar57 = CONCAT13((char)auVar40._12_4_,
                                          CONCAT12((char)auVar40._8_4_,
                                                   CONCAT11((char)auVar40._4_4_,(char)auVar40._0_4_)
                                                  ));
                        iVar87 = -(uint)(iVar57 == -1);
                        auVar41._4_4_ = iVar87;
                        auVar41._0_4_ = iVar87;
                        auVar41._8_4_ = iVar87;
                        auVar41._12_4_ = iVar87;
                        local_1a4 = 1;
                        lVar9 = 1;
                        if (iVar57 != -1) {
                          lVar9 = 2;
                        }
                        auVar145 = local_e0[0] ^ (local_e0[0] ^ auVar7) & auVar41;
                        pauVar16 = (undefined1 (*) [16])(local_100 + lVar9 * 4);
                        pfVar13 = local_100 + (lVar9 * 2 + -8) * 2;
                        pfVar17 = local_1a0 + lVar9 * 4 + 8;
                        pfVar18 = local_1a0 + lVar9 + 4;
                        pfVar15 = local_1a0 + lVar9;
                      }
                      goto LAB_0025d4ac;
                    }
                    uVar121 = CONCAT44((auVar150._0_4_ + auVar150._4_4_ + fVar110) - fVar165,
                                       fVar108 - fVar22);
                    uVar157 = NEON_frecpe(uVar121,4);
                    uVar111 = NEON_frecps(uVar121,uVar157,4);
                    fVar109 = (float)uVar157 * (float)uVar111;
                    fVar110 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
                    fVar109 = fVar109 * (float)uVar157;
                    fVar110 = fVar110 * (float)((ulong)uVar157 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
                    fVar109 = fVar109 * (float)uVar157;
                    fVar110 = fVar110 * (float)((ulong)uVar157 >> 0x20);
                    uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
                    fVar109 = fVar109 * (float)uVar157;
                    uVar121 = NEON_frecps(uVar121,CONCAT44(fVar110 * (float)((ulong)uVar157 >> 0x20)
                                                           ,fVar109),4);
                    fVar108 = fVar108 * (float)(-(uint)(1.1920929e-07 < ABS(fVar108 - fVar22)) &
                                               (uint)(fVar109 * (float)uVar121));
                    auVar45._0_8_ =
                         CONCAT44(fVar117 + auVar92._4_4_ * fVar108,
                                  fVar107 + auVar92._0_4_ * fVar108);
                    auVar45._8_4_ = fVar97 + auVar92._8_4_ * fVar108;
                    auVar45._12_4_ = fVar104 + auVar92._12_4_ * fVar108;
                    auVar145 = NEON_ext(auVar45,auVar45,8,1);
                    auVar3._8_4_ = auVar145._0_4_;
                    auVar3._0_8_ = auVar45._0_8_;
                    pfVar15 = local_1a0;
                    pfVar18 = local_1a0 + 4;
                    pfVar17 = (float *)&local_180;
                    pfVar13 = &local_140;
                    pauVar16 = (undefined1 (*) [16])local_100;
                  }
                  auVar145._12_4_ = 0.0;
                  auVar145._0_12_ = auVar3;
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
            auVar66._0_4_ = auVar102._0_4_ * auVar102._0_4_;
            auVar66._4_4_ = auVar102._4_4_ * auVar102._4_4_;
            auVar66._8_4_ = auVar102._8_4_ * auVar102._8_4_;
            auVar66._12_4_ = auVar102._12_4_ * auVar102._12_4_;
            auVar145 = NEON_ext(auVar66,auVar66,8,1);
            fVar109 = auVar145._0_4_ + auVar145._4_4_;
            fVar108 = auVar66._0_4_ + auVar66._4_4_ + fVar109;
            uVar121 = CONCAT44(auVar66._0_4_ + auVar66._4_4_ + fVar109,fVar108);
            bVar8 = fVar108 <= 1.1920929e-07;
            auVar80._0_4_ = -(uint)bVar8;
            auVar80._4_4_ = -(uint)bVar8;
            auVar80._8_4_ = -(uint)bVar8;
            auVar80._12_4_ = -(uint)bVar8;
            NEON_ext(auVar80,auVar80,8,1);
            local_1a4 = 2;
            if (CONCAT13((char)auVar80._12_4_,
                         CONCAT12((char)auVar80._8_4_,
                                  CONCAT11((char)auVar80._4_4_,(char)auVar80._0_4_))) != -1) {
              auVar81._0_4_ = -fVar107 * auVar102._0_4_;
              auVar81._4_4_ = -fVar117 * auVar102._4_4_;
              auVar81._8_4_ = -fVar97 * auVar102._8_4_;
              auVar81._12_4_ = auVar102._12_4_ * 0.0;
              auVar145 = NEON_ext(auVar81,auVar81,8,1);
              fVar108 = auVar145._0_4_ + auVar145._4_4_;
              uVar157 = NEON_frecpe(uVar121,4);
              uVar111 = NEON_frecps(uVar121,uVar157,4);
              fVar109 = (float)uVar157 * (float)uVar111;
              fVar110 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
              uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
              fVar109 = fVar109 * (float)uVar157;
              fVar110 = fVar110 * (float)((ulong)uVar157 >> 0x20);
              uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
              fVar109 = fVar109 * (float)uVar157;
              fVar110 = fVar110 * (float)((ulong)uVar157 >> 0x20);
              uVar157 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
              fVar109 = fVar109 * (float)uVar157;
              fVar110 = fVar110 * (float)((ulong)uVar157 >> 0x20);
              uVar121 = NEON_frecps(uVar121,CONCAT44(fVar110,fVar109),4);
              uVar157 = NEON_fmov(0x3f800000,4);
              uVar121 = NEON_fmin(CONCAT44((auVar81._0_4_ + auVar81._4_4_ + fVar108) *
                                           fVar110 * (float)((ulong)uVar121 >> 0x20),
                                           (auVar81._0_4_ + auVar81._4_4_ + fVar108) *
                                           fVar109 * (float)uVar121),uVar157,4);
              uVar121 = NEON_fmax(uVar121,0,4);
              fVar108 = (float)uVar121;
              fVar109 = auVar102._0_4_ * fVar108;
              fVar110 = auVar102._4_4_ * fVar108;
              fVar118 = auVar102._8_4_ * fVar108;
              fVar108 = auVar102._12_4_ * fVar108;
              goto LAB_0025d118;
            }
LAB_0025d12c:
            auVar145._8_8_ = uStack_f8;
            auVar145._0_4_ = local_100[0];
            auVar145._4_4_ = local_100[1];
            local_1a4 = 1;
          }
        }
        else {
          bVar8 = local_1a4 == 1;
          local_1a4 = uVar28;
          if (bVar8) {
            fVar109 = local_f0 - fVar107;
            fVar110 = fStack_ec - fVar117;
            fVar118 = fStack_e8 - fVar97;
            fVar108 = fStack_e4 - fVar104;
            auVar79._0_4_ = fVar109 * fVar109;
            auVar79._4_4_ = fVar110 * fVar110;
            auVar79._8_4_ = fVar118 * fVar118;
            auVar79._12_4_ = fVar108 * fVar108;
            auVar145 = NEON_ext(auVar79,auVar79,8,1);
            fVar105 = auVar145._0_4_ + auVar145._4_4_;
            fVar74 = auVar79._0_4_ + auVar79._4_4_ + fVar105;
            uVar121 = CONCAT44(auVar79._0_4_ + auVar79._4_4_ + fVar105,fVar74);
            bVar8 = fVar74 <= 1.1920929e-07;
            auVar90._0_4_ = -(uint)bVar8;
            auVar90._4_4_ = -(uint)bVar8;
            auVar90._8_4_ = -(uint)bVar8;
            auVar90._12_4_ = -(uint)bVar8;
            NEON_ext(auVar90,auVar90,8,1);
            if (CONCAT13((char)auVar90._12_4_,
                         CONCAT12((char)auVar90._8_4_,
                                  CONCAT11((char)auVar90._4_4_,(char)auVar90._0_4_))) == -1)
            goto LAB_0025d12c;
            auVar91._0_4_ = -fVar107 * fVar109;
            auVar91._4_4_ = -fVar117 * fVar110;
            auVar91._8_4_ = -fVar97 * fVar118;
            auVar91._12_4_ = fVar108 * 0.0;
            auVar145 = NEON_ext(auVar91,auVar91,8,1);
            fVar74 = auVar145._0_4_ + auVar145._4_4_;
            uVar157 = NEON_frecpe(uVar121,4);
            uVar111 = NEON_frecps(uVar121,uVar157,4);
            fVar105 = (float)uVar157 * (float)uVar111;
            fVar106 = (float)((ulong)uVar157 >> 0x20) * (float)((ulong)uVar111 >> 0x20);
            uVar157 = NEON_frecps(uVar121,CONCAT44(fVar106,fVar105),4);
            fVar105 = fVar105 * (float)uVar157;
            fVar106 = fVar106 * (float)((ulong)uVar157 >> 0x20);
            uVar157 = NEON_frecps(uVar121,CONCAT44(fVar106,fVar105),4);
            fVar105 = fVar105 * (float)uVar157;
            fVar106 = fVar106 * (float)((ulong)uVar157 >> 0x20);
            uVar157 = NEON_frecps(uVar121,CONCAT44(fVar106,fVar105),4);
            fVar105 = fVar105 * (float)uVar157;
            fVar106 = fVar106 * (float)((ulong)uVar157 >> 0x20);
            uVar121 = NEON_frecps(uVar121,CONCAT44(fVar106,fVar105),4);
            uVar157 = NEON_fmov(0x3f800000,4);
            uVar121 = NEON_fmin(CONCAT44((auVar91._0_4_ + auVar91._4_4_ + fVar74) *
                                         fVar106 * (float)((ulong)uVar121 >> 0x20),
                                         (auVar91._0_4_ + auVar91._4_4_ + fVar74) *
                                         fVar105 * (float)uVar121),uVar157,4);
            uVar121 = NEON_fmax(uVar121,0,4);
            fVar74 = (float)uVar121;
            fVar109 = fVar109 * fVar74;
            fVar110 = fVar110 * fVar74;
            fVar118 = fVar118 * fVar74;
            fVar108 = fVar108 * fVar74;
LAB_0025d118:
            auVar39._0_8_ = CONCAT44(fVar117 + fVar110,fVar107 + fVar109);
            auVar39._8_4_ = fVar97 + fVar118;
            auVar39._12_4_ = fVar104 + fVar108;
            auVar145 = NEON_ext(auVar39,auVar39,8,1);
            auVar145._8_4_ = (float)auVar145._0_4_;
            auVar145._0_8_ = auVar39._0_8_;
            auVar145._12_4_ = 0.0;
          }
        }
      }
      fVar97 = auVar145._0_4_;
      auVar67._0_4_ = fVar97 * fVar97;
      fVar104 = auVar145._4_4_;
      auVar67._4_4_ = fVar104 * fVar104;
      fVar108 = auVar145._8_4_;
      auVar67._8_4_ = fVar108 * fVar108;
      auVar67._12_4_ = auVar145._12_4_ * auVar145._12_4_;
      auVar170 = NEON_ext(auVar67,auVar67,8,1);
      uStack_b8 = auVar145._8_8_;
      local_c0 = auVar145._0_8_;
      fVar117 = auVar170._0_4_ + auVar170._4_4_;
      fVar107 = auVar67._0_4_ + auVar67._4_4_ + fVar117;
      fVar117 = auVar67._0_4_ + auVar67._4_4_ + fVar117;
      uVar10 = CONCAT44(fVar117,fVar107);
      uVar121 = NEON_frsqrte(uVar10,4);
      fVar109 = (float)uVar121;
      fVar110 = (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(CONCAT44(fVar110 * fVar110,fVar109 * fVar109),uVar10,4);
      fVar109 = fVar109 * (float)uVar121;
      fVar110 = fVar110 * (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(CONCAT44(fVar110 * fVar110,fVar109 * fVar109),uVar10,4);
      fVar109 = fVar109 * (float)uVar121;
      fVar110 = fVar110 * (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(CONCAT44(fVar110 * fVar110,fVar109 * fVar109),uVar10,4);
      fVar109 = fVar109 * (float)uVar121;
      fVar110 = fVar110 * (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frsqrts(CONCAT44(fVar110 * fVar110,fVar109 * fVar109),uVar10,4);
      uVar14 = CONCAT44(fVar117 * fVar110 * (float)((ulong)uVar121 >> 0x20),
                        fVar107 * fVar109 * (float)uVar121);
      uVar14 = uVar14 ^ (uVar14 ^ uVar10) &
                        CONCAT44(-(uint)(fVar107 == 0.0),-(uint)(fVar107 == 0.0));
      uVar121 = NEON_frecpe(uVar14,4);
      uVar157 = NEON_frecps(uVar14,uVar121,4);
      fVar107 = (float)uVar121 * (float)uVar157;
      fVar117 = (float)((ulong)uVar121 >> 0x20) * (float)((ulong)uVar157 >> 0x20);
      uVar121 = NEON_frecps(uVar14,CONCAT44(fVar117,fVar107),4);
      fVar107 = fVar107 * (float)uVar121;
      fVar117 = fVar117 * (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frecps(uVar14,CONCAT44(fVar117,fVar107),4);
      fVar107 = fVar107 * (float)uVar121;
      fVar117 = fVar117 * (float)((ulong)uVar121 >> 0x20);
      uVar121 = NEON_frecps(uVar14,CONCAT44(fVar117,fVar107),4);
      fVar107 = fVar107 * (float)uVar121;
      uVar121 = NEON_frecps(uVar14,CONCAT44(fVar117 * (float)((ulong)uVar121 >> 0x20),fVar107),4);
      fVar107 = fVar107 * (float)uVar121;
      auVar98._0_4_ = fVar97 * fVar107;
      auVar98._4_4_ = fVar104 * fVar107;
      auVar98._8_4_ = fVar108 * fVar107;
      bVar8 = (float)uVar14 < fVar119;
      bVar5 = fVar131 < (float)uVar14 && bVar8;
      auVar82._0_4_ = -(uint)bVar5;
      auVar82._4_4_ = -(uint)bVar5;
      auVar82._8_4_ = -(uint)bVar5;
      auVar82._12_4_ = -(uint)bVar5;
      NEON_ext(auVar82,auVar82,8,1);
    } while (CONCAT13((char)auVar82._12_4_,
                      CONCAT12((char)auVar82._8_4_,CONCAT11((char)auVar82._4_4_,(char)auVar82._0_4_)
                              )) == -1);
    uVar130 = CONCAT26(-(ushort)!bVar8,
                       CONCAT24(-(ushort)!bVar8,CONCAT22(-(ushort)!bVar8,-(ushort)!bVar8)));
  }
  else {
    uVar130 = 0;
  }
  uVar23 = (ushort)((ulong)uVar130 >> 0x10);
  uVar24 = (ushort)((ulong)uVar130 >> 0x20);
  uVar27 = (ushort)((ulong)uVar130 >> 0x30);
  auVar63._0_4_ = (int)((uint)(ushort)uVar130 << 0x1f) >> 0x1f;
  auVar63._4_4_ = (int)((uint)uVar23 << 0x1f) >> 0x1f;
  auVar63._8_4_ = (int)((uint)uVar24 << 0x1f) >> 0x1f;
  auVar63._12_4_ = (int)((uint)uVar27 << 0x1f) >> 0x1f;
  auVar64 = NEON_ext(auVar63,auVar63,8,1);
  auVar36._0_4_ =
       (float)CONCAT13((char)((short)(uVar27 << 0xf) >> 0xf),
                       CONCAT12((char)((short)(uVar24 << 0xf) >> 0xf),
                                CONCAT11((char)((short)(uVar23 << 0xf) >> 0xf),
                                         (char)((short)((ushort)uVar130 << 0xf) >> 0xf))));
  auVar36[4] = auVar64[0];
  auVar36[5] = auVar64[2];
  auVar36[6] = auVar64[4];
  auVar36[7] = auVar64[6];
  auVar36._8_8_ = 0;
  if (auVar36._0_4_ != -NAN) {
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
          fVar131 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar120 = pfVar17[-1];
          fVar177 = *pfVar17;
          lVar11 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar11)[-1] = SUB41(fVar120,0);
          pbVar21[1] = SUB41(fVar131,0);
          param_10[lVar11] = SUB41(fVar177,0);
        } while ((ulong)local_1a4 - ((ulong)local_1a4 & 1) != lVar9);
        if ((local_1a4 & 1) == 0) {
          return 5;
        }
      }
      fVar120 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar120,0);
    }
    return 5;
  }
  local_c0 = auVar167._0_8_;
  uStack_b8 = auVar167._8_8_;
  if (param_9 == (byte *)0x0) {
LAB_0025d8a0:
    if (local_1a4 == 3) {
      FUN_00231940(&local_c0,local_100,&local_f0,local_e0,local_a8,local_b0);
      auVar36._0_4_ =
           local_140 +
           ((float)uStack_130 - local_140) * local_a8[0] + (local_120 - local_140) * local_b0[0];
      auVar36._4_4_ =
           fStack_13c +
           (uStack_130._4_4_ - fStack_13c) * local_a8[0] + (fStack_11c - fStack_13c) * local_b0[0];
      auVar36._8_4_ =
           fStack_138 +
           ((float)uStack_128 - fStack_138) * local_a8[0] + (fStack_118 - fStack_138) * local_b0[0];
      auVar36._12_4_ = fStack_134 + 0.0;
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
      goto LAB_0025d9b8;
    }
    if (local_1a4 == 2) {
      FUN_002318c0(&local_c0,local_100,&local_f0,local_a8);
      auVar46._0_8_ =
           CONCAT44(fStack_13c + (uStack_130._4_4_ - fStack_13c) * local_a8[0],
                    local_140 + ((float)uStack_130 - local_140) * local_a8[0]);
      auVar46._8_4_ = fStack_138 + ((float)uStack_128 - fStack_138) * local_a8[0];
      auVar46._12_4_ = fStack_134 + (uStack_128._4_4_ - fStack_134) * local_a8[0];
      auVar145 = NEON_ext(auVar46,auVar46,8,1);
      auVar36._8_4_ = (float)auVar145._0_4_;
      auVar36._0_8_ = auVar46._0_8_;
      auVar36._12_4_ = 0.0;
      auVar68._0_8_ =
           CONCAT44(local_180._4_4_ + (uStack_170._4_4_ - local_180._4_4_) * local_a8[0],
                    (float)local_180 + ((float)uStack_170 - (float)local_180) * local_a8[0]);
      auVar68._8_4_ = fStack_178 + ((float)uStack_168 - fStack_178) * local_a8[0];
      auVar68._12_4_ = fStack_174 + (uStack_168._4_4_ - fStack_174) * local_a8[0];
      auVar145 = NEON_ext(auVar68,auVar68,8,1);
      auVar64._8_4_ = (float)auVar145._0_4_;
      auVar64._0_8_ = auVar68._0_8_;
      auVar64._12_4_ = 0.0;
      goto LAB_0025d9b8;
    }
    if (local_1a4 != 1) goto LAB_0025d9b8;
  }
  else {
    uVar28 = local_1a4 - 1;
    *param_11 = (byte)uVar28;
    if (uVar28 != 0) {
      if (uVar28 == 1) {
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        pfVar15 = local_1a0 + 5;
        pfVar17 = local_1a0 + 1;
        do {
          pfVar13 = pfVar15 + -1;
          fVar107 = *pfVar15;
          pbVar21 = param_9 + lVar9;
          fVar131 = pfVar17[-1];
          fVar117 = *pfVar17;
          lVar11 = lVar9 + 1;
          lVar9 = lVar9 + 2;
          pfVar15 = pfVar15 + 2;
          pfVar17 = pfVar17 + 2;
          *pbVar21 = SUB41(*pfVar13,0);
          (param_10 + lVar11)[-1] = SUB41(fVar131,0);
          pbVar21[1] = SUB41(fVar107,0);
          param_10[lVar11] = SUB41(fVar117,0);
        } while ((ulong)uVar28 - ((ulong)uVar28 & 1) != lVar9);
        if ((uVar28 & 1) == 0) goto LAB_0025d8a0;
      }
      fVar131 = local_1a0[lVar9];
      param_9[lVar9] = SUB41(local_1a0[lVar9 + 4],0);
      param_10[lVar9] = SUB41(fVar131,0);
      goto LAB_0025d8a0;
    }
  }
  auVar36._4_4_ = fStack_13c;
  auVar36._0_4_ = local_140;
  auVar36._8_4_ = fStack_138;
  auVar36._12_4_ = fStack_134;
  auVar64._4_4_ = local_180._4_4_;
  auVar64._0_4_ = (float)local_180;
  auVar64._8_4_ = fStack_178;
  auVar64._12_4_ = fStack_174;
LAB_0025d9b8:
  uVar130 = NEON_frecpe(uVar140,4);
  uVar166 = NEON_frecps(uVar140,uVar130,4);
  fVar131 = (float)uVar130 * (float)uVar166;
  fVar107 = (float)((ulong)uVar130 >> 0x20) * (float)((ulong)uVar166 >> 0x20);
  uVar130 = NEON_frecps(uVar140,CONCAT44(fVar107,fVar131),4);
  fVar131 = fVar131 * (float)uVar130;
  fVar107 = fVar107 * (float)((ulong)uVar130 >> 0x20);
  uVar130 = NEON_frecps(uVar140,CONCAT44(fVar107,fVar131),4);
  fVar131 = fVar131 * (float)uVar130;
  fVar107 = fVar107 * (float)((ulong)uVar130 >> 0x20);
  uVar130 = NEON_frecps(uVar140,CONCAT44(fVar107,fVar131),4);
  fVar131 = fVar131 * (float)uVar130;
  uVar130 = NEON_frecps(uVar140,CONCAT44(fVar107 * (float)((ulong)uVar130 >> 0x20),fVar131),4);
  fVar131 = fVar131 * (float)uVar130;
  local_c0._0_4_ = (float)local_c0 * fVar131;
  local_c0._4_4_ = local_c0._4_4_ * fVar131;
  uStack_b8._0_4_ = (float)uStack_b8 * fVar131;
  param_7[1] = (ulong)(uint)(float)uStack_b8;
  *param_7 = CONCAT44(local_c0._4_4_,(float)local_c0);
  fVar131 = (float)uVar140;
  fVar107 = (float)(uVar140 >> 0x20);
  if ((param_12 & 1) == 0) {
    auVar48._0_8_ =
         CONCAT44(auVar36._4_4_ - local_c0._4_4_ * fVar178,auVar36._0_4_ - (float)local_c0 * fVar178
                 );
    auVar48._8_4_ = auVar36._8_4_ - (float)uStack_b8 * fVar178;
    auVar48._12_4_ = auVar36._12_4_ - fVar178 * 0.0;
    auVar70._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar177,auVar64._0_4_ + (float)local_c0 * fVar177
                 );
    auVar70._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar177;
    auVar70._12_4_ = auVar64._12_4_ + fVar177 * 0.0;
    auVar145 = NEON_ext(auVar48,auVar48,8,1);
    auVar167 = NEON_ext(auVar70,auVar70,8,1);
    param_5[1] = (ulong)auVar145._0_4_;
    *param_5 = auVar48._0_8_;
    param_6[1] = (ulong)auVar167._0_4_;
    *param_6 = auVar70._0_8_;
    *param_8 = CONCAT44(fVar107 - fVar120,fVar131 - fVar120);
  }
  else {
    iVar57 = -(*(byte *)(*(long *)(param_1 + 8) + 0x24) & 1);
    iVar87 = -(*(byte *)(*(long *)(param_2 + 8) + 0x24) & 1);
    bVar84 = (byte)((uint)iVar57 >> 8);
    bVar85 = (byte)((uint)iVar57 >> 0x10);
    bVar86 = (byte)((uint)iVar57 >> 0x18);
    fVar177 = (float)CONCAT13(bVar139 & ~bVar86,
                              CONCAT12(bVar138 & ~bVar85,
                                       CONCAT11(bVar137 & ~bVar84,bVar136 & ~(byte)iVar57)));
    bVar94 = (byte)((uint)iVar87 >> 8);
    bVar95 = (byte)((uint)iVar87 >> 0x10);
    bVar96 = (byte)((uint)iVar87 >> 0x18);
    fVar178 = (float)CONCAT13(bVar135 & ~bVar96,
                              CONCAT12(bVar134 & ~bVar95,
                                       CONCAT11(bVar133 & ~bVar94,bVar132 & ~(byte)iVar87)));
    auVar47._0_8_ =
         CONCAT44(auVar36._4_4_ - local_c0._4_4_ * fVar177,auVar36._0_4_ - (float)local_c0 * fVar177
                 );
    auVar47._8_4_ = auVar36._8_4_ - (float)uStack_b8 * fVar177;
    auVar47._12_4_ = auVar36._12_4_ - fVar177 * 0.0;
    auVar69._0_8_ =
         CONCAT44(auVar64._4_4_ + local_c0._4_4_ * fVar178,auVar64._0_4_ + (float)local_c0 * fVar178
                 );
    auVar69._8_4_ = auVar64._8_4_ + (float)uStack_b8 * fVar178;
    auVar69._12_4_ = auVar64._12_4_ + fVar178 * 0.0;
    auVar145 = NEON_ext(auVar47,auVar47,8,1);
    auVar167 = NEON_ext(auVar69,auVar69,8,1);
    param_5[1] = (ulong)auVar145._0_4_;
    *param_5 = auVar47._0_8_;
    param_6[1] = (ulong)auVar167._0_4_;
    *param_6 = auVar69._0_8_;
    *param_8 = CONCAT44(fVar107 - ((float)(CONCAT17(bVar139 & ~bVar86,
                                                    CONCAT16(bVar138 & ~bVar85,
                                                             CONCAT15(bVar137 & ~bVar84,
                                                                      CONCAT14(bVar136 & ~(byte)
                                                  iVar57,fVar177)))) >> 0x20) +
                                  (float)(CONCAT17(bVar135 & ~bVar96,
                                                   CONCAT16(bVar134 & ~bVar95,
                                                            CONCAT15(bVar133 & ~bVar94,
                                                                     CONCAT14(bVar132 & ~(byte)
                                                  iVar87,fVar178)))) >> 0x20)),
                        fVar131 - (fVar177 + fVar178));
    if (fVar131 <= fVar120 + (float)uVar29) {
      return 2;
    }
  }
  return 4;
}


