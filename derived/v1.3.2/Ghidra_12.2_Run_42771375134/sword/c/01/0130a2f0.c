/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130a2f0; name: FUN_0130a2f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0130a2f0(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  undefined1 (*pauVar37) [12];
  undefined8 *puVar38;
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
  undefined1 auVar39 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  
  pauVar37 = (undefined1 (*) [12])FUN_012dc8d0();
  fVar54 = (float)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20);
  fVar52 = (float)*(undefined8 *)*pauVar37;
  fVar53 = (float)((ulong)*(undefined8 *)*pauVar37 >> 0x20);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x3f0);
  uVar58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3f8) >> 0x20);
  fVar55 = (float)*(undefined8 *)*pauVar1;
  fVar56 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar19 = fVar52 * (float)_DAT_01d4ae80;
  fVar22 = fVar53 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar40 = SUB41(fVar22,0);
  uVar41 = (undefined1)((uint)fVar22 >> 8);
  uVar42 = (undefined1)((uint)fVar22 >> 0x10);
  uVar43 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (float)*(undefined8 *)(*pauVar37 + 8) * (float)_UNK_01d4ae88;
  uVar44 = SUB41(fVar23,0);
  uVar45 = (undefined1)((uint)fVar23 >> 8);
  uVar46 = (undefined1)((uint)fVar23 >> 0x10);
  uVar47 = (undefined1)((uint)fVar23 >> 0x18);
  fVar24 = fVar54 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar48 = SUB41(fVar24,0);
  uVar49 = (undefined1)((uint)fVar24 >> 8);
  uVar50 = (undefined1)((uint)fVar24 >> 0x10);
  uVar51 = (undefined1)((uint)fVar24 >> 0x18);
  auVar25._12_4_ = uVar58;
  auVar25._0_12_ = *pauVar1;
  uVar8 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
  auVar26._12_4_ = uVar58;
  auVar26._0_12_ = *pauVar1;
  uVar61 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  auVar27._12_4_ = uVar58;
  auVar27._0_12_ = *pauVar1;
  uVar60 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd50f8);
  auVar13[4] = uVar40;
  auVar13._0_4_ = fVar19;
  auVar13[5] = uVar41;
  auVar13[6] = uVar42;
  auVar13[7] = uVar43;
  auVar13[8] = uVar44;
  auVar13[9] = uVar45;
  auVar13[10] = uVar46;
  auVar13[0xb] = uVar47;
  auVar13[0xc] = uVar48;
  auVar13[0xd] = uVar49;
  auVar13[0xe] = uVar50;
  auVar13[0xf] = uVar51;
  uVar67 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
  auVar14[4] = uVar40;
  auVar14._0_4_ = fVar19;
  auVar14[5] = uVar41;
  auVar14[6] = uVar42;
  auVar14[7] = uVar43;
  auVar14[8] = uVar44;
  auVar14[9] = uVar45;
  auVar14[10] = uVar46;
  auVar14[0xb] = uVar47;
  auVar14[0xc] = uVar48;
  auVar14[0xd] = uVar49;
  auVar14[0xe] = uVar50;
  auVar14[0xf] = uVar51;
  uVar69 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5120);
  auVar15[4] = uVar40;
  auVar15._0_4_ = fVar19;
  auVar15[5] = uVar41;
  auVar15[6] = uVar42;
  auVar15[7] = uVar43;
  auVar15[8] = uVar44;
  auVar15[9] = uVar45;
  auVar15[10] = uVar46;
  auVar15[0xb] = uVar47;
  auVar15[0xc] = uVar48;
  auVar15[0xd] = uVar49;
  auVar15[0xe] = uVar50;
  auVar15[0xf] = uVar51;
  uVar71 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
  auVar16[4] = uVar40;
  auVar16._0_4_ = fVar19;
  auVar16[5] = uVar41;
  auVar16[6] = uVar42;
  auVar16[7] = uVar43;
  auVar16[8] = uVar44;
  auVar16[9] = uVar45;
  auVar16[10] = uVar46;
  auVar16[0xb] = uVar47;
  auVar16[0xc] = uVar48;
  auVar16[0xd] = uVar49;
  auVar16[0xe] = uVar50;
  auVar16[0xf] = uVar51;
  uVar70 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  fVar59 = (float)((ulong)uVar60 >> 0x20);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  auVar17[4] = uVar40;
  auVar17._0_4_ = fVar19;
  auVar17[5] = uVar41;
  auVar17[6] = uVar42;
  auVar17[7] = uVar43;
  auVar17[8] = uVar44;
  auVar17[9] = uVar45;
  auVar17[10] = uVar46;
  auVar17[0xb] = uVar47;
  auVar17[0xc] = uVar48;
  auVar17[0xd] = uVar49;
  auVar17[0xe] = uVar50;
  auVar17[0xf] = uVar51;
  uVar68 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar40;
  auVar18._0_4_ = fVar19;
  auVar18[5] = uVar41;
  auVar18[6] = uVar42;
  auVar18[7] = uVar43;
  auVar18[8] = SUB41(fVar19,0);
  auVar18[9] = (char)((uint)fVar19 >> 8);
  auVar18[10] = (char)((uint)fVar19 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar19 >> 0x18);
  auVar18[0xc] = uVar40;
  auVar18[0xd] = uVar41;
  auVar18[0xe] = uVar42;
  auVar18[0xf] = uVar43;
  uVar20 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar63 = (float)((ulong)uVar61 >> 0x20);
  fVar62 = (float)_DAT_01d4ae90;
  fVar64 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar65 = (float)_UNK_01d4ae98;
  fVar66 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar10._12_4_ = fVar54;
  auVar10._0_12_ = *pauVar37;
  uVar28 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  fVar57 = (float)((ulong)uVar28 >> 0x20);
  auVar11._12_4_ = fVar54;
  auVar11._0_12_ = *pauVar37;
  uVar21 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  fVar19 = (fVar19 * (float)uVar8 + fVar62 * fVar55 * (float)uVar67 +
           fVar62 * (float)uVar61 * (float)uVar68) - (float)uVar60 * (float)uVar70;
  fVar22 = (fVar22 * fVar9 + fVar64 * fVar56 * (float)((ulong)uVar67 >> 0x20) +
           fVar64 * fVar63 * (float)((ulong)uVar68 >> 0x20)) -
           fVar59 * (float)((ulong)uVar70 >> 0x20);
  uVar40 = SUB41(fVar22,0);
  uVar41 = (undefined1)((uint)fVar22 >> 8);
  uVar42 = (undefined1)((uint)fVar22 >> 0x10);
  uVar43 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (fVar23 * (float)uVar8 + fVar65 * (float)uVar60 * (float)uVar69 +
           fVar65 * fVar55 * (float)uVar20) - (float)uVar61 * (float)uVar71;
  uVar44 = SUB41(fVar23,0);
  uVar45 = (undefined1)((uint)fVar23 >> 8);
  uVar46 = (undefined1)((uint)fVar23 >> 0x10);
  uVar47 = (undefined1)((uint)fVar23 >> 0x18);
  fVar9 = (fVar24 * fVar9 + fVar66 * fVar59 * (float)((ulong)uVar69 >> 0x20) +
          fVar66 * fVar56 * (float)((ulong)uVar20 >> 0x20)) -
          fVar63 * (float)((ulong)uVar71 >> 0x20);
  uVar48 = SUB41(fVar9,0);
  uVar49 = (undefined1)((uint)fVar9 >> 8);
  uVar50 = (undefined1)((uint)fVar9 >> 0x10);
  uVar51 = (undefined1)((uint)fVar9 >> 0x18);
  auVar2[4] = uVar40;
  auVar2._0_4_ = fVar19;
  auVar2[5] = uVar41;
  auVar2[6] = uVar42;
  auVar2[7] = uVar43;
  auVar2[8] = uVar44;
  auVar2[9] = uVar45;
  auVar2[10] = uVar46;
  auVar2[0xb] = uVar47;
  auVar2[0xc] = uVar48;
  auVar2[0xd] = uVar49;
  auVar2[0xe] = uVar50;
  auVar2[0xf] = uVar51;
  uVar61 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  auVar3[4] = uVar40;
  auVar3._0_4_ = fVar19;
  auVar3[5] = uVar41;
  auVar3[6] = uVar42;
  auVar3[7] = uVar43;
  auVar3[8] = uVar44;
  auVar3[9] = uVar45;
  auVar3[10] = uVar46;
  auVar3[0xb] = uVar47;
  auVar3[0xc] = uVar48;
  auVar3[0xd] = uVar49;
  auVar3[0xe] = uVar50;
  auVar3[0xf] = uVar51;
  uVar69 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
  fVar24 = (float)((ulong)uVar21 >> 0x20);
  auVar12._12_4_ = fVar54;
  auVar12._0_12_ = *pauVar37;
  uVar68 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  fVar55 = (float)((ulong)uVar68 >> 0x20);
  auVar4[4] = uVar40;
  auVar4._0_4_ = fVar19;
  auVar4[5] = uVar41;
  auVar4[6] = uVar42;
  auVar4[7] = uVar43;
  auVar4[8] = uVar44;
  auVar4[9] = uVar45;
  auVar4[10] = uVar46;
  auVar4[0xb] = uVar47;
  auVar4[0xc] = uVar48;
  auVar4[0xd] = uVar49;
  auVar4[0xe] = uVar50;
  auVar4[0xf] = uVar51;
  uVar20 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar40;
  auVar5._0_4_ = fVar19;
  auVar5[5] = uVar41;
  auVar5[6] = uVar42;
  auVar5[7] = uVar43;
  auVar5[8] = uVar44;
  auVar5[9] = uVar45;
  auVar5[10] = uVar46;
  auVar5[0xb] = uVar47;
  auVar5[0xc] = uVar48;
  auVar5[0xd] = uVar49;
  auVar5[0xe] = uVar50;
  auVar5[0xf] = uVar51;
  uVar60 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[4] = uVar40;
  auVar6._0_4_ = fVar19;
  auVar6[5] = uVar41;
  auVar6[6] = uVar42;
  auVar6[7] = uVar43;
  auVar6[8] = uVar44;
  auVar6[9] = uVar45;
  auVar6[10] = uVar46;
  auVar6[0xb] = uVar47;
  auVar6[0xc] = uVar48;
  auVar6[0xd] = uVar49;
  auVar6[0xe] = uVar50;
  auVar6[0xf] = uVar51;
  uVar67 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  auVar7[4] = uVar40;
  auVar7._0_4_ = fVar19;
  auVar7[5] = uVar41;
  auVar7[6] = uVar42;
  auVar7[7] = uVar43;
  auVar7[8] = SUB41(fVar19,0);
  auVar7[9] = (char)((uint)fVar19 >> 8);
  auVar7[10] = (char)((uint)fVar19 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar19 >> 0x18);
  auVar7[0xc] = uVar40;
  auVar7[0xd] = uVar41;
  auVar7[0xe] = uVar42;
  auVar7[0xf] = uVar43;
  uVar8 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  uVar33 = (ulong)DAT_01d4ab58 >> 0x20;
  uVar34 = (ulong)DAT_01d4ab58 >> 0x28;
  uVar35 = (ulong)DAT_01d4ab58 >> 0x30;
  uVar36 = (ulong)DAT_01d4ab58 >> 0x38;
  uVar29 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar30 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar31 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar32 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar54 = ((float)uVar21 * fVar19 + fVar62 * fVar52 * (float)uVar61 +
           fVar62 * (float)uVar68 * (float)uVar20) - (float)uVar28 * (float)uVar60;
  fVar22 = (fVar24 * fVar22 + fVar64 * fVar53 * (float)((ulong)uVar61 >> 0x20) +
           fVar64 * fVar55 * (float)((ulong)uVar20 >> 0x20)) -
           fVar57 * (float)((ulong)uVar60 >> 0x20);
  fVar19 = ((float)uVar21 * fVar23 + fVar65 * (float)uVar28 * (float)uVar69 +
           fVar65 * fVar52 * (float)uVar8) - (float)uVar68 * (float)uVar67;
  fVar23 = (fVar24 * fVar9 + fVar66 * fVar57 * (float)((ulong)uVar69 >> 0x20) +
           fVar66 * fVar53 * (float)((ulong)uVar8 >> 0x20)) -
           fVar55 * (float)((ulong)uVar67 >> 0x20);
  fVar19 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 8),
                                             SUB41(fVar19,0) & (byte)DAT_01d4ab58)));
  fVar9 = (float)CONCAT13((byte)((uint)fVar54 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                          CONCAT12((byte)((uint)fVar54 >> 0x10) &
                                   (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                   CONCAT11((byte)((uint)fVar54 >> 8) &
                                            (byte)((ulong)DAT_01d4ab50 >> 8),
                                            SUB41(fVar54,0) & (byte)DAT_01d4ab50)));
  puVar38 = (undefined8 *)FUN_012dcaa0(param_1);
  fVar22 = (float)((ulong)*puVar38 >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar22 >> 0x18) & (byte)uVar32,
                            CONCAT16((byte)((uint)fVar22 >> 0x10) & (byte)uVar31,
                                     CONCAT15((byte)((uint)fVar22 >> 8) & (byte)uVar30,
                                              CONCAT14(SUB41(fVar22,0) & (byte)uVar29,fVar9)))) >>
                  0x20);
  auVar39[4] = SUB41(fVar22,0);
  auVar39[5] = (undefined1)((uint)fVar22 >> 8);
  auVar39[6] = (undefined1)((uint)fVar22 >> 0x10);
  auVar39[7] = (undefined1)((uint)fVar22 >> 0x18);
  fVar22 = (float)puVar38[1] + fVar19;
  auVar39[8] = SUB41(fVar22,0);
  auVar39[9] = (undefined1)((uint)fVar22 >> 8);
  auVar39[10] = (undefined1)((uint)fVar22 >> 0x10);
  auVar39[0xb] = (undefined1)((uint)fVar22 >> 0x18);
  fVar19 = (float)((ulong)puVar38[1] >> 0x20) +
           (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & (byte)uVar36,
                            CONCAT16((byte)((uint)fVar23 >> 0x10) & (byte)uVar35,
                                     CONCAT15((byte)((uint)fVar23 >> 8) & (byte)uVar34,
                                              CONCAT14(SUB41(fVar23,0) & (byte)uVar33,fVar19)))) >>
                  0x20);
  auVar39[0xc] = SUB41(fVar19,0);
  auVar39[0xd] = (undefined1)((uint)fVar19 >> 8);
  auVar39[0xe] = (undefined1)((uint)fVar19 >> 0x10);
  auVar39[0xf] = (undefined1)((uint)fVar19 >> 0x18);
  auVar39._0_4_ = (float)*puVar38 + fVar9;
  return auVar39;
}


