/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb4f10; name: FUN_00eb4f10
 */


undefined8
FUN_00eb4f10(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
            undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  bool bVar36;
  bool bVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  float fVar63;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  float fVar79;
  float fVar80;
  undefined8 uVar81;
  undefined1 auVar82 [12];
  float fVar86;
  undefined1 auVar83 [16];
  float fVar85;
  float fVar87;
  float fVar88;
  undefined1 auVar84 [16];
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  undefined8 uVar121;
  undefined8 uVar122;
  undefined8 uVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined8 uVar126;
  undefined8 uVar127;
  undefined1 auVar128 [16];
  undefined8 uVar129;
  undefined8 uVar130;
  undefined8 uVar131;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  auVar124 = *(undefined1 (*) [16])(param_5 + 4);
  pfVar1 = param_5 + 8;
  uVar2 = *(undefined8 *)(param_5 + 10);
  uVar47 = (undefined1)((ulong)uVar2 >> 8);
  uVar48 = (undefined1)((ulong)uVar2 >> 0x10);
  uVar49 = (undefined1)((ulong)uVar2 >> 0x18);
  uVar50 = (undefined1)((ulong)uVar2 >> 0x20);
  uVar51 = (undefined1)((ulong)uVar2 >> 0x28);
  uVar52 = (undefined1)((ulong)uVar2 >> 0x30);
  uVar53 = (undefined1)((ulong)uVar2 >> 0x38);
  uVar25 = a64_TBL(ZEXT816(0),auVar124,DAT_01cd5418);
  uVar121 = a64_TBL(ZEXT816(0),auVar124,DAT_01cd5188);
  auVar12[9] = uVar47;
  auVar12._0_9_ = *(unkbyte9 *)pfVar1;
  auVar12[10] = uVar48;
  auVar12[0xb] = uVar49;
  auVar12[0xc] = uVar50;
  auVar12[0xd] = uVar51;
  auVar12[0xe] = uVar52;
  auVar12[0xf] = uVar53;
  uVar126 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
  uVar31 = a64_TBL(ZEXT816(0),auVar124,DAT_01cd50f8);
  auVar13[9] = uVar47;
  auVar13._0_9_ = *(unkbyte9 *)pfVar1;
  auVar13[10] = uVar48;
  auVar13[0xb] = uVar49;
  auVar13[0xc] = uVar50;
  auVar13[0xd] = uVar51;
  auVar13[0xe] = uVar52;
  auVar13[0xf] = uVar53;
  uVar129 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5158);
  uVar122 = a64_TBL(ZEXT816(0),auVar124,DAT_01cd5158);
  auVar14[9] = uVar47;
  auVar14._0_9_ = *(unkbyte9 *)pfVar1;
  auVar14[10] = uVar48;
  auVar14[0xb] = uVar49;
  auVar14[0xc] = uVar50;
  auVar14[0xd] = uVar51;
  auVar14[0xe] = uVar52;
  auVar14[0xf] = uVar53;
  uVar130 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
  auVar15[9] = uVar47;
  auVar15._0_9_ = *(unkbyte9 *)pfVar1;
  auVar15[10] = uVar48;
  auVar15[0xb] = uVar49;
  auVar15[0xc] = uVar50;
  auVar15[0xd] = uVar51;
  auVar15[0xe] = uVar52;
  auVar15[0xf] = uVar53;
  uVar123 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5188);
  fVar3 = *param_5;
  fVar4 = param_5[1];
  fVar7 = param_5[2];
  uVar40 = (undefined4)*(unkbyte9 *)pfVar1;
  uVar41 = (undefined4)((unkuint9)*(unkbyte9 *)pfVar1 >> 0x20);
  uVar38 = auVar124._0_4_;
  uVar39 = auVar124._4_4_;
  fVar43 = fVar3 * (float)uVar25 * (float)uVar126 - fVar3 * (float)uVar31 * (float)uVar130;
  fVar44 = fVar4 * (float)((ulong)uVar25 >> 0x20) * (float)((ulong)uVar126 >> 0x20) -
           fVar4 * (float)((ulong)uVar31 >> 0x20) * (float)((ulong)uVar130 >> 0x20);
  uVar50 = (undefined1)((uint)fVar44 >> 8);
  uVar51 = (undefined1)((uint)fVar44 >> 0x10);
  uVar52 = (undefined1)((uint)fVar44 >> 0x18);
  fVar63 = fVar7 * (float)uVar121 * (float)uVar129 - fVar7 * (float)uVar122 * (float)uVar123;
  uVar53 = (undefined1)((uint)fVar63 >> 8);
  uVar54 = (undefined1)((uint)fVar63 >> 0x10);
  uVar55 = (undefined1)((uint)fVar63 >> 0x18);
  fVar26 = param_5[3] * (float)((ulong)uVar121 >> 0x20) * (float)((ulong)uVar129 >> 0x20) -
           param_5[3] * (float)((ulong)uVar122 >> 0x20) * (float)((ulong)uVar123 >> 0x20);
  uVar56 = (undefined1)((uint)fVar26 >> 8);
  uVar57 = (undefined1)((uint)fVar26 >> 0x10);
  uVar58 = (undefined1)((uint)fVar26 >> 0x18);
  auVar20[4] = SUB41(fVar44,0);
  auVar20._0_4_ = fVar43;
  auVar20[5] = uVar50;
  auVar20[6] = uVar51;
  auVar20[7] = uVar52;
  auVar20[8] = SUB41(fVar63,0);
  auVar20[9] = uVar53;
  auVar20[10] = uVar54;
  auVar20[0xb] = uVar55;
  auVar20[0xc] = SUB41(fVar26,0);
  auVar20[0xd] = uVar56;
  auVar20[0xe] = uVar57;
  auVar20[0xf] = uVar58;
  auVar21[4] = SUB41(fVar44,0);
  auVar21._0_4_ = fVar43;
  auVar21[5] = uVar50;
  auVar21[6] = uVar51;
  auVar21[7] = uVar52;
  auVar21[8] = SUB41(fVar63,0);
  auVar21[9] = uVar53;
  auVar21[10] = uVar54;
  auVar21[0xb] = uVar55;
  auVar21[0xc] = SUB41(fVar26,0);
  auVar21[0xd] = uVar56;
  auVar21[0xe] = uVar57;
  auVar21[0xf] = uVar58;
  auVar128 = NEON_ext(auVar20,auVar21,8,1);
  auVar83._4_4_ = auVar124._8_4_;
  auVar83._0_4_ = fVar7;
  auVar83._8_4_ =
       (int)(CONCAT17(uVar49,CONCAT16(uVar48,CONCAT15(uVar47,CONCAT14((char)uVar2,fVar7)))) >> 0x20)
  ;
  auVar83._12_4_ = 0;
  auVar32._4_4_ = uVar39;
  auVar32._0_4_ = fVar4;
  auVar32._8_4_ = uVar41;
  auVar32._12_4_ = 0;
  uVar122 = a64_TBL(ZEXT816(0),auVar32,DAT_01cd5188);
  auVar33._4_4_ = uVar39;
  auVar33._0_4_ = fVar4;
  auVar33._8_4_ = uVar41;
  auVar33._12_4_ = 0;
  uVar127 = a64_TBL(ZEXT816(0),auVar33,DAT_01cd5418);
  uVar129 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd50f8);
  fVar133 = (float)((ulong)uVar129 >> 0x20);
  fVar63 = fVar43 + fVar44 + auVar128._0_4_ + auVar128._4_4_;
  uVar47 = SUB41(fVar63,0);
  uVar48 = (undefined1)((uint)fVar63 >> 8);
  uVar49 = (undefined1)((uint)fVar63 >> 0x10);
  uVar50 = (undefined1)((uint)fVar63 >> 0x18);
  uVar123 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5158);
  auVar22[4] = uVar47;
  auVar22._0_4_ = fVar63;
  auVar22[5] = uVar48;
  auVar22[6] = uVar49;
  auVar22[7] = uVar50;
  auVar22[8] = uVar47;
  auVar22[9] = uVar48;
  auVar22[10] = uVar49;
  auVar22[0xb] = uVar50;
  auVar22[0xc] = uVar47;
  auVar22[0xd] = uVar48;
  auVar22[0xe] = uVar49;
  auVar22[0xf] = uVar50;
  auVar124 = NEON_frecpe(auVar22,4);
  fVar134 = (float)((ulong)uVar123 >> 0x20);
  uVar126 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5418);
  auVar23[4] = uVar47;
  auVar23._0_4_ = fVar63;
  auVar23[5] = uVar48;
  auVar23[6] = uVar49;
  auVar23[7] = uVar50;
  auVar23[8] = uVar47;
  auVar23[9] = uVar48;
  auVar23[10] = uVar49;
  auVar23[0xb] = uVar50;
  auVar23[0xc] = uVar47;
  auVar23[0xd] = uVar48;
  auVar23[0xe] = uVar49;
  auVar23[0xf] = uVar50;
  auVar128 = NEON_frecps(auVar124,auVar23,4);
  uVar81 = a64_TBL(ZEXT816(0),auVar83,DAT_01cd5188);
  auVar27._4_4_ = uVar38;
  auVar27._0_4_ = fVar3;
  auVar27._8_4_ = uVar40;
  auVar27._12_4_ = 0;
  uVar2 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
  auVar28._4_4_ = uVar38;
  auVar28._0_4_ = fVar3;
  auVar28._8_4_ = uVar40;
  auVar28._12_4_ = 0;
  uVar25 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5188);
  auVar125._0_4_ = auVar124._0_4_ * auVar128._0_4_;
  auVar125._4_4_ = auVar124._4_4_ * auVar128._4_4_;
  auVar125._8_4_ = auVar124._8_4_ * auVar128._8_4_;
  auVar125._12_4_ = auVar124._12_4_ * auVar128._12_4_;
  auVar34._4_4_ = uVar39;
  auVar34._0_4_ = fVar4;
  auVar34._8_4_ = uVar41;
  auVar34._12_4_ = 0;
  uVar131 = a64_TBL(ZEXT816(0),auVar34,DAT_01cd50f8);
  auVar29._4_4_ = uVar38;
  auVar29._0_4_ = fVar3;
  auVar29._8_4_ = uVar40;
  auVar29._12_4_ = 0;
  uVar121 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50f8);
  auVar30._4_4_ = uVar38;
  auVar30._0_4_ = fVar3;
  auVar30._8_4_ = uVar40;
  auVar30._12_4_ = 0;
  uVar31 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd5158);
  auVar35._4_4_ = uVar39;
  auVar35._0_4_ = fVar4;
  auVar35._8_4_ = uVar41;
  auVar35._12_4_ = 0;
  uVar130 = a64_TBL(ZEXT816(0),auVar35,DAT_01cd5158);
  fVar137 = (float)param_6[1];
  fVar135 = (float)*param_6;
  fVar136 = (float)((ulong)*param_6 >> 0x20);
  fVar45 = (float)((ulong)uVar127 >> 0x20);
  fVar80 = (float)((ulong)uVar122 >> 0x20);
  fVar8 = (float)((ulong)uVar126 >> 0x20);
  fVar86 = (float)((ulong)uVar131 >> 0x20);
  fVar9 = (float)((ulong)uVar81 >> 0x20);
  fVar132 = (float)((ulong)uVar130 >> 0x20);
  auVar24[4] = uVar47;
  auVar24._0_4_ = fVar63;
  auVar24[5] = uVar48;
  auVar24[6] = uVar49;
  auVar24[7] = uVar50;
  auVar24[8] = uVar47;
  auVar24[9] = uVar48;
  auVar24[10] = uVar49;
  auVar24[0xb] = uVar50;
  auVar24[0xc] = uVar47;
  auVar24[0xd] = uVar48;
  auVar24[0xe] = uVar49;
  auVar24[0xf] = uVar50;
  auVar124 = NEON_frecps(auVar125,auVar24,4);
  fVar42 = (float)((ulong)uVar121 >> 0x20);
  fVar46 = (float)((ulong)uVar31 >> 0x20);
  fVar43 = (float)((ulong)uVar2 >> 0x20);
  fVar44 = (float)((ulong)uVar25 >> 0x20);
  fVar79 = auVar125._0_4_ * auVar124._0_4_;
  fVar85 = auVar125._4_4_ * auVar124._4_4_;
  fVar87 = auVar125._8_4_ * auVar124._8_4_;
  fVar88 = auVar125._12_4_ * auVar124._12_4_;
  iVar16 = -(uint)(fVar63 == 0.0);
  iVar17 = -(uint)(fVar63 == 0.0);
  iVar18 = -(uint)(fVar63 == 0.0);
  iVar19 = -(uint)(fVar63 == 0.0);
  fVar63 = fVar79 * ((float)uVar127 * (float)uVar129 - (float)uVar126 * (float)uVar131);
  fVar26 = fVar85 * (fVar45 * fVar133 - fVar8 * fVar86);
  fVar3 = fVar87 * ((float)uVar122 * (float)uVar123 - (float)uVar81 * (float)uVar130);
  fVar4 = fVar88 * (fVar80 * fVar134 - fVar9 * fVar132);
  fVar7 = fVar79 * ((float)uVar126 * (float)uVar121 - (float)uVar2 * (float)uVar129);
  fVar8 = fVar85 * (fVar8 * fVar42 - fVar43 * fVar133);
  fVar133 = fVar87 * ((float)uVar81 * (float)uVar31 - (float)uVar25 * (float)uVar123);
  fVar9 = fVar88 * (fVar9 * fVar46 - fVar44 * fVar134);
  bVar62 = ~(byte)iVar16;
  bVar64 = ~(byte)((uint)iVar16 >> 8);
  bVar65 = ~(byte)((uint)iVar16 >> 0x10);
  bVar66 = ~(byte)((uint)iVar16 >> 0x18);
  bVar67 = ~(byte)iVar17;
  bVar68 = ~(byte)((uint)iVar17 >> 8);
  bVar69 = ~(byte)((uint)iVar17 >> 0x10);
  bVar70 = ~(byte)((uint)iVar17 >> 0x18);
  bVar71 = ~(byte)iVar18;
  bVar72 = ~(byte)((uint)iVar18 >> 8);
  bVar73 = ~(byte)((uint)iVar18 >> 0x10);
  bVar74 = ~(byte)((uint)iVar18 >> 0x18);
  bVar75 = ~(byte)iVar19;
  bVar76 = ~(byte)((uint)iVar19 >> 8);
  bVar77 = ~(byte)((uint)iVar19 >> 0x10);
  bVar78 = ~(byte)((uint)iVar19 >> 0x18);
  fVar79 = fVar79 * ((float)uVar131 * (float)uVar2 - (float)uVar127 * (float)uVar121);
  fVar85 = fVar85 * (fVar86 * fVar43 - fVar45 * fVar42);
  fVar87 = fVar87 * ((float)uVar130 * (float)uVar25 - (float)uVar122 * (float)uVar31);
  fVar88 = fVar88 * (fVar132 * fVar44 - fVar80 * fVar46);
  fVar80 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & bVar66,
                           CONCAT12((byte)((uint)fVar63 >> 0x10) & bVar65,
                                    CONCAT11((byte)((uint)fVar63 >> 8) & bVar64,
                                             SUB41(fVar63,0) & bVar62)));
  auVar82._0_8_ =
       CONCAT17((byte)((uint)fVar26 >> 0x18) & bVar70,
                CONCAT16((byte)((uint)fVar26 >> 0x10) & bVar69,
                         CONCAT15((byte)((uint)fVar26 >> 8) & bVar68,
                                  CONCAT14(SUB41(fVar26,0) & bVar67,fVar80))));
  auVar82[8] = SUB41(fVar3,0) & bVar71;
  auVar82[9] = (byte)((uint)fVar3 >> 8) & bVar72;
  auVar82[10] = (byte)((uint)fVar3 >> 0x10) & bVar73;
  auVar82[0xb] = (byte)((uint)fVar3 >> 0x18) & bVar74;
  auVar84[0xc] = SUB41(fVar4,0) & bVar75;
  auVar84._0_12_ = auVar82;
  auVar84[0xd] = (byte)((uint)fVar4 >> 8) & bVar76;
  auVar84[0xe] = (byte)((uint)fVar4 >> 0x10) & bVar77;
  auVar84[0xf] = (byte)((uint)fVar4 >> 0x18) & bVar78;
  fVar42 = (float)*(undefined8 *)(param_5 + 0xc);
  bVar89 = SUB41(fVar7,0) & bVar62;
  bVar90 = (byte)((uint)fVar7 >> 8) & bVar64;
  bVar91 = (byte)((uint)fVar7 >> 0x10) & bVar65;
  bVar92 = (byte)((uint)fVar7 >> 0x18) & bVar66;
  bVar93 = SUB41(fVar8,0) & bVar67;
  bVar94 = (byte)((uint)fVar8 >> 8) & bVar68;
  bVar95 = (byte)((uint)fVar8 >> 0x10) & bVar69;
  bVar96 = (byte)((uint)fVar8 >> 0x18) & bVar70;
  bVar97 = SUB41(fVar133,0) & bVar71;
  bVar98 = (byte)((uint)fVar133 >> 8) & bVar72;
  bVar99 = (byte)((uint)fVar133 >> 0x10) & bVar73;
  bVar100 = (byte)((uint)fVar133 >> 0x18) & bVar74;
  bVar101 = SUB41(fVar9,0) & bVar75;
  bVar102 = (byte)((uint)fVar9 >> 8) & bVar76;
  bVar103 = (byte)((uint)fVar9 >> 0x10) & bVar77;
  bVar104 = (byte)((uint)fVar9 >> 0x18) & bVar78;
  fVar86 = (float)((ulong)auVar82._0_8_ >> 0x20);
  fVar46 = (float)((ulong)*(undefined8 *)(param_5 + 0xc) >> 0x20);
  bVar105 = SUB41(fVar79,0) & bVar62;
  bVar106 = (byte)((uint)fVar79 >> 8) & bVar64;
  bVar107 = (byte)((uint)fVar79 >> 0x10) & bVar65;
  bVar108 = (byte)((uint)fVar79 >> 0x18) & bVar66;
  bVar109 = SUB41(fVar85,0) & bVar67;
  bVar110 = (byte)((uint)fVar85 >> 8) & bVar68;
  bVar111 = (byte)((uint)fVar85 >> 0x10) & bVar69;
  bVar112 = (byte)((uint)fVar85 >> 0x18) & bVar70;
  bVar113 = SUB41(fVar87,0) & bVar71;
  bVar114 = (byte)((uint)fVar87 >> 8) & bVar72;
  bVar115 = (byte)((uint)fVar87 >> 0x10) & bVar73;
  bVar116 = (byte)((uint)fVar87 >> 0x18) & bVar74;
  bVar117 = SUB41(fVar88,0) & bVar75;
  bVar118 = (byte)((uint)fVar88 >> 8) & bVar76;
  bVar119 = (byte)((uint)fVar88 >> 0x10) & bVar77;
  bVar120 = (byte)((uint)fVar88 >> 0x18) & bVar78;
  fVar45 = (float)*(undefined8 *)(param_5 + 0xe);
  fVar43 = (-(fVar63 * fVar42) - fVar7 * fVar46) - fVar79 * fVar45;
  fVar44 = (-(fVar26 * fVar42) - fVar8 * fVar46) - fVar85 * fVar45;
  fVar63 = (-(fVar3 * fVar42) - fVar133 * fVar46) - fVar87 * fVar45;
  fVar7 = (-(fVar4 * fVar42) - fVar9 * fVar46) - fVar88 * fVar45;
  fVar79 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & bVar66,
                           CONCAT12((byte)((uint)fVar43 >> 0x10) & bVar65,
                                    CONCAT11((byte)((uint)fVar43 >> 8) & bVar64,
                                             SUB41(fVar43,0) & bVar62)));
  fVar87 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & bVar74,
                           CONCAT12((byte)((uint)fVar63 >> 0x10) & bVar73,
                                    CONCAT11((byte)((uint)fVar63 >> 8) & bVar72,
                                             SUB41(fVar63,0) & bVar71)));
  fVar26 = fVar80 * fVar135 +
           (float)CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89))) * fVar136 +
           (float)CONCAT13(bVar108,CONCAT12(bVar107,CONCAT11(bVar106,bVar105))) * fVar137 + fVar79;
  fVar85 = (float)(CONCAT17((byte)((uint)fVar44 >> 0x18) & bVar70,
                            CONCAT16((byte)((uint)fVar44 >> 0x10) & bVar69,
                                     CONCAT15((byte)((uint)fVar44 >> 8) & bVar68,
                                              CONCAT14(SUB41(fVar44,0) & bVar67,fVar79)))) >> 0x20);
  fVar3 = fVar86 * fVar135 +
          (float)CONCAT13(bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93))) * fVar136 +
          (float)CONCAT13(bVar112,CONCAT12(bVar111,CONCAT11(bVar110,bVar109))) * fVar137 + fVar85;
  uVar47 = (undefined1)((uint)fVar3 >> 8);
  uVar49 = (undefined1)((uint)fVar3 >> 0x10);
  uVar51 = (undefined1)((uint)fVar3 >> 0x18);
  fVar4 = auVar82._8_4_ * fVar135 +
          (float)CONCAT13(bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))) * fVar136 +
          (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,bVar113))) * fVar137 + fVar87;
  fVar46 = (float)(CONCAT17((byte)((uint)fVar7 >> 0x18) & bVar78,
                            CONCAT16((byte)((uint)fVar7 >> 0x10) & bVar77,
                                     CONCAT15((byte)((uint)fVar7 >> 8) & bVar76,
                                              CONCAT14(SUB41(fVar7,0) & bVar75,fVar87)))) >> 0x20);
  fVar7 = auVar84._12_4_ * fVar135 +
          (float)CONCAT13(bVar104,CONCAT12(bVar103,CONCAT11(bVar102,bVar101))) * fVar136 +
          (float)CONCAT13(bVar120,CONCAT12(bVar119,CONCAT11(bVar118,bVar117))) * fVar137 + fVar46;
  uVar56 = (undefined1)((uint)fVar7 >> 8);
  uVar58 = (undefined1)((uint)fVar7 >> 0x10);
  uVar60 = (undefined1)((uint)fVar7 >> 0x18);
  uStack_48 = CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(SUB41(fVar7,0),fVar4))));
  local_50 = CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(SUB41(fVar3,0),fVar26))));
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  fVar43 = (float)*param_7;
  fVar44 = (float)((ulong)*param_7 >> 0x20);
  fVar63 = (float)param_7[1];
  fVar79 = fVar80 * fVar43 +
           (float)CONCAT13(bVar92,CONCAT12(bVar91,CONCAT11(bVar90,bVar89))) * fVar44 +
           (float)CONCAT13(bVar108,CONCAT12(bVar107,CONCAT11(bVar106,bVar105))) * fVar63 + fVar79;
  fVar85 = fVar86 * fVar43 +
           (float)CONCAT13(bVar96,CONCAT12(bVar95,CONCAT11(bVar94,bVar93))) * fVar44 +
           (float)CONCAT13(bVar112,CONCAT12(bVar111,CONCAT11(bVar110,bVar109))) * fVar63 + fVar85;
  local_60 = CONCAT44(fVar85,fVar79);
  fVar87 = auVar82._8_4_ * fVar43 +
           (float)CONCAT13(bVar100,CONCAT12(bVar99,CONCAT11(bVar98,bVar97))) * fVar44 +
           (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,bVar113))) * fVar63 + fVar87;
  fVar46 = auVar84._12_4_ * fVar43 +
           (float)CONCAT13(bVar104,CONCAT12(bVar103,CONCAT11(bVar102,bVar101))) * fVar44 +
           (float)CONCAT13(bVar120,CONCAT12(bVar119,CONCAT11(bVar118,bVar117))) * fVar63 + fVar46;
  uStack_58 = CONCAT44(fVar46,fVar87);
  FUN_00dd5de0(&local_70,&local_50,&local_60,&local_80);
  fVar133 = (float)local_80;
  fVar43 = fVar133 * fVar133;
  fVar44 = (float)((ulong)local_80 >> 0x20);
  fVar44 = fVar44 * fVar44;
  uVar48 = (undefined1)((uint)fVar44 >> 8);
  uVar50 = (undefined1)((uint)fVar44 >> 0x10);
  uVar52 = (undefined1)((uint)fVar44 >> 0x18);
  fVar9 = (float)uStack_78;
  fVar63 = fVar9 * fVar9;
  uVar53 = (undefined1)((uint)fVar63 >> 8);
  uVar54 = (undefined1)((uint)fVar63 >> 0x10);
  uVar55 = (undefined1)((uint)fVar63 >> 0x18);
  fVar42 = (float)((ulong)uStack_78 >> 0x20);
  fVar8 = fVar42 * fVar42;
  uVar57 = (undefined1)((uint)fVar8 >> 8);
  uVar59 = (undefined1)((uint)fVar8 >> 0x10);
  uVar61 = (undefined1)((uint)fVar8 >> 0x18);
  auVar124[4] = SUB41(fVar44,0);
  auVar124._0_4_ = fVar43;
  auVar124[5] = uVar48;
  auVar124[6] = uVar50;
  auVar124[7] = uVar52;
  auVar124[8] = SUB41(fVar63,0);
  auVar124[9] = uVar53;
  auVar124[10] = uVar54;
  auVar124[0xb] = uVar55;
  auVar124[0xc] = SUB41(fVar8,0);
  auVar124[0xd] = uVar57;
  auVar124[0xe] = uVar59;
  auVar124[0xf] = uVar61;
  auVar128[4] = SUB41(fVar44,0);
  auVar128._0_4_ = fVar43;
  auVar128[5] = uVar48;
  auVar128[6] = uVar50;
  auVar128[7] = uVar52;
  auVar128[8] = SUB41(fVar63,0);
  auVar128[9] = uVar53;
  auVar128[10] = uVar54;
  auVar128[0xb] = uVar55;
  auVar128[0xc] = SUB41(fVar8,0);
  auVar128[0xd] = uVar57;
  auVar128[0xe] = uVar59;
  auVar128[0xf] = uVar61;
  auVar124 = NEON_ext(auVar124,auVar128,8,1);
  if (auVar124._0_4_ + fVar43 + auVar124._4_4_ + fVar44 <= param_3 * param_3) {
    fVar79 = fVar79 - fVar26;
    fVar87 = fVar87 - fVar4;
    fVar46 = fVar46 - (float)(CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(SUB41(fVar7,0
                                                  ),fVar4)))) >> 0x20);
    fVar63 = 0.0;
    fVar43 = fVar79 * fVar79;
    fVar44 = fVar87 * fVar87;
    uVar48 = (undefined1)((uint)fVar44 >> 8);
    uVar50 = (undefined1)((uint)fVar44 >> 0x10);
    uVar52 = (undefined1)((uint)fVar44 >> 0x18);
    fVar46 = fVar46 * fVar46;
    uVar53 = (undefined1)((uint)fVar46 >> 8);
    uVar54 = (undefined1)((uint)fVar46 >> 0x10);
    uVar55 = (undefined1)((uint)fVar46 >> 0x18);
    auVar10._4_4_ = 0;
    auVar10._0_4_ = fVar43;
    auVar10[8] = SUB41(fVar44,0);
    auVar10[9] = uVar48;
    auVar10[10] = uVar50;
    auVar10[0xb] = uVar52;
    auVar10[0xc] = SUB41(fVar46,0);
    auVar10[0xd] = uVar53;
    auVar10[0xe] = uVar54;
    auVar10[0xf] = uVar55;
    auVar11._4_4_ = 0;
    auVar11._0_4_ = fVar43;
    auVar11[8] = SUB41(fVar44,0);
    auVar11[9] = uVar48;
    auVar11[10] = uVar50;
    auVar11[0xb] = uVar52;
    auVar11[0xc] = SUB41(fVar46,0);
    auVar11[0xd] = uVar53;
    auVar11[0xe] = uVar54;
    auVar11[0xf] = uVar55;
    auVar124 = NEON_ext(auVar10,auVar11,8,1);
    fVar43 = SQRT(auVar124._0_4_ + fVar43 + auVar124._4_4_ + 0.0);
    if (0.0 < fVar43) {
      fVar133 = fVar133 - (float)local_50;
      fVar9 = fVar9 - (float)uStack_48;
      fVar42 = fVar42 - (float)((ulong)uStack_48 >> 0x20);
      fVar133 = fVar133 * fVar133;
      fVar9 = fVar9 * fVar9;
      uVar48 = (undefined1)((uint)fVar9 >> 8);
      uVar50 = (undefined1)((uint)fVar9 >> 0x10);
      uVar52 = (undefined1)((uint)fVar9 >> 0x18);
      fVar42 = fVar42 * fVar42;
      uVar53 = (undefined1)((uint)fVar42 >> 8);
      uVar54 = (undefined1)((uint)fVar42 >> 0x10);
      uVar55 = (undefined1)((uint)fVar42 >> 0x18);
      auVar5._4_4_ = 0;
      auVar5._0_4_ = fVar133;
      auVar5[8] = SUB41(fVar9,0);
      auVar5[9] = uVar48;
      auVar5[10] = uVar50;
      auVar5[0xb] = uVar52;
      auVar5[0xc] = SUB41(fVar42,0);
      auVar5[0xd] = uVar53;
      auVar5[0xe] = uVar54;
      auVar5[0xf] = uVar55;
      auVar6._4_4_ = 0;
      auVar6._0_4_ = fVar133;
      auVar6[8] = SUB41(fVar9,0);
      auVar6[9] = uVar48;
      auVar6[10] = uVar50;
      auVar6[0xb] = uVar52;
      auVar6[0xc] = SUB41(fVar42,0);
      auVar6[0xd] = uVar53;
      auVar6[0xe] = uVar54;
      auVar6[0xf] = uVar55;
      auVar124 = NEON_ext(auVar5,auVar6,8,1);
      fVar63 = SQRT(auVar124._0_4_ + fVar133 + auVar124._4_4_ + 0.0) / fVar43;
    }
    fVar43 = (float)local_50 + fVar79 * fVar63;
    fVar44 = (float)((ulong)local_50 >> 0x20) +
             (fVar85 - (float)(CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(SUB41(fVar3,
                                                  0),fVar26)))) >> 0x20)) * fVar63;
    fVar63 = (float)uStack_48 + fVar87 * fVar63;
    bVar36 = false;
    bVar37 = true;
    if (param_1 <= fVar44) {
      bVar36 = false;
      bVar37 = true;
      if (!NAN(fVar44) && !NAN(param_2)) {
        bVar36 = fVar44 == param_2;
        bVar37 = param_2 <= fVar44;
      }
    }
    if (!bVar37 || bVar36) {
      if (param_8 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)param_5;
        uVar25 = *(undefined8 *)(param_5 + 4);
        uVar31 = *(undefined8 *)(param_5 + 8);
        fVar26 = param_5[0xc];
        fVar3 = param_5[0xd];
        param_8[1] = CONCAT44(param_5[0xf] +
                              (float)((ulong)*(undefined8 *)(param_5 + 2) >> 0x20) * fVar43 +
                              (float)((ulong)*(undefined8 *)(param_5 + 6) >> 0x20) * fVar44 +
                              (float)((ulong)*(undefined8 *)(param_5 + 10) >> 0x20) * fVar63,
                              param_5[0xe] +
                              (float)*(undefined8 *)(param_5 + 2) * fVar43 +
                              (float)*(undefined8 *)(param_5 + 6) * fVar44 +
                              (float)*(undefined8 *)(param_5 + 10) * fVar63);
        *param_8 = CONCAT44(fVar3 + (float)((ulong)uVar2 >> 0x20) * fVar43 +
                                    (float)((ulong)uVar25 >> 0x20) * fVar44 +
                                    (float)((ulong)uVar31 >> 0x20) * fVar63,
                            fVar26 + (float)uVar2 * fVar43 + (float)uVar25 * fVar44 +
                                     (float)uVar31 * fVar63);
      }
      return 1;
    }
  }
  return 0;
}


