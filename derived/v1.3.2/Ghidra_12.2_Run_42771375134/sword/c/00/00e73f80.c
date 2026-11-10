/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73f80; name: FUN_00e73f80
 */


/* WARNING: Removing unreachable block (ram,0x00e74388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00e73f80(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
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
  undefined1 auVar28 [16];
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  long lVar43;
  undefined8 uVar44;
  long lVar45;
  long *plVar46;
  float fVar47;
  float extraout_s0;
  float fVar48;
  undefined4 uVar49;
  long extraout_d0;
  undefined8 uVar50;
  float extraout_var;
  long extraout_var_00;
  undefined1 auVar51 [16];
  float fVar59;
  float extraout_var_01;
  float fVar60;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar61;
  float fVar62;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [12];
  byte bVar77;
  undefined1 auVar68 [16];
  int iVar63;
  float fVar74;
  undefined1 auVar69 [16];
  int iVar75;
  int iVar78;
  int iVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar86;
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined8 uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  undefined1 uVar113;
  undefined1 uVar114;
  undefined1 uVar115;
  undefined1 uVar116;
  float fVar117;
  float fVar118;
  undefined4 uVar119;
  undefined8 uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  float local_50;
  float fStack_48;
  float fStack_44;
  
  lVar45 = param_1[0x11];
  if ((lVar45 != 0) && (*(int *)(lVar45 + 0x54) != 0)) {
    piVar1 = (int *)(lVar45 + 0x54);
    iVar63 = *(int *)(lVar45 + 0x54);
    do {
      while( true ) {
        uVar42 = FUN_00e75e30(*(undefined8 *)(lVar45 + 0x58));
        if ((uVar42 & 1) == 0) goto LAB_00e74514;
        iVar75 = *piVar1;
        if (iVar75 != iVar63) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar63 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar45 = *(long *)(lVar45 + 0x60);
          if (lVar45 != 0) {
            if ((*(char *)(lVar45 + 0x35c) != '\0') && (*(char *)(lVar45 + 0x35d) == '\0')) {
              uVar44 = 0;
              goto LAB_00e74664;
            }
            if (*(char *)((long)param_1 + 0xd5) != '\0') {
              if ((int)param_1[0x12] == 0) {
                uVar44 = *(undefined8 *)(param_1[0xf] + 0xb0);
                uVar50 = *(undefined8 *)(param_1[0xf] + 0xb8);
                auVar51 = (**(code **)(*param_1 + 0xa0))(param_1);
                local_50 = (float)uVar44;
                fStack_48 = (float)uVar50;
                fStack_44 = (float)((ulong)uVar50 >> 0x20);
                local_50 = auVar51._0_4_ - local_50;
                fStack_48 = auVar51._8_4_ - fStack_48;
                fStack_44 = auVar51._12_4_ - fStack_44;
                auVar83._0_4_ = local_50 * local_50;
                auVar83._4_4_ = 0;
                auVar83._8_4_ = fStack_48 * fStack_48;
                auVar83._12_4_ = fStack_44 * fStack_44;
                auVar89 = NEON_ext(auVar83,auVar83,8,1);
                fVar47 = auVar89._0_4_ + auVar83._0_4_;
                fVar62 = auVar89._4_4_ + 0.0;
                fVar86 = fVar47 + fVar62;
                fVar47 = fVar47 + fVar62;
                if (fVar86 == 0.0) {
                  auVar83 = *(undefined1 (*) [16])(param_1[0xf] + 0xa0);
                  uVar49 = (undefined4)_UNK_01d4ae58;
                  uVar119 = (undefined4)((ulong)_UNK_01d4ae58 >> 0x20);
                  fVar58 = auVar83._0_4_;
                  fVar86 = fVar58 * (float)_DAT_01d4ae80;
                  fVar64 = auVar83._4_4_;
                  fVar47 = fVar64 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
                  uVar97 = SUB41(fVar47,0);
                  uVar98 = (undefined1)((uint)fVar47 >> 8);
                  uVar99 = (undefined1)((uint)fVar47 >> 0x10);
                  uVar100 = (undefined1)((uint)fVar47 >> 0x18);
                  fVar62 = auVar83._8_4_ * (float)_UNK_01d4ae88;
                  uVar101 = SUB41(fVar62,0);
                  uVar102 = (undefined1)((uint)fVar62 >> 8);
                  uVar103 = (undefined1)((uint)fVar62 >> 0x10);
                  uVar104 = (undefined1)((uint)fVar62 >> 0x18);
                  fVar48 = auVar83._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
                  uVar105 = SUB41(fVar48,0);
                  uVar106 = (undefined1)((uint)fVar48 >> 8);
                  uVar107 = (undefined1)((uint)fVar48 >> 0x10);
                  uVar108 = (undefined1)((uint)fVar48 >> 0x18);
                  auVar26._8_4_ = uVar49;
                  auVar26._0_8_ = _DAT_01d4ae50;
                  auVar26._12_4_ = uVar119;
                  uVar80 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd4f90);
                  auVar20[4] = uVar97;
                  auVar20._0_4_ = fVar86;
                  auVar20[5] = uVar98;
                  auVar20[6] = uVar99;
                  auVar20[7] = uVar100;
                  auVar20[8] = uVar101;
                  auVar20[9] = uVar102;
                  auVar20[10] = uVar103;
                  auVar20[0xb] = uVar104;
                  auVar20[0xc] = uVar105;
                  auVar20[0xd] = uVar106;
                  auVar20[0xe] = uVar107;
                  auVar20[0xf] = uVar108;
                  uVar94 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
                  auVar27._8_4_ = uVar49;
                  auVar27._0_8_ = _DAT_01d4ae50;
                  auVar27._12_4_ = uVar119;
                  uVar93 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd50f8);
                  auVar28._8_4_ = uVar49;
                  auVar28._0_8_ = _DAT_01d4ae50;
                  auVar28._12_4_ = uVar119;
                  uVar65 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5418);
                  fVar76 = (float)((ulong)uVar65 >> 0x20);
                  auVar21[4] = uVar97;
                  auVar21._0_4_ = fVar86;
                  auVar21[5] = uVar98;
                  auVar21[6] = uVar99;
                  auVar21[7] = uVar100;
                  auVar21[8] = uVar101;
                  auVar21[9] = uVar102;
                  auVar21[10] = uVar103;
                  auVar21[0xb] = uVar104;
                  auVar21[0xc] = uVar105;
                  auVar21[0xd] = uVar106;
                  auVar21[0xe] = uVar107;
                  auVar21[0xf] = uVar108;
                  uVar126 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
                  auVar22[4] = uVar97;
                  auVar22._0_4_ = fVar86;
                  auVar22[5] = uVar98;
                  auVar22[6] = uVar99;
                  auVar22[7] = uVar100;
                  auVar22[8] = uVar101;
                  auVar22[9] = uVar102;
                  auVar22[10] = uVar103;
                  auVar22[0xb] = uVar104;
                  auVar22[0xc] = uVar105;
                  auVar22[0xd] = uVar106;
                  auVar22[0xe] = uVar107;
                  auVar22[0xf] = uVar108;
                  uVar127 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
                  auVar23[4] = uVar97;
                  auVar23._0_4_ = fVar86;
                  auVar23[5] = uVar98;
                  auVar23[6] = uVar99;
                  auVar23[7] = uVar100;
                  auVar23[8] = uVar101;
                  auVar23[9] = uVar102;
                  auVar23[10] = uVar103;
                  auVar23[0xb] = uVar104;
                  auVar23[0xc] = uVar105;
                  auVar23[0xd] = uVar106;
                  auVar23[0xe] = uVar107;
                  auVar23[0xf] = uVar108;
                  uVar128 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5270);
                  fVar60 = (float)((ulong)uVar80 >> 0x20);
                  fVar118 = (float)((ulong)DAT_01cd5070 >> 0x20);
                  fVar121 = (float)((ulong)uVar93 >> 0x20);
                  auVar24[4] = uVar97;
                  auVar24._0_4_ = fVar86;
                  auVar24[5] = uVar98;
                  auVar24[6] = uVar99;
                  auVar24[7] = uVar100;
                  auVar24[8] = uVar101;
                  auVar24[9] = uVar102;
                  auVar24[10] = uVar103;
                  auVar24[0xb] = uVar104;
                  auVar24[0xc] = uVar105;
                  auVar24[0xd] = uVar106;
                  auVar24[0xe] = uVar107;
                  auVar24[0xf] = uVar108;
                  uVar120 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
                  auVar25[4] = uVar97;
                  auVar25._0_4_ = fVar86;
                  auVar25[5] = uVar98;
                  auVar25[6] = uVar99;
                  auVar25[7] = uVar100;
                  auVar25[8] = SUB41(fVar86,0);
                  auVar25[9] = (char)((uint)fVar86 >> 8);
                  auVar25[10] = (char)((uint)fVar86 >> 0x10);
                  auVar25[0xb] = (char)((uint)fVar86 >> 0x18);
                  auVar25[0xc] = uVar97;
                  auVar25[0xd] = uVar98;
                  auVar25[0xe] = uVar99;
                  auVar25[0xf] = uVar100;
                  uVar44 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
                  uVar66 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd50f8);
                  fVar117 = (float)((ulong)uVar66 >> 0x20);
                  fVar122 = (float)_DAT_01d4ae90;
                  fVar123 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
                  fVar124 = (float)_UNK_01d4ae98;
                  fVar125 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
                  uVar50 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd4f90);
                  fVar59 = (fVar86 * (float)uVar80 + fVar122 * (float)DAT_01cd5070 * (float)uVar94 +
                           fVar122 * (float)uVar65 * (float)uVar120) -
                           (float)uVar93 * (float)uVar127;
                  fVar74 = (fVar47 * fVar60 + fVar123 * fVar118 * (float)((ulong)uVar94 >> 0x20) +
                           fVar123 * fVar76 * (float)((ulong)uVar120 >> 0x20)) -
                           fVar121 * (float)((ulong)uVar127 >> 0x20);
                  auVar72._0_8_ = CONCAT44(fVar74,fVar59);
                  auVar72._8_4_ =
                       (fVar62 * (float)uVar80 + fVar124 * (float)uVar93 * (float)uVar126 +
                       fVar124 * (float)DAT_01cd5070 * (float)uVar44) -
                       (float)uVar65 * (float)uVar128;
                  auVar72._12_4_ =
                       (fVar48 * fVar60 + fVar125 * fVar121 * (float)((ulong)uVar126 >> 0x20) +
                       fVar125 * fVar118 * (float)((ulong)uVar44 >> 0x20)) -
                       fVar76 * (float)((ulong)uVar128 >> 0x20);
                  uVar93 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd4f90);
                  uVar126 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5120);
                  fVar86 = (float)((ulong)uVar50 >> 0x20);
                  uVar120 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5418);
                  fVar60 = (float)((ulong)uVar120 >> 0x20);
                  uVar65 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd50f8);
                  uVar80 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5418);
                  uVar94 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5270);
                  auVar73._8_8_ = auVar72._0_8_;
                  auVar73._0_8_ = auVar72._0_8_;
                  uVar44 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50b0);
                  fVar47 = ((float)uVar50 * fVar59 + fVar122 * fVar58 * (float)uVar93 +
                           fVar122 * (float)uVar120 * (float)uVar65) - (float)uVar66 * (float)uVar80
                  ;
                  fVar62 = (fVar86 * fVar74 + fVar123 * fVar64 * (float)((ulong)uVar93 >> 0x20) +
                           fVar123 * fVar60 * (float)((ulong)uVar65 >> 0x20)) -
                           fVar117 * (float)((ulong)uVar80 >> 0x20);
                  fVar48 = ((float)uVar50 * auVar72._8_4_ + fVar124 * (float)uVar66 * (float)uVar126
                           + fVar124 * fVar58 * (float)uVar44) - (float)uVar120 * (float)uVar94;
                  fVar86 = (fVar86 * auVar72._12_4_ +
                            fVar125 * fVar117 * (float)((ulong)uVar126 >> 0x20) +
                           fVar125 * fVar64 * (float)((ulong)uVar44 >> 0x20)) -
                           fVar60 * (float)((ulong)uVar94 >> 0x20);
                  bVar61 = (byte)DAT_01d4ab50;
                  uVar42 = (ulong)DAT_01d4ab50 >> 8;
                  uVar29 = (ulong)DAT_01d4ab50 >> 0x10;
                  uVar30 = (ulong)DAT_01d4ab50 >> 0x18;
                  uVar31 = (ulong)DAT_01d4ab50 >> 0x20;
                  uVar32 = (ulong)DAT_01d4ab50 >> 0x28;
                  uVar33 = (ulong)DAT_01d4ab50 >> 0x30;
                  uVar34 = (ulong)DAT_01d4ab50 >> 0x38;
                  bVar77 = (byte)DAT_01d4ab58;
                  uVar35 = (ulong)DAT_01d4ab58 >> 8;
                  uVar36 = (ulong)DAT_01d4ab58 >> 0x10;
                  uVar37 = (ulong)DAT_01d4ab58 >> 0x18;
                  uVar38 = (ulong)DAT_01d4ab58 >> 0x20;
                  uVar39 = (ulong)DAT_01d4ab58 >> 0x28;
                  uVar40 = (ulong)DAT_01d4ab58 >> 0x30;
                  uVar41 = (ulong)DAT_01d4ab58 >> 0x38;
                  param_1[0x17] = auVar51._8_8_;
                  param_1[0x16] = auVar51._0_8_;
                  *(byte *)(param_1 + 0x19) = SUB41(fVar48,0) & bVar77;
                  *(byte *)((long)param_1 + 0xc9) = (byte)((uint)fVar48 >> 8) & (byte)uVar35;
                  *(byte *)((long)param_1 + 0xca) = (byte)((uint)fVar48 >> 0x10) & (byte)uVar36;
                  *(byte *)((long)param_1 + 0xcb) = (byte)((uint)fVar48 >> 0x18) & (byte)uVar37;
                  *(byte *)((long)param_1 + 0xcc) = SUB41(fVar86,0) & (byte)uVar38;
                  *(byte *)((long)param_1 + 0xcd) = (byte)((uint)fVar86 >> 8) & (byte)uVar39;
                  *(byte *)((long)param_1 + 0xce) = (byte)((uint)fVar86 >> 0x10) & (byte)uVar40;
                  *(byte *)((long)param_1 + 0xcf) = (byte)((uint)fVar86 >> 0x18) & (byte)uVar41;
                  *(byte *)(param_1 + 0x18) = SUB41(fVar47,0) & bVar61;
                  *(byte *)((long)param_1 + 0xc1) = (byte)((uint)fVar47 >> 8) & (byte)uVar42;
                  *(byte *)((long)param_1 + 0xc2) = (byte)((uint)fVar47 >> 0x10) & (byte)uVar29;
                  *(byte *)((long)param_1 + 0xc3) = (byte)((uint)fVar47 >> 0x18) & (byte)uVar30;
                  *(byte *)((long)param_1 + 0xc4) = SUB41(fVar62,0) & (byte)uVar31;
                  *(byte *)((long)param_1 + 0xc5) = (byte)((uint)fVar62 >> 8) & (byte)uVar32;
                  *(byte *)((long)param_1 + 0xc6) = (byte)((uint)fVar62 >> 0x10) & (byte)uVar33;
                  *(byte *)((long)param_1 + 199) = (byte)((uint)fVar62 >> 0x18) & (byte)uVar34;
                  cVar2 = *(char *)(lVar45 + 0x35c);
                  goto joined_r0x00e7465c;
                }
                auVar81._8_8_ = CONCAT44(fVar47,fVar86);
                auVar81._0_8_ = CONCAT44(fVar47,fVar86);
                auVar83 = NEON_frsqrte(auVar81,4);
                auVar95._0_4_ = auVar83._0_4_ * fVar86;
                auVar95._4_4_ = auVar83._4_4_ * fVar47;
                auVar95._8_4_ = auVar83._8_4_ * fVar86;
                auVar95._12_4_ = auVar83._12_4_ * fVar47;
                auVar89 = NEON_frsqrts(auVar83,auVar95,4);
                auVar87._0_4_ = auVar83._0_4_ * auVar89._0_4_;
                auVar87._4_4_ = auVar83._4_4_ * auVar89._4_4_;
                auVar87._8_4_ = auVar83._8_4_ * auVar89._8_4_;
                auVar87._12_4_ = auVar83._12_4_ * auVar89._12_4_;
                auVar96._0_4_ = fVar86 * auVar87._0_4_;
                auVar96._4_4_ = fVar47 * auVar87._4_4_;
                auVar96._8_4_ = fVar86 * auVar87._8_4_;
                auVar96._12_4_ = fVar47 * auVar87._12_4_;
                iVar63 = -(uint)(fVar86 == 0.0);
                iVar75 = -(uint)(fVar47 == 0.0);
                iVar78 = -(uint)(fVar86 == 0.0);
                iVar79 = -(uint)(fVar47 == 0.0);
                auVar83 = NEON_frsqrts(auVar87,auVar96,4);
                local_50 = local_50 * auVar87._0_4_ * auVar83._0_4_;
                fVar86 = auVar87._4_4_ * auVar83._4_4_ * 0.0;
                fStack_48 = fStack_48 * auVar87._8_4_ * auVar83._8_4_;
                fStack_44 = fStack_44 * auVar87._12_4_ * auVar83._12_4_;
                auVar82[0] = SUB41(local_50,0) & ~(byte)iVar63;
                auVar82[1] = (byte)((uint)local_50 >> 8) & ~(byte)((uint)iVar63 >> 8);
                auVar82[2] = (byte)((uint)local_50 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
                auVar82[3] = (byte)((uint)local_50 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
                auVar82[4] = SUB41(fVar86,0) & ~(byte)iVar75;
                auVar82[5] = (byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar75 >> 8);
                auVar82[6] = (byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
                auVar82[7] = (byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
                auVar82[8] = SUB41(fStack_48,0) & ~(byte)iVar78;
                auVar82[9] = (byte)((uint)fStack_48 >> 8) & ~(byte)((uint)iVar78 >> 8);
                auVar82[10] = (byte)((uint)fStack_48 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
                auVar82[0xb] = (byte)((uint)fStack_48 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
                auVar82[0xc] = SUB41(fStack_44,0) & ~(byte)iVar79;
                auVar82[0xd] = (byte)((uint)fStack_44 >> 8) & ~(byte)((uint)iVar79 >> 8);
                auVar82[0xe] = (byte)((uint)fStack_44 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
                auVar82[0xf] = (byte)((uint)fStack_44 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
                uVar66 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5418);
                uVar44 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5188);
                uVar97 = (undefined1)_UNK_01d4b588;
                uVar98 = (undefined1)((ulong)_UNK_01d4b588 >> 8);
                uVar99 = (undefined1)((ulong)_UNK_01d4b588 >> 0x10);
                uVar100 = (undefined1)((ulong)_UNK_01d4b588 >> 0x18);
                uVar101 = (undefined1)((ulong)_UNK_01d4b588 >> 0x20);
                uVar102 = (undefined1)((ulong)_UNK_01d4b588 >> 0x28);
                uVar103 = (undefined1)((ulong)_UNK_01d4b588 >> 0x30);
                uVar104 = (undefined1)((ulong)_UNK_01d4b588 >> 0x38);
                auVar89[8] = uVar97;
                auVar89._0_8_ = _DAT_01d4b580;
                auVar89[9] = uVar98;
                auVar89[10] = uVar99;
                auVar89[0xb] = uVar100;
                auVar89[0xc] = uVar101;
                auVar89[0xd] = uVar102;
                auVar89[0xe] = uVar103;
                auVar89[0xf] = uVar104;
                uVar65 = a64_TBL(ZEXT816(0),auVar89,DAT_01cd50f8);
                uVar50 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd50f8);
                auVar17[8] = uVar97;
                auVar17._0_8_ = _DAT_01d4b580;
                auVar17[9] = uVar98;
                auVar17[10] = uVar99;
                auVar17[0xb] = uVar100;
                auVar17[0xc] = uVar101;
                auVar17[0xd] = uVar102;
                auVar17[0xe] = uVar103;
                auVar17[0xf] = uVar104;
                uVar120 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5158);
                uVar80 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5158);
                auVar18[8] = uVar97;
                auVar18._0_8_ = _DAT_01d4b580;
                auVar18[9] = uVar98;
                auVar18[10] = uVar99;
                auVar18[0xb] = uVar100;
                auVar18[0xc] = uVar101;
                auVar18[0xd] = uVar102;
                auVar18[0xe] = uVar103;
                auVar18[0xf] = uVar104;
                uVar93 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
                auVar19[8] = uVar97;
                auVar19._0_8_ = _DAT_01d4b580;
                auVar19[9] = uVar98;
                auVar19[10] = uVar99;
                auVar19[0xb] = uVar100;
                auVar19[0xc] = uVar101;
                auVar19[0xd] = uVar102;
                auVar19[0xe] = uVar103;
                auVar19[0xf] = uVar104;
                uVar94 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5188);
                param_1[0x17] = auVar51._8_8_;
                param_1[0x16] = auVar51._0_8_;
                *(float *)(param_1 + 0x19) =
                     (float)uVar44 * (float)uVar120 - (float)uVar80 * (float)uVar94;
                *(float *)((long)param_1 + 0xcc) =
                     (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar120 >> 0x20) -
                     (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar94 >> 0x20);
                *(float *)(param_1 + 0x18) =
                     (float)uVar66 * (float)uVar65 - (float)uVar50 * (float)uVar93;
                *(float *)((long)param_1 + 0xc4) =
                     (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar65 >> 0x20) -
                     (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar93 >> 0x20);
                if (*(char *)(lVar45 + 0x35c) != '\0') goto LAB_00e743cc;
                goto LAB_00e74660;
              }
              if ((int)param_1[0x12] != 1) goto LAB_00e743c4;
            }
            if (*(float *)(param_1 + 0x13) <= 0.0) {
              if (*(char *)((long)param_1 + 0x9c) == '\0') {
                *(undefined4 *)(param_1 + 0x13) = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(lVar45 + 0x3e0);
              }
            }
            (**(code **)(*param_1 + 0xa0))(param_1);
            lVar43 = param_1[0xf];
            *(undefined1 *)(lVar43 + 0xc0) = 1;
            *(long *)(lVar43 + 0xb8) = extraout_var_00;
            *(long *)(lVar43 + 0xb0) = extraout_d0;
            param_1[0x15] = extraout_var_00;
            param_1[0x14] = extraout_d0;
            fVar86 = 30.0;
            if (*(char *)((long)param_1 + 0x9c) != '\0') {
              fVar86 = -30.0;
            }
            auVar51 = (**(code **)(*param_1 + 0xa0))(param_1);
            local_50 = (float)extraout_d0;
            fStack_48 = (float)extraout_var_00;
            fStack_44 = (float)((ulong)extraout_var_00 >> 0x20);
            if ((int)param_1[0x12] != 0) goto LAB_00e74310;
            (**(code **)(*param_1 + 0xa0))(param_1);
            fVar48 = auVar51._0_4_ - extraout_s0;
            fVar59 = auVar51._8_4_ - extraout_var;
            fVar60 = auVar51._12_4_ - extraout_var_01;
            auVar68._0_4_ = fVar48 * fVar48;
            auVar68._4_4_ = 0;
            auVar68._8_4_ = fVar59 * fVar59;
            auVar68._12_4_ = fVar60 * fVar60;
            auVar83 = NEON_ext(auVar68,auVar68,8,1);
            fVar62 = auVar83._0_4_ + auVar68._0_4_;
            fVar74 = auVar83._4_4_ + 0.0;
            fVar47 = fVar62 + fVar74;
            fVar62 = fVar62 + fVar74;
            if (fVar47 == 0.0) {
              auVar83 = *(undefined1 (*) [16])(param_1[0xf] + 0xa0);
              uVar109 = (undefined1)_UNK_01d4ae58;
              uVar110 = (undefined1)((ulong)_UNK_01d4ae58 >> 8);
              uVar111 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x10);
              uVar112 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x18);
              uVar113 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x20);
              uVar114 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x28);
              uVar115 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x30);
              uVar116 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x38);
              fVar64 = auVar83._0_4_;
              fVar47 = fVar64 * (float)_DAT_01d4ae80;
              fVar76 = auVar83._4_4_;
              fVar62 = fVar76 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
              uVar97 = SUB41(fVar62,0);
              uVar98 = (undefined1)((uint)fVar62 >> 8);
              uVar99 = (undefined1)((uint)fVar62 >> 0x10);
              uVar100 = (undefined1)((uint)fVar62 >> 0x18);
              fVar48 = auVar83._8_4_ * (float)_UNK_01d4ae88;
              uVar101 = SUB41(fVar48,0);
              uVar102 = (undefined1)((uint)fVar48 >> 8);
              uVar103 = (undefined1)((uint)fVar48 >> 0x10);
              uVar104 = (undefined1)((uint)fVar48 >> 0x18);
              fVar59 = auVar83._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
              uVar105 = SUB41(fVar59,0);
              uVar106 = (undefined1)((uint)fVar59 >> 8);
              uVar107 = (undefined1)((uint)fVar59 >> 0x10);
              uVar108 = (undefined1)((uint)fVar59 >> 0x18);
              auVar14[8] = uVar109;
              auVar14._0_8_ = _DAT_01d4ae50;
              auVar14[9] = uVar110;
              auVar14[10] = uVar111;
              auVar14[0xb] = uVar112;
              auVar14[0xc] = uVar113;
              auVar14[0xd] = uVar114;
              auVar14[0xe] = uVar115;
              auVar14[0xf] = uVar116;
              uVar93 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
              auVar8[4] = uVar97;
              auVar8._0_4_ = fVar47;
              auVar8[5] = uVar98;
              auVar8[6] = uVar99;
              auVar8[7] = uVar100;
              auVar8[8] = uVar101;
              auVar8[9] = uVar102;
              auVar8[10] = uVar103;
              auVar8[0xb] = uVar104;
              auVar8[0xc] = uVar105;
              auVar8[0xd] = uVar106;
              auVar8[0xe] = uVar107;
              auVar8[0xf] = uVar108;
              uVar94 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd4f90);
              auVar15[8] = uVar109;
              auVar15._0_8_ = _DAT_01d4ae50;
              auVar15[9] = uVar110;
              auVar15[10] = uVar111;
              auVar15[0xb] = uVar112;
              auVar15[0xc] = uVar113;
              auVar15[0xd] = uVar114;
              auVar15[0xe] = uVar115;
              auVar15[0xf] = uVar116;
              uVar80 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
              fVar117 = (float)((ulong)uVar80 >> 0x20);
              auVar16[8] = uVar109;
              auVar16._0_8_ = _DAT_01d4ae50;
              auVar16[9] = uVar110;
              auVar16[10] = uVar111;
              auVar16[0xb] = uVar112;
              auVar16[0xc] = uVar113;
              auVar16[0xd] = uVar114;
              auVar16[0xe] = uVar115;
              auVar16[0xf] = uVar116;
              uVar65 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
              auVar9[4] = uVar97;
              auVar9._0_4_ = fVar47;
              auVar9[5] = uVar98;
              auVar9[6] = uVar99;
              auVar9[7] = uVar100;
              auVar9[8] = uVar101;
              auVar9[9] = uVar102;
              auVar9[10] = uVar103;
              auVar9[0xb] = uVar104;
              auVar9[0xc] = uVar105;
              auVar9[0xd] = uVar106;
              auVar9[0xe] = uVar107;
              auVar9[0xf] = uVar108;
              uVar126 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5120);
              auVar10[4] = uVar97;
              auVar10._0_4_ = fVar47;
              auVar10[5] = uVar98;
              auVar10[6] = uVar99;
              auVar10[7] = uVar100;
              auVar10[8] = uVar101;
              auVar10[9] = uVar102;
              auVar10[10] = uVar103;
              auVar10[0xb] = uVar104;
              auVar10[0xc] = uVar105;
              auVar10[0xd] = uVar106;
              auVar10[0xe] = uVar107;
              auVar10[0xf] = uVar108;
              uVar127 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
              auVar11[4] = uVar97;
              auVar11._0_4_ = fVar47;
              auVar11[5] = uVar98;
              auVar11[6] = uVar99;
              auVar11[7] = uVar100;
              auVar11[8] = uVar101;
              auVar11[9] = uVar102;
              auVar11[10] = uVar103;
              auVar11[0xb] = uVar104;
              auVar11[0xc] = uVar105;
              auVar11[0xd] = uVar106;
              auVar11[0xe] = uVar107;
              auVar11[0xf] = uVar108;
              uVar128 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5270);
              fVar118 = (float)((ulong)uVar65 >> 0x20);
              fVar74 = (float)((ulong)uVar93 >> 0x20);
              fVar121 = (float)((ulong)DAT_01cd5070 >> 0x20);
              auVar12[4] = uVar97;
              auVar12._0_4_ = fVar47;
              auVar12[5] = uVar98;
              auVar12[6] = uVar99;
              auVar12[7] = uVar100;
              auVar12[8] = uVar101;
              auVar12[9] = uVar102;
              auVar12[10] = uVar103;
              auVar12[0xb] = uVar104;
              auVar12[0xc] = uVar105;
              auVar12[0xd] = uVar106;
              auVar12[0xe] = uVar107;
              auVar12[0xf] = uVar108;
              uVar120 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
              auVar13[4] = uVar97;
              auVar13._0_4_ = fVar47;
              auVar13[5] = uVar98;
              auVar13[6] = uVar99;
              auVar13[7] = uVar100;
              auVar13[8] = SUB41(fVar47,0);
              auVar13[9] = (char)((uint)fVar47 >> 8);
              auVar13[10] = (char)((uint)fVar47 >> 0x10);
              auVar13[0xb] = (char)((uint)fVar47 >> 0x18);
              auVar13[0xc] = uVar97;
              auVar13[0xd] = uVar98;
              auVar13[0xe] = uVar99;
              auVar13[0xf] = uVar100;
              uVar44 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
              uVar66 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd50f8);
              fVar122 = (float)_DAT_01d4ae90;
              fVar123 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
              fVar124 = (float)_UNK_01d4ae98;
              fVar125 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
              uVar50 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd4f90);
              fVar60 = (fVar47 * (float)uVar93 + fVar122 * (float)DAT_01cd5070 * (float)uVar94 +
                       fVar122 * (float)uVar65 * (float)uVar120) - (float)uVar80 * (float)uVar127;
              fVar58 = (fVar62 * fVar74 + fVar123 * fVar121 * (float)((ulong)uVar94 >> 0x20) +
                       fVar123 * fVar118 * (float)((ulong)uVar120 >> 0x20)) -
                       fVar117 * (float)((ulong)uVar127 >> 0x20);
              auVar55._0_8_ = CONCAT44(fVar58,fVar60);
              auVar55._8_4_ =
                   (fVar48 * (float)uVar93 + fVar124 * (float)uVar80 * (float)uVar126 +
                   fVar124 * (float)DAT_01cd5070 * (float)uVar44) - (float)uVar65 * (float)uVar128;
              auVar55._12_4_ =
                   (fVar59 * fVar74 + fVar125 * fVar117 * (float)((ulong)uVar126 >> 0x20) +
                   fVar125 * fVar121 * (float)((ulong)uVar44 >> 0x20)) -
                   fVar118 * (float)((ulong)uVar128 >> 0x20);
              uVar94 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd4f90);
              uVar126 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5120);
              fVar117 = (float)((ulong)uVar66 >> 0x20);
              fVar47 = (float)((ulong)uVar50 >> 0x20);
              uVar44 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5418);
              fVar74 = (float)((ulong)uVar44 >> 0x20);
              uVar80 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd50f8);
              uVar93 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5418);
              uVar120 = a64_TBL(ZEXT816(0),auVar55,DAT_01cd5270);
              auVar56._8_8_ = auVar55._0_8_;
              auVar56._0_8_ = auVar55._0_8_;
              uVar65 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd50b0);
              fVar62 = ((float)uVar50 * fVar60 + fVar122 * fVar64 * (float)uVar94 +
                       fVar122 * (float)uVar44 * (float)uVar80) - (float)uVar66 * (float)uVar93;
              fVar48 = (fVar47 * fVar58 + fVar123 * fVar76 * (float)((ulong)uVar94 >> 0x20) +
                       fVar123 * fVar74 * (float)((ulong)uVar80 >> 0x20)) -
                       fVar117 * (float)((ulong)uVar93 >> 0x20);
              fVar59 = ((float)uVar50 * auVar55._8_4_ + fVar124 * (float)uVar66 * (float)uVar126 +
                       fVar124 * fVar64 * (float)uVar65) - (float)uVar44 * (float)uVar120;
              fVar47 = (fVar47 * auVar55._12_4_ +
                        fVar125 * fVar117 * (float)((ulong)uVar126 >> 0x20) +
                       fVar125 * fVar76 * (float)((ulong)uVar65 >> 0x20)) -
                       fVar74 * (float)((ulong)uVar120 >> 0x20);
              auVar57._0_8_ =
                   CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                            CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                     CONCAT15((byte)((uint)fVar48 >> 8) &
                                              (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                              CONCAT14(SUB41(fVar48,0) &
                                                       (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                       CONCAT13((byte)((uint)fVar62 >> 0x18) &
                                                                (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                                CONCAT12((byte)((uint)fVar62 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  DAT_01d4ab50 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar62 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 8),
                                                           SUB41(fVar62,0) & (byte)DAT_01d4ab50)))))
                                    ));
              auVar57[8] = SUB41(fVar59,0) & (byte)DAT_01d4ab58;
              auVar57[9] = (byte)((uint)fVar59 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
              auVar57[10] = (byte)((uint)fVar59 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
              auVar57[0xb] = (byte)((uint)fVar59 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
              auVar57[0xc] = SUB41(fVar47,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
              auVar57[0xd] = (byte)((uint)fVar47 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
              auVar57[0xe] = (byte)((uint)fVar47 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
              auVar57[0xf] = (byte)((uint)fVar47 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
              lVar43 = param_1[0x11];
              param_1[0x17] = auVar51._8_8_;
              param_1[0x16] = auVar51._0_8_;
              param_1[0x19] = auVar57._8_8_;
              param_1[0x18] = auVar57._0_8_;
            }
            else {
              auVar69._8_8_ = CONCAT44(fVar62,fVar47);
              auVar69._0_8_ = CONCAT44(fVar62,fVar47);
              auVar83 = NEON_frsqrte(auVar69,4);
              auVar88._0_4_ = auVar83._0_4_ * fVar47;
              auVar88._4_4_ = auVar83._4_4_ * fVar62;
              auVar88._8_4_ = auVar83._8_4_ * fVar47;
              auVar88._12_4_ = auVar83._12_4_ * fVar62;
              auVar89 = NEON_frsqrts(auVar83,auVar88,4);
              auVar84._0_4_ = auVar83._0_4_ * auVar89._0_4_;
              auVar84._4_4_ = auVar83._4_4_ * auVar89._4_4_;
              auVar84._8_4_ = auVar83._8_4_ * auVar89._8_4_;
              auVar84._12_4_ = auVar83._12_4_ * auVar89._12_4_;
              auVar90._0_4_ = fVar47 * auVar84._0_4_;
              auVar90._4_4_ = fVar62 * auVar84._4_4_;
              auVar90._8_4_ = fVar47 * auVar84._8_4_;
              auVar90._12_4_ = fVar62 * auVar84._12_4_;
              iVar63 = -(uint)(fVar47 == 0.0);
              iVar75 = -(uint)(fVar62 == 0.0);
              iVar78 = -(uint)(fVar47 == 0.0);
              iVar79 = -(uint)(fVar62 == 0.0);
              auVar83 = NEON_frsqrts(auVar84,auVar90,4);
              fVar48 = fVar48 * auVar84._0_4_ * auVar83._0_4_;
              fVar47 = auVar84._4_4_ * auVar83._4_4_ * 0.0;
              fVar59 = fVar59 * auVar84._8_4_ * auVar83._8_4_;
              fVar60 = fVar60 * auVar84._12_4_ * auVar83._12_4_;
              auVar70[0] = SUB41(fVar48,0) & ~(byte)iVar63;
              auVar70[1] = (byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar63 >> 8);
              auVar70[2] = (byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10);
              auVar70[3] = (byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18);
              auVar70[4] = SUB41(fVar47,0) & ~(byte)iVar75;
              auVar70[5] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar75 >> 8);
              auVar70[6] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
              auVar70[7] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
              auVar70[8] = SUB41(fVar59,0) & ~(byte)iVar78;
              auVar70[9] = (byte)((uint)fVar59 >> 8) & ~(byte)((uint)iVar78 >> 8);
              auVar70[10] = (byte)((uint)fVar59 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
              auVar70[0xb] = (byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
              auVar70[0xc] = SUB41(fVar60,0) & ~(byte)iVar79;
              auVar70[0xd] = (byte)((uint)fVar60 >> 8) & ~(byte)((uint)iVar79 >> 8);
              auVar70[0xe] = (byte)((uint)fVar60 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
              auVar70[0xf] = (byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
              uVar50 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd5418);
              uVar93 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd5188);
              uVar97 = (undefined1)_UNK_01d4b588;
              uVar98 = (undefined1)((ulong)_UNK_01d4b588 >> 8);
              uVar99 = (undefined1)((ulong)_UNK_01d4b588 >> 0x10);
              uVar100 = (undefined1)((ulong)_UNK_01d4b588 >> 0x18);
              uVar101 = (undefined1)((ulong)_UNK_01d4b588 >> 0x20);
              uVar102 = (undefined1)((ulong)_UNK_01d4b588 >> 0x28);
              uVar103 = (undefined1)((ulong)_UNK_01d4b588 >> 0x30);
              uVar104 = (undefined1)((ulong)_UNK_01d4b588 >> 0x38);
              auVar4[8] = uVar97;
              auVar4._0_8_ = _DAT_01d4b580;
              auVar4[9] = uVar98;
              auVar4[10] = uVar99;
              auVar4[0xb] = uVar100;
              auVar4[0xc] = uVar101;
              auVar4[0xd] = uVar102;
              auVar4[0xe] = uVar103;
              auVar4[0xf] = uVar104;
              uVar44 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
              uVar94 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd50f8);
              auVar5[8] = uVar97;
              auVar5._0_8_ = _DAT_01d4b580;
              auVar5[9] = uVar98;
              auVar5[10] = uVar99;
              auVar5[0xb] = uVar100;
              auVar5[0xc] = uVar101;
              auVar5[0xd] = uVar102;
              auVar5[0xe] = uVar103;
              auVar5[0xf] = uVar104;
              uVar120 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5158);
              uVar65 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd5158);
              auVar6[8] = uVar97;
              auVar6._0_8_ = _DAT_01d4b580;
              auVar6[9] = uVar98;
              auVar6[10] = uVar99;
              auVar6[0xb] = uVar100;
              auVar6[0xc] = uVar101;
              auVar6[0xd] = uVar102;
              auVar6[0xe] = uVar103;
              auVar6[0xf] = uVar104;
              uVar66 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
              auVar7[8] = uVar97;
              auVar7._0_8_ = _DAT_01d4b580;
              auVar7[9] = uVar98;
              auVar7[10] = uVar99;
              auVar7[0xb] = uVar100;
              auVar7[0xc] = uVar101;
              auVar7[0xd] = uVar102;
              auVar7[0xe] = uVar103;
              auVar7[0xf] = uVar104;
              uVar80 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5188);
              auVar52._0_8_ =
                   CONCAT44((float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar44 >> 0x20) -
                            (float)((ulong)uVar94 >> 0x20) * (float)((ulong)uVar66 >> 0x20),
                            (float)uVar50 * (float)uVar44 - (float)uVar94 * (float)uVar66);
              auVar52._8_4_ = (float)uVar93 * (float)uVar120 - (float)uVar65 * (float)uVar80;
              auVar52._12_4_ =
                   (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar120 >> 0x20) -
                   (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar80 >> 0x20);
              lVar43 = param_1[0x11];
              param_1[0x17] = auVar51._8_8_;
              param_1[0x16] = auVar51._0_8_;
              param_1[0x19] = auVar52._8_8_;
              param_1[0x18] = auVar52._0_8_;
            }
            if ((lVar43 != 0) && (*(int *)(lVar43 + 0x54) != 0)) {
              piVar1 = (int *)(lVar43 + 0x54);
              iVar63 = *(int *)(lVar43 + 0x54);
              goto LAB_00e7428c;
            }
          }
          goto LAB_00e74514;
        }
        iVar63 = iVar75;
        if (iVar75 == 0) goto LAB_00e74514;
      }
      ClearExclusiveLocal();
      iVar63 = iVar75;
    } while (iVar75 != 0);
  }
  goto LAB_00e74514;
LAB_00e7428c:
  do {
    uVar42 = FUN_00e75e30(*(undefined8 *)(lVar43 + 0x58));
    if ((uVar42 & 1) == 0) break;
    iVar75 = *piVar1;
    if (iVar75 != iVar63) {
      ClearExclusiveLocal();
      iVar63 = iVar75;
      if (iVar75 == 0) break;
      goto LAB_00e7428c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar63 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar43 = *(long *)(lVar43 + 0x60);
      if (lVar43 != 0) {
        if (*(char *)((long)param_1 + 0x9c) != '\0') {
          fVar86 = -fVar86;
        }
        *(float *)(param_1 + 0x13) = *(float *)(param_1 + 0x13) + fVar86;
        uVar49 = FUN_00e75650(param_1);
        *(undefined4 *)(param_1 + 0x13) = uVar49;
        plVar46 = (long *)(lVar43 + -8);
        (**(code **)(*plVar46 + 0x18))(plVar46);
LAB_00e74310:
        local_50 = auVar51._0_4_ - local_50;
        fStack_48 = auVar51._8_4_ - fStack_48;
        fStack_44 = auVar51._12_4_ - fStack_44;
        auVar51._0_4_ = local_50 * local_50;
        auVar51._4_4_ = 0;
        auVar51._8_4_ = fStack_48 * fStack_48;
        auVar51._12_4_ = fStack_44 * fStack_44;
        auVar83 = NEON_ext(auVar51,auVar51,8,1);
        fVar62 = auVar83._0_4_ + auVar51._0_4_;
        fVar86 = auVar83._4_4_ + 0.0;
        fVar47 = fVar62 + fVar86;
        fVar62 = fVar62 + fVar86;
        fVar86 = 0.0;
        if (fVar47 != 0.0) {
          auVar85._8_8_ = CONCAT44(fVar62,fVar47);
          auVar85._0_8_ = CONCAT44(fVar62,fVar47);
          auVar51 = NEON_frsqrte(auVar85,4);
          auVar91._0_4_ = auVar51._0_4_ * fVar47;
          auVar91._4_4_ = auVar51._4_4_ * fVar62;
          auVar91._8_4_ = auVar51._8_4_ * fVar47;
          auVar91._12_4_ = auVar51._12_4_ * fVar62;
          auVar83 = NEON_frsqrts(auVar51,auVar91,4);
          auVar53._0_4_ = auVar51._0_4_ * auVar83._0_4_;
          auVar53._4_4_ = auVar51._4_4_ * auVar83._4_4_;
          auVar53._8_4_ = auVar51._8_4_ * auVar83._8_4_;
          auVar53._12_4_ = auVar51._12_4_ * auVar83._12_4_;
          auVar92._0_4_ = fVar47 * auVar53._0_4_;
          auVar92._4_4_ = fVar62 * auVar53._4_4_;
          auVar92._8_4_ = fVar47 * auVar53._8_4_;
          auVar92._12_4_ = fVar62 * auVar53._12_4_;
          auVar51 = NEON_frsqrts(auVar53,auVar92,4);
          local_50 = local_50 * auVar53._0_4_ * auVar51._0_4_;
          fVar86 = auVar53._4_4_ * auVar51._4_4_ * 0.0;
          fStack_48 = fStack_48 * auVar53._8_4_ * auVar51._8_4_;
          fStack_44 = fStack_44 * auVar53._12_4_ * auVar51._12_4_;
          iVar63 = -(uint)(fVar47 == 0.0);
          iVar75 = -(uint)(fVar62 == 0.0);
          iVar78 = -(uint)(fVar47 == 0.0);
          iVar79 = -(uint)(fVar62 == 0.0);
          fVar62 = (float)CONCAT13((byte)((uint)local_50 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                                   CONCAT12((byte)((uint)local_50 >> 0x10) &
                                            ~(byte)((uint)iVar63 >> 0x10),
                                            CONCAT11((byte)((uint)local_50 >> 8) &
                                                     ~(byte)((uint)iVar63 >> 8),
                                                     SUB41(local_50,0) & ~(byte)iVar63)));
          auVar67._0_8_ =
               CONCAT17((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                        CONCAT16((byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                 CONCAT15((byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                          CONCAT14(SUB41(fVar86,0) & ~(byte)iVar75,fVar62))));
          auVar67[8] = SUB41(fStack_48,0) & ~(byte)iVar78;
          auVar67[9] = (byte)((uint)fStack_48 >> 8) & ~(byte)((uint)iVar78 >> 8);
          auVar67[10] = (byte)((uint)fStack_48 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10);
          auVar67[0xb] = (byte)((uint)fStack_48 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18);
          auVar71[0xc] = SUB41(fStack_44,0) & ~(byte)iVar79;
          auVar71._0_12_ = auVar67;
          auVar71[0xd] = (byte)((uint)fStack_44 >> 8) & ~(byte)((uint)iVar79 >> 8);
          auVar71[0xe] = (byte)((uint)fStack_44 >> 0x10) & ~(byte)((uint)iVar79 >> 0x10);
          auVar71[0xf] = (byte)((uint)fStack_44 >> 0x18) & ~(byte)((uint)iVar79 >> 0x18);
          auVar54._0_4_ = fVar62 * (float)_DAT_01d49dc0;
          auVar54._4_4_ =
               (float)((ulong)auVar67._0_8_ >> 0x20) * (float)((ulong)_DAT_01d49dc0 >> 0x20);
          auVar54._8_4_ = auVar67._8_4_ * (float)_UNK_01d49dc8;
          auVar54._12_4_ = auVar71._12_4_ * (float)((ulong)_UNK_01d49dc8 >> 0x20);
          NEON_ext(auVar54,auVar54,8,1);
          fVar47 = (float)FUN_01590400();
          fVar86 = -fVar47;
          if (0.0 <= fVar62) {
            fVar86 = fVar47;
          }
        }
        auVar51 = FUN_00a92cd0(fVar86,ZEXT816(0),ZEXT816(0));
        lVar43 = param_1[0xf];
        *(undefined1 *)(lVar43 + 0xc0) = 1;
        *(long *)(lVar43 + 0xa8) = auVar51._8_8_;
        *(long *)(lVar43 + 0xa0) = auVar51._0_8_;
LAB_00e743c4:
        cVar2 = *(char *)(lVar45 + 0x35c);
joined_r0x00e7465c:
        if (cVar2 == '\0') {
LAB_00e74660:
          uVar44 = 1;
        }
        else {
LAB_00e743cc:
          uVar44 = 1;
          FUN_00db6d40(param_1[0xf],1);
        }
LAB_00e74664:
        (**(code **)(*(long *)(lVar45 + -8) + 0x18))((long *)(lVar45 + -8));
        return uVar44;
      }
      break;
    }
    iVar63 = iVar75;
  } while (iVar75 != 0);
LAB_00e74514:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


