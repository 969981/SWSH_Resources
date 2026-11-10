/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab0c00; name: FUN_00ab0c00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab0c00(long param_1,int param_2)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  float fStack_38;
  undefined1 local_30 [16];
  
  param_2 = *(int *)(param_1 + 0x1b0) + param_2;
  iVar2 = *(int *)(param_1 + 0x1b4);
  if (param_2 <= *(int *)(param_1 + 0x1b4)) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x1b0) = iVar2;
  FUN_00a97330((char)*(undefined4 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x80),local_30);
  FUN_00a973e0(*(undefined8 *)(param_1 + 0x80),local_40);
  fVar32 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
  FUN_00a92cd0(SUB41(fVar32 * local_40._4_4_,0),fVar32 * local_40._0_4_,fVar32 * fStack_38);
  pauVar1 = (undefined1 (*) [12])(param_1 + 0x1a0);
  uVar47 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20);
  fVar30 = (float)*(undefined8 *)*pauVar1;
  fVar45 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
  auVar24._12_4_ = uVar47;
  auVar24._0_12_ = *pauVar1;
  uVar49 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd50f8);
  fVar32 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
           (float)_DAT_01d4ae80;
  fVar21 = (float)CONCAT13(extraout_var_05,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
           (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar33 = SUB41(fVar21,0);
  uVar34 = (undefined1)((uint)fVar21 >> 8);
  uVar35 = (undefined1)((uint)fVar21 >> 0x10);
  uVar36 = (undefined1)((uint)fVar21 >> 0x18);
  fVar22 = (float)CONCAT13(extraout_var_09,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
           (float)_UNK_01d4ae88;
  uVar37 = SUB41(fVar22,0);
  uVar38 = (undefined1)((uint)fVar22 >> 8);
  uVar39 = (undefined1)((uint)fVar22 >> 0x10);
  uVar40 = (undefined1)((uint)fVar22 >> 0x18);
  fVar23 = (float)CONCAT13(extraout_var_13,
                           CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
           (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar41 = SUB41(fVar23,0);
  uVar42 = (undefined1)((uint)fVar23 >> 8);
  uVar43 = (undefined1)((uint)fVar23 >> 0x10);
  uVar44 = (undefined1)((uint)fVar23 >> 0x18);
  auVar25._12_4_ = uVar47;
  auVar25._0_12_ = *pauVar1;
  uVar12 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd4f90);
  fVar31 = (float)((ulong)uVar12 >> 0x20);
  auVar26._12_4_ = uVar47;
  auVar26._0_12_ = *pauVar1;
  uVar50 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  auVar13[4] = uVar33;
  auVar13._0_4_ = fVar32;
  auVar13[5] = uVar34;
  auVar13[6] = uVar35;
  auVar13[7] = uVar36;
  auVar13[8] = uVar37;
  auVar13[9] = uVar38;
  auVar13[10] = uVar39;
  auVar13[0xb] = uVar40;
  auVar13[0xc] = uVar41;
  auVar13[0xd] = uVar42;
  auVar13[0xe] = uVar43;
  auVar13[0xf] = uVar44;
  uVar58 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5120);
  auVar14[4] = uVar33;
  auVar14._0_4_ = fVar32;
  auVar14[5] = uVar34;
  auVar14[6] = uVar35;
  auVar14[7] = uVar36;
  auVar14[8] = uVar37;
  auVar14[9] = uVar38;
  auVar14[10] = uVar39;
  auVar14[0xb] = uVar40;
  auVar14[0xc] = uVar41;
  auVar14[0xd] = uVar42;
  auVar14[0xe] = uVar43;
  auVar14[0xf] = uVar44;
  uVar56 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
  fVar48 = (float)((ulong)uVar49 >> 0x20);
  auVar15[4] = uVar33;
  auVar15._0_4_ = fVar32;
  auVar15[5] = uVar34;
  auVar15[6] = uVar35;
  auVar15[7] = uVar36;
  auVar15[8] = uVar37;
  auVar15[9] = uVar38;
  auVar15[10] = uVar39;
  auVar15[0xb] = uVar40;
  auVar15[0xc] = uVar41;
  auVar15[0xd] = uVar42;
  auVar15[0xe] = uVar43;
  auVar15[0xf] = uVar44;
  uVar59 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5418);
  auVar16[4] = uVar33;
  auVar16._0_4_ = fVar32;
  auVar16[5] = uVar34;
  auVar16[6] = uVar35;
  auVar16[7] = uVar36;
  auVar16[8] = uVar37;
  auVar16[9] = uVar38;
  auVar16[10] = uVar39;
  auVar16[0xb] = uVar40;
  auVar16[0xc] = uVar41;
  auVar16[0xd] = uVar42;
  auVar16[0xe] = uVar43;
  auVar16[0xf] = uVar44;
  uVar60 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5270);
  auVar17[4] = uVar33;
  auVar17._0_4_ = fVar32;
  auVar17[5] = uVar34;
  auVar17[6] = uVar35;
  auVar17[7] = uVar36;
  auVar17[8] = uVar37;
  auVar17[9] = uVar38;
  auVar17[10] = uVar39;
  auVar17[0xb] = uVar40;
  auVar17[0xc] = uVar41;
  auVar17[0xd] = uVar42;
  auVar17[0xe] = uVar43;
  auVar17[0xf] = uVar44;
  uVar57 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
  auVar18[4] = uVar33;
  auVar18._0_4_ = fVar32;
  auVar18[5] = uVar34;
  auVar18[6] = uVar35;
  auVar18[7] = uVar36;
  auVar18[8] = SUB41(fVar32,0);
  auVar18[9] = (char)((uint)fVar32 >> 8);
  auVar18[10] = (char)((uint)fVar32 >> 0x10);
  auVar18[0xb] = (char)((uint)fVar32 >> 0x18);
  auVar18[0xc] = uVar33;
  auVar18[0xd] = uVar34;
  auVar18[0xe] = uVar35;
  auVar18[0xf] = uVar36;
  uVar19 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50b0);
  fVar52 = (float)((ulong)uVar50 >> 0x20);
  fVar51 = (float)_DAT_01d4ae90;
  fVar53 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar54 = (float)_UNK_01d4ae98;
  fVar55 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  auVar3[1] = extraout_var;
  auVar3[0] = extraout_b0;
  auVar3[2] = extraout_var_00;
  auVar3[3] = extraout_var_01;
  auVar3[4] = extraout_var_02;
  auVar3[5] = extraout_var_03;
  auVar3[6] = extraout_var_04;
  auVar3[7] = extraout_var_05;
  auVar3[8] = extraout_var_06;
  auVar3[9] = extraout_var_07;
  auVar3[10] = extraout_var_08;
  auVar3[0xb] = extraout_var_09;
  auVar3[0xc] = extraout_var_10;
  auVar3[0xd] = extraout_var_11;
  auVar3[0xe] = extraout_var_12;
  auVar3[0xf] = extraout_var_13;
  uVar27 = a64_TBL(ZEXT816(0),auVar3,DAT_01cd50f8);
  fVar46 = (float)((ulong)uVar27 >> 0x20);
  auVar4[1] = extraout_var;
  auVar4[0] = extraout_b0;
  auVar4[2] = extraout_var_00;
  auVar4[3] = extraout_var_01;
  auVar4[4] = extraout_var_02;
  auVar4[5] = extraout_var_03;
  auVar4[6] = extraout_var_04;
  auVar4[7] = extraout_var_05;
  auVar4[8] = extraout_var_06;
  auVar4[9] = extraout_var_07;
  auVar4[10] = extraout_var_08;
  auVar4[0xb] = extraout_var_09;
  auVar4[0xc] = extraout_var_10;
  auVar4[0xd] = extraout_var_11;
  auVar4[0xe] = extraout_var_12;
  auVar4[0xf] = extraout_var_13;
  uVar20 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  fVar28 = (fVar32 * (float)uVar12 + fVar51 * fVar30 * (float)uVar56 +
           fVar51 * (float)uVar50 * (float)uVar57) - (float)uVar49 * (float)uVar59;
  fVar29 = (fVar21 * fVar31 + fVar53 * fVar45 * (float)((ulong)uVar56 >> 0x20) +
           fVar53 * fVar52 * (float)((ulong)uVar57 >> 0x20)) -
           fVar48 * (float)((ulong)uVar59 >> 0x20);
  fVar30 = (fVar22 * (float)uVar12 + fVar54 * (float)uVar49 * (float)uVar58 +
           fVar54 * fVar30 * (float)uVar19) - (float)uVar50 * (float)uVar60;
  fVar31 = (fVar23 * fVar31 + fVar55 * fVar48 * (float)((ulong)uVar58 >> 0x20) +
           fVar55 * fVar45 * (float)((ulong)uVar19 >> 0x20)) -
           fVar52 * (float)((ulong)uVar60 >> 0x20);
  fVar21 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  auVar6._4_4_ = fVar29;
  auVar6._0_4_ = fVar28;
  auVar6._8_4_ = fVar30;
  auVar6._12_4_ = fVar31;
  uVar50 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
  auVar7._4_4_ = fVar29;
  auVar7._0_4_ = fVar28;
  auVar7._8_4_ = fVar30;
  auVar7._12_4_ = fVar31;
  uVar58 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5120);
  fVar22 = (float)((ulong)uVar20 >> 0x20);
  auVar5[1] = extraout_var;
  auVar5[0] = extraout_b0;
  auVar5[2] = extraout_var_00;
  auVar5[3] = extraout_var_01;
  auVar5[4] = extraout_var_02;
  auVar5[5] = extraout_var_03;
  auVar5[6] = extraout_var_04;
  auVar5[7] = extraout_var_05;
  auVar5[8] = extraout_var_06;
  auVar5[9] = extraout_var_07;
  auVar5[10] = extraout_var_08;
  auVar5[0xb] = extraout_var_09;
  auVar5[0xc] = extraout_var_10;
  auVar5[0xd] = extraout_var_11;
  auVar5[0xe] = extraout_var_12;
  auVar5[0xf] = extraout_var_13;
  uVar57 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
  fVar45 = (float)((ulong)uVar57 >> 0x20);
  fVar32 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  auVar8._4_4_ = fVar29;
  auVar8._0_4_ = fVar28;
  auVar8._8_4_ = fVar30;
  auVar8._12_4_ = fVar31;
  uVar12 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  auVar9._4_4_ = fVar29;
  auVar9._0_4_ = fVar28;
  auVar9._8_4_ = fVar30;
  auVar9._12_4_ = fVar31;
  uVar49 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd5418);
  auVar10._4_4_ = fVar29;
  auVar10._0_4_ = fVar28;
  auVar10._8_4_ = fVar30;
  auVar10._12_4_ = fVar31;
  uVar56 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5270);
  auVar11._4_4_ = fVar29;
  auVar11._0_4_ = fVar28;
  auVar11._8_4_ = fVar28;
  auVar11._12_4_ = fVar29;
  uVar19 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd50b0);
  fVar23 = ((float)uVar20 * fVar28 + fVar51 * fVar21 * (float)uVar50 +
           fVar51 * (float)uVar57 * (float)uVar12) - (float)uVar27 * (float)uVar49;
  fVar21 = (fVar22 * fVar29 +
            fVar53 * (float)(CONCAT17(extraout_var_05,
                                      CONCAT16(extraout_var_04,
                                               CONCAT15(extraout_var_03,
                                                        CONCAT14(extraout_var_02,fVar21)))) >> 0x20)
                     * (float)((ulong)uVar50 >> 0x20) +
           fVar53 * fVar45 * (float)((ulong)uVar12 >> 0x20)) -
           fVar46 * (float)((ulong)uVar49 >> 0x20);
  fVar28 = ((float)uVar20 * fVar30 + fVar54 * (float)uVar27 * (float)uVar58 +
           fVar54 * fVar32 * (float)uVar19) - (float)uVar57 * (float)uVar56;
  fVar22 = (fVar22 * fVar31 + fVar55 * fVar46 * (float)((ulong)uVar58 >> 0x20) +
           fVar55 * (float)(CONCAT17(extraout_var_05,
                                     CONCAT16(extraout_var_04,
                                              CONCAT15(extraout_var_03,
                                                       CONCAT14(extraout_var_02,fVar32)))) >> 0x20)
                    * (float)((ulong)uVar19 >> 0x20)) - fVar45 * (float)((ulong)uVar56 >> 0x20);
  fVar32 = local_30._4_4_ +
           (float)CONCAT13((byte)((uint)fVar21 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                           CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                    CONCAT11((byte)((uint)fVar21 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                             SUB41(fVar21,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)))
                          );
  fVar21 = local_30._12_4_ +
           (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                           CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                    CONCAT11((byte)((uint)fVar22 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                             SUB41(fVar22,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)))
                          );
  uStack_48 = CONCAT17((char)((uint)fVar21 >> 0x18),
                       CONCAT16((char)((uint)fVar21 >> 0x10),
                                CONCAT15((char)((uint)fVar21 >> 8),
                                         CONCAT14(SUB41(fVar21,0),
                                                  local_30._8_4_ +
                                                  (float)CONCAT13((byte)((uint)fVar28 >> 0x18) &
                                                                  (byte)((ulong)DAT_01d4ab58 >> 0x18
                                                                        ),CONCAT12((byte)((uint)
                                                  fVar28 >> 0x10) &
                                                  (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar28 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar28,0) & (byte)DAT_01d4ab58)))))
                               ));
  local_50 = CONCAT17((char)((uint)fVar32 >> 0x18),
                      CONCAT16((char)((uint)fVar32 >> 0x10),
                               CONCAT15((char)((uint)fVar32 >> 8),
                                        CONCAT14(SUB41(fVar32,0),
                                                 local_30._0_4_ +
                                                 (float)CONCAT13((byte)((uint)fVar23 >> 0x18) &
                                                                 (byte)((ulong)DAT_01d4ab50 >> 0x18)
                                                                 ,CONCAT12((byte)((uint)fVar23 >>
                                                                                 0x10) &
                                                                           (byte)((ulong)
                                                  DAT_01d4ab50 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar23 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 8),
                                                           SUB41(fVar23,0) & (byte)DAT_01d4ab50)))))
                              ));
  (**(code **)(param_1 + 0x90))(param_1 + 0xb0,&local_50);
  (**(code **)(param_1 + 0x110))(param_1 + 0x130,local_40);
  if (*(int *)(param_1 + 0x1b4) <= *(int *)(param_1 + 0x1b0)) {
    FUN_015f5e80(param_1);
  }
  return;
}


