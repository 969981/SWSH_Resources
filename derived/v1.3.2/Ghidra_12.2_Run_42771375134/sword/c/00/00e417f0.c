/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e417f0; name: FUN_00e417f0
 */


/* WARNING: Removing unreachable block (ram,0x00e41c30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e417f0(long param_1,long *param_2)

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
  bool bVar27;
  uint uVar28;
  ulong uVar29;
  undefined1 (*pauVar30) [16];
  bool bVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [12];
  float extraout_var;
  undefined1 auVar35 [16];
  float fVar39;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar53;
  undefined1 auVar54 [12];
  int iVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar62;
  float fVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iVar63;
  int iVar65;
  undefined1 auVar60 [16];
  undefined8 uVar66;
  undefined8 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined8 uVar72;
  float fVar76;
  undefined8 uVar73;
  float fVar77;
  float fVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar79;
  float fVar87;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  int iVar89;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  int iVar88;
  int iVar90;
  undefined1 auVar86 [16];
  undefined1 uVar91;
  byte bVar92;
  undefined1 uVar93;
  byte bVar94;
  undefined1 uVar95;
  byte bVar96;
  undefined1 uVar97;
  byte bVar98;
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
  undefined1 uVar117;
  undefined1 uVar118;
  float fVar119;
  float fVar120;
  undefined4 uVar121;
  undefined4 uVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined8 uVar125;
  undefined8 uVar126;
  undefined1 auStack_140 [4];
  float local_13c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
  FUN_007101c0(param_2 + 0x14);
  uVar67 = DAT_01cd50f8;
  pauVar30 = (undefined1 (*) [16])(param_2 + 0x16);
  fVar32 = *(float *)*pauVar30;
  fVar33 = *(float *)((long)param_2 + 0xb4);
  fVar42 = *(float *)(param_2 + 0x17);
  fVar39 = *(float *)((long)param_2 + 0xbc);
  fVar40 = *(float *)(param_1 + 0x4f0) - fVar32;
  fVar47 = *(float *)(param_1 + 0x4f4) - fVar33;
  fVar49 = *(float *)(param_1 + 0x4f8) - fVar42;
  fVar51 = *(float *)(param_1 + 0x4fc) - fVar39;
  auVar58._0_4_ = fVar40 * fVar40;
  auVar58._4_4_ = fVar47 * fVar47;
  auVar58._8_4_ = fVar49 * fVar49;
  auVar58._12_4_ = fVar51 * fVar51;
  auVar55 = NEON_ext(auVar58,auVar58,8,1);
  if ((DAT_01d4c708 < auVar55._0_4_ + auVar58._0_4_ + auVar55._4_4_ + auVar58._4_4_) ||
     (DAT_01d4c4d4 < ABS(extraout_var - *(float *)(param_1 + 0x578)))) {
    if ((char)param_2[0x18] == '\0') {
      fVar49 = *(float *)(param_2 + 0xc);
      fVar51 = *(float *)((long)param_2 + 100);
      fVar62 = *(float *)(param_2 + 0xd);
      fVar40 = *(float *)((long)param_2 + 0x6c);
      fVar64 = *(float *)(param_2 + 0xe);
      fVar41 = *(float *)((long)param_2 + 0x74);
      fVar48 = *(float *)(param_2 + 0xf);
      fVar47 = *(float *)((long)param_2 + 0x7c);
      auVar55 = *(undefined1 (*) [16])(param_2 + 0x10);
      fVar32 = *(float *)(param_2 + 0x12);
      fVar33 = *(float *)((long)param_2 + 0x94);
      fVar42 = *(float *)(param_2 + 0x13);
      fVar39 = *(float *)((long)param_2 + 0x9c);
    }
    else {
      auVar58 = *(undefined1 (*) [16])(param_2 + 0x14);
      fVar49 = (float)CONCAT13(auVar58[3] & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                               CONCAT12(auVar58[2] & (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                        CONCAT11(auVar58[1] & (byte)((ulong)DAT_01d4ab50 >> 8),
                                                 auVar58[0] & (byte)DAT_01d4ab50)));
      auVar54._0_8_ =
           CONCAT17(auVar58[7] & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                    CONCAT16(auVar58[6] & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                             CONCAT15(auVar58[5] & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                      CONCAT14(auVar58[4] & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                               fVar49))));
      auVar54[8] = auVar58[8] & (byte)DAT_01d4ab58;
      auVar54[9] = auVar58[9] & (byte)((ulong)DAT_01d4ab58 >> 8);
      auVar54[10] = auVar58[10] & (byte)((ulong)DAT_01d4ab58 >> 0x10);
      auVar54[0xb] = auVar58[0xb] & (byte)((ulong)DAT_01d4ab58 >> 0x18);
      auVar56[0xc] = auVar58[0xc] & (byte)((ulong)DAT_01d4ab58 >> 0x20);
      auVar56._0_12_ = auVar54;
      auVar56[0xd] = auVar58[0xd] & (byte)((ulong)DAT_01d4ab58 >> 0x28);
      auVar56[0xe] = auVar58[0xe] & (byte)((ulong)DAT_01d4ab58 >> 0x30);
      auVar56[0xf] = auVar58[0xf] & (byte)((ulong)DAT_01d4ab58 >> 0x38);
      uVar66 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5188);
      uVar73 = NEON_ext(auVar54._0_8_,auVar54._0_8_,4,1);
      fVar87 = (float)((ulong)uVar73 >> 0x20);
      uVar72 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5048);
      uVar43 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5418);
      fVar119 = (float)uVar66;
      fVar120 = (float)((ulong)uVar66 >> 0x20);
      uVar66 = a64_TBL(ZEXT816(0),auVar56,DAT_01cd5158);
      fVar71 = (float)uVar72 * (float)uVar72;
      fVar76 = (float)((ulong)uVar72 >> 0x20);
      fVar76 = fVar76 * fVar76;
      fVar77 = (float)uVar66;
      fVar78 = (float)((ulong)uVar66 >> 0x20);
      *(undefined1 *)(param_2 + 0x18) = 0;
      uVar67 = a64_TBL(ZEXT816(0),auVar56,uVar67);
      fVar79 = (float)uVar73 * (float)uVar73;
      fVar87 = fVar87 * fVar87;
      fVar49 = (float)uVar43 * fVar49;
      fVar51 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)auVar54._0_8_ >> 0x20);
      fVar62 = fVar119 * auVar54._8_4_;
      fVar64 = fVar120 * auVar56._12_4_;
      fVar40 = auVar58._12_4_;
      fVar41 = (float)uVar67 * fVar40;
      fVar48 = (float)((ulong)uVar67 >> 0x20) * fVar40;
      fVar49 = fVar49 + fVar49;
      fVar51 = fVar51 + fVar51;
      fVar62 = fVar62 + fVar62;
      fVar64 = fVar64 + fVar64;
      fVar41 = fVar41 + fVar41;
      fVar48 = fVar48 + fVar48;
      fVar50 = fVar77 * fVar40 + fVar77 * fVar40;
      fVar52 = fVar78 * fVar40 + fVar78 * fVar40;
      fVar40 = fVar49 + fVar41;
      fVar47 = fVar51 + fVar48;
      uVar91 = SUB41(fVar47,0);
      uVar93 = (undefined1)((uint)fVar47 >> 8);
      uVar95 = (undefined1)((uint)fVar47 >> 0x10);
      uVar97 = (undefined1)((uint)fVar47 >> 0x18);
      fVar47 = fVar62 + fVar50;
      uVar99 = SUB41(fVar47,0);
      uVar100 = (undefined1)((uint)fVar47 >> 8);
      uVar101 = (undefined1)((uint)fVar47 >> 0x10);
      uVar102 = (undefined1)((uint)fVar47 >> 0x18);
      fVar47 = fVar64 + fVar52;
      uVar103 = SUB41(fVar47,0);
      uVar104 = (undefined1)((uint)fVar47 >> 8);
      uVar105 = (undefined1)((uint)fVar47 >> 0x10);
      uVar106 = (undefined1)((uint)fVar47 >> 0x18);
      fVar49 = fVar49 - fVar41;
      fVar51 = fVar51 - fVar48;
      uVar107 = SUB41(fVar51,0);
      uVar108 = (undefined1)((uint)fVar51 >> 8);
      uVar109 = (undefined1)((uint)fVar51 >> 0x10);
      uVar110 = (undefined1)((uint)fVar51 >> 0x18);
      fVar62 = fVar62 - fVar50;
      uVar111 = SUB41(fVar62,0);
      uVar112 = (undefined1)((uint)fVar62 >> 8);
      uVar113 = (undefined1)((uint)fVar62 >> 0x10);
      uVar114 = (undefined1)((uint)fVar62 >> 0x18);
      fVar64 = fVar64 - fVar52;
      uVar115 = SUB41(fVar64,0);
      uVar116 = (undefined1)((uint)fVar64 >> 8);
      uVar117 = (undefined1)((uint)fVar64 >> 0x10);
      uVar118 = (undefined1)((uint)fVar64 >> 0x18);
      auVar45._0_8_ =
           CONCAT44((float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar76 + fVar76 + fVar87 + fVar87),
                    (float)_DAT_01d4a130 - (fVar71 + fVar71 + fVar79 + fVar79));
      auVar45._8_4_ =
           (float)_UNK_01d4a138 -
           (fVar77 * fVar77 + fVar77 * fVar77 + fVar119 * fVar119 + fVar119 * fVar119);
      auVar45._12_4_ =
           (float)((ulong)_UNK_01d4a138 >> 0x20) -
           (fVar78 * fVar78 + fVar78 * fVar78 + fVar120 * fVar120 + fVar120 * fVar120);
      auVar1[4] = uVar91;
      auVar1._0_4_ = fVar40;
      auVar1[5] = uVar93;
      auVar1[6] = uVar95;
      auVar1[7] = uVar97;
      auVar1[8] = uVar99;
      auVar1[9] = uVar100;
      auVar1[10] = uVar101;
      auVar1[0xb] = uVar102;
      auVar1[0xc] = uVar103;
      auVar1[0xd] = uVar104;
      auVar1[0xe] = uVar105;
      auVar1[0xf] = uVar106;
      auVar8[4] = uVar107;
      auVar8._0_4_ = fVar49;
      auVar8[5] = uVar108;
      auVar8[6] = uVar109;
      auVar8[7] = uVar110;
      auVar8[8] = uVar111;
      auVar8[9] = uVar112;
      auVar8[10] = uVar113;
      auVar8[0xb] = uVar114;
      auVar8[0xc] = uVar115;
      auVar8[0xd] = uVar116;
      auVar8[0xe] = uVar117;
      auVar8[0xf] = uVar118;
      auVar57._0_8_ = a64_TBL(ZEXT816(0),auVar1,auVar8,DAT_01cd5250);
      auVar2[4] = uVar91;
      auVar2._0_4_ = fVar40;
      auVar2[5] = uVar93;
      auVar2[6] = uVar95;
      auVar2[7] = uVar97;
      auVar2[8] = uVar99;
      auVar2[9] = uVar100;
      auVar2[10] = uVar101;
      auVar2[0xb] = uVar102;
      auVar2[0xc] = uVar103;
      auVar2[0xd] = uVar104;
      auVar2[0xe] = uVar105;
      auVar2[0xf] = uVar106;
      auVar9[4] = uVar107;
      auVar9._0_4_ = fVar49;
      auVar9[5] = uVar108;
      auVar9[6] = uVar109;
      auVar9[7] = uVar110;
      auVar9[8] = uVar111;
      auVar9[9] = uVar112;
      auVar9[10] = uVar113;
      auVar9[0xb] = uVar114;
      auVar9[0xc] = uVar115;
      auVar9[0xd] = uVar116;
      auVar9[0xe] = uVar117;
      auVar9[0xf] = uVar118;
      uVar67 = a64_TBL(ZEXT816(0),auVar2,auVar9,DAT_01cd51f8);
      auVar3[4] = uVar91;
      auVar3._0_4_ = fVar40;
      auVar3[5] = uVar93;
      auVar3[6] = uVar95;
      auVar3[7] = uVar97;
      auVar3[8] = uVar99;
      auVar3[9] = uVar100;
      auVar3[10] = uVar101;
      auVar3[0xb] = uVar102;
      auVar3[0xc] = uVar103;
      auVar3[0xd] = uVar104;
      auVar3[0xe] = uVar105;
      auVar3[0xf] = uVar106;
      auVar10[4] = uVar107;
      auVar10._0_4_ = fVar49;
      auVar10[5] = uVar108;
      auVar10[6] = uVar109;
      auVar10[7] = uVar110;
      auVar10[8] = uVar111;
      auVar10[9] = uVar112;
      auVar10[10] = uVar113;
      auVar10[0xb] = uVar114;
      auVar10[0xc] = uVar115;
      auVar10[0xd] = uVar116;
      auVar10[0xe] = uVar117;
      auVar10[0xf] = uVar118;
      uVar43 = a64_TBL(ZEXT816(0),auVar3,auVar10,DAT_01cd5430);
      auVar4[4] = uVar91;
      auVar4._0_4_ = fVar40;
      auVar4[5] = uVar93;
      auVar4[6] = uVar95;
      auVar4[7] = uVar97;
      auVar4[8] = uVar99;
      auVar4[9] = uVar100;
      auVar4[10] = uVar101;
      auVar4[0xb] = uVar102;
      auVar4[0xc] = uVar103;
      auVar4[0xd] = uVar104;
      auVar4[0xe] = uVar105;
      auVar4[0xf] = uVar106;
      auVar11[4] = uVar107;
      auVar11._0_4_ = fVar49;
      auVar11[5] = uVar108;
      auVar11[6] = uVar109;
      auVar11[7] = uVar110;
      auVar11[8] = uVar111;
      auVar11[9] = uVar112;
      auVar11[10] = uVar113;
      auVar11[0xb] = uVar114;
      auVar11[0xc] = uVar115;
      auVar11[0xd] = uVar116;
      auVar11[0xe] = uVar117;
      auVar11[0xf] = uVar118;
      uVar73 = a64_TBL(ZEXT816(0),auVar4,auVar11,DAT_01cd5050);
      auVar57._8_8_ = uVar67;
      uVar121 = (undefined4)uVar73;
      uVar122 = (undefined4)((ulong)uVar73 >> 0x20);
      uVar67 = a64_TBL(ZEXT816(0),auVar45,auVar57,DAT_01cd50d8);
      uVar72 = a64_TBL(ZEXT816(0),auVar45,auVar57,DAT_01cd4fb8);
      auVar12._8_4_ = auVar45._8_4_;
      auVar12._0_8_ = auVar45._0_8_;
      auVar12._12_4_ = auVar45._12_4_;
      auVar16._8_4_ = uVar121;
      auVar16._0_8_ = uVar43;
      auVar16._12_4_ = uVar122;
      uVar73 = a64_TBL(ZEXT816(0),auVar12,auVar16,DAT_01cd50b8);
      auVar13._8_4_ = auVar45._8_4_;
      auVar13._0_8_ = auVar45._0_8_;
      auVar13._12_4_ = auVar45._12_4_;
      auVar17._8_4_ = uVar121;
      auVar17._0_8_ = uVar43;
      auVar17._12_4_ = uVar122;
      uVar66 = a64_TBL(ZEXT816(0),auVar13,auVar17,DAT_01cd5308);
      auVar14._8_4_ = auVar45._8_4_;
      auVar14._0_8_ = auVar45._0_8_;
      auVar14._12_4_ = auVar45._12_4_;
      auVar18._8_4_ = uVar121;
      auVar18._0_8_ = uVar43;
      auVar18._12_4_ = uVar122;
      uVar80 = a64_TBL(ZEXT816(0),auVar14,auVar18,DAT_01cd5008);
      fVar40 = *(float *)(param_2 + 0x1a);
      fVar47 = *(float *)((long)param_2 + 0xd4);
      fVar49 = *(float *)(param_2 + 0x1b);
      auVar15._8_4_ = auVar45._8_4_;
      auVar15._0_8_ = auVar45._0_8_;
      auVar15._12_4_ = auVar45._12_4_;
      auVar19._8_4_ = uVar121;
      auVar19._0_8_ = uVar43;
      auVar19._12_4_ = uVar122;
      uVar43 = a64_TBL(ZEXT816(0),auVar15,auVar19,DAT_01cd4fb0);
      auVar55._0_8_ = CONCAT44((float)((ulong)uVar67 >> 0x20) * fVar49,(float)uVar67 * fVar49);
      auVar55._8_4_ = (float)uVar72 * fVar49;
      auVar55._12_4_ = (float)((ulong)uVar72 >> 0x20) * fVar49;
      fVar49 = (float)uVar73 * fVar40;
      fVar51 = (float)((ulong)uVar73 >> 0x20) * fVar40;
      fVar62 = (float)uVar66 * fVar40;
      fVar40 = (float)((ulong)uVar66 >> 0x20) * fVar40;
      param_2[0x11] = auVar55._8_8_;
      param_2[0x10] = auVar55._0_8_;
      *(float *)(param_2 + 0x13) = fVar42;
      *(float *)((long)param_2 + 0x9c) = fVar39;
      *(float *)(param_2 + 0x12) = fVar32;
      *(float *)((long)param_2 + 0x94) = fVar33;
      fVar64 = (float)uVar80 * fVar47;
      fVar41 = (float)((ulong)uVar80 >> 0x20) * fVar47;
      fVar48 = (float)uVar43 * fVar47;
      fVar47 = (float)((ulong)uVar43 >> 0x20) * fVar47;
      *(float *)(param_2 + 0xd) = fVar62;
      *(float *)((long)param_2 + 0x6c) = fVar40;
      *(float *)(param_2 + 0xc) = fVar49;
      *(float *)((long)param_2 + 100) = fVar51;
      *(float *)(param_2 + 0xf) = fVar48;
      *(float *)((long)param_2 + 0x7c) = fVar47;
      *(float *)(param_2 + 0xe) = fVar64;
      *(float *)((long)param_2 + 0x74) = fVar41;
    }
    fVar50 = *(float *)(param_1 + 0x500);
    fVar52 = *(float *)(param_1 + 0x504);
    fVar71 = *(float *)(param_1 + 0x508);
    *(float *)(param_1 + 0x518) =
         fVar42 + fVar62 * fVar50 + fVar48 * fVar52 + auVar55._8_4_ * fVar71;
    *(float *)(param_1 + 0x51c) =
         fVar39 + fVar40 * fVar50 + fVar47 * fVar52 + auVar55._12_4_ * fVar71;
    *(float *)(param_1 + 0x510) =
         fVar32 + fVar49 * fVar50 + fVar64 * fVar52 + auVar55._0_4_ * fVar71;
    *(float *)(param_1 + 0x514) =
         fVar33 + fVar51 * fVar50 + fVar41 * fVar52 + auVar55._4_4_ * fVar71;
    fVar50 = *(float *)(param_1 + 0x540);
    fVar52 = *(float *)(param_1 + 0x544);
    fVar71 = *(float *)(param_1 + 0x548);
    *(float *)(param_1 + 0x558) =
         fVar42 + fVar62 * fVar50 + fVar48 * fVar52 + auVar55._8_4_ * fVar71;
    *(float *)(param_1 + 0x55c) =
         fVar39 + fVar40 * fVar50 + fVar47 * fVar52 + auVar55._12_4_ * fVar71;
    *(float *)(param_1 + 0x550) =
         fVar32 + fVar49 * fVar50 + fVar64 * fVar52 + auVar55._0_4_ * fVar71;
    *(float *)(param_1 + 0x554) =
         fVar33 + fVar51 * fVar50 + fVar41 * fVar52 + auVar55._4_4_ * fVar71;
    if ((char)param_2[0x4c] == '\0') {
      *(long *)(param_1 + 0x4f8) = param_2[0x17];
      *(undefined8 *)(param_1 + 0x4f0) = *(undefined8 *)*pauVar30;
    }
    bVar31 = true;
    *(float *)(param_1 + 0x578) = extraout_var;
    *(undefined4 *)(param_1 + 0x580) = 0;
  }
  else {
    bVar31 = false;
  }
  fVar32 = (float)(**(code **)(*param_2 + 0x178))(param_2,PTR_DAT_0271e870);
  if ((fVar32 == *(float *)PTR_DAT_0271ecd0) && (*(float *)(param_1 + 0x580) == 0.0)) {
    bVar27 = true;
  }
  else {
    bVar27 = false;
  }
  uVar28 = 0;
  if (!bVar31) goto LAB_00e41b64;
  FUN_00db5e00(auStack_80,param_1,param_1 + 0x510,4);
  FUN_00db5e00(auStack_c0,param_1,param_1 + 0x550,4);
  uVar29 = FUN_006c5d60(auStack_80);
  if ((uVar29 & 1) == 0) {
    uVar29 = FUN_006c5d60(auStack_c0);
    if ((uVar29 & 1) == 0) goto LAB_00e41aec;
LAB_00e41b14:
    FUN_006c5d20(&local_f0,auStack_c0);
    *(undefined8 *)(param_1 + 0x568) = local_e8;
    *(ulong *)(param_1 + 0x560) = CONCAT44(fStack_ec,local_f0);
    FUN_006c5d20(&local_f0,auStack_80);
    *(undefined8 *)(param_1 + 0x570) = local_d0;
    uVar29 = FUN_006c5d60(auStack_80);
    if ((uVar29 & 1) != 0) goto LAB_00e41af8;
LAB_00e41b50:
    uVar28 = 1;
  }
  else {
    FUN_006c5d20(&local_f0,auStack_80);
    *(undefined8 *)(param_1 + 0x528) = local_e8;
    *(ulong *)(param_1 + 0x520) = CONCAT44(fStack_ec,local_f0);
    FUN_006c5d20(&local_f0,auStack_80);
    *(undefined8 *)(param_1 + 0x530) = local_d0;
    uVar29 = FUN_006c5d60(auStack_c0);
    if ((uVar29 & 1) != 0) goto LAB_00e41b14;
LAB_00e41aec:
    uVar29 = FUN_006c5d60(auStack_80);
    if ((uVar29 & 1) == 0) goto LAB_00e41b50;
LAB_00e41af8:
    uVar28 = FUN_006c5d60(auStack_c0);
    uVar28 = uVar28 ^ 1;
  }
  FUN_006c5c80(auStack_c0);
  FUN_006c5c80(auStack_80);
LAB_00e41b64:
  fVar42 = *(float *)(param_1 + 0x520) - *(float *)(param_1 + 0x560);
  fVar47 = *(float *)(param_1 + 0x524) - *(float *)(param_1 + 0x564);
  fVar40 = *(float *)(param_1 + 0x528) - *(float *)(param_1 + 0x568);
  fVar49 = *(float *)(param_1 + 0x52c) - *(float *)(param_1 + 0x56c);
  auVar35._0_4_ = fVar42 * fVar42;
  auVar35._4_4_ = fVar47 * fVar47;
  auVar35._8_4_ = fVar40 * fVar40;
  auVar35._12_4_ = fVar49 * fVar49;
  auVar58 = NEON_ext(auVar35,auVar35,8,1);
  fVar33 = auVar58._0_4_ + auVar35._0_4_;
  fVar39 = auVar58._4_4_ + auVar35._4_4_;
  fVar32 = fVar33 + fVar39;
  fVar33 = fVar33 + fVar39;
  if (fVar32 != 0.0) {
    auVar68._0_4_ = fVar42 * fVar42;
    auVar68._4_4_ = 0;
    auVar68._8_4_ = fVar40 * fVar40;
    auVar68._12_4_ = 0;
    auVar58 = NEON_ext(auVar68,auVar68,8,1);
    fVar51 = auVar58._0_4_ + auVar68._0_4_;
    fVar62 = auVar58._4_4_ + 0.0;
    fVar39 = fVar51 + fVar62;
    fVar51 = fVar51 + fVar62;
    if (fVar39 != 0.0) {
      auVar59._8_8_ = CONCAT44(fVar33,fVar32);
      auVar59._0_8_ = CONCAT44(fVar33,fVar32);
      auVar69._8_8_ = CONCAT44(fVar51,fVar39);
      auVar69._0_8_ = CONCAT44(fVar51,fVar39);
      auVar58 = NEON_frsqrte(auVar59,4);
      auVar83._0_4_ = auVar58._0_4_ * fVar32;
      auVar83._4_4_ = auVar58._4_4_ * fVar33;
      auVar83._8_4_ = auVar58._8_4_ * fVar32;
      auVar83._12_4_ = auVar58._12_4_ * fVar33;
      auVar55 = NEON_frsqrts(auVar58,auVar83,4);
      auVar74._0_4_ = auVar58._0_4_ * auVar55._0_4_;
      auVar74._4_4_ = auVar58._4_4_ * auVar55._4_4_;
      auVar74._8_4_ = auVar58._8_4_ * auVar55._8_4_;
      auVar74._12_4_ = auVar58._12_4_ * auVar55._12_4_;
      auVar84._0_4_ = fVar32 * auVar74._0_4_;
      auVar84._4_4_ = fVar33 * auVar74._4_4_;
      auVar84._8_4_ = fVar32 * auVar74._8_4_;
      auVar84._12_4_ = fVar33 * auVar74._12_4_;
      iVar53 = -(uint)(fVar32 == 0.0);
      iVar61 = -(uint)(fVar33 == 0.0);
      iVar63 = -(uint)(fVar32 == 0.0);
      iVar65 = -(uint)(fVar33 == 0.0);
      auVar58 = NEON_frsqrts(auVar74,auVar84,4);
      fVar62 = fVar42 * auVar74._0_4_ * auVar58._0_4_;
      fVar47 = fVar47 * auVar74._4_4_ * auVar58._4_4_;
      fVar64 = fVar40 * auVar74._8_4_ * auVar58._8_4_;
      fVar49 = fVar49 * auVar74._12_4_ * auVar58._12_4_;
      bVar92 = SUB41(fVar47,0) & ~(byte)iVar61;
      bVar94 = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar61 >> 8);
      bVar96 = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10);
      bVar98 = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18);
      auVar58 = NEON_frsqrte(auVar69,4);
      auVar85._0_4_ = auVar58._0_4_ * fVar39;
      auVar85._4_4_ = auVar58._4_4_ * fVar51;
      auVar85._8_4_ = auVar58._8_4_ * fVar39;
      auVar85._12_4_ = auVar58._12_4_ * fVar51;
      auVar55 = NEON_frsqrts(auVar58,auVar85,4);
      auVar75._0_4_ = auVar58._0_4_ * auVar55._0_4_;
      auVar75._4_4_ = auVar58._4_4_ * auVar55._4_4_;
      auVar75._8_4_ = auVar58._8_4_ * auVar55._8_4_;
      auVar75._12_4_ = auVar58._12_4_ * auVar55._12_4_;
      iVar61 = -(uint)(fVar39 == 0.0);
      iVar88 = -(uint)(fVar51 == 0.0);
      iVar89 = -(uint)(fVar39 == 0.0);
      iVar90 = -(uint)(fVar51 == 0.0);
      auVar70._0_4_ = fVar39 * auVar75._0_4_;
      auVar70._4_4_ = fVar51 * auVar75._4_4_;
      auVar70._8_4_ = fVar39 * auVar75._8_4_;
      auVar70._12_4_ = fVar51 * auVar75._12_4_;
      auVar58 = NEON_frsqrts(auVar75,auVar70,4);
      fVar42 = fVar42 * auVar75._0_4_ * auVar58._0_4_;
      fVar33 = auVar75._4_4_ * auVar58._4_4_ * 0.0;
      fVar40 = fVar40 * auVar75._8_4_ * auVar58._8_4_;
      fVar39 = auVar75._12_4_ * auVar58._12_4_ * 0.0;
      fVar32 = (float)CONCAT13((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar61 >> 0x18),
                               CONCAT12((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar61 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar42 >> 8) &
                                                  ~(byte)((uint)iVar61 >> 8),
                                                  SUB41(fVar42,0) & ~(byte)iVar61)));
      auVar34._0_8_ =
           CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18),
                    CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar88 >> 0x10),
                             CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar88 >> 8),
                                      CONCAT14(SUB41(fVar33,0) & ~(byte)iVar88,fVar32))));
      auVar34[8] = SUB41(fVar40,0) & ~(byte)iVar89;
      auVar34[9] = (byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar89 >> 8);
      auVar34[10] = (byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10);
      auVar34[0xb] = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18);
      auVar36[0xc] = SUB41(fVar39,0) & ~(byte)iVar90;
      auVar36._0_12_ = auVar34;
      auVar36[0xd] = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar90 >> 8);
      auVar36[0xe] = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
      auVar36[0xf] = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
      auVar37._0_4_ =
           (float)CONCAT13((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                           CONCAT12((byte)((uint)fVar62 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                                    CONCAT11((byte)((uint)fVar62 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                             SUB41(fVar62,0) & ~(byte)iVar53))) * fVar32;
      auVar37._4_4_ =
           (float)CONCAT13(bVar98,CONCAT12(bVar96,CONCAT11(bVar94,bVar92))) *
           (float)((ulong)auVar34._0_8_ >> 0x20);
      auVar37._8_4_ =
           (float)CONCAT13((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                           CONCAT12((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                                    CONCAT11((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                             SUB41(fVar64,0) & ~(byte)iVar63))) * auVar34._8_4_;
      auVar37._12_4_ =
           (float)CONCAT13((byte)((uint)fVar49 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18),
                           CONCAT12((byte)((uint)fVar49 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10),
                                    CONCAT11((byte)((uint)fVar49 >> 8) & ~(byte)((uint)iVar65 >> 8),
                                             SUB41(fVar49,0) & ~(byte)iVar65))) * auVar36._12_4_;
      NEON_ext(auVar37,auVar37,8,1);
      fVar32 = (float)FUN_01590400();
      *(float *)(param_1 + 0x57c) = fVar32;
      if (0.0 < (float)CONCAT13(bVar98,CONCAT12(bVar96,CONCAT11(bVar94,bVar92)))) {
        *(float *)(param_1 + 0x57c) = -fVar32;
      }
    }
  }
  if ((uVar28 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x57c) = 0;
  }
  if (bVar27) {
    auVar58 = FUN_00a92cd0(extraout_var,ZEXT816(0),ZEXT816(0));
    uVar91 = (undefined1)_UNK_01d4ae58;
    uVar93 = (undefined1)((ulong)_UNK_01d4ae58 >> 8);
    uVar95 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x10);
    uVar97 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x18);
    uVar99 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x20);
    uVar100 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x28);
    uVar101 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x30);
    uVar102 = (undefined1)((ulong)_UNK_01d4ae58 >> 0x38);
    fVar42 = auVar58._0_4_;
    fVar33 = fVar42 * (float)_DAT_01d4ae80;
    fVar39 = auVar58._4_4_;
    fVar40 = fVar39 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    auVar86._0_8_ = CONCAT44(fVar40,fVar33);
    auVar86._8_4_ = auVar58._8_4_ * (float)_UNK_01d4ae88;
    auVar86._12_4_ = auVar58._12_4_ * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar5[8] = uVar91;
    auVar5._0_8_ = _DAT_01d4ae50;
    auVar5[9] = uVar93;
    auVar5[10] = uVar95;
    auVar5[0xb] = uVar97;
    auVar5[0xc] = uVar99;
    auVar5[0xd] = uVar100;
    auVar5[0xe] = uVar101;
    auVar5[0xf] = uVar102;
    uVar73 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
    fVar47 = (float)((ulong)uVar73 >> 0x20);
    uVar124 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd5120);
    auVar6[8] = uVar91;
    auVar6._0_8_ = _DAT_01d4ae50;
    auVar6[9] = uVar93;
    auVar6[10] = uVar95;
    auVar6[0xb] = uVar97;
    auVar6[0xc] = uVar99;
    auVar6[0xd] = uVar100;
    auVar6[0xe] = uVar101;
    auVar6[0xf] = uVar102;
    uVar66 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
    fVar62 = (float)((ulong)uVar66 >> 0x20);
    auVar7[8] = uVar91;
    auVar7._0_8_ = _DAT_01d4ae50;
    auVar7[9] = uVar93;
    auVar7[10] = uVar95;
    auVar7[0xb] = uVar97;
    auVar7[0xc] = uVar99;
    auVar7[0xd] = uVar100;
    auVar7[0xe] = uVar101;
    auVar7[0xf] = uVar102;
    uVar67 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
    uVar72 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd4f90);
    uVar126 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd5418);
    uVar125 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd50f8);
    fVar64 = (float)((ulong)uVar67 >> 0x20);
    uVar43 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd50f8);
    fVar32 = (float)((ulong)DAT_01cd5070 >> 0x20);
    uVar81 = a64_TBL(ZEXT816(0),auVar86,DAT_01cd5270);
    uVar82 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd5418);
    auVar26._8_4_ = fVar33;
    auVar26._0_8_ = auVar86._0_8_;
    auVar26._12_4_ = fVar40;
    uVar80 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
    fVar50 = (float)_UNK_01d4ae98;
    fVar52 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar41 = (float)_DAT_01d4ae90;
    fVar48 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    uVar123 = a64_TBL(ZEXT816(0),auVar58,DAT_01cd4f90);
    fVar33 = (fVar33 * (float)uVar73 + fVar41 * (float)DAT_01cd5070 * (float)uVar72 +
             fVar41 * (float)uVar67 * (float)uVar125) - (float)uVar66 * (float)uVar126;
    fVar49 = (fVar40 * fVar47 + fVar48 * fVar32 * (float)((ulong)uVar72 >> 0x20) +
             fVar48 * fVar64 * (float)((ulong)uVar125 >> 0x20)) -
             fVar62 * (float)((ulong)uVar126 >> 0x20);
    fVar51 = (auVar86._8_4_ * (float)uVar73 + fVar50 * (float)uVar66 * (float)uVar124 +
             fVar50 * (float)DAT_01cd5070 * (float)uVar80) - (float)uVar67 * (float)uVar81;
    fVar47 = (auVar86._12_4_ * fVar47 + fVar52 * fVar62 * (float)((ulong)uVar124 >> 0x20) +
             fVar52 * fVar32 * (float)((ulong)uVar80 >> 0x20)) -
             fVar64 * (float)((ulong)uVar81 >> 0x20);
    fVar62 = (float)((ulong)uVar123 >> 0x20);
    auVar20._4_4_ = fVar49;
    auVar20._0_4_ = fVar33;
    auVar20._8_4_ = fVar51;
    auVar20._12_4_ = fVar47;
    uVar73 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
    auVar21._4_4_ = fVar49;
    auVar21._0_4_ = fVar33;
    auVar21._8_4_ = fVar51;
    auVar21._12_4_ = fVar47;
    uVar80 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    auVar22._4_4_ = fVar49;
    auVar22._0_4_ = fVar33;
    auVar22._8_4_ = fVar51;
    auVar22._12_4_ = fVar47;
    uVar66 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
    auVar25._4_4_ = fVar49;
    auVar25._0_4_ = fVar33;
    auVar25._8_4_ = fVar33;
    auVar25._12_4_ = fVar49;
    uVar67 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50b0);
    fVar64 = (float)((ulong)uVar43 >> 0x20);
    auVar23._4_4_ = fVar49;
    auVar23._0_4_ = fVar33;
    auVar23._8_4_ = fVar51;
    auVar23._12_4_ = fVar47;
    uVar72 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    auVar24._4_4_ = fVar49;
    auVar24._0_4_ = fVar33;
    auVar24._8_4_ = fVar51;
    auVar24._12_4_ = fVar47;
    uVar81 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
    auVar58 = NEON_fmov(0x41c80000,4);
    fVar40 = (float)((ulong)uVar82 >> 0x20);
    fVar32 = ((float)uVar123 * fVar33 + fVar41 * fVar42 * (float)uVar73 +
             fVar41 * (float)uVar82 * (float)uVar66) - (float)uVar43 * (float)uVar72;
    fVar33 = (fVar62 * fVar49 + fVar48 * fVar39 * (float)((ulong)uVar73 >> 0x20) +
             fVar48 * fVar40 * (float)((ulong)uVar66 >> 0x20)) -
             fVar64 * (float)((ulong)uVar72 >> 0x20);
    fVar42 = ((float)uVar123 * fVar51 + fVar50 * (float)uVar43 * (float)uVar80 +
             fVar50 * fVar42 * (float)uVar67) - (float)uVar82 * (float)uVar81;
    fVar39 = (fVar62 * fVar47 + fVar52 * fVar64 * (float)((ulong)uVar80 >> 0x20) +
             fVar52 * fVar39 * (float)((ulong)uVar67 >> 0x20)) -
             fVar40 * (float)((ulong)uVar81 >> 0x20);
    fVar32 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                             CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                      CONCAT11((byte)((uint)fVar32 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 8),
                                               SUB41(fVar32,0) & (byte)DAT_01d4ab50)));
    auVar44._0_8_ =
         CONCAT17((byte)((uint)fVar33 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                  CONCAT16((byte)((uint)fVar33 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                           CONCAT15((byte)((uint)fVar33 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                    CONCAT14(SUB41(fVar33,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                             fVar32))));
    auVar44[8] = SUB41(fVar42,0) & (byte)DAT_01d4ab58;
    auVar44[9] = (byte)((uint)fVar42 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    auVar44[10] = (byte)((uint)fVar42 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    auVar44[0xb] = (byte)((uint)fVar42 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    auVar46[0xc] = SUB41(fVar39,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    auVar46._0_12_ = auVar44;
    auVar46[0xd] = (byte)((uint)fVar39 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    auVar46[0xe] = (byte)((uint)fVar39 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    auVar46[0xf] = (byte)((uint)fVar39 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    fVar32 = fVar32 * auVar58._0_4_;
    fVar33 = (float)((ulong)auVar44._0_8_ >> 0x20) * auVar58._4_4_;
    fVar42 = auVar44._8_4_ * auVar58._8_4_;
    fVar39 = auVar46._12_4_ * auVar58._12_4_;
    auVar58 = *pauVar30;
    auVar60._0_8_ = CONCAT44(auVar58._4_4_ + fVar33,auVar58._0_4_ + fVar32);
    auVar60._8_4_ = auVar58._8_4_ + fVar42;
    auVar60._12_4_ = auVar58._12_4_ + fVar39;
    auVar38._0_8_ = CONCAT44(auVar58._4_4_ - fVar33,auVar58._0_4_ - fVar32);
    auVar38._8_4_ = auVar58._8_4_ - fVar42;
    auVar38._12_4_ = auVar58._12_4_ - fVar39;
    uStack_108 = auVar38._8_8_;
    uStack_f8 = auVar60._8_8_;
    local_110 = auVar38._0_8_;
    uStack_100 = auVar60._0_8_;
    FUN_00db5e00(auStack_80,param_1,&uStack_100,4);
    FUN_00db5e00(auStack_c0,param_1,&local_110,4);
    uVar29 = FUN_006c5d60(auStack_80);
    if (((uVar29 & 1) != 0) && (uVar29 = FUN_006c5d60(auStack_c0), (uVar29 & 1) != 0)) {
      FUN_006c5d20(&local_f0,auStack_80);
      FUN_006c5d20(auStack_140,auStack_c0);
      uVar121 = 0xbf800000;
      if (local_13c <= fStack_ec) {
        uVar121 = 0x3f800000;
      }
      *(undefined4 *)(param_1 + 0x580) = uVar121;
    }
    FUN_006c5c80(auStack_c0);
    FUN_006c5c80(auStack_80);
  }
  return;
}


