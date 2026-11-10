/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01370670; name: FUN_01370670
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01370670(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  byte *pbVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  float extraout_s0;
  float fVar25;
  float extraout_var;
  float fVar26;
  float extraout_var_00;
  float extraout_var_01;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar34;
  undefined8 uVar33;
  float fVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar22 != (undefined8 *)0x0)) {
    plVar14 = (long *)(**(code **)*puVar22)(puVar22);
    lVar15 = FUN_0132d9a0();
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14 == (long *)lVar15) {
        puVar22 = puVar22 + -10;
        lVar15 = *(long *)PTR_DAT_02727748;
        plVar14 = (long *)PTR_DAT_02727748;
        pbVar11 = PTR_DAT_02727750;
        puVar16 = (undefined8 *)PTR_DAT_02727758;
        goto joined_r0x0137080c;
      }
    }
  }
  puVar22 = (undefined8 *)0x0;
  lVar15 = *(long *)PTR_DAT_02727748;
  plVar14 = (long *)PTR_DAT_02727748;
  pbVar11 = PTR_DAT_02727750;
  puVar16 = (undefined8 *)PTR_DAT_02727758;
joined_r0x0137080c:
  PTR_DAT_02727748 = (undefined *)plVar14;
  PTR_DAT_02727750 = pbVar11;
  PTR_DAT_02727758 = (undefined *)puVar16;
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
    lVar24 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    iVar21 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        puVar23 = *(undefined8 **)(lVar15 + 0x58);
        if ((*pbVar11 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(pbVar11);
          puVar16 = (undefined8 *)PTR_DAT_02727758;
          if (iVar13 != 0) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar13 != 0)) {
              uVar20 = FUN_00d3ff90();
              *(undefined8 *)PTR_DAT_0271df28 = uVar20;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar16 = (undefined8 *)PTR_DAT_02727758;
            *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
            __cxa_guard_release(pbVar11);
          }
        }
        lVar24 = 0;
        if (puVar23 == (undefined8 *)0x0) goto LAB_01370814;
        while (puVar23 != puVar16) {
          puVar23 = (undefined8 *)*puVar23;
          if (puVar23 == (undefined8 *)0x0) {
            lVar24 = 0;
            goto LAB_01370814;
          }
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar21) break;
        ClearExclusiveLocal();
        lVar24 = 0;
        iVar21 = iVar13;
        if (iVar13 == 0) goto LAB_01370814;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar24 = 0;
        if (*(long *)(lVar15 + 0x60) != 0) {
          lVar24 = *(long *)(lVar15 + 0x60) + -0x50;
        }
        break;
      }
      lVar24 = 0;
      iVar21 = iVar13;
    } while (iVar13 != 0);
  }
LAB_01370814:
  puVar16 = (undefined8 *)FUN_012dcaa0(lVar24);
  uVar10 = puVar16[1];
  uVar20 = *puVar16;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  puVar12 = PTR_DAT_02727750;
  lVar15 = *plVar14;
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
    lVar24 = 0;
  }
  else {
    piVar1 = (int *)(lVar15 + 0x54);
    puVar16 = (undefined8 *)PTR_DAT_02727758;
    iVar21 = *(int *)(lVar15 + 0x54);
    do {
      while( true ) {
        puVar23 = *(undefined8 **)(lVar15 + 0x58);
        if ((*puVar12 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(puVar12);
          puVar16 = (undefined8 *)PTR_DAT_02727758;
          if (iVar13 != 0) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar13 != 0)) {
              uVar19 = FUN_00d3ff90();
              *(undefined8 *)PTR_DAT_0271df28 = uVar19;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar16 = (undefined8 *)PTR_DAT_02727758;
            *(undefined **)PTR_DAT_02727758 = PTR_DAT_0271df28;
            __cxa_guard_release(puVar12);
          }
        }
        lVar24 = 0;
        if (puVar23 == (undefined8 *)0x0) goto LAB_0137095c;
        while (puVar23 != puVar16) {
          puVar23 = (undefined8 *)*puVar23;
          if (puVar23 == (undefined8 *)0x0) {
            lVar24 = 0;
            goto LAB_0137095c;
          }
        }
        iVar13 = *piVar1;
        if (iVar13 != iVar21) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar24 = 0;
          if (*(long *)(lVar15 + 0x60) != 0) {
            lVar24 = *(long *)(lVar15 + 0x60) + -0x50;
          }
          goto LAB_0137095c;
        }
        lVar24 = 0;
        iVar21 = iVar13;
        if (iVar13 == 0) goto LAB_0137095c;
      }
      ClearExclusiveLocal();
      lVar24 = 0;
      iVar21 = iVar13;
    } while (iVar13 != 0);
  }
