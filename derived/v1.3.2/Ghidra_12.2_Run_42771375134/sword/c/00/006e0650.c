/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e0650; name: FUN_006e0650
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_006e0650(long param_1,unkbyte9 *param_2,float *param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined1 auVar20 [16];
  unkbyte9 Var21;
  undefined5 uVar22;
  undefined5 uVar23;
  int iVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 uVar72;
  float fVar74;
  float fVar75;
  undefined1 auVar73 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  undefined1 in_q16 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined8 uVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined8 uVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined8 uVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined8 uVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  undefined8 uVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  undefined8 uVar136;
  float fVar144;
  undefined1 in_q26 [16];
  undefined1 auVar140 [16];
  undefined1 auVar139 [16];
  undefined1 auVar138 [16];
  undefined1 auVar137 [16];
  undefined1 auVar141 [16];
  float fVar143;
  float fVar145;
  undefined1 auVar142 [16];
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  undefined8 uVar150;
  undefined8 uVar151;
  undefined8 uVar152;
  undefined8 uVar153;
  undefined8 uVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  float fVar162;
  undefined8 uVar163;
  float fVar164;
  float fVar165;
  
  if ((*(long *)(param_1 + 0x148) == 0) || (*(long *)(param_1 + 0x150) == 0)) {
    uVar26 = 0;
    uVar27 = 0;
  }
  else {
    uVar72 = *(undefined8 *)((long)param_2 + 8);
    auVar73 = *(undefined1 (*) [16])(param_2 + 1);
    uVar6 = *(undefined8 *)((long)param_2 + 0x28);
    uVar50 = (undefined1)((ulong)uVar6 >> 0x18);
    uVar7 = *(undefined8 *)(param_2 + 2);
    Var21 = param_2[2];
    auVar20 = *(undefined1 (*) [16])(param_2 + 3);
    fVar34 = auVar73._8_4_;
    fVar28 = auVar73._0_4_;
    fVar31 = auVar73._4_4_;
    fVar36 = auVar20._0_4_;
    fVar43 = auVar20._4_4_;
    fVar29 = (float)*param_2;
    uVar32 = (undefined4)((unkuint9)*param_2 >> 0x20);
    fVar37 = (float)Var21;
    uVar38 = (undefined4)((unkuint9)Var21 >> 0x20);
    fVar9 = (float)uVar72;
    uVar33 = (undefined4)
             (CONCAT17(uVar50,CONCAT16((char)((ulong)uVar6 >> 0x10),
                                       CONCAT15((char)((ulong)uVar6 >> 8),
                                                CONCAT14((char)uVar6,fVar9)))) >> 0x20);
    uVar39 = (undefined4)
             (CONCAT17(auVar20[0xb],
                       CONCAT16(auVar20[10],CONCAT15(auVar20[9],CONCAT14(auVar20[8],fVar34)))) >>
             0x20);
    auVar98._4_12_ = in_q16._4_12_;
    auVar98._0_4_ = fVar29;
    auVar100._12_4_ = in_q16._12_4_;
    auVar100._0_8_ = auVar98._0_8_;
    auVar100._8_4_ = fVar37;
    auVar99._8_8_ = auVar100._8_8_;
    auVar99._0_8_ = CONCAT44(fVar28,fVar29);
    auVar101._0_12_ = auVar99._0_12_;
    auVar101._12_4_ = fVar36;
    uVar22 = CONCAT14(auVar73[0xf],
                      CONCAT13(auVar73[0xe],
                               CONCAT12(auVar73[0xd],CONCAT11(auVar73[0xc],auVar20[0xb]))));
    uVar23 = CONCAT14((char)((ulong)uVar72 >> 0x38),
                      CONCAT13((char)((ulong)uVar72 >> 0x30),
                               CONCAT12((char)((ulong)uVar72 >> 0x28),
                                        CONCAT11((char)((ulong)uVar72 >> 0x20),uVar50))));
    uVar35 = (undefined4)((uint5)uVar23 >> 8);
    auVar137._4_12_ = in_q26._4_12_;
    auVar137._0_4_ = uVar35;
    auVar139._12_4_ = in_q26._12_4_;
    auVar139._0_8_ = auVar137._0_8_;
    auVar139._8_4_ =
         (int)(CONCAT18((char)((ulong)uVar6 >> 0x38),
                        CONCAT17((char)((ulong)uVar6 >> 0x30),
                                 CONCAT16((char)((ulong)uVar6 >> 0x28),
                                          CONCAT15((char)((ulong)uVar6 >> 0x20),uVar23)))) >> 0x28);
    auVar138._8_8_ = auVar139._8_8_;
    auVar138._0_8_ = CONCAT44((int)((uint5)uVar22 >> 8),uVar35);
    auVar140._0_12_ = auVar138._0_12_;
    auVar140._12_4_ =
         (int)(CONCAT18(auVar20[0xf],
                        CONCAT17(auVar20[0xe],CONCAT16(auVar20[0xd],CONCAT15(auVar20[0xc],uVar22))))
              >> 0x28);
    uVar19 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd5128);
    auVar14._4_4_ = fVar31;
    auVar14._0_4_ = uVar32;
    auVar14._8_4_ = uVar38;
    auVar14._12_4_ = fVar43;
    uVar12 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    fVar60 = (float)uVar12;
    fVar63 = (float)((ulong)uVar12 >> 0x20);
    auVar142._4_4_ = fVar34;
    auVar142._0_4_ = fVar9;
    auVar142._8_4_ = uVar33;
    auVar142._12_4_ = uVar39;
    uVar150 = a64_TBL(ZEXT816(0),auVar142,DAT_01cd5128);
    uVar163 = a64_TBL(ZEXT816(0),auVar140,DAT_01cd5128);
    auVar15._4_4_ = fVar31;
    auVar15._0_4_ = uVar32;
    auVar15._8_4_ = uVar38;
    auVar15._12_4_ = fVar43;
    uVar131 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5128);
    auVar160._8_8_ = CONCAT44(fVar34,fVar9);
    auVar160._0_8_ = CONCAT44(fVar34,fVar9);
    uVar12 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd4f90);
    fVar66 = (float)uVar131;
    fVar69 = (float)((ulong)uVar131 >> 0x20);
    auVar161._4_4_ = fVar34;
    auVar161._0_4_ = fVar9;
    auVar161._8_4_ = uVar33;
    auVar161._12_4_ = uVar39;
    uVar113 = a64_TBL(ZEXT816(0),auVar161,DAT_01cd4f90);
    uVar131 = NEON_ext(CONCAT44(fVar34,fVar9),CONCAT44(fVar34,fVar9),4,1);
    fVar103 = (float)uVar131;
    fVar104 = (float)((ulong)uVar131 >> 0x20);
    auVar13._4_4_ = fVar34;
    auVar13._0_4_ = fVar9;
    auVar13._8_4_ = uVar33;
    auVar13._12_4_ = uVar39;
    uVar108 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5048);
    uVar131 = a64_TBL(ZEXT816(0),auVar140,DAT_01cd5048);
    fVar117 = (float)uVar131;
    fVar118 = (float)((ulong)uVar131 >> 0x20);
    uVar122 = NEON_ext(auVar138._0_8_,auVar138._0_8_,4,1);
    uVar127 = a64_TBL(ZEXT816(0),auVar140,DAT_01cd4f90);
    auVar141._8_8_ = auVar138._0_8_;
    auVar141._0_8_ = auVar138._0_8_;
    uVar131 = NEON_ext(CONCAT44(fVar31,uVar32),CONCAT44(fVar31,uVar32),4,1);
    uVar151 = a64_TBL(ZEXT816(0),auVar160,DAT_01cd5420);
    auVar16._4_4_ = fVar31;
    auVar16._0_4_ = uVar32;
    auVar16._8_4_ = uVar38;
    auVar16._12_4_ = fVar43;
    uVar153 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5048);
    fVar132 = (float)uVar153;
    fVar134 = (float)((ulong)uVar153 >> 0x20);
    fVar105 = (float)uVar151;
    fVar106 = (float)((ulong)uVar151 >> 0x20);
    uVar152 = a64_TBL(ZEXT816(0),auVar160,DAT_01cd50b0);
    auVar161 = NEON_fmov(0x3f800000,4);
    uVar153 = a64_TBL(ZEXT816(0),auVar141,DAT_01cd50b0);
    uVar136 = a64_TBL(ZEXT816(0),auVar141,DAT_01cd5420);
    uVar151 = a64_TBL(ZEXT816(0),auVar101,DAT_01cd5048);
    fVar119 = (float)uVar153;
    fVar120 = (float)((ulong)uVar153 >> 0x20);
    auVar17._4_4_ = fVar31;
    auVar17._0_4_ = uVar32;
    auVar17._8_4_ = uVar32;
    auVar17._12_4_ = fVar31;
    uVar154 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
    auVar18._4_4_ = fVar31;
    auVar18._0_4_ = uVar32;
    auVar18._8_4_ = uVar32;
    auVar18._12_4_ = fVar31;
    uVar153 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5420);
    fVar42 = (float)uVar154;
    fVar78 = (float)((ulong)uVar154 >> 0x20);
    fVar107 = (float)uVar108;
    fVar126 = (float)uVar127;
    fVar109 = (float)((ulong)uVar108 >> 0x20);
    fVar128 = (float)((ulong)uVar127 >> 0x20);
    fVar110 = (float)uVar152;
    fVar129 = (float)uVar163;
    fVar111 = (float)((ulong)uVar152 >> 0x20);
    fVar130 = (float)((ulong)uVar163 >> 0x20);
    fVar148 = (float)*(undefined8 *)param_3;
    fVar155 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar112 = (float)uVar113;
    fVar114 = (float)((ulong)uVar113 >> 0x20);
    fVar115 = (float)uVar150;
    fVar116 = (float)((ulong)uVar150 >> 0x20);
    fVar157 = (float)*(undefined8 *)(param_3 + 2);
    fVar162 = (float)*(undefined8 *)param_2 * fVar148 + fVar28 * fVar155 + (float)uVar7 * fVar157 +
              auVar161._0_4_ * fVar36;
    fVar164 = (float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar148 + fVar31 * fVar155 +
              (float)((ulong)uVar7 >> 0x20) * fVar157 + auVar161._4_4_ * fVar43;
    fVar165 = (float)((ulong)uVar72 >> 0x20) * fVar148 + auVar73._12_4_ * fVar155 +
              (float)((ulong)uVar6 >> 0x20) * fVar157 + auVar161._12_4_ * auVar20._12_4_;
    fVar121 = (float)uVar122;
    fVar123 = (float)((ulong)uVar122 >> 0x20);
    fVar124 = (float)uVar136;
    fVar125 = (float)((ulong)uVar136 >> 0x20);
    fVar135 = fVar107 * fVar126 - fVar112 * fVar117;
    fVar143 = fVar109 * fVar128 - fVar114 * fVar118;
    fVar144 = fVar110 * fVar129 - fVar115 * fVar119;
    fVar145 = fVar111 * fVar130 - fVar116 * fVar120;
    fVar147 = (float)((ulong)_UNK_01d4b3f8 >> 0x20);
    fVar146 = (float)((ulong)_DAT_01d4b3f0 >> 0x20);
    fVar59 = fVar103 * fVar126 - fVar121 * fVar112;
    fVar62 = fVar104 * fVar128 - fVar123 * fVar114;
    fVar65 = fVar105 * fVar129 - fVar124 * fVar115;
    fVar68 = fVar106 * fVar130 - fVar125 * fVar116;
    uVar7 = NEON_ext(auVar99._0_8_,auVar99._0_8_,4,1);
    fVar31 = fVar103 * fVar117 - fVar121 * fVar107;
    fVar43 = fVar104 * fVar118 - fVar123 * fVar109;
    fVar5 = fVar105 * fVar119 - fVar124 * fVar110;
    fVar67 = fVar106 * fVar120 - fVar125 * fVar111;
    fVar41 = (float)uVar131;
    fVar47 = (float)((ulong)uVar131 >> 0x20);
    fVar48 = (float)uVar153;
    fVar49 = (float)((ulong)uVar153 >> 0x20);
    fVar149 = ((fVar41 * fVar135 - fVar132 * fVar59) + fVar31 * fVar60) * (float)_DAT_01d4b3f0;
    fVar156 = ((fVar47 * fVar143 - fVar134 * fVar62) + fVar43 * fVar63) * fVar146;
    fVar158 = ((fVar48 * fVar144 - fVar42 * fVar65) + fVar5 * fVar66) * (float)_UNK_01d4b3f8;
    fVar159 = ((fVar49 * fVar145 - fVar78 * fVar68) + fVar67 * fVar69) * fVar147;
    auVar44._0_4_ = fVar29 * fVar149;
    auVar44._4_4_ = fVar28 * fVar156;
    auVar44._8_4_ = fVar37 * fVar158;
    auVar44._12_4_ = fVar36 * fVar159;
    auVar102._8_8_ = auVar99._0_8_;
    auVar102._0_8_ = auVar99._0_8_;
    uVar72 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd50b0);
    uVar131 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5420);
    auVar73 = NEON_ext(auVar44,auVar44,8,1);
    fVar28 = (float)uVar7;
    fVar29 = (float)((ulong)uVar7 >> 0x20);
    fVar36 = (float)uVar131;
    fVar37 = (float)((ulong)uVar131 >> 0x20);
    fVar40 = auVar73._0_4_ + auVar44._0_4_;
    fVar46 = auVar73._4_4_ + auVar44._4_4_;
    fVar30 = fVar40 + fVar46;
    fVar40 = fVar40 + fVar46;
    fVar61 = (float)uVar12;
    fVar64 = (float)((ulong)uVar12 >> 0x20);
    fVar70 = (float)uVar19;
    fVar8 = (float)((ulong)uVar19 >> 0x20);
    fVar77 = (float)uVar151;
    fVar79 = (float)((ulong)uVar151 >> 0x20);
    fVar80 = (float)uVar72;
    fVar81 = (float)((ulong)uVar72 >> 0x20);
    auVar45._8_8_ = CONCAT44(fVar40,fVar30);
    auVar45._0_8_ = CONCAT44(fVar40,fVar30);
    fVar71 = fVar77 * fVar60 - fVar61 * fVar132;
    fVar74 = fVar79 * fVar63 - fVar64 * fVar134;
    fVar75 = fVar80 * fVar66 - fVar70 * fVar42;
    fVar76 = fVar81 * fVar69 - fVar8 * fVar78;
    fVar46 = fVar28 * fVar132 - fVar41 * fVar77;
    fVar132 = fVar29 * fVar134 - fVar47 * fVar79;
    fVar134 = fVar36 * fVar42 - fVar48 * fVar80;
    fVar42 = fVar37 * fVar78 - fVar49 * fVar81;
    auVar142 = NEON_frecpe(auVar45,4);
    fVar133 = fVar162 * 0.5 + 0.5;
    fVar78 = fVar164 * 0.5 + 0.5;
    auVar73 = NEON_frecps(auVar142,auVar45,4);
    fVar60 = fVar28 * fVar60 - fVar61 * fVar41;
    fVar63 = fVar29 * fVar63 - fVar64 * fVar47;
    fVar66 = fVar36 * fVar66 - fVar70 * fVar48;
    fVar69 = fVar37 * fVar69 - fVar8 * fVar49;
    fVar41 = auVar142._0_4_ * auVar73._0_4_;
    fVar47 = auVar142._4_4_ * auVar73._4_4_;
    fVar48 = auVar142._8_4_ * auVar73._8_4_;
    fVar49 = auVar142._12_4_ * auVar73._12_4_;
    iVar24 = -(uint)(fVar30 == 0.0);
    iVar25 = -(uint)(fVar40 == 0.0);
    iVar10 = -(uint)(fVar30 == 0.0);
    iVar11 = -(uint)(fVar40 == 0.0);
    fVar30 = (float)((ulong)_DAT_01d4b9d0 >> 0x20);
    fVar40 = (float)((ulong)_UNK_01d4b9d8 >> 0x20);
    bVar82 = ~(byte)iVar24;
    bVar83 = ~(byte)((uint)iVar24 >> 8);
    bVar84 = ~(byte)((uint)iVar24 >> 0x10);
    bVar85 = ~(byte)((uint)iVar24 >> 0x18);
    bVar86 = ~(byte)iVar25;
    bVar87 = ~(byte)((uint)iVar25 >> 8);
    bVar88 = ~(byte)((uint)iVar25 >> 0x10);
    bVar89 = ~(byte)((uint)iVar25 >> 0x18);
    bVar90 = ~(byte)iVar10;
    bVar91 = ~(byte)((uint)iVar10 >> 8);
    bVar92 = ~(byte)((uint)iVar10 >> 0x10);
    bVar93 = ~(byte)((uint)iVar10 >> 0x18);
    bVar94 = ~(byte)iVar11;
    bVar95 = ~(byte)((uint)iVar11 >> 8);
    bVar96 = ~(byte)((uint)iVar11 >> 0x10);
    bVar97 = ~(byte)((uint)iVar11 >> 0x18);
    auVar73[4] = SUB41(fVar47,0);
    auVar73._0_4_ = fVar41;
    auVar73[5] = (char)((uint)fVar47 >> 8);
    auVar73[6] = (char)((uint)fVar47 >> 0x10);
    auVar73[7] = (char)((uint)fVar47 >> 0x18);
    auVar73[8] = SUB41(fVar48,0);
    auVar73[9] = (char)((uint)fVar48 >> 8);
    auVar73[10] = (char)((uint)fVar48 >> 0x10);
    auVar73[0xb] = (char)((uint)fVar48 >> 0x18);
    auVar73[0xc] = SUB41(fVar49,0);
    auVar73[0xd] = (char)((uint)fVar49 >> 8);
    auVar73[0xe] = (char)((uint)fVar49 >> 0x10);
    auVar73[0xf] = (char)((uint)fVar49 >> 0x18);
    auVar73 = NEON_frecps(auVar73,auVar45,4);
    fVar41 = fVar41 * auVar73._0_4_;
    fVar47 = fVar47 * auVar73._4_4_;
    fVar48 = fVar48 * auVar73._8_4_;
    fVar49 = fVar49 * auVar73._12_4_;
    fVar149 = fVar41 * fVar149;
    fVar156 = fVar47 * fVar156;
    fVar158 = fVar48 * fVar158;
    fVar159 = fVar49 * fVar159;
    fVar31 = fVar41 * ((fVar28 * fVar135 - fVar77 * fVar59) + fVar31 * fVar61) *
                      (float)_DAT_01d4b9d0;
    fVar28 = fVar47 * ((fVar29 * fVar143 - fVar79 * fVar62) + fVar43 * fVar64) * fVar30;
    fVar43 = fVar48 * ((fVar36 * fVar144 - fVar80 * fVar65) + fVar5 * fVar70) * (float)_UNK_01d4b9d8
    ;
    fVar29 = fVar49 * ((fVar37 * fVar145 - fVar81 * fVar68) + fVar67 * fVar8) * fVar40;
    fVar61 = ((fVar121 * fVar71 - fVar117 * fVar60) + fVar46 * fVar126) * (float)_DAT_01d4b3f0 *
             fVar41;
    fVar64 = ((fVar123 * fVar74 - fVar118 * fVar63) + fVar132 * fVar128) * fVar146 * fVar47;
    fVar67 = ((fVar124 * fVar75 - fVar119 * fVar66) + fVar134 * fVar129) * (float)_UNK_01d4b3f8 *
             fVar48;
    fVar70 = ((fVar125 * fVar76 - fVar120 * fVar69) + fVar42 * fVar130) * fVar147 * fVar49;
    fVar41 = ((fVar103 * fVar71 - fVar107 * fVar60) + fVar46 * fVar112) * (float)_DAT_01d4b9d0 *
             fVar41;
    fVar47 = ((fVar104 * fVar74 - fVar109 * fVar63) + fVar132 * fVar114) * fVar30 * fVar47;
    fVar48 = ((fVar105 * fVar75 - fVar110 * fVar66) + fVar134 * fVar115) * (float)_UNK_01d4b9d8 *
             fVar48;
    fVar49 = ((fVar106 * fVar76 - fVar111 * fVar69) + fVar42 * fVar116) * fVar40 * fVar49;
    fVar37 = (float)CONCAT13((byte)((uint)fVar158 >> 0x18) & bVar93,
                             CONCAT12((byte)((uint)fVar158 >> 0x10) & bVar92,
                                      CONCAT11((byte)((uint)fVar158 >> 8) & bVar91,
                                               SUB41(fVar158,0) & bVar90)));
    fVar36 = (float)CONCAT13((byte)((uint)fVar149 >> 0x18) & bVar85,
                             CONCAT12((byte)((uint)fVar149 >> 0x10) & bVar84,
                                      CONCAT11((byte)((uint)fVar149 >> 8) & bVar83,
                                               SUB41(fVar149,0) & bVar82)));
    fVar5 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & bVar93,
                            CONCAT12((byte)((uint)fVar43 >> 0x10) & bVar92,
                                     CONCAT11((byte)((uint)fVar43 >> 8) & bVar91,
                                              SUB41(fVar43,0) & bVar90)));
    fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & bVar85,
                             CONCAT12((byte)((uint)fVar31 >> 0x10) & bVar84,
                                      CONCAT11((byte)((uint)fVar31 >> 8) & bVar83,
                                               SUB41(fVar31,0) & bVar82)));
    fVar67 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & bVar93,
                             CONCAT12((byte)((uint)fVar67 >> 0x10) & bVar92,
                                      CONCAT11((byte)((uint)fVar67 >> 8) & bVar91,
                                               SUB41(fVar67,0) & bVar90)));
    fVar43 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & bVar85,
                             CONCAT12((byte)((uint)fVar61 >> 0x10) & bVar84,
                                      CONCAT11((byte)((uint)fVar61 >> 8) & bVar83,
                                               SUB41(fVar61,0) & bVar82)));
    auVar73 = ZEXT816(0x3f800000);
    fVar46 = auVar73._0_4_;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = auVar73[2];
    uVar53 = auVar73[3];
    if (fVar133 <= fVar46) {
      uVar50 = SUB41(fVar133,0);
      uVar51 = (undefined1)((uint)fVar133 >> 8);
      uVar52 = (undefined1)((uint)fVar133 >> 0x10);
      uVar53 = (undefined1)((uint)fVar133 >> 0x18);
    }
    if (fVar78 <= fVar46) {
      fVar46 = fVar78;
    }
    fVar132 = (float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50)));
    if ((float)CONCAT13(uVar53,CONCAT12(uVar52,CONCAT11(uVar51,uVar50))) <= 0.0) {
      fVar132 = 0.0;
    }
    if (fVar46 <= 0.0) {
      fVar46 = 0.0;
    }
    iVar24 = FUN_006f82b0(*(undefined8 *)(param_1 + 0x150));
    iVar25 = FUN_006f8330(*(undefined8 *)(param_1 + 0x150));
    fVar42 = (float)FUN_006e09b0(param_1,(int)(fVar132 * (float)(iVar24 + -1)),
                                 (int)(fVar46 * (float)(iVar25 + -1)),param_4);
    fVar134 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & bVar93,
                              CONCAT12((byte)((uint)fVar48 >> 0x10) & bVar92,
                                       CONCAT11((byte)((uint)fVar48 >> 8) & bVar91,
                                                SUB41(fVar48,0) & bVar90)));
    fVar132 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & bVar85,
                              CONCAT12((byte)((uint)fVar41 >> 0x10) & bVar84,
                                       CONCAT11((byte)((uint)fVar41 >> 8) & bVar83,
                                                SUB41(fVar41,0) & bVar82)));
    fVar46 = fVar36 * fVar162 + fVar31 * fVar164 + fVar43 * fVar42 + fVar132 * fVar165;
    fVar43 = (float)(CONCAT17((byte)((uint)fVar156 >> 0x18) & bVar89,
                              CONCAT16((byte)((uint)fVar156 >> 0x10) & bVar88,
                                       CONCAT15((byte)((uint)fVar156 >> 8) & bVar87,
                                                CONCAT14(SUB41(fVar156,0) & bVar86,fVar36)))) >>
                    0x20) * fVar162 +
             (float)(CONCAT17((byte)((uint)fVar28 >> 0x18) & bVar89,
                              CONCAT16((byte)((uint)fVar28 >> 0x10) & bVar88,
                                       CONCAT15((byte)((uint)fVar28 >> 8) & bVar87,
                                                CONCAT14(SUB41(fVar28,0) & bVar86,fVar31)))) >> 0x20
                    ) * fVar164 +
             (float)(CONCAT17((byte)((uint)fVar64 >> 0x18) & bVar89,
                              CONCAT16((byte)((uint)fVar64 >> 0x10) & bVar88,
                                       CONCAT15((byte)((uint)fVar64 >> 8) & bVar87,
                                                CONCAT14(SUB41(fVar64,0) & bVar86,fVar43)))) >> 0x20
                    ) * fVar42 +
             (float)(CONCAT17((byte)((uint)fVar47 >> 0x18) & bVar89,
                              CONCAT16((byte)((uint)fVar47 >> 0x10) & bVar88,
                                       CONCAT15((byte)((uint)fVar47 >> 8) & bVar87,
                                                CONCAT14(SUB41(fVar47,0) & bVar86,fVar132)))) >>
                    0x20) * fVar165;
    uVar50 = (undefined1)((uint)fVar43 >> 8);
    uVar51 = (undefined1)((uint)fVar43 >> 0x10);
    uVar52 = (undefined1)((uint)fVar43 >> 0x18);
    fVar31 = fVar37 * fVar162 + fVar5 * fVar164 + fVar67 * fVar42 + fVar134 * fVar165;
    uVar53 = (undefined1)((uint)fVar31 >> 8);
    uVar54 = (undefined1)((uint)fVar31 >> 0x10);
    uVar55 = (undefined1)((uint)fVar31 >> 0x18);
    fVar5 = (float)(CONCAT17((byte)((uint)fVar159 >> 0x18) & bVar97,
                             CONCAT16((byte)((uint)fVar159 >> 0x10) & bVar96,
                                      CONCAT15((byte)((uint)fVar159 >> 8) & bVar95,
                                               CONCAT14(SUB41(fVar159,0) & bVar94,fVar37)))) >> 0x20
                   ) * fVar162 +
            (float)(CONCAT17((byte)((uint)fVar29 >> 0x18) & bVar97,
                             CONCAT16((byte)((uint)fVar29 >> 0x10) & bVar96,
                                      CONCAT15((byte)((uint)fVar29 >> 8) & bVar95,
                                               CONCAT14(SUB41(fVar29,0) & bVar94,fVar5)))) >> 0x20)
            * fVar164 +
            (float)(CONCAT17((byte)((uint)fVar70 >> 0x18) & bVar97,
                             CONCAT16((byte)((uint)fVar70 >> 0x10) & bVar96,
                                      CONCAT15((byte)((uint)fVar70 >> 8) & bVar95,
                                               CONCAT14(SUB41(fVar70,0) & bVar94,fVar67)))) >> 0x20)
            * fVar42 +
            (float)(CONCAT17((byte)((uint)fVar49 >> 0x18) & bVar97,
                             CONCAT16((byte)((uint)fVar49 >> 0x10) & bVar96,
                                      CONCAT15((byte)((uint)fVar49 >> 8) & bVar95,
                                               CONCAT14(SUB41(fVar49,0) & bVar94,fVar134)))) >> 0x20
                   ) * fVar165;
    uVar56 = (undefined1)((uint)fVar5 >> 8);
    uVar57 = (undefined1)((uint)fVar5 >> 0x10);
    uVar58 = (undefined1)((uint)fVar5 >> 0x18);
    auVar1[4] = SUB41(fVar43,0);
    auVar1._0_4_ = fVar46;
    auVar1[5] = uVar50;
    auVar1[6] = uVar51;
    auVar1[7] = uVar52;
    auVar1[8] = SUB41(fVar31,0);
    auVar1[9] = uVar53;
    auVar1[10] = uVar54;
    auVar1[0xb] = uVar55;
    auVar1[0xc] = SUB41(fVar5,0);
    auVar1[0xd] = uVar56;
    auVar1[0xe] = uVar57;
    auVar1[0xf] = uVar58;
    auVar2[4] = SUB41(fVar43,0);
    auVar2._0_4_ = fVar46;
    auVar2[5] = uVar50;
    auVar2[6] = uVar51;
    auVar2[7] = uVar52;
    auVar2[8] = SUB41(fVar31,0);
    auVar2[9] = uVar53;
    auVar2[10] = uVar54;
    auVar2[0xb] = uVar55;
    auVar2[0xc] = SUB41(fVar5,0);
    auVar2[0xd] = uVar56;
    auVar2[0xe] = uVar57;
    auVar2[0xf] = uVar58;
    auVar73 = NEON_ext(auVar1,auVar2,8,1);
    fVar5 = auVar73._0_4_ - param_3[2];
    fVar31 = (fVar46 - *param_3) * (fVar46 - *param_3);
    fVar43 = (fVar43 - param_3[1]) * (fVar43 - param_3[1]);
    uVar50 = (undefined1)((uint)fVar43 >> 8);
    uVar51 = (undefined1)((uint)fVar43 >> 0x10);
    uVar52 = (undefined1)((uint)fVar43 >> 0x18);
    fVar5 = fVar5 * fVar5;
    uVar53 = (undefined1)((uint)fVar5 >> 8);
    uVar54 = (undefined1)((uint)fVar5 >> 0x10);
    uVar55 = (undefined1)((uint)fVar5 >> 0x18);
    fVar67 = (0.0 - param_3[3]) * (0.0 - param_3[3]);
    uVar56 = (undefined1)((uint)fVar67 >> 8);
    uVar57 = (undefined1)((uint)fVar67 >> 0x10);
    uVar58 = (undefined1)((uint)fVar67 >> 0x18);
    auVar3[4] = SUB41(fVar43,0);
    auVar3._0_4_ = fVar31;
    auVar3[5] = uVar50;
    auVar3[6] = uVar51;
    auVar3[7] = uVar52;
    auVar3[8] = SUB41(fVar5,0);
    auVar3[9] = uVar53;
    auVar3[10] = uVar54;
    auVar3[0xb] = uVar55;
    auVar3[0xc] = SUB41(fVar67,0);
    auVar3[0xd] = uVar56;
    auVar3[0xe] = uVar57;
    auVar3[0xf] = uVar58;
    auVar4[4] = SUB41(fVar43,0);
    auVar4._0_4_ = fVar31;
    auVar4[5] = uVar50;
    auVar4[6] = uVar51;
    auVar4[7] = uVar52;
    auVar4[8] = SUB41(fVar5,0);
    auVar4[9] = uVar53;
    auVar4[10] = uVar54;
    auVar4[0xb] = uVar55;
    auVar4[0xc] = SUB41(fVar67,0);
    auVar4[0xd] = uVar56;
    auVar4[0xe] = uVar57;
    auVar4[0xf] = uVar58;
    auVar73 = NEON_ext(auVar3,auVar4,8,1);
    fVar31 = SQRT(auVar73._0_4_ + fVar31 + auVar73._4_4_ + fVar43);
    fVar43 = -fVar31;
    if (fVar42 <= fVar9 * fVar148 + fVar34 * fVar155 + (float)uVar6 * fVar157 +
                  auVar161._8_4_ * auVar20._8_4_) {
      fVar43 = fVar31;
    }
    fVar43 = fVar43 - *(float *)(param_1 + 0x15c);
    uVar26 = (ulong)(0.0 < fVar43);
    uVar27 = (ulong)(uint)fVar43 << 0x20;
  }
  return uVar26 | uVar27;
}


