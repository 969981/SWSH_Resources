/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b7460; name: FUN_013b7460
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x000000c0 : 0x013b74cc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined1  [16] FUN_013b7460(long *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined5 uVar19;
  char cVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 *puVar25;
  byte bVar26;
  undefined1 uVar27;
  byte bVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  byte bVar33;
  undefined1 uVar34;
  byte bVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  byte bVar39;
  undefined1 uVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
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
  undefined1 auVar28 [16];
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
  undefined4 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [12];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined4 uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar116;
  float fVar117;
  undefined1 auVar115 [16];
  float fVar118;
  
  if ((*(long *)(*param_1 + 0x68) != 0) &&
     (puVar25 = *(undefined8 **)(*(long *)(*param_1 + 0x68) + 0x60), puVar25 != (undefined8 *)0x0))
  {
    puVar22 = (undefined8 *)(**(code **)*puVar25)(puVar25);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar21 = __cxa_guard_acquire(PTR_DAT_02715078), iVar21 != 0)) {
      uVar23 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar23;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    if (puVar22 != (undefined8 *)0x0) {
      do {
        if (puVar22 == (undefined8 *)PTR_DAT_02715080) {
          puVar22 = puVar25 + -10;
          cVar20 = *(char *)(puVar25 + 0xe);
          goto joined_r0x013b7624;
        }
        puVar22 = (undefined8 *)*puVar22;
      } while (puVar22 != (undefined8 *)0x0);
    }
  }
  puVar22 = (undefined8 *)0x0;
  cVar20 = DAT_000000c0;
