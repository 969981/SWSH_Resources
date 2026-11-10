/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f37040; name: FUN_00f37040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f37040(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined1 auVar28 [16];
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  int iVar34;
  long *plVar35;
  undefined1 extraout_b0;
  byte bVar36;
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
  ulong uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
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
  undefined1 uVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined8 uVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined1 auStack_60 [24];
  long local_48;
  
  *(undefined1 *)(param_1 + 0x43) = 1;
  if ((param_1[0x6c] == 0) || (lVar33 = *(long *)(param_1[0x6c] + 0x80), lVar33 == 0)) {
    *(undefined1 *)(param_1 + 0xad) = 1;
  }
  else {
    plVar32 = (long *)(lVar33 + 0x48);
    (**(code **)(*plVar32 + 0x10))(plVar32);
    piVar1 = (int *)(lVar33 + 0x54);
    if (*piVar1 != 0) {
      iVar2 = *piVar1;
      while (iVar34 = iVar2, iVar2 != 0) {
        while( true ) {
          plVar35 = *(long **)(lVar33 + 0x58);
          lVar31 = FUN_006cb2c0();
          while( true ) {
            if (plVar35 == (long *)0x0) goto LAB_00f37118;
            if (plVar35 == (long *)lVar31) break;
            plVar35 = (long *)*plVar35;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar34) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar34 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar33 = *(long *)(lVar33 + 0x60);
            if (lVar33 == 0) goto LAB_00f37118;
            *(undefined1 *)(lVar33 + 0x10) = 1;
            (**(code **)(*(long *)(lVar33 + -8) + 0x18))();
            goto LAB_00f37124;
          }
          iVar34 = iVar2;
          if (iVar2 == 0) goto LAB_00f37118;
        }
        ClearExclusiveLocal();
      }
LAB_00f37118:
      DAT_00000060 = 1;
    }
LAB_00f37124:
    *(undefined1 *)(param_1 + 0xad) = 1;
    (**(code **)(*plVar32 + 0x18))(plVar32);
  }
  FUN_006cf0a0(auStack_60,&DAT_02663ce0);
  (**(code **)(*param_1 + 0x1b0))(param_1,auStack_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar31 = param_1[0xaf];
  lVar33 = param_1[0xae];
  uVar10 = *(undefined4 *)((long)param_1 + 0xb4);
  fVar8 = sinf(*(float *)((long)param_1 + 0x5a4));
  fVar8 = fVar8 * *(float *)((long)param_1 + 0x59c);
  fVar9 = cosf(*(float *)((long)param_1 + 0x5a4));
  fVar9 = fVar9 * *(float *)(param_1 + 0xb3);
  uVar37 = CONCAT44(0,fVar9);
  FUN_00a92cd0((char)*(undefined4 *)((long)param_1 + 0x5ac),0,0);
  auVar26._8_4_ = fVar8;
  auVar26._0_8_ = uVar37;
  auVar25._8_4_ = fVar8;
  auVar25._0_8_ = uVar37;
  auVar24._8_4_ = fVar8;
  auVar24._0_8_ = uVar37;
  auVar24._12_4_ = 0;
  uVar38 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd4f90);
  fVar57 = (float)((ulong)uVar38 >> 0x20);
  auVar25._12_4_ = 0;
  uVar61 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
  fVar56 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) *
           (float)_DAT_01d4ae80;
  fVar58 = (float)CONCAT13(extraout_var_05,
                           CONCAT12(extraout_var_04,CONCAT11(extraout_var_03,extraout_var_02))) *
           (float)((ulong)_DAT_01d4ae80 >> 0x20);
  uVar44 = SUB41(fVar58,0);
  uVar45 = (undefined1)((uint)fVar58 >> 8);
  uVar46 = (undefined1)((uint)fVar58 >> 0x10);
  uVar47 = (undefined1)((uint)fVar58 >> 0x18);
  fVar59 = (float)CONCAT13(extraout_var_09,
                           CONCAT12(extraout_var_08,CONCAT11(extraout_var_07,extraout_var_06))) *
           (float)_UNK_01d4ae88;
  uVar48 = SUB41(fVar59,0);
  uVar49 = (undefined1)((uint)fVar59 >> 8);
  uVar50 = (undefined1)((uint)fVar59 >> 0x10);
  uVar51 = (undefined1)((uint)fVar59 >> 0x18);
  fVar60 = (float)CONCAT13(extraout_var_13,
                           CONCAT12(extraout_var_12,CONCAT11(extraout_var_11,extraout_var_10))) *
           (float)((ulong)_UNK_01d4ae88 >> 0x20);
  uVar52 = SUB41(fVar60,0);
  uVar53 = (undefined1)((uint)fVar60 >> 8);
  uVar54 = (undefined1)((uint)fVar60 >> 0x10);
  uVar55 = (undefined1)((uint)fVar60 >> 0x18);
  auVar26._12_4_ = 0;
  uVar39 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd5418);
  fVar62 = (float)((ulong)uVar39 >> 0x20);
  auVar11[4] = uVar44;
  auVar11._0_4_ = fVar56;
  auVar11[5] = uVar45;
  auVar11[6] = uVar46;
  auVar11[7] = uVar47;
  auVar11[8] = uVar48;
  auVar11[9] = uVar49;
  auVar11[10] = uVar50;
  auVar11[0xb] = uVar51;
  auVar11[0xc] = uVar52;
  auVar11[0xd] = uVar53;
  auVar11[0xe] = uVar54;
  auVar11[0xf] = uVar55;
  uVar40 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  auVar12[4] = uVar44;
  auVar12._0_4_ = fVar56;
  auVar12[5] = uVar45;
  auVar12[6] = uVar46;
  auVar12[7] = uVar47;
  auVar12[8] = uVar48;
  auVar12[9] = uVar49;
  auVar12[10] = uVar50;
  auVar12[0xb] = uVar51;
  auVar12[0xc] = uVar52;
  auVar12[0xd] = uVar53;
  auVar12[0xe] = uVar54;
  auVar12[0xf] = uVar55;
  uVar70 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd5120);
  auVar13[4] = uVar44;
  auVar13._0_4_ = fVar56;
  auVar13[5] = uVar45;
  auVar13[6] = uVar46;
  auVar13[7] = uVar47;
  auVar13[8] = uVar48;
  auVar13[9] = uVar49;
  auVar13[10] = uVar50;
  auVar13[0xb] = uVar51;
  auVar13[0xc] = uVar52;
  auVar13[0xd] = uVar53;
  auVar13[0xe] = uVar54;
  auVar13[0xf] = uVar55;
  uVar71 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
  fVar43 = (float)((ulong)uVar61 >> 0x20);
  auVar28._4_4_ =
       (int)(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,fVar56)))) >> 0x20);
  auVar28._0_4_ = fVar56;
  auVar28._8_4_ = fVar56;
  auVar28._12_4_ =
       (int)(CONCAT17(uVar47,CONCAT16(uVar46,CONCAT15(uVar45,CONCAT14(uVar44,fVar56)))) >> 0x20);
  uVar41 = a64_TBL(ZEXT816(0),auVar28,DAT_01cd50b0);
  fVar68 = (float)_UNK_01d4ae98;
  fVar69 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar66 = (float)_DAT_01d4ae90;
  fVar67 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  auVar14[4] = uVar44;
  auVar14._0_4_ = fVar56;
  auVar14[5] = uVar45;
  auVar14[6] = uVar46;
  auVar14[7] = uVar47;
  auVar14[8] = uVar48;
  auVar14[9] = uVar49;
  auVar14[10] = uVar50;
  auVar14[0xb] = uVar51;
  auVar14[0xc] = uVar52;
  auVar14[0xd] = uVar53;
  auVar14[0xe] = uVar54;
  auVar14[0xf] = uVar55;
  uVar72 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd5418);
  auVar15[4] = uVar44;
  auVar15._0_4_ = fVar56;
  auVar15[5] = uVar45;
  auVar15[6] = uVar46;
  auVar15[7] = uVar47;
  auVar15[8] = uVar48;
  auVar15[9] = uVar49;
  auVar15[10] = uVar50;
  auVar15[0xb] = uVar51;
  auVar15[0xc] = uVar52;
  auVar15[0xd] = uVar53;
  auVar15[0xe] = uVar54;
  auVar15[0xf] = uVar55;
  uVar16 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5270);
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
  uVar27 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
  fVar63 = (float)((ulong)uVar27 >> 0x20);
  auVar6[1] = extraout_var;
  auVar6[0] = extraout_b0;
  auVar6[2] = extraout_var_00;
  auVar6[3] = extraout_var_01;
  auVar6[4] = extraout_var_02;
  auVar6[5] = extraout_var_03;
  auVar6[6] = extraout_var_04;
  auVar6[7] = extraout_var_05;
  auVar6[8] = extraout_var_06;
  auVar6[9] = extraout_var_07;
  auVar6[10] = extraout_var_08;
  auVar6[0xb] = extraout_var_09;
  auVar6[0xc] = extraout_var_10;
  auVar6[0xd] = extraout_var_11;
  auVar6[0xe] = extraout_var_12;
  auVar6[0xf] = extraout_var_13;
  uVar65 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd4f90);
  fVar17 = (float)CONCAT13(extraout_var_01,
                           CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  auVar7[1] = extraout_var;
  auVar7[0] = extraout_b0;
  auVar7[2] = extraout_var_00;
  auVar7[3] = extraout_var_01;
  auVar7[4] = extraout_var_02;
  auVar7[5] = extraout_var_03;
  auVar7[6] = extraout_var_04;
  auVar7[7] = extraout_var_05;
  auVar7[8] = extraout_var_06;
  auVar7[9] = extraout_var_07;
  auVar7[10] = extraout_var_08;
  auVar7[0xb] = extraout_var_09;
  auVar7[0xc] = extraout_var_10;
  auVar7[0xd] = extraout_var_11;
  auVar7[0xe] = extraout_var_12;
  auVar7[0xf] = extraout_var_13;
  uVar42 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  fVar64 = (float)((ulong)uVar42 >> 0x20);
  fVar8 = (float)CONCAT13(extraout_var_01,
                          CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0)));
  fVar56 = (fVar56 * (float)uVar38 + fVar66 * fVar9 * (float)uVar40 +
           fVar66 * (float)uVar39 * (float)uVar71) - (float)uVar61 * (float)uVar72;
  fVar58 = (fVar58 * fVar57 + fVar67 * (float)((ulong)uVar40 >> 0x20) * 0.0 +
           fVar67 * fVar62 * (float)((ulong)uVar71 >> 0x20)) -
           fVar43 * (float)((ulong)uVar72 >> 0x20);
  fVar59 = (fVar59 * (float)uVar38 + fVar68 * (float)uVar61 * (float)uVar70 +
           fVar68 * fVar9 * (float)uVar41) - (float)uVar39 * (float)uVar16;
  fVar60 = (fVar60 * fVar57 + fVar69 * fVar43 * (float)((ulong)uVar70 >> 0x20) +
           fVar69 * (float)((ulong)uVar41 >> 0x20) * 0.0) - fVar62 * (float)((ulong)uVar16 >> 0x20);
  fVar43 = (float)((ulong)uVar65 >> 0x20);
  auVar18._4_4_ = fVar58;
  auVar18._0_4_ = fVar56;
  auVar18._8_4_ = fVar59;
  auVar18._12_4_ = fVar60;
  uVar38 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd4f90);
  auVar19._4_4_ = fVar58;
  auVar19._0_4_ = fVar56;
  auVar19._8_4_ = fVar59;
  auVar19._12_4_ = fVar60;
  uVar41 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5120);
  auVar20._4_4_ = fVar58;
  auVar20._0_4_ = fVar56;
  auVar20._8_4_ = fVar59;
  auVar20._12_4_ = fVar60;
  uVar39 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50f8);
  auVar21._4_4_ = fVar58;
  auVar21._0_4_ = fVar56;
  auVar21._8_4_ = fVar59;
  auVar21._12_4_ = fVar60;
  uVar40 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5418);
  auVar22._4_4_ = fVar58;
  auVar22._0_4_ = fVar56;
  auVar22._8_4_ = fVar59;
  auVar22._12_4_ = fVar60;
  uVar61 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd5270);
  auVar23._4_4_ = fVar58;
  auVar23._0_4_ = fVar56;
  auVar23._8_4_ = fVar56;
  auVar23._12_4_ = fVar58;
  uVar16 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd50b0);
  fVar9 = ((float)uVar65 * fVar56 + fVar66 * fVar17 * (float)uVar38 +
          fVar66 * (float)uVar42 * (float)uVar39) - (float)uVar27 * (float)uVar40;
  fVar17 = (fVar43 * fVar58 +
            fVar67 * (float)(CONCAT17(extraout_var_05,
                                      CONCAT16(extraout_var_04,
                                               CONCAT15(extraout_var_03,
                                                        CONCAT14(extraout_var_02,fVar17)))) >> 0x20)
                     * (float)((ulong)uVar38 >> 0x20) +
           fVar67 * fVar64 * (float)((ulong)uVar39 >> 0x20)) -
           fVar63 * (float)((ulong)uVar40 >> 0x20);
  fVar56 = ((float)uVar65 * fVar59 + fVar68 * (float)uVar27 * (float)uVar41 +
           fVar68 * fVar8 * (float)uVar16) - (float)uVar42 * (float)uVar61;
  fVar58 = (fVar43 * fVar60 + fVar69 * fVar63 * (float)((ulong)uVar41 >> 0x20) +
           fVar69 * (float)(CONCAT17(extraout_var_05,
                                     CONCAT16(extraout_var_04,
                                              CONCAT15(extraout_var_03,
                                                       CONCAT14(extraout_var_02,fVar8)))) >> 0x20) *
                    (float)((ulong)uVar16 >> 0x20)) - fVar64 * (float)((ulong)uVar61 >> 0x20);
  *(undefined1 *)(param_1 + 0x18) = 1;
  bVar36 = (byte)DAT_01d4ab50;
  uVar37 = (ulong)DAT_01d4ab50 >> 8;
  uVar29 = (ulong)DAT_01d4ab50 >> 0x10;
  uVar30 = (ulong)DAT_01d4ab50 >> 0x18;
  fVar8 = (float)(CONCAT17((char)((uint)uVar10 >> 0x18),
                           CONCAT16((char)((uint)uVar10 >> 0x10),
                                    CONCAT15((char)((uint)uVar10 >> 8),
                                             CONCAT14((char)uVar10,(float)lVar33)))) >> 0x20) +
          (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                          CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                   (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                   CONCAT11((byte)((uint)fVar17 >> 8) &
                                            (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                            SUB41(fVar17,0) & (byte)((ulong)DAT_01d4ab50 >> 0x20))))
  ;
  fVar17 = (float)((ulong)lVar31 >> 0x20) +
           (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                           CONCAT12((byte)((uint)fVar58 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                    CONCAT11((byte)((uint)fVar58 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                             SUB41(fVar58,0) & (byte)((ulong)DAT_01d4ab58 >> 0x20)))
                          );
  param_1[0x17] =
       CONCAT17((char)((uint)fVar17 >> 0x18),
                CONCAT16((char)((uint)fVar17 >> 0x10),
                         CONCAT15((char)((uint)fVar17 >> 8),
                                  CONCAT14(SUB41(fVar17,0),
                                           (float)lVar31 +
                                           (float)CONCAT13((byte)((uint)fVar56 >> 0x18) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar56 >> 0x10) &
                                                                    (byte)((ulong)DAT_01d4ab58 >>
                                                                          0x10),
                                                                    CONCAT11((byte)((uint)fVar56 >>
                                                                                   8) &
                                                                             (byte)((ulong)
                                                  DAT_01d4ab58 >> 8),
                                                  SUB41(fVar56,0) & (byte)DAT_01d4ab58)))))));
  param_1[0x16] =
       CONCAT17((char)((uint)fVar8 >> 0x18),
                CONCAT16((char)((uint)fVar8 >> 0x10),
                         CONCAT15((char)((uint)fVar8 >> 8),
                                  CONCAT14(SUB41(fVar8,0),
                                           (float)lVar33 +
                                           (float)CONCAT13((byte)((uint)fVar9 >> 0x18) &
                                                           (byte)uVar30,
                                                           CONCAT12((byte)((uint)fVar9 >> 0x10) &
                                                                    (byte)uVar29,
                                                                    CONCAT11((byte)((uint)fVar9 >> 8
                                                                                   ) & (byte)uVar37,
                                                                             SUB41(fVar9,0) & bVar36
                                                                            )))))));
  *(float *)((long)param_1 + 0x5a4) = *(float *)(param_1 + 0xb5) + *(float *)((long)param_1 + 0x5a4)
  ;
  return;
}


