/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e4ed0; name: FUN_012e4ed0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_012e4ed0(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
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
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 (*pauVar31) [12];
  undefined8 *puVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  undefined1 uVar38;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 auVar39 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uVar74;
  undefined8 uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  
  lVar33 = *(long *)(param_1 + 0x730);
  lVar34 = *(long *)(param_1 + 0x728);
  if (lVar33 == lVar34) {
LAB_012e4f94:
    lVar33 = *(long *)(param_1 + 0x720);
    if (lVar33 == 0) {
      puVar32 = (undefined8 *)FUN_012dcaa0(param_1);
      uVar8 = puVar32[1];
      uVar47 = (undefined1)uVar8;
      uVar48 = (undefined1)((ulong)uVar8 >> 8);
      uVar49 = (undefined1)((ulong)uVar8 >> 0x10);
      uVar50 = (undefined1)((ulong)uVar8 >> 0x18);
      uVar51 = (undefined1)((ulong)uVar8 >> 0x20);
      uVar52 = (undefined1)((ulong)uVar8 >> 0x28);
      uVar53 = (undefined1)((ulong)uVar8 >> 0x30);
      uVar54 = (undefined1)((ulong)uVar8 >> 0x38);
      uVar8 = *puVar32;
      uVar38 = (undefined1)uVar8;
      uVar40 = (undefined1)((ulong)uVar8 >> 8);
      uVar41 = (undefined1)((ulong)uVar8 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar8 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar8 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar8 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar8 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar8 >> 0x38);
      goto LAB_012e5144;
    }
    pauVar31 = (undefined1 (*) [12])FUN_012dc8d0(param_1);
    lVar34 = *(long *)(lVar33 + 0x120);
    iVar36 = *(int *)(*(long *)(lVar33 + 0x128) + 0x40);
    FUN_00723030(lVar34,iVar36);
    lVar33 = *(long *)(lVar34 + 0x1b8) + (long)iVar36 * 0x130;
    uVar8 = *(undefined8 *)(lVar33 + 0xd8);
    uVar47 = (undefined1)uVar8;
    uVar48 = (undefined1)((ulong)uVar8 >> 8);
    uVar49 = (undefined1)((ulong)uVar8 >> 0x10);
    uVar50 = (undefined1)((ulong)uVar8 >> 0x18);
    uVar8 = *(undefined8 *)(lVar33 + 0xd0);
    uVar38 = (undefined1)uVar8;
    uVar40 = (undefined1)((ulong)uVar8 >> 8);
    uVar41 = (undefined1)((ulong)uVar8 >> 0x10);
    uVar42 = (undefined1)((ulong)uVar8 >> 0x18);
    uVar43 = (undefined1)((ulong)uVar8 >> 0x20);
    uVar44 = (undefined1)((ulong)uVar8 >> 0x28);
    uVar45 = (undefined1)((ulong)uVar8 >> 0x30);
    uVar46 = (undefined1)((ulong)uVar8 >> 0x38);
  }
  else {
    uVar38 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar37 = 0;
    iVar36 = 0;
    do {
      lVar35 = *(long *)(lVar34 + uVar37 * 8);
      if (lVar35 != 0) {
        lVar33 = *(long *)(lVar35 + 0x120);
        iVar1 = *(int *)(*(long *)(lVar35 + 0x128) + 0x40);
        fVar58 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar38)));
        FUN_00723030(lVar33,iVar1);
        lVar33 = *(long *)(lVar33 + 0x1b8) + (long)iVar1 * 0x130;
        uVar8 = *(undefined8 *)(lVar33 + 0xd0);
        fVar55 = fVar58 + (float)uVar8;
        fVar58 = (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar58))))
                        >> 0x20) + (float)((ulong)uVar8 >> 0x20);
        fVar60 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) +
                 (float)*(undefined8 *)(lVar33 + 0xd8);
        uVar47 = SUB41(fVar60,0);
        uVar48 = (undefined1)((uint)fVar60 >> 8);
        uVar49 = (undefined1)((uint)fVar60 >> 0x10);
        uVar50 = (undefined1)((uint)fVar60 >> 0x18);
        uVar38 = SUB41(fVar55,0);
        uVar40 = (undefined1)((uint)fVar55 >> 8);
        uVar41 = (undefined1)((uint)fVar55 >> 0x10);
        uVar42 = (undefined1)((uint)fVar55 >> 0x18);
        uVar43 = SUB41(fVar58,0);
        uVar44 = (undefined1)((uint)fVar58 >> 8);
        uVar45 = (undefined1)((uint)fVar58 >> 0x10);
        uVar46 = (undefined1)((uint)fVar58 >> 0x18);
        lVar33 = *(long *)(param_1 + 0x730);
        lVar34 = *(long *)(param_1 + 0x728);
        iVar36 = iVar36 + 1;
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < (ulong)(lVar33 - lVar34 >> 3));
    if (iVar36 == 0) goto LAB_012e4f94;
    fVar58 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar38)));
    pauVar31 = (undefined1 (*) [12])FUN_012dc8d0(param_1);
    fVar55 = 1.0 / (float)iVar36;
    fVar60 = fVar58 * fVar55;
    uVar38 = SUB41(fVar60,0);
    uVar40 = (undefined1)((uint)fVar60 >> 8);
    uVar41 = (undefined1)((uint)fVar60 >> 0x10);
    uVar42 = (undefined1)((uint)fVar60 >> 0x18);
    fVar58 = (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar58)))) >>
                    0x20) * fVar55;
    uVar43 = SUB41(fVar58,0);
    uVar44 = (undefined1)((uint)fVar58 >> 8);
    uVar45 = (undefined1)((uint)fVar58 >> 0x10);
    uVar46 = (undefined1)((uint)fVar58 >> 0x18);
    fVar55 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) * fVar55;
    uVar47 = SUB41(fVar55,0);
    uVar48 = (undefined1)((uint)fVar55 >> 8);
    uVar49 = (undefined1)((uint)fVar55 >> 0x10);
    uVar50 = (undefined1)((uint)fVar55 >> 0x18);
  }
  fVar58 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar38)));
  puVar32 = (undefined8 *)FUN_012dc700(param_1);
  fVar61 = fVar58 * (float)*puVar32;
  fVar56 = (float)(CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,fVar58)))) >>
                  0x20) * (float)((ulong)*puVar32 >> 0x20);
  fVar58 = (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) * (float)puVar32[1];
  fVar64 = (float)((ulong)*(undefined8 *)(*pauVar31 + 8) >> 0x20);
  fVar57 = (float)*(undefined8 *)*pauVar31;
  fVar59 = (float)((ulong)*(undefined8 *)*pauVar31 >> 0x20);
  fVar55 = fVar57 * (float)_DAT_01d4ae80;
  fVar60 = fVar59 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar66 = (float)*(undefined8 *)(*pauVar31 + 8) * (float)_UNK_01d4ae88;
  fVar67 = fVar64 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar20._4_4_ = fVar56;
  auVar20._0_4_ = fVar61;
  auVar20._8_4_ = fVar58;
  auVar20._12_4_ = 0;
  uVar8 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd4f90);
  auVar21._4_4_ = fVar56;
  auVar21._0_4_ = fVar61;
  auVar21._8_4_ = fVar58;
  auVar21._12_4_ = 0;
  uVar69 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
  auVar22._4_4_ = fVar56;
  auVar22._0_4_ = fVar61;
  auVar22._8_4_ = fVar58;
  auVar22._12_4_ = 0;
  uVar23 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5418);
  fVar68 = (float)((ulong)uVar23 >> 0x20);
  auVar12._4_4_ = fVar60;
  auVar12._0_4_ = fVar55;
  auVar12._8_4_ = fVar66;
  auVar12._12_4_ = fVar67;
  uVar74 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd4f90);
  auVar13._4_4_ = fVar60;
  auVar13._0_4_ = fVar55;
  auVar13._8_4_ = fVar66;
  auVar13._12_4_ = fVar67;
  uVar76 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  auVar14._4_4_ = fVar60;
  auVar14._0_4_ = fVar55;
  auVar14._8_4_ = fVar66;
  auVar14._12_4_ = fVar67;
  uVar77 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
  auVar15._4_4_ = fVar60;
  auVar15._0_4_ = fVar55;
  auVar15._8_4_ = fVar66;
  auVar15._12_4_ = fVar67;
  uVar78 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
  fVar58 = (float)((ulong)uVar8 >> 0x20);
  fVar63 = (float)((ulong)uVar69 >> 0x20);
  auVar16._4_4_ = fVar60;
  auVar16._0_4_ = fVar55;
  auVar16._8_4_ = fVar66;
  auVar16._12_4_ = fVar67;
  uVar75 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
  auVar17._4_4_ = fVar60;
  auVar17._0_4_ = fVar55;
  auVar17._8_4_ = fVar55;
  auVar17._12_4_ = fVar60;
  uVar18 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
  fVar70 = (float)_DAT_01d4ae90;
  fVar71 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar72 = (float)_UNK_01d4ae98;
  fVar73 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar9._12_4_ = fVar64;
  auVar9._0_12_ = *pauVar31;
  uVar62 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
  auVar10._12_4_ = fVar64;
  auVar10._0_12_ = *pauVar31;
  uVar19 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  fVar65 = (float)((ulong)uVar19 >> 0x20);
  fVar55 = (fVar55 * (float)uVar8 + fVar70 * fVar61 * (float)uVar74 +
           fVar70 * (float)uVar23 * (float)uVar75) - (float)uVar69 * (float)uVar77;
  fVar60 = (fVar60 * fVar58 + fVar71 * fVar56 * (float)((ulong)uVar74 >> 0x20) +
           fVar71 * fVar68 * (float)((ulong)uVar75 >> 0x20)) -
           fVar63 * (float)((ulong)uVar77 >> 0x20);
  uVar38 = SUB41(fVar60,0);
  uVar40 = (undefined1)((uint)fVar60 >> 8);
  uVar41 = (undefined1)((uint)fVar60 >> 0x10);
  uVar42 = (undefined1)((uint)fVar60 >> 0x18);
  fVar61 = (fVar66 * (float)uVar8 + fVar72 * (float)uVar69 * (float)uVar76 +
           fVar72 * fVar61 * (float)uVar18) - (float)uVar23 * (float)uVar78;
  uVar43 = SUB41(fVar61,0);
  uVar44 = (undefined1)((uint)fVar61 >> 8);
  uVar45 = (undefined1)((uint)fVar61 >> 0x10);
  uVar46 = (undefined1)((uint)fVar61 >> 0x18);
  fVar58 = (fVar67 * fVar58 + fVar73 * fVar63 * (float)((ulong)uVar76 >> 0x20) +
           fVar73 * fVar56 * (float)((ulong)uVar18 >> 0x20)) -
           fVar68 * (float)((ulong)uVar78 >> 0x20);
  uVar47 = SUB41(fVar58,0);
  uVar48 = (undefined1)((uint)fVar58 >> 8);
  uVar49 = (undefined1)((uint)fVar58 >> 0x10);
  uVar50 = (undefined1)((uint)fVar58 >> 0x18);
  auVar2[4] = uVar38;
  auVar2._0_4_ = fVar55;
  auVar2[5] = uVar40;
  auVar2[6] = uVar41;
  auVar2[7] = uVar42;
  auVar2[8] = uVar43;
  auVar2[9] = uVar44;
  auVar2[10] = uVar45;
  auVar2[0xb] = uVar46;
  auVar2[0xc] = uVar47;
  auVar2[0xd] = uVar48;
  auVar2[0xe] = uVar49;
  auVar2[0xf] = uVar50;
  uVar74 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  auVar3[4] = uVar38;
  auVar3._0_4_ = fVar55;
  auVar3[5] = uVar40;
  auVar3[6] = uVar41;
  auVar3[7] = uVar42;
  auVar3[8] = uVar43;
  auVar3[9] = uVar44;
  auVar3[10] = uVar45;
  auVar3[0xb] = uVar46;
  auVar3[0xc] = uVar47;
  auVar3[0xd] = uVar48;
  auVar3[0xe] = uVar49;
  auVar3[0xf] = uVar50;
  uVar76 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
  fVar63 = (float)((ulong)uVar62 >> 0x20);
  auVar11._12_4_ = fVar64;
  auVar11._0_12_ = *pauVar31;
  uVar23 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
  fVar66 = (float)((ulong)uVar23 >> 0x20);
  auVar4[4] = uVar38;
  auVar4._0_4_ = fVar55;
  auVar4[5] = uVar40;
  auVar4[6] = uVar41;
  auVar4[7] = uVar42;
  auVar4[8] = uVar43;
  auVar4[9] = uVar44;
  auVar4[10] = uVar45;
  auVar4[0xb] = uVar46;
  auVar4[0xc] = uVar47;
  auVar4[0xd] = uVar48;
  auVar4[0xe] = uVar49;
  auVar4[0xf] = uVar50;
  uVar18 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar38;
  auVar5._0_4_ = fVar55;
  auVar5[5] = uVar40;
  auVar5[6] = uVar41;
  auVar5[7] = uVar42;
  auVar5[8] = uVar43;
  auVar5[9] = uVar44;
  auVar5[10] = uVar45;
  auVar5[0xb] = uVar46;
  auVar5[0xc] = uVar47;
  auVar5[0xd] = uVar48;
  auVar5[0xe] = uVar49;
  auVar5[0xf] = uVar50;
  uVar69 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[4] = uVar38;
  auVar6._0_4_ = fVar55;
  auVar6[5] = uVar40;
  auVar6[6] = uVar41;
  auVar6[7] = uVar42;
  auVar6[8] = uVar43;
  auVar6[9] = uVar44;
  auVar6[10] = uVar45;
  auVar6[0xb] = uVar46;
  auVar6[0xc] = uVar47;
  auVar6[0xd] = uVar48;
  auVar6[0xe] = uVar49;
  auVar6[0xf] = uVar50;
  uVar75 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  auVar7[4] = uVar38;
  auVar7._0_4_ = fVar55;
  auVar7[5] = uVar40;
  auVar7[6] = uVar41;
  auVar7[7] = uVar42;
  auVar7[8] = SUB41(fVar55,0);
  auVar7[9] = (char)((uint)fVar55 >> 8);
  auVar7[10] = (char)((uint)fVar55 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar55 >> 0x18);
  auVar7[0xc] = uVar38;
  auVar7[0xd] = uVar40;
  auVar7[0xe] = uVar41;
  auVar7[0xf] = uVar42;
  uVar8 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  uVar27 = (ulong)DAT_01d4ab58 >> 0x20;
  uVar28 = (ulong)DAT_01d4ab58 >> 0x28;
  uVar29 = (ulong)DAT_01d4ab58 >> 0x30;
  uVar30 = (ulong)DAT_01d4ab58 >> 0x38;
  uVar37 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar24 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar25 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar26 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar56 = ((float)uVar62 * fVar55 + fVar70 * fVar57 * (float)uVar74 +
           fVar70 * (float)uVar23 * (float)uVar18) - (float)uVar19 * (float)uVar69;
  fVar64 = (fVar63 * fVar60 + fVar71 * fVar59 * (float)((ulong)uVar74 >> 0x20) +
           fVar71 * fVar66 * (float)((ulong)uVar18 >> 0x20)) -
           fVar65 * (float)((ulong)uVar69 >> 0x20);
  fVar55 = ((float)uVar62 * fVar61 + fVar72 * (float)uVar19 * (float)uVar76 +
           fVar72 * fVar57 * (float)uVar8) - (float)uVar23 * (float)uVar75;
  fVar61 = (fVar63 * fVar58 + fVar73 * fVar65 * (float)((ulong)uVar76 >> 0x20) +
           fVar73 * fVar59 * (float)((ulong)uVar8 >> 0x20)) -
           fVar66 * (float)((ulong)uVar75 >> 0x20);
  fVar55 = (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                           CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                    CONCAT11((byte)((uint)fVar55 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 8),
                                             SUB41(fVar55,0) & (byte)DAT_01d4ab58)));
  fVar58 = (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar56 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar56,0) & (byte)DAT_01d4ab50)));
  puVar32 = (undefined8 *)FUN_012dcaa0(param_1);
  fVar60 = (float)*puVar32 + fVar58;
  uVar38 = SUB41(fVar60,0);
  uVar40 = (undefined1)((uint)fVar60 >> 8);
  uVar41 = (undefined1)((uint)fVar60 >> 0x10);
  uVar42 = (undefined1)((uint)fVar60 >> 0x18);
  fVar58 = (float)((ulong)*puVar32 >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar64 >> 0x18) & (byte)uVar26,
                            CONCAT16((byte)((uint)fVar64 >> 0x10) & (byte)uVar25,
                                     CONCAT15((byte)((uint)fVar64 >> 8) & (byte)uVar24,
                                              CONCAT14(SUB41(fVar64,0) & (byte)uVar37,fVar58)))) >>
                  0x20);
  uVar43 = SUB41(fVar58,0);
  uVar44 = (undefined1)((uint)fVar58 >> 8);
  uVar45 = (undefined1)((uint)fVar58 >> 0x10);
  uVar46 = (undefined1)((uint)fVar58 >> 0x18);
  fVar58 = (float)puVar32[1] + fVar55;
  uVar47 = SUB41(fVar58,0);
  uVar48 = (undefined1)((uint)fVar58 >> 8);
  uVar49 = (undefined1)((uint)fVar58 >> 0x10);
  uVar50 = (undefined1)((uint)fVar58 >> 0x18);
  fVar58 = (float)((ulong)puVar32[1] >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & (byte)uVar30,
                            CONCAT16((byte)((uint)fVar61 >> 0x10) & (byte)uVar29,
                                     CONCAT15((byte)((uint)fVar61 >> 8) & (byte)uVar28,
                                              CONCAT14(SUB41(fVar61,0) & (byte)uVar27,fVar55)))) >>
                  0x20);
  uVar51 = SUB41(fVar58,0);
  uVar52 = (undefined1)((uint)fVar58 >> 8);
  uVar53 = (undefined1)((uint)fVar58 >> 0x10);
  uVar54 = (undefined1)((uint)fVar58 >> 0x18);
LAB_012e5144:
  auVar39[1] = uVar40;
  auVar39[0] = uVar38;
  auVar39[2] = uVar41;
  auVar39[3] = uVar42;
  auVar39[4] = uVar43;
  auVar39[5] = uVar44;
  auVar39[6] = uVar45;
  auVar39[7] = uVar46;
  auVar39[8] = uVar47;
  auVar39[9] = uVar48;
  auVar39[10] = uVar49;
  auVar39[0xb] = uVar50;
  auVar39[0xc] = uVar51;
  auVar39[0xd] = uVar52;
  auVar39[0xe] = uVar53;
  auVar39[0xf] = uVar54;
  return auVar39;
}


