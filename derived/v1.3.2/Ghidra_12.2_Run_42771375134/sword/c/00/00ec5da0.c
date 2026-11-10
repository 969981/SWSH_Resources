/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ec5da0; name: FUN_00ec5da0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00ec5da0(undefined8 param_1,long *param_2)

{
  long *plVar1;
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
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long lVar36;
  long *plVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  int iVar41;
  long *plVar42;
  long lVar43;
  long lVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
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
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar90;
  undefined8 uVar89;
  float fVar91;
  undefined8 uVar92;
  float fVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined4 uVar107;
  undefined8 uVar108;
  long local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  lVar35 = *param_2;
  lVar43 = *(long *)(lVar35 + 0x90);
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
    lVar35 = *param_2;
  }
  lVar36 = *(long *)PTR_DAT_027194d8;
  lVar35 = *(long *)(lVar35 + 0x68);
  if (lVar35 != 0) {
    (**(code **)(*(long *)(lVar35 + 0x48) + 0x10))();
  }
  lVar38 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar38 != 0) {
    (**(code **)(*(long *)(lVar38 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(lVar36 + 0xb8);
  for (plVar37 = *(long **)(lVar36 + 0xb0); plVar37 != plVar1; plVar37 = plVar37 + 1) {
    lVar31 = FUN_00e813b0(*plVar37 + 0x50);
    if ((lVar31 != 0) && (uVar32 = (**(code **)(*(long *)*plVar37 + 0x88))(), (uVar32 & 1) == 0))
    goto LAB_00ec5e74;
  }
  lVar31 = 0;
LAB_00ec5e74:
  if (*(char *)(lVar31 + 0xc0) == '\0') {
    uVar40 = *(undefined8 *)(lVar31 + 0x68);
    uVar62 = (undefined1)uVar40;
    uVar64 = (undefined1)((ulong)uVar40 >> 8);
    uVar66 = (undefined1)((ulong)uVar40 >> 0x10);
    uVar68 = (undefined1)((ulong)uVar40 >> 0x18);
    uVar70 = (undefined1)((ulong)uVar40 >> 0x20);
    uVar72 = (undefined1)((ulong)uVar40 >> 0x28);
    uVar74 = (undefined1)((ulong)uVar40 >> 0x30);
    uVar76 = (undefined1)((ulong)uVar40 >> 0x38);
    uVar40 = *(undefined8 *)(lVar31 + 0x60);
    uVar46 = (undefined1)uVar40;
    uVar48 = (undefined1)((ulong)uVar40 >> 8);
    uVar50 = (undefined1)((ulong)uVar40 >> 0x10);
    uVar52 = (undefined1)((ulong)uVar40 >> 0x18);
    uVar54 = (undefined1)((ulong)uVar40 >> 0x20);
    uVar56 = (undefined1)((ulong)uVar40 >> 0x28);
    uVar58 = (undefined1)((ulong)uVar40 >> 0x30);
    uVar60 = (undefined1)((ulong)uVar40 >> 0x38);
    uStack_98 = *(undefined8 *)(lVar31 + 0x78);
    uStack_a0 = *(undefined8 *)(lVar31 + 0x70);
    fVar104 = (float)*(undefined8 *)(lVar31 + 0x88);
    fVar78 = (float)((ulong)*(undefined8 *)(lVar31 + 0x88) >> 0x20);
    fVar103 = (float)*(undefined8 *)(lVar31 + 0x80);
    fVar81 = (float)((ulong)*(undefined8 *)(lVar31 + 0x80) >> 0x20);
    uStack_78 = *(undefined8 *)(lVar31 + 0x98);
    uStack_80 = *(undefined8 *)(lVar31 + 0x90);
  }
  else {
    uVar89 = *(undefined8 *)(lVar31 + 0xa8);
    uVar40 = *(undefined8 *)(lVar31 + 0xa0);
    uStack_78 = *(undefined8 *)(lVar31 + 0xb8);
    uStack_80 = *(undefined8 *)(lVar31 + 0xb0);
    bVar45 = (byte)uVar40 & (byte)DAT_01d4ab50;
    bVar47 = (byte)((ulong)uVar40 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar49 = (byte)((ulong)uVar40 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar51 = (byte)((ulong)uVar40 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar53 = (byte)((ulong)uVar40 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar55 = (byte)((ulong)uVar40 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar57 = (byte)((ulong)uVar40 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar59 = (byte)((ulong)uVar40 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar61 = (byte)uVar89 & (byte)DAT_01d4ab58;
    bVar63 = (byte)((ulong)uVar89 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar65 = (byte)((ulong)uVar89 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar67 = (byte)((ulong)uVar89 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar69 = (byte)((ulong)uVar89 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar71 = (byte)((ulong)uVar89 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar73 = (byte)((ulong)uVar89 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar75 = (byte)((ulong)uVar89 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar24 = NEON_ext(CONCAT17(bVar59,CONCAT16(bVar57,CONCAT15(bVar55,CONCAT14(bVar53,CONCAT13(
                                                  bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45)))))
                                              )),
                      CONCAT17(bVar59,CONCAT16(bVar57,CONCAT15(bVar55,CONCAT14(bVar53,CONCAT13(
                                                  bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45)))))
                                              )),4,1);
    fVar93 = (float)((ulong)uVar24 >> 0x20);
    auVar2[1] = bVar47;
    auVar2[0] = bVar45;
    auVar2[2] = bVar49;
    auVar2[3] = bVar51;
    auVar2[4] = bVar53;
    auVar2[5] = bVar55;
    auVar2[6] = bVar57;
    auVar2[7] = bVar59;
    auVar2[8] = bVar61;
    auVar2[9] = bVar63;
    auVar2[10] = bVar65;
    auVar2[0xb] = bVar67;
    auVar2[0xc] = bVar69;
    auVar2[0xd] = bVar71;
    auVar2[0xe] = bVar73;
    auVar2[0xf] = bVar75;
    uVar40 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5188);
    fVar77 = (float)uVar40;
    fVar79 = (float)((ulong)uVar40 >> 0x20);
    auVar3[1] = bVar47;
    auVar3[0] = bVar45;
    auVar3[2] = bVar49;
    auVar3[3] = bVar51;
    auVar3[4] = bVar53;
    auVar3[5] = bVar55;
    auVar3[6] = bVar57;
    auVar3[7] = bVar59;
    auVar3[8] = bVar61;
    auVar3[9] = bVar63;
    auVar3[10] = bVar65;
    auVar3[0xb] = bVar67;
    auVar3[0xc] = bVar69;
    auVar3[0xd] = bVar71;
    auVar3[0xe] = bVar73;
    auVar3[0xf] = bVar75;
    uVar88 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5048);
    auVar4[1] = bVar47;
    auVar4[0] = bVar45;
    auVar4[2] = bVar49;
    auVar4[3] = bVar51;
    auVar4[4] = bVar53;
    auVar4[5] = bVar55;
    auVar4[6] = bVar57;
    auVar4[7] = bVar59;
    auVar4[8] = bVar61;
    auVar4[9] = bVar63;
    auVar4[10] = bVar65;
    auVar4[0xb] = bVar67;
    auVar4[0xc] = bVar69;
    auVar4[0xd] = bVar71;
    auVar4[0xe] = bVar73;
    auVar4[0xf] = bVar75;
    uVar94 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar5[1] = bVar47;
    auVar5[0] = bVar45;
    auVar5[2] = bVar49;
    auVar5[3] = bVar51;
    auVar5[4] = bVar53;
    auVar5[5] = bVar55;
    auVar5[6] = bVar57;
    auVar5[7] = bVar59;
    auVar5[8] = bVar61;
    auVar5[9] = bVar63;
    auVar5[10] = bVar65;
    auVar5[0xb] = bVar67;
    auVar5[0xc] = bVar69;
    auVar5[0xd] = bVar71;
    auVar5[0xe] = bVar73;
    auVar5[0xf] = bVar75;
    uVar92 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5158);
    auVar6[1] = bVar47;
    auVar6[0] = bVar45;
    auVar6[2] = bVar49;
    auVar6[3] = bVar51;
    auVar6[4] = bVar53;
    auVar6[5] = bVar55;
    auVar6[6] = bVar57;
    auVar6[7] = bVar59;
    auVar6[8] = bVar61;
    auVar6[9] = bVar63;
    auVar6[10] = bVar65;
    auVar6[0xb] = bVar67;
    auVar6[0xc] = bVar69;
    auVar6[0xd] = bVar71;
    auVar6[0xe] = bVar73;
    auVar6[0xf] = bVar75;
    uVar40 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
    *(undefined1 *)(lVar31 + 0xc0) = 0;
    fVar82 = (float)uVar92;
    fVar84 = (float)((ulong)uVar92 >> 0x20);
    fVar91 = (float)uVar24 * (float)uVar24;
    fVar93 = fVar93 * fVar93;
    fVar90 = (float)((ulong)uVar88 >> 0x20);
    fVar87 = (float)uVar88 * (float)uVar88;
    fVar90 = fVar90 * fVar90;
    fVar103 = (float)uVar94 * (float)CONCAT13(bVar51,CONCAT12(bVar49,CONCAT11(bVar47,bVar45)));
    fVar104 = (float)((ulong)uVar94 >> 0x20) *
              (float)CONCAT13(bVar59,CONCAT12(bVar57,CONCAT11(bVar55,bVar53)));
    fVar105 = fVar77 * (float)CONCAT13(bVar67,CONCAT12(bVar65,CONCAT11(bVar63,bVar61)));
    fVar106 = fVar79 * (float)CONCAT13(bVar75,CONCAT12(bVar73,CONCAT11(bVar71,bVar69)));
    fVar81 = (float)((ulong)uVar89 >> 0x20);
    fVar78 = (float)uVar40 * fVar81;
    fVar80 = (float)((ulong)uVar40 >> 0x20) * fVar81;
    fVar103 = fVar103 + fVar103;
    fVar104 = fVar104 + fVar104;
    fVar105 = fVar105 + fVar105;
    fVar106 = fVar106 + fVar106;
    fVar78 = fVar78 + fVar78;
    fVar80 = fVar80 + fVar80;
    fVar83 = fVar82 * fVar81 + fVar82 * fVar81;
    fVar85 = fVar84 * fVar81 + fVar84 * fVar81;
    fVar15 = fVar103 + fVar78;
    fVar81 = fVar104 + fVar80;
    uVar68 = SUB41(fVar81,0);
    uVar70 = (undefined1)((uint)fVar81 >> 8);
    uVar72 = (undefined1)((uint)fVar81 >> 0x10);
    uVar74 = (undefined1)((uint)fVar81 >> 0x18);
    fVar81 = fVar105 + fVar83;
    uVar76 = SUB41(fVar81,0);
    uVar96 = (undefined1)((uint)fVar81 >> 8);
    uVar97 = (undefined1)((uint)fVar81 >> 0x10);
    uVar98 = (undefined1)((uint)fVar81 >> 0x18);
    fVar81 = fVar106 + fVar85;
    uVar99 = SUB41(fVar81,0);
    uVar100 = (undefined1)((uint)fVar81 >> 8);
    uVar101 = (undefined1)((uint)fVar81 >> 0x10);
    uVar102 = (undefined1)((uint)fVar81 >> 0x18);
    fVar103 = fVar103 - fVar78;
    fVar104 = fVar104 - fVar80;
    fVar105 = fVar105 - fVar83;
    fVar106 = fVar106 - fVar85;
    fVar81 = (float)_DAT_01d4a130 - (fVar87 + fVar87 + fVar91 + fVar91);
    fVar78 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar90 + fVar90 + fVar93 + fVar93);
    uVar46 = SUB41(fVar78,0);
    uVar48 = (undefined1)((uint)fVar78 >> 8);
    uVar50 = (undefined1)((uint)fVar78 >> 0x10);
    uVar52 = (undefined1)((uint)fVar78 >> 0x18);
    fVar78 = (float)_UNK_01d4a138 -
             (fVar82 * fVar82 + fVar82 * fVar82 + fVar77 * fVar77 + fVar77 * fVar77);
    uVar54 = (undefined1)((uint)fVar78 >> 8);
    uVar56 = (undefined1)((uint)fVar78 >> 0x10);
    uVar58 = (undefined1)((uint)fVar78 >> 0x18);
    fVar77 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar84 * fVar84 + fVar84 * fVar84 + fVar79 * fVar79 + fVar79 * fVar79);
    uVar60 = SUB41(fVar77,0);
    uVar62 = (undefined1)((uint)fVar77 >> 8);
    uVar64 = (undefined1)((uint)fVar77 >> 0x10);
    uVar66 = (undefined1)((uint)fVar77 >> 0x18);
    auVar11[4] = uVar68;
    auVar11._0_4_ = fVar15;
    auVar11[5] = uVar70;
    auVar11[6] = uVar72;
    auVar11[7] = uVar74;
    auVar11[8] = uVar76;
    auVar11[9] = uVar96;
    auVar11[10] = uVar97;
    auVar11[0xb] = uVar98;
    auVar11[0xc] = uVar99;
    auVar11[0xd] = uVar100;
    auVar11[0xe] = uVar101;
    auVar11[0xf] = uVar102;
    auVar16._4_4_ = fVar104;
    auVar16._0_4_ = fVar103;
    auVar16._8_4_ = fVar105;
    auVar16._12_4_ = fVar106;
    uVar40 = a64_TBL(ZEXT816(0),auVar11,auVar16,DAT_01cd5250);
    auVar12[4] = uVar68;
    auVar12._0_4_ = fVar15;
    auVar12[5] = uVar70;
    auVar12[6] = uVar72;
    auVar12[7] = uVar74;
    auVar12[8] = uVar76;
    auVar12[9] = uVar96;
    auVar12[10] = uVar97;
    auVar12[0xb] = uVar98;
    auVar12[0xc] = uVar99;
    auVar12[0xd] = uVar100;
    auVar12[0xe] = uVar101;
    auVar12[0xf] = uVar102;
    auVar17._4_4_ = fVar104;
    auVar17._0_4_ = fVar103;
    auVar17._8_4_ = fVar105;
    auVar17._12_4_ = fVar106;
    uVar89 = a64_TBL(ZEXT816(0),auVar12,auVar17,DAT_01cd51f8);
    auVar13[4] = uVar68;
    auVar13._0_4_ = fVar15;
    auVar13[5] = uVar70;
    auVar13[6] = uVar72;
    auVar13[7] = uVar74;
    auVar13[8] = uVar76;
    auVar13[9] = uVar96;
    auVar13[10] = uVar97;
    auVar13[0xb] = uVar98;
    auVar13[0xc] = uVar99;
    auVar13[0xd] = uVar100;
    auVar13[0xe] = uVar101;
    auVar13[0xf] = uVar102;
    auVar18._4_4_ = fVar104;
    auVar18._0_4_ = fVar103;
    auVar18._8_4_ = fVar105;
    auVar18._12_4_ = fVar106;
    uVar108 = a64_TBL(ZEXT816(0),auVar13,auVar18,DAT_01cd5430);
    auVar14[4] = uVar68;
    auVar14._0_4_ = fVar15;
    auVar14[5] = uVar70;
    auVar14[6] = uVar72;
    auVar14[7] = uVar74;
    auVar14[8] = uVar76;
    auVar14[9] = uVar96;
    auVar14[10] = uVar97;
    auVar14[0xb] = uVar98;
    auVar14[0xc] = uVar99;
    auVar14[0xd] = uVar100;
    auVar14[0xe] = uVar101;
    auVar14[0xf] = uVar102;
    auVar19._4_4_ = fVar104;
    auVar19._0_4_ = fVar103;
    auVar19._8_4_ = fVar105;
    auVar19._12_4_ = fVar106;
    uVar92 = a64_TBL(ZEXT816(0),auVar14,auVar19,DAT_01cd5050);
    uVar86 = (undefined4)((ulong)uVar89 >> 0x20);
    auVar7[4] = uVar46;
    auVar7._0_4_ = fVar81;
    auVar7[5] = uVar48;
    auVar7[6] = uVar50;
    auVar7[7] = uVar52;
    auVar7[8] = SUB41(fVar78,0);
    auVar7[9] = uVar54;
    auVar7[10] = uVar56;
    auVar7[0xb] = uVar58;
    auVar7[0xc] = uVar60;
    auVar7[0xd] = uVar62;
    auVar7[0xe] = uVar64;
    auVar7[0xf] = uVar66;
    auVar9._8_4_ = (int)uVar89;
    auVar9._0_8_ = uVar40;
    auVar9._12_4_ = uVar86;
    uVar24 = a64_TBL(ZEXT816(0),auVar7,auVar9,DAT_01cd50d8);
    auVar8[4] = uVar46;
    auVar8._0_4_ = fVar81;
    auVar8[5] = uVar48;
    auVar8[6] = uVar50;
    auVar8[7] = uVar52;
    auVar8[8] = SUB41(fVar78,0);
    auVar8[9] = uVar54;
    auVar8[10] = uVar56;
    auVar8[0xb] = uVar58;
    auVar8[0xc] = uVar60;
    auVar8[0xd] = uVar62;
    auVar8[0xe] = uVar64;
    auVar8[0xf] = uVar66;
    auVar10._8_4_ = (int)uVar89;
    auVar10._0_8_ = uVar40;
    auVar10._12_4_ = uVar86;
    uVar94 = a64_TBL(ZEXT816(0),auVar8,auVar10,DAT_01cd4fb8);
    uVar107 = (undefined4)
              (CONCAT17(uVar66,CONCAT16(uVar64,CONCAT15(uVar62,CONCAT14(uVar60,fVar78)))) >> 0x20);
    uVar86 = (undefined4)
             (CONCAT17(uVar52,CONCAT16(uVar50,CONCAT15(uVar48,CONCAT14(uVar46,fVar81)))) >> 0x20);
    auVar20._4_4_ = uVar86;
    auVar20._0_4_ = fVar81;
    auVar20._8_4_ = fVar78;
    auVar20._12_4_ = uVar107;
    auVar25._8_8_ = uVar92;
    auVar25._0_8_ = uVar108;
    uVar40 = a64_TBL(ZEXT816(0),auVar20,auVar25,DAT_01cd50b8);
    auVar21._4_4_ = uVar86;
    auVar21._0_4_ = fVar81;
    auVar21._8_4_ = fVar78;
    auVar21._12_4_ = uVar107;
    auVar26._8_8_ = uVar92;
    auVar26._0_8_ = uVar108;
    uVar88 = a64_TBL(ZEXT816(0),auVar21,auVar26,DAT_01cd5308);
    auVar22._4_4_ = uVar86;
    auVar22._0_4_ = fVar81;
    auVar22._8_4_ = fVar78;
    auVar22._12_4_ = uVar107;
    auVar27._8_8_ = uVar92;
    auVar27._0_8_ = uVar108;
    uVar95 = a64_TBL(ZEXT816(0),auVar22,auVar27,DAT_01cd5008);
    auVar23._4_4_ = uVar86;
    auVar23._0_4_ = fVar81;
    auVar23._8_4_ = fVar78;
    auVar23._12_4_ = uVar107;
    auVar28._8_8_ = uVar92;
    auVar28._0_8_ = uVar108;
    uVar89 = a64_TBL(ZEXT816(0),auVar23,auVar28,DAT_01cd4fb0);
    fVar78 = (float)*(undefined8 *)(lVar31 + 0xd8);
    fVar103 = (float)uVar24 * fVar78;
    fVar81 = (float)((ulong)uVar24 >> 0x20) * fVar78;
    fVar104 = (float)uVar94 * fVar78;
    fVar78 = (float)((ulong)uVar94 >> 0x20) * fVar78;
    fVar77 = (float)*(undefined8 *)(lVar31 + 0xd0);
    fVar105 = (float)uVar40 * fVar77;
    uVar46 = SUB41(fVar105,0);
    uVar48 = (undefined1)((uint)fVar105 >> 8);
    uVar50 = (undefined1)((uint)fVar105 >> 0x10);
    uVar52 = (undefined1)((uint)fVar105 >> 0x18);
    fVar106 = (float)((ulong)uVar40 >> 0x20) * fVar77;
    uVar54 = SUB41(fVar106,0);
    uVar56 = (undefined1)((uint)fVar106 >> 8);
    uVar58 = (undefined1)((uint)fVar106 >> 0x10);
    uVar60 = (undefined1)((uint)fVar106 >> 0x18);
    fVar106 = (float)uVar88 * fVar77;
    uVar62 = SUB41(fVar106,0);
    uVar64 = (undefined1)((uint)fVar106 >> 8);
    uVar66 = (undefined1)((uint)fVar106 >> 0x10);
    uVar68 = (undefined1)((uint)fVar106 >> 0x18);
    fVar77 = (float)((ulong)uVar88 >> 0x20) * fVar77;
    uVar70 = SUB41(fVar77,0);
    uVar72 = (undefined1)((uint)fVar77 >> 8);
    uVar74 = (undefined1)((uint)fVar77 >> 0x10);
    uVar76 = (undefined1)((uint)fVar77 >> 0x18);
    *(ulong *)(lVar31 + 0x88) = CONCAT44(fVar78,fVar104);
    *(ulong *)(lVar31 + 0x80) = CONCAT44(fVar81,fVar103);
    *(undefined8 *)(lVar31 + 0x98) = uStack_78;
    *(undefined8 *)(lVar31 + 0x90) = uStack_80;
    fVar77 = (float)((ulong)*(undefined8 *)(lVar31 + 0xd0) >> 0x20);
    uStack_a0 = CONCAT44((float)((ulong)uVar95 >> 0x20) * fVar77,(float)uVar95 * fVar77);
    uStack_98 = CONCAT44((float)((ulong)uVar89 >> 0x20) * fVar77,(float)uVar89 * fVar77);
    *(ulong *)(lVar31 + 0x68) =
         CONCAT17(uVar76,CONCAT16(uVar74,CONCAT15(uVar72,CONCAT14(uVar70,fVar106))));
    *(ulong *)(lVar31 + 0x60) =
         CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,fVar105))));
    *(undefined8 *)(lVar31 + 0x78) = uStack_98;
    *(undefined8 *)(lVar31 + 0x70) = uStack_a0;
  }
  uStack_a8 = CONCAT17(uVar76,CONCAT16(uVar74,CONCAT15(uVar72,CONCAT14(uVar70,CONCAT13(uVar68,
                                                  CONCAT12(uVar66,CONCAT11(uVar64,uVar62)))))));
  local_b0 = CONCAT17(uVar60,CONCAT16(uVar58,CONCAT15(uVar56,CONCAT14(uVar54,CONCAT13(uVar52,
                                                  CONCAT12(uVar50,CONCAT11(uVar48,uVar46)))))));
  uStack_88 = CONCAT44(fVar78,fVar104);
  local_90 = CONCAT44(fVar81,fVar103);
  uVar29 = thunk_FUN_00e46320(lVar31);
  plVar37 = *(long **)(lVar36 + 0xb0);
  plVar1 = *(long **)(lVar36 + 0xb8);
  if (plVar37 == plVar1) {
    iVar41 = 0;
  }
  else {
    iVar41 = 0;
LAB_00ec5ff0:
    do {
      if ((((*(char *)(*plVar37 + 0x38e) < '\0') &&
           (uVar32 = (**(code **)(*(long *)*plVar37 + 0x88))(), (uVar32 & 1) == 0)) &&
          (plVar33 = (long *)FUN_00eca190(*plVar37 + 0x50), plVar33 != (long *)0x0)) &&
         (iVar41 == 0)) {
        uVar32 = FUN_01510f00(lVar38,plVar33[0xba]);
        if ((uVar32 & 1) == 0) {
          *(uint *)(plVar33 + 0xed) = uVar29 & 1;
          uVar32 = FUN_00eb4c10(plVar33,&local_b0);
          if ((uVar32 & 1) == 0) {
LAB_00ec6228:
            uVar32 = FUN_00eb51b0(plVar33,&local_b0);
            if ((uVar32 & 1) != 0) {
              uVar40 = *(undefined8 *)PTR_DAT_027194e8;
              (**(code **)(*plVar33 + 0x10))(&local_70,plVar33);
              local_68 = local_70;
              local_70 = 0;
              FUN_00dfcb80(uVar40,1,&local_68);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              if (local_70 != 0) {
                (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
                local_70 = 0;
              }
              iVar41 = 0;
              plVar33[0x120] = 0x41a0000041f00000;
              plVar37 = plVar37 + 1;
              if (plVar1 == plVar37) break;
              goto LAB_00ec5ff0;
            }
            iVar41 = 0;
            plVar33[0x120] = 0;
          }
          else {
            *(undefined1 *)(lVar31 + 0x7e0) = 1;
            plVar34 = (long *)FUN_00eb65b0(plVar33);
            if (plVar34 == (long *)0x0) {
              lVar36 = 0;
              local_c8 = -0x340d631b7bddd9bb;
              plVar34 = plVar33;
            }
            else {
              local_c8 = plVar34[0xba];
              lVar36 = plVar34[0x34];
              lVar39 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
              if (lVar39 != 0) {
                (**(code **)(*(long *)(lVar39 + 0x48) + 0x10))();
              }
              lVar44 = *(long *)(lVar39 + 0x58);
              if (lVar44 == 0) {
                uVar30 = FUN_00884840(0,1);
              }
              else {
                plVar42 = (long *)(lVar44 + 0x48);
                (**(code **)(*plVar42 + 0x10))(plVar42);
                uVar30 = FUN_00884840(lVar44,1);
                (**(code **)(*plVar42 + 0x18))(plVar42);
              }
              (**(code **)(*(long *)(lVar39 + 0x48) + 0x18))((long *)(lVar39 + 0x48));
              if (uVar30 < 2) goto LAB_00ec6228;
              *(undefined1 *)(plVar33 + 0x169) = 1;
            }
            *(undefined1 *)(plVar34 + 0x169) = 1;
            lVar39 = *(long *)(*param_2 + 0x90);
            if (lVar39 != 0) {
              (**(code **)(*(long *)(lVar39 + 0x48) + 0x10))();
            }
            lVar44 = *(long *)(lVar39 + 0x7b0);
            if (lVar44 != 0) {
              (**(code **)(*(long *)(lVar44 + 0x48) + 0x10))();
            }
            (**(code **)(*(long *)(lVar39 + 0x48) + 0x18))((long *)(lVar39 + 0x48));
            FUN_00e03c70(lVar44,1);
            FUN_015c9a70(&local_68,0x233d326bbb672632,plVar33[0x34],plVar33[0xba],lVar36,local_c8,0)
            ;
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            if (lVar44 != 0) {
              (**(code **)(*(long *)(lVar44 + 0x48) + 0x18))((long *)(lVar44 + 0x48));
            }
            iVar41 = 4;
            plVar33[0x120] = 0;
          }
        }
        else {
          iVar41 = 0;
        }
      }
      plVar37 = plVar37 + 1;
    } while (plVar1 != plVar37);
  }
  if (lVar38 != 0) {
    (**(code **)(*(long *)(lVar38 + 0x48) + 0x18))((long *)(lVar38 + 0x48));
  }
  if (lVar35 != 0) {
    (**(code **)(*(long *)(lVar35 + 0x48) + 0x18))((long *)(lVar35 + 0x48));
  }
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
  }
  return iVar41;
}


