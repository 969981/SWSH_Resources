/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3c1c0; name: FUN_00e3c1c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e3c1c0(long param_1)

{
  unkbyte9 *pVar1;
  undefined1 (*pauVar2) [12];
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *plVar32;
  long lVar33;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar34;
  float fVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  
  lVar33 = 0x3d4;
  if (*(char *)(param_1 + 0x5e4) != '\0') {
    lVar33 = 0x5e8;
  }
  FUN_00a92cd0(*(undefined4 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + lVar33),
               (char)*(undefined4 *)(param_1 + 0x3d8));
  *(undefined1 *)(param_1 + 0xc0) = 1;
  *(undefined8 *)(param_1 + 0xa8) = extraout_var_01;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(extraout_var,extraout_s0);
  FUN_00e3c4a0(param_1);
  pVar1 = (unkbyte9 *)(param_1 + 0xa0);
  uVar31 = *(undefined8 *)(param_1 + 0xa8);
  uVar36 = (undefined1)((ulong)uVar31 >> 8);
  uVar37 = (undefined1)((ulong)uVar31 >> 0x10);
  uVar38 = (undefined1)((ulong)uVar31 >> 0x18);
  uVar39 = (undefined1)((ulong)uVar31 >> 0x20);
  uVar40 = (undefined1)((ulong)uVar31 >> 0x28);
  uVar41 = (undefined1)((ulong)uVar31 >> 0x30);
  uVar42 = (undefined1)((ulong)uVar31 >> 0x38);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x3b0);
  uVar47 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20);
  fVar34 = (float)*(undefined8 *)*pauVar2;
  fVar45 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar11._12_4_ = uVar47;
  auVar11._0_12_ = *pauVar2;
  uVar43 = a64_TBL(ZEXT816(0),auVar11,DAT_01cd4f90);
  fVar56 = (float)((ulong)uVar43 >> 0x20);
  fVar35 = (float)*(undefined8 *)pVar1;
  fVar48 = fVar35 * (float)_DAT_01d4ae80;
  fVar10 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
  fVar50 = fVar10 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
  fVar52 = (float)uVar31 * (float)_UNK_01d4ae88;
  fVar54 = (float)((ulong)uVar31 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
  auVar12._12_4_ = uVar47;
  auVar12._0_12_ = *pauVar2;
  uVar44 = a64_TBL(ZEXT816(0),auVar12,DAT_01cd50f8);
  fVar57 = (float)((ulong)uVar44 >> 0x20);
  auVar15._4_4_ = fVar50;
  auVar15._0_4_ = fVar48;
  auVar15._8_4_ = fVar52;
  auVar15._12_4_ = fVar54;
  uVar61 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd4f90);
  auVar16._4_4_ = fVar50;
  auVar16._0_4_ = fVar48;
  auVar16._8_4_ = fVar52;
  auVar16._12_4_ = fVar54;
  uVar64 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd50f8);
  auVar13._12_4_ = uVar47;
  auVar13._0_12_ = *pauVar2;
  uVar59 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd5418);
  auVar17._4_4_ = fVar50;
  auVar17._0_4_ = fVar48;
  auVar17._8_4_ = fVar52;
  auVar17._12_4_ = fVar54;
  uVar62 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5120);
  plVar32 = *(long **)(param_1 + 0x3a0);
  fVar58 = (float)((ulong)uVar59 >> 0x20);
  auVar18._4_4_ = fVar50;
  auVar18._0_4_ = fVar48;
  auVar18._8_4_ = fVar52;
  auVar18._12_4_ = fVar54;
  uVar60 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5418);
  auVar19._4_4_ = fVar50;
  auVar19._0_4_ = fVar48;
  auVar19._8_4_ = fVar52;
  auVar19._12_4_ = fVar54;
  uVar63 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd5270);
  auVar20._4_4_ = fVar50;
  auVar20._0_4_ = fVar48;
  auVar20._8_4_ = fVar48;
  auVar20._12_4_ = fVar50;
  uVar31 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd50b0);
  fVar53 = (float)_UNK_01d4ae98;
  fVar55 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar49 = (float)_DAT_01d4ae90;
  fVar51 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  auVar7[9] = uVar36;
  auVar7._0_9_ = *pVar1;
  auVar7[10] = uVar37;
  auVar7[0xb] = uVar38;
  auVar7[0xc] = uVar39;
  auVar7[0xd] = uVar40;
  auVar7[0xe] = uVar41;
  auVar7[0xf] = uVar42;
  uVar14 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  fVar46 = (float)((ulong)uVar14 >> 0x20);
  fVar48 = (fVar48 * (float)uVar43 + fVar49 * fVar34 * (float)uVar61 +
           fVar49 * (float)uVar59 * (float)uVar64) - (float)uVar44 * (float)uVar60;
  fVar50 = (fVar50 * fVar56 + fVar51 * fVar45 * (float)((ulong)uVar61 >> 0x20) +
           fVar51 * fVar58 * (float)((ulong)uVar64 >> 0x20)) -
           fVar57 * (float)((ulong)uVar60 >> 0x20);
  fVar52 = (fVar52 * (float)uVar43 + fVar53 * (float)uVar44 * (float)uVar62 +
           fVar53 * fVar34 * (float)uVar31) - (float)uVar59 * (float)uVar63;
  fVar54 = (fVar54 * fVar56 + fVar55 * fVar57 * (float)((ulong)uVar62 >> 0x20) +
           fVar55 * fVar45 * (float)((ulong)uVar31 >> 0x20)) -
           fVar58 * (float)((ulong)uVar63 >> 0x20);
  auVar8[9] = uVar36;
  auVar8._0_9_ = *pVar1;
  auVar8[10] = uVar37;
  auVar8[0xb] = uVar38;
  auVar8[0xc] = uVar39;
  auVar8[0xd] = uVar40;
  auVar8[0xe] = uVar41;
  auVar8[0xf] = uVar42;
  uVar63 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
  auVar21._4_4_ = fVar50;
  auVar21._0_4_ = fVar48;
  auVar21._8_4_ = fVar52;
  auVar21._12_4_ = fVar54;
  uVar59 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
  auVar22._4_4_ = fVar50;
  auVar22._0_4_ = fVar48;
  auVar22._8_4_ = fVar52;
  auVar22._12_4_ = fVar54;
  uVar44 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd50f8);
  auVar26._4_4_ = fVar50;
  auVar26._0_4_ = fVar48;
  auVar26._8_4_ = fVar48;
  auVar26._12_4_ = fVar50;
  uVar61 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
  auVar9[9] = uVar36;
  auVar9._0_9_ = *pVar1;
  auVar9[10] = uVar37;
  auVar9[0xb] = uVar38;
  auVar9[0xc] = uVar39;
  auVar9[0xd] = uVar40;
  auVar9[0xe] = uVar41;
  auVar9[0xf] = uVar42;
  uVar31 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
  auVar23._4_4_ = fVar50;
  auVar23._0_4_ = fVar48;
  auVar23._8_4_ = fVar52;
  auVar23._12_4_ = fVar54;
  uVar43 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd4f90);
  auVar24._4_4_ = fVar50;
  auVar24._0_4_ = fVar48;
  auVar24._8_4_ = fVar52;
  auVar24._12_4_ = fVar54;
  uVar60 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5418);
  fVar34 = (float)((ulong)uVar31 >> 0x20);
  auVar25._4_4_ = fVar50;
  auVar25._0_4_ = fVar48;
  auVar25._8_4_ = fVar52;
  auVar25._12_4_ = fVar54;
  uVar62 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd5270);
  fVar56 = (float)((ulong)uVar63 >> 0x20);
  fVar45 = ((float)uVar31 * fVar48 + fVar49 * fVar35 * (float)uVar43 +
           fVar49 * (float)uVar14 * (float)uVar44) - (float)uVar63 * (float)uVar60;
  fVar48 = (fVar34 * fVar50 + fVar51 * fVar10 * (float)((ulong)uVar43 >> 0x20) +
           fVar51 * fVar46 * (float)((ulong)uVar44 >> 0x20)) -
           fVar56 * (float)((ulong)uVar60 >> 0x20);
  fVar35 = ((float)uVar31 * fVar52 + fVar53 * (float)uVar63 * (float)uVar59 +
           fVar53 * fVar35 * (float)uVar61) - (float)uVar14 * (float)uVar62;
  fVar10 = (fVar34 * fVar54 + fVar55 * fVar56 * (float)((ulong)uVar59 >> 0x20) +
           fVar55 * fVar10 * (float)((ulong)uVar61 >> 0x20)) -
           fVar46 * (float)((ulong)uVar62 >> 0x20);
  fVar34 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 8),
                                             SUB41(fVar45,0) & (byte)DAT_01d4ab50)));
  uVar27 = (ulong)DAT_01d4ab50 >> 0x20;
  uVar28 = (ulong)DAT_01d4ab50 >> 0x28;
  uVar29 = (ulong)DAT_01d4ab50 >> 0x30;
  uVar30 = (ulong)DAT_01d4ab50 >> 0x38;
  fVar35 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab58 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) &
                                             (byte)((ulong)DAT_01d4ab58 >> 8),
                                             SUB41(fVar35,0) & (byte)DAT_01d4ab58)));
  *(ulong *)(param_1 + 0xb8) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c8) >> 0x20) +
                (float)((ulong)extraout_var_02 >> 0x20) +
                (float)(CONCAT17((byte)((uint)fVar10 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                                 CONCAT16((byte)((uint)fVar10 >> 0x10) &
                                          (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                          CONCAT15((byte)((uint)fVar10 >> 8) &
                                                   (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                                   CONCAT14(SUB41(fVar10,0) &
                                                            (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                            fVar35)))) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x3c8) + (float)extraout_var_02 + fVar35);
  *(ulong *)(param_1 + 0xb0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20) + extraout_var_00 +
                (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)uVar30,
                                 CONCAT16((byte)((uint)fVar48 >> 0x10) & (byte)uVar29,
                                          CONCAT15((byte)((uint)fVar48 >> 8) & (byte)uVar28,
                                                   CONCAT14(SUB41(fVar48,0) & (byte)uVar27,fVar34)))
                                ) >> 0x20),
                (float)*(undefined8 *)(param_1 + 0x3c0) + extraout_s0_00 + fVar34);
  if (plVar32 == (long *)0x0) {
    _DAT_00000118 = *(undefined8 *)(param_1 + 0xa8);
    _DAT_00000110 = *(long *)(param_1 + 0xa0);
    plVar32 = *(long **)(param_1 + 0x3a0);
  }
  else {
    lVar33 = plVar32[0xb];
    if (*(long *)(lVar33 + 0x58) == 0) {
      uVar31 = (**(code **)**(undefined8 **)(lVar33 + 0x60))();
      *(undefined8 *)(lVar33 + 0x58) = uVar31;
    }
    piVar3 = (int *)(lVar33 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar32[0x23] = *(long *)(param_1 + 0xa8);
    plVar32[0x22] = *(long *)(param_1 + 0xa0);
    lVar33 = plVar32[0xb];
    piVar3 = (int *)(lVar33 + 0x54);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x60) = 0;
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
    plVar32 = *(long **)(param_1 + 0x3a0);
  }
  if (plVar32 == (long *)0x0) {
    _DAT_000000f8 = *(undefined8 *)(param_1 + 0xb8);
    _DAT_000000f0 = *(undefined8 *)(param_1 + 0xb0);
  }
  else {
    lVar33 = plVar32[0xb];
    if (*(long *)(lVar33 + 0x58) == 0) {
      uVar31 = (**(code **)**(undefined8 **)(lVar33 + 0x60))();
      *(undefined8 *)(lVar33 + 0x58) = uVar31;
    }
    piVar3 = (int *)(lVar33 + 0x54);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = *piVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar32[0x1f] = *(long *)(param_1 + 0xb8);
    plVar32[0x1e] = *(long *)(param_1 + 0xb0);
    lVar33 = plVar32[0xb];
    piVar3 = (int *)(lVar33 + 0x54);
    do {
      iVar4 = *piVar3;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar6) {
        *piVar3 = iVar4 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar33 + 0x60) = 0;
      (**(code **)(*plVar32 + 0x18))(plVar32);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd0) =
       *(undefined4 *)(param_1 + 0x3dc);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x3a0) + 0xa0) + 0xd4) =
       *(undefined4 *)(param_1 + 0x3e0);
  return;
}


