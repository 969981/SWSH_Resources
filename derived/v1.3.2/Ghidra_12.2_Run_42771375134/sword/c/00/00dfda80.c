/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dfda80; name: FUN_00dfda80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dfda80(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined *puVar27;
  int iVar28;
  undefined8 uVar29;
  ulong uVar30;
  long lVar31;
  undefined *puVar32;
  int iVar33;
  long *plVar34;
  long lVar35;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
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
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  undefined1 extraout_var_29;
  undefined1 extraout_var_30;
  undefined1 extraout_var_31;
  undefined1 extraout_var_32;
  undefined1 extraout_var_33;
  undefined1 extraout_var_34;
  undefined1 extraout_var_35;
  undefined1 extraout_var_36;
  undefined1 extraout_var_37;
  undefined1 extraout_var_38;
  undefined1 extraout_var_39;
  undefined1 extraout_var_40;
  undefined1 extraout_var_41;
  undefined1 extraout_var_42;
  undefined1 extraout_var_43;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  long local_60;
  float fStack_58;
  undefined4 uStack_54;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  long local_38;
  long lStack_30;
  long local_28;
  long *local_18;
  
  FUN_00a658b0(&local_18,param_1 + 0x50);
  puVar27 = PTR_DAT_0271ee60;
  lVar31 = *(long *)(param_1 + 0x60);
  if ((lVar31 == 0) || (*(int *)(lVar31 + 0x54) == 0)) {
LAB_00dfdb8c:
    lVar35 = 0;
  }
  else {
    piVar1 = (int *)(lVar31 + 0x54);
    puVar32 = PTR_DAT_0271ee68;
    iVar33 = *(int *)(lVar31 + 0x54);
    do {
      while( true ) {
        plVar34 = *(long **)(lVar31 + 0x58);
        if ((*puVar27 & 1) == 0) {
          iVar28 = __cxa_guard_acquire(puVar27);
          puVar32 = PTR_DAT_0271ee68;
          if (iVar28 != 0) {
            uVar29 = FUN_00a89c30();
            *(undefined8 *)PTR_DAT_0271ee68 = uVar29;
            __cxa_guard_release(puVar27);
            puVar32 = PTR_DAT_0271ee68;
          }
        }
        while( true ) {
          if (plVar34 == (long *)0x0) goto LAB_00dfdb8c;
          if (plVar34 == (long *)puVar32) break;
          plVar34 = (long *)*plVar34;
        }
        iVar28 = *piVar1;
        if (iVar28 != iVar33) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar33 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar35 = 0;
          if (*(long *)(lVar31 + 0x60) != 0) {
            lVar35 = *(long *)(lVar31 + 0x60) + -0x50;
          }
          goto LAB_00dfdb90;
        }
        lVar35 = 0;
        iVar33 = iVar28;
        if (iVar28 == 0) goto LAB_00dfdb90;
      }
      ClearExclusiveLocal();
      lVar35 = 0;
      iVar33 = iVar28;
    } while (iVar28 != 0);
  }