joined_r0x013b7624:
  if (cVar20 == '\0') {
    fVar65 = (float)puVar22[0xd];
    fVar67 = (float)((ulong)puVar22[0xd] >> 0x20);
    fVar60 = (float)puVar22[0xc];
    fVar63 = (float)((ulong)puVar22[0xc] >> 0x20);
    fVar59 = (float)puVar22[0xf];
    fVar73 = (float)((ulong)puVar22[0xf] >> 0x20);
    fVar69 = (float)puVar22[0xe];
    fVar72 = (float)((ulong)puVar22[0xe] >> 0x20);
    uVar23 = puVar22[0x11];
    uVar44 = (undefined1)uVar23;
    uVar46 = (undefined1)((ulong)uVar23 >> 8);
    uVar48 = (undefined1)((ulong)uVar23 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar23 >> 0x18);
    uVar52 = (undefined1)((ulong)uVar23 >> 0x20);
    uVar54 = (undefined1)((ulong)uVar23 >> 0x28);
    uVar56 = (undefined1)((ulong)uVar23 >> 0x30);
    uVar58 = (undefined1)((ulong)uVar23 >> 0x38);
    uVar23 = puVar22[0x10];
    uVar27 = (undefined1)uVar23;
    uVar30 = (undefined1)((ulong)uVar23 >> 8);
    uVar32 = (undefined1)((ulong)uVar23 >> 0x10);
    uVar34 = (undefined1)((ulong)uVar23 >> 0x18);
    uVar36 = (undefined1)((ulong)uVar23 >> 0x20);
    uVar38 = (undefined1)((ulong)uVar23 >> 0x28);
    uVar40 = (undefined1)((ulong)uVar23 >> 0x30);
    uVar42 = (undefined1)((ulong)uVar23 >> 0x38);
    auVar76 = SUB1612(*(undefined1 (*) [16])(puVar22 + 0x12),0);
  }
  else {
    uVar8 = puVar22[0x15];
    uVar23 = puVar22[0x14];
    auVar17 = *(undefined1 (*) [16])(puVar22 + 0x16);
    auVar76 = auVar17._0_12_;
    bVar26 = (byte)uVar23 & (byte)DAT_01d4ab50;
    bVar29 = (byte)((ulong)uVar23 >> 8) & (byte)((ulong)DAT_01d4ab50 >> 8);
    bVar31 = (byte)((ulong)uVar23 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x10);
    bVar33 = (byte)((ulong)uVar23 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18);
    bVar35 = (byte)((ulong)uVar23 >> 0x20) & (byte)((ulong)DAT_01d4ab50 >> 0x20);
    bVar37 = (byte)((ulong)uVar23 >> 0x28) & (byte)((ulong)DAT_01d4ab50 >> 0x28);
    bVar39 = (byte)((ulong)uVar23 >> 0x30) & (byte)((ulong)DAT_01d4ab50 >> 0x30);
    bVar41 = (byte)((ulong)uVar23 >> 0x38) & (byte)((ulong)DAT_01d4ab50 >> 0x38);
    bVar43 = (byte)uVar8 & (byte)DAT_01d4ab58;
    bVar45 = (byte)((ulong)uVar8 >> 8) & (byte)((ulong)DAT_01d4ab58 >> 8);
    bVar47 = (byte)((ulong)uVar8 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x10);
    bVar49 = (byte)((ulong)uVar8 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18);
    bVar51 = (byte)((ulong)uVar8 >> 0x20) & (byte)((ulong)DAT_01d4ab58 >> 0x20);
    bVar53 = (byte)((ulong)uVar8 >> 0x28) & (byte)((ulong)DAT_01d4ab58 >> 0x28);
    bVar55 = (byte)((ulong)uVar8 >> 0x30) & (byte)((ulong)DAT_01d4ab58 >> 0x30);
    bVar57 = (byte)((ulong)uVar8 >> 0x38) & (byte)((ulong)DAT_01d4ab58 >> 0x38);
    uVar18 = NEON_ext(CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(
                                                  bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar26)))))
                                              )),
                      CONCAT17(bVar41,CONCAT16(bVar39,CONCAT15(bVar37,CONCAT14(bVar35,CONCAT13(
                                                  bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar26)))))
                                              )),4,1);
    fVar75 = (float)((ulong)uVar18 >> 0x20);
    auVar100[1] = bVar29;
    auVar100[0] = bVar26;
    auVar100[2] = bVar31;
    auVar100[3] = bVar33;
    auVar100[4] = bVar35;
    auVar100[5] = bVar37;
    auVar100[6] = bVar39;
    auVar100[7] = bVar41;
    auVar100[8] = bVar43;
    auVar100[9] = bVar45;
    auVar100[10] = bVar47;
    auVar100[0xb] = bVar49;
    auVar100[0xc] = bVar51;
    auVar100[0xd] = bVar53;
    auVar100[0xe] = bVar55;
    auVar100[0xf] = bVar57;
    uVar23 = a64_TBL(ZEXT816(0),auVar100,DAT_01cd5188);
    fVar72 = (float)uVar23;
    fVar61 = (float)((ulong)uVar23 >> 0x20);
    auVar102[1] = bVar29;
    auVar102[0] = bVar26;
    auVar102[2] = bVar31;
    auVar102[3] = bVar33;
    auVar102[4] = bVar35;
    auVar102[5] = bVar37;
    auVar102[6] = bVar39;
    auVar102[7] = bVar41;
    auVar102[8] = bVar43;
    auVar102[9] = bVar45;
    auVar102[10] = bVar47;
    auVar102[0xb] = bVar49;
    auVar102[0xc] = bVar51;
    auVar102[0xd] = bVar53;
    auVar102[0xe] = bVar55;
    auVar102[0xf] = bVar57;
    uVar7 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5048);
    fVar70 = (float)((ulong)uVar7 >> 0x20);
    auVar107[1] = bVar29;
    auVar107[0] = bVar26;
    auVar107[2] = bVar31;
    auVar107[3] = bVar33;
    auVar107[4] = bVar35;
    auVar107[5] = bVar37;
    auVar107[6] = bVar39;
    auVar107[7] = bVar41;
    auVar107[8] = bVar43;
    auVar107[9] = bVar45;
    auVar107[10] = bVar47;
    auVar107[0xb] = bVar49;
    auVar107[0xc] = bVar51;
    auVar107[0xd] = bVar53;
    auVar107[0xe] = bVar55;
    auVar107[0xf] = bVar57;
    uVar79 = a64_TBL(ZEXT816(0),auVar107,DAT_01cd5418);
    auVar1[1] = bVar29;
    auVar1[0] = bVar26;
    auVar1[2] = bVar31;
    auVar1[3] = bVar33;
    auVar1[4] = bVar35;
    auVar1[5] = bVar37;
    auVar1[6] = bVar39;
    auVar1[7] = bVar41;
    auVar1[8] = bVar43;
    auVar1[9] = bVar45;
    auVar1[10] = bVar47;
    auVar1[0xb] = bVar49;
    auVar1[0xc] = bVar51;
    auVar1[0xd] = bVar53;
    auVar1[0xe] = bVar55;
    auVar1[0xf] = bVar57;
    uVar23 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd5158);
    fVar108 = (float)uVar23;
    fVar110 = (float)((ulong)uVar23 >> 0x20);
    auVar2[1] = bVar29;
    auVar2[0] = bVar26;
    auVar2[2] = bVar31;
    auVar2[3] = bVar33;
    auVar2[4] = bVar35;
    auVar2[5] = bVar37;
    auVar2[6] = bVar39;
    auVar2[7] = bVar41;
    auVar2[8] = bVar43;
    auVar2[9] = bVar45;
    auVar2[10] = bVar47;
    auVar2[0xb] = bVar49;
    auVar2[0xc] = bVar51;
    auVar2[0xd] = bVar53;
    auVar2[0xe] = bVar55;
    auVar2[0xf] = bVar57;
    uVar23 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    *(undefined1 *)(puVar22 + 0x18) = 0;
    fVar74 = (float)uVar18 * (float)uVar18;
    fVar75 = fVar75 * fVar75;
    fVar68 = (float)uVar7 * (float)uVar7;
    fVar70 = fVar70 * fVar70;
    fVar60 = (float)uVar79 * (float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar26)));
    fVar63 = (float)((ulong)uVar79 >> 0x20) *
             (float)CONCAT13(bVar41,CONCAT12(bVar39,CONCAT11(bVar37,bVar35)));
    fVar65 = fVar72 * (float)CONCAT13(bVar49,CONCAT12(bVar47,CONCAT11(bVar45,bVar43)));
    fVar67 = fVar61 * (float)CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar51)));
    fVar69 = (float)((ulong)uVar8 >> 0x20);
    fVar59 = (float)uVar23 * fVar69;
    fVar62 = (float)((ulong)uVar23 >> 0x20) * fVar69;
    fVar60 = fVar60 + fVar60;
    fVar63 = fVar63 + fVar63;
    fVar65 = fVar65 + fVar65;
    fVar67 = fVar67 + fVar67;
    fVar59 = fVar59 + fVar59;
    fVar62 = fVar62 + fVar62;
    fVar64 = fVar108 * fVar69 + fVar108 * fVar69;
    fVar66 = fVar110 * fVar69 + fVar110 * fVar69;
    fVar69 = fVar60 + fVar59;
    fVar73 = fVar63 + fVar62;
    uVar50 = SUB41(fVar73,0);
    uVar52 = (undefined1)((uint)fVar73 >> 8);
    uVar54 = (undefined1)((uint)fVar73 >> 0x10);
    uVar56 = (undefined1)((uint)fVar73 >> 0x18);
    fVar73 = fVar65 + fVar64;
    uVar58 = SUB41(fVar73,0);
    uVar82 = (undefined1)((uint)fVar73 >> 8);
    uVar83 = (undefined1)((uint)fVar73 >> 0x10);
    uVar84 = (undefined1)((uint)fVar73 >> 0x18);
    fVar73 = fVar67 + fVar66;
    uVar85 = SUB41(fVar73,0);
    uVar86 = (undefined1)((uint)fVar73 >> 8);
    uVar87 = (undefined1)((uint)fVar73 >> 0x10);
    uVar88 = (undefined1)((uint)fVar73 >> 0x18);
    auVar89._0_4_ = fVar60 - fVar59;
    auVar89._4_4_ = fVar63 - fVar62;
    auVar89._8_4_ = fVar65 - fVar64;
    auVar89._12_4_ = fVar67 - fVar66;
    fVar60 = (float)_DAT_01d4a130 - (fVar68 + fVar68 + fVar74 + fVar74);
    fVar63 = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar70 + fVar70 + fVar75 + fVar75);
    uVar27 = SUB41(fVar63,0);
    uVar30 = (undefined1)((uint)fVar63 >> 8);
    uVar32 = (undefined1)((uint)fVar63 >> 0x10);
    uVar34 = (undefined1)((uint)fVar63 >> 0x18);
    fVar63 = (float)_UNK_01d4a138 -
             (fVar108 * fVar108 + fVar108 * fVar108 + fVar72 * fVar72 + fVar72 * fVar72);
    uVar36 = (undefined1)((uint)fVar63 >> 8);
    uVar38 = (undefined1)((uint)fVar63 >> 0x10);
    uVar40 = (undefined1)((uint)fVar63 >> 0x18);
    fVar65 = (float)((ulong)_UNK_01d4a138 >> 0x20) -
             (fVar110 * fVar110 + fVar110 * fVar110 + fVar61 * fVar61 + fVar61 * fVar61);
    uVar42 = SUB41(fVar65,0);
    uVar44 = (undefined1)((uint)fVar65 >> 8);
    uVar46 = (undefined1)((uint)fVar65 >> 0x10);
    uVar48 = (undefined1)((uint)fVar65 >> 0x18);
    auVar9[4] = uVar50;
    auVar9._0_4_ = fVar69;
    auVar9[5] = uVar52;
    auVar9[6] = uVar54;
    auVar9[7] = uVar56;
    auVar9[8] = uVar58;
    auVar9[9] = uVar82;
    auVar9[10] = uVar83;
    auVar9[0xb] = uVar84;
    auVar9[0xc] = uVar85;
    auVar9[0xd] = uVar86;
    auVar9[0xe] = uVar87;
    auVar9[0xf] = uVar88;
    uVar23 = a64_TBL(ZEXT816(0),auVar9,auVar89,DAT_01cd5250);
    auVar10[4] = uVar50;
    auVar10._0_4_ = fVar69;
    auVar10[5] = uVar52;
    auVar10[6] = uVar54;
    auVar10[7] = uVar56;
    auVar10[8] = uVar58;
    auVar10[9] = uVar82;
    auVar10[10] = uVar83;
    auVar10[0xb] = uVar84;
    auVar10[0xc] = uVar85;
    auVar10[0xd] = uVar86;
    auVar10[0xe] = uVar87;
    auVar10[0xf] = uVar88;
    uVar7 = a64_TBL(ZEXT816(0),auVar10,auVar89,DAT_01cd51f8);
    uVar71 = (undefined4)((ulong)uVar7 >> 0x20);
    auVar11[4] = uVar50;
    auVar11._0_4_ = fVar69;
    auVar11[5] = uVar52;
    auVar11[6] = uVar54;
    auVar11[7] = uVar56;
    auVar11[8] = uVar58;
    auVar11[9] = uVar82;
    auVar11[10] = uVar83;
    auVar11[0xb] = uVar84;
    auVar11[0xc] = uVar85;
    auVar11[0xd] = uVar86;
    auVar11[0xe] = uVar87;
    auVar11[0xf] = uVar88;
    auVar98._0_8_ = a64_TBL(ZEXT816(0),auVar11,auVar89,DAT_01cd5430);
    auVar12[4] = uVar50;
    auVar12._0_4_ = fVar69;
    auVar12[5] = uVar52;
    auVar12[6] = uVar54;
    auVar12[7] = uVar56;
    auVar12[8] = uVar58;
    auVar12[9] = uVar82;
    auVar12[10] = uVar83;
    auVar12[0xb] = uVar84;
    auVar12[0xc] = uVar85;
    auVar12[0xd] = uVar86;
    auVar12[0xe] = uVar87;
    auVar12[0xf] = uVar88;
    uVar8 = a64_TBL(ZEXT816(0),auVar12,auVar89,DAT_01cd5050);
    auVar98._8_8_ = uVar8;
    auVar3[4] = uVar27;
    auVar3._0_4_ = fVar60;
    auVar3[5] = uVar30;
    auVar3[6] = uVar32;
    auVar3[7] = uVar34;
    auVar3[8] = SUB41(fVar63,0);
    auVar3[9] = uVar36;
    auVar3[10] = uVar38;
    auVar3[0xb] = uVar40;
    auVar3[0xc] = uVar42;
    auVar3[0xd] = uVar44;
    auVar3[0xe] = uVar46;
    auVar3[0xf] = uVar48;
    auVar5._8_4_ = (int)uVar7;
    auVar5._0_8_ = uVar23;
    auVar5._12_4_ = uVar71;
    uVar79 = a64_TBL(ZEXT816(0),auVar3,auVar5,DAT_01cd50d8);
    auVar4[4] = uVar27;
    auVar4._0_4_ = fVar60;
    auVar4[5] = uVar30;
    auVar4[6] = uVar32;
    auVar4[7] = uVar34;
    auVar4[8] = SUB41(fVar63,0);
    auVar4[9] = uVar36;
    auVar4[10] = uVar38;
    auVar4[0xb] = uVar40;
    auVar4[0xc] = uVar42;
    auVar4[0xd] = uVar44;
    auVar4[0xe] = uVar46;
    auVar4[0xf] = uVar48;
    auVar6._8_4_ = (int)uVar7;
    auVar6._0_8_ = uVar23;
    auVar6._12_4_ = uVar71;
    uVar18 = a64_TBL(ZEXT816(0),auVar4,auVar6,DAT_01cd4fb8);
    uVar97 = (undefined4)
             (CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(uVar42,fVar63)))) >> 0x20);
    uVar71 = (undefined4)
             (CONCAT17(uVar34,CONCAT16(uVar32,CONCAT15(uVar30,CONCAT14(uVar27,fVar60)))) >> 0x20);
    auVar13._4_4_ = uVar71;
    auVar13._0_4_ = fVar60;
    auVar13._8_4_ = fVar63;
    auVar13._12_4_ = uVar97;
    uVar7 = a64_TBL(ZEXT816(0),auVar13,auVar98,DAT_01cd50b8);
    auVar14._4_4_ = uVar71;
    auVar14._0_4_ = fVar60;
    auVar14._8_4_ = fVar63;
    auVar14._12_4_ = uVar97;
    uVar8 = a64_TBL(ZEXT816(0),auVar14,auVar98,DAT_01cd5308);
    auVar15._4_4_ = uVar71;
    auVar15._0_4_ = fVar60;
    auVar15._8_4_ = fVar63;
    auVar15._12_4_ = uVar97;
    uVar80 = a64_TBL(ZEXT816(0),auVar15,auVar98,DAT_01cd5008);
    fVar65 = (float)puVar22[0x1b];
    fVar67 = (float)puVar22[0x1a];
    fVar73 = (float)((ulong)puVar22[0x1a] >> 0x20);
    auVar16._4_4_ = uVar71;
    auVar16._0_4_ = fVar60;
    auVar16._8_4_ = fVar63;
    auVar16._12_4_ = uVar97;
    uVar23 = a64_TBL(ZEXT816(0),auVar16,auVar98,DAT_01cd4fb0);
    fVar69 = (float)uVar79 * fVar65;
    uVar27 = SUB41(fVar69,0);
    uVar30 = (undefined1)((uint)fVar69 >> 8);
    uVar32 = (undefined1)((uint)fVar69 >> 0x10);
    uVar34 = (undefined1)((uint)fVar69 >> 0x18);
    fVar60 = (float)((ulong)uVar79 >> 0x20) * fVar65;
    uVar36 = SUB41(fVar60,0);
    uVar38 = (undefined1)((uint)fVar60 >> 8);
    uVar40 = (undefined1)((uint)fVar60 >> 0x10);
    uVar42 = (undefined1)((uint)fVar60 >> 0x18);
    fVar72 = (float)uVar18 * fVar65;
    uVar44 = SUB41(fVar72,0);
    uVar46 = (undefined1)((uint)fVar72 >> 8);
    uVar48 = (undefined1)((uint)fVar72 >> 0x10);
    uVar50 = (undefined1)((uint)fVar72 >> 0x18);
    fVar65 = (float)((ulong)uVar18 >> 0x20) * fVar65;
    uVar52 = SUB41(fVar65,0);
    uVar54 = (undefined1)((uint)fVar65 >> 8);
    uVar56 = (undefined1)((uint)fVar65 >> 0x10);
    uVar58 = (undefined1)((uint)fVar65 >> 0x18);
    fVar60 = (float)uVar7 * fVar67;
    fVar63 = (float)((ulong)uVar7 >> 0x20) * fVar67;
    fVar65 = (float)uVar8 * fVar67;
    fVar67 = (float)((ulong)uVar8 >> 0x20) * fVar67;
    puVar22[0x11] = CONCAT17(uVar58,CONCAT16(uVar56,CONCAT15(uVar54,CONCAT14(uVar52,fVar72))));
    puVar22[0x10] = CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar38,CONCAT14(uVar36,fVar69))));
    puVar22[0x13] = auVar17._8_8_;
    puVar22[0x12] = auVar17._0_8_;
    fVar69 = (float)uVar80 * fVar73;
    fVar72 = (float)((ulong)uVar80 >> 0x20) * fVar73;
    fVar59 = (float)uVar23 * fVar73;
    fVar73 = (float)((ulong)uVar23 >> 0x20) * fVar73;
    puVar22[0xd] = CONCAT44(fVar67,fVar65);
    puVar22[0xc] = CONCAT44(fVar63,fVar60);
    puVar22[0xf] = CONCAT44(fVar73,fVar59);
    puVar22[0xe] = CONCAT44(fVar72,fVar69);
  }
  lVar24 = *(long *)(*param_1 + 0xa0);
  fVar66 = (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar27)));
  uVar19 = CONCAT14((char)((uint)fVar67 >> 0x18),
                    CONCAT13((char)((uint)fVar67 >> 0x10),
                             CONCAT12((char)((uint)fVar67 >> 8),CONCAT11(SUB41(fVar67,0),uVar50))));
  fVar108 = auVar76._0_4_;
  fVar93 = *(float *)(lVar24 + 0xd0) * 0.5;
  fVar110 = auVar76._4_4_;
  fVar68 = fVar93 * *(float *)PTR_Float1Divided2Pi_02715148;
  fVar67 = *(float *)(PTR_SinCoefficients_02715168 + 4);
  fVar75 = auVar76._8_4_;
  fVar61 = *(float *)(PTR_SinCoefficients_02715168 + 0xc);
  fVar62 = *(float *)(PTR_CosCoefficients_02715170 + 4);
  fVar64 = *(float *)(PTR_CosCoefficients_02715170 + 0xc);
  auVar99._0_4_ = (int)(fVar68 + (float)(-(uint)(0.0 <= fVar68) & 0x80000000 ^ 0xbf000000));
  auVar99._4_4_ = (int)(fVar68 + (float)(-(uint)(0.0 <= fVar68) & 0x80000000 ^ 0xbf000000));
  auVar99._8_4_ = (int)(fVar68 + (float)(-(uint)(0.0 <= fVar68) & 0x80000000 ^ 0xbf000000));
  auVar99._12_4_ = (int)(fVar68 + (float)(-(uint)(0.0 <= fVar68) & 0x80000000 ^ 0xbf000000));
  auVar100 = NEON_scvtf(auVar99,4);
  fVar68 = *(float *)PTR_Float2Pi_02715150;
  fVar70 = *(float *)PTR_FloatPiDivided2_02715158;
  fVar74 = *(float *)PTR_FloatPi_02715160;
  fVar94 = fVar93 - auVar100._0_4_ * fVar68;
  fVar95 = fVar93 - auVar100._4_4_ * fVar68;
  fVar96 = fVar93 - auVar100._8_4_ * fVar68;
  fVar93 = fVar93 - auVar100._12_4_ * fVar68;
  auVar101._0_8_ = CONCAT44(-(uint)(fVar70 < fVar95),-(uint)(fVar70 < fVar94));
  auVar101._8_4_ = -(uint)(fVar70 < fVar96);
  auVar101._12_4_ = -(uint)(fVar70 < fVar93);
  auVar77._0_4_ = fVar74 - fVar94;
  auVar77._4_4_ = fVar74 - fVar95;
  auVar77._8_4_ = fVar74 - fVar96;
  auVar77._12_4_ = fVar74 - fVar93;
  auVar105._8_8_ = auVar101._8_8_;
  auVar105._0_8_ = auVar101._0_8_;
  auVar17._4_4_ = fVar95;
  auVar17._0_4_ = fVar94;
  auVar17._8_4_ = fVar96;
  auVar17._12_4_ = fVar93;
  auVar106._4_4_ = fVar95;
  auVar106._0_4_ = fVar94;
  auVar106._8_4_ = fVar96;
  auVar106._12_4_ = fVar93;
  auVar106 = auVar106 ^ (auVar17 ^ auVar77) & auVar105;
  fVar70 = -fVar70;
  auVar90._0_8_ = CONCAT44(-(uint)(auVar106._4_4_ < fVar70),-(uint)(auVar106._0_4_ < fVar70));
  auVar90._8_4_ = -(uint)(auVar106._8_4_ < fVar70);
  auVar90._12_4_ = -(uint)(auVar106._12_4_ < fVar70);
  fVar74 = -fVar74;
  auVar115._8_8_ = auVar90._8_8_;
  auVar115._0_8_ = auVar90._0_8_;
  auVar78._0_4_ = fVar74 - auVar106._0_4_;
  auVar78._4_4_ = fVar74 - auVar106._4_4_;
  auVar78._8_4_ = fVar74 - auVar106._8_4_;
  auVar78._12_4_ = fVar74 - auVar106._12_4_;
  auVar106 = auVar106 ^ (auVar106 ^ auVar78) & auVar115;
  auVar107 = NEON_fmov(0xbf800000,4);
  auVar100 = NEON_fmov(0x3f800000,4);
  auVar102 = auVar100 ^ (auVar100 ^ auVar107) & auVar101;
  auVar102 = auVar102 ^ (auVar102 ^ auVar107) & auVar90;
  fVar96 = *(float *)PTR_SinCoefficients_02715168;
  fVar114 = auVar106._0_4_;
  fVar74 = fVar114 * fVar114;
  fVar116 = auVar106._4_4_;
  fVar93 = fVar116 * fVar116;
  fVar117 = auVar106._8_4_;
  fVar94 = fVar117 * fVar117;
  fVar118 = auVar106._12_4_;
  fVar95 = fVar118 * fVar118;
  fVar104 = -*(float *)(PTR_SinCoefficients_02715168 + 8);
  fVar68 = 0.0 - (fVar60 * fVar108 + fVar63 * fVar110 + fVar65 * fVar75 +
                 (float)((uint5)uVar19 >> 8) * 1.0);
  fVar70 = 0.0 - (fVar69 * fVar108 + fVar72 * fVar110 + fVar59 * fVar75 + fVar73 * 1.0);
  fVar66 = 0.0 - (fVar66 * fVar108 +
                  (float)(CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar38,CONCAT14(uVar36,fVar66))))
                         >> 0x20) * fVar110 +
                  (float)(CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,fVar65))))
                         >> 0x20) * fVar75 +
                 (float)(CONCAT18(uVar58,CONCAT17(uVar56,CONCAT16(uVar54,CONCAT15(uVar52,uVar19))))
                        >> 0x28) * 1.0);
  fVar73 = -*(float *)(PTR_SinCoefficients_02715168 + 0x10);
  fVar109 = auVar100._0_4_;
  fVar111 = auVar100._4_4_;
  fVar112 = auVar100._8_4_;
  fVar113 = auVar100._12_4_;
  fVar110 = *(float *)PTR_CosCoefficients_02715170;
  fVar75 = -*(float *)(PTR_CosCoefficients_02715170 + 8);
  fVar108 = -*(float *)(PTR_CosCoefficients_02715170 + 0x10);
  auVar91._0_4_ =
       ((fVar109 +
        fVar74 * (fVar73 + fVar74 * (fVar61 + fVar74 * (fVar104 +
                                                       fVar74 * (fVar67 - fVar74 * fVar96))))) *
       fVar114) /
       ((fVar109 +
        fVar74 * (fVar108 +
                 fVar74 * (fVar64 + fVar74 * (fVar75 + fVar74 * (fVar62 - fVar74 * fVar110))))) *
       auVar102._0_4_);
  auVar91._4_4_ =
       ((fVar111 +
        fVar93 * (fVar73 + fVar93 * (fVar61 + fVar93 * (fVar104 +
                                                       fVar93 * (fVar67 - fVar93 * fVar96))))) *
       fVar116) /
       ((fVar111 +
        fVar93 * (fVar108 +
                 fVar93 * (fVar64 + fVar93 * (fVar75 + fVar93 * (fVar62 - fVar93 * fVar110))))) *
       auVar102._4_4_);
  auVar91._8_4_ =
       ((fVar112 +
        fVar94 * (fVar73 + fVar94 * (fVar61 + fVar94 * (fVar104 +
                                                       fVar94 * (fVar67 - fVar94 * fVar96))))) *
       fVar117) /
       ((fVar112 +
        fVar94 * (fVar108 +
                 fVar94 * (fVar64 + fVar94 * (fVar75 + fVar94 * (fVar62 - fVar94 * fVar110))))) *
       auVar102._8_4_);
  auVar91._12_4_ =
       ((fVar113 +
        fVar95 * (fVar73 + fVar95 * (fVar61 + fVar95 * (fVar104 +
                                                       fVar95 * (fVar67 - fVar95 * fVar96))))) *
       fVar118) /
       ((fVar113 +
        fVar95 * (fVar108 +
                 fVar95 * (fVar64 + fVar95 * (fVar75 + fVar95 * (fVar62 - fVar95 * fVar110))))) *
       auVar102._12_4_);
  auVar100 = NEON_frecpe(auVar91,4);
  auVar102 = NEON_frecps(auVar100,auVar91,4);
  auVar103._0_4_ = auVar100._0_4_ * auVar102._0_4_;
  auVar103._4_4_ = auVar100._4_4_ * auVar102._4_4_;
  auVar103._8_4_ = auVar100._8_4_ * auVar102._8_4_;
  auVar103._12_4_ = auVar100._12_4_ * auVar102._12_4_;
  fVar67 = *(float *)(lVar24 + 200);
  fVar73 = *(float *)(lVar24 + 0xcc);
  auVar100 = NEON_frecps(auVar103,auVar91,4);
  auVar92._0_4_ = auVar103._0_4_ * auVar100._0_4_;
  auVar92._4_4_ = auVar103._4_4_ * auVar100._4_4_;
  auVar92._8_4_ = auVar103._8_4_ * auVar100._8_4_;
  auVar92._12_4_ = auVar103._12_4_ * auVar100._12_4_;
  fVar110 = auVar92._0_4_ / *(float *)(lVar24 + 0xd4);
  fVar96 = -1.0 / (fVar73 - fVar67);
  auVar81._0_12_ = SUB1612(ZEXT816(0),0);
  auVar81._12_4_ = 0;
  auVar100 = NEON_ext(auVar81,auVar92,4,1);
  auVar100 = NEON_ext(auVar100,auVar100,8,1);
  fVar95 = (fVar67 + fVar73) * fVar96;
  fVar96 = (fVar67 * fVar73 + fVar67 * fVar73) * fVar96;
  fVar75 = auVar100._0_4_;
  fVar62 = auVar100._4_4_;
  fVar93 = auVar100._8_4_;
  fVar94 = auVar100._12_4_;
  fVar73 = (float)CONCAT13(uVar42,CONCAT12(uVar40,CONCAT11(uVar38,uVar36)));
  fVar67 = (float)CONCAT13(uVar34,CONCAT12(uVar32,CONCAT11(uVar30,uVar27)));
  fVar61 = (float)CONCAT13(uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)));
  fVar74 = (float)param_2[1];
  fVar64 = (float)*param_2;
  fVar108 = (float)((ulong)*param_2 >> 0x20);
  fVar62 = (fVar60 * 0.0 + fVar62 * fVar69 + fVar67 * 0.0 + 0.0) * fVar64 +
           (fVar63 * 0.0 + fVar62 * fVar72 + fVar73 * 0.0 + 0.0) * fVar108 +
           (fVar65 * 0.0 + fVar62 * fVar59 + fVar61 * 0.0 + 0.0) * fVar74 +
           fVar111 * (fVar68 * 0.0 + fVar62 * fVar70 + fVar66 * 0.0 + 0.0);
  auVar28[4] = SUB41(fVar62,0);
  auVar28[5] = (undefined1)((uint)fVar62 >> 8);
  auVar28[6] = (undefined1)((uint)fVar62 >> 0x10);
  auVar28[7] = (undefined1)((uint)fVar62 >> 0x18);
  fVar62 = (fVar60 * 0.0 + fVar93 * fVar69 + fVar95 * fVar67 + fVar96 * 0.0) * fVar64 +
           (fVar63 * 0.0 + fVar93 * fVar72 + fVar95 * fVar73 + fVar96 * 0.0) * fVar108 +
           (fVar65 * 0.0 + fVar93 * fVar59 + fVar95 * fVar61 + fVar96 * 0.0) * fVar74 +
           fVar112 * (fVar68 * 0.0 + fVar93 * fVar70 + fVar95 * fVar66 + fVar96 * 1.0);
  auVar28[8] = SUB41(fVar62,0);
  auVar28[9] = (undefined1)((uint)fVar62 >> 8);
  auVar28[10] = (undefined1)((uint)fVar62 >> 0x10);
  auVar28[0xb] = (undefined1)((uint)fVar62 >> 0x18);
  fVar62 = (fVar60 * 0.0 + fVar94 * fVar69 + fVar67 * -1.0 + 0.0) * fVar64 +
           (fVar63 * 0.0 + fVar94 * fVar72 + fVar73 * -1.0 + 0.0) * fVar108 +
           (fVar65 * 0.0 + fVar94 * fVar59 + fVar61 * -1.0 + 0.0) * fVar74 +
           fVar113 * (fVar68 * 0.0 + fVar94 * fVar70 + fVar66 * -1.0 + 0.0);
  auVar28[0xc] = SUB41(fVar62,0);
  auVar28[0xd] = (undefined1)((uint)fVar62 >> 8);
  auVar28[0xe] = (undefined1)((uint)fVar62 >> 0x10);
  auVar28[0xf] = (undefined1)((uint)fVar62 >> 0x18);
  auVar28._0_4_ =
       (fVar110 * fVar60 + fVar75 * fVar69 + fVar67 * 0.0 + 0.0) * fVar64 +
       (fVar110 * fVar63 + fVar75 * fVar72 + fVar73 * 0.0 + 0.0) * fVar108 +
       (fVar110 * fVar65 + fVar75 * fVar59 + fVar61 * 0.0 + 0.0) * fVar74 +
       fVar109 * (fVar110 * fVar68 + fVar75 * fVar70 + fVar66 * 0.0 + 0.0);
  return auVar28;
}


