/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026dc40; name: FUN_0026dc40
 */


undefined8 FUN_0026dc40(long param_1,float *param_2,float param_3,uint param_4,float *param_5)

{
  float *pfVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [12];
  bool bVar49;
  long lVar50;
  int iVar51;
  byte bVar52;
  undefined1 *puVar53;
  ulong uVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  ulong uVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  float fVar72;
  float fVar74;
  undefined8 uVar73;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [12];
  float fVar88;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar92;
  ulong uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar93;
  float fVar94;
  float fVar96;
  undefined8 uVar95;
  float fVar97;
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  undefined1 uVar117;
  undefined1 uVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 auVar127 [16];
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  undefined1 uVar134;
  undefined1 uVar135;
  undefined1 uVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  ulong local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  
  fVar100 = *param_2;
  fVar101 = param_2[1];
  local_70 = *(undefined8 *)param_2;
  fVar102 = param_2[2];
  auVar48 = *(undefined1 (*) [12])(param_2 + 3);
  fVar94 = auVar48._0_4_;
  fVar104 = fVar94 - fVar100;
  fVar92 = auVar48._4_4_;
  fVar105 = fVar92 - fVar101;
  fVar103 = auVar48._8_4_;
  fVar106 = fVar103 - fVar102;
  uVar95 = *(undefined8 *)(param_2 + 6);
  auVar138._4_4_ = fVar105;
  auVar138._0_4_ = fVar104;
  auVar138._8_4_ = fVar106;
  auVar138._12_4_ = 0;
  auVar11._4_4_ = fVar105;
  auVar11._0_4_ = fVar104;
  auVar11._8_4_ = fVar106;
  auVar11._12_4_ = 0;
  auVar67 = NEON_ext(auVar138,auVar11,8,1);
  fVar97 = param_2[8];
  fVar93 = (float)uVar95;
  auVar81._0_4_ = fVar93 - fVar100;
  fVar96 = (float)((ulong)uVar95 >> 0x20);
  auVar81._4_4_ = fVar96 - fVar101;
  auVar81._8_4_ = fVar97 - fVar102;
  auVar81._12_4_ = 0;
  auVar98 = NEON_ext(auVar81,auVar81,8,1);
  fVar71 = fVar104 * auVar81._4_4_ - fVar105 * auVar81._0_4_;
  auVar83._0_8_ =
       NEON_ext(CONCAT44(fVar105 * auVar81._8_4_ - fVar106 * auVar81._4_4_,fVar71),
                CONCAT44(auVar67._4_4_ * auVar81._4_4_ - fVar105 * auVar98._4_4_,
                         auVar67._0_4_ * auVar81._0_4_ - fVar104 * auVar98._0_4_),4,1);
  fVar79 = (float)auVar83._0_8_;
  auVar68._0_4_ = fVar79 * fVar79;
  fVar88 = (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar68._4_4_ = fVar88 * fVar88;
  auVar68._8_4_ = fVar71 * fVar71;
  auVar68._12_4_ = 0;
  auVar67 = NEON_ext(auVar68,auVar68,8,1);
  fVar60 = auVar67._0_4_ + auVar67._4_4_;
  fVar55 = auVar68._0_4_ + auVar68._4_4_ + fVar60;
  fVar60 = auVar68._0_4_ + auVar68._4_4_ + fVar60;
  uVar54 = CONCAT44(fVar60,fVar55);
  auVar83._0_8_ = NEON_frsqrte(uVar54,4);
  fVar72 = (float)auVar83._0_8_;
  fVar74 = (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar72 * fVar72),uVar54,4);
  fVar72 = fVar72 * (float)auVar83._0_8_;
  fVar74 = fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar72 * fVar72),uVar54,4);
  fVar72 = fVar72 * (float)auVar83._0_8_;
  fVar74 = fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar72 * fVar72),uVar54,4);
  fVar72 = fVar72 * (float)auVar83._0_8_;
  fVar74 = fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar74 * fVar74,fVar72 * fVar72),uVar54,4);
  uVar66 = CONCAT44(fVar60 * fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20),
                    fVar55 * fVar72 * (float)auVar83._0_8_);
  uVar66 = uVar66 ^ (uVar66 ^ uVar54) & CONCAT44(-(uint)(fVar55 == 0.0),-(uint)(fVar55 == 0.0));
  uVar73 = NEON_frecpe(uVar66,4);
  auVar83._0_8_ = NEON_frecps(uVar66,uVar73,4);
  fVar55 = (float)uVar73 * (float)auVar83._0_8_;
  fVar60 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frecps(uVar66,CONCAT44(fVar60,fVar55),4);
  fVar55 = fVar55 * (float)auVar83._0_8_;
  fVar60 = fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frecps(uVar66,CONCAT44(fVar60,fVar55),4);
  fVar55 = fVar55 * (float)auVar83._0_8_;
  fVar60 = fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20);
  auVar83._0_8_ = NEON_frecps(uVar66,CONCAT44(fVar60,fVar55),4);
  fVar55 = fVar55 * (float)auVar83._0_8_;
  auVar83._0_8_ =
       NEON_frecps(uVar66,CONCAT44(fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20),fVar55),4);
  fVar55 = fVar55 * (float)auVar83._0_8_;
  fVar60 = fVar79 * fVar55;
  fVar72 = fVar88 * fVar55;
  auVar80._4_4_ = fVar72;
  auVar80._0_4_ = fVar60;
  fVar55 = fVar71 * fVar55;
  fVar74 = fVar100 * fVar60;
  fVar76 = fVar101 * fVar72;
  auVar67._4_4_ = fVar76;
  auVar67._0_4_ = fVar74;
  auVar67._8_4_ = fVar102 * fVar55;
  auVar67._12_4_ = 0;
  auVar98._4_4_ = fVar76;
  auVar98._0_4_ = fVar74;
  auVar98._8_4_ = fVar102 * fVar55;
  auVar98._12_4_ = 0;
  auVar67 = NEON_ext(auVar67,auVar98,8,1);
  fVar78 = (float)*(undefined8 *)(param_1 + 0xeb8);
  fVar65 = (float)((ulong)*(undefined8 *)(param_1 + 0xeb8) >> 0x20);
  fVar75 = (float)*(undefined8 *)(param_1 + 0xeb0);
  fVar77 = (float)((ulong)*(undefined8 *)(param_1 + 0xeb0) >> 0x20);
  fVar109 = fVar75 * fVar60;
  fVar111 = fVar77 * fVar72;
  auVar12._4_4_ = fVar111;
  auVar12._0_4_ = fVar109;
  auVar12._8_4_ = fVar78 * fVar55;
  auVar12._12_4_ = fVar65 * 0.0;
  auVar13._4_4_ = fVar111;
  auVar13._0_4_ = fVar109;
  auVar13._8_4_ = fVar78 * fVar55;
  auVar13._12_4_ = fVar65 * 0.0;
  auVar98 = NEON_ext(auVar12,auVar13,8,1);
  if ((fVar109 + fVar111 + auVar98._0_4_ + auVar98._4_4_) -
      (fVar74 + fVar76 + auVar67._0_4_ + auVar67._4_4_) < 0.0) {
    return 0;
  }
  fVar110 = fVar75 - fVar100;
  fVar112 = fVar77 - fVar101;
  fVar113 = fVar78 - fVar102;
  fVar114 = fVar65 - 0.0;
  auVar107._0_4_ = fVar104 * fVar110;
  auVar107._4_4_ = fVar105 * fVar112;
  auVar107._8_4_ = fVar106 * fVar113;
  auVar107._12_4_ = fVar114 * 0.0;
  auVar67 = NEON_ext(auVar107,auVar107,8,1);
  fVar109 = auVar67._0_4_ + auVar67._4_4_;
  fVar74 = auVar107._0_4_ + auVar107._4_4_ + fVar109;
  auVar108._0_4_ = auVar81._0_4_ * fVar110;
  auVar108._4_4_ = auVar81._4_4_ * fVar112;
  auVar108._8_4_ = auVar81._8_4_ * fVar113;
  auVar108._12_4_ = fVar114 * 0.0;
  auVar67 = NEON_ext(auVar108,auVar108,8,1);
  fVar111 = auVar67._0_4_ + auVar67._4_4_;
  fVar76 = auVar108._0_4_ + auVar108._4_4_ + fVar111;
  bVar49 = fVar74 < 0.0 && fVar76 < 0.0;
  iVar51 = -(uint)bVar49;
  iVar30 = -(uint)bVar49;
  uVar115 = (undefined1)iVar30;
  uVar116 = (undefined1)((uint)iVar30 >> 8);
  uVar117 = (undefined1)((uint)iVar30 >> 0x10);
  uVar118 = (undefined1)((uint)iVar30 >> 0x18);
  iVar30 = -(uint)bVar49;
  uVar119 = (undefined1)iVar30;
  uVar120 = (undefined1)((uint)iVar30 >> 8);
  uVar121 = (undefined1)((uint)iVar30 >> 0x10);
  uVar122 = (undefined1)((uint)iVar30 >> 0x18);
  iVar30 = -(uint)bVar49;
  uVar123 = (undefined1)iVar30;
  uVar124 = (undefined1)((uint)iVar30 >> 8);
  uVar125 = (undefined1)((uint)iVar30 >> 0x10);
  uVar126 = (undefined1)((uint)iVar30 >> 0x18);
  auVar16[4] = uVar115;
  auVar16._0_4_ = iVar51;
  auVar16[5] = uVar116;
  auVar16[6] = uVar117;
  auVar16[7] = uVar118;
  auVar16[8] = uVar119;
  auVar16[9] = uVar120;
  auVar16[10] = uVar121;
  auVar16[0xb] = uVar122;
  auVar16[0xc] = uVar123;
  auVar16[0xd] = uVar124;
  auVar16[0xe] = uVar125;
  auVar16[0xf] = uVar126;
  auVar17[4] = uVar115;
  auVar17._0_4_ = iVar51;
  auVar17[5] = uVar116;
  auVar17[6] = uVar117;
  auVar17[7] = uVar118;
  auVar17[8] = uVar119;
  auVar17[9] = uVar120;
  auVar17[10] = uVar121;
  auVar17[0xb] = uVar122;
  auVar17[0xc] = uVar123;
  auVar17[0xd] = uVar124;
  auVar17[0xe] = uVar125;
  auVar17[0xf] = uVar126;
  NEON_ext(auVar16,auVar17,8,1);
  if (CONCAT13(uVar123,CONCAT12(uVar119,CONCAT11(uVar115,(char)iVar51))) == -1) {
    bVar52 = (byte)(param_4 >> 5) & 1;
    if ((param_4 & 8) != 0) {
      bVar52 = 1;
    }
    auVar84._0_4_ = fVar110 * fVar110;
    auVar84._4_4_ = fVar112 * fVar112;
    auVar84._8_4_ = fVar113 * fVar113;
    auVar84._12_4_ = fVar114 * fVar114;
LAB_0026e210:
    uStack_68 = (ulong)(uint)fVar102;
    auVar83._0_8_ = auVar84._0_8_;
    fVar76 = 0.0;
    bVar49 = false;
    auVar67 = NEON_ext(auVar84,auVar84,8,1);
    uVar95 = auVar67._0_8_;
LAB_0026e214:
    fVar71 = (float)auVar83._0_8_ + (float)((ulong)auVar83._0_8_ >> 0x20);
    fVar74 = (float)uVar95 + (float)((ulong)uVar95 >> 0x20);
    fVar94 = fVar100;
    fVar92 = fVar101;
    fVar103 = fVar102;
  }
  else {
    fVar40 = fVar75 - fVar94;
    fVar41 = fVar77 - fVar92;
    uVar128 = (undefined1)((uint)fVar41 >> 8);
    uVar129 = (undefined1)((uint)fVar41 >> 0x10);
    uVar130 = (undefined1)((uint)fVar41 >> 0x18);
    fVar42 = fVar78 - fVar103;
    uVar131 = (undefined1)((uint)fVar42 >> 8);
    uVar132 = (undefined1)((uint)fVar42 >> 0x10);
    uVar133 = (undefined1)((uint)fVar42 >> 0x18);
    fVar43 = fVar65 - 0.0;
    uVar134 = (undefined1)((uint)fVar43 >> 8);
    uVar135 = (undefined1)((uint)fVar43 >> 0x10);
    uVar136 = (undefined1)((uint)fVar43 >> 0x18);
    fVar28 = fVar104 * fVar40;
    fVar31 = fVar105 * fVar41;
    uVar115 = (undefined1)((uint)fVar31 >> 8);
    uVar116 = (undefined1)((uint)fVar31 >> 0x10);
    uVar117 = (undefined1)((uint)fVar31 >> 0x18);
    fVar57 = fVar106 * fVar42;
    uVar118 = (undefined1)((uint)fVar57 >> 8);
    uVar119 = (undefined1)((uint)fVar57 >> 0x10);
    uVar120 = (undefined1)((uint)fVar57 >> 0x18);
    fVar62 = fVar43 * 0.0;
    uVar121 = (undefined1)((uint)fVar62 >> 8);
    uVar122 = (undefined1)((uint)fVar62 >> 0x10);
    uVar123 = (undefined1)((uint)fVar62 >> 0x18);
    auVar18[4] = SUB41(fVar31,0);
    auVar18._0_4_ = fVar28;
    auVar18[5] = uVar115;
    auVar18[6] = uVar116;
    auVar18[7] = uVar117;
    auVar18[8] = SUB41(fVar57,0);
    auVar18[9] = uVar118;
    auVar18[10] = uVar119;
    auVar18[0xb] = uVar120;
    auVar18[0xc] = SUB41(fVar62,0);
    auVar18[0xd] = uVar121;
    auVar18[0xe] = uVar122;
    auVar18[0xf] = uVar123;
    auVar19[4] = SUB41(fVar31,0);
    auVar19._0_4_ = fVar28;
    auVar19[5] = uVar115;
    auVar19[6] = uVar116;
    auVar19[7] = uVar117;
    auVar19[8] = SUB41(fVar57,0);
    auVar19[9] = uVar118;
    auVar19[10] = uVar119;
    auVar19[0xb] = uVar120;
    auVar19[0xc] = SUB41(fVar62,0);
    auVar19[0xd] = uVar121;
    auVar19[0xe] = uVar122;
    auVar19[0xf] = uVar123;
    auVar67 = NEON_ext(auVar18,auVar19,8,1);
    fVar61 = auVar67._0_4_ + auVar67._4_4_;
    fVar56 = fVar28 + fVar31 + fVar61;
    fVar61 = fVar28 + fVar31 + fVar61;
    fVar28 = auVar81._0_4_ * fVar40;
    fVar31 = auVar81._4_4_ * fVar41;
    uVar115 = (undefined1)((uint)fVar31 >> 8);
    uVar116 = (undefined1)((uint)fVar31 >> 0x10);
    uVar117 = (undefined1)((uint)fVar31 >> 0x18);
    fVar57 = auVar81._8_4_ * fVar42;
    uVar118 = (undefined1)((uint)fVar57 >> 8);
    uVar119 = (undefined1)((uint)fVar57 >> 0x10);
    uVar120 = (undefined1)((uint)fVar57 >> 0x18);
    fVar62 = fVar43 * 0.0;
    uVar121 = (undefined1)((uint)fVar62 >> 8);
    uVar122 = (undefined1)((uint)fVar62 >> 0x10);
    uVar123 = (undefined1)((uint)fVar62 >> 0x18);
    auVar20[4] = SUB41(fVar31,0);
    auVar20._0_4_ = fVar28;
    auVar20[5] = uVar115;
    auVar20[6] = uVar116;
    auVar20[7] = uVar117;
    auVar20[8] = SUB41(fVar57,0);
    auVar20[9] = uVar118;
    auVar20[10] = uVar119;
    auVar20[0xb] = uVar120;
    auVar20[0xc] = SUB41(fVar62,0);
    auVar20[0xd] = uVar121;
    auVar20[0xe] = uVar122;
    auVar20[0xf] = uVar123;
    auVar21[4] = SUB41(fVar31,0);
    auVar21._0_4_ = fVar28;
    auVar21[5] = uVar115;
    auVar21[6] = uVar116;
    auVar21[7] = uVar117;
    auVar21[8] = SUB41(fVar57,0);
    auVar21[9] = uVar118;
    auVar21[10] = uVar119;
    auVar21[0xb] = uVar120;
    auVar21[0xc] = SUB41(fVar62,0);
    auVar21[0xd] = uVar121;
    auVar21[0xe] = uVar122;
    auVar21[0xf] = uVar123;
    auVar67 = NEON_ext(auVar20,auVar21,8,1);
    fVar62 = auVar67._0_4_ + auVar67._4_4_;
    fVar57 = fVar28 + fVar31 + fVar62;
    bVar49 = 0.0 <= fVar56 && fVar57 <= fVar56;
    iVar51 = -(uint)bVar49;
    iVar30 = -(uint)bVar49;
    uVar115 = (undefined1)iVar30;
    uVar116 = (undefined1)((uint)iVar30 >> 8);
    uVar117 = (undefined1)((uint)iVar30 >> 0x10);
    uVar118 = (undefined1)((uint)iVar30 >> 0x18);
    iVar30 = -(uint)bVar49;
    uVar119 = (undefined1)iVar30;
    uVar120 = (undefined1)((uint)iVar30 >> 8);
    uVar121 = (undefined1)((uint)iVar30 >> 0x10);
    uVar122 = (undefined1)((uint)iVar30 >> 0x18);
    iVar30 = -(uint)bVar49;
    uVar123 = (undefined1)iVar30;
    uVar124 = (undefined1)((uint)iVar30 >> 8);
    uVar125 = (undefined1)((uint)iVar30 >> 0x10);
    uVar126 = (undefined1)((uint)iVar30 >> 0x18);
    auVar22[4] = uVar115;
    auVar22._0_4_ = iVar51;
    auVar22[5] = uVar116;
    auVar22[6] = uVar117;
    auVar22[7] = uVar118;
    auVar22[8] = uVar119;
    auVar22[9] = uVar120;
    auVar22[10] = uVar121;
    auVar22[0xb] = uVar122;
    auVar22[0xc] = uVar123;
    auVar22[0xd] = uVar124;
    auVar22[0xe] = uVar125;
    auVar22[0xf] = uVar126;
    auVar23[4] = uVar115;
    auVar23._0_4_ = iVar51;
    auVar23[5] = uVar116;
    auVar23[6] = uVar117;
    auVar23[7] = uVar118;
    auVar23[8] = uVar119;
    auVar23[9] = uVar120;
    auVar23[10] = uVar121;
    auVar23[0xb] = uVar122;
    auVar23[0xc] = uVar123;
    auVar23[0xd] = uVar124;
    auVar23[0xe] = uVar125;
    auVar23[0xf] = uVar126;
    NEON_ext(auVar22,auVar23,8,1);
    if (CONCAT13(uVar123,CONCAT12(uVar119,CONCAT11(uVar115,(char)iVar51))) == -1) {
      auVar85._0_4_ = fVar40 * fVar40;
      auVar85._4_4_ = fVar41 * fVar41;
      auVar85._8_4_ = fVar42 * fVar42;
      auVar85._12_4_ = fVar43 * fVar43;
      local_70 = auVar48._0_8_;
      auVar67 = NEON_ext(auVar85,auVar85,8,1);
      fVar71 = auVar85._0_4_ + auVar85._4_4_;
      fVar74 = auVar67._0_4_ + auVar67._4_4_;
      bVar52 = (byte)(param_4 >> 4);
      param_4 = param_4 & 8;
    }
    else {
      auVar127._0_4_ = fVar75 - fVar93;
      auVar127._4_4_ = fVar77 - fVar96;
      auVar127._8_4_ = fVar78 - fVar97;
      auVar127._12_4_ = fVar65 - 0.0;
      fVar29 = fVar104 * auVar127._0_4_;
      fVar32 = fVar105 * auVar127._4_4_;
      uVar115 = (undefined1)((uint)fVar32 >> 8);
      uVar116 = (undefined1)((uint)fVar32 >> 0x10);
      uVar117 = (undefined1)((uint)fVar32 >> 0x18);
      fVar99 = fVar106 * auVar127._8_4_;
      uVar118 = (undefined1)((uint)fVar99 >> 8);
      uVar119 = (undefined1)((uint)fVar99 >> 0x10);
      uVar120 = (undefined1)((uint)fVar99 >> 0x18);
      fVar33 = auVar127._12_4_ * 0.0;
      uVar121 = (undefined1)((uint)fVar33 >> 8);
      uVar122 = (undefined1)((uint)fVar33 >> 0x10);
      uVar123 = (undefined1)((uint)fVar33 >> 0x18);
      auVar24[4] = SUB41(fVar32,0);
      auVar24._0_4_ = fVar29;
      auVar24[5] = uVar115;
      auVar24[6] = uVar116;
      auVar24[7] = uVar117;
      auVar24[8] = SUB41(fVar99,0);
      auVar24[9] = uVar118;
      auVar24[10] = uVar119;
      auVar24[0xb] = uVar120;
      auVar24[0xc] = SUB41(fVar33,0);
      auVar24[0xd] = uVar121;
      auVar24[0xe] = uVar122;
      auVar24[0xf] = uVar123;
      auVar25[4] = SUB41(fVar32,0);
      auVar25._0_4_ = fVar29;
      auVar25[5] = uVar115;
      auVar25[6] = uVar116;
      auVar25[7] = uVar117;
      auVar25[8] = SUB41(fVar99,0);
      auVar25[9] = uVar118;
      auVar25[10] = uVar119;
      auVar25[0xb] = uVar120;
      auVar25[0xc] = SUB41(fVar33,0);
      auVar25[0xd] = uVar121;
      auVar25[0xe] = uVar122;
      auVar25[0xf] = uVar123;
      auVar67 = NEON_ext(auVar24,auVar25,8,1);
      fVar63 = auVar67._0_4_ + auVar67._4_4_;
      fVar58 = fVar29 + fVar32 + fVar63;
      fVar99 = auVar81._0_4_ * auVar127._0_4_;
      fVar33 = auVar81._4_4_ * auVar127._4_4_;
      uVar115 = (undefined1)((uint)fVar33 >> 8);
      uVar116 = (undefined1)((uint)fVar33 >> 0x10);
      uVar117 = (undefined1)((uint)fVar33 >> 0x18);
      fVar59 = auVar81._8_4_ * auVar127._8_4_;
      uVar118 = (undefined1)((uint)fVar59 >> 8);
      uVar119 = (undefined1)((uint)fVar59 >> 0x10);
      uVar120 = (undefined1)((uint)fVar59 >> 0x18);
      fVar64 = auVar127._12_4_ * 0.0;
      uVar121 = (undefined1)((uint)fVar64 >> 8);
      uVar122 = (undefined1)((uint)fVar64 >> 0x10);
      uVar123 = (undefined1)((uint)fVar64 >> 0x18);
      auVar26[4] = SUB41(fVar33,0);
      auVar26._0_4_ = fVar99;
      auVar26[5] = uVar115;
      auVar26[6] = uVar116;
      auVar26[7] = uVar117;
      auVar26[8] = SUB41(fVar59,0);
      auVar26[9] = uVar118;
      auVar26[10] = uVar119;
      auVar26[0xb] = uVar120;
      auVar26[0xc] = SUB41(fVar64,0);
      auVar26[0xd] = uVar121;
      auVar26[0xe] = uVar122;
      auVar26[0xf] = uVar123;
      auVar27[4] = SUB41(fVar33,0);
      auVar27._0_4_ = fVar99;
      auVar27[5] = uVar115;
      auVar27[6] = uVar116;
      auVar27[7] = uVar117;
      auVar27[8] = SUB41(fVar59,0);
      auVar27[9] = uVar118;
      auVar27[10] = uVar119;
      auVar27[0xb] = uVar120;
      auVar27[0xc] = SUB41(fVar64,0);
      auVar27[0xd] = uVar121;
      auVar27[0xe] = uVar122;
      auVar27[0xf] = uVar123;
      auVar67 = NEON_ext(auVar26,auVar27,8,1);
      fVar64 = auVar67._0_4_ + auVar67._4_4_;
      fVar59 = fVar99 + fVar33 + fVar64;
      fVar64 = fVar99 + fVar33 + fVar64;
      bVar49 = 0.0 <= fVar59 && fVar58 <= fVar59;
      auVar137._0_4_ = -(uint)bVar49;
      auVar137._4_4_ = -(uint)bVar49;
      auVar137._8_4_ = -(uint)bVar49;
      auVar137._12_4_ = -(uint)bVar49;
      NEON_ext(auVar137,auVar137,8,1);
      if (CONCAT13((char)auVar137._12_4_,
                   CONCAT12((char)auVar137._8_4_,CONCAT11((char)auVar137._4_4_,(char)auVar137._0_4_)
                           )) != -1) {
        auVar34[4] = SUB41(fVar41,0);
        auVar34._0_4_ = fVar40;
        auVar34[5] = uVar128;
        auVar34[6] = uVar129;
        auVar34[7] = uVar130;
        auVar34[8] = SUB41(fVar42,0);
        auVar34[9] = uVar131;
        auVar34[10] = uVar132;
        auVar34[0xb] = uVar133;
        auVar34[0xc] = SUB41(fVar43,0);
        auVar34[0xd] = uVar134;
        auVar34[0xe] = uVar135;
        auVar34[0xf] = uVar136;
        auVar35[4] = SUB41(fVar41,0);
        auVar35._0_4_ = fVar40;
        auVar35[5] = uVar128;
        auVar35[6] = uVar129;
        auVar35[7] = uVar130;
        auVar35[8] = SUB41(fVar42,0);
        auVar35[9] = uVar131;
        auVar35[10] = uVar132;
        auVar35[0xb] = uVar133;
        auVar35[0xc] = SUB41(fVar43,0);
        auVar35[0xd] = uVar134;
        auVar35[0xe] = uVar135;
        auVar35[0xf] = uVar136;
        auVar138 = NEON_ext(auVar34,auVar35,8,1);
        auVar14._4_4_ = fVar112;
        auVar14._0_4_ = fVar110;
        auVar14._8_4_ = fVar113;
        auVar14._12_4_ = fVar114;
        auVar15._4_4_ = fVar112;
        auVar15._0_4_ = fVar110;
        auVar15._8_4_ = fVar113;
        auVar15._12_4_ = fVar114;
        auVar98 = NEON_ext(auVar14,auVar15,8,1);
        fVar114 = auVar98._4_4_ * fVar41 - fVar112 * auVar138._4_4_;
        fVar99 = fVar110 * fVar41 - fVar112 * fVar40;
        auVar83._0_8_ =
             NEON_ext(CONCAT44(fVar112 * fVar42 - fVar113 * fVar41,fVar99),
                      CONCAT17((char)((uint)fVar114 >> 0x18),
                               CONCAT16((char)((uint)fVar114 >> 0x10),
                                        CONCAT15((char)((uint)fVar114 >> 8),
                                                 CONCAT14(SUB41(fVar114,0),
                                                          auVar98._0_4_ * fVar40 -
                                                          fVar110 * auVar138._0_4_)))),4,1);
        fVar114 = fVar79 * (float)auVar83._0_8_;
        fVar43 = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
        uVar115 = (undefined1)((uint)fVar43 >> 8);
        uVar116 = (undefined1)((uint)fVar43 >> 0x10);
        uVar117 = (undefined1)((uint)fVar43 >> 0x18);
        fVar99 = fVar71 * fVar99;
        uVar118 = (undefined1)((uint)fVar99 >> 8);
        uVar119 = (undefined1)((uint)fVar99 >> 0x10);
        uVar120 = (undefined1)((uint)fVar99 >> 0x18);
        auVar44[4] = SUB41(fVar43,0);
        auVar44._0_4_ = fVar114;
        auVar44[5] = uVar115;
        auVar44[6] = uVar116;
        auVar44[7] = uVar117;
        auVar44[8] = SUB41(fVar99,0);
        auVar44[9] = uVar118;
        auVar44[10] = uVar119;
        auVar44[0xb] = uVar120;
        auVar44._12_4_ = 0;
        auVar45[4] = SUB41(fVar43,0);
        auVar45._0_4_ = fVar114;
        auVar45[5] = uVar115;
        auVar45[6] = uVar116;
        auVar45[7] = uVar117;
        auVar45[8] = SUB41(fVar99,0);
        auVar45[9] = uVar118;
        auVar45[10] = uVar119;
        auVar45[0xb] = uVar120;
        auVar45._12_4_ = 0;
        auVar67 = NEON_ext(auVar44,auVar45,8,1);
        bVar49 = fVar114 + fVar43 + auVar67._0_4_ + auVar67._4_4_ < 0.0 &&
                 (fVar56 < 0.0 && 0.0 <= fVar74);
        iVar51 = -(uint)bVar49;
        iVar30 = -(uint)bVar49;
        uVar115 = (undefined1)iVar30;
        uVar116 = (undefined1)((uint)iVar30 >> 8);
        uVar117 = (undefined1)((uint)iVar30 >> 0x10);
        uVar118 = (undefined1)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)bVar49;
        uVar119 = (undefined1)iVar30;
        uVar120 = (undefined1)((uint)iVar30 >> 8);
        uVar121 = (undefined1)((uint)iVar30 >> 0x10);
        uVar122 = (undefined1)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)bVar49;
        uVar123 = (undefined1)iVar30;
        uVar124 = (undefined1)((uint)iVar30 >> 8);
        uVar125 = (undefined1)((uint)iVar30 >> 0x10);
        uVar126 = (undefined1)((uint)iVar30 >> 0x18);
        auVar46[4] = uVar115;
        auVar46._0_4_ = iVar51;
        auVar46[5] = uVar116;
        auVar46[6] = uVar117;
        auVar46[7] = uVar118;
        auVar46[8] = uVar119;
        auVar46[9] = uVar120;
        auVar46[10] = uVar121;
        auVar46[0xb] = uVar122;
        auVar46[0xc] = uVar123;
        auVar46[0xd] = uVar124;
        auVar46[0xe] = uVar125;
        auVar46[0xf] = uVar126;
        auVar47[4] = uVar115;
        auVar47._0_4_ = iVar51;
        auVar47[5] = uVar116;
        auVar47[6] = uVar117;
        auVar47[7] = uVar118;
        auVar47[8] = uVar119;
        auVar47[9] = uVar120;
        auVar47[10] = uVar121;
        auVar47[0xb] = uVar122;
        auVar47[0xc] = uVar123;
        auVar47[0xd] = uVar124;
        auVar47[0xe] = uVar125;
        auVar47[0xf] = uVar126;
        NEON_ext(auVar46,auVar47,8,1);
        if (CONCAT13(uVar123,CONCAT12(uVar119,CONCAT11(uVar115,(char)iVar51))) == -1) {
          auVar83._0_8_ =
               CONCAT44((auVar107._0_4_ + auVar107._4_4_ + fVar109) - fVar61,fVar74 - fVar56);
          uVar95 = NEON_frecpe(auVar83._0_8_,4);
          uVar73 = NEON_frecps(auVar83._0_8_,uVar95,4);
          fVar94 = (float)uVar95 * (float)uVar73;
          fVar92 = (float)((ulong)uVar95 >> 0x20) * (float)((ulong)uVar73 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          fVar92 = fVar92 * (float)((ulong)uVar95 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          fVar92 = fVar92 * (float)((ulong)uVar95 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          auVar83._0_8_ =
               NEON_frecps(auVar83._0_8_,CONCAT44(fVar92 * (float)((ulong)uVar95 >> 0x20),fVar94),4)
          ;
          fVar74 = fVar74 * fVar94 * (float)auVar83._0_8_;
          fVar100 = fVar100 + fVar104 * fVar74;
          fVar101 = fVar101 + fVar105 * fVar74;
          fVar102 = fVar102 + fVar106 * fVar74;
          fVar94 = fVar74 * 0.0 + 0.0;
          auVar9._4_4_ = fVar101;
          auVar9._0_4_ = fVar100;
          auVar9._8_4_ = fVar102;
          auVar9._12_4_ = fVar94;
          auVar10._4_4_ = fVar101;
          auVar10._0_4_ = fVar100;
          auVar10._8_4_ = fVar102;
          auVar10._12_4_ = fVar94;
          auVar67 = NEON_ext(auVar9,auVar10,8,1);
          fVar102 = auVar67._0_4_;
          bVar52 = (byte)(param_4 >> 3) & 1;
LAB_0026e204:
          local_70 = CONCAT44(fVar101,fVar100);
          auVar84._0_4_ = (fVar75 - fVar100) * (fVar75 - fVar100);
          auVar84._4_4_ = (fVar77 - fVar101) * (fVar77 - fVar101);
          auVar84._8_4_ = (fVar78 - fVar102) * (fVar78 - fVar102);
          auVar84._12_4_ = (fVar65 - 0.0) * (fVar65 - 0.0);
          goto LAB_0026e210;
        }
        auVar67 = NEON_ext(auVar127,auVar127,8,1);
        fVar74 = auVar138._4_4_ * auVar127._4_4_ - fVar41 * auVar67._4_4_;
        fVar105 = fVar40 * auVar127._4_4_ - fVar41 * auVar127._0_4_;
        auVar83._0_8_ =
             NEON_ext(CONCAT44(fVar41 * auVar127._8_4_ - fVar42 * auVar127._4_4_,fVar105),
                      CONCAT17((char)((uint)fVar74 >> 0x18),
                               CONCAT16((char)((uint)fVar74 >> 0x10),
                                        CONCAT15((char)((uint)fVar74 >> 8),
                                                 CONCAT14(SUB41(fVar74,0),
                                                          auVar138._0_4_ * auVar127._0_4_ -
                                                          fVar40 * auVar67._0_4_)))),4,1);
        fVar74 = fVar79 * (float)auVar83._0_8_;
        fVar104 = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
        uVar115 = (undefined1)((uint)fVar104 >> 8);
        uVar116 = (undefined1)((uint)fVar104 >> 0x10);
        uVar117 = (undefined1)((uint)fVar104 >> 0x18);
        fVar105 = fVar71 * fVar105;
        uVar118 = (undefined1)((uint)fVar105 >> 8);
        uVar119 = (undefined1)((uint)fVar105 >> 0x10);
        uVar120 = (undefined1)((uint)fVar105 >> 0x18);
        auVar36[4] = SUB41(fVar104,0);
        auVar36._0_4_ = fVar74;
        auVar36[5] = uVar115;
        auVar36[6] = uVar116;
        auVar36[7] = uVar117;
        auVar36[8] = SUB41(fVar105,0);
        auVar36[9] = uVar118;
        auVar36[10] = uVar119;
        auVar36[0xb] = uVar120;
        auVar36._12_4_ = 0;
        auVar37[4] = SUB41(fVar104,0);
        auVar37._0_4_ = fVar74;
        auVar37[5] = uVar115;
        auVar37[6] = uVar116;
        auVar37[7] = uVar117;
        auVar37[8] = SUB41(fVar105,0);
        auVar37[9] = uVar118;
        auVar37[10] = uVar119;
        auVar37[0xb] = uVar120;
        auVar37._12_4_ = 0;
        auVar138 = NEON_ext(auVar36,auVar37,8,1);
        bVar49 = fVar74 + fVar104 + auVar138._0_4_ + auVar138._4_4_ < 0.0 &&
                 (fVar59 <= fVar58 && fVar56 <= fVar57);
        iVar51 = -(uint)bVar49;
        iVar30 = -(uint)bVar49;
        uVar115 = (undefined1)iVar30;
        uVar116 = (undefined1)((uint)iVar30 >> 8);
        uVar117 = (undefined1)((uint)iVar30 >> 0x10);
        uVar118 = (undefined1)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)bVar49;
        uVar119 = (undefined1)iVar30;
        uVar120 = (undefined1)((uint)iVar30 >> 8);
        uVar121 = (undefined1)((uint)iVar30 >> 0x10);
        uVar122 = (undefined1)((uint)iVar30 >> 0x18);
        iVar30 = -(uint)bVar49;
        uVar123 = (undefined1)iVar30;
        uVar124 = (undefined1)((uint)iVar30 >> 8);
        uVar125 = (undefined1)((uint)iVar30 >> 0x10);
        uVar126 = (undefined1)((uint)iVar30 >> 0x18);
        auVar38[4] = uVar115;
        auVar38._0_4_ = iVar51;
        auVar38[5] = uVar116;
        auVar38[6] = uVar117;
        auVar38[7] = uVar118;
        auVar38[8] = uVar119;
        auVar38[9] = uVar120;
        auVar38[10] = uVar121;
        auVar38[0xb] = uVar122;
        auVar38[0xc] = uVar123;
        auVar38[0xd] = uVar124;
        auVar38[0xe] = uVar125;
        auVar38[0xf] = uVar126;
        auVar39[4] = uVar115;
        auVar39._0_4_ = iVar51;
        auVar39[5] = uVar116;
        auVar39[6] = uVar117;
        auVar39[7] = uVar118;
        auVar39[8] = uVar119;
        auVar39[9] = uVar120;
        auVar39[10] = uVar121;
        auVar39[0xb] = uVar122;
        auVar39[0xc] = uVar123;
        auVar39[0xd] = uVar124;
        auVar39[0xe] = uVar125;
        auVar39[0xf] = uVar126;
        NEON_ext(auVar38,auVar39,8,1);
        if (CONCAT13(uVar123,CONCAT12(uVar119,CONCAT11(uVar115,(char)iVar51))) == -1) {
          uVar95 = CONCAT44(((fVar28 + fVar31 + fVar62) - fVar61) +
                            ((fVar29 + fVar32 + fVar63) - fVar64),
                            (fVar57 - fVar56) + (fVar58 - fVar59));
          uVar73 = NEON_frecpe(uVar95,4);
          auVar83._0_8_ = NEON_frecps(uVar95,uVar73,4);
          fVar71 = (float)uVar73 * (float)auVar83._0_8_;
          fVar74 = (float)((ulong)uVar73 >> 0x20) * (float)((ulong)auVar83._0_8_ >> 0x20);
          auVar83._0_8_ = NEON_frecps(uVar95,CONCAT44(fVar74,fVar71),4);
          fVar71 = fVar71 * (float)auVar83._0_8_;
          fVar74 = fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20);
          auVar83._0_8_ = NEON_frecps(uVar95,CONCAT44(fVar74,fVar71),4);
          fVar71 = fVar71 * (float)auVar83._0_8_;
          fVar74 = fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20);
          auVar83._0_8_ = NEON_frecps(uVar95,CONCAT44(fVar74,fVar71),4);
          fVar71 = fVar71 * (float)auVar83._0_8_;
          auVar83._0_8_ =
               NEON_frecps(uVar95,CONCAT44(fVar74 * (float)((ulong)auVar83._0_8_ >> 0x20),fVar71),4)
          ;
          fVar71 = (fVar57 - fVar56) * fVar71 * (float)auVar83._0_8_;
          bVar52 = (byte)(param_4 >> 4) & 1;
          fVar100 = fVar94 + (fVar93 - fVar94) * fVar71;
          fVar101 = fVar92 + (fVar96 - fVar92) * fVar71;
          fVar103 = fVar103 + (fVar97 - fVar103) * fVar71;
          fVar94 = fVar71 * 0.0 + 0.0;
          auVar7._4_4_ = fVar101;
          auVar7._0_4_ = fVar100;
          auVar7._8_4_ = fVar103;
          auVar7._12_4_ = fVar94;
          auVar8._4_4_ = fVar101;
          auVar8._0_4_ = fVar100;
          auVar8._8_4_ = fVar103;
          auVar8._12_4_ = fVar94;
          auVar67 = NEON_ext(auVar7,auVar8,8,1);
          fVar102 = auVar67._0_4_;
          goto LAB_0026e204;
        }
        fVar94 = auVar127._0_4_ * fVar112 - auVar127._4_4_ * fVar110;
        auVar83._0_8_ =
             NEON_ext(CONCAT44(auVar127._4_4_ * fVar113 - auVar127._8_4_ * fVar112,fVar94),
                      CONCAT44(auVar67._4_4_ * fVar112 - auVar127._4_4_ * auVar98._4_4_,
                               auVar67._0_4_ * fVar110 - auVar127._0_4_ * auVar98._0_4_),4,1);
        auVar90._0_4_ = fVar79 * (float)auVar83._0_8_;
        auVar90._4_4_ = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
        auVar90._8_4_ = fVar71 * fVar94;
        auVar90._12_4_ = 0;
        auVar67 = NEON_ext(auVar90,auVar90,8,1);
        bVar49 = auVar90._0_4_ + auVar90._4_4_ + auVar67._0_4_ + auVar67._4_4_ < 0.0 &&
                 (fVar59 < 0.0 && 0.0 <= fVar76);
        auVar91._0_4_ = -(uint)bVar49;
        auVar91._4_4_ = -(uint)bVar49;
        auVar91._8_4_ = -(uint)bVar49;
        auVar91._12_4_ = -(uint)bVar49;
        NEON_ext(auVar91,auVar91,8,1);
        if (CONCAT13((char)auVar91._12_4_,
                     CONCAT12((char)auVar91._8_4_,CONCAT11((char)auVar91._4_4_,(char)auVar91._0_4_))
                    ) == -1) {
          auVar83._0_8_ =
               CONCAT44((auVar108._0_4_ + auVar108._4_4_ + fVar111) - fVar64,fVar76 - fVar59);
          uVar95 = NEON_frecpe(auVar83._0_8_,4);
          uVar73 = NEON_frecps(auVar83._0_8_,uVar95,4);
          fVar94 = (float)uVar95 * (float)uVar73;
          fVar92 = (float)((ulong)uVar95 >> 0x20) * (float)((ulong)uVar73 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          fVar92 = fVar92 * (float)((ulong)uVar95 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          fVar92 = fVar92 * (float)((ulong)uVar95 >> 0x20);
          uVar95 = NEON_frecps(auVar83._0_8_,CONCAT44(fVar92,fVar94),4);
          fVar94 = fVar94 * (float)uVar95;
          auVar83._0_8_ =
               NEON_frecps(auVar83._0_8_,CONCAT44(fVar92 * (float)((ulong)uVar95 >> 0x20),fVar94),4)
          ;
          fVar76 = fVar76 * fVar94 * (float)auVar83._0_8_;
          fVar100 = fVar100 + auVar81._0_4_ * fVar76;
          fVar101 = fVar101 + auVar81._4_4_ * fVar76;
          fVar102 = fVar102 + auVar81._8_4_ * fVar76;
          fVar94 = fVar76 * 0.0 + 0.0;
          auVar5._4_4_ = fVar101;
          auVar5._0_4_ = fVar100;
          auVar5._8_4_ = fVar102;
          auVar5._12_4_ = fVar94;
          auVar6._4_4_ = fVar101;
          auVar6._0_4_ = fVar100;
          auVar6._8_4_ = fVar102;
          auVar6._12_4_ = fVar94;
          auVar67 = NEON_ext(auVar5,auVar6,8,1);
          fVar102 = auVar67._0_4_;
          bVar52 = (byte)(param_4 >> 5) & 1;
          goto LAB_0026e204;
        }
        bVar49 = true;
        auVar82._0_4_ = fVar79 * (fVar100 - fVar75);
        auVar82._4_4_ = fVar88 * (fVar101 - fVar77);
        auVar82._8_4_ = fVar71 * (fVar102 - fVar78);
        auVar82._12_4_ = (0.0 - fVar65) * 0.0;
        auVar67 = NEON_ext(auVar82,auVar82,8,1);
        auVar83._0_8_ = NEON_frecpe(uVar54,4);
        uVar95 = NEON_frecps(uVar54,auVar83._0_8_,4);
        fVar94 = (float)auVar83._0_8_ * (float)uVar95;
        fVar92 = (float)((ulong)auVar83._0_8_ >> 0x20) * (float)((ulong)uVar95 >> 0x20);
        auVar83._0_8_ = NEON_frecps(uVar54,CONCAT44(fVar92,fVar94),4);
        fVar94 = fVar94 * (float)auVar83._0_8_;
        fVar92 = fVar92 * (float)((ulong)auVar83._0_8_ >> 0x20);
        auVar83._0_8_ = NEON_frecps(uVar54,CONCAT44(fVar92,fVar94),4);
        fVar94 = fVar94 * (float)auVar83._0_8_;
        fVar92 = fVar92 * (float)((ulong)auVar83._0_8_ >> 0x20);
        auVar83._0_8_ = NEON_frecps(uVar54,CONCAT44(fVar92,fVar94),4);
        fVar94 = fVar94 * (float)auVar83._0_8_;
        auVar83._0_8_ =
             NEON_frecps(uVar54,CONCAT44(fVar92 * (float)((ulong)auVar83._0_8_ >> 0x20),fVar94),4);
        fVar94 = (auVar82._0_4_ + auVar82._4_4_ + auVar67._0_4_ + auVar67._4_4_) *
                 fVar94 * (float)auVar83._0_8_;
        bVar52 = 1;
        fVar79 = fVar79 * fVar94;
        fVar88 = fVar88 * fVar94;
        fVar71 = fVar71 * fVar94;
        fVar100 = fVar75 + fVar79;
        fVar101 = fVar77 + fVar88;
        fVar102 = fVar78 + fVar71;
        fVar76 = fVar65 + 0.0;
        auVar83._0_8_ = CONCAT44(fVar88 * fVar88,fVar79 * fVar79);
        auVar83._8_4_ = fVar71 * fVar71;
        auVar83._12_4_ = 0;
        auVar67 = NEON_ext(auVar83,auVar83,8,1);
        uVar95 = auVar67._0_8_;
        uStack_68 = CONCAT44(fVar76,fVar102);
        local_70 = CONCAT44(fVar101,fVar100);
        goto LAB_0026e214;
      }
      auVar86._0_4_ = auVar127._0_4_ * auVar127._0_4_;
      auVar86._4_4_ = auVar127._4_4_ * auVar127._4_4_;
      auVar86._8_4_ = auVar127._8_4_ * auVar127._8_4_;
      auVar86._12_4_ = auVar127._12_4_ * auVar127._12_4_;
      auVar67 = NEON_ext(auVar86,auVar86,8,1);
      fVar71 = auVar86._0_4_ + auVar86._4_4_;
      fVar74 = auVar67._0_4_ + auVar67._4_4_;
      bVar52 = (byte)(param_4 >> 5);
      param_4 = param_4 & 0x10;
      fVar94 = fVar93;
      fVar92 = fVar96;
      fVar103 = fVar97;
      local_70 = uVar95;
    }
    uStack_68 = (ulong)(uint)fVar103;
    bVar52 = bVar52 & 1;
    fVar76 = 0.0;
    bVar49 = false;
    if (param_4 != 0) {
      bVar52 = 1;
    }
  }
  fVar79 = fVar71 + fVar74;
  uVar54 = CONCAT44(fVar71 + fVar74,fVar79);
  if (fVar79 < (float)*(undefined8 *)(param_1 + 0xec8)) {
    auVar80._8_4_ = fVar55;
    if (!bVar49) {
      fVar75 = fVar75 - fVar94;
      fVar77 = fVar77 - fVar92;
      fVar78 = fVar78 - fVar103;
      auVar87._0_4_ = fVar75 * fVar75;
      auVar87._4_4_ = fVar77 * fVar77;
      auVar87._8_4_ = fVar78 * fVar78;
      auVar87._12_4_ = (fVar65 - fVar76) * (fVar65 - fVar76);
      auVar67 = NEON_ext(auVar87,auVar87,8,1);
      fVar65 = auVar67._0_4_ + auVar67._4_4_;
      fVar76 = auVar87._0_4_ + auVar87._4_4_ + fVar65;
      fVar65 = auVar87._0_4_ + auVar87._4_4_ + fVar65;
      uVar66 = CONCAT44(fVar65,fVar76);
      auVar83._0_8_ = NEON_frsqrte(uVar66,4);
      fVar102 = (float)auVar83._0_8_;
      fVar88 = (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar102 * fVar102),uVar66,4);
      fVar102 = fVar102 * (float)auVar83._0_8_;
      fVar88 = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar102 * fVar102),uVar66,4);
      fVar102 = fVar102 * (float)auVar83._0_8_;
      fVar88 = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar102 * fVar102),uVar66,4);
      fVar102 = fVar102 * (float)auVar83._0_8_;
      fVar88 = fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar88 * fVar88,fVar102 * fVar102),uVar66,4);
      uVar89 = CONCAT44(fVar65 * fVar88 * (float)((ulong)auVar83._0_8_ >> 0x20),
                        fVar76 * fVar102 * (float)auVar83._0_8_);
      uVar89 = uVar89 ^ (uVar89 ^ uVar66) & CONCAT44(-(uint)(fVar76 == 0.0),-(uint)(fVar76 == 0.0));
      auVar83._0_8_ = NEON_frecpe(uVar89,4);
      uVar95 = NEON_frecps(uVar89,auVar83._0_8_,4);
      fVar76 = (float)auVar83._0_8_ * (float)uVar95;
      fVar65 = (float)((ulong)auVar83._0_8_ >> 0x20) * (float)((ulong)uVar95 >> 0x20);
      auVar83._0_8_ = NEON_frecps(uVar89,CONCAT44(fVar65,fVar76),4);
      fVar76 = fVar76 * (float)auVar83._0_8_;
      fVar65 = fVar65 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frecps(uVar89,CONCAT44(fVar65,fVar76),4);
      fVar76 = fVar76 * (float)auVar83._0_8_;
      fVar65 = fVar65 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frecps(uVar89,CONCAT44(fVar65,fVar76),4);
      fVar76 = fVar76 * (float)auVar83._0_8_;
      auVar83._0_8_ =
           NEON_frecps(uVar89,CONCAT44(fVar65 * (float)((ulong)auVar83._0_8_ >> 0x20),fVar76),4);
      fVar76 = fVar76 * (float)auVar83._0_8_;
      auVar80._0_4_ = fVar75 * fVar76;
      auVar80._4_4_ = fVar77 * fVar76;
      auVar80._8_4_ = fVar78 * fVar76;
    }
    auVar69._0_4_ = fVar60 * auVar80._0_4_;
    auVar69._4_4_ = fVar72 * auVar80._4_4_;
    fVar60 = auVar80._8_4_;
    auVar69._8_4_ = fVar55 * fVar60;
    auVar69._12_4_ = 0;
    auVar67 = NEON_ext(auVar69,auVar69,8,1);
    uStack_78 = (ulong)(uint)fVar60;
    local_80 = auVar80._0_8_;
    if (auVar69._0_4_ + auVar69._4_4_ + auVar67._0_4_ + auVar67._4_4_ <= 0.996) {
      lVar50 = *(long *)(param_1 + 0xe98);
      uVar3 = *(uint *)(lVar50 + 0x1110);
      uVar4 = uVar3 + 0xf;
      if ((*(uint *)(lVar50 + 0x1114) & 0x7fffffff) < uVar4) {
        FUN_0022bf00(lVar50,uVar4);
        lVar50 = *(long *)(param_1 + 0xe98);
        uVar3 = *(uint *)(lVar50 + 0x1110);
      }
      *(uint *)(lVar50 + 0x1110) = uVar4;
      pfVar1 = (float *)(*(long *)(lVar50 + 0x1108) + (ulong)uVar3 * 4);
      local_88 = *(uint *)(param_1 + 0x12e0);
      if (local_88 < (*(uint *)(param_1 + 0x12e4) & 0x7fffffff)) {
        puVar2 = (ulong *)(*(long *)(param_1 + 0x12d8) + (ulong)local_88 * 0x10);
        puVar2[1] = CONCAT44(uStack_84,local_88);
        *puVar2 = uVar54;
        *(int *)(param_1 + 0x12e0) = *(int *)(param_1 + 0x12e0) + 1;
      }
      else {
        local_90 = uVar54;
        FUN_00271240(param_1 + 0xed0,&local_90);
      }
      pfVar1[0xc] = param_3;
      pfVar1[0xd] = 0.0;
      *(byte *)(pfVar1 + 0xe) = bVar52;
      pfVar1[9] = *param_5;
      pfVar1[10] = param_5[1];
      pfVar1[0xb] = param_5[2];
      *pfVar1 = fVar94;
      pfVar1[1] = fVar92;
      *(ulong *)(pfVar1 + 2) = CONCAT44(auVar80._0_4_,fVar103);
      pfVar1[4] = auVar80._4_4_;
      pfVar1[5] = fVar60;
      *(ulong *)(pfVar1 + 6) = uVar54;
      pfVar1[8] = fVar79;
    }
    else {
      auVar83._0_8_ = NEON_frsqrte(uVar54,4);
      fVar55 = (float)auVar83._0_8_;
      fVar60 = (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar54,4);
      fVar92 = *param_5;
      fVar103 = param_5[1];
      fVar94 = fVar103;
      if ((uint)fVar103 <= (uint)fVar92) {
        fVar94 = fVar92;
        fVar92 = fVar103;
      }
      iVar51 = *(int *)(param_1 + 0xe94);
      fVar55 = fVar55 * (float)auVar83._0_8_;
      fVar60 = fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar54,4);
      fVar55 = fVar55 * (float)auVar83._0_8_;
      fVar60 = fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar54,4);
      fVar55 = fVar55 * (float)auVar83._0_8_;
      fVar60 = fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20);
      auVar83._0_8_ = NEON_frsqrts(CONCAT44(fVar60 * fVar60,fVar55 * fVar55),uVar54,4);
      uVar66 = CONCAT44((fVar71 + fVar74) * fVar60 * (float)((ulong)auVar83._0_8_ >> 0x20),
                        fVar79 * fVar55 * (float)auVar83._0_8_);
      auVar70._0_8_ =
           uVar66 ^ (uVar66 ^ uVar54) & CONCAT44(-(uint)(fVar79 == 0.0),-(uint)(fVar79 == 0.0));
      auVar70._8_8_ = 0;
      if (iVar51 != 0x80) {
        uVar4 = (uint)fVar94 | (int)fVar92 << 0x10;
        uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
        uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
        uVar4 = uVar4 ^ uVar4 >> 6;
        uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
        lVar50 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
        bVar52 = *(byte *)(lVar50 + 0xe14);
        if (bVar52 == 0xff) {
          puVar53 = (undefined1 *)(lVar50 + 0xe14);
        }
        else {
          do {
            uVar54 = (ulong)bVar52;
            if ((*(float *)(param_1 + uVar54 * 8 + 0x994) == fVar92) &&
               (*(float *)(param_1 + uVar54 * 8 + 0x998) == fVar94)) goto LAB_0026e4f0;
            bVar52 = *(byte *)(param_1 + uVar54 + 0xd94);
          } while (bVar52 != 0xff);
          puVar53 = (undefined1 *)(param_1 + uVar54 + 0xd94);
        }
        *puVar53 = (char)iVar51;
        *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
        uVar4 = *(uint *)(param_1 + 0xe94);
        *(uint *)(param_1 + 0xe94) = uVar4 + 1;
        *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(fVar94,fVar92);
        iVar51 = *(int *)(param_1 + 0xe94);
        fVar103 = param_5[1];
LAB_0026e4f0:
        fVar92 = param_5[2];
        fVar94 = fVar92;
        if ((uint)fVar92 <= (uint)fVar103) {
          fVar94 = fVar103;
          fVar103 = fVar92;
        }
        if (iVar51 != 0x80) {
          uVar4 = (uint)fVar94 | (int)fVar103 << 0x10;
          uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
          uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
          uVar4 = uVar4 ^ uVar4 >> 6;
          uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
          lVar50 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
          bVar52 = *(byte *)(lVar50 + 0xe14);
          if (bVar52 == 0xff) {
            puVar53 = (undefined1 *)(lVar50 + 0xe14);
          }
          else {
            do {
              uVar54 = (ulong)bVar52;
              if ((*(float *)(param_1 + uVar54 * 8 + 0x994) == fVar103) &&
                 (*(float *)(param_1 + uVar54 * 8 + 0x998) == fVar94)) goto LAB_0026e5b8;
              bVar52 = *(byte *)(param_1 + uVar54 + 0xd94);
            } while (bVar52 != 0xff);
            puVar53 = (undefined1 *)(param_1 + uVar54 + 0xd94);
          }
          *puVar53 = (char)iVar51;
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar4 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar4 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(fVar94,fVar103);
          fVar92 = param_5[2];
          iVar51 = *(int *)(param_1 + 0xe94);
        }
LAB_0026e5b8:
        fVar103 = *param_5;
        fVar94 = fVar103;
        if ((uint)fVar103 <= (uint)fVar92) {
          fVar94 = fVar92;
          fVar92 = fVar103;
        }
        if (iVar51 != 0x80) {
          uVar4 = (uint)fVar94 | (int)fVar92 << 0x10;
          uVar4 = uVar4 + (uVar4 << 0xf ^ 0xffffffff);
          uVar4 = (uVar4 ^ uVar4 >> 10) * 9;
          uVar4 = uVar4 ^ uVar4 >> 6;
          uVar4 = uVar4 + (uVar4 << 0xb ^ 0xffffffff);
          lVar50 = param_1 + (ulong)((uVar4 ^ uVar4 >> 0x10) & 0x7f);
          bVar52 = *(byte *)(lVar50 + 0xe14);
          if (bVar52 == 0xff) {
            puVar53 = (undefined1 *)(lVar50 + 0xe14);
          }
          else {
            do {
              uVar54 = (ulong)bVar52;
              if ((*(float *)(param_1 + uVar54 * 8 + 0x994) == fVar92) &&
                 (*(float *)(param_1 + uVar54 * 8 + 0x998) == fVar94)) goto LAB_0026e678;
              bVar52 = *(byte *)(param_1 + uVar54 + 0xd94);
            } while (bVar52 != 0xff);
            puVar53 = (undefined1 *)(param_1 + uVar54 + 0xd94);
          }
          *puVar53 = (char)iVar51;
          *(undefined1 *)(param_1 + 0x994 + (ulong)*(uint *)(param_1 + 0xe94) + 0x400) = 0xff;
          uVar4 = *(uint *)(param_1 + 0xe94);
          *(uint *)(param_1 + 0xe94) = uVar4 + 1;
          *(ulong *)(param_1 + 0x994 + (ulong)uVar4 * 8) = CONCAT44(fVar94,fVar92);
        }
      }
LAB_0026e678:
      FUN_0026e6b0(auVar70,param_1,&local_70,&local_80,param_3);
    }
  }
  return 1;
}


