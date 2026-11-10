/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e8d8e0; name: FUN_00e8d8e0
 */


/* WARNING: Removing unreachable block (ram,0x00e8db98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00e8d8e0(undefined1 param_1 [16],long *param_2,unkbyte9 *param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined *puVar35;
  undefined *puVar36;
  undefined8 uVar37;
  long lVar38;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  float fVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  float fVar93;
  undefined8 uVar92;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  undefined1 uVar103;
  byte bVar104;
  undefined1 uVar105;
  byte bVar106;
  undefined1 uVar107;
  byte bVar108;
  undefined1 uVar109;
  byte bVar110;
  undefined1 uVar111;
  byte bVar112;
  undefined1 uVar113;
  byte bVar114;
  float fVar116;
  undefined8 uVar115;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  float fVar124;
  float fVar125;
  undefined8 uVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  undefined8 uVar129;
  float fVar130;
  undefined8 uVar131;
  undefined8 uVar132;
  undefined8 uVar133;
  float fVar134;
  
  lVar38 = *param_2;
  *(undefined8 *)(lVar38 + 0x18) = *(undefined8 *)((long)param_3 + 8);
  *(undefined8 *)(lVar38 + 0x10) = *(undefined8 *)param_3;
  *(undefined8 *)(lVar38 + 0x28) = *(undefined8 *)(*param_4 + 8);
  *(undefined8 *)(lVar38 + 0x20) = *(undefined8 *)*param_4;
  FUN_00a92cd0(param_1,ZEXT816(0),0);
  uVar37 = *(undefined8 *)((long)param_3 + 8);
  uVar101 = (undefined1)((ulong)uVar37 >> 8);
  uVar103 = (undefined1)((ulong)uVar37 >> 0x10);
  uVar105 = (undefined1)((ulong)uVar37 >> 0x18);
  uVar107 = (undefined1)((ulong)uVar37 >> 0x20);
  uVar109 = (undefined1)((ulong)uVar37 >> 0x28);
  uVar111 = (undefined1)((ulong)uVar37 >> 0x30);
  uVar113 = (undefined1)((ulong)uVar37 >> 0x38);
  auVar39._0_4_ = extraout_s0 * (float)_DAT_01d4b570;
  auVar39._4_4_ = extraout_var * (float)((ulong)_DAT_01d4b570 >> 0x20);
  auVar39._8_4_ = extraout_var_00 * (float)_UNK_01d4b578;
  auVar39._12_4_ = extraout_var_01 * (float)((ulong)_UNK_01d4b578 >> 0x20);
  auVar41 = NEON_ext(auVar39,auVar39,8,1);
  auVar4 = *param_4;
  fVar77 = auVar4._0_4_;
  fVar74 = (float)*(undefined8 *)param_3;
  fVar45 = fVar74 * fVar77;
  fVar44 = auVar4._4_4_;
  fVar76 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar46 = fVar76 * fVar44;
  fVar47 = (float)uVar37 * auVar4._8_4_;
  fVar80 = (float)((ulong)uVar37 >> 0x20);
  fVar48 = fVar80 * auVar4._12_4_;
  auVar49._4_4_ = fVar46;
  auVar49._0_4_ = fVar45;
  auVar49._8_4_ = fVar47;
  auVar49._12_4_ = fVar48;
  auVar1._4_4_ = fVar46;
  auVar1._0_4_ = fVar45;
  auVar1._8_4_ = fVar47;
  auVar1._12_4_ = fVar48;
  auVar49 = NEON_ext(auVar49,auVar1,8,1);
  if (0.0 <= (auVar41._0_4_ + auVar39._0_4_ + auVar41._4_4_ + auVar39._4_4_) -
             (auVar49._0_4_ + fVar45 + auVar49._4_4_ + fVar46)) {
    fVar122 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
    fVar119 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar58 = (undefined1)_UNK_01d49dc8;
    uVar60 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
    uVar62 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
    uVar64 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
    uVar66 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
    uVar68 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
    uVar70 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
    uVar72 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
    fVar45 = fVar74 * (float)_DAT_01d4ae80;
    fVar47 = fVar76 * fVar119;
    fVar78 = (float)uVar37 * (float)_UNK_01d4ae88;
    fVar80 = fVar80 * fVar122;
    auVar8._4_4_ = fVar47;
    auVar8._0_4_ = fVar45;
    auVar8._8_4_ = fVar78;
    auVar8._12_4_ = fVar80;
    uVar82 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5120);
    auVar41[8] = uVar58;
    auVar41._0_8_ = _DAT_01d49dc0;
    auVar41[9] = uVar60;
    auVar41[10] = uVar62;
    auVar41[0xb] = uVar64;
    auVar41[0xc] = uVar66;
    auVar41[0xd] = uVar68;
    auVar41[0xe] = uVar70;
    auVar41[0xf] = uVar72;
    uVar83 = a64_TBL(ZEXT816(0),auVar41,DAT_01cd5418);
    auVar2[8] = uVar58;
    auVar2._0_8_ = _DAT_01d49dc0;
    auVar2[9] = uVar60;
    auVar2[10] = uVar62;
    auVar2[0xb] = uVar64;
    auVar2[0xc] = uVar66;
    auVar2[0xd] = uVar68;
    auVar2[0xe] = uVar70;
    auVar2[0xf] = uVar72;
    uVar89 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    auVar3[8] = uVar58;
    auVar3._0_8_ = _DAT_01d49dc0;
    auVar3[9] = uVar60;
    auVar3[10] = uVar62;
    auVar3[0xb] = uVar64;
    auVar3[0xc] = uVar66;
    auVar3[0xd] = uVar68;
    auVar3[0xe] = uVar70;
    auVar3[0xf] = uVar72;
    uVar75 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
    auVar9._4_4_ = fVar47;
    auVar9._0_4_ = fVar45;
    auVar9._8_4_ = fVar78;
    auVar9._12_4_ = fVar80;
    uVar37 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar10._4_4_ = fVar47;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar78;
    auVar10._12_4_ = fVar80;
    uVar127 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar11._4_4_ = fVar47;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar78;
    auVar11._12_4_ = fVar80;
    uVar131 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    auVar20[9] = uVar101;
    auVar20._0_9_ = *param_3;
    auVar20[10] = uVar103;
    auVar20[0xb] = uVar105;
    auVar20[0xc] = uVar107;
    auVar20[0xd] = uVar109;
    auVar20[0xe] = uVar111;
    auVar20[0xf] = uVar113;
    uVar84 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
    fVar87 = (float)uVar89;
    fVar88 = (float)((ulong)uVar89 >> 0x20);
    fVar124 = (float)uVar75;
    fVar125 = (float)((ulong)uVar75 >> 0x20);
    auVar12._4_4_ = fVar47;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar78;
    auVar12._12_4_ = fVar80;
    uVar89 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5270);
    auVar13._4_4_ = fVar47;
    auVar13._0_4_ = fVar45;
    auVar13._8_4_ = fVar45;
    auVar13._12_4_ = fVar47;
    uVar75 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50b0);
    fVar79 = (float)_UNK_01d4ae98;
    fVar81 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar46 = (float)_DAT_01d4ae90;
    fVar48 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar93 = (float)uVar83;
    fVar116 = (float)((ulong)uVar83 >> 0x20);
    auVar21[9] = uVar101;
    auVar21._0_9_ = *param_3;
    auVar21[10] = uVar103;
    auVar21[0xb] = uVar105;
    auVar21[0xc] = uVar107;
    auVar21[0xd] = uVar109;
    auVar21[0xe] = uVar111;
    auVar21[0xf] = uVar113;
    uVar126 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    fVar117 = (fVar45 * fVar87 + fVar46 * (float)uVar37 * 0.0 + fVar46 * fVar93 * (float)uVar127) -
              fVar124 * (float)uVar131;
    fVar118 = (fVar47 * fVar88 + fVar48 * (float)((ulong)uVar37 >> 0x20) * 0.0 +
              fVar48 * fVar116 * (float)((ulong)uVar127 >> 0x20)) -
              fVar125 * (float)((ulong)uVar131 >> 0x20);
    fVar120 = (fVar78 * fVar87 + fVar79 * fVar124 * (float)uVar82 + fVar79 * (float)uVar75 * 0.0) -
              fVar93 * (float)uVar89;
    fVar121 = (fVar80 * fVar88 + fVar81 * fVar125 * (float)((ulong)uVar82 >> 0x20) +
              fVar81 * (float)((ulong)uVar75 >> 0x20) * 0.0) -
              fVar116 * (float)((ulong)uVar89 >> 0x20);
    auVar23._4_4_ = fVar118;
    auVar23._0_4_ = fVar117;
    auVar23._8_4_ = fVar120;
    auVar23._12_4_ = fVar121;
    uVar132 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
    auVar24._4_4_ = fVar118;
    auVar24._0_4_ = fVar117;
    auVar24._8_4_ = fVar120;
    auVar24._12_4_ = fVar121;
    uVar83 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5120);
    fVar45 = (float)((ulong)uVar84 >> 0x20);
    auVar34._4_4_ = fVar118;
    auVar34._0_4_ = fVar117;
    auVar34._8_4_ = fVar117;
    auVar34._12_4_ = fVar118;
    uVar127 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50b0);
    fVar130 = (float)((ulong)uVar126 >> 0x20);
    auVar22[9] = uVar101;
    auVar22._0_9_ = *param_3;
    auVar22[10] = uVar103;
    auVar22[0xb] = uVar105;
    auVar22[0xc] = uVar107;
    auVar22[0xd] = uVar109;
    auVar22[0xe] = uVar111;
    auVar22[0xf] = uVar113;
    uVar133 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
    auVar25._4_4_ = fVar118;
    auVar25._0_4_ = fVar117;
    auVar25._8_4_ = fVar120;
    auVar25._12_4_ = fVar121;
    uVar75 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar26._4_4_ = fVar118;
    auVar26._0_4_ = fVar117;
    auVar26._8_4_ = fVar120;
    auVar26._12_4_ = fVar121;
    uVar131 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
    auVar27._4_4_ = fVar118;
    auVar27._0_4_ = fVar117;
    auVar27._8_4_ = fVar120;
    auVar27._12_4_ = fVar121;
    uVar89 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5270);
    fVar80 = fVar77 * (float)_DAT_01d4ae80;
    fVar119 = fVar44 * fVar119;
    fVar47 = auVar4._8_4_ * (float)_UNK_01d4ae88;
    fVar122 = auVar4._12_4_ * fVar122;
    auVar28._4_4_ = fVar119;
    auVar28._0_4_ = fVar80;
    auVar28._8_4_ = fVar47;
    auVar28._12_4_ = fVar122;
    uVar128 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5120);
    auVar29._4_4_ = fVar119;
    auVar29._0_4_ = fVar80;
    auVar29._8_4_ = fVar47;
    auVar29._12_4_ = fVar122;
    uVar90 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd4f90);
    fVar134 = (float)((ulong)uVar133 >> 0x20);
    auVar30._4_4_ = fVar119;
    auVar30._0_4_ = fVar80;
    auVar30._8_4_ = fVar47;
    auVar30._12_4_ = fVar122;
    uVar37 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd50f8);
    auVar31._4_4_ = fVar119;
    auVar31._0_4_ = fVar80;
    auVar31._8_4_ = fVar47;
    auVar31._12_4_ = fVar122;
    uVar123 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd5418);
    auVar32._4_4_ = fVar119;
    auVar32._0_4_ = fVar80;
    auVar32._8_4_ = fVar47;
    auVar32._12_4_ = fVar122;
    uVar129 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5270);
    auVar33._4_4_ = fVar119;
    auVar33._0_4_ = fVar80;
    auVar33._8_4_ = fVar80;
    auVar33._12_4_ = fVar119;
    uVar82 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd50b0);
    uVar91 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
    fVar85 = (fVar80 * fVar87 + fVar46 * (float)uVar90 * 0.0 + fVar46 * fVar93 * (float)uVar37) -
             fVar124 * (float)uVar123;
    fVar86 = (fVar119 * fVar88 + fVar48 * (float)((ulong)uVar90 >> 0x20) * 0.0 +
             fVar48 * fVar116 * (float)((ulong)uVar37 >> 0x20)) -
             fVar125 * (float)((ulong)uVar123 >> 0x20);
    fVar87 = (fVar47 * fVar87 + fVar79 * fVar124 * (float)uVar128 + fVar79 * (float)uVar82 * 0.0) -
             fVar93 * (float)uVar129;
    fVar88 = (fVar122 * fVar88 + fVar81 * fVar125 * (float)((ulong)uVar128 >> 0x20) +
             fVar81 * (float)((ulong)uVar82 >> 0x20) * 0.0) -
             fVar116 * (float)((ulong)uVar129 >> 0x20);
    auVar14._4_4_ = fVar86;
    auVar14._0_4_ = fVar85;
    auVar14._8_4_ = fVar87;
    auVar14._12_4_ = fVar88;
    uVar90 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    auVar15._4_4_ = fVar86;
    auVar15._0_4_ = fVar85;
    auVar15._8_4_ = fVar87;
    auVar15._12_4_ = fVar88;
    uVar128 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5120);
    fVar93 = (float)((ulong)uVar91 >> 0x20);
    uVar92 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    uVar129 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar16._4_4_ = fVar86;
    auVar16._0_4_ = fVar85;
    auVar16._8_4_ = fVar87;
    auVar16._12_4_ = fVar88;
    uVar115 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    auVar17._4_4_ = fVar86;
    auVar17._0_4_ = fVar85;
    auVar17._8_4_ = fVar87;
    auVar17._12_4_ = fVar88;
    uVar82 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18._4_4_ = fVar86;
    auVar18._0_4_ = fVar85;
    auVar18._8_4_ = fVar87;
    auVar18._12_4_ = fVar88;
    uVar123 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
    auVar19._4_4_ = fVar86;
    auVar19._0_4_ = fVar85;
    auVar19._8_4_ = fVar85;
    auVar19._12_4_ = fVar86;
    uVar37 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
    fVar80 = (float)((ulong)uVar92 >> 0x20);
    fVar47 = ((float)uVar84 * fVar117 + fVar46 * fVar74 * (float)uVar132 +
             fVar46 * (float)uVar133 * (float)uVar75) - (float)uVar126 * (float)uVar131;
    fVar78 = (fVar45 * fVar118 + fVar48 * fVar76 * (float)((ulong)uVar132 >> 0x20) +
             fVar48 * fVar134 * (float)((ulong)uVar75 >> 0x20)) -
             fVar130 * (float)((ulong)uVar131 >> 0x20);
    fVar119 = ((float)uVar84 * fVar120 + fVar79 * (float)uVar126 * (float)uVar83 +
              fVar79 * fVar74 * (float)uVar127) - (float)uVar133 * (float)uVar89;
    fVar122 = (fVar45 * fVar121 + fVar81 * fVar130 * (float)((ulong)uVar83 >> 0x20) +
              fVar81 * fVar76 * (float)((ulong)uVar127 >> 0x20)) -
              fVar134 * (float)((ulong)uVar89 >> 0x20);
    fVar45 = (float)((ulong)uVar129 >> 0x20);
    fVar74 = ((float)uVar91 * fVar85 + fVar46 * fVar77 * (float)uVar90 +
             fVar46 * (float)uVar129 * (float)uVar82) - (float)uVar92 * (float)uVar115;
    fVar76 = (fVar93 * fVar86 + fVar48 * fVar44 * (float)((ulong)uVar90 >> 0x20) +
             fVar48 * fVar45 * (float)((ulong)uVar82 >> 0x20)) -
             fVar80 * (float)((ulong)uVar115 >> 0x20);
    fVar77 = ((float)uVar91 * fVar87 + fVar79 * (float)uVar92 * (float)uVar128 +
             fVar79 * fVar77 * (float)uVar37) - (float)uVar129 * (float)uVar123;
    fVar80 = (fVar93 * fVar88 + fVar81 * fVar80 * (float)((ulong)uVar128 >> 0x20) +
             fVar81 * fVar44 * (float)((ulong)uVar37 >> 0x20)) -
             fVar45 * (float)((ulong)uVar123 >> 0x20);
    bVar102 = (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar104 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar106 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar108 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar110 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar112 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar114 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
    bVar94 = (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar95 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar96 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar97 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar98 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar99 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar100 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar50 = SUB41(fVar47,0) & (byte)DAT_01d4ab50;
    bVar51 = (byte)((uint)fVar47 >> 8) & bVar94;
    bVar52 = (byte)((uint)fVar47 >> 0x10) & bVar95;
    bVar53 = (byte)((uint)fVar47 >> 0x18) & bVar96;
    bVar54 = SUB41(fVar78,0) & bVar97;
    bVar55 = (byte)((uint)fVar78 >> 8) & bVar98;
    bVar56 = (byte)((uint)fVar78 >> 0x10) & bVar99;
    bVar57 = (byte)((uint)fVar78 >> 0x18) & bVar100;
    bVar59 = SUB41(fVar119,0) & (byte)DAT_01d4ab58;
    bVar61 = (byte)((uint)fVar119 >> 8) & bVar102;
    bVar63 = (byte)((uint)fVar119 >> 0x10) & bVar104;
    bVar65 = (byte)((uint)fVar119 >> 0x18) & bVar106;
    bVar67 = SUB41(fVar122,0) & bVar108;
    bVar69 = (byte)((uint)fVar122 >> 8) & bVar110;
    bVar71 = (byte)((uint)fVar122 >> 0x10) & bVar112;
    bVar73 = (byte)((uint)fVar122 >> 0x18) & bVar114;
    auVar4[1] = bVar51;
    auVar4[0] = bVar50;
    auVar4[2] = bVar52;
    auVar4[3] = bVar53;
    auVar4[4] = bVar54;
    auVar4[5] = bVar55;
    auVar4[6] = bVar56;
    auVar4[7] = bVar57;
    auVar4[8] = bVar59;
    auVar4[9] = bVar61;
    auVar4[10] = bVar63;
    auVar4[0xb] = bVar65;
    auVar4[0xc] = bVar67;
    auVar4[0xd] = bVar69;
    auVar4[0xe] = bVar71;
    auVar4[0xf] = bVar73;
    uVar82 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    fVar74 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & bVar96,
                             CONCAT12((byte)((uint)fVar74 >> 0x10) & bVar95,
                                      CONCAT11((byte)((uint)fVar74 >> 8) & bVar94,
                                               SUB41(fVar74,0) & (byte)DAT_01d4ab50)));
    auVar40._0_8_ =
         CONCAT17((byte)((uint)fVar76 >> 0x18) & bVar100,
                  CONCAT16((byte)((uint)fVar76 >> 0x10) & bVar99,
                           CONCAT15((byte)((uint)fVar76 >> 8) & bVar98,
                                    CONCAT14(SUB41(fVar76,0) & bVar97,fVar74))));
    auVar40[8] = SUB41(fVar77,0) & (byte)DAT_01d4ab58;
    auVar40[9] = (byte)((uint)fVar77 >> 8) & bVar102;
    auVar40[10] = (byte)((uint)fVar77 >> 0x10) & bVar104;
    auVar40[0xb] = (byte)((uint)fVar77 >> 0x18) & bVar106;
    auVar42[0xc] = SUB41(fVar80,0) & bVar108;
    auVar42._0_12_ = auVar40;
    auVar42[0xd] = (byte)((uint)fVar80 >> 8) & bVar110;
    auVar42[0xe] = (byte)((uint)fVar80 >> 0x10) & bVar112;
    auVar42[0xf] = (byte)((uint)fVar80 >> 0x18) & bVar114;
    uVar37 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5418);
    auVar5[1] = bVar51;
    auVar5[0] = bVar50;
    auVar5[2] = bVar52;
    auVar5[3] = bVar53;
    auVar5[4] = bVar54;
    auVar5[5] = bVar55;
    auVar5[6] = bVar56;
    auVar5[7] = bVar57;
    auVar5[8] = bVar59;
    auVar5[9] = bVar61;
    auVar5[10] = bVar63;
    auVar5[0xb] = bVar65;
    auVar5[0xc] = bVar67;
    auVar5[0xd] = bVar69;
    auVar5[0xe] = bVar71;
    auVar5[0xf] = bVar73;
    a64_TBL(ZEXT816(0),auVar5,DAT_01cd5188);
    a64_TBL(ZEXT816(0),auVar42,DAT_01cd5158);
    uVar75 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd50f8);
    auVar6[1] = bVar51;
    auVar6[0] = bVar50;
    auVar6[2] = bVar52;
    auVar6[3] = bVar53;
    auVar6[4] = bVar54;
    auVar6[5] = bVar55;
    auVar6[6] = bVar56;
    auVar6[7] = bVar57;
    auVar6[8] = bVar59;
    auVar6[9] = bVar61;
    auVar6[10] = bVar63;
    auVar6[0xb] = bVar65;
    auVar6[0xc] = bVar67;
    auVar6[0xd] = bVar69;
    auVar6[0xe] = bVar71;
    auVar6[0xf] = bVar73;
    uVar89 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
    auVar7[1] = bVar51;
    auVar7[0] = bVar50;
    auVar7[2] = bVar52;
    auVar7[3] = bVar53;
    auVar7[4] = bVar54;
    auVar7[5] = bVar55;
    auVar7[6] = bVar56;
    auVar7[7] = bVar57;
    auVar7[8] = bVar59;
    auVar7[9] = bVar61;
    auVar7[10] = bVar63;
    auVar7[0xb] = bVar65;
    auVar7[0xc] = bVar67;
    auVar7[0xd] = bVar69;
    auVar7[0xe] = bVar71;
    auVar7[0xf] = bVar73;
    a64_TBL(ZEXT816(0),auVar7,DAT_01cd5158);
    a64_TBL(ZEXT816(0),auVar42,DAT_01cd5188);
    auVar43._0_4_ = (float)CONCAT13(bVar53,CONCAT12(bVar52,CONCAT11(bVar51,bVar50))) * fVar74;
    auVar43._4_4_ =
         (float)CONCAT13(bVar57,CONCAT12(bVar56,CONCAT11(bVar55,bVar54))) *
         (float)((ulong)auVar40._0_8_ >> 0x20);
    auVar43._8_4_ = (float)CONCAT13(bVar65,CONCAT12(bVar63,CONCAT11(bVar61,bVar59))) * auVar40._8_4_
    ;
    auVar43._12_4_ =
         (float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar67))) * auVar42._12_4_;
    auVar49 = NEON_ext(auVar43,auVar43,8,1);
    fVar76 = auVar49._0_4_ + auVar43._0_4_ + auVar49._4_4_ + auVar43._4_4_;
    fVar74 = -1.0;
    if (-1.0 <= fVar76) {
      fVar74 = fVar76;
    }
    fVar74 = acosf(fVar74);
    puVar36 = PTR_FloatDegree180_027194f0;
    puVar35 = PTR_FloatPi_02715160;
    *(undefined4 *)(lVar38 + 0x34) = 0;
    fVar74 = fVar74 * (*(float *)puVar36 / *(float *)puVar35);
    *(float *)(lVar38 + 0x38) = fVar74;
    if ((float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar75 >> 0x20) -
        (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar37 >> 0x20) <= 0.0) {
      uVar37 = 2;
    }
    else {
      uVar37 = 1;
      *(float *)(lVar38 + 0x38) = -fVar74;
    }
  }
  else {
    uVar37 = 0;
  }
  return uVar37;
}