LAB_00dfdb90:
  lStack_48 = local_18[0xc3];
  local_50 = local_18[0xc2];
  local_60 = local_18[0xc0];
  fStack_58 = (float)local_18[0xc1];
  uStack_54 = (undefined4)((ulong)local_18[0xc1] >> 0x20);
  local_28 = local_18[199];
  local_38 = local_18[0xc5];
  local_40 = local_18[0xc4];
  lStack_30 = local_18[0xc6];
  if (*(int *)(local_18[0x98] + 0x54) == 3) {
    uVar30 = FUN_00e8ff40();
    if ((uVar30 & 1) != 0) {
      (**(code **)(*local_18 + 0x178))();
      fVar38 = (float)((ulong)local_50 >> 0x20) +
               (float)CONCAT13(extraout_var_17,
                               CONCAT12(extraout_var_14,CONCAT11(extraout_var_11,extraout_var_08)));
      fVar10 = (float)((ulong)lStack_48 >> 0x20) +
               (float)CONCAT13(extraout_var_41,
                               CONCAT12(extraout_var_38,CONCAT11(extraout_var_35,extraout_var_32)));
      local_50 = CONCAT17((char)((uint)fVar38 >> 0x18),
                          CONCAT16((char)((uint)fVar38 >> 0x10),
                                   CONCAT15((char)((uint)fVar38 >> 8),
                                            CONCAT14(SUB41(fVar38,0),
                                                     (float)local_50 +
                                                     (float)CONCAT13(extraout_var_05,
                                                                     CONCAT12(extraout_var_02,
                                                                              CONCAT11(extraout_var,
                                                                                       extraout_b0))
                                                                    )))));
      lStack_48 = CONCAT17((char)((uint)fVar10 >> 0x18),
                           CONCAT16((char)((uint)fVar10 >> 0x10),
                                    CONCAT15((char)((uint)fVar10 >> 8),
                                             CONCAT14(SUB41(fVar10,0),
                                                      (float)lStack_48 +
                                                      (float)CONCAT13(extraout_var_29,
                                                                      CONCAT12(extraout_var_26,
                                                                               CONCAT11(
                                                  extraout_var_23,extraout_var_20)))))));
    }
  }
  else {
    (**(code **)(*local_18 + 0x178))();
    fVar8 = (float)local_50 +
            (float)CONCAT13(extraout_var_06,
                            CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00)));
    fVar38 = (float)((ulong)local_50 >> 0x20) +
             (float)CONCAT13(extraout_var_18,
                             CONCAT12(extraout_var_15,CONCAT11(extraout_var_12,extraout_var_09)));
    fVar9 = (float)lStack_48 +
            (float)CONCAT13(extraout_var_30,
                            CONCAT12(extraout_var_27,CONCAT11(extraout_var_24,extraout_var_21)));
    fVar10 = (float)((ulong)lStack_48 >> 0x20) +
             (float)CONCAT13(extraout_var_42,
                             CONCAT12(extraout_var_39,CONCAT11(extraout_var_36,extraout_var_33)));
    lVar7 = CONCAT17((char)((uint)fVar10 >> 0x18),
                     CONCAT16((char)((uint)fVar10 >> 0x10),
                              CONCAT15((char)((uint)fVar10 >> 8),CONCAT14(SUB41(fVar10,0),fVar9))));
    lVar31 = CONCAT17((char)((uint)fVar38 >> 0x18),
                      CONCAT16((char)((uint)fVar38 >> 0x10),
                               CONCAT15((char)((uint)fVar38 >> 8),CONCAT14(SUB41(fVar38,0),fVar8))))
    ;
    FUN_00a92cd0((char)local_40,local_40._4_4_,0);
    auVar13._8_4_ = fStack_58;
    auVar13._0_8_ = local_60;
    auVar12._8_4_ = fStack_58;
    auVar12._0_8_ = local_60;
    auVar11._8_4_ = fStack_58;
    auVar11._0_8_ = local_60;
    fVar38 = (float)((ulong)local_60 >> 0x20);
    auVar11._12_4_ = uStack_54;
    uVar36 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
    fVar49 = (float)((ulong)uVar36 >> 0x20);
    fVar40 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01))) *
             (float)_DAT_01d4ae80;
    fVar42 = (float)CONCAT13(extraout_var_19,
                             CONCAT12(extraout_var_16,CONCAT11(extraout_var_13,extraout_var_10))) *
             (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar44 = (float)CONCAT13(extraout_var_31,
                             CONCAT12(extraout_var_28,CONCAT11(extraout_var_25,extraout_var_22))) *
             (float)_UNK_01d4ae88;
    fVar46 = (float)CONCAT13(extraout_var_43,
                             CONCAT12(extraout_var_40,CONCAT11(extraout_var_37,extraout_var_34))) *
             (float)((ulong)_UNK_01d4ae88 >> 0x20);
    auVar12._12_4_ = uStack_54;
    uVar52 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5418);
    auVar13._12_4_ = uStack_54;
    uVar37 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
    fVar50 = (float)((ulong)uVar37 >> 0x20);
    auVar15._4_4_ = fVar42;
    auVar15._0_4_ = fVar40;
    auVar15._8_4_ = fVar44;
    auVar15._12_4_ = fVar46;
    uVar54 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
    auVar16._4_4_ = fVar42;
    auVar16._0_4_ = fVar40;
    auVar16._8_4_ = fVar44;
    auVar16._12_4_ = fVar46;
    uVar55 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5120);
    auVar17._4_4_ = fVar42;
    auVar17._0_4_ = fVar40;
    auVar17._8_4_ = fVar44;
    auVar17._12_4_ = fVar46;
    uVar57 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18._4_4_ = fVar42;
    auVar18._0_4_ = fVar40;
    auVar18._8_4_ = fVar44;
    auVar18._12_4_ = fVar46;
    uVar56 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
    fVar51 = (float)((ulong)uVar52 >> 0x20);
    auVar19._4_4_ = fVar42;
    auVar19._0_4_ = fVar40;
    auVar19._8_4_ = fVar44;
    auVar19._12_4_ = fVar46;
    uVar53 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5418);
    auVar20._4_4_ = fVar42;
    auVar20._0_4_ = fVar40;
    auVar20._8_4_ = fVar40;
    auVar20._12_4_ = fVar42;
    uVar29 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
    fVar10 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
    local_40 = 0;
    fVar45 = (float)_UNK_01d4ae98;
    fVar47 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar41 = (float)_DAT_01d4ae90;
    fVar43 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    auVar4[1] = extraout_var_01;
    auVar4[0] = extraout_b0_01;
    auVar4[2] = extraout_var_04;
    auVar4[3] = extraout_var_07;
    auVar4[4] = extraout_var_10;
    auVar4[5] = extraout_var_13;
    auVar4[6] = extraout_var_16;
    auVar4[7] = extraout_var_19;
    auVar4[8] = extraout_var_22;
    auVar4[9] = extraout_var_25;
    auVar4[10] = extraout_var_28;
    auVar4[0xb] = extraout_var_31;
    auVar4[0xc] = extraout_var_34;
    auVar4[0xd] = extraout_var_37;
    auVar4[0xe] = extraout_var_40;
    auVar4[0xf] = extraout_var_43;
    uVar14 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd5418);
    fVar39 = (float)((ulong)uVar14 >> 0x20);
    fVar48 = (fVar40 * (float)uVar36 + fVar41 * (float)local_60 * (float)uVar54 +
             fVar41 * (float)uVar52 * (float)uVar57) - (float)uVar37 * (float)uVar53;
    fVar42 = (fVar42 * fVar49 + fVar43 * fVar38 * (float)((ulong)uVar54 >> 0x20) +
             fVar43 * fVar51 * (float)((ulong)uVar57 >> 0x20)) -
             fVar50 * (float)((ulong)uVar53 >> 0x20);
    fVar44 = (fVar44 * (float)uVar36 + fVar45 * (float)uVar37 * (float)uVar55 +
             fVar45 * (float)local_60 * (float)uVar29) - (float)uVar52 * (float)uVar56;
    fVar46 = (fVar46 * fVar49 + fVar47 * fVar50 * (float)((ulong)uVar55 >> 0x20) +
             fVar47 * fVar38 * (float)((ulong)uVar29 >> 0x20)) -
             fVar51 * (float)((ulong)uVar56 >> 0x20);
    auVar5[1] = extraout_var_01;
    auVar5[0] = extraout_b0_01;
    auVar5[2] = extraout_var_04;
    auVar5[3] = extraout_var_07;
    auVar5[4] = extraout_var_10;
    auVar5[5] = extraout_var_13;
    auVar5[6] = extraout_var_16;
    auVar5[7] = extraout_var_19;
    auVar5[8] = extraout_var_22;
    auVar5[9] = extraout_var_25;
    auVar5[10] = extraout_var_28;
    auVar5[0xb] = extraout_var_31;
    auVar5[0xc] = extraout_var_34;
    auVar5[0xd] = extraout_var_37;
    auVar5[0xe] = extraout_var_40;
    auVar5[0xf] = extraout_var_43;
    uVar56 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
    auVar21._4_4_ = fVar42;
    auVar21._0_4_ = fVar48;
    auVar21._8_4_ = fVar44;
    auVar21._12_4_ = fVar46;
    uVar52 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    auVar22._4_4_ = fVar42;
    auVar22._0_4_ = fVar48;
    auVar22._8_4_ = fVar44;
    auVar22._12_4_ = fVar46;
    uVar37 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
    auVar23._4_4_ = fVar42;
    auVar23._0_4_ = fVar48;
    auVar23._8_4_ = fVar44;
    auVar23._12_4_ = fVar46;
    uVar55 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    fVar38 = (float)CONCAT13(extraout_var_07,
                             CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
    auVar6[1] = extraout_var_01;
    auVar6[0] = extraout_b0_01;
    auVar6[2] = extraout_var_04;
    auVar6[3] = extraout_var_07;
    auVar6[4] = extraout_var_10;
    auVar6[5] = extraout_var_13;
    auVar6[6] = extraout_var_16;
    auVar6[7] = extraout_var_19;
    auVar6[8] = extraout_var_22;
    auVar6[9] = extraout_var_25;
    auVar6[10] = extraout_var_28;
    auVar6[0xb] = extraout_var_31;
    auVar6[0xc] = extraout_var_34;
    auVar6[0xd] = extraout_var_37;
    auVar6[0xe] = extraout_var_40;
    auVar6[0xf] = extraout_var_43;
    uVar29 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
    auVar24._4_4_ = fVar42;
    auVar24._0_4_ = fVar48;
    auVar24._8_4_ = fVar44;
    auVar24._12_4_ = fVar46;
    uVar36 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
    auVar26._4_4_ = fVar42;
    auVar26._0_4_ = fVar48;
    auVar26._8_4_ = fVar48;
    auVar26._12_4_ = fVar42;
    uVar53 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
    fVar40 = (float)((ulong)uVar29 >> 0x20);
    fVar49 = (float)((ulong)uVar56 >> 0x20);
    auVar25._4_4_ = fVar42;
    auVar25._0_4_ = fVar48;
    auVar25._8_4_ = fVar44;
    auVar25._12_4_ = fVar46;
    uVar54 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5270);
    fVar41 = ((float)uVar29 * fVar48 + fVar41 * fVar10 * (float)uVar36 +
             fVar41 * (float)uVar14 * (float)uVar37) - (float)uVar56 * (float)uVar55;
    fVar10 = (fVar40 * fVar42 +
              fVar43 * (float)(CONCAT17(extraout_var_19,
                                        CONCAT16(extraout_var_16,
                                                 CONCAT15(extraout_var_13,
                                                          CONCAT14(extraout_var_10,fVar10)))) >>
                              0x20) * (float)((ulong)uVar36 >> 0x20) +
             fVar43 * fVar39 * (float)((ulong)uVar37 >> 0x20)) -
             fVar49 * (float)((ulong)uVar55 >> 0x20);
    fVar42 = ((float)uVar29 * fVar44 + fVar45 * (float)uVar56 * (float)uVar52 +
             fVar45 * fVar38 * (float)uVar53) - (float)uVar14 * (float)uVar54;
    fVar40 = (fVar40 * fVar46 + fVar47 * fVar49 * (float)((ulong)uVar52 >> 0x20) +
             fVar47 * (float)(CONCAT17(extraout_var_19,
                                       CONCAT16(extraout_var_16,
                                                CONCAT15(extraout_var_13,
                                                         CONCAT14(extraout_var_10,fVar38)))) >> 0x20
                             ) * (float)((ulong)uVar53 >> 0x20)) -
             fVar39 * (float)((ulong)uVar54 >> 0x20);
    fVar38 = (float)((ulong)lVar31 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                             CONCAT12((byte)((uint)fVar10 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                      CONCAT11((byte)((uint)fVar10 >> 8) &
                                               (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                               SUB41(fVar10,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20)
                                              )));
    fStack_58 = fVar9 + (float)CONCAT13((byte)((uint)fVar42 >> 0x18) &
                                        (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                        CONCAT12((byte)((uint)fVar42 >> 0x10) &
                                                 (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar42 >> 8) &
                                                          (byte)((ulong)DAT_01d4ab58 >> 8),
                                                          SUB41(fVar42,0) & (byte)DAT_01d4ab58)));
    fVar10 = (float)((ulong)lVar7 >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                             CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                      (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                      CONCAT11((byte)((uint)fVar40 >> 8) &
                                               (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                               SUB41(fVar40,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)
                                              )));
    uStack_54 = (undefined4)
                (CONCAT17((char)((uint)fVar10 >> 0x18),
                          CONCAT16((char)((uint)fVar10 >> 0x10),
                                   CONCAT15((char)((uint)fVar10 >> 8),
                                            CONCAT14(SUB41(fVar10,0),fStack_58)))) >> 0x20);
    local_60 = CONCAT17((char)((uint)fVar38 >> 0x18),
                        CONCAT16((char)((uint)fVar38 >> 0x10),
                                 CONCAT15((char)((uint)fVar38 >> 8),
                                          CONCAT14(SUB41(fVar38,0),
                                                   fVar8 + (float)CONCAT13((byte)((uint)fVar41 >>
                                                                                 0x18) &
                                                                           (byte)((ulong)
                                                  DAT_01d4ab50 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                                           (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar41 >> 8) &
                                                                    (byte)((ulong)DAT_01d4ab50 >> 8)
                                                                    ,SUB41(fVar41,0) &
                                                                     (byte)DAT_01d4ab50)))))));
    local_50 = lVar31;
    lStack_48 = lVar7;
  }
  FUN_00e652f0(lVar35,&local_60);
  *(undefined4 *)(*(long *)(*(long *)(lVar35 + 0x3a0) + 0xa0) + 200) =
       *(undefined4 *)(*(long *)(local_18[0x74] + 0xa0) + 200);
  *(undefined4 *)(*(long *)(*(long *)(lVar35 + 0x3a0) + 0xa0) + 0xcc) =
       *(undefined4 *)(*(long *)(local_18[0x74] + 0xa0) + 0xcc);
  if (lVar35 != 0) {
    (**(code **)(*(long *)(lVar35 + 0x48) + 0x18))((long *)(lVar35 + 0x48));
  }
  if (local_18 != (long *)0x0) {
    (**(code **)(local_18[9] + 0x18))();
  }
  return;
}


