/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb51b0; name: FUN_00eb51b0
 */


undefined1 FUN_00eb51b0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined8 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long *plVar37;
  undefined4 uVar38;
  byte bVar39;
  int iVar40;
  undefined1 auVar41 [12];
  byte bVar46;
  byte bVar47;
  byte bVar49;
  int iVar50;
  byte bVar51;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  byte bVar57;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  byte bVar48;
  byte bVar53;
  int iVar55;
  byte bVar58;
  int iVar60;
  byte bVar63;
  undefined1 auVar45 [16];
  float fVar64;
  undefined1 auVar65 [12];
  float fVar77;
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar73 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  float fVar80;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  float fVar79;
  float fVar81;
  undefined1 auVar76 [16];
  float fVar82;
  float fVar83;
  undefined8 uVar84;
  undefined1 auVar85 [12];
  float fVar89;
  float fVar93;
  undefined1 auVar86 [16];
  float fVar90;
  float fVar92;
  float fVar94;
  undefined1 auVar87 [16];
  float fVar91;
  undefined1 auVar88 [16];
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
  undefined1 uVar99;
  byte bVar100;
  undefined1 uVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  undefined1 uVar107;
  byte bVar108;
  undefined1 uVar109;
  byte bVar110;
  undefined1 uVar111;
  byte bVar112;
  undefined1 uVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  ulong uVar130;
  undefined8 uVar131;
  float fVar132;
  undefined8 uVar133;
  undefined8 uVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  undefined8 uVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined8 uVar144;
  long lVar145;
  long lVar146;
  float fVar147;
  float local_1a0;
  float fStack_19c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  uVar34 = (**(code **)(*param_1 + 0x70))();
  if (((uVar34 & 1) == 0) || ((int)param_1[0x11f] < 1)) {
    uVar95 = 0;
  }
  else {
    if (1 < *(uint *)(param_1 + 0xed)) {
LAB_00eb55c0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    fVar129 = *(float *)(param_1 + (long)(int)*(uint *)(param_1 + 0xed) * 2 + 0xee);
    local_d8 = (undefined4)param_2[3];
    uStack_d4 = (undefined4)((ulong)param_2[3] >> 0x20);
    fStack_e8 = (float)param_2[1];
    fStack_e4 = (float)((ulong)param_2[1] >> 0x20);
    uStack_b8 = param_2[7];
    uStack_c8 = (undefined4)param_2[5];
    uStack_c4 = (undefined4)((ulong)param_2[5] >> 0x20);
    local_f0 = *param_2;
    local_e0 = param_2[2];
    local_d0 = param_2[4];
    local_c0 = param_2[6];
    local_100 = 0;
    uStack_f8 = 0;
    auVar43 = ZEXT416(0);
    uVar34 = FUN_00eb55d0(param_1,&local_f0,&local_100);
    uVar30 = local_100;
    puVar29 = PTR_DAT_02720210;
    puVar28 = PTR_DAT_02720208;
    puVar27 = PTR_DAT_02715a50;
    puVar26 = PTR_DAT_02715088;
    if (*(float *)(param_1 + 0x11e) <= 0.0) {
      lVar146 = param_1[0xe9];
      lVar145 = param_1[0xe8];
      iVar40 = (int)param_1[0x11f];
    }
    else {
      lVar146 = param_1[0x17];
      lVar145 = CONCAT44(*(undefined4 *)((long)param_1 + 0x744),(int)param_1[0x16]);
      fVar129 = fVar129 + *(float *)(param_1 + 0x120);
      iVar40 = (int)param_1[0x11f];
    }
    if (0 < iVar40) {
      fVar142 = (float)local_f0;
      fVar119 = (float)((ulong)local_f0 >> 0x20);
      auVar11._8_4_ = local_d8;
      auVar11._0_8_ = local_e0;
      auVar10._8_4_ = local_d8;
      auVar10._0_8_ = local_e0;
      auVar9._8_4_ = local_d8;
      auVar9._0_8_ = local_e0;
      auVar8._8_4_ = local_d8;
      auVar8._0_8_ = local_e0;
      auVar18._8_4_ = uStack_c8;
      auVar18._0_8_ = local_d0;
      auVar17._8_4_ = uStack_c8;
      auVar17._0_8_ = local_d0;
      auVar16._8_4_ = uStack_c8;
      auVar16._0_8_ = local_d0;
      auVar15._8_4_ = uStack_c8;
      auVar15._0_8_ = local_d0;
      auVar66._4_12_ = auVar43._4_12_;
      auVar66._0_4_ = fVar142;
      auVar68._12_4_ = auVar43._12_4_;
      auVar68._0_8_ = auVar66._0_8_;
      auVar68._8_4_ = fVar119;
      auVar67._8_8_ = auVar68._8_8_;
      auVar67._4_4_ = (int)local_d0;
      auVar67._0_4_ = fVar142;
      uVar38 = (undefined4)((ulong)local_d0 >> 0x20);
      auVar69._0_12_ = auVar67._0_12_;
      auVar69._12_4_ = uVar38;
      uVar107 = (undefined1)uStack_c8;
      uVar109 = (undefined1)((uint)uStack_c8 >> 8);
      uVar111 = (undefined1)((uint)uStack_c8 >> 0x10);
      uVar113 = (undefined1)((uint)uStack_c8 >> 0x18);
      uVar95 = (undefined1)local_d8;
      uVar97 = (undefined1)((uint)local_d8 >> 8);
      uVar99 = (undefined1)((uint)local_d8 >> 0x10);
      uVar101 = (undefined1)((uint)local_d8 >> 0x18);
      uVar31 = local_100._4_4_;
      uVar32 = (undefined4)uStack_f8;
      uVar33 = uStack_f8._4_4_;
      uVar130 = uStack_f8 & 0xffffffff;
      uVar131 = 0;
      auVar8._12_4_ = uStack_d4;
      uVar133 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
      auVar42._4_4_ = (int)local_e0;
      auVar42._0_4_ = fVar142;
      auVar42._8_4_ = (int)local_d0;
      auVar42._12_4_ = 0;
      auVar70._4_12_ = auVar69._4_12_;
      auVar70._0_4_ = fVar119;
      auVar72._0_8_ = auVar70._0_8_;
      auVar72._8_4_ = uVar38;
      auVar72._12_4_ = uVar38;
      auVar71._8_8_ = auVar72._8_8_;
      auVar71._4_4_ = (int)((ulong)local_e0 >> 0x20);
      auVar71._0_4_ = fVar119;
      auVar73._0_12_ = auVar71._0_12_;
      auVar73._12_4_ = 0;
      auVar9._12_4_ = uStack_d4;
      uVar138 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5188);
      auVar15._12_4_ = uStack_c4;
      uVar23 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
      auVar16._12_4_ = uStack_c4;
      uVar144 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5158);
      auVar10._12_4_ = uStack_d4;
      uVar24 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
      auVar11._12_4_ = uStack_d4;
      uVar12 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5158);
      auVar17._12_4_ = uStack_c4;
      uVar13 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
      auVar18._12_4_ = uStack_c4;
      uVar19 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5188);
      lVar36 = 0;
      fVar137 = (float)local_c0;
      auVar43[4] = uVar95;
      auVar43._0_4_ = fStack_e8;
      auVar43[5] = uVar97;
      auVar43[6] = uVar99;
      auVar43[7] = uVar101;
      auVar43[8] = uVar107;
      auVar43[9] = uVar109;
      auVar43[10] = uVar111;
      auVar43[0xb] = uVar113;
      auVar43._12_4_ = 0;
      uVar20 = a64_TBL(ZEXT816(0),auVar43,DAT_01cd5158);
      fVar124 = (float)((ulong)uVar20 >> 0x20);
      uVar14 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5188);
      fVar121 = (float)((ulong)uVar14 >> 0x20);
      fVar140 = fVar142 * (float)uVar133 * (float)uVar23 - fVar142 * (float)uVar24 * (float)uVar13;
      fVar141 = fVar119 * (float)((ulong)uVar133 >> 0x20) * (float)((ulong)uVar23 >> 0x20) -
                fVar119 * (float)((ulong)uVar24 >> 0x20) * (float)((ulong)uVar13 >> 0x20);
      fVar142 = fStack_e8 * (float)uVar138 * (float)uVar144 -
                fStack_e8 * (float)uVar12 * (float)uVar19;
      fVar143 = fStack_e4 * (float)((ulong)uVar138 >> 0x20) * (float)((ulong)uVar144 >> 0x20) -
                fStack_e4 * (float)((ulong)uVar12 >> 0x20) * (float)((ulong)uVar19 >> 0x20);
      uVar19 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
      fVar120 = (float)((ulong)uVar19 >> 0x20);
      fVar139 = (float)((ulong)local_c0 >> 0x20);
      auVar74[4] = uVar95;
      auVar74._0_4_ = fStack_e8;
      auVar74[5] = uVar97;
      auVar74[6] = uVar99;
      auVar74[7] = uVar101;
      auVar74[8] = uVar107;
      auVar74[9] = uVar109;
      auVar74[10] = uVar111;
      auVar74[0xb] = uVar113;
      auVar74._12_4_ = 0;
      uVar23 = a64_TBL(ZEXT816(0),auVar74,DAT_01cd50f8);
      fVar122 = (float)((ulong)uVar23 >> 0x20);
      auVar86[4] = uVar95;
      auVar86._0_4_ = fStack_e8;
      auVar86[5] = uVar97;
      auVar86[6] = uVar99;
      auVar86[7] = uVar101;
      auVar86[8] = uVar107;
      auVar86[9] = uVar109;
      auVar86[10] = uVar111;
      auVar86[0xb] = uVar113;
      auVar86._12_4_ = 0;
      uVar24 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd5418);
      fVar125 = (float)((ulong)uVar24 >> 0x20);
      auVar4[4] = uVar95;
      auVar4._0_4_ = fStack_e8;
      auVar4[5] = uVar97;
      auVar4[6] = uVar99;
      auVar4[7] = uVar101;
      auVar4[8] = uVar107;
      auVar4[9] = uVar109;
      auVar4[10] = uVar111;
      auVar4[0xb] = uVar113;
      auVar4._12_4_ = 0;
      uVar12 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5188);
      uVar134 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5158);
      fVar128 = (float)((ulong)uVar12 >> 0x20);
      uVar95 = (undefined1)uStack_b8;
      uVar97 = (undefined1)((ulong)uStack_b8 >> 8);
      uVar99 = (undefined1)((ulong)uStack_b8 >> 0x10);
      uVar101 = (undefined1)((ulong)uStack_b8 >> 0x18);
      fVar119 = (float)uStack_b8;
      uVar13 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
      uVar138 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5158);
      uVar84 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5418);
      uVar144 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd50f8);
      uVar133 = a64_TBL(ZEXT816(0),auVar42,DAT_01cd5188);
      auVar21._4_4_ = fVar141;
      auVar21._0_4_ = fVar140;
      auVar21._8_4_ = fVar142;
      auVar21._12_4_ = fVar143;
      auVar22._4_4_ = fVar141;
      auVar22._0_4_ = fVar140;
      auVar22._8_4_ = fVar142;
      auVar22._12_4_ = fVar143;
      auVar43 = NEON_ext(auVar21,auVar22,8,1);
      fVar77 = (float)((ulong)uVar144 >> 0x20);
      fVar80 = (float)((ulong)uVar134 >> 0x20);
      fVar142 = (float)((ulong)uVar13 >> 0x20);
      fVar143 = (float)((ulong)uVar138 >> 0x20);
      fVar89 = (float)((ulong)uVar84 >> 0x20);
      fVar93 = (float)((ulong)uVar133 >> 0x20);
      plVar37 = param_1 + 0xfa;
      do {
        uVar35 = 0;
        do {
          if (0x11 < lVar36 + uVar35) goto LAB_00eb55c0;
          uVar1 = uVar35 + 1;
          pfVar3 = (float *)(plVar37 + uVar35 * 2);
          fVar123 = (float)lVar145 + *pfVar3;
          fVar135 = (float)((ulong)lVar145 >> 0x20);
          fVar126 = fVar135 + pfVar3[1];
          fVar127 = (float)lVar146 + pfVar3[2];
          fVar147 = (float)((ulong)lVar146 >> 0x20);
          uVar2 = (int)lVar36 + ((uint)uVar1 & 0xff) % 3;
          uStack_108 = CONCAT44(fVar147 + pfVar3[3],fVar127);
          local_110 = CONCAT44(fVar126,fVar123);
          if (0x11 < uVar2) goto LAB_00eb55c0;
          fVar132 = (float)lVar145 + *(float *)(param_1 + (ulong)uVar2 * 2 + 0xfa);
          fVar135 = fVar135 + *(float *)((long)param_1 + (ulong)uVar2 * 0x10 + 0x7d4);
          local_120 = CONCAT44(fVar135,fVar132);
          fVar136 = (float)lVar146 + *(float *)(param_1 + (ulong)uVar2 * 2 + 0xfb);
          uStack_118 = CONCAT44(fVar147 + *(float *)((long)param_1 + (ulong)uVar2 * 0x10 + 0x7dc),
                                fVar136);
          if ((0.0 < fVar129) &&
             (uVar34 = FUN_00eb4f10((int)param_1[0xf8],*(undefined4 *)((long)param_1 + 0x7c4),
                                    fVar129,uVar34,param_2,&local_110,&local_120,0),
             (uVar34 & 1) != 0)) {
LAB_00eb5590:
            uVar95 = 1;
            goto LAB_00eb5594;
          }
          local_1a0 = auVar43._0_4_;
          fStack_19c = auVar43._4_4_;
          auVar44._0_4_ = fVar140 + fVar141 + local_1a0 + fStack_19c;
          auVar44._4_4_ = auVar44._0_4_;
          auVar44._8_4_ = auVar44._0_4_;
          auVar44._12_4_ = auVar44._0_4_;
          auVar74 = NEON_frecpe(auVar44,4);
          auVar86 = NEON_frecps(auVar74,auVar44,4);
          auVar75._0_4_ = auVar74._0_4_ * auVar86._0_4_;
          auVar75._4_4_ = auVar74._4_4_ * auVar86._4_4_;
          auVar75._8_4_ = auVar74._8_4_ * auVar86._8_4_;
          auVar75._12_4_ = auVar74._12_4_ * auVar86._12_4_;
          auVar74 = NEON_frecps(auVar75,auVar44,4);
          iVar40 = -(uint)(auVar44._0_4_ == 0.0);
          iVar50 = -(uint)(auVar44._0_4_ == 0.0);
          iVar55 = -(uint)(auVar44._0_4_ == 0.0);
          iVar60 = -(uint)(auVar44._0_4_ == 0.0);
          bVar39 = ~(byte)iVar40;
          bVar46 = ~(byte)((uint)iVar40 >> 8);
          bVar47 = ~(byte)((uint)iVar40 >> 0x10);
          bVar48 = ~(byte)((uint)iVar40 >> 0x18);
          bVar49 = ~(byte)iVar50;
          bVar51 = ~(byte)((uint)iVar50 >> 8);
          bVar52 = ~(byte)((uint)iVar50 >> 0x10);
          bVar53 = ~(byte)((uint)iVar50 >> 0x18);
          bVar54 = ~(byte)iVar55;
          bVar56 = ~(byte)((uint)iVar55 >> 8);
          bVar57 = ~(byte)((uint)iVar55 >> 0x10);
          bVar58 = ~(byte)((uint)iVar55 >> 0x18);
          bVar59 = ~(byte)iVar60;
          bVar61 = ~(byte)((uint)iVar60 >> 8);
          bVar62 = ~(byte)((uint)iVar60 >> 0x10);
          bVar63 = ~(byte)((uint)iVar60 >> 0x18);
          fVar64 = auVar75._0_4_ * auVar74._0_4_;
          fVar78 = auVar75._4_4_ * auVar74._4_4_;
          fVar79 = auVar75._8_4_ * auVar74._8_4_;
          fVar81 = auVar75._12_4_ * auVar74._12_4_;
          fVar82 = fVar64 * ((float)uVar19 * (float)uVar23 - (float)uVar24 * (float)uVar13);
          fVar90 = fVar78 * (fVar120 * fVar122 - fVar125 * fVar142);
          fVar92 = fVar79 * ((float)uVar14 * (float)uVar20 - (float)uVar12 * (float)uVar138);
          fVar94 = fVar81 * (fVar121 * fVar124 - fVar128 * fVar143);
          fVar147 = fVar64 * ((float)uVar24 * (float)uVar144 - (float)uVar84 * (float)uVar23);
          fVar5 = fVar78 * (fVar125 * fVar77 - fVar89 * fVar122);
          fVar6 = fVar79 * ((float)uVar12 * (float)uVar134 - (float)uVar133 * (float)uVar20);
          fVar7 = fVar81 * (fVar128 * fVar80 - fVar93 * fVar124);
          fVar83 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & bVar48,
                                   CONCAT12((byte)((uint)fVar82 >> 0x10) & bVar47,
                                            CONCAT11((byte)((uint)fVar82 >> 8) & bVar46,
                                                     SUB41(fVar82,0) & bVar39)));
          auVar85._0_8_ =
               CONCAT17((byte)((uint)fVar90 >> 0x18) & bVar53,
                        CONCAT16((byte)((uint)fVar90 >> 0x10) & bVar52,
                                 CONCAT15((byte)((uint)fVar90 >> 8) & bVar51,
                                          CONCAT14(SUB41(fVar90,0) & bVar49,fVar83))));
          auVar85[8] = SUB41(fVar92,0) & bVar54;
          auVar85[9] = (byte)((uint)fVar92 >> 8) & bVar56;
          auVar85[10] = (byte)((uint)fVar92 >> 0x10) & bVar57;
          auVar85[0xb] = (byte)((uint)fVar92 >> 0x18) & bVar58;
          auVar87[0xc] = SUB41(fVar94,0) & bVar59;
          auVar87._0_12_ = auVar85;
          auVar87[0xd] = (byte)((uint)fVar94 >> 8) & bVar61;
          auVar87[0xe] = (byte)((uint)fVar94 >> 0x10) & bVar62;
          auVar87[0xf] = (byte)((uint)fVar94 >> 0x18) & bVar63;
          fVar91 = (float)((ulong)auVar85._0_8_ >> 0x20);
          bVar96 = SUB41(fVar147,0) & bVar39;
          bVar98 = (byte)((uint)fVar147 >> 8) & bVar46;
          bVar100 = (byte)((uint)fVar147 >> 0x10) & bVar47;
          bVar102 = (byte)((uint)fVar147 >> 0x18) & bVar48;
          bVar103 = SUB41(fVar5,0) & bVar49;
          bVar104 = (byte)((uint)fVar5 >> 8) & bVar51;
          bVar105 = (byte)((uint)fVar5 >> 0x10) & bVar52;
          bVar106 = (byte)((uint)fVar5 >> 0x18) & bVar53;
          bVar108 = SUB41(fVar6,0) & bVar54;
          bVar110 = (byte)((uint)fVar6 >> 8) & bVar56;
          bVar112 = (byte)((uint)fVar6 >> 0x10) & bVar57;
          bVar114 = (byte)((uint)fVar6 >> 0x18) & bVar58;
          bVar115 = SUB41(fVar7,0) & bVar59;
          bVar116 = (byte)((uint)fVar7 >> 8) & bVar61;
          bVar117 = (byte)((uint)fVar7 >> 0x10) & bVar62;
          bVar118 = (byte)((uint)fVar7 >> 0x18) & bVar63;
          fVar64 = fVar64 * ((float)uVar13 * (float)uVar84 - (float)uVar19 * (float)uVar144);
          fVar78 = fVar78 * (fVar142 * fVar89 - fVar120 * fVar77);
          fVar79 = fVar79 * ((float)uVar138 * (float)uVar133 - (float)uVar14 * (float)uVar134);
          fVar81 = fVar81 * (fVar143 * fVar93 - fVar121 * fVar80);
          fVar147 = (-(fVar137 * fVar82) - fVar147 * fVar139) - fVar64 * fVar119;
          fVar5 = (-(fVar137 * fVar90) - fVar5 * fVar139) -
                  fVar78 * (float)(CONCAT17(uVar101,CONCAT16(uVar99,CONCAT15(uVar97,CONCAT14(uVar95,
                                                  fVar119)))) >> 0x20);
          fVar6 = (-(fVar137 * fVar92) - fVar6 * fVar139) - fVar79 * fVar119;
          fVar7 = (-(fVar137 * fVar94) - fVar7 * fVar139) -
                  fVar81 * (float)(CONCAT17(uVar101,CONCAT16(uVar99,CONCAT15(uVar97,CONCAT14(uVar95,
                                                  fVar119)))) >> 0x20);
          fVar82 = (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & bVar48,
                                   CONCAT12((byte)((uint)fVar64 >> 0x10) & bVar47,
                                            CONCAT11((byte)((uint)fVar64 >> 8) & bVar46,
                                                     SUB41(fVar64,0) & bVar39)));
          auVar65._0_8_ =
               CONCAT17((byte)((uint)fVar78 >> 0x18) & bVar53,
                        CONCAT16((byte)((uint)fVar78 >> 0x10) & bVar52,
                                 CONCAT15((byte)((uint)fVar78 >> 8) & bVar51,
                                          CONCAT14(SUB41(fVar78,0) & bVar49,fVar82))));
          auVar65[8] = SUB41(fVar79,0) & bVar54;
          auVar65[9] = (byte)((uint)fVar79 >> 8) & bVar56;
          auVar65[10] = (byte)((uint)fVar79 >> 0x10) & bVar57;
          auVar65[0xb] = (byte)((uint)fVar79 >> 0x18) & bVar58;
          auVar76[0xc] = SUB41(fVar81,0) & bVar59;
          auVar76._0_12_ = auVar65;
          auVar76[0xd] = (byte)((uint)fVar81 >> 8) & bVar61;
          auVar76[0xe] = (byte)((uint)fVar81 >> 0x10) & bVar62;
          auVar76[0xf] = (byte)((uint)fVar81 >> 0x18) & bVar63;
          fVar78 = (float)((ulong)auVar65._0_8_ >> 0x20);
          fVar64 = (float)CONCAT13((byte)((uint)fVar147 >> 0x18) & bVar48,
                                   CONCAT12((byte)((uint)fVar147 >> 0x10) & bVar47,
                                            CONCAT11((byte)((uint)fVar147 >> 8) & bVar46,
                                                     SUB41(fVar147,0) & bVar39)));
          auVar41._0_8_ =
               CONCAT17((byte)((uint)fVar5 >> 0x18) & bVar53,
                        CONCAT16((byte)((uint)fVar5 >> 0x10) & bVar52,
                                 CONCAT15((byte)((uint)fVar5 >> 8) & bVar51,
                                          CONCAT14(SUB41(fVar5,0) & bVar49,fVar64))));
          auVar41[8] = SUB41(fVar6,0) & bVar54;
          auVar41[9] = (byte)((uint)fVar6 >> 8) & bVar56;
          auVar41[10] = (byte)((uint)fVar6 >> 0x10) & bVar57;
          auVar41[0xb] = (byte)((uint)fVar6 >> 0x18) & bVar58;
          auVar45[0xc] = SUB41(fVar7,0) & bVar59;
          auVar45._0_12_ = auVar41;
          auVar45[0xd] = (byte)((uint)fVar7 >> 8) & bVar61;
          auVar45[0xe] = (byte)((uint)fVar7 >> 0x10) & bVar62;
          auVar45[0xf] = (byte)((uint)fVar7 >> 0x18) & bVar63;
          fStack_ac = (float)((ulong)auVar41._0_8_ >> 0x20);
          fVar147 = fVar91 * fVar123 +
                    (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar126 +
                    fVar78 * fVar127 + fStack_ac;
          fVar5 = auVar87._12_4_ * fVar123 +
                  (float)CONCAT13(bVar118,CONCAT12(bVar117,CONCAT11(bVar116,bVar115))) * fVar126 +
                  auVar76._12_4_ * fVar127 + auVar45._12_4_;
          local_b0 = fVar83 * fVar132 +
                     (float)CONCAT13(bVar102,CONCAT12(bVar100,CONCAT11(bVar98,bVar96))) * fVar135 +
                     fVar82 * fVar136 + fVar64;
          fStack_ac = fVar91 * fVar132 +
                      (float)CONCAT13(bVar106,CONCAT12(bVar105,CONCAT11(bVar104,bVar103))) * fVar135
                      + fVar78 * fVar136 + fStack_ac;
          fStack_a8 = auVar85._8_4_ * fVar132 +
                      (float)CONCAT13(bVar114,CONCAT12(bVar112,CONCAT11(bVar110,bVar108))) * fVar135
                      + auVar65._8_4_ * fVar136 + auVar41._8_4_;
          fStack_a4 = auVar87._12_4_ * fVar132 +
                      (float)CONCAT13(bVar118,CONCAT12(bVar117,CONCAT11(bVar116,bVar115))) * fVar135
                      + auVar76._12_4_ * fVar136 + auVar45._12_4_;
          auVar88._8_8_ = uVar131;
          auVar88._0_8_ = uVar130;
          uStack_98 = CONCAT17((char)((uint)fVar5 >> 0x18),
                               CONCAT16((char)((uint)fVar5 >> 0x10),
                                        CONCAT15((char)((uint)fVar5 >> 8),
                                                 CONCAT14(SUB41(fVar5,0),
                                                          auVar85._8_4_ * fVar123 +
                                                          (float)CONCAT13(bVar114,CONCAT12(bVar112,
                                                  CONCAT11(bVar110,bVar108))) * fVar126 +
                                                  auVar65._8_4_ * fVar127 + auVar41._8_4_))));
          uStack_a0 = CONCAT17((char)((uint)fVar147 >> 0x18),
                               CONCAT16((char)((uint)fVar147 >> 0x10),
                                        CONCAT15((char)((uint)fVar147 >> 8),
                                                 CONCAT14(SUB41(fVar147,0),
                                                          fVar83 * fVar123 +
                                                          (float)CONCAT13(bVar102,CONCAT12(bVar100,
                                                  CONCAT11(bVar98,bVar96))) * fVar126 +
                                                  fVar82 * fVar127 + fVar64))));
          auVar25._8_4_ = uVar32;
          auVar25._0_8_ = uVar30;
          auVar25._12_4_ = uVar33;
          uVar34 = FUN_00dd6430(auVar25,uVar31,auVar88,&uStack_a0,&local_b0,puVar26,puVar28,puVar27,
                                puVar29);
          if ((uVar34 & 1) != 0) goto LAB_00eb5590;
          uVar35 = uVar1;
        } while (uVar1 < 3);
        lVar36 = lVar36 + 3;
        plVar37 = plVar37 + 6;
      } while ((int)lVar36 < (int)param_1[0x11f] * 3);
    }
    uVar95 = 0;
LAB_00eb5594:
    *(undefined1 *)((long)param_1 + 0x8fc) = uVar95;
  }
  return uVar95;
}


