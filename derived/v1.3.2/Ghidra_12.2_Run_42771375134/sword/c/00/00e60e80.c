/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60e80; name: FUN_00e60e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e60e80(float param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined8 uVar30;
  int iVar31;
  long *plVar32;
  undefined8 uVar33;
  long lVar34;
  long *plVar35;
  undefined8 *puVar36;
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
  undefined1 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined1 uVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(float *)(param_2 + 0x524) != param_1) {
    lVar34 = *(long *)(*(long *)(param_2 + 0x360) + 0x80);
    plVar35 = (long *)(lVar34 + 0x48);
    (**(code **)(*plVar35 + 0x10))(plVar35);
    puVar36 = *(undefined8 **)(lVar34 + 0x60);
    if (puVar36 != (undefined8 *)0x0) {
      plVar32 = (long *)(**(code **)*puVar36)(puVar36);
      if (((*PTR_DAT_02715290 & 1) == 0) &&
         (iVar31 = __cxa_guard_acquire(PTR_DAT_02715290), iVar31 != 0)) {
        uVar33 = FUN_01590a70();
        *(undefined8 *)PTR_DAT_02715298 = uVar33;
        __cxa_guard_release(PTR_DAT_02715290);
      }
      for (; plVar32 != (long *)0x0; plVar32 = (long *)*plVar32) {
        if (plVar32 == (long *)PTR_DAT_02715298) {
          puVar36 = puVar36 + -10;
          goto LAB_00e60f14;
        }
      }
      puVar36 = (undefined8 *)0x0;
    }
LAB_00e60f14:
    (**(code **)(*plVar35 + 0x18))(plVar35);
    pauVar1 = (undefined1 (*) [12])(param_2 + 0xa0);
    fVar51 = (float)((ulong)*(undefined8 *)(param_2 + 0xa8) >> 0x20);
    fVar49 = (float)*(undefined8 *)*pauVar1;
    fVar50 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(param_2 + 0xb60);
    uVar57 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0xb68) >> 0x20);
    fVar55 = (float)*(undefined8 *)*pauVar2;
    fVar56 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar24._12_4_ = uVar57;
    auVar24._0_12_ = *pauVar2;
    uVar59 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
    fVar18 = fVar49 * (float)_DAT_01d4ae80;
    fVar21 = fVar50 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar54 = SUB41(fVar21,0);
    uVar37 = (undefined1)((uint)fVar21 >> 8);
    uVar38 = (undefined1)((uint)fVar21 >> 0x10);
    uVar39 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (float)*(undefined8 *)(param_2 + 0xa8) * (float)_UNK_01d4ae88;
    uVar40 = SUB41(fVar22,0);
    uVar41 = (undefined1)((uint)fVar22 >> 8);
    uVar42 = (undefined1)((uint)fVar22 >> 0x10);
    uVar43 = (undefined1)((uint)fVar22 >> 0x18);
    fVar23 = fVar51 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar44 = SUB41(fVar23,0);
    uVar45 = (undefined1)((uint)fVar23 >> 8);
    uVar46 = (undefined1)((uint)fVar23 >> 0x10);
    uVar47 = (undefined1)((uint)fVar23 >> 0x18);
    auVar25._12_4_ = uVar57;
    auVar25._0_12_ = *pauVar2;
    uVar33 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
    auVar26._12_4_ = uVar57;
    auVar26._0_12_ = *pauVar2;
    uVar60 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
    auVar13[4] = uVar54;
    auVar13._0_4_ = fVar18;
    auVar13[5] = uVar37;
    auVar13[6] = uVar38;
    auVar13[7] = uVar39;
    auVar13[8] = uVar40;
    auVar13[9] = uVar41;
    auVar13[10] = uVar42;
    auVar13[0xb] = uVar43;
    auVar13[0xc] = uVar44;
    auVar13[0xd] = uVar45;
    auVar13[0xe] = uVar46;
    auVar13[0xf] = uVar47;
    uVar63 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
    auVar14[4] = uVar54;
    auVar14._0_4_ = fVar18;
    auVar14[5] = uVar37;
    auVar14[6] = uVar38;
    auVar14[7] = uVar39;
    auVar14[8] = uVar40;
    auVar14[9] = uVar41;
    auVar14[10] = uVar42;
    auVar14[0xb] = uVar43;
    auVar14[0xc] = uVar44;
    auVar14[0xd] = uVar45;
    auVar14[0xe] = uVar46;
    auVar14[0xf] = uVar47;
    uVar30 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    fVar58 = (float)((ulong)uVar59 >> 0x20);
    auVar15[4] = uVar54;
    auVar15._0_4_ = fVar18;
    auVar15[5] = uVar37;
    auVar15[6] = uVar38;
    auVar15[7] = uVar39;
    auVar15[8] = uVar40;
    auVar15[9] = uVar41;
    auVar15[10] = uVar42;
    auVar15[0xb] = uVar43;
    auVar15[0xc] = uVar44;
    auVar15[0xd] = uVar45;
    auVar15[0xe] = uVar46;
    auVar15[0xf] = uVar47;
    uVar64 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd50f8);
    fVar9 = (float)((ulong)uVar33 >> 0x20);
    auVar29._4_4_ =
         (int)(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(uVar54,fVar18)))) >> 0x20);
    auVar29._0_4_ = fVar18;
    auVar29._8_4_ = fVar18;
    auVar29._12_4_ =
         (int)(CONCAT17(uVar39,CONCAT16(uVar38,CONCAT15(uVar37,CONCAT14(uVar54,fVar18)))) >> 0x20);
    uVar52 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd50b0);
    fVar61 = (float)((ulong)uVar60 >> 0x20);
    auVar16[4] = uVar54;
    auVar16._0_4_ = fVar18;
    auVar16[5] = uVar37;
    auVar16[6] = uVar38;
    auVar16[7] = uVar39;
    auVar16[8] = uVar40;
    auVar16[9] = uVar41;
    auVar16[10] = uVar42;
    auVar16[0xb] = uVar43;
    auVar16[0xc] = uVar44;
    auVar16[0xd] = uVar45;
    auVar16[0xe] = uVar46;
    auVar16[0xf] = uVar47;
    uVar53 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    auVar17[4] = uVar54;
    auVar17._0_4_ = fVar18;
    auVar17[5] = uVar37;
    auVar17[6] = uVar38;
    auVar17[7] = uVar39;
    auVar17[8] = uVar40;
    auVar17[9] = uVar41;
    auVar17[10] = uVar42;
    auVar17[0xb] = uVar43;
    auVar17[0xc] = uVar44;
    auVar17[0xd] = uVar45;
    auVar17[0xe] = uVar46;
    auVar17[0xf] = uVar47;
    uVar19 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5270);
    fVar62 = (float)_DAT_01d4ae90;
    fVar65 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar66 = (float)_UNK_01d4ae98;
    fVar67 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    uVar28 = puVar36[0xf];
    uVar27 = puVar36[0xe];
    auVar10._12_4_ = fVar51;
    auVar10._0_12_ = *pauVar1;
    uVar20 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd4f90);
    fVar18 = (fVar18 * (float)uVar33 + fVar62 * fVar55 * (float)uVar30 +
             fVar62 * (float)uVar60 * (float)uVar64) - (float)uVar59 * (float)uVar53;
    fVar21 = (fVar21 * fVar9 + fVar65 * fVar56 * (float)((ulong)uVar30 >> 0x20) +
             fVar65 * fVar61 * (float)((ulong)uVar64 >> 0x20)) -
             fVar58 * (float)((ulong)uVar53 >> 0x20);
    uVar37 = SUB41(fVar21,0);
    uVar38 = (undefined1)((uint)fVar21 >> 8);
    uVar39 = (undefined1)((uint)fVar21 >> 0x10);
    uVar40 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (fVar22 * (float)uVar33 + fVar66 * (float)uVar59 * (float)uVar63 +
             fVar66 * fVar55 * (float)uVar52) - (float)uVar60 * (float)uVar19;
    uVar41 = SUB41(fVar22,0);
    uVar42 = (undefined1)((uint)fVar22 >> 8);
    uVar43 = (undefined1)((uint)fVar22 >> 0x10);
    uVar44 = (undefined1)((uint)fVar22 >> 0x18);
    fVar9 = (fVar23 * fVar9 + fVar67 * fVar58 * (float)((ulong)uVar63 >> 0x20) +
            fVar67 * fVar56 * (float)((ulong)uVar52 >> 0x20)) -
            fVar61 * (float)((ulong)uVar19 >> 0x20);
    uVar45 = SUB41(fVar9,0);
    uVar46 = (undefined1)((uint)fVar9 >> 8);
    uVar47 = (undefined1)((uint)fVar9 >> 0x10);
    uVar48 = (undefined1)((uint)fVar9 >> 0x18);
    auVar11._12_4_ = fVar51;
    auVar11._0_12_ = *pauVar1;
    uVar30 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50f8);
    fVar55 = (float)((ulong)uVar30 >> 0x20);
    auVar3[4] = uVar37;
    auVar3._0_4_ = fVar18;
    auVar3[5] = uVar38;
    auVar3[6] = uVar39;
    auVar3[7] = uVar40;
    auVar3[8] = uVar41;
    auVar3[9] = uVar42;
    auVar3[10] = uVar43;
    auVar3[0xb] = uVar44;
    auVar3[0xc] = uVar45;
    auVar3[0xd] = uVar46;
    auVar3[0xe] = uVar47;
    auVar3[0xf] = uVar48;
    uVar53 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd4f90);
    auVar4[4] = uVar37;
    auVar4._0_4_ = fVar18;
    auVar4[5] = uVar38;
    auVar4[6] = uVar39;
    auVar4[7] = uVar40;
    auVar4[8] = uVar41;
    auVar4[9] = uVar42;
    auVar4[10] = uVar43;
    auVar4[0xb] = uVar44;
    auVar4[0xc] = uVar45;
    auVar4[0xd] = uVar46;
    auVar4[0xe] = uVar47;
    auVar4[0xf] = uVar48;
    uVar63 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5120);
    fVar23 = (float)((ulong)uVar20 >> 0x20);
    uVar57 = *(undefined4 *)(puVar36 + 0x36);
    uVar54 = *(undefined1 *)(puVar36 + 0xc);
    auVar12._12_4_ = fVar51;
    auVar12._0_12_ = *pauVar1;
    uVar60 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
    fVar51 = (float)((ulong)uVar60 >> 0x20);
    auVar5[4] = uVar37;
    auVar5._0_4_ = fVar18;
    auVar5[5] = uVar38;
    auVar5[6] = uVar39;
    auVar5[7] = uVar40;
    auVar5[8] = uVar41;
    auVar5[9] = uVar42;
    auVar5[10] = uVar43;
    auVar5[0xb] = uVar44;
    auVar5[0xc] = uVar45;
    auVar5[0xd] = uVar46;
    auVar5[0xe] = uVar47;
    auVar5[0xf] = uVar48;
    uVar19 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar6[4] = uVar37;
    auVar6._0_4_ = fVar18;
    auVar6[5] = uVar38;
    auVar6[6] = uVar39;
    auVar6[7] = uVar40;
    auVar6[8] = uVar41;
    auVar6[9] = uVar42;
    auVar6[10] = uVar43;
    auVar6[0xb] = uVar44;
    auVar6[0xc] = uVar45;
    auVar6[0xd] = uVar46;
    auVar6[0xe] = uVar47;
    auVar6[0xf] = uVar48;
    uVar52 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd5418);
    auVar7[4] = uVar37;
    auVar7._0_4_ = fVar18;
    auVar7[5] = uVar38;
    auVar7[6] = uVar39;
    auVar7[7] = uVar40;
    auVar7[8] = uVar41;
    auVar7[9] = uVar42;
    auVar7[10] = uVar43;
    auVar7[0xb] = uVar44;
    auVar7[0xc] = uVar45;
    auVar7[0xd] = uVar46;
    auVar7[0xe] = uVar47;
    auVar7[0xf] = uVar48;
    uVar59 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5270);
    auVar8[4] = uVar37;
    auVar8._0_4_ = fVar18;
    auVar8[5] = uVar38;
    auVar8[6] = uVar39;
    auVar8[7] = uVar40;
    auVar8[8] = SUB41(fVar18,0);
    auVar8[9] = (char)((uint)fVar18 >> 8);
    auVar8[10] = (char)((uint)fVar18 >> 0x10);
    auVar8[0xb] = (char)((uint)fVar18 >> 0x18);
    auVar8[0xc] = uVar37;
    auVar8[0xd] = uVar38;
    auVar8[0xe] = uVar39;
    auVar8[0xf] = uVar40;
    uVar33 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50b0);
    fVar18 = ((float)uVar20 * fVar18 + fVar62 * fVar49 * (float)uVar53 +
             fVar62 * (float)uVar60 * (float)uVar19) - (float)uVar30 * (float)uVar52;
    fVar21 = (fVar23 * fVar21 + fVar65 * fVar50 * (float)((ulong)uVar53 >> 0x20) +
             fVar65 * fVar51 * (float)((ulong)uVar19 >> 0x20)) -
             fVar55 * (float)((ulong)uVar52 >> 0x20);
    fVar22 = ((float)uVar20 * fVar22 + fVar66 * (float)uVar30 * (float)uVar63 +
             fVar66 * fVar49 * (float)uVar33) - (float)uVar60 * (float)uVar59;
    fVar9 = (fVar23 * fVar9 + fVar67 * fVar55 * (float)((ulong)uVar63 >> 0x20) +
            fVar67 * fVar50 * (float)((ulong)uVar33 >> 0x20)) -
            fVar51 * (float)((ulong)uVar59 >> 0x20);
    uStack_48 = CONCAT17((byte)((uint)fVar9 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                         CONCAT16((byte)((uint)fVar9 >> 0x10) & (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                  CONCAT15((byte)((uint)fVar9 >> 8) &
                                           (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                           CONCAT14(SUB41(fVar9,0) &
                                                    (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                    CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                             (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                                      (byte)((ulong)DAT_01d4ab58 >>
                                                                            0x10),
                                                                      CONCAT11((byte)((uint)fVar22
                                                                                     >> 8) &
                                                                               (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar22,0) & (byte)DAT_01d4ab58)))))));
    local_50 = CONCAT17((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                        CONCAT16((byte)((uint)fVar21 >> 0x10) & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                 CONCAT15((byte)((uint)fVar21 >> 8) &
                                          (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                          CONCAT14(SUB41(fVar21,0) &
                                                   (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                   CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                            (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                                                     (byte)((ulong)DAT_01d4ab50 >>
                                                                           0x10),
                                                                     CONCAT11((byte)((uint)fVar18 >>
                                                                                    8) &
                                                                              (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar18,0) & (byte)DAT_01d4ab50)))))));
    FUN_00db3ef0(SUB41(param_1,0),param_2,&local_50,uVar57);
    *(undefined1 *)(puVar36 + 0xc) = uVar54;
    *(undefined4 *)(puVar36 + 0x36) = uVar57;
    puVar36[0xf] = uVar28;
    puVar36[0xe] = uVar27;
    *(float *)(param_2 + 0x524) = param_1;
  }
  return;
}


