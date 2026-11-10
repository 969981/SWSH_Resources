/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e13e60; name: FUN_00e13e60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e13e60(long param_1,ulong *param_2,undefined8 *param_3,undefined1 (*param_4) [12])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
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
  code *pcVar28;
  undefined1 uVar29;
  undefined1 uVar30;
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
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  ulong local_c0;
  ulong uStack_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  long local_90;
  char *pcStack_88;
  char local_24 [4];
  
  if (*(long *)(param_1 + 0xf0) == 0x674edc539f9f74a6) {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      *(ulong *)(param_1 + 0x78) = param_2[1];
      *(ulong *)(param_1 + 0x70) = *param_2;
    }
  }
  else if (*(char *)(param_1 + 0x5c) != '\0') {
    fVar42 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    fVar41 = (float)*(undefined8 *)*param_4;
    fVar43 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
    fVar18 = fVar41 * (float)_DAT_01d4ae80;
    fVar21 = fVar43 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    uVar29 = SUB41(fVar21,0);
    uVar30 = (undefined1)((uint)fVar21 >> 8);
    uVar31 = (undefined1)((uint)fVar21 >> 0x10);
    uVar32 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (float)*(undefined8 *)(*param_4 + 8) * (float)_UNK_01d4ae88;
    uVar33 = SUB41(fVar22,0);
    uVar34 = (undefined1)((uint)fVar22 >> 8);
    uVar35 = (undefined1)((uint)fVar22 >> 0x10);
    uVar36 = (undefined1)((uint)fVar22 >> 0x18);
    fVar23 = fVar42 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar37 = SUB41(fVar23,0);
    uVar38 = (undefined1)((uint)fVar23 >> 8);
    uVar39 = (undefined1)((uint)fVar23 >> 0x10);
    uVar40 = (undefined1)((uint)fVar23 >> 0x18);
    uVar47 = (undefined4)_UNK_01d49df8;
    uVar48 = (undefined4)((ulong)_UNK_01d49df8 >> 0x20);
    auVar24._8_4_ = uVar47;
    auVar24._0_8_ = _DAT_01d49df0;
    auVar24._12_4_ = uVar48;
    uVar7 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
    auVar25._8_4_ = uVar47;
    auVar25._0_8_ = _DAT_01d49df0;
    auVar25._12_4_ = uVar48;
    uVar49 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar26._8_4_ = uVar47;
    auVar26._0_8_ = _DAT_01d49df0;
    auVar26._12_4_ = uVar48;
    uVar44 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
    fVar45 = (float)((ulong)uVar44 >> 0x20);
    auVar12[4] = uVar29;
    auVar12._0_4_ = fVar18;
    auVar12[5] = uVar30;
    auVar12[6] = uVar31;
    auVar12[7] = uVar32;
    auVar12[8] = uVar33;
    auVar12[9] = uVar34;
    auVar12[10] = uVar35;
    auVar12[0xb] = uVar36;
    auVar12[0xc] = uVar37;
    auVar12[0xd] = uVar38;
    auVar12[0xe] = uVar39;
    auVar12[0xf] = uVar40;
    uVar57 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
    auVar13[4] = uVar29;
    auVar13._0_4_ = fVar18;
    auVar13[5] = uVar30;
    auVar13[6] = uVar31;
    auVar13[7] = uVar32;
    auVar13[8] = uVar33;
    auVar13[9] = uVar34;
    auVar13[10] = uVar35;
    auVar13[0xb] = uVar36;
    auVar13[0xc] = uVar37;
    auVar13[0xd] = uVar38;
    auVar13[0xe] = uVar39;
    auVar13[0xf] = uVar40;
    uVar59 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5270);
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    auVar14[4] = uVar29;
    auVar14._0_4_ = fVar18;
    auVar14[5] = uVar30;
    auVar14[6] = uVar31;
    auVar14[7] = uVar32;
    auVar14[8] = uVar33;
    auVar14[9] = uVar34;
    auVar14[10] = uVar35;
    auVar14[0xb] = uVar36;
    auVar14[0xc] = uVar37;
    auVar14[0xd] = uVar38;
    auVar14[0xe] = uVar39;
    auVar14[0xf] = uVar40;
    uVar55 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    auVar15[4] = uVar29;
    auVar15._0_4_ = fVar18;
    auVar15[5] = uVar30;
    auVar15[6] = uVar31;
    auVar15[7] = uVar32;
    auVar15[8] = uVar33;
    auVar15[9] = uVar34;
    auVar15[10] = uVar35;
    auVar15[0xb] = uVar36;
    auVar15[0xc] = uVar37;
    auVar15[0xd] = uVar38;
    auVar15[0xe] = uVar39;
    auVar15[0xf] = uVar40;
    uVar58 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
    auVar9._12_4_ = fVar42;
    auVar9._0_12_ = *param_4;
    uVar27 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    fVar46 = (float)((ulong)uVar27 >> 0x20);
    fVar50 = (float)((ulong)uVar49 >> 0x20);
    auVar16[4] = uVar29;
    auVar16._0_4_ = fVar18;
    auVar16[5] = uVar30;
    auVar16[6] = uVar31;
    auVar16[7] = uVar32;
    auVar16[8] = uVar33;
    auVar16[9] = uVar34;
    auVar16[10] = uVar35;
    auVar16[0xb] = uVar36;
    auVar16[0xc] = uVar37;
    auVar16[0xd] = uVar38;
    auVar16[0xe] = uVar39;
    auVar16[0xf] = uVar40;
    uVar56 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
    auVar17[4] = uVar29;
    auVar17._0_4_ = fVar18;
    auVar17[5] = uVar30;
    auVar17[6] = uVar31;
    auVar17[7] = uVar32;
    auVar17[8] = SUB41(fVar18,0);
    auVar17[9] = (char)((uint)fVar18 >> 8);
    auVar17[10] = (char)((uint)fVar18 >> 0x10);
    auVar17[0xb] = (char)((uint)fVar18 >> 0x18);
    auVar17[0xc] = uVar29;
    auVar17[0xd] = uVar30;
    auVar17[0xe] = uVar31;
    auVar17[0xf] = uVar32;
    uVar19 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50b0);
    fVar51 = (float)_DAT_01d4ae90;
    fVar52 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar53 = (float)_UNK_01d4ae98;
    fVar54 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar10._12_4_ = fVar42;
    auVar10._0_12_ = *param_4;
    uVar20 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd4f90);
    fVar18 = (fVar18 * (float)uVar7 + fVar51 * (float)uVar55 * 0.0 +
             fVar51 * (float)uVar44 * (float)uVar56) - (float)uVar49 * (float)uVar58;
    fVar21 = (fVar21 * fVar8 + fVar52 * (float)((ulong)uVar55 >> 0x20) * 0.0 +
             fVar52 * fVar45 * (float)((ulong)uVar56 >> 0x20)) -
             fVar50 * (float)((ulong)uVar58 >> 0x20);
    uVar29 = SUB41(fVar21,0);
    uVar30 = (undefined1)((uint)fVar21 >> 8);
    uVar31 = (undefined1)((uint)fVar21 >> 0x10);
    uVar32 = (undefined1)((uint)fVar21 >> 0x18);
    fVar22 = (fVar22 * (float)uVar7 + fVar53 * (float)uVar49 * (float)uVar57 +
             fVar53 * (float)uVar19 * 0.0) - (float)uVar44 * (float)uVar59;
    uVar33 = SUB41(fVar22,0);
    uVar34 = (undefined1)((uint)fVar22 >> 8);
    uVar35 = (undefined1)((uint)fVar22 >> 0x10);
    uVar36 = (undefined1)((uint)fVar22 >> 0x18);
    fVar8 = (fVar23 * fVar8 + fVar54 * fVar50 * (float)((ulong)uVar57 >> 0x20) +
            fVar54 * (float)((ulong)uVar19 >> 0x20) * 0.0) - fVar45 * (float)((ulong)uVar59 >> 0x20)
    ;
    uVar37 = SUB41(fVar8,0);
    uVar38 = (undefined1)((uint)fVar8 >> 8);
    uVar39 = (undefined1)((uint)fVar8 >> 0x10);
    uVar40 = (undefined1)((uint)fVar8 >> 0x18);
    auVar1[4] = uVar29;
    auVar1._0_4_ = fVar18;
    auVar1[5] = uVar30;
    auVar1[6] = uVar31;
    auVar1[7] = uVar32;
    auVar1[8] = uVar33;
    auVar1[9] = uVar34;
    auVar1[10] = uVar35;
    auVar1[0xb] = uVar36;
    auVar1[0xc] = uVar37;
    auVar1[0xd] = uVar38;
    auVar1[0xe] = uVar39;
    auVar1[0xf] = uVar40;
    uVar49 = a64_TBL(ZEXT816(0),auVar1,DAT_01cd4f90);
    auVar2[4] = uVar29;
    auVar2._0_4_ = fVar18;
    auVar2[5] = uVar30;
    auVar2[6] = uVar31;
    auVar2[7] = uVar32;
    auVar2[8] = uVar33;
    auVar2[9] = uVar34;
    auVar2[10] = uVar35;
    auVar2[0xb] = uVar36;
    auVar2[0xc] = uVar37;
    auVar2[0xd] = uVar38;
    auVar2[0xe] = uVar39;
    auVar2[0xf] = uVar40;
    uVar57 = a64_TBL(ZEXT816(0),auVar2,DAT_01cd5120);
    fVar23 = (float)((ulong)uVar20 >> 0x20);
    auVar11._12_4_ = fVar42;
    auVar11._0_12_ = *param_4;
    uVar56 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd5418);
    fVar45 = (float)((ulong)uVar56 >> 0x20);
    auVar3[4] = uVar29;
    auVar3._0_4_ = fVar18;
    auVar3[5] = uVar30;
    auVar3[6] = uVar31;
    auVar3[7] = uVar32;
    auVar3[8] = uVar33;
    auVar3[9] = uVar34;
    auVar3[10] = uVar35;
    auVar3[0xb] = uVar36;
    auVar3[0xc] = uVar37;
    auVar3[0xd] = uVar38;
    auVar3[0xe] = uVar39;
    auVar3[0xf] = uVar40;
    uVar19 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
    auVar4[4] = uVar29;
    auVar4._0_4_ = fVar18;
    auVar4[5] = uVar30;
    auVar4[6] = uVar31;
    auVar4[7] = uVar32;
    auVar4[8] = uVar33;
    auVar4[9] = uVar34;
    auVar4[10] = uVar35;
    auVar4[0xb] = uVar36;
    auVar4[0xc] = uVar37;
    auVar4[0xd] = uVar38;
    auVar4[0xe] = uVar39;
    auVar4[0xf] = uVar40;
    uVar44 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    auVar5[4] = uVar29;
    auVar5._0_4_ = fVar18;
    auVar5[5] = uVar30;
    auVar5[6] = uVar31;
    auVar5[7] = uVar32;
    auVar5[8] = uVar33;
    auVar5[9] = uVar34;
    auVar5[10] = uVar35;
    auVar5[0xb] = uVar36;
    auVar5[0xc] = uVar37;
    auVar5[0xd] = uVar38;
    auVar5[0xe] = uVar39;
    auVar5[0xf] = uVar40;
    uVar55 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5270);
    auVar6[4] = uVar29;
    auVar6._0_4_ = fVar18;
    auVar6[5] = uVar30;
    auVar6[6] = uVar31;
    auVar6[7] = uVar32;
    auVar6[8] = SUB41(fVar18,0);
    auVar6[9] = (char)((uint)fVar18 >> 8);
    auVar6[10] = (char)((uint)fVar18 >> 0x10);
    auVar6[0xb] = (char)((uint)fVar18 >> 0x18);
    auVar6[0xc] = uVar29;
    auVar6[0xd] = uVar30;
    auVar6[0xe] = uVar31;
    auVar6[0xf] = uVar32;
    uVar7 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50b0);
    fVar42 = *(float *)(param_1 + 0x54);
    fVar18 = ((float)uVar20 * fVar18 + fVar51 * fVar41 * (float)uVar49 +
             fVar51 * (float)uVar56 * (float)uVar19) - (float)uVar27 * (float)uVar44;
    fVar21 = (fVar23 * fVar21 + fVar52 * fVar43 * (float)((ulong)uVar49 >> 0x20) +
             fVar52 * fVar45 * (float)((ulong)uVar19 >> 0x20)) -
             fVar46 * (float)((ulong)uVar44 >> 0x20);
    fVar22 = ((float)uVar20 * fVar22 + fVar53 * (float)uVar27 * (float)uVar57 +
             fVar53 * fVar41 * (float)uVar7) - (float)uVar56 * (float)uVar55;
    fVar23 = (fVar23 * fVar8 + fVar54 * fVar46 * (float)((ulong)uVar57 >> 0x20) +
             fVar54 * fVar43 * (float)((ulong)uVar7 >> 0x20)) -
             fVar45 * (float)((ulong)uVar55 >> 0x20);
    fVar8 = (float)*param_3 +
            (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                            CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                     CONCAT11((byte)((uint)fVar18 >> 8) &
                                              (byte)((ulong)DAT_01d4ab50 >> 8),
                                              SUB41(fVar18,0) & (byte)DAT_01d4ab50))) * fVar42;
    fVar18 = (float)((ulong)*param_3 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                             CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                      CONCAT11((byte)((uint)fVar21 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                               SUB41(fVar21,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)
                                              ))) * fVar42;
    fVar21 = (float)param_3[1] +
             (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                             CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar22 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 8),
                                               SUB41(fVar22,0) & (byte)DAT_01d4ab58))) * fVar42;
    fVar22 = (float)((ulong)param_3[1] >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                             CONCAT12((byte)((uint)fVar23 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                      CONCAT11((byte)((uint)fVar23 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                               SUB41(fVar23,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)
                                              ))) * fVar42;
    uVar29 = (undefined1)((uint)fVar22 >> 8);
    uVar30 = (undefined1)((uint)fVar22 >> 0x10);
    uVar31 = (undefined1)((uint)fVar22 >> 0x18);
    *(ulong *)(param_1 + 0x78) =
         CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(SUB41(fVar22,0),fVar21))));
    *(ulong *)(param_1 + 0x70) =
         CONCAT17((char)((uint)fVar18 >> 0x18),
                  CONCAT16((char)((uint)fVar18 >> 0x10),
                           CONCAT15((char)((uint)fVar18 >> 8),CONCAT14(SUB41(fVar18,0),fVar8))));
    uVar47 = *(undefined4 *)((long)param_2 + 4);
    *(ulong *)(param_1 + 0x78) =
         CONCAT17(uVar31,CONCAT16(uVar30,CONCAT15(uVar29,CONCAT14(SUB41(fVar22,0),fVar21))));
    *(ulong *)(param_1 + 0x70) =
         CONCAT17((char)((uint)uVar47 >> 0x18),
                  CONCAT16((char)((uint)uVar47 >> 0x10),
                           CONCAT15((char)((uint)uVar47 >> 8),CONCAT14((char)uVar47,fVar8))));
  }
  local_c0 = *param_2 & 0xffffffff;
  uStack_b8 = param_2[1] & 0xffffffff;
  FUN_00e140b0(param_1,&local_c0);
  local_b0 = &LAB_00e2eb30;
  local_a8 = FUN_00e2ec50;
  pcStack_88 = local_24;
  local_a0 = &LAB_00e2ec60;
  local_24[0] = '\0';
  local_98 = &LAB_00e2ec70;
  local_90 = param_1;
  FUN_00e193e0(param_1,&local_b0);
  pcVar28 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    local_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar28)(&local_90);
  }
  if (local_24[0] != '\0') {
    (**(code **)(**(long **)(param_1 + 0xe8) + 0x38))(*(long **)(param_1 + 0xe8),1);
  }
  FUN_00e14360(param_1);
  return;
}