LAB_0137095c:
  pauVar17 = (undefined1 (*) [16])FUN_012dc8d0(lVar24);
  uVar19 = *(undefined8 *)*pauVar17;
  auVar7 = *pauVar17;
  auVar5 = *pauVar17;
  auVar4 = *pauVar17;
  if (lVar24 != 0) {
    (**(code **)(*(long *)(lVar24 + 0x48) + 0x18))((long *)(lVar24 + 0x48));
  }
  uVar18 = _DAT_01d4a010;
  plVar14 = (long *)puVar22[0x6a];
  if (plVar14 == (long *)0x0) {
    puVar16 = (undefined8 *)(_DAT_000001a8 + 0xf0);
    *(undefined8 *)(_DAT_000001a8 + 0xf8) = _UNK_01d4a018;
    *puVar16 = uVar18;
    plVar14 = (long *)puVar22[0x6a];
  }
  else {
    lVar15 = plVar14[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar18;
    }
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      uVar18 = _DAT_01d4a010;
    } while (cVar2 != '\0');
    lVar15 = plVar14[0x35];
    *(undefined8 *)(lVar15 + 0xf8) = _UNK_01d4a018;
    *(undefined8 *)(lVar15 + 0xf0) = uVar18;
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar14 = (long *)puVar22[0x6a];
  }
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar18;
    }
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_00a92cd0(DAT_01d4bb38,0,0);
  uVar28 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  auVar4._4_4_ = extraout_var;
  auVar4._0_4_ = extraout_s0;
  auVar4._8_4_ = extraout_var_00;
  auVar4._12_4_ = extraout_var_01;
  uVar18 = a64_TBL(ZEXT816(0),auVar4,DAT_01cd4f90);
  uVar31 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
  auVar5._4_4_ = extraout_var;
  auVar5._0_4_ = extraout_s0;
  auVar5._8_4_ = extraout_var_00;
  auVar5._12_4_ = extraout_var_01;
  uVar36 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
  auVar6._4_4_ = extraout_var;
  auVar6._0_4_ = extraout_s0;
  auVar6._8_4_ = extraout_var_00;
  auVar6._12_4_ = extraout_var_01;
  uVar30 = a64_TBL(ZEXT816(0),auVar6,DAT_01cd50f8);
  fVar29 = (float)((ulong)uVar28 >> 0x20);
  fVar32 = (float)uVar19;
  fVar34 = (float)((ulong)uVar19 >> 0x20);
  fVar35 = (float)((ulong)uVar31 >> 0x20);
  uVar38 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar7._4_4_ = extraout_var;
  auVar7._0_4_ = extraout_s0;
  auVar7._8_4_ = extraout_var_00;
  auVar7._12_4_ = extraout_var_01;
  uVar33 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd5418);
  auVar8._4_4_ = extraout_var;
  auVar8._0_4_ = extraout_s0;
  auVar8._8_4_ = extraout_var_00;
  auVar8._12_4_ = extraout_var_01;
  uVar37 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5270);
  auVar9._4_4_ = extraout_var;
  auVar9._0_4_ = extraout_s0;
  auVar9._8_4_ = extraout_s0;
  auVar9._12_4_ = extraout_var;
  uVar19 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50b0);
  fVar27 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
  fVar25 = (float)_DAT_01d4ae90;
  fVar26 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  lVar15 = plVar14[0x35];
  *(ulong *)(lVar15 + 0x118) =
       CONCAT44((extraout_var_01 * fVar29 + fVar27 * fVar35 * (float)((ulong)uVar36 >> 0x20) +
                fVar27 * fVar34 * (float)((ulong)uVar19 >> 0x20)) -
                fVar39 * (float)((ulong)uVar37 >> 0x20),
                (extraout_var_00 * (float)uVar28 +
                 (float)_UNK_01d4ae98 * (float)uVar31 * (float)uVar36 +
                (float)_UNK_01d4ae98 * fVar32 * (float)uVar19) - (float)uVar38 * (float)uVar37);
  *(ulong *)(lVar15 + 0x110) =
       CONCAT44((extraout_var * fVar29 + fVar26 * fVar34 * (float)((ulong)uVar18 >> 0x20) +
                fVar26 * fVar39 * (float)((ulong)uVar30 >> 0x20)) -
                fVar35 * (float)((ulong)uVar33 >> 0x20),
                (extraout_s0 * (float)uVar28 + fVar25 * fVar32 * (float)uVar18 +
                fVar25 * (float)uVar38 * (float)uVar30) - (float)uVar31 * (float)uVar33);
  if (plVar14 != (long *)0x0) {
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  plVar14 = (long *)puVar22[0x6a];
  if (plVar14 == (long *)0x0) {
    puVar16 = (undefined8 *)(_DAT_000001a8 + 0x100);
    *(undefined8 *)(_DAT_000001a8 + 0x108) = uVar10;
    *puVar16 = uVar20;
    plVar14 = (long *)puVar22[0x6a];
  }
  else {
    lVar15 = plVar14[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar19 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar19;
    }
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar15 = plVar14[0x35];
    *(undefined8 *)(lVar15 + 0x108) = uVar10;
    *(undefined8 *)(lVar15 + 0x100) = uVar20;
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    plVar14 = (long *)puVar22[0x6a];
  }
  if (plVar14 == (long *)0x0) {
    *(undefined4 *)(*(long *)(_DAT_000001a8 + 0xa0) + 0xd0) = 0x3f18ce9c;
  }
  else {
    lVar15 = plVar14[0xb];
    if (*(long *)(lVar15 + 0x58) == 0) {
      uVar20 = (**(code **)**(undefined8 **)(lVar15 + 0x60))();
      *(undefined8 *)(lVar15 + 0x58) = uVar20;
    }
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined4 *)(*(long *)(plVar14[0x35] + 0xa0) + 0xd0) = 0x3f18ce9c;
    lVar15 = plVar14[0xb];
    piVar1 = (int *)(lVar15 + 0x54);
    do {
      iVar21 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar21 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x60) = 0;
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
  }
  *(undefined4 *)(puVar22 + 0xf) = 3;
  local_60 = 0xba848944af817a11;
  local_58 = "Set_State_Camp_Playground";
  local_50 = 0x19;
  local_48 = 0;
  FUN_012d6d20(&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


