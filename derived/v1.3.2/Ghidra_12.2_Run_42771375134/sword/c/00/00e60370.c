/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60370; name: FUN_00e60370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e60370(long param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined8 uVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  long *plVar34;
  undefined8 *puVar35;
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
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  float fVar59;
  undefined8 uVar60;
  undefined4 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 local_60;
  undefined8 uStack_58;
  
  fVar51 = (float)*(undefined8 *)(*param_2 + 8);
  fVar49 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0xb60) >> 0x20);
  bVar28 = false;
  if (((float)*(undefined8 *)(param_1 + 0xb60) == (float)*(undefined8 *)*param_2) &&
     (bVar28 = false, !NAN(fVar8) && !NAN(fVar49))) {
    bVar28 = fVar8 == fVar49;
  }
  bVar29 = false;
  if (bVar28) {
    bVar29 = false;
    fVar8 = (float)*(undefined8 *)(param_1 + 0xb68);
    if (!NAN(fVar8) && !NAN(fVar51)) {
      bVar29 = fVar8 == fVar51;
    }
  }
  if (!bVar29) {
    lVar33 = *(long *)(*(long *)(param_1 + 0x360) + 0x80);
    uVar61 = *(undefined4 *)(param_1 + 0x524);
    plVar34 = (long *)(lVar33 + 0x48);
    (**(code **)(*plVar34 + 0x10))(plVar34);
    puVar35 = *(undefined8 **)(lVar33 + 0x60);
    if (puVar35 != (undefined8 *)0x0) {
      plVar31 = (long *)(**(code **)*puVar35)(puVar35);
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar30 = __cxa_guard_acquire(PTR_DAT_02715290), iVar30 != 0)) {
        uVar32 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar32;
        __cxa_guard_release(PTR_DAT_02715290);
      }
      for (; plVar31 != (long *)0x0; plVar31 = (long *)*plVar31) {
        if (plVar31 == (long *)PTR_DAT_02715298) {
          puVar35 = puVar35 + -10;
          goto LAB_00e6042c;
        }
      }
      puVar35 = (undefined8 *)0x0;
    }
