/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00244220; name: FUN_00244220
 */


/* WARNING: Removing unreachable block (ram,0x00244304) */

void FUN_00244220(long param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulong uVar52;
  int iVar53;
  uint uVar54;
  long lVar55;
  uint *puVar56;
  long lVar57;
  uint uVar58;
  long lVar59;
  byte bVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  bool bVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined2 uVar87;
  undefined2 uVar88;
  undefined2 uVar89;
  undefined2 uVar90;
  undefined2 uVar91;
  undefined2 uVar92;
  undefined2 uVar93;
  undefined2 uVar94;
  undefined2 uVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  undefined1 auVar97 [16];
  float fVar100;
  float fVar101;
  float fVar104;
  ulong uVar102;
  float fVar105;
  undefined1 auVar103 [16];
  float fVar106;
  float fVar107;
  float fVar110;
  ulong uVar108;
  float fVar111;
  undefined1 auVar109 [16];
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar119;
  ulong uVar116;
  float fVar120;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar121;
  float fVar122;
  float fVar125;
  float fVar126;
  float fVar127;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  ulong uVar128;
  float fVar129;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar130 [16];
  float fVar134;
  float fVar135;
  float fVar138;
  ulong uVar136;
  float fVar139;
  undefined1 auVar137 [16];
  float fVar140;
  float fVar141;
  float fVar145;
  ulong uVar142;
  ulong uVar143;
  float fVar146;
  undefined1 auVar144 [16];
  float fVar147;
  float fVar148;
  float fVar150;
  float fVar151;
  undefined1 auVar149 [16];
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  ulong uVar161;
  undefined4 uStack_474;
  float fStack_2c8;
  float fStack_2c4;
  uint local_2a4;
  uint local_2a0 [128];
  
  uVar18 = *(undefined8 *)(param_2 + 9);
  fVar84 = param_2[0xb];
  fVar9 = param_2[0xc];
  fVar12 = param_2[0xd];
  lVar57 = *(long *)(param_1 + 0x58);
  fVar15 = param_2[0xe];
  fVar20 = *param_2;
  fVar29 = param_2[3];
  uVar58 = *(uint *)(param_1 + 0x44);
  fVar22 = param_2[1];
  fVar31 = param_2[4];
  fVar36 = param_2[6];
  fVar24 = param_2[2];
  fVar33 = param_2[5];
  fVar37 = param_2[7];
  fVar38 = param_2[8];
  uVar54 = uVar58 - 1;
  if ((int)uVar54 < 0) {
    lVar55 = 0;
    goto LAB_00244364;
  }
  if (uVar58 == 1) {
    lVar55 = 0;
    iVar53 = 0;
LAB_00244350:
    local_2a0[lVar55] = iVar53 * 0x70;
  }
  else {
    lVar55 = 0;
    puVar56 = local_2a0 + 1;
    uVar48 = uVar58 * 0x70;
    do {
      lVar55 = lVar55 + 2;
      puVar56[-1] = uVar48 - 0x70;
      *puVar56 = uVar48 - 0xe0;
      puVar56 = puVar56 + 2;
      uVar48 = uVar48 - 0xe0;
    } while ((ulong)uVar58 - ((ulong)uVar58 & 1) != lVar55);
    iVar53 = uVar54 - (int)lVar55;
    if ((uVar58 & 1) != 0) goto LAB_00244350;
  }
  lVar55 = (ulong)uVar54 + 1;
LAB_00244364:
  fVar77 = (float)uVar18;
  fVar80 = (float)((ulong)uVar18 >> 0x20);
  auVar40._4_4_ = fVar84;
  auVar40._0_4_ = fVar84;
  uVar58 = 0;
  bVar4 = true;
  fVar78 = fVar20 * fVar9 + 0.0;
  fVar81 = fVar22 * fVar9 + 0.0;
  fVar85 = fVar24 * fVar9 + 0.0;
  uVar61 = (undefined1)((uint)fVar78 >> 8);
  uVar64 = (undefined1)((uint)fVar78 >> 0x10);
  uVar67 = (undefined1)((uint)fVar78 >> 0x18);
  uVar62 = (undefined1)((uint)fVar81 >> 8);
  uVar65 = (undefined1)((uint)fVar81 >> 0x10);
  uVar68 = (undefined1)((uint)fVar81 >> 0x18);
  uVar63 = (undefined1)((uint)fVar85 >> 8);
  uVar66 = (undefined1)((uint)fVar85 >> 0x10);
  uVar69 = (undefined1)((uint)fVar85 >> 0x18);
  fVar10 = fVar29 * fVar12 + 0.0;
  fVar13 = fVar31 * fVar12 + 0.0;
  fVar16 = fVar33 * fVar12 + 0.0;
  uVar70 = (undefined1)((uint)fVar16 >> 8);
  uVar72 = (undefined1)((uint)fVar16 >> 0x10);
  uVar74 = (undefined1)((uint)fVar16 >> 0x18);
  fVar11 = fVar36 * fVar15 + 0.0;
  fVar14 = fVar37 * fVar15 + 0.0;
  fVar17 = fVar38 * fVar15 + 0.0;
  uVar71 = (undefined1)((uint)fVar17 >> 8);
  uVar73 = (undefined1)((uint)fVar17 >> 0x10);
  uVar75 = (undefined1)((uint)fVar17 >> 0x18);
  auVar43._4_4_ = 0.0 - fVar9;
  auVar43._0_4_ = 0.0 - fVar9;
  auVar44._4_4_ = 0.0 - fVar12;
  auVar44._0_4_ = 0.0 - fVar12;
  fVar83 = 0.0 - fVar15;
  fVar86 = 0.0 - fVar15;
  uStack_474 = (undefined4)
               (CONCAT17((char)((uint)fVar86 >> 0x18),
                         CONCAT16((char)((uint)fVar86 >> 0x10),
                                  CONCAT15((char)((uint)fVar86 >> 8),
                                           CONCAT14(SUB41(fVar86,0),0.0 - fVar15)))) >> 0x20);
  auVar45[4] = SUB41(fVar83,0);
  auVar45._0_4_ = 0.0 - fVar15;
  auVar45[5] = (char)((uint)fVar83 >> 8);
  auVar45[6] = (char)((uint)fVar83 >> 0x10);
  auVar45[7] = (char)((uint)fVar83 >> 0x18);
  do {
    lVar59 = lVar55 + -1;
    puVar56 = local_2a0 + lVar59;
    uVar54 = uVar58;
    if (!bVar4) {
      uVar54 = *puVar56;
    }
    pauVar3 = (undefined1 (*) [16])(lVar57 + (ulong)uVar54);
    auVar40._8_4_ = fVar84;
    auVar51._4_4_ = fVar80;
    auVar51._0_4_ = fVar80;
    auVar51._8_4_ = fVar80;
    auVar51._12_4_ = fVar80;
    auVar47._4_4_ = fVar77;
    auVar47._0_4_ = fVar77;
    auVar47._8_4_ = fVar77;
    pauVar2 = pauVar3 + 3;
    uVar18 = *(undefined8 *)(pauVar3[3] + 8);
    pauVar7 = pauVar3 + 4;
    uVar34 = *(undefined8 *)(pauVar3[4] + 8);
    uVar90 = (undefined2)((ulong)uVar34 >> 0x10);
    uVar91 = (undefined2)((ulong)uVar34 >> 0x20);
    uVar92 = (undefined2)((ulong)uVar34 >> 0x30);
    auVar27._10_2_ = uVar90;
    auVar27._0_10_ = *(unkbyte10 *)*pauVar7;
    auVar27._12_2_ = uVar91;
    auVar27._14_2_ = uVar92;
    auVar103 = NEON_fmin(auVar27,auVar51,4);
    auVar124[9] = (char)((ulong)uVar18 >> 8);
    auVar124._0_9_ = *(unkbyte9 *)*pauVar2;
    auVar124[10] = (char)((ulong)uVar18 >> 0x10);
    auVar124[0xb] = (char)((ulong)uVar18 >> 0x18);
    auVar124[0xc] = (char)((ulong)uVar18 >> 0x20);
    auVar124[0xd] = (char)((ulong)uVar18 >> 0x28);
    auVar124[0xe] = (char)((ulong)uVar18 >> 0x30);
    auVar124[0xf] = (char)((ulong)uVar18 >> 0x38);
    auVar47._12_4_ = fVar77;
    auVar97 = NEON_fmin(auVar124,auVar47,4);
    pauVar1 = pauVar3 + 5;
    uVar25 = *(undefined8 *)(pauVar3[5] + 8);
    uVar87 = (undefined2)((ulong)uVar25 >> 0x10);
    uVar88 = (undefined2)((ulong)uVar25 >> 0x20);
    uVar89 = (undefined2)((ulong)uVar25 >> 0x30);
    uVar19 = *(undefined8 *)(*pauVar3 + 8);
    auVar27 = *pauVar3;
    pauVar8 = pauVar3 + 1;
    uVar39 = *(undefined8 *)(pauVar3[1] + 8);
    uVar93 = (undefined2)((ulong)uVar39 >> 0x10);
    uVar94 = (undefined2)((ulong)uVar39 >> 0x20);
    uVar95 = (undefined2)((ulong)uVar39 >> 0x30);
    fStack_2c8 = (float)uVar18;
    fStack_2c4 = (float)((ulong)uVar18 >> 0x20);
    auVar124 = pauVar3[2];
    auVar109._10_2_ = uVar87;
    auVar109._0_10_ = *(unkbyte10 *)*pauVar1;
    auVar109._12_2_ = uVar88;
    auVar109._14_2_ = uVar89;
    auVar40._12_4_ = fVar84;
    auVar109 = NEON_fmin(auVar109,auVar40,4);
    fVar79 = (float)*(undefined8 *)*pauVar2;
    fVar82 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    fVar30 = (float)*(undefined8 *)*pauVar7;
    fVar32 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
    fVar35 = (float)((ulong)uVar34 >> 0x20);
    auVar137._10_2_ = uVar93;
    auVar137._0_10_ = *(unkbyte10 *)*pauVar8;
    auVar137._12_2_ = uVar94;
    auVar137._14_2_ = uVar95;
    auVar144 = NEON_fmax(auVar137,auVar103,4);
    fVar21 = (float)*(undefined8 *)*pauVar1;
    fVar23 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    fVar26 = (float)((ulong)uVar25 >> 0x20);
    local_2a4 = *(uint *)pauVar3[6] & 0xfffffffe;
    auVar149 = NEON_fmax(auVar124,auVar109,4);
    auVar103[9] = (char)((ulong)uVar19 >> 8);
    auVar103._0_9_ = *(unkbyte9 *)*pauVar3;
    auVar103[10] = (char)((ulong)uVar19 >> 0x10);
    auVar103[0xb] = (char)((ulong)uVar19 >> 0x18);
    auVar103[0xc] = (char)((ulong)uVar19 >> 0x20);
    auVar103[0xd] = (char)((ulong)uVar19 >> 0x28);
    auVar103[0xe] = (char)((ulong)uVar19 >> 0x30);
    auVar103[0xf] = (char)((ulong)uVar19 >> 0x38);
    auVar137 = NEON_fmax(auVar103,auVar97,4);
    fVar153 = auVar149._0_4_ - fVar84;
    fVar155 = auVar149._4_4_ - fVar84;
    fVar157 = auVar149._8_4_ - fVar84;
    fVar159 = auVar149._12_4_ - fVar84;
    fVar129 = auVar144._0_4_ - fVar80;
    fVar131 = auVar144._4_4_ - fVar80;
    fVar132 = auVar144._8_4_ - fVar80;
    fVar133 = auVar144._12_4_ - fVar80;
    fVar96 = ((float)*(undefined8 *)*pauVar3 + fVar79) * 0.5 + 0.0;
    fVar98 = ((float)((ulong)*(undefined8 *)*pauVar3 >> 0x20) + fVar82) * 0.5 + 0.0;
    fVar99 = ((float)uVar19 + fStack_2c8) * 0.5 + 0.0;
    fVar100 = ((float)((ulong)uVar19 >> 0x20) + fStack_2c4) * 0.5 + 0.0;
    fVar101 = ((float)*(undefined8 *)*pauVar8 + fVar30) * 0.5 + 0.0;
    fVar104 = ((float)((ulong)*(undefined8 *)*pauVar8 >> 0x20) + fVar32) * 0.5 + 0.0;
    fVar105 = ((float)uVar39 + (float)uVar34) * 0.5 + 0.0;
    fVar106 = ((float)((ulong)uVar39 >> 0x20) + fVar35) * 0.5 + 0.0;
    fVar107 = (auVar124._0_4_ + fVar21) * 0.5 + 0.0;
    fVar110 = (auVar124._4_4_ + fVar23) * 0.5 + 0.0;
    fVar111 = (auVar124._8_4_ + (float)uVar25) * 0.5 + 0.0;
    fVar112 = (auVar124._12_4_ + fVar26) * 0.5 + 0.0;
    fVar83 = (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                              CONCAT16((char)((uint)fVar38 >> 0x10),
                                       CONCAT15((char)((uint)fVar38 >> 8),
                                                CONCAT14(SUB41(fVar38,0),fVar38)))) >> 0x20);
    fVar86 = (float)(CONCAT26((short)((uint)fVar38 >> 0x10),CONCAT24(SUB42(fVar38,0),fVar38)) >>
                    0x20);
    fVar122 = auVar137._0_4_ - fVar77;
    fVar125 = auVar137._4_4_ - fVar77;
    fVar126 = auVar137._8_4_ - fVar77;
    fVar127 = auVar137._12_4_ - fVar77;
    auVar117._0_4_ = fVar20 * fVar122 + fVar22 * fVar129 + fVar24 * fVar153 + 0.0;
    auVar117._4_4_ = fVar20 * fVar125 + fVar22 * fVar131 + fVar24 * fVar155 + 0.0;
    auVar117._8_4_ = fVar20 * fVar126 + fVar22 * fVar132 + fVar24 * fVar157 + 0.0;
    auVar117._12_4_ = fVar20 * fVar127 + fVar22 * fVar133 + fVar24 * fVar159 + 0.0;
    auVar123._0_4_ = fVar36 * fVar122 + fVar37 * fVar129 + fVar38 * fVar153 + 0.0;
    auVar123._4_4_ = fVar36 * fVar125 + fVar37 * fVar131 + fVar83 * fVar155 + 0.0;
    auVar123._8_4_ = fVar36 * fVar126 + fVar37 * fVar132 + fVar38 * fVar157 + 0.0;
    auVar123._12_4_ = fVar36 * fVar127 + fVar37 * fVar133 + fVar86 * fVar159 + 0.0;
    auVar50._4_4_ = fVar9;
    auVar50._0_4_ = fVar9;
    auVar50._8_4_ = fVar9;
    auVar50._12_4_ = fVar9;
    auVar103 = NEON_fmin(auVar117,auVar50,4);
    auVar49._4_4_ = fVar12;
    auVar49._0_4_ = fVar12;
    auVar49._8_4_ = fVar12;
    auVar49._12_4_ = fVar12;
    auVar41._4_4_ = fVar29 * fVar125 + fVar31 * fVar131 + fVar33 * fVar155 + 0.0;
    auVar41._0_4_ = fVar29 * fVar122 + fVar31 * fVar129 + fVar33 * fVar153 + 0.0;
    auVar41._8_4_ = fVar29 * fVar126 + fVar31 * fVar132 + fVar33 * fVar157 + 0.0;
    auVar41._12_4_ = fVar29 * fVar127 + fVar31 * fVar133 + fVar33 * fVar159 + 0.0;
    auVar97 = NEON_fmin(auVar41,auVar49,4);
    auVar42._4_4_ = fVar15;
    auVar42._0_4_ = fVar15;
    auVar42._8_4_ = fVar15;
    auVar42._12_4_ = fVar15;
    auVar109 = NEON_fmin(auVar123,auVar42,4);
    auVar43._8_4_ = 0.0 - fVar9;
    auVar43._12_4_ = 0.0 - fVar9;
    auVar103 = NEON_fmax(auVar43,auVar103,4);
    auVar44._8_4_ = 0.0 - fVar12;
    auVar44._12_4_ = 0.0 - fVar12;
    auVar97 = NEON_fmax(auVar44,auVar97,4);
    auVar45._8_4_ = 0.0 - fVar15;
    fVar153 = auVar97._0_4_;
    fVar155 = auVar97._4_4_;
    fVar157 = auVar97._8_4_;
    fVar159 = auVar97._12_4_;
    auVar45._12_4_ = uStack_474;
    auVar109 = NEON_fmax(auVar45,auVar109,4);
    fVar129 = auVar109._0_4_;
    fVar131 = auVar109._4_4_;
    fVar132 = auVar109._8_4_;
    fVar133 = auVar109._12_4_;
    fVar122 = auVar103._0_4_;
    fVar125 = auVar103._4_4_;
    fVar126 = auVar103._8_4_;
    fVar127 = auVar103._12_4_;
    auVar130._0_4_ = fVar20 * fVar122 + fVar29 * fVar153 + fVar77 + fVar36 * fVar129;
    auVar130._4_4_ = fVar20 * fVar125 + fVar29 * fVar155 + fVar77 + fVar36 * fVar131;
    auVar130._8_4_ = fVar20 * fVar126 + fVar29 * fVar157 + fVar77 + fVar36 * fVar132;
    auVar130._12_4_ = fVar20 * fVar127 + fVar29 * fVar159 + fVar77 + fVar36 * fVar133;
    fVar154 = fVar22 * fVar122 + fVar31 * fVar153 + fVar80 + fVar37 * fVar129;
    fVar156 = fVar22 * fVar125 + fVar31 * fVar155 + fVar80 + fVar37 * fVar131;
    fVar158 = fVar22 * fVar126 + fVar31 * fVar157 + fVar80 + fVar37 * fVar132;
    fVar160 = fVar22 * fVar127 + fVar31 * fVar159 + fVar80 + fVar37 * fVar133;
    auVar118._0_4_ = fVar24 * fVar122 + fVar33 * fVar153 + fVar84 + fVar38 * fVar129;
    auVar118._4_4_ = fVar24 * fVar125 + fVar33 * fVar155 + fVar84 + fVar83 * fVar131;
    auVar118._8_4_ = fVar24 * fVar126 + fVar33 * fVar157 + fVar84 + fVar38 * fVar132;
    auVar118._12_4_ = fVar24 * fVar127 + fVar33 * fVar159 + fVar84 + fVar86 * fVar133;
    auVar28._10_2_ = uVar90;
    auVar28._0_10_ = *(unkbyte10 *)*pauVar7;
    auVar28._12_2_ = uVar91;
    auVar28._14_2_ = uVar92;
    auVar46._4_4_ = fVar156;
    auVar46._0_4_ = fVar154;
    auVar46._8_4_ = fVar158;
    auVar46._12_4_ = fVar160;
    auVar103 = NEON_fmin(auVar28,auVar46,4);
    fVar148 = auVar118._0_4_ - auVar149._0_4_;
    fVar150 = auVar118._4_4_ - auVar149._4_4_;
    fVar151 = auVar118._8_4_ - auVar149._8_4_;
    fVar152 = auVar118._12_4_ - auVar149._12_4_;
    auVar97._10_2_ = uVar87;
    auVar97._0_10_ = *(unkbyte10 *)*pauVar1;
    auVar97._12_2_ = uVar88;
    auVar97._14_2_ = uVar89;
    auVar109 = NEON_fmin(auVar97,auVar118,4);
    fVar141 = fVar154 - auVar144._0_4_;
    fVar145 = fVar156 - auVar144._4_4_;
    fVar146 = fVar158 - auVar144._8_4_;
    fVar147 = fVar160 - auVar144._12_4_;
    auVar109 = NEON_fmax(auVar124,auVar109,4);
    auVar144._10_2_ = uVar93;
    auVar144._0_10_ = *(unkbyte10 *)*pauVar8;
    auVar144._12_2_ = uVar94;
    auVar144._14_2_ = uVar95;
    auVar124 = NEON_fmax(auVar144,auVar103,4);
    fVar153 = (float)(CONCAT17(uVar69,CONCAT16(uVar66,CONCAT15(uVar63,CONCAT14(SUB41(fVar85,0),
                                                                               fVar85)))) >> 0x20);
    fVar155 = (float)(CONCAT17(uVar69,CONCAT16(uVar66,CONCAT15(uVar63,CONCAT14(SUB41(fVar85,0),
                                                                               fVar85)))) >> 0x20);
    fVar157 = (float)(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(SUB41(fVar16,0),
                                                                               fVar16)))) >> 0x20);
    fVar159 = (float)(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(SUB41(fVar16,0),
                                                                               fVar16)))) >> 0x20);
    fVar132 = (float)(CONCAT17(uVar68,CONCAT16(uVar65,CONCAT15(uVar62,CONCAT14(SUB41(fVar81,0),
                                                                               fVar81)))) >> 0x20);
    fVar133 = (float)(CONCAT17(uVar68,CONCAT16(uVar65,CONCAT15(uVar62,CONCAT14(SUB41(fVar81,0),
                                                                               fVar81)))) >> 0x20);
    fVar113 = (float)(CONCAT17(uVar75,CONCAT16(uVar73,CONCAT15(uVar71,CONCAT14(SUB41(fVar17,0),
                                                                               fVar17)))) >> 0x20);
    fVar114 = (float)(CONCAT17(uVar75,CONCAT16(uVar73,CONCAT15(uVar71,CONCAT14(SUB41(fVar17,0),
                                                                               fVar17)))) >> 0x20);
    fVar135 = auVar130._0_4_ - auVar137._0_4_;
    fVar138 = auVar130._4_4_ - auVar137._4_4_;
    fVar139 = auVar130._8_4_ - auVar137._8_4_;
    fVar140 = auVar130._12_4_ - auVar137._12_4_;
    fVar30 = fVar30 - fVar101;
    fVar32 = fVar32 - fVar104;
    fVar125 = (float)uVar34 - fVar105;
    fVar35 = fVar35 - fVar106;
    fVar21 = fVar21 - fVar107;
    fVar23 = fVar23 - fVar110;
    fVar122 = (float)uVar25 - fVar111;
    fVar26 = fVar26 - fVar112;
    fVar115 = auVar118._0_4_ - auVar109._0_4_;
    fVar119 = auVar118._4_4_ - auVar109._4_4_;
    fVar120 = auVar118._8_4_ - auVar109._8_4_;
    fVar121 = auVar118._12_4_ - auVar109._12_4_;
    uVar142 = CONCAT44(fVar32 * fVar145 + 0.0,fVar30 * fVar141 + 0.0) & 0x7fffffff7fffffff;
    fVar83 = (float)(CONCAT17(uVar67,CONCAT16(uVar64,CONCAT15(uVar61,CONCAT14(SUB41(fVar78,0),fVar78
                                                                             )))) >> 0x20);
    fVar86 = (float)(CONCAT17(uVar67,CONCAT16(uVar64,CONCAT15(uVar61,CONCAT14(SUB41(fVar78,0),fVar78
                                                                             )))) >> 0x20);
    fVar154 = fVar154 - auVar124._0_4_;
    fVar156 = fVar156 - auVar124._4_4_;
    fVar158 = fVar158 - auVar124._8_4_;
    fVar160 = fVar160 - auVar124._12_4_;
    uVar161 = CONCAT44(fVar11 * fVar138 + fVar14 * fVar145 + fVar113 * fVar150 + 0.0,
                       fVar11 * fVar135 + fVar14 * fVar141 + fVar17 * fVar148 + 0.0) &
              0x7fffffff7fffffff;
    fVar126 = ABS((fVar96 * fVar135 + fVar101 * fVar141 + fVar107 * fVar148 + 0.0) -
                  (fVar77 * fVar135 + fVar80 * fVar141 + fVar84 * fVar148 + 0.0));
    fVar127 = ABS((fVar98 * fVar138 + fVar104 * fVar145 + fVar110 * fVar150 + 0.0) -
                  (fVar77 * fVar138 + fVar80 * fVar145 + fVar84 * fVar150 + 0.0));
    fVar129 = ABS((fVar99 * fVar139 + fVar105 * fVar146 + fVar111 * fVar151 + 0.0) -
                  (fVar77 * fVar139 + fVar80 * fVar146 + fVar84 * fVar151 + 0.0));
    fVar131 = ABS((fVar100 * fVar140 + fVar106 * fVar147 + fVar112 * fVar152 + 0.0) -
                  (fVar77 * fVar140 + fVar80 * fVar147 + fVar84 * fVar152 + 0.0));
    uVar136 = CONCAT44((fVar82 - fVar98) * fVar138 + 0.0,(fVar79 - fVar96) * fVar135 + 0.0) &
              0x7fffffff7fffffff;
    uVar143 = CONCAT44(fVar23 * fVar150 + 0.0,fVar21 * fVar148 + 0.0) & 0x7fffffff7fffffff;
    bVar4 = fVar131 + -1e-06 <=
            ABS((fStack_2c4 - fVar100) * fVar140 + 0.0) + ABS(fVar35 * fVar147 + 0.0) +
            ABS(fVar26 * fVar152 + 0.0) +
            ABS(fVar86 * fVar140 + fVar133 * fVar147 + fVar155 * fVar152 + 0.0) +
            ABS(fVar10 * fVar140 + fVar13 * fVar147 + fVar159 * fVar152 + 0.0) +
            ABS(fVar11 * fVar140 + fVar14 * fVar147 + fVar114 * fVar152 + 0.0);
    auVar149._12_4_ = fStack_2c4;
    auVar149._0_12_ = *(undefined1 (*) [12])*pauVar2;
    auVar124 = NEON_fmin(auVar149,auVar130,4);
    auVar124 = NEON_fmax(auVar27,auVar124,4);
    fVar140 = auVar130._0_4_ - auVar124._0_4_;
    fVar147 = auVar130._4_4_ - auVar124._4_4_;
    fVar152 = auVar130._8_4_ - auVar124._8_4_;
    fVar134 = auVar130._12_4_ - auVar124._12_4_;
    bVar5 = auVar27._12_4_ <= fStack_2c4;
    uVar102 = CONCAT44(fVar83 * fVar147 + fVar132 * fVar156 + fVar153 * fVar119 + 0.0,
                       fVar78 * fVar140 + fVar81 * fVar154 + fVar85 * fVar115 + 0.0) &
              0x7fffffff7fffffff;
    uVar108 = CONCAT44(fVar10 * fVar147 + fVar13 * fVar156 + fVar157 * fVar119 + 0.0,
                       fVar10 * fVar140 + fVar13 * fVar154 + fVar16 * fVar115 + 0.0) &
              0x7fffffff7fffffff;
    uVar128 = CONCAT44(fVar11 * fVar147 + fVar14 * fVar156 + fVar113 * fVar119 + 0.0,
                       fVar11 * fVar140 + fVar14 * fVar154 + fVar17 * fVar115 + 0.0) &
              0x7fffffff7fffffff;
    uVar52 = CONCAT44((fVar98 * fVar147 + fVar104 * fVar156 + fVar110 * fVar119 + 0.0) -
                      (fVar77 * fVar147 + fVar80 * fVar156 + fVar84 * fVar119 + 0.0),
                      (fVar96 * fVar140 + fVar101 * fVar154 + fVar107 * fVar115 + 0.0) -
                      (fVar77 * fVar140 + fVar80 * fVar154 + fVar84 * fVar115 + 0.0)) &
             0x7fffffff7fffffff;
    fVar101 = ABS((fVar99 * fVar152 + fVar105 * fVar158 + fVar111 * fVar120 + 0.0) -
                  (fVar77 * fVar152 + fVar80 * fVar158 + fVar84 * fVar120 + 0.0));
    fVar104 = ABS((fVar100 * fVar134 + fVar106 * fVar160 + fVar112 * fVar121 + 0.0) -
                  (fVar77 * fVar134 + fVar80 * fVar160 + fVar84 * fVar121 + 0.0));
    uVar116 = CONCAT44((fVar82 - fVar98) * fVar147 + 0.0,(fVar79 - fVar96) * fVar140 + 0.0) &
              0x7fffffff7fffffff;
    fVar96 = (float)uVar52;
    fVar98 = (float)(uVar52 >> 0x20);
    bVar6 = fVar104 + -1e-06 <=
            ABS((fStack_2c4 - fVar100) * fVar134 + 0.0) + ABS(fVar35 * fVar160 + 0.0) +
            ABS(fVar26 * fVar121 + 0.0) +
            ABS(fVar86 * fVar134 + fVar133 * fVar160 + fVar155 * fVar121 + 0.0) +
            ABS(fVar10 * fVar134 + fVar13 * fVar160 + fVar159 * fVar121 + 0.0) +
            ABS(fVar11 * fVar134 + fVar14 * fVar160 + fVar114 * fVar121 + 0.0);
    bVar76 = ((bVar4 || fVar131 <= 1e-06) && bVar5) && (bVar6 || fVar104 <= 1e-06);
    bVar60 = ((-((float)uVar136 + (float)uVar142 + (float)uVar143 +
                 ABS(fVar78 * fVar135 + fVar81 * fVar141 + fVar85 * fVar148 + 0.0) +
                 ABS(fVar10 * fVar135 + fVar13 * fVar141 + fVar16 * fVar148 + 0.0) + (float)uVar161
                < fVar126 + -1e-06) & -(1e-06 < fVar126) | -(fVar79 < auVar27._0_4_) |
              -((float)uVar116 + ABS(fVar30 * fVar154 + 0.0) + ABS(fVar21 * fVar115 + 0.0) +
                (float)uVar102 + (float)uVar108 + (float)uVar128 < fVar96 + -1e-06) &
              -(1e-06 < fVar96)) ^ 1U) & 1;
    bVar5 = ((bVar4 || fVar131 <= 1e-06) && bVar5) && (bVar6 || fVar104 <= 1e-06);
    if (bVar60 == 0) {
LAB_0024485c:
      bVar4 = false;
    }
    else {
      if ((*(uint *)pauVar3[6] & 1) != 0) {
        uVar52 = (**(code **)*param_5)(param_5,1,&local_2a4);
        bVar76 = bVar5;
        if ((uVar52 & 1) == 0) {
          return;
        }
        goto LAB_0024485c;
      }
      *puVar56 = local_2a4;
      puVar56 = local_2a0 + lVar55;
      bVar4 = true;
      lVar59 = lVar55;
      uVar58 = local_2a4;
    }
    local_2a4 = *(uint *)(pauVar3[6] + 4) & 0xfffffffe;
    if (((fVar127 + -1e-06 <=
          (float)(uVar136 >> 0x20) + (float)(uVar142 >> 0x20) + (float)(uVar143 >> 0x20) +
          ABS(fVar83 * fVar138 + fVar132 * fVar145 + fVar153 * fVar150 + 0.0) +
          ABS(fVar10 * fVar138 + fVar13 * fVar145 + fVar157 * fVar150 + 0.0) +
          (float)(uVar161 >> 0x20) || fVar127 <= 1e-06) && auVar27._4_4_ <= fVar82) &&
        (fVar98 + -1e-06 <=
         (float)(uVar116 >> 0x20) + ABS(fVar32 * fVar156 + 0.0) + ABS(fVar23 * fVar119 + 0.0) +
         (float)(uVar102 >> 0x20) + (float)(uVar108 >> 0x20) + (float)(uVar128 >> 0x20) ||
        fVar98 <= 1e-06)) {
      if ((*(uint *)(pauVar3[6] + 4) & 1) == 0) {
        lVar59 = lVar59 + 1;
        *puVar56 = local_2a4;
        puVar56 = local_2a0 + lVar59;
        bVar4 = true;
        uVar58 = local_2a4;
      }
      else {
        uVar52 = (**(code **)*param_5)(bVar60,param_5,1,&local_2a4);
        bVar76 = bVar5;
        if ((uVar52 & 1) == 0) {
          return;
        }
      }
    }
    local_2a4 = *(uint *)(pauVar3[6] + 8) & 0xfffffffe;
    if (((fVar129 + -1e-06 <=
          ABS((fStack_2c8 - fVar99) * fVar139 + 0.0) + ABS(fVar125 * fVar146 + 0.0) +
          ABS(fVar122 * fVar151 + 0.0) +
          ABS(fVar78 * fVar139 + fVar81 * fVar146 + fVar85 * fVar151 + 0.0) +
          ABS(fVar10 * fVar139 + fVar13 * fVar146 + fVar16 * fVar151 + 0.0) +
          ABS(fVar11 * fVar139 + fVar14 * fVar146 + fVar17 * fVar151 + 0.0) || fVar129 <= 1e-06) &&
        auVar27._8_4_ <= fStack_2c8) &&
        (fVar101 + -1e-06 <=
         ABS((fStack_2c8 - fVar99) * fVar152 + 0.0) + ABS(fVar125 * fVar158 + 0.0) +
         ABS(fVar122 * fVar120 + 0.0) +
         ABS(fVar78 * fVar152 + fVar81 * fVar158 + fVar85 * fVar120 + 0.0) +
         ABS(fVar10 * fVar152 + fVar13 * fVar158 + fVar16 * fVar120 + 0.0) +
         ABS(fVar11 * fVar152 + fVar14 * fVar158 + fVar17 * fVar120 + 0.0) || fVar101 <= 1e-06)) {
      if ((*(uint *)(pauVar3[6] + 8) & 1) == 0) {
        lVar59 = lVar59 + 1;
        *puVar56 = local_2a4;
        puVar56 = local_2a0 + lVar59;
        bVar4 = true;
        uVar58 = local_2a4;
      }
      else {
        uVar52 = (**(code **)*param_5)(bVar60,param_5,1,&local_2a4);
        bVar76 = bVar5;
        if ((uVar52 & 1) == 0) {
          return;
        }
      }
    }
    local_2a4 = *(uint *)(pauVar3[6] + 0xc) & 0xfffffffe;
    lVar55 = lVar59;
    if (bVar76) {
      if ((*(uint *)(pauVar3[6] + 0xc) & 1) == 0) {
        bVar4 = true;
        *puVar56 = local_2a4;
        lVar55 = lVar59 + 1;
        uVar58 = local_2a4;
      }
      else {
        uVar52 = (**(code **)*param_5)(bVar60,param_5,1,&local_2a4);
        if ((uVar52 & 1) == 0) {
          return;
        }
      }
    }
    if (lVar55 < 1) {
      return;
    }
  } while( true );
}


