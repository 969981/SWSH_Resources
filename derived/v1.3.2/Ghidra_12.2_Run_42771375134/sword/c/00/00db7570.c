/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db7570; name: FUN_00db7570
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00db7570(undefined8 *param_1,undefined8 *param_2,float *param_3,unkbyte9 *param_4,
                 undefined8 *param_5)

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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  undefined8 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar66;
  undefined8 uVar65;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined8 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
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
  undefined1 uVar115;
  byte bVar116;
  undefined1 uVar117;
  byte bVar118;
  undefined1 uVar119;
  undefined1 uVar120;
  undefined1 uVar121;
  undefined1 uVar122;
  undefined1 uVar123;
  undefined1 uVar124;
  undefined1 uVar125;
  undefined1 uVar126;
  undefined1 uVar127;
  undefined1 uVar128;
  undefined1 uVar129;
  undefined1 uVar130;
  undefined1 uVar131;
  undefined1 uVar132;
  undefined1 uVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  undefined8 uVar137;
  undefined8 uVar138;
  undefined8 uVar139;
  undefined8 uVar140;
  undefined8 uVar141;
  undefined8 uVar142;
  float fVar143;
  
  uVar140 = _DAT_01d4b580;
  uVar60 = DAT_01cd5418;
  uVar141 = DAT_01cd52f0;
  uVar59 = DAT_01cd5270;
  uVar58 = DAT_01cd5120;
  uVar57 = DAT_01cd50f8;
  uVar56 = DAT_01cd50b0;
  uVar83 = DAT_01cd4f90;
  uVar67 = param_2[1];
  fVar87 = (float)_UNK_01d4ae88;
  fVar89 = (float)((ulong)_UNK_01d4ae88 >> 0x20);
  fVar88 = (float)_DAT_01d4ae80;
  fVar90 = (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar64 = (float)*param_2;
  fVar66 = (float)((ulong)*param_2 >> 0x20);
  uVar72 = (undefined4)_UNK_01d4ae58;
  uVar73 = (undefined4)((ulong)_UNK_01d4ae58 >> 0x20);
  fVar61 = (fVar64 + (float)param_2[2]) * 0.5;
  fVar62 = (fVar66 + (float)((ulong)param_2[2] >> 0x20)) * 0.5;
  fVar63 = ((float)uVar67 + (float)param_2[3]) * 0.5;
  auVar1._8_4_ = uVar72;
  auVar1._0_8_ = _DAT_01d4ae50;
  auVar1._12_4_ = uVar73;
  uVar68 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
  uVar65 = *(undefined8 *)((long)param_4 + 8);
  uVar119 = (undefined1)((ulong)uVar65 >> 8);
  uVar120 = (undefined1)((ulong)uVar65 >> 0x10);
  uVar121 = (undefined1)((ulong)uVar65 >> 0x18);
  uVar122 = (undefined1)((ulong)uVar65 >> 0x20);
  uVar123 = (undefined1)((ulong)uVar65 >> 0x28);
  uVar124 = (undefined1)((ulong)uVar65 >> 0x30);
  uVar125 = (undefined1)((ulong)uVar65 >> 0x38);
  fVar86 = (float)*(undefined8 *)param_4;
  fVar75 = fVar86 * fVar88;
  fVar84 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar77 = fVar84 * fVar90;
  fVar79 = (float)uVar65 * fVar87;
  fVar81 = (float)((ulong)uVar65 >> 0x20) * fVar89;
  fVar85 = (float)((ulong)uVar68 >> 0x20);
  auVar2._8_4_ = uVar72;
  auVar2._0_8_ = _DAT_01d4ae50;
  auVar2._12_4_ = uVar73;
  uVar71 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
  auVar3._8_4_ = uVar72;
  auVar3._0_8_ = _DAT_01d4ae50;
  auVar3._12_4_ = uVar73;
  uVar69 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5418);
  auVar4._4_4_ = fVar77;
  auVar4._0_4_ = fVar75;
  auVar4._8_4_ = fVar79;
  auVar4._12_4_ = fVar81;
  uVar65 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  fVar134 = (float)((ulong)uVar69 >> 0x20);
  auVar5._4_4_ = fVar77;
  auVar5._0_4_ = fVar75;
  auVar5._8_4_ = fVar79;
  auVar5._12_4_ = fVar81;
  uVar137 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
  auVar6._4_4_ = fVar77;
  auVar6._0_4_ = fVar75;
  auVar6._8_4_ = fVar79;
  auVar6._12_4_ = fVar81;
  uVar139 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
  fVar135 = (float)((ulong)DAT_01cd5070 >> 0x20);
  auVar7._4_4_ = fVar77;
  auVar7._0_4_ = fVar75;
  auVar7._8_4_ = fVar79;
  auVar7._12_4_ = fVar81;
  uVar142 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar21[9] = uVar119;
  auVar21._0_9_ = *param_4;
  auVar21[10] = uVar120;
  auVar21[0xb] = uVar121;
  auVar21[0xc] = uVar122;
  auVar21[0xd] = uVar123;
  auVar21[0xe] = uVar124;
  auVar21[0xf] = uVar125;
  uVar51 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd4f90);
  fVar74 = (float)((ulong)uVar71 >> 0x20);
  auVar8._4_4_ = fVar77;
  auVar8._0_4_ = fVar75;
  auVar8._8_4_ = fVar79;
  auVar8._12_4_ = fVar81;
  uVar138 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
  auVar9._4_4_ = fVar77;
  auVar9._0_4_ = fVar75;
  auVar9._8_4_ = fVar75;
  auVar9._12_4_ = fVar77;
  uVar70 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50b0);
  fVar80 = (float)_UNK_01d4ae98;
  fVar82 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar76 = (float)_DAT_01d4ae90;
  fVar78 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar75 = (fVar75 * (float)uVar68 + fVar76 * (float)DAT_01cd5070 * (float)uVar65 +
           fVar76 * (float)uVar69 * (float)uVar139) - (float)uVar71 * (float)uVar142;
  fVar77 = (fVar77 * fVar85 + fVar78 * fVar135 * (float)((ulong)uVar65 >> 0x20) +
           fVar78 * fVar134 * (float)((ulong)uVar139 >> 0x20)) -
           fVar74 * (float)((ulong)uVar142 >> 0x20);
  uVar95 = SUB41(fVar77,0);
  uVar97 = (undefined1)((uint)fVar77 >> 8);
  uVar99 = (undefined1)((uint)fVar77 >> 0x10);
  uVar101 = (undefined1)((uint)fVar77 >> 0x18);
  fVar79 = (fVar79 * (float)uVar68 + fVar80 * (float)uVar71 * (float)uVar137 +
           fVar80 * (float)DAT_01cd5070 * (float)uVar70) - (float)uVar69 * (float)uVar138;
  uVar103 = SUB41(fVar79,0);
  uVar105 = (undefined1)((uint)fVar79 >> 8);
  uVar107 = (undefined1)((uint)fVar79 >> 0x10);
  uVar109 = (undefined1)((uint)fVar79 >> 0x18);
  fVar85 = (fVar81 * fVar85 + fVar82 * fVar74 * (float)((ulong)uVar137 >> 0x20) +
           fVar82 * fVar135 * (float)((ulong)uVar70 >> 0x20)) -
           fVar134 * (float)((ulong)uVar138 >> 0x20);
  uVar111 = SUB41(fVar85,0);
  uVar113 = (undefined1)((uint)fVar85 >> 8);
  uVar115 = (undefined1)((uint)fVar85 >> 0x10);
  uVar117 = (undefined1)((uint)fVar85 >> 0x18);
  fVar74 = (float)((ulong)uVar51 >> 0x20);
  auVar22[9] = uVar119;
  auVar22._0_9_ = *param_4;
  auVar22[10] = uVar120;
  auVar22[0xb] = uVar121;
  auVar22[0xc] = uVar122;
  auVar22[0xd] = uVar123;
  auVar22[0xe] = uVar124;
  auVar22[0xf] = uVar125;
  uVar71 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  auVar15[4] = uVar95;
  auVar15._0_4_ = fVar75;
  auVar15[5] = uVar97;
  auVar15[6] = uVar99;
  auVar15[7] = uVar101;
  auVar15[8] = uVar103;
  auVar15[9] = uVar105;
  auVar15[10] = uVar107;
  auVar15[0xb] = uVar109;
  auVar15[0xc] = uVar111;
  auVar15[0xd] = uVar113;
  auVar15[0xe] = uVar115;
  auVar15[0xf] = uVar117;
  uVar138 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar16[4] = uVar95;
  auVar16._0_4_ = fVar75;
  auVar16[5] = uVar97;
  auVar16[6] = uVar99;
  auVar16[7] = uVar101;
  auVar16[8] = uVar103;
  auVar16[9] = uVar105;
  auVar16[10] = uVar107;
  auVar16[0xb] = uVar109;
  auVar16[0xc] = uVar111;
  auVar16[0xd] = uVar113;
  auVar16[0xe] = uVar115;
  auVar16[0xf] = uVar117;
  uVar137 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
  fVar81 = (float)((ulong)uVar71 >> 0x20);
  auVar17[4] = uVar95;
  auVar17._0_4_ = fVar75;
  auVar17[5] = uVar97;
  auVar17[6] = uVar99;
  auVar17[7] = uVar101;
  auVar17[8] = uVar103;
  auVar17[9] = uVar105;
  auVar17[10] = uVar107;
  auVar17[0xb] = uVar109;
  auVar17[0xc] = uVar111;
  auVar17[0xd] = uVar113;
  auVar17[0xe] = uVar115;
  auVar17[0xf] = uVar117;
  uVar139 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5270);
  auVar23[9] = uVar119;
  auVar23._0_9_ = *param_4;
  auVar23[10] = uVar120;
  auVar23[0xb] = uVar121;
  auVar23[0xc] = uVar122;
  auVar23[0xd] = uVar123;
  auVar23[0xe] = uVar124;
  auVar23[0xf] = uVar125;
  uVar68 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
  auVar18[4] = uVar95;
  auVar18._0_4_ = fVar75;
  auVar18[5] = uVar97;
  auVar18[6] = uVar99;
  auVar18[7] = uVar101;
  auVar18[8] = uVar103;
  auVar18[9] = uVar105;
  auVar18[10] = uVar107;
  auVar18[0xb] = uVar109;
  auVar18[0xc] = uVar111;
  auVar18[0xd] = uVar113;
  auVar18[0xe] = uVar115;
  auVar18[0xf] = uVar117;
  uVar70 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
  auVar19[4] = uVar95;
  auVar19._0_4_ = fVar75;
  auVar19[5] = uVar97;
  auVar19[6] = uVar99;
  auVar19[7] = uVar101;
  auVar19[8] = uVar103;
  auVar19[9] = uVar105;
  auVar19[10] = uVar107;
  auVar19[0xb] = uVar109;
  auVar19[0xc] = uVar111;
  auVar19[0xd] = uVar113;
  auVar19[0xe] = uVar115;
  auVar19[0xf] = uVar117;
  uVar69 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
  auVar20[4] = uVar95;
  auVar20._0_4_ = fVar75;
  auVar20[5] = uVar97;
  auVar20[6] = uVar99;
  auVar20[7] = uVar101;
  auVar20[8] = SUB41(fVar75,0);
  auVar20[9] = (char)((uint)fVar75 >> 8);
  auVar20[10] = (char)((uint)fVar75 >> 0x10);
  auVar20[0xb] = (char)((uint)fVar75 >> 0x18);
  auVar20[0xc] = uVar95;
  auVar20[0xd] = uVar97;
  auVar20[0xe] = uVar99;
  auVar20[0xf] = uVar101;
  uVar65 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
  fVar134 = (float)((ulong)uVar68 >> 0x20);
  bVar104 = (byte)DAT_01d4ab58;
  bVar106 = (byte)((ulong)DAT_01d4ab58 >> 8);
  bVar108 = (byte)((ulong)DAT_01d4ab58 >> 0x10);
  bVar110 = (byte)((ulong)DAT_01d4ab58 >> 0x18);
  bVar112 = (byte)((ulong)DAT_01d4ab58 >> 0x20);
  bVar114 = (byte)((ulong)DAT_01d4ab58 >> 0x28);
  bVar116 = (byte)((ulong)DAT_01d4ab58 >> 0x30);
  bVar118 = (byte)((ulong)DAT_01d4ab58 >> 0x38);
  bVar91 = (byte)DAT_01d4ab50;
  bVar92 = (byte)((ulong)DAT_01d4ab50 >> 8);
  bVar93 = (byte)((ulong)DAT_01d4ab50 >> 0x10);
  bVar94 = (byte)((ulong)DAT_01d4ab50 >> 0x18);
  bVar96 = (byte)((ulong)DAT_01d4ab50 >> 0x20);
  bVar98 = (byte)((ulong)DAT_01d4ab50 >> 0x28);
  bVar100 = (byte)((ulong)DAT_01d4ab50 >> 0x30);
  bVar102 = (byte)((ulong)DAT_01d4ab50 >> 0x38);
  fVar75 = ((float)uVar51 * fVar75 + fVar76 * fVar86 * (float)uVar138 +
           fVar76 * (float)uVar68 * (float)uVar70) - (float)uVar71 * (float)uVar69;
  fVar77 = (fVar74 * fVar77 + fVar78 * fVar84 * (float)((ulong)uVar138 >> 0x20) +
           fVar78 * fVar134 * (float)((ulong)uVar70 >> 0x20)) -
           fVar81 * (float)((ulong)uVar69 >> 0x20);
  fVar79 = ((float)uVar51 * fVar79 + fVar80 * (float)uVar71 * (float)uVar137 +
           fVar80 * fVar86 * (float)uVar65) - (float)uVar68 * (float)uVar139;
  fVar85 = (fVar74 * fVar85 + fVar82 * fVar81 * (float)((ulong)uVar137 >> 0x20) +
           fVar82 * fVar84 * (float)((ulong)uVar65 >> 0x20)) -
           fVar134 * (float)((ulong)uVar139 >> 0x20);
  uVar72 = (undefined4)_UNK_01d4b588;
  uVar73 = (undefined4)((ulong)_UNK_01d4b588 >> 0x20);
  auVar52._8_4_ = uVar72;
  auVar52._0_8_ = _DAT_01d4b580;
  auVar52._12_4_ = uVar73;
  uVar137 = a64_TBL(ZEXT816(0),auVar52,DAT_01cd50f8);
  param_1[1] = CONCAT17((byte)((uint)fVar85 >> 0x18) & bVar118,
                        CONCAT16((byte)((uint)fVar85 >> 0x10) & bVar116,
                                 CONCAT15((byte)((uint)fVar85 >> 8) & bVar114,
                                          CONCAT14(SUB41(fVar85,0) & bVar112,
                                                   CONCAT13((byte)((uint)fVar79 >> 0x18) & bVar110,
                                                            CONCAT12((byte)((uint)fVar79 >> 0x10) &
                                                                     bVar108,CONCAT11((byte)((uint)
                                                  fVar79 >> 8) & bVar106,SUB41(fVar79,0) & bVar104))
                                                  )))));
  *param_1 = CONCAT17((byte)((uint)fVar77 >> 0x18) & bVar102,
                      CONCAT16((byte)((uint)fVar77 >> 0x10) & bVar100,
                               CONCAT15((byte)((uint)fVar77 >> 8) & bVar98,
                                        CONCAT14(SUB41(fVar77,0) & bVar96,
                                                 CONCAT13((byte)((uint)fVar75 >> 0x18) & bVar94,
                                                          CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                                                   bVar93,CONCAT11((byte)((uint)
                                                  fVar75 >> 8) & bVar92,SUB41(fVar75,0) & bVar91))))
                                       )));
  uVar68 = _DAT_01d49dc0;
  uVar65 = *(undefined8 *)((long)param_4 + 8);
  uVar119 = (undefined1)((ulong)uVar65 >> 8);
  uVar120 = (undefined1)((ulong)uVar65 >> 0x10);
  uVar121 = (undefined1)((ulong)uVar65 >> 0x18);
  uVar122 = (undefined1)((ulong)uVar65 >> 0x20);
  uVar123 = (undefined1)((ulong)uVar65 >> 0x28);
  uVar124 = (undefined1)((ulong)uVar65 >> 0x30);
  uVar125 = (undefined1)((ulong)uVar65 >> 0x38);
  fVar86 = (float)*(undefined8 *)param_4;
  fVar77 = fVar86 * fVar88;
  fVar84 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar79 = fVar84 * fVar90;
  uVar95 = SUB41(fVar79,0);
  uVar97 = (undefined1)((uint)fVar79 >> 8);
  uVar99 = (undefined1)((uint)fVar79 >> 0x10);
  uVar101 = (undefined1)((uint)fVar79 >> 0x18);
  fVar85 = (float)uVar65 * fVar87;
  uVar103 = SUB41(fVar85,0);
  uVar105 = (undefined1)((uint)fVar85 >> 8);
  uVar107 = (undefined1)((uint)fVar85 >> 0x10);
  uVar109 = (undefined1)((uint)fVar85 >> 0x18);
  fVar74 = (float)((ulong)uVar65 >> 0x20) * fVar89;
  uVar111 = SUB41(fVar74,0);
  uVar113 = (undefined1)((uint)fVar74 >> 8);
  uVar115 = (undefined1)((uint)fVar74 >> 0x10);
  uVar117 = (undefined1)((uint)fVar74 >> 0x18);
  auVar53._8_4_ = uVar72;
  auVar53._0_8_ = uVar140;
  auVar53._12_4_ = uVar73;
  uVar65 = a64_TBL(ZEXT816(0),auVar53,uVar83);
  auVar54._8_4_ = uVar72;
  auVar54._0_8_ = uVar140;
  auVar54._12_4_ = uVar73;
  uVar69 = a64_TBL(ZEXT816(0),auVar54,uVar60);
  fVar81 = (float)((ulong)uVar69 >> 0x20);
  fVar135 = (float)uVar141;
  fVar136 = (float)((ulong)uVar141 >> 0x20);
  auVar42[4] = uVar95;
  auVar42._0_4_ = fVar77;
  auVar42[5] = uVar97;
  auVar42[6] = uVar99;
  auVar42[7] = uVar101;
  auVar42[8] = uVar103;
  auVar42[9] = uVar105;
  auVar42[10] = uVar107;
  auVar42[0xb] = uVar109;
  auVar42[0xc] = uVar111;
  auVar42[0xd] = uVar113;
  auVar42[0xe] = uVar115;
  auVar42[0xf] = uVar117;
  uVar138 = a64_TBL(ZEXT816(0),auVar42,uVar83);
  auVar43[4] = uVar95;
  auVar43._0_4_ = fVar77;
  auVar43[5] = uVar97;
  auVar43[6] = uVar99;
  auVar43[7] = uVar101;
  auVar43[8] = uVar103;
  auVar43[9] = uVar105;
  auVar43[10] = uVar107;
  auVar43[0xb] = uVar109;
  auVar43[0xc] = uVar111;
  auVar43[0xd] = uVar113;
  auVar43[0xe] = uVar115;
  auVar43[0xf] = uVar117;
  uVar139 = a64_TBL(ZEXT816(0),auVar43,uVar58);
  fVar75 = (float)((ulong)uVar65 >> 0x20);
  auVar44[4] = uVar95;
  auVar44._0_4_ = fVar77;
  auVar44[5] = uVar97;
  auVar44[6] = uVar99;
  auVar44[7] = uVar101;
  auVar44[8] = uVar103;
  auVar44[9] = uVar105;
  auVar44[10] = uVar107;
  auVar44[0xb] = uVar109;
  auVar44[0xc] = uVar111;
  auVar44[0xd] = uVar113;
  auVar44[0xe] = uVar115;
  auVar44[0xf] = uVar117;
  uVar140 = a64_TBL(ZEXT816(0),auVar44,uVar57);
  fVar143 = (float)((ulong)uVar137 >> 0x20);
  auVar45[4] = uVar95;
  auVar45._0_4_ = fVar77;
  auVar45[5] = uVar97;
  auVar45[6] = uVar99;
  auVar45[7] = uVar101;
  auVar45[8] = uVar103;
  auVar45[9] = uVar105;
  auVar45[10] = uVar107;
  auVar45[0xb] = uVar109;
  auVar45[0xc] = uVar111;
  auVar45[0xd] = uVar113;
  auVar45[0xe] = uVar115;
  auVar45[0xf] = uVar117;
  uVar141 = a64_TBL(ZEXT816(0),auVar45,uVar60);
  auVar46[4] = uVar95;
  auVar46._0_4_ = fVar77;
  auVar46[5] = uVar97;
  auVar46[6] = uVar99;
  auVar46[7] = uVar101;
  auVar46[8] = uVar103;
  auVar46[9] = uVar105;
  auVar46[10] = uVar107;
  auVar46[0xb] = uVar109;
  auVar46[0xc] = uVar111;
  auVar46[0xd] = uVar113;
  auVar46[0xe] = uVar115;
  auVar46[0xf] = uVar117;
  uVar142 = a64_TBL(ZEXT816(0),auVar46,uVar59);
  auVar47[4] = uVar95;
  auVar47._0_4_ = fVar77;
  auVar47[5] = uVar97;
  auVar47[6] = uVar99;
  auVar47[7] = uVar101;
  auVar47[8] = SUB41(fVar77,0);
  auVar47[9] = (char)((uint)fVar77 >> 8);
  auVar47[10] = (char)((uint)fVar77 >> 0x10);
  auVar47[0xb] = (char)((uint)fVar77 >> 0x18);
  auVar47[0xc] = uVar95;
  auVar47[0xd] = uVar97;
  auVar47[0xe] = uVar99;
  auVar47[0xf] = uVar101;
  uVar70 = a64_TBL(ZEXT816(0),auVar47,uVar56);
  auVar33[9] = uVar119;
  auVar33._0_9_ = *param_4;
  auVar33[10] = uVar120;
  auVar33[0xb] = uVar121;
  auVar33[0xc] = uVar122;
  auVar33[0xd] = uVar123;
  auVar33[0xe] = uVar124;
  auVar33[0xf] = uVar125;
  uVar51 = a64_TBL(ZEXT816(0),auVar33,uVar57);
  fVar134 = (float)((ulong)uVar51 >> 0x20);
  auVar34[9] = uVar119;
  auVar34._0_9_ = *param_4;
  auVar34[10] = uVar120;
  auVar34[0xb] = uVar121;
  auVar34[0xc] = uVar122;
  auVar34[0xd] = uVar123;
  auVar34[0xe] = uVar124;
  auVar34[0xf] = uVar125;
  uVar71 = a64_TBL(ZEXT816(0),auVar34,uVar83);
  fVar77 = (fVar77 * (float)uVar65 + fVar76 * fVar135 * (float)uVar138 +
           fVar76 * (float)uVar69 * (float)uVar140) - (float)uVar137 * (float)uVar141;
  fVar79 = (fVar79 * fVar75 + fVar78 * fVar136 * (float)((ulong)uVar138 >> 0x20) +
           fVar78 * fVar81 * (float)((ulong)uVar140 >> 0x20)) -
           fVar143 * (float)((ulong)uVar141 >> 0x20);
  uVar95 = SUB41(fVar79,0);
  uVar97 = (undefined1)((uint)fVar79 >> 8);
  uVar99 = (undefined1)((uint)fVar79 >> 0x10);
  uVar101 = (undefined1)((uint)fVar79 >> 0x18);
  fVar85 = (fVar85 * (float)uVar65 + fVar80 * (float)uVar137 * (float)uVar139 +
           fVar80 * fVar135 * (float)uVar70) - (float)uVar69 * (float)uVar142;
  uVar103 = SUB41(fVar85,0);
  uVar105 = (undefined1)((uint)fVar85 >> 8);
  uVar107 = (undefined1)((uint)fVar85 >> 0x10);
  uVar109 = (undefined1)((uint)fVar85 >> 0x18);
  fVar75 = (fVar74 * fVar75 + fVar82 * fVar143 * (float)((ulong)uVar139 >> 0x20) +
           fVar82 * fVar136 * (float)((ulong)uVar70 >> 0x20)) -
           fVar81 * (float)((ulong)uVar142 >> 0x20);
  uVar111 = SUB41(fVar75,0);
  uVar113 = (undefined1)((uint)fVar75 >> 8);
  uVar115 = (undefined1)((uint)fVar75 >> 0x10);
  uVar117 = (undefined1)((uint)fVar75 >> 0x18);
  auVar24[4] = uVar95;
  auVar24._0_4_ = fVar77;
  auVar24[5] = uVar97;
  auVar24[6] = uVar99;
  auVar24[7] = uVar101;
  auVar24[8] = uVar103;
  auVar24[9] = uVar105;
  auVar24[10] = uVar107;
  auVar24[0xb] = uVar109;
  auVar24[0xc] = uVar111;
  auVar24[0xd] = uVar113;
  auVar24[0xe] = uVar115;
  auVar24[0xf] = uVar117;
  uVar138 = a64_TBL(ZEXT816(0),auVar24,uVar83);
  auVar25[4] = uVar95;
  auVar25._0_4_ = fVar77;
  auVar25[5] = uVar97;
  auVar25[6] = uVar99;
  auVar25[7] = uVar101;
  auVar25[8] = uVar103;
  auVar25[9] = uVar105;
  auVar25[10] = uVar107;
  auVar25[0xb] = uVar109;
  auVar25[0xc] = uVar111;
  auVar25[0xd] = uVar113;
  auVar25[0xe] = uVar115;
  auVar25[0xf] = uVar117;
  uVar140 = a64_TBL(ZEXT816(0),auVar25,uVar58);
  auVar26[4] = uVar95;
  auVar26._0_4_ = fVar77;
  auVar26[5] = uVar97;
  auVar26[6] = uVar99;
  auVar26[7] = uVar101;
  auVar26[8] = uVar103;
  auVar26[9] = uVar105;
  auVar26[10] = uVar107;
  auVar26[0xb] = uVar109;
  auVar26[0xc] = uVar111;
  auVar26[0xd] = uVar113;
  auVar26[0xe] = uVar115;
  auVar26[0xf] = uVar117;
  uVar137 = a64_TBL(ZEXT816(0),auVar26,uVar60);
  auVar55._4_4_ =
       (int)(CONCAT17(uVar101,CONCAT16(uVar99,CONCAT15(uVar97,CONCAT14(uVar95,fVar77)))) >> 0x20);
  auVar55._0_4_ = fVar77;
  auVar55._8_4_ = fVar77;
  auVar55._12_4_ =
       (int)(CONCAT17(uVar101,CONCAT16(uVar99,CONCAT15(uVar97,CONCAT14(uVar95,fVar77)))) >> 0x20);
  uVar69 = a64_TBL(ZEXT816(0),auVar55,uVar56);
  auVar35[9] = uVar119;
  auVar35._0_9_ = *param_4;
  auVar35[10] = uVar120;
  auVar35[0xb] = uVar121;
  auVar35[0xc] = uVar122;
  auVar35[0xd] = uVar123;
  auVar35[0xe] = uVar124;
  auVar35[0xf] = uVar125;
  uVar141 = a64_TBL(ZEXT816(0),auVar35,uVar60);
  fVar74 = (float)((ulong)uVar71 >> 0x20);
  fVar81 = (float)((ulong)uVar141 >> 0x20);
  auVar27[4] = uVar95;
  auVar27._0_4_ = fVar77;
  auVar27[5] = uVar97;
  auVar27[6] = uVar99;
  auVar27[7] = uVar101;
  auVar27[8] = uVar103;
  auVar27[9] = uVar105;
  auVar27[10] = uVar107;
  auVar27[0xb] = uVar109;
  auVar27[0xc] = uVar111;
  auVar27[0xd] = uVar113;
  auVar27[0xe] = uVar115;
  auVar27[0xf] = uVar117;
  uVar70 = a64_TBL(ZEXT816(0),auVar27,uVar57);
  auVar28[4] = uVar95;
  auVar28._0_4_ = fVar77;
  auVar28[5] = uVar97;
  auVar28[6] = uVar99;
  auVar28[7] = uVar101;
  auVar28[8] = uVar103;
  auVar28[9] = uVar105;
  auVar28[10] = uVar107;
  auVar28[0xb] = uVar109;
  auVar28[0xc] = uVar111;
  auVar28[0xd] = uVar113;
  auVar28[0xe] = uVar115;
  auVar28[0xf] = uVar117;
  uVar65 = a64_TBL(ZEXT816(0),auVar28,uVar59);
  fVar77 = ((float)uVar71 * fVar77 + fVar76 * fVar86 * (float)uVar138 +
           fVar76 * (float)uVar141 * (float)uVar70) - (float)uVar51 * (float)uVar137;
  fVar79 = (fVar74 * fVar79 + fVar78 * fVar84 * (float)((ulong)uVar138 >> 0x20) +
           fVar78 * fVar81 * (float)((ulong)uVar70 >> 0x20)) -
           fVar134 * (float)((ulong)uVar137 >> 0x20);
  fVar85 = ((float)uVar71 * fVar85 + fVar80 * (float)uVar51 * (float)uVar140 +
           fVar80 * fVar86 * (float)uVar69) - (float)uVar141 * (float)uVar65;
  fVar75 = (fVar74 * fVar75 + fVar82 * fVar134 * (float)((ulong)uVar140 >> 0x20) +
           fVar82 * fVar84 * (float)((ulong)uVar69 >> 0x20)) -
           fVar81 * (float)((ulong)uVar65 >> 0x20);
  uVar126 = (undefined1)_UNK_01d49dc8;
  uVar127 = (undefined1)((ulong)_UNK_01d49dc8 >> 8);
  uVar128 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x10);
  uVar129 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x18);
  uVar130 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x20);
  uVar131 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x28);
  uVar132 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x30);
  uVar133 = (undefined1)((ulong)_UNK_01d49dc8 >> 0x38);
  auVar48[8] = uVar126;
  auVar48._0_8_ = _DAT_01d49dc0;
  auVar48[9] = uVar127;
  auVar48[10] = uVar128;
  auVar48[0xb] = uVar129;
  auVar48[0xc] = uVar130;
  auVar48[0xd] = uVar131;
  auVar48[0xe] = uVar132;
  auVar48[0xf] = uVar133;
  uVar138 = a64_TBL(ZEXT816(0),auVar48,uVar57);
  fVar84 = (float)((ulong)uVar138 >> 0x20);
  param_1[3] = CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar118,
                        CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar116,
                                 CONCAT15((byte)((uint)fVar75 >> 8) & bVar114,
                                          CONCAT14(SUB41(fVar75,0) & bVar112,
                                                   CONCAT13((byte)((uint)fVar85 >> 0x18) & bVar110,
                                                            CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                                                     bVar108,CONCAT11((byte)((uint)
                                                  fVar85 >> 8) & bVar106,SUB41(fVar85,0) & bVar104))
                                                  )))));
  param_1[2] = CONCAT17((byte)((uint)fVar79 >> 0x18) & bVar102,
                        CONCAT16((byte)((uint)fVar79 >> 0x10) & bVar100,
                                 CONCAT15((byte)((uint)fVar79 >> 8) & bVar98,
                                          CONCAT14(SUB41(fVar79,0) & bVar96,
                                                   CONCAT13((byte)((uint)fVar77 >> 0x18) & bVar94,
                                                            CONCAT12((byte)((uint)fVar77 >> 0x10) &
                                                                     bVar93,CONCAT11((byte)((uint)
                                                  fVar77 >> 8) & bVar92,SUB41(fVar77,0) & bVar91))))
                                         )));
  uVar65 = *(undefined8 *)((long)param_4 + 8);
  uVar95 = (undefined1)((ulong)uVar65 >> 8);
  uVar97 = (undefined1)((ulong)uVar65 >> 0x10);
  uVar99 = (undefined1)((ulong)uVar65 >> 0x18);
  uVar101 = (undefined1)((ulong)uVar65 >> 0x20);
  uVar103 = (undefined1)((ulong)uVar65 >> 0x28);
  uVar105 = (undefined1)((ulong)uVar65 >> 0x30);
  uVar107 = (undefined1)((ulong)uVar65 >> 0x38);
  fVar75 = (float)*(undefined8 *)param_4;
  fVar88 = fVar75 * fVar88;
  fVar77 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  fVar90 = fVar77 * fVar90;
  uVar109 = SUB41(fVar90,0);
  uVar111 = (undefined1)((uint)fVar90 >> 8);
  uVar113 = (undefined1)((uint)fVar90 >> 0x10);
  uVar115 = (undefined1)((uint)fVar90 >> 0x18);
  fVar87 = (float)uVar65 * fVar87;
  uVar117 = SUB41(fVar87,0);
  uVar119 = (undefined1)((uint)fVar87 >> 8);
  uVar120 = (undefined1)((uint)fVar87 >> 0x10);
  uVar121 = (undefined1)((uint)fVar87 >> 0x18);
  fVar89 = (float)((ulong)uVar65 >> 0x20) * fVar89;
  uVar122 = SUB41(fVar89,0);
  uVar123 = (undefined1)((uint)fVar89 >> 8);
  uVar124 = (undefined1)((uint)fVar89 >> 0x10);
  uVar125 = (undefined1)((uint)fVar89 >> 0x18);
  auVar49[8] = uVar126;
  auVar49._0_8_ = uVar68;
  auVar49[9] = uVar127;
  auVar49[10] = uVar128;
  auVar49[0xb] = uVar129;
  auVar49[0xc] = uVar130;
  auVar49[0xd] = uVar131;
  auVar49[0xe] = uVar132;
  auVar49[0xf] = uVar133;
  uVar65 = a64_TBL(ZEXT816(0),auVar49,uVar83);
  fVar79 = (float)((ulong)uVar65 >> 0x20);
  auVar36[4] = uVar109;
  auVar36._0_4_ = fVar88;
  auVar36[5] = uVar111;
  auVar36[6] = uVar113;
  auVar36[7] = uVar115;
  auVar36[8] = uVar117;
  auVar36[9] = uVar119;
  auVar36[10] = uVar120;
  auVar36[0xb] = uVar121;
  auVar36[0xc] = uVar122;
  auVar36[0xd] = uVar123;
  auVar36[0xe] = uVar124;
  auVar36[0xf] = uVar125;
  uVar137 = a64_TBL(ZEXT816(0),auVar36,uVar83);
  auVar37[4] = uVar109;
  auVar37._0_4_ = fVar88;
  auVar37[5] = uVar111;
  auVar37[6] = uVar113;
  auVar37[7] = uVar115;
  auVar37[8] = uVar117;
  auVar37[9] = uVar119;
  auVar37[10] = uVar120;
  auVar37[0xb] = uVar121;
  auVar37[0xc] = uVar122;
  auVar37[0xd] = uVar123;
  auVar37[0xe] = uVar124;
  auVar37[0xf] = uVar125;
  uVar141 = a64_TBL(ZEXT816(0),auVar37,uVar58);
  auVar50[8] = uVar126;
  auVar50._0_8_ = uVar68;
  auVar50[9] = uVar127;
  auVar50[10] = uVar128;
  auVar50[0xb] = uVar129;
  auVar50[0xc] = uVar130;
  auVar50[0xd] = uVar131;
  auVar50[0xe] = uVar132;
  auVar50[0xf] = uVar133;
  uVar69 = a64_TBL(ZEXT816(0),auVar50,uVar60);
  auVar38[4] = uVar109;
  auVar38._0_4_ = fVar88;
  auVar38[5] = uVar111;
  auVar38[6] = uVar113;
  auVar38[7] = uVar115;
  auVar38[8] = uVar117;
  auVar38[9] = uVar119;
  auVar38[10] = uVar120;
  auVar38[0xb] = uVar121;
  auVar38[0xc] = uVar122;
  auVar38[0xd] = uVar123;
  auVar38[0xe] = uVar124;
  auVar38[0xf] = uVar125;
  uVar68 = a64_TBL(ZEXT816(0),auVar38,uVar59);
  fVar74 = (float)((ulong)uVar69 >> 0x20);
  auVar39[4] = uVar109;
  auVar39._0_4_ = fVar88;
  auVar39[5] = uVar111;
  auVar39[6] = uVar113;
  auVar39[7] = uVar115;
  auVar39[8] = uVar117;
  auVar39[9] = uVar119;
  auVar39[10] = uVar120;
  auVar39[0xb] = uVar121;
  auVar39[0xc] = uVar122;
  auVar39[0xd] = uVar123;
  auVar39[0xe] = uVar124;
  auVar39[0xf] = uVar125;
  uVar139 = a64_TBL(ZEXT816(0),auVar39,uVar60);
  auVar40[4] = uVar109;
  auVar40._0_4_ = fVar88;
  auVar40[5] = uVar111;
  auVar40[6] = uVar113;
  auVar40[7] = uVar115;
  auVar40[8] = uVar117;
  auVar40[9] = uVar119;
  auVar40[10] = uVar120;
  auVar40[0xb] = uVar121;
  auVar40[0xc] = uVar122;
  auVar40[0xd] = uVar123;
  auVar40[0xe] = uVar124;
  auVar40[0xf] = uVar125;
  uVar140 = a64_TBL(ZEXT816(0),auVar40,uVar57);
  auVar41[4] = uVar109;
  auVar41._0_4_ = fVar88;
  auVar41[5] = uVar111;
  auVar41[6] = uVar113;
  auVar41[7] = uVar115;
  auVar41[8] = SUB41(fVar88,0);
  auVar41[9] = (char)((uint)fVar88 >> 8);
  auVar41[10] = (char)((uint)fVar88 >> 0x10);
  auVar41[0xb] = (char)((uint)fVar88 >> 0x18);
  auVar41[0xc] = uVar109;
  auVar41[0xd] = uVar111;
  auVar41[0xe] = uVar113;
  auVar41[0xf] = uVar115;
  uVar70 = a64_TBL(ZEXT816(0),auVar41,uVar56);
  auVar29[9] = uVar95;
  auVar29._0_9_ = *param_4;
  auVar29[10] = uVar97;
  auVar29[0xb] = uVar99;
  auVar29[0xc] = uVar101;
  auVar29[0xd] = uVar103;
  auVar29[0xe] = uVar105;
  auVar29[0xf] = uVar107;
  uVar51 = a64_TBL(ZEXT816(0),auVar29,uVar57);
  auVar30[9] = uVar95;
  auVar30._0_9_ = *param_4;
  auVar30[10] = uVar97;
  auVar30[0xb] = uVar99;
  auVar30[0xc] = uVar101;
  auVar30[0xd] = uVar103;
  auVar30[0xe] = uVar105;
  auVar30[0xf] = uVar107;
  uVar71 = a64_TBL(ZEXT816(0),auVar30,uVar83);
  fVar85 = (fVar88 * (float)uVar65 + fVar76 * (float)uVar137 * 0.0 +
           fVar76 * (float)uVar69 * (float)uVar140) - (float)uVar138 * (float)uVar139;
  fVar86 = (fVar90 * fVar79 + fVar78 * (float)((ulong)uVar137 >> 0x20) * 0.0 +
           fVar78 * fVar74 * (float)((ulong)uVar140 >> 0x20)) -
           fVar84 * (float)((ulong)uVar139 >> 0x20);
  fVar88 = (fVar87 * (float)uVar65 + fVar80 * (float)uVar138 * (float)uVar141 +
           fVar80 * (float)uVar70 * 0.0) - (float)uVar69 * (float)uVar68;
  fVar90 = (fVar89 * fVar79 + fVar82 * fVar84 * (float)((ulong)uVar141 >> 0x20) +
           fVar82 * (float)((ulong)uVar70 >> 0x20) * 0.0) - fVar74 * (float)((ulong)uVar68 >> 0x20);
  fVar87 = (float)((ulong)uVar51 >> 0x20);
  auVar10._4_4_ = fVar86;
  auVar10._0_4_ = fVar85;
  auVar10._8_4_ = fVar88;
  auVar10._12_4_ = fVar90;
  uVar138 = a64_TBL(ZEXT816(0),auVar10,uVar83);
  auVar11._4_4_ = fVar86;
  auVar11._0_4_ = fVar85;
  auVar11._8_4_ = fVar88;
  auVar11._12_4_ = fVar90;
  uVar68 = a64_TBL(ZEXT816(0),auVar11,uVar58);
  auVar31[9] = uVar95;
  auVar31._0_9_ = *param_4;
  auVar31[10] = uVar97;
  auVar31[0xb] = uVar99;
  auVar31[0xc] = uVar101;
  auVar31[0xd] = uVar103;
  auVar31[0xe] = uVar105;
  auVar31[0xf] = uVar107;
  uVar83 = a64_TBL(ZEXT816(0),auVar31,uVar60);
  auVar12._4_4_ = fVar86;
  auVar12._0_4_ = fVar85;
  auVar12._8_4_ = fVar88;
  auVar12._12_4_ = fVar90;
  uVar141 = a64_TBL(ZEXT816(0),auVar12,uVar60);
  auVar13._4_4_ = fVar86;
  auVar13._0_4_ = fVar85;
  auVar13._8_4_ = fVar88;
  auVar13._12_4_ = fVar90;
  uVar69 = a64_TBL(ZEXT816(0),auVar13,uVar57);
  uVar95 = (undefined1)((uint)fVar86 >> 8);
  uVar97 = (undefined1)((uint)fVar86 >> 0x10);
  uVar99 = (undefined1)((uint)fVar86 >> 0x18);
  fVar79 = (float)((ulong)uVar71 >> 0x20);
  auVar32[4] = SUB41(fVar86,0);
  auVar32._0_4_ = fVar85;
  auVar32[5] = uVar95;
  auVar32[6] = uVar97;
  auVar32[7] = uVar99;
  auVar32[8] = SUB41(fVar85,0);
  auVar32[9] = (char)((uint)fVar85 >> 8);
  auVar32[10] = (char)((uint)fVar85 >> 0x10);
  auVar32[0xb] = (char)((uint)fVar85 >> 0x18);
  auVar32[0xc] = SUB41(fVar86,0);
  auVar32[0xd] = uVar95;
  auVar32[0xe] = uVar97;
  auVar32[0xf] = uVar99;
  uVar65 = a64_TBL(ZEXT816(0),auVar32,uVar56);
  auVar14._4_4_ = fVar86;
  auVar14._0_4_ = fVar85;
  auVar14._8_4_ = fVar88;
  auVar14._12_4_ = fVar90;
  uVar70 = a64_TBL(ZEXT816(0),auVar14,uVar59);
  fVar84 = (float)((ulong)uVar83 >> 0x20);
  fVar85 = ((float)uVar71 * fVar85 + fVar76 * fVar75 * (float)uVar138 +
           fVar76 * (float)uVar83 * (float)uVar69) - (float)uVar51 * (float)uVar141;
  fVar86 = (fVar79 * fVar86 + fVar78 * fVar77 * (float)((ulong)uVar138 >> 0x20) +
           fVar78 * fVar84 * (float)((ulong)uVar69 >> 0x20)) -
           fVar87 * (float)((ulong)uVar141 >> 0x20);
  fVar75 = ((float)uVar71 * fVar88 + fVar80 * (float)uVar51 * (float)uVar68 +
           fVar80 * fVar75 * (float)uVar65) - (float)uVar83 * (float)uVar70;
  fVar77 = (fVar79 * fVar90 + fVar82 * fVar87 * (float)((ulong)uVar68 >> 0x20) +
           fVar82 * fVar77 * (float)((ulong)uVar65 >> 0x20)) -
           fVar84 * (float)((ulong)uVar70 >> 0x20);
  param_1[5] = CONCAT17((byte)((uint)fVar77 >> 0x18) & bVar118,
                        CONCAT16((byte)((uint)fVar77 >> 0x10) & bVar116,
                                 CONCAT15((byte)((uint)fVar77 >> 8) & bVar114,
                                          CONCAT14(SUB41(fVar77,0) & bVar112,
                                                   CONCAT13((byte)((uint)fVar75 >> 0x18) & bVar110,
                                                            CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                                                     bVar108,CONCAT11((byte)((uint)
                                                  fVar75 >> 8) & bVar106,SUB41(fVar75,0) & bVar104))
                                                  )))));
  param_1[4] = CONCAT17((byte)((uint)fVar86 >> 0x18) & bVar102,
                        CONCAT16((byte)((uint)fVar86 >> 0x10) & bVar100,
                                 CONCAT15((byte)((uint)fVar86 >> 8) & bVar98,
                                          CONCAT14(SUB41(fVar86,0) & bVar96,
                                                   CONCAT13((byte)((uint)fVar85 >> 0x18) & bVar94,
                                                            CONCAT12((byte)((uint)fVar85 >> 0x10) &
                                                                     bVar93,CONCAT11((byte)((uint)
                                                  fVar85 >> 8) & bVar92,SUB41(fVar85,0) & bVar91))))
                                         )));
  *(float *)(param_1 + 6) = (fVar61 - fVar64) * *param_3;
  *(float *)((long)param_1 + 0x34) = (fVar62 - fVar66) * param_3[1];
  *(float *)(param_1 + 7) = (fVar63 - (float)uVar67) * param_3[2];
  uVar65 = *param_5;
  uVar70 = param_5[2];
  uVar71 = param_5[4];
  uVar69 = param_5[6];
  param_1[9] = CONCAT44((float)((ulong)param_5[7] >> 0x20) +
                        (float)((ulong)param_5[1] >> 0x20) * fVar61 +
                        (float)((ulong)param_5[3] >> 0x20) * fVar62 +
                        (float)((ulong)param_5[5] >> 0x20) * fVar63,
                        (float)param_5[7] +
                        (float)param_5[1] * fVar61 + (float)param_5[3] * fVar62 +
                        (float)param_5[5] * fVar63);
  param_1[8] = CONCAT44((float)((ulong)uVar69 >> 0x20) +
                        (float)((ulong)uVar65 >> 0x20) * fVar61 +
                        (float)((ulong)uVar70 >> 0x20) * fVar62 +
                        (float)((ulong)uVar71 >> 0x20) * fVar63,
                        (float)uVar69 +
                        (float)uVar65 * fVar61 + (float)uVar70 * fVar62 + (float)uVar71 * fVar63);
  return;
}


