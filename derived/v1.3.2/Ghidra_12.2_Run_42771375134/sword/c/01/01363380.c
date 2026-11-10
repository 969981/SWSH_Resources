/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01363380; name: FUN_01363380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01363380(long param_1)

{
  unkbyte9 *pVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long lVar30;
  undefined1 uVar31;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 auVar32 [16];
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  
  uVar31 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  if ((*(char *)(param_1 + 0xe0) != '\0') && (lVar30 = *(long *)(param_1 + 0x80), lVar30 != 0)) {
    pVar1 = (unkbyte9 *)(lVar30 + 0xa0);
    uVar13 = *(undefined8 *)(lVar30 + 0xa8);
    uVar31 = (undefined1)((ulong)uVar13 >> 8);
    uVar33 = (undefined1)((ulong)uVar13 >> 0x10);
    uVar34 = (undefined1)((ulong)uVar13 >> 0x18);
    uVar35 = (undefined1)((ulong)uVar13 >> 0x20);
    uVar36 = (undefined1)((ulong)uVar13 >> 0x28);
    uVar37 = (undefined1)((ulong)uVar13 >> 0x30);
    uVar38 = (undefined1)((ulong)uVar13 >> 0x38);
    uVar54 = (undefined4)_UNK_01d4a348;
    uVar55 = (undefined4)((ulong)_UNK_01d4a348 >> 0x20);
    auVar19._8_4_ = uVar54;
    auVar19._0_8_ = _DAT_01d4a340;
    auVar19._12_4_ = uVar55;
    uVar51 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
    fVar59 = (float)((ulong)uVar51 >> 0x20);
    fVar5 = (float)*(undefined8 *)pVar1;
    fVar12 = fVar5 * (float)_DAT_01d4ae80;
    fVar18 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar15 = fVar18 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar39 = SUB41(fVar15,0);
    uVar40 = (undefined1)((uint)fVar15 >> 8);
    uVar41 = (undefined1)((uint)fVar15 >> 0x10);
    uVar42 = (undefined1)((uint)fVar15 >> 0x18);
    fVar16 = (float)uVar13 * (float)_UNK_01d4ae88;
    uVar43 = SUB41(fVar16,0);
    uVar44 = (undefined1)((uint)fVar16 >> 8);
    uVar45 = (undefined1)((uint)fVar16 >> 0x10);
    uVar46 = (undefined1)((uint)fVar16 >> 0x18);
    fVar17 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar47 = SUB41(fVar17,0);
    uVar48 = (undefined1)((uint)fVar17 >> 8);
    uVar49 = (undefined1)((uint)fVar17 >> 0x10);
    uVar50 = (undefined1)((uint)fVar17 >> 0x18);
    auVar6[4] = uVar39;
    auVar6._0_4_ = fVar12;
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
    uVar66 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
    auVar20._8_4_ = uVar54;
    auVar20._0_8_ = _DAT_01d4a340;
    auVar20._12_4_ = uVar55;
    uVar60 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
    auVar21._8_4_ = uVar54;
    auVar21._0_8_ = _DAT_01d4a340;
    auVar21._12_4_ = uVar55;
    uVar22 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
    fVar52 = (float)((ulong)uVar22 >> 0x20);
    auVar7[4] = uVar39;
    auVar7._0_4_ = fVar12;
    auVar7[5] = uVar40;
    auVar7[6] = uVar41;
    auVar7[7] = uVar42;
    auVar7[8] = uVar43;
    auVar7[9] = uVar44;
    auVar7[10] = uVar45;
    auVar7[0xb] = uVar46;
    auVar7[0xc] = uVar47;
    auVar7[0xd] = uVar48;
    auVar7[0xe] = uVar49;
    auVar7[0xf] = uVar50;
    uVar68 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5120);
    auVar8[4] = uVar39;
    auVar8._0_4_ = fVar12;
    auVar8[5] = uVar40;
    auVar8[6] = uVar41;
    auVar8[7] = uVar42;
    auVar8[8] = uVar43;
    auVar8[9] = uVar44;
    auVar8[10] = uVar45;
    auVar8[0xb] = uVar46;
    auVar8[0xc] = uVar47;
    auVar8[0xd] = uVar48;
    auVar8[0xe] = uVar49;
    auVar8[0xf] = uVar50;
    uVar69 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
    auVar9[4] = uVar39;
    auVar9._0_4_ = fVar12;
    auVar9[5] = uVar40;
    auVar9[6] = uVar41;
    auVar9[7] = uVar42;
    auVar9[8] = uVar43;
    auVar9[9] = uVar44;
    auVar9[10] = uVar45;
    auVar9[0xb] = uVar46;
    auVar9[0xc] = uVar47;
    auVar9[0xd] = uVar48;
    auVar9[0xe] = uVar49;
    auVar9[0xf] = uVar50;
    uVar70 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5270);
    fVar61 = (float)((ulong)uVar60 >> 0x20);
    auVar10[4] = uVar39;
    auVar10._0_4_ = fVar12;
    auVar10[5] = uVar40;
    auVar10[6] = uVar41;
    auVar10[7] = uVar42;
    auVar10[8] = uVar43;
    auVar10[9] = uVar44;
    auVar10[10] = uVar45;
    auVar10[0xb] = uVar46;
    auVar10[0xc] = uVar47;
    auVar10[0xd] = uVar48;
    auVar10[0xe] = uVar49;
    auVar10[0xf] = uVar50;
    uVar67 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    auVar11[4] = uVar39;
    auVar11._0_4_ = fVar12;
    auVar11[5] = uVar40;
    auVar11[6] = uVar41;
    auVar11[7] = uVar42;
    auVar11[8] = SUB41(fVar12,0);
    auVar11[9] = (char)((uint)fVar12 >> 8);
    auVar11[10] = (char)((uint)fVar12 >> 0x10);
    auVar11[0xb] = (char)((uint)fVar12 >> 0x18);
    auVar11[0xc] = uVar39;
    auVar11[0xd] = uVar40;
    auVar11[0xe] = uVar41;
    auVar11[0xf] = uVar42;
    uVar13 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50b0);
    auVar2[9] = uVar31;
    auVar2._0_9_ = *pVar1;
    auVar2[10] = uVar33;
    auVar2[0xb] = uVar34;
    auVar2[0xc] = uVar35;
    auVar2[0xd] = uVar36;
    auVar2[0xe] = uVar37;
    auVar2[0xf] = uVar38;
    uVar23 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd50f8);
    fVar53 = (float)((ulong)uVar23 >> 0x20);
    fVar62 = (float)_DAT_01d4ae90;
    fVar63 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar64 = (float)_UNK_01d4ae98;
    fVar65 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar3[9] = uVar31;
    auVar3._0_9_ = *pVar1;
    auVar3[10] = uVar33;
    auVar3[0xb] = uVar34;
    auVar3[0xc] = uVar35;
    auVar3[0xd] = uVar36;
    auVar3[0xe] = uVar37;
    auVar3[0xf] = uVar38;
    uVar14 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
    fVar56 = (fVar12 * (float)uVar51 + fVar62 * (float)uVar66 * 0.0 +
             fVar62 * (float)uVar22 * (float)uVar67) - (float)uVar60 * (float)uVar69;
    fVar57 = (fVar15 * fVar59 + fVar63 * (float)((ulong)uVar66 >> 0x20) * 0.0 +
             fVar63 * fVar52 * (float)((ulong)uVar67 >> 0x20)) -
             fVar61 * (float)((ulong)uVar69 >> 0x20);
    fVar58 = (fVar16 * (float)uVar51 + fVar64 * (float)uVar60 * (float)uVar68 +
             fVar64 * (float)uVar13 * 0.0) - (float)uVar22 * (float)uVar70;
    fVar59 = (fVar17 * fVar59 + fVar65 * fVar61 * (float)((ulong)uVar68 >> 0x20) +
             fVar65 * (float)((ulong)uVar13 >> 0x20) * 0.0) -
             fVar52 * (float)((ulong)uVar70 >> 0x20);
    auVar24._4_4_ = fVar57;
    auVar24._0_4_ = fVar56;
    auVar24._8_4_ = fVar58;
    auVar24._12_4_ = fVar59;
    uVar51 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
    auVar25._4_4_ = fVar57;
    auVar25._0_4_ = fVar56;
    auVar25._8_4_ = fVar58;
    auVar25._12_4_ = fVar59;
    uVar67 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5120);
    auVar26._4_4_ = fVar57;
    auVar26._0_4_ = fVar56;
    auVar26._8_4_ = fVar58;
    auVar26._12_4_ = fVar59;
    uVar68 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5270);
    fVar12 = (float)((ulong)uVar14 >> 0x20);
    auVar4[9] = uVar31;
    auVar4._0_9_ = *pVar1;
    auVar4[10] = uVar33;
    auVar4[0xb] = uVar34;
    auVar4[0xc] = uVar35;
    auVar4[0xd] = uVar36;
    auVar4[0xe] = uVar37;
    auVar4[0xf] = uVar38;
    uVar66 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    fVar52 = (float)((ulong)uVar66 >> 0x20);
    auVar27._4_4_ = fVar57;
    auVar27._0_4_ = fVar56;
    auVar27._8_4_ = fVar58;
    auVar27._12_4_ = fVar59;
    uVar13 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd50f8);
    auVar28._4_4_ = fVar57;
    auVar28._0_4_ = fVar56;
    auVar28._8_4_ = fVar58;
    auVar28._12_4_ = fVar59;
    uVar60 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd5418);
    auVar29._4_4_ = fVar57;
    auVar29._0_4_ = fVar56;
    auVar29._8_4_ = fVar56;
    auVar29._12_4_ = fVar57;
    uVar22 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50b0);
    fVar15 = ((float)uVar14 * fVar56 + fVar62 * fVar5 * (float)uVar51 +
             fVar62 * (float)uVar66 * (float)uVar13) - (float)uVar23 * (float)uVar60;
    fVar16 = (fVar12 * fVar57 + fVar63 * fVar18 * (float)((ulong)uVar51 >> 0x20) +
             fVar63 * fVar52 * (float)((ulong)uVar13 >> 0x20)) -
             fVar53 * (float)((ulong)uVar60 >> 0x20);
    fVar17 = ((float)uVar14 * fVar58 + fVar64 * (float)uVar23 * (float)uVar67 +
             fVar64 * fVar5 * (float)uVar22) - (float)uVar66 * (float)uVar68;
    fVar18 = (fVar12 * fVar59 + fVar65 * fVar53 * (float)((ulong)uVar67 >> 0x20) +
             fVar65 * fVar18 * (float)((ulong)uVar22 >> 0x20)) -
             fVar52 * (float)((ulong)uVar68 >> 0x20);
    fVar5 = (float)*(undefined8 *)(lVar30 + 0xb0) +
            (float)CONCAT13((byte)((uint)fVar15 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                            CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                     CONCAT11((byte)((uint)fVar15 >> 8) &
                                              (byte)((ulong)DAT_01d4ab50 >> 8),
                                              SUB41(fVar15,0) & (byte)DAT_01d4ab50)));
    uVar31 = SUB41(fVar5,0);
    uVar33 = (undefined1)((uint)fVar5 >> 8);
    uVar34 = (undefined1)((uint)fVar5 >> 0x10);
    uVar35 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar30 + 0xb0) >> 0x20) +
            (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                            CONCAT12((byte)((uint)fVar16 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                     CONCAT11((byte)((uint)fVar16 >> 8) &
                                              (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                              SUB41(fVar16,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20))
                                    ));
    uVar36 = SUB41(fVar5,0);
    uVar37 = (undefined1)((uint)fVar5 >> 8);
    uVar38 = (undefined1)((uint)fVar5 >> 0x10);
    uVar39 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)*(undefined8 *)(lVar30 + 0xb8) +
            (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                            CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                     CONCAT11((byte)((uint)fVar17 >> 8) &
                                              (byte)((ulong)DAT_01d4ab58 >> 8),
                                              SUB41(fVar17,0) & (byte)DAT_01d4ab58)));
    uVar40 = SUB41(fVar5,0);
    uVar41 = (undefined1)((uint)fVar5 >> 8);
    uVar42 = (undefined1)((uint)fVar5 >> 0x10);
    uVar43 = (undefined1)((uint)fVar5 >> 0x18);
    fVar5 = (float)((ulong)*(undefined8 *)(lVar30 + 0xb8) >> 0x20) +
            (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                            CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                     CONCAT11((byte)((uint)fVar18 >> 8) &
                                              (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                              SUB41(fVar18,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20))
                                    ));
    uVar44 = SUB41(fVar5,0);
    uVar45 = (undefined1)((uint)fVar5 >> 8);
    uVar46 = (undefined1)((uint)fVar5 >> 0x10);
    uVar47 = (undefined1)((uint)fVar5 >> 0x18);
  }
  auVar32[1] = uVar33;
  auVar32[0] = uVar31;
  auVar32[2] = uVar34;
  auVar32[3] = uVar35;
  auVar32[4] = uVar36;
  auVar32[5] = uVar37;
  auVar32[6] = uVar38;
  auVar32[7] = uVar39;
  auVar32[8] = uVar40;
  auVar32[9] = uVar41;
  auVar32[10] = uVar42;
  auVar32[0xb] = uVar43;
  auVar32[0xc] = uVar44;
  auVar32[0xd] = uVar45;
  auVar32[0xe] = uVar46;
  auVar32[0xf] = uVar47;
  return auVar32;
}