LAB_00e6042c:
    (**(code **)(*plVar34 + 0x18))(plVar34);
    pauVar1 = (undefined1 (*) [12])(param_1 + 0xa0);
    fVar52 = (float)((ulong)*(undefined8 *)(param_1 + 0xa8) >> 0x20);
    fVar48 = (float)*(undefined8 *)*pauVar1;
    fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    uVar58 = (undefined4)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
    fVar56 = (float)*(undefined8 *)*param_2;
    fVar57 = (float)((ulong)*(undefined8 *)*param_2 >> 0x20);
    auVar21._12_4_ = uVar58;
    auVar21._0_12_ = *param_2;
    uVar60 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    fVar49 = fVar48 * (float)_DAT_01d4ae80;
    fVar51 = fVar50 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar55 = SUB41(fVar51,0);
    uVar36 = (undefined1)((uint)fVar51 >> 8);
    uVar37 = (undefined1)((uint)fVar51 >> 0x10);
    uVar38 = (undefined1)((uint)fVar51 >> 0x18);
    fVar19 = (float)*(undefined8 *)(param_1 + 0xa8) * (float)_UNK_01d4ae88;
    uVar39 = SUB41(fVar19,0);
    uVar40 = (undefined1)((uint)fVar19 >> 8);
    uVar41 = (undefined1)((uint)fVar19 >> 0x10);
    uVar42 = (undefined1)((uint)fVar19 >> 0x18);
    fVar20 = fVar52 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar43 = SUB41(fVar20,0);
    uVar44 = (undefined1)((uint)fVar20 >> 8);
    uVar45 = (undefined1)((uint)fVar20 >> 0x10);
    uVar46 = (undefined1)((uint)fVar20 >> 0x18);
    auVar22._12_4_ = uVar58;
    auVar22._0_12_ = *param_2;
    uVar32 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd4f90);
    auVar23._12_4_ = uVar58;
    auVar23._0_12_ = *param_2;
    uVar62 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    auVar12[4] = uVar55;
    auVar12._0_4_ = fVar49;
    auVar12[5] = uVar36;
    auVar12[6] = uVar37;
    auVar12[7] = uVar38;
    auVar12[8] = uVar39;
    auVar12[9] = uVar40;
    auVar12[10] = uVar41;
    auVar12[0xb] = uVar42;
    auVar12[0xc] = uVar43;
    auVar12[0xd] = uVar44;
    auVar12[0xe] = uVar45;
    auVar12[0xf] = uVar46;
    uVar65 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
    auVar13[4] = uVar55;
    auVar13._0_4_ = fVar49;
    auVar13[5] = uVar36;
    auVar13[6] = uVar37;
    auVar13[7] = uVar38;
    auVar13[8] = uVar39;
    auVar13[9] = uVar40;
    auVar13[10] = uVar41;
    auVar13[0xb] = uVar42;
    auVar13[0xc] = uVar43;
    auVar13[0xd] = uVar44;
    auVar13[0xe] = uVar45;
    auVar13[0xf] = uVar46;
    uVar27 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd4f90);
    fVar59 = (float)((ulong)uVar60 >> 0x20);
    auVar14[4] = uVar55;
    auVar14._0_4_ = fVar49;
    auVar14[5] = uVar36;
    auVar14[6] = uVar37;
    auVar14[7] = uVar38;
    auVar14[8] = uVar39;
    auVar14[9] = uVar40;
    auVar14[10] = uVar41;
    auVar14[0xb] = uVar42;
    auVar14[0xc] = uVar43;
    auVar14[0xd] = uVar44;
    auVar14[0xe] = uVar45;
    auVar14[0xf] = uVar46;
    uVar66 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd50f8);
    fVar8 = (float)((ulong)uVar32 >> 0x20);
    auVar26._4_4_ =
         (int)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar55,fVar49)))) >> 0x20);
    auVar26._0_4_ = fVar49;
    auVar26._8_4_ = fVar49;
    auVar26._12_4_ =
         (int)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar55,fVar49)))) >> 0x20);
    uVar53 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
    fVar63 = (float)((ulong)uVar62 >> 0x20);
    auVar15[4] = uVar55;
    auVar15._0_4_ = fVar49;
    auVar15[5] = uVar36;
    auVar15[6] = uVar37;
    auVar15[7] = uVar38;
    auVar15[8] = uVar39;
    auVar15[9] = uVar40;
    auVar15[10] = uVar41;
    auVar15[0xb] = uVar42;
    auVar15[0xc] = uVar43;
    auVar15[0xd] = uVar44;
    auVar15[0xe] = uVar45;
    auVar15[0xf] = uVar46;
    uVar54 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
    auVar16[4] = uVar55;
    auVar16._0_4_ = fVar49;
    auVar16[5] = uVar36;
    auVar16[6] = uVar37;
    auVar16[7] = uVar38;
    auVar16[8] = uVar39;
    auVar16[9] = uVar40;
    auVar16[10] = uVar41;
    auVar16[0xb] = uVar42;
    auVar16[0xc] = uVar43;
    auVar16[0xd] = uVar44;
    auVar16[0xe] = uVar45;
    auVar16[0xf] = uVar46;
    uVar17 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
    fVar64 = (float)_DAT_01d4ae90;
    fVar67 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar68 = (float)_UNK_01d4ae98;
    fVar69 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    uVar25 = puVar35[0xf];
    uVar24 = puVar35[0xe];
    auVar9._12_4_ = fVar52;
    auVar9._0_12_ = *pauVar1;
    uVar18 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    fVar49 = (fVar49 * (float)uVar32 + fVar64 * fVar56 * (float)uVar27 +
             fVar64 * (float)uVar62 * (float)uVar66) - (float)uVar60 * (float)uVar54;
    fVar51 = (fVar51 * fVar8 + fVar67 * fVar57 * (float)((ulong)uVar27 >> 0x20) +
             fVar67 * fVar63 * (float)((ulong)uVar66 >> 0x20)) -
             fVar59 * (float)((ulong)uVar54 >> 0x20);
    uVar36 = SUB41(fVar51,0);
    uVar37 = (undefined1)((uint)fVar51 >> 8);
    uVar38 = (undefined1)((uint)fVar51 >> 0x10);
    uVar39 = (undefined1)((uint)fVar51 >> 0x18);
    fVar19 = (fVar19 * (float)uVar32 + fVar68 * (float)uVar60 * (float)uVar65 +
             fVar68 * fVar56 * (float)uVar53) - (float)uVar62 * (float)uVar17;
    uVar40 = SUB41(fVar19,0);
    uVar41 = (undefined1)((uint)fVar19 >> 8);
    uVar42 = (undefined1)((uint)fVar19 >> 0x10);
    uVar43 = (undefined1)((uint)fVar19 >> 0x18);
    fVar8 = (fVar20 * fVar8 + fVar69 * fVar59 * (float)((ulong)uVar65 >> 0x20) +
            fVar69 * fVar57 * (float)((ulong)uVar53 >> 0x20)) -
            fVar63 * (float)((ulong)uVar17 >> 0x20);
    uVar44 = SUB41(fVar8,0);
    uVar45 = (undefined1)((uint)fVar8 >> 8);
    uVar46 = (undefined1)((uint)fVar8 >> 0x10);
    uVar47 = (undefined1)((uint)fVar8 >> 0x18);
    auVar10._12_4_ = fVar52;
    auVar10._0_12_ = *pauVar1;
    uVar27 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd50f8);
    fVar56 = (float)((ulong)uVar27 >> 0x20);
    auVar2[4] = uVar36;
    auVar2._0_4_ = fVar49;
    auVar2[5] = uVar37;
    auVar2[6] = uVar38;
    auVar2[7] = uVar39;
    auVar2[8] = uVar40;
    auVar2[9] = uVar41;
    auVar2[10] = uVar42;
    auVar2[0xb] = uVar43;
    auVar2[0xc] = uVar44;
    auVar2[0xd] = uVar45;
    auVar2[0xe] = uVar46;
    auVar2[0xf] = uVar47;
    uVar54 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd4f90);
    auVar3[4] = uVar36;
    auVar3._0_4_ = fVar49;
    auVar3[5] = uVar37;
    auVar3[6] = uVar38;
    auVar3[7] = uVar39;
    auVar3[8] = uVar40;
    auVar3[9] = uVar41;
    auVar3[10] = uVar42;
    auVar3[0xb] = uVar43;
    auVar3[0xc] = uVar44;
    auVar3[0xd] = uVar45;
    auVar3[0xe] = uVar46;
    auVar3[0xf] = uVar47;
    uVar65 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd5120);
    fVar20 = (float)((ulong)uVar18 >> 0x20);
    uVar58 = *(undefined4 *)(puVar35 + 0x36);
    uVar55 = *(undefined1 *)(puVar35 + 0xc);
    auVar11._12_4_ = fVar52;
    auVar11._0_12_ = *pauVar1;
    uVar62 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    fVar52 = (float)((ulong)uVar62 >> 0x20);
    auVar4[4] = uVar36;
    auVar4._0_4_ = fVar49;
    auVar4[5] = uVar37;
    auVar4[6] = uVar38;
    auVar4[7] = uVar39;
    auVar4[8] = uVar40;
    auVar4[9] = uVar41;
    auVar4[10] = uVar42;
    auVar4[0xb] = uVar43;
    auVar4[0xc] = uVar44;
    auVar4[0xd] = uVar45;
    auVar4[0xe] = uVar46;
    auVar4[0xf] = uVar47;
    uVar17 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd50f8);
    auVar5[4] = uVar36;
    auVar5._0_4_ = fVar49;
    auVar5[5] = uVar37;
    auVar5[6] = uVar38;
    auVar5[7] = uVar39;
    auVar5[8] = uVar40;
    auVar5[9] = uVar41;
    auVar5[10] = uVar42;
    auVar5[0xb] = uVar43;
    auVar5[0xc] = uVar44;
    auVar5[0xd] = uVar45;
    auVar5[0xe] = uVar46;
    auVar5[0xf] = uVar47;
    uVar53 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
    auVar6[4] = uVar36;
    auVar6._0_4_ = fVar49;
    auVar6[5] = uVar37;
    auVar6[6] = uVar38;
    auVar6[7] = uVar39;
    auVar6[8] = uVar40;
    auVar6[9] = uVar41;
    auVar6[10] = uVar42;
    auVar6[0xb] = uVar43;
    auVar6[0xc] = uVar44;
    auVar6[0xd] = uVar45;
    auVar6[0xe] = uVar46;
    auVar6[0xf] = uVar47;
    uVar60 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5270);
    auVar7[4] = uVar36;
    auVar7._0_4_ = fVar49;
    auVar7[5] = uVar37;
    auVar7[6] = uVar38;
    auVar7[7] = uVar39;
    auVar7[8] = SUB41(fVar49,0);
    auVar7[9] = (char)((uint)fVar49 >> 8);
    auVar7[10] = (char)((uint)fVar49 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar49 >> 0x18);
    auVar7[0xc] = uVar36;
    auVar7[0xd] = uVar37;
    auVar7[0xe] = uVar38;
    auVar7[0xf] = uVar39;
    uVar32 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd50b0);
    fVar49 = ((float)uVar18 * fVar49 + fVar64 * fVar48 * (float)uVar54 +
             fVar64 * (float)uVar62 * (float)uVar17) - (float)uVar27 * (float)uVar53;
    fVar51 = (fVar20 * fVar51 + fVar67 * fVar50 * (float)((ulong)uVar54 >> 0x20) +
             fVar67 * fVar52 * (float)((ulong)uVar17 >> 0x20)) -
             fVar56 * (float)((ulong)uVar53 >> 0x20);
    fVar19 = ((float)uVar18 * fVar19 + fVar68 * (float)uVar27 * (float)uVar65 +
             fVar68 * fVar48 * (float)uVar32) - (float)uVar62 * (float)uVar60;
    fVar8 = (fVar20 * fVar8 + fVar69 * fVar56 * (float)((ulong)uVar65 >> 0x20) +
            fVar69 * fVar50 * (float)((ulong)uVar32 >> 0x20)) -
            fVar52 * (float)((ulong)uVar60 >> 0x20);
    uStack_58 = CONCAT17((byte)((uint)fVar8 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                         CONCAT16((byte)((uint)fVar8 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                  CONCAT15((byte)((uint)fVar8 >> 8) &
                                           (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                           CONCAT14(SUB41(fVar8,0) &
                                                    (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                    CONCAT13((byte)((uint)fVar19 >> 0x18) &
                                                             (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar19 >> 0x10) &
                                                                      (byte)((ulong)DAT_01d4ab58 >>
                                                                            0x10),
                                                                      CONCAT11((byte)((uint)fVar19
                                                                                     >> 8) &
                                                                               (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar19,0) & (byte)DAT_01d4ab58)))))));
    local_60 = CONCAT17((byte)((uint)fVar51 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                        CONCAT16((byte)((uint)fVar51 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                 CONCAT15((byte)((uint)fVar51 >> 8) &
                                          (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                          CONCAT14(SUB41(fVar51,0) &
                                                   (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                   CONCAT13((byte)((uint)fVar49 >> 0x18) &
                                                            (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar49 >> 0x10) &
                                                                     (byte)((ulong)DAT_01d4ab50 >>
                                                                           0x10),
                                                                     CONCAT11((byte)((uint)fVar49 >>
                                                                                    8) &
                                                                              (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar49,0) & (byte)DAT_01d4ab50)))))));
    FUN_00db3ef0((char)uVar61,param_1,&local_60,uVar58);
    *(undefined1 *)(puVar35 + 0xc) = uVar55;
    *(undefined4 *)(puVar35 + 0x36) = uVar58;
    puVar35[0xf] = uVar25;
    puVar35[0xe] = uVar24;
    *(undefined4 *)(param_1 + 0x524) = uVar61;
    uVar32 = *(undefined8 *)(*param_2 + 8);
    *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)*param_2;
    *(undefined8 *)(param_1 + 0xb68) = uVar32;
  }
  return;
}


