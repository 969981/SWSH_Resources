/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00699390; name: FUN_00699390
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00699390(undefined4 *param_1,long *param_2)

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
  undefined4 *puVar30;
  undefined1 uVar31;
  undefined1 uVar32;
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
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined8 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 local_30;
  undefined8 uStack_28;
  
  (**(code **)(*param_2 + 0x38))((char)*param_1,param_2);
  (**(code **)(*param_2 + 0x48))((char)param_1[1],param_2);
  (**(code **)(*param_2 + 0x58))((char)param_1[2],param_2);
  (**(code **)(*param_2 + 0xa8))(param_2,param_1 + 4);
  (**(code **)(*param_2 + 0xb0))(param_2,param_1 + 8);
  uVar29 = (**(code **)(*param_2 + 0xb8))(param_2);
  if ((uVar29 & 1) != 0) {
    (**(code **)(*param_2 + 0xc0))(param_2,param_1 + 0xc);
  }
  uVar29 = (**(code **)(*param_2 + 0xd0))(param_2);
  if ((uVar29 & 1) != 0) {
    (**(code **)(*param_2 + 0xd8))((char)param_1[0x10],param_2);
  }
  uVar29 = (**(code **)(*param_2 + 0x110))(param_2);
  if ((uVar29 & 1) != 0) {
    (**(code **)(*param_2 + 0xf8))(param_2,param_1 + 0x14);
  }
  pauVar1 = (undefined1 (*) [12])(param_1 + 4);
  fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar43 = (float)*(undefined8 *)*pauVar1;
  fVar44 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  fVar19 = fVar43 * (float)_DAT_01d4ae80;
  fVar22 = fVar44 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar31 = SUB41(fVar22,0);
  uVar32 = (undefined1)((uint)fVar22 >> 8);
  uVar33 = (undefined1)((uint)fVar22 >> 0x10);
  uVar34 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (float)*(undefined8 *)(param_1 + 6) * (float)_UNK_01d4ae88;
  uVar35 = SUB41(fVar23,0);
  uVar36 = (undefined1)((uint)fVar23 >> 8);
  uVar37 = (undefined1)((uint)fVar23 >> 0x10);
  uVar38 = (undefined1)((uint)fVar23 >> 0x18);
  fVar24 = fVar45 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar39 = SUB41(fVar24,0);
  uVar40 = (undefined1)((uint)fVar24 >> 8);
  uVar41 = (undefined1)((uint)fVar24 >> 0x10);
  uVar42 = (undefined1)((uint)fVar24 >> 0x18);
  uVar49 = (undefined4)_UNK_01d49df8;
  uVar50 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
  auVar25._8_4_ = uVar49;
  auVar25._0_8_ = _DAT_01d49df0;
  auVar25._12_4_ = uVar50;
  uVar8 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
  auVar26._8_4_ = uVar49;
  auVar26._0_8_ = _DAT_01d49df0;
  auVar26._12_4_ = uVar50;
  uVar51 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50f8);
  auVar27._8_4_ = uVar49;
  auVar27._0_8_ = _DAT_01d49df0;
  auVar27._12_4_ = uVar50;
  uVar46 = a64_TBL(ZEXT816(0),auVar27,DAT_01cd5418);
  fVar47 = (float)((ulong)uVar46 >> 0x20);
  auVar13[4] = uVar31;
  auVar13._0_4_ = fVar19;
  auVar13[5] = uVar32;
  auVar13[6] = uVar33;
  auVar13[7] = uVar34;
  auVar13[8] = uVar35;
  auVar13[9] = uVar36;
  auVar13[10] = uVar37;
  auVar13[0xb] = uVar38;
  auVar13[0xc] = uVar39;
  auVar13[0xd] = uVar40;
  auVar13[0xe] = uVar41;
  auVar13[0xf] = uVar42;
  uVar59 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  auVar14[4] = uVar31;
  auVar14._0_4_ = fVar19;
  auVar14[5] = uVar32;
  auVar14[6] = uVar33;
  auVar14[7] = uVar34;
  auVar14[8] = uVar35;
  auVar14[9] = uVar36;
  auVar14[10] = uVar37;
  auVar14[0xb] = uVar38;
  auVar14[0xc] = uVar39;
  auVar14[0xd] = uVar40;
  auVar14[0xe] = uVar41;
  auVar14[0xf] = uVar42;
  uVar61 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5270);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  auVar15[4] = uVar31;
  auVar15._0_4_ = fVar19;
  auVar15[5] = uVar32;
  auVar15[6] = uVar33;
  auVar15[7] = uVar34;
  auVar15[8] = uVar35;
  auVar15[9] = uVar36;
  auVar15[10] = uVar37;
  auVar15[0xb] = uVar38;
  auVar15[0xc] = uVar39;
  auVar15[0xd] = uVar40;
  auVar15[0xe] = uVar41;
  auVar15[0xf] = uVar42;
  uVar57 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar16[4] = uVar31;
  auVar16._0_4_ = fVar19;
  auVar16[5] = uVar32;
  auVar16[6] = uVar33;
  auVar16[7] = uVar34;
  auVar16[8] = uVar35;
  auVar16[9] = uVar36;
  auVar16[10] = uVar37;
  auVar16[0xb] = uVar38;
  auVar16[0xc] = uVar39;
  auVar16[0xd] = uVar40;
  auVar16[0xe] = uVar41;
  auVar16[0xf] = uVar42;
  uVar60 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
  auVar10._12_4_ = fVar45;
  auVar10._0_12_ = *pauVar1;
  uVar28 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
  fVar48 = (float)((ulong)uVar28 >> 0x20);
  fVar52 = (float)((ulong)uVar51 >> 0x20);
  auVar17[4] = uVar31;
  auVar17._0_4_ = fVar19;
  auVar17[5] = uVar32;
  auVar17[6] = uVar33;
  auVar17[7] = uVar34;
  auVar17[8] = uVar35;
  auVar17[9] = uVar36;
  auVar17[10] = uVar37;
  auVar17[0xb] = uVar38;
  auVar17[0xc] = uVar39;
  auVar17[0xd] = uVar40;
  auVar17[0xe] = uVar41;
  auVar17[0xf] = uVar42;
  uVar58 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar31;
  auVar18._0_4_ = fVar19;
  auVar18[5] = uVar32;
  auVar18[6] = uVar33;
  auVar18[7] = uVar34;
  auVar18[8] = SUB41(fVar19,0);
  auVar18[9] = (char)((uint)fVar19 >> 8);
  auVar18[10] = (char)((uint)fVar19 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar19 >> 0x18);
  auVar18[0xc] = uVar31;
  auVar18[0xd] = uVar32;
  auVar18[0xe] = uVar33;
  auVar18[0xf] = uVar34;
  uVar20 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar53 = (float)_DAT_01d4ae90;
  fVar54 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar55 = (float)_UNK_01d4ae98;
  fVar56 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar11._12_4_ = fVar45;
  auVar11._0_12_ = *pauVar1;
  uVar21 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  fVar19 = (fVar19 * (float)uVar8 + fVar53 * (float)uVar57 * 0.0 +
           fVar53 * (float)uVar46 * (float)uVar58) - (float)uVar51 * (float)uVar60;
  fVar22 = (fVar22 * fVar9 + fVar54 * (float)((ulong)uVar57 >> 0x20) * 0.0 +
           fVar54 * fVar47 * (float)((ulong)uVar58 >> 0x20)) -
           fVar52 * (float)((ulong)uVar60 >> 0x20);
  uVar31 = SUB41(fVar22,0);
  uVar32 = (undefined1)((uint)fVar22 >> 8);
  uVar33 = (undefined1)((uint)fVar22 >> 0x10);
  uVar34 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (fVar23 * (float)uVar8 + fVar55 * (float)uVar51 * (float)uVar59 +
           fVar55 * (float)uVar20 * 0.0) - (float)uVar46 * (float)uVar61;
  uVar35 = SUB41(fVar23,0);
  uVar36 = (undefined1)((uint)fVar23 >> 8);
  uVar37 = (undefined1)((uint)fVar23 >> 0x10);
  uVar38 = (undefined1)((uint)fVar23 >> 0x18);
  fVar9 = (fVar24 * fVar9 + fVar56 * fVar52 * (float)((ulong)uVar59 >> 0x20) +
          fVar56 * (float)((ulong)uVar20 >> 0x20) * 0.0) - fVar47 * (float)((ulong)uVar61 >> 0x20);
  uVar39 = SUB41(fVar9,0);
  uVar40 = (undefined1)((uint)fVar9 >> 8);
  uVar41 = (undefined1)((uint)fVar9 >> 0x10);
  uVar42 = (undefined1)((uint)fVar9 >> 0x18);
  auVar2[4] = uVar31;
  auVar2._0_4_ = fVar19;
  auVar2[5] = uVar32;
  auVar2[6] = uVar33;
  auVar2[7] = uVar34;
  auVar2[8] = uVar35;
  auVar2[9] = uVar36;
  auVar2[10] = uVar37;
  auVar2[0xb] = uVar38;
  auVar2[0xc] = uVar39;
  auVar2[0xd] = uVar40;
  auVar2[0xe] = uVar41;
  auVar2[0xf] = uVar42;
  uVar51 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
  auVar3[4] = uVar31;
  auVar3._0_4_ = fVar19;
  auVar3[5] = uVar32;
  auVar3[6] = uVar33;
  auVar3[7] = uVar34;
  auVar3[8] = uVar35;
  auVar3[9] = uVar36;
  auVar3[10] = uVar37;
  auVar3[0xb] = uVar38;
  auVar3[0xc] = uVar39;
  auVar3[0xd] = uVar40;
  auVar3[0xe] = uVar41;
  auVar3[0xf] = uVar42;
  uVar59 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
  fVar24 = (float)((ulong)uVar21 >> 0x20);
  auVar12._12_4_ = fVar45;
  auVar12._0_12_ = *pauVar1;
  uVar58 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
  fVar45 = (float)((ulong)uVar58 >> 0x20);
  auVar4[4] = uVar31;
  auVar4._0_4_ = fVar19;
  auVar4[5] = uVar32;
  auVar4[6] = uVar33;
  auVar4[7] = uVar34;
  auVar4[8] = uVar35;
  auVar4[9] = uVar36;
  auVar4[10] = uVar37;
  auVar4[0xb] = uVar38;
  auVar4[0xc] = uVar39;
  auVar4[0xd] = uVar40;
  auVar4[0xe] = uVar41;
  auVar4[0xf] = uVar42;
  uVar20 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
  auVar5[4] = uVar31;
  auVar5._0_4_ = fVar19;
  auVar5[5] = uVar32;
  auVar5[6] = uVar33;
  auVar5[7] = uVar34;
  auVar5[8] = uVar35;
  auVar5[9] = uVar36;
  auVar5[10] = uVar37;
  auVar5[0xb] = uVar38;
  auVar5[0xc] = uVar39;
  auVar5[0xd] = uVar40;
  auVar5[0xe] = uVar41;
  auVar5[0xf] = uVar42;
  uVar46 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  auVar6[4] = uVar31;
  auVar6._0_4_ = fVar19;
  auVar6[5] = uVar32;
  auVar6[6] = uVar33;
  auVar6[7] = uVar34;
  auVar6[8] = uVar35;
  auVar6[9] = uVar36;
  auVar6[10] = uVar37;
  auVar6[0xb] = uVar38;
  auVar6[0xc] = uVar39;
  auVar6[0xd] = uVar40;
  auVar6[0xe] = uVar41;
  auVar6[0xf] = uVar42;
  uVar57 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
  auVar7[4] = uVar31;
  auVar7._0_4_ = fVar19;
  auVar7[5] = uVar32;
  auVar7[6] = uVar33;
  auVar7[7] = uVar34;
  auVar7[8] = SUB41(fVar19,0);
  auVar7[9] = (char)((uint)fVar19 >> 8);
  auVar7[10] = (char)((uint)fVar19 >> 0x10);
  auVar7[0xb] = (char)((uint)fVar19 >> 0x18);
  auVar7[0xc] = uVar31;
  auVar7[0xd] = uVar32;
  auVar7[0xe] = uVar33;
  auVar7[0xf] = uVar34;
  uVar8 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
  fVar19 = ((float)uVar21 * fVar19 + fVar53 * fVar43 * (float)uVar51 +
           fVar53 * (float)uVar58 * (float)uVar20) - (float)uVar28 * (float)uVar46;
  fVar22 = (fVar24 * fVar22 + fVar54 * fVar44 * (float)((ulong)uVar51 >> 0x20) +
           fVar54 * fVar45 * (float)((ulong)uVar20 >> 0x20)) -
           fVar48 * (float)((ulong)uVar46 >> 0x20);
  fVar23 = ((float)uVar21 * fVar23 + fVar55 * (float)uVar28 * (float)uVar59 +
           fVar55 * fVar43 * (float)uVar8) - (float)uVar58 * (float)uVar57;
  fVar9 = (fVar24 * fVar9 + fVar56 * fVar48 * (float)((ulong)uVar59 >> 0x20) +
          fVar56 * fVar44 * (float)((ulong)uVar8 >> 0x20)) - fVar45 * (float)((ulong)uVar57 >> 0x20)
  ;
  uStack_28 = CONCAT17((byte)((uint)fVar9 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                       CONCAT16((byte)((uint)fVar9 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                CONCAT15((byte)((uint)fVar9 >> 8) &
                                         (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                         CONCAT14(SUB41(fVar9,0) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                  CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                                                    (byte)((ulong)DAT_01d4ab58 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar23 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar23,0) & (byte)DAT_01d4ab58)))))));
  local_30 = CONCAT17((byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                      CONCAT16((byte)((uint)fVar22 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                               CONCAT15((byte)((uint)fVar22 >> 8) &
                                        (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                        CONCAT14(SUB41(fVar22,0) &
                                                 (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                 CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                          (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                   (byte)((ulong)DAT_01d4ab50 >>
                                                                         0x10),
                                                                   CONCAT11((byte)((uint)fVar19 >> 8
                                                                                  ) & (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar19,0) & (byte)DAT_01d4ab50)))))));
  (**(code **)(*param_2 + 0xe8))(param_2,&local_30);
  puVar30 = (undefined4 *)(**(code **)(*param_2 + 0x70))(param_2);
  local_30 = CONCAT44(param_1[0x18],*puVar30);
  uStack_28 = *(undefined8 *)(param_1 + 0x19);
  (**(code **)(*param_2 + 0x68))(param_2,&local_30);
  return;
}


