/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00733ed0; name: FUN_00733ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00733ed0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],undefined8 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined7 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
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
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined5 uVar36;
  undefined5 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar80;
  float fVar82;
  undefined1 auVar81 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 uVar86;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar87 [16];
  float fVar91;
  undefined8 uVar92;
  float fVar93;
  float fVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined8 uVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined8 uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  undefined8 uVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined8 uVar141;
  float fVar142;
  undefined8 uVar143;
  undefined8 uVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  
  uVar40 = DAT_01cd50b0;
  uVar32 = DAT_01cd5048;
  uVar100 = DAT_01cd4f90;
  uVar66 = param_4[3];
  uVar65 = param_3[3];
  uVar1 = param_2._0_4_;
  fVar104 = param_1._0_4_;
  uVar11 = CONCAT16(param_3[2],CONCAT15(param_3[1],CONCAT14(param_3[0],fVar104)));
  uVar36 = CONCAT14(param_2[7],CONCAT13(param_2[6],CONCAT12(param_2[5],CONCAT11(param_2[4],uVar66)))
                   );
  uVar35 = CONCAT13(param_1[6],CONCAT12(param_1[5],CONCAT11(param_1[4],uVar65)));
  uVar37 = CONCAT14(param_1[7],uVar35);
  uVar43 = (undefined4)
           (CONCAT18(param_3[7],
                     CONCAT17(param_3[6],CONCAT16(param_3[5],CONCAT15(param_3[4],uVar37)))) >> 0x28)
  ;
  uVar45 = (undefined4)((uint5)uVar36 >> 8);
  uVar47 = (undefined4)
           (CONCAT18(param_4[7],
                     CONCAT17(param_4[6],CONCAT16(param_4[5],CONCAT15(param_4[4],uVar36)))) >> 0x28)
  ;
  uVar38 = param_2._8_4_;
  param_5[1] = CONCAT44((int)(CONCAT17(uVar66,CONCAT16(param_4[2],
                                                       CONCAT15(param_4[1],
                                                                CONCAT14(param_4[0],uVar1)))) >>
                             0x20),(int)(CONCAT17(uVar65,uVar11) >> 0x20));
  *param_5 = CONCAT44(uVar1,fVar104);
  param_5[3] = CONCAT44(uVar47,uVar43);
  param_5[2] = CONCAT44(uVar45,(int)((uint5)uVar37 >> 8));
  uVar39 = param_2._12_4_;
  uVar36 = CONCAT14(param_3[0xf],
                    CONCAT13(param_3[0xe],CONCAT12(param_3[0xd],CONCAT11(param_3[0xc],param_2[0xf]))
                            ));
  uVar46 = (undefined4)((uint5)uVar36 >> 8);
  uVar48 = (undefined4)
           (CONCAT18(param_4[0xf],
                     CONCAT17(param_4[0xe],CONCAT16(param_4[0xd],CONCAT15(param_4[0xc],uVar36)))) >>
           0x28);
  param_5[5] = CONCAT17(param_4[0xb],
                        CONCAT16(param_4[10],CONCAT15(param_4[9],CONCAT14(param_4[8],param_3._8_4_))
                                ));
  param_5[4] = CONCAT17(param_2[0xb],
                        CONCAT16(param_2[10],CONCAT15(param_2[9],CONCAT14(param_2[8],param_1._8_4_))
                                ));
  param_5[7] = CONCAT17(param_4[0xf],
                        CONCAT16(param_4[0xe],
                                 CONCAT15(param_4[0xd],CONCAT14(param_4[0xc],param_3._12_4_))));
  param_5[6] = CONCAT17(param_2[0xf],
                        CONCAT16(param_2[0xe],
                                 CONCAT15(param_2[0xd],CONCAT14(param_2[0xc],param_1._12_4_))));
  uVar10 = CONCAT13(uVar65,(int3)((uint7)uVar11 >> 0x20));
  uVar41 = (undefined4)
           (CONCAT17(param_3[0xb],
                     CONCAT16(param_3[10],CONCAT15(param_3[9],CONCAT14(param_3[8],uVar10)))) >> 0x20
           );
  uVar36 = CONCAT14(uVar66,CONCAT13(param_4[2],
                                    CONCAT12(param_4[1],CONCAT11(param_4[0],param_3[0xb]))));
  uVar42 = (undefined4)((uint5)uVar36 >> 8);
  uVar44 = (undefined4)
           (CONCAT18(param_4[0xb],
                     CONCAT17(param_4[10],CONCAT16(param_4[9],CONCAT15(param_4[8],uVar36)))) >> 0x28
           );
  auVar17._4_4_ = uVar43;
  auVar17._0_4_ = uVar10;
  auVar17._8_4_ = uVar41;
  auVar17._12_4_ = uVar46;
  uVar95 = a64_TBL(ZEXT816(0),auVar17,uVar100);
  auVar18._4_4_ = uVar43;
  auVar18._0_4_ = uVar10;
  auVar18._8_4_ = uVar41;
  auVar18._12_4_ = uVar46;
  uVar141 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5128);
  auVar24._4_4_ = uVar47;
  auVar24._0_4_ = uVar42;
  auVar24._8_4_ = uVar44;
  auVar24._12_4_ = uVar48;
  uVar120 = a64_TBL(ZEXT816(0),auVar24,uVar100);
  auVar25._4_4_ = uVar47;
  auVar25._0_4_ = uVar42;
  auVar25._8_4_ = uVar44;
  auVar25._12_4_ = uVar48;
  uVar143 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5128);
  auVar19._4_4_ = uVar43;
  auVar19._0_4_ = uVar10;
  auVar19._8_4_ = uVar41;
  auVar19._12_4_ = uVar46;
  uVar92 = a64_TBL(ZEXT816(0),auVar19,uVar32);
  auVar21._4_4_ = uVar45;
  auVar21._0_4_ = uVar1;
  auVar21._8_4_ = uVar38;
  auVar21._12_4_ = uVar39;
  uVar80 = a64_TBL(ZEXT816(0),auVar21,uVar32);
  uVar86 = NEON_ext(CONCAT44(uVar43,uVar10),CONCAT44(uVar43,uVar10),4,1);
  auVar29._4_4_ = uVar45;
  auVar29._0_4_ = uVar1;
  auVar29._8_4_ = uVar1;
  auVar29._12_4_ = uVar45;
  uVar144 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5420);
  auVar30._4_4_ = uVar45;
  auVar30._0_4_ = uVar1;
  auVar30._8_4_ = uVar1;
  auVar30._12_4_ = uVar45;
  uVar31 = a64_TBL(ZEXT816(0),auVar30,uVar40);
  auVar26._4_4_ = uVar47;
  auVar26._0_4_ = uVar42;
  auVar26._8_4_ = uVar44;
  auVar26._12_4_ = uVar48;
  uVar20 = a64_TBL(ZEXT816(0),auVar26,uVar32);
  fVar114 = (float)uVar20;
  fVar115 = (float)((ulong)uVar20 >> 0x20);
  uVar125 = NEON_ext(CONCAT44(uVar47,uVar42),CONCAT44(uVar47,uVar42),4,1);
  uVar20 = NEON_ext(CONCAT44(uVar45,uVar1),CONCAT44(uVar45,uVar1),4,1);
  auVar33._4_4_ = uVar43;
  auVar33._0_4_ = uVar10;
  auVar33._8_4_ = uVar10;
  auVar33._12_4_ = uVar43;
  uVar76 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5420);
  uVar16 = param_1._0_8_;
  uVar69 = a64_TBL(ZEXT816(0),param_1,uVar32);
  auVar34._4_4_ = uVar43;
  auVar34._0_4_ = uVar10;
  auVar34._8_4_ = uVar10;
  auVar34._12_4_ = uVar43;
  uVar32 = a64_TBL(ZEXT816(0),auVar34,uVar40);
  fVar133 = (float)uVar32;
  fVar136 = (float)((ulong)uVar32 >> 0x20);
  auVar27._4_4_ = uVar47;
  auVar27._0_4_ = uVar42;
  auVar27._8_4_ = uVar42;
  auVar27._12_4_ = uVar47;
  uVar32 = a64_TBL(ZEXT816(0),auVar27,uVar40);
  fVar134 = (float)uVar32;
  fVar137 = (float)((ulong)uVar32 >> 0x20);
  auVar28._4_4_ = uVar47;
  auVar28._0_4_ = uVar42;
  auVar28._8_4_ = uVar42;
  auVar28._12_4_ = uVar47;
  uVar32 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5420);
  fVar127 = (float)uVar32;
  fVar129 = (float)((ulong)uVar32 >> 0x20);
  fVar85 = (float)uVar86;
  fVar119 = (float)uVar120;
  fVar88 = (float)((ulong)uVar86 >> 0x20);
  fVar121 = (float)((ulong)uVar120 >> 0x20);
  fVar89 = (float)uVar76;
  fVar122 = (float)uVar143;
  fVar90 = (float)((ulong)uVar76 >> 0x20);
  fVar123 = (float)((ulong)uVar143 >> 0x20);
  fVar91 = (float)uVar92;
  fVar93 = (float)((ulong)uVar92 >> 0x20);
  fVar94 = (float)uVar95;
  fVar96 = (float)((ulong)uVar95 >> 0x20);
  fVar97 = (float)uVar141;
  fVar98 = (float)((ulong)uVar141 >> 0x20);
  fVar124 = (float)uVar125;
  fVar126 = (float)((ulong)uVar125 >> 0x20);
  fVar128 = fVar91 * fVar119 - fVar94 * fVar114;
  fVar130 = fVar93 * fVar121 - fVar96 * fVar115;
  fVar131 = fVar133 * fVar122 - fVar97 * fVar134;
  fVar132 = fVar136 * fVar123 - fVar98 * fVar137;
  fVar135 = fVar85 * fVar119 - fVar124 * fVar94;
  fVar138 = fVar88 * fVar121 - fVar126 * fVar96;
  fVar139 = fVar89 * fVar122 - fVar127 * fVar97;
  fVar140 = fVar90 * fVar123 - fVar129 * fVar98;
  auVar22._4_4_ = uVar45;
  auVar22._0_4_ = uVar1;
  auVar22._8_4_ = uVar38;
  auVar22._12_4_ = uVar39;
  uVar32 = a64_TBL(ZEXT816(0),auVar22,uVar100);
  fVar105 = (float)uVar32;
  fVar107 = (float)((ulong)uVar32 >> 0x20);
  auVar23._4_4_ = uVar45;
  auVar23._0_4_ = uVar1;
  auVar23._8_4_ = uVar38;
  auVar23._12_4_ = uVar39;
  uVar32 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5128);
  fVar116 = (float)uVar32;
  fVar75 = (float)((ulong)uVar32 >> 0x20);
  uVar76 = a64_TBL(ZEXT816(0),param_1,DAT_01cd5128);
  uVar100 = a64_TBL(ZEXT816(0),param_1,uVar100);
  uVar32 = NEON_ext(uVar16,uVar16,4,1);
  fVar117 = (float)uVar32;
  fVar118 = (float)((ulong)uVar32 >> 0x20);
  fVar148 = fVar85 * fVar114 - fVar124 * fVar91;
  fVar149 = fVar88 * fVar115 - fVar126 * fVar93;
  fVar150 = fVar89 * fVar134 - fVar127 * fVar133;
  fVar151 = fVar90 * fVar137 - fVar129 * fVar136;
  fVar6 = (float)uVar20;
  fVar7 = (float)((ulong)uVar20 >> 0x20);
  fVar8 = (float)uVar144;
  fVar9 = (float)((ulong)uVar144 >> 0x20);
  fVar68 = (float)uVar80;
  fVar82 = (float)((ulong)uVar80 >> 0x20);
  fVar71 = (float)uVar31;
  fVar73 = (float)((ulong)uVar31 >> 0x20);
  auVar77._8_8_ = uVar16;
  auVar77._0_8_ = uVar16;
  uVar20 = a64_TBL(ZEXT816(0),auVar77,uVar40);
  fVar142 = ((fVar6 * fVar128 - fVar68 * fVar135) + fVar148 * fVar105) * (float)_DAT_01d4b3f0;
  fVar83 = (float)((ulong)_DAT_01d4b3f0 >> 0x20);
  fVar145 = ((fVar7 * fVar130 - fVar82 * fVar138) + fVar149 * fVar107) * fVar83;
  fVar146 = ((fVar8 * fVar131 - fVar71 * fVar139) + fVar150 * fVar116) * (float)_UNK_01d4b3f8;
  fVar84 = (float)((ulong)_UNK_01d4b3f8 >> 0x20);
  fVar147 = ((fVar9 * fVar132 - fVar73 * fVar140) + fVar151 * fVar75) * fVar84;
  uVar16 = a64_TBL(ZEXT816(0),auVar77,DAT_01cd5420);
  fVar112 = (float)uVar16;
  fVar113 = (float)((ulong)uVar16 >> 0x20);
  fVar104 = fVar104 * fVar142;
  fVar106 = (float)CONCAT13(param_1[7],(int3)((uint)uVar35 >> 8)) * fVar145;
  fVar108 = param_1._8_4_ * fVar146;
  fVar110 = param_1._12_4_ * fVar147;
  fVar99 = (float)uVar100;
  fVar101 = (float)((ulong)uVar100 >> 0x20);
  fVar102 = (float)uVar76;
  fVar103 = (float)((ulong)uVar76 >> 0x20);
  fVar67 = (float)uVar69;
  fVar70 = (float)((ulong)uVar69 >> 0x20);
  fVar72 = (float)uVar20;
  fVar74 = (float)((ulong)uVar20 >> 0x20);
  fVar12 = fVar67 * fVar105 - fVar99 * fVar68;
  fVar13 = fVar70 * fVar107 - fVar101 * fVar82;
  fVar14 = fVar72 * fVar116 - fVar102 * fVar71;
  fVar15 = fVar74 * fVar75 - fVar103 * fVar73;
  auVar78._4_4_ = fVar106;
  auVar78._0_4_ = fVar104;
  auVar78._8_4_ = fVar108;
  auVar78._12_4_ = fVar110;
  auVar87._4_4_ = fVar106;
  auVar87._0_4_ = fVar104;
  auVar87._8_4_ = fVar108;
  auVar87._12_4_ = fVar110;
  auVar78 = NEON_ext(auVar78,auVar87,8,1);
  fVar104 = auVar78._0_4_ + fVar104;
  fVar106 = auVar78._4_4_ + fVar106;
  fVar108 = fVar104 + fVar106;
  fVar104 = fVar104 + fVar106;
  fVar105 = fVar117 * fVar105 - fVar6 * fVar99;
  fVar107 = fVar118 * fVar107 - fVar7 * fVar101;
  fVar109 = fVar112 * fVar116 - fVar8 * fVar102;
  fVar111 = fVar113 * fVar75 - fVar9 * fVar103;
  fVar106 = fVar117 * fVar68 - fVar6 * fVar67;
  fVar82 = fVar118 * fVar82 - fVar7 * fVar70;
  fVar110 = fVar112 * fVar71 - fVar8 * fVar72;
  fVar116 = fVar113 * fVar73 - fVar9 * fVar74;
  auVar79._8_8_ = CONCAT44(fVar104,fVar108);
  auVar79._0_8_ = CONCAT44(fVar104,fVar108);
  auVar78 = NEON_frecpe(auVar79,4);
  iVar2 = -(uint)(fVar108 == 0.0);
  iVar3 = -(uint)(fVar104 == 0.0);
  iVar4 = -(uint)(fVar108 == 0.0);
  iVar5 = -(uint)(fVar104 == 0.0);
  auVar87 = NEON_frecps(auVar78,auVar79,4);
  auVar81._0_4_ = auVar78._0_4_ * auVar87._0_4_;
  auVar81._4_4_ = auVar78._4_4_ * auVar87._4_4_;
  auVar81._8_4_ = auVar78._8_4_ * auVar87._8_4_;
  auVar81._12_4_ = auVar78._12_4_ * auVar87._12_4_;
  bVar49 = ~(byte)iVar2;
  bVar50 = ~(byte)((uint)iVar2 >> 8);
  bVar51 = ~(byte)((uint)iVar2 >> 0x10);
  bVar52 = ~(byte)((uint)iVar2 >> 0x18);
  bVar53 = ~(byte)iVar3;
  bVar54 = ~(byte)((uint)iVar3 >> 8);
  bVar55 = ~(byte)((uint)iVar3 >> 0x10);
  bVar56 = ~(byte)((uint)iVar3 >> 0x18);
  bVar57 = ~(byte)iVar4;
  bVar58 = ~(byte)((uint)iVar4 >> 8);
  bVar59 = ~(byte)((uint)iVar4 >> 0x10);
  bVar60 = ~(byte)((uint)iVar4 >> 0x18);
  bVar61 = ~(byte)iVar5;
  bVar62 = ~(byte)((uint)iVar5 >> 8);
  bVar63 = ~(byte)((uint)iVar5 >> 0x10);
  bVar64 = ~(byte)((uint)iVar5 >> 0x18);
  fVar6 = (float)((ulong)_DAT_01d4b9d0 >> 0x20);
  fVar7 = (float)((ulong)_UNK_01d4b9d8 >> 0x20);
  auVar78 = NEON_frecps(auVar81,auVar79,4);
  fVar68 = auVar81._0_4_ * auVar78._0_4_;
  fVar71 = auVar81._4_4_ * auVar78._4_4_;
  fVar73 = auVar81._8_4_ * auVar78._8_4_;
  fVar75 = auVar81._12_4_ * auVar78._12_4_;
  fVar142 = fVar68 * fVar142;
  fVar145 = fVar71 * fVar145;
  fVar146 = fVar73 * fVar146;
  fVar147 = fVar75 * fVar147;
  fVar8 = fVar68 * ((fVar117 * fVar128 - fVar67 * fVar135) + fVar148 * fVar99) *
                   (float)_DAT_01d4b9d0;
  fVar9 = fVar71 * ((fVar118 * fVar130 - fVar70 * fVar138) + fVar149 * fVar101) * fVar6;
  fVar104 = fVar73 * ((fVar112 * fVar131 - fVar72 * fVar139) + fVar150 * fVar102) *
                     (float)_UNK_01d4b9d8;
  fVar108 = fVar75 * ((fVar113 * fVar132 - fVar74 * fVar140) + fVar151 * fVar103) * fVar7;
  fVar67 = ((fVar124 * fVar12 - fVar114 * fVar105) + fVar106 * fVar119) * (float)_DAT_01d4b3f0 *
           fVar68;
  fVar70 = ((fVar126 * fVar13 - fVar115 * fVar107) + fVar82 * fVar121) * fVar83 * fVar71;
  fVar72 = ((fVar127 * fVar14 - fVar134 * fVar109) + fVar110 * fVar122) * (float)_UNK_01d4b3f8 *
           fVar73;
  fVar74 = ((fVar129 * fVar15 - fVar137 * fVar111) + fVar116 * fVar123) * fVar84 * fVar75;
  fVar68 = ((fVar85 * fVar12 - fVar91 * fVar105) + fVar106 * fVar94) * (float)_DAT_01d4b9d0 * fVar68
  ;
  fVar71 = ((fVar88 * fVar13 - fVar93 * fVar107) + fVar82 * fVar96) * fVar6 * fVar71;
  fVar73 = ((fVar89 * fVar14 - fVar133 * fVar109) + fVar110 * fVar97) * (float)_UNK_01d4b9d8 *
           fVar73;
  fVar75 = ((fVar90 * fVar15 - fVar136 * fVar111) + fVar116 * fVar98) * fVar7 * fVar75;
  param_5[9] = CONCAT17((byte)((uint)fVar147 >> 0x18) & bVar64,
                        CONCAT16((byte)((uint)fVar147 >> 0x10) & bVar63,
                                 CONCAT15((byte)((uint)fVar147 >> 8) & bVar62,
                                          CONCAT14(SUB41(fVar147,0) & bVar61,
                                                   CONCAT13((byte)((uint)fVar146 >> 0x18) & bVar60,
                                                            CONCAT12((byte)((uint)fVar146 >> 0x10) &
                                                                     bVar59,CONCAT11((byte)((uint)
                                                  fVar146 >> 8) & bVar58,SUB41(fVar146,0) & bVar57))
                                                  )))));
  param_5[8] = CONCAT17((byte)((uint)fVar145 >> 0x18) & bVar56,
                        CONCAT16((byte)((uint)fVar145 >> 0x10) & bVar55,
                                 CONCAT15((byte)((uint)fVar145 >> 8) & bVar54,
                                          CONCAT14(SUB41(fVar145,0) & bVar53,
                                                   CONCAT13((byte)((uint)fVar142 >> 0x18) & bVar52,
                                                            CONCAT12((byte)((uint)fVar142 >> 0x10) &
                                                                     bVar51,CONCAT11((byte)((uint)
                                                  fVar142 >> 8) & bVar50,SUB41(fVar142,0) & bVar49))
                                                  )))));
  param_5[0xb] = CONCAT17((byte)((uint)fVar108 >> 0x18) & bVar64,
                          CONCAT16((byte)((uint)fVar108 >> 0x10) & bVar63,
                                   CONCAT15((byte)((uint)fVar108 >> 8) & bVar62,
                                            CONCAT14(SUB41(fVar108,0) & bVar61,
                                                     CONCAT13((byte)((uint)fVar104 >> 0x18) & bVar60
                                                              ,CONCAT12((byte)((uint)fVar104 >> 0x10
                                                                              ) & bVar59,
                                                                        CONCAT11((byte)((uint)
                                                  fVar104 >> 8) & bVar58,SUB41(fVar104,0) & bVar57))
                                                  )))));
  param_5[10] = CONCAT17((byte)((uint)fVar9 >> 0x18) & bVar56,
                         CONCAT16((byte)((uint)fVar9 >> 0x10) & bVar55,
                                  CONCAT15((byte)((uint)fVar9 >> 8) & bVar54,
                                           CONCAT14(SUB41(fVar9,0) & bVar53,
                                                    CONCAT13((byte)((uint)fVar8 >> 0x18) & bVar52,
                                                             CONCAT12((byte)((uint)fVar8 >> 0x10) &
                                                                      bVar51,CONCAT11((byte)((uint)
                                                  fVar8 >> 8) & bVar50,SUB41(fVar8,0) & bVar49))))))
                        );
  param_5[0xd] = CONCAT17((byte)((uint)fVar74 >> 0x18) & bVar64,
                          CONCAT16((byte)((uint)fVar74 >> 0x10) & bVar63,
                                   CONCAT15((byte)((uint)fVar74 >> 8) & bVar62,
                                            CONCAT14(SUB41(fVar74,0) & bVar61,
                                                     CONCAT13((byte)((uint)fVar72 >> 0x18) & bVar60,
                                                              CONCAT12((byte)((uint)fVar72 >> 0x10)
                                                                       & bVar59,CONCAT11((byte)((
                                                  uint)fVar72 >> 8) & bVar58,
                                                  SUB41(fVar72,0) & bVar57)))))));
  param_5[0xc] = CONCAT17((byte)((uint)fVar70 >> 0x18) & bVar56,
                          CONCAT16((byte)((uint)fVar70 >> 0x10) & bVar55,
                                   CONCAT15((byte)((uint)fVar70 >> 8) & bVar54,
                                            CONCAT14(SUB41(fVar70,0) & bVar53,
                                                     CONCAT13((byte)((uint)fVar67 >> 0x18) & bVar52,
                                                              CONCAT12((byte)((uint)fVar67 >> 0x10)
                                                                       & bVar51,CONCAT11((byte)((
                                                  uint)fVar67 >> 8) & bVar50,
                                                  SUB41(fVar67,0) & bVar49)))))));
  param_5[0xf] = CONCAT17((byte)((uint)fVar75 >> 0x18) & bVar64,
                          CONCAT16((byte)((uint)fVar75 >> 0x10) & bVar63,
                                   CONCAT15((byte)((uint)fVar75 >> 8) & bVar62,
                                            CONCAT14(SUB41(fVar75,0) & bVar61,
                                                     CONCAT13((byte)((uint)fVar73 >> 0x18) & bVar60,
                                                              CONCAT12((byte)((uint)fVar73 >> 0x10)
                                                                       & bVar59,CONCAT11((byte)((
                                                  uint)fVar73 >> 8) & bVar58,
                                                  SUB41(fVar73,0) & bVar57)))))));
  param_5[0xe] = CONCAT17((byte)((uint)fVar71 >> 0x18) & bVar56,
                          CONCAT16((byte)((uint)fVar71 >> 0x10) & bVar55,
                                   CONCAT15((byte)((uint)fVar71 >> 8) & bVar54,
                                            CONCAT14(SUB41(fVar71,0) & bVar53,
                                                     CONCAT13((byte)((uint)fVar68 >> 0x18) & bVar52,
                                                              CONCAT12((byte)((uint)fVar68 >> 0x10)
                                                                       & bVar51,CONCAT11((byte)((
                                                  uint)fVar68 >> 8) & bVar50,
                                                  SUB41(fVar68,0) & bVar49)))))));
  return;
}


