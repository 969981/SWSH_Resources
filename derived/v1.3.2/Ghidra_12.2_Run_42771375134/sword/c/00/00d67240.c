/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67240; name: FUN_00d67240
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000080 : 0x00d6738c */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00d67240(long param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *local_58;
  undefined8 *local_50;
  long local_48;
  
  *(undefined4 *)(param_1 + 0x788) = param_2;
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),0,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),4,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),1,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),2,1);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),3,1);
  if ((*(char *)(param_1 + 0x78c) == '\0') || (*(char *)(param_1 + 0x78d) != '\0')) {
    lVar14 = *(long *)(param_1 + 0x170);
    if (lVar14 != 0) goto LAB_00d672c8;
LAB_00d6738c:
    lVar12 = 0;
    iVar8 = _DAT_00000080;
joined_r0x00d677c0:
    if (iVar8 - 2U < 4) goto LAB_00d6739c;
LAB_00d673e4:
    if (iVar8 == 0) goto LAB_00d6739c;
    if (iVar8 == 1) {
      puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x90) + 0x50);
      plVar9 = (long *)(**(code **)*puVar10)(puVar10);
      lVar14 = FUN_006f10c0();
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)lVar14) goto LAB_00d67428;
      }
    }
  }
  else {
    FUN_00dab430(*(undefined8 *)(param_1 + 0x780),0);
    lVar14 = *(long *)(param_1 + 0x170);
    if (lVar14 == 0) goto LAB_00d6738c;
LAB_00d672c8:
    puVar6 = PTR_DAT_0271ce48;
    puVar5 = PTR_DAT_0271ce40;
    if (*(int *)(lVar14 + 0x54) != 0) {
      piVar1 = (int *)(lVar14 + 0x54);
      iVar8 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          puVar10 = *(undefined8 **)(lVar14 + 0x58);
          if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
            uVar13 = FUN_01455eb0();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          while( true ) {
            if (puVar10 == (undefined8 *)0x0) goto LAB_00d6738c;
            if (puVar10 == (undefined8 *)puVar6) break;
            puVar10 = (undefined8 *)*puVar10;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar7;
          if (iVar7 == 0) goto LAB_00d6738c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar14 + 0x60) != 0) {
            lVar12 = *(long *)(lVar14 + 0x60) + -0x50;
          }
          iVar8 = *(int *)(lVar12 + 0x80);
          goto joined_r0x00d677c0;
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
      goto LAB_00d6738c;
    }
    lVar12 = 0;
    iVar8 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d673e4;
LAB_00d6739c:
    puVar10 = (undefined8 *)(*(long *)(lVar12 + 0x88) + 0x50);
    plVar9 = (long *)(**(code **)*puVar10)(puVar10);
    lVar14 = FUN_006f10c0();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar14) goto LAB_00d67428;
    }
  }
  puVar10 = (undefined8 *)0x0;
LAB_00d6742c:
  plVar9 = (long *)(**(code **)puVar10[10])(puVar10 + 10);
  puVar5 = PTR_DAT_0271d570;
  if (((*PTR_DAT_0271d570 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0271d570), iVar8 != 0))
  {
    uVar13 = FUN_006f10c0();
    *(undefined8 *)PTR_DAT_0271d578 = uVar13;
    __cxa_guard_release(PTR_DAT_0271d570);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9 == (long *)PTR_DAT_0271d578) goto joined_r0x00d675a8;
  }
  puVar10 = (undefined8 *)0x0;
joined_r0x00d675a8:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  puVar6 = PTR_DAT_0271ce40;
  lVar14 = *(long *)(param_1 + 0x178);
  if (lVar14 == 0) {
LAB_00d67560:
    lVar12 = 0;
    iVar8 = _DAT_00000080;
joined_r0x00d677e4:
    if (iVar8 - 2U < 4) goto LAB_00d67570;
LAB_00d675c4:
    if (iVar8 == 0) goto LAB_00d67570;
    if (iVar8 == 1) {
      puVar15 = (undefined8 *)(*(long *)(lVar12 + 0x90) + 0x50);
      plVar9 = (long *)(**(code **)*puVar15)(puVar15);
      lVar14 = FUN_006f10c0();
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)lVar14) goto LAB_00d67608;
      }
    }
  }
  else {
    if (*(int *)(lVar14 + 0x54) != 0) {
      piVar1 = (int *)(lVar14 + 0x54);
      puVar15 = (undefined8 *)PTR_DAT_0271ce48;
      iVar8 = *(int *)(lVar14 + 0x54);
      do {
        while( true ) {
          puVar11 = *(undefined8 **)(lVar14 + 0x58);
          if (((*puVar6 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(puVar6), puVar15 = (undefined8 *)PTR_DAT_0271ce48,
             iVar7 != 0)) {
            uVar13 = FUN_01455eb0();
            *(undefined8 *)PTR_DAT_0271ce48 = uVar13;
            __cxa_guard_release(puVar6);
            puVar15 = (undefined8 *)PTR_DAT_0271ce48;
          }
          while( true ) {
            if (puVar11 == (undefined8 *)0x0) goto LAB_00d67560;
            if (puVar11 == puVar15) break;
            puVar11 = (undefined8 *)*puVar11;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar8) break;
          ClearExclusiveLocal();
          iVar8 = iVar7;
          if (iVar7 == 0) goto LAB_00d67560;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar12 = 0;
          if (*(long *)(lVar14 + 0x60) != 0) {
            lVar12 = *(long *)(lVar14 + 0x60) + -0x50;
          }
          iVar8 = *(int *)(lVar12 + 0x80);
          goto joined_r0x00d677e4;
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
      goto LAB_00d67560;
    }
    lVar12 = 0;
    iVar8 = _DAT_00000080;
    if (3 < _DAT_00000080 - 2U) goto LAB_00d675c4;
LAB_00d67570:
    puVar15 = (undefined8 *)(*(long *)(lVar12 + 0x88) + 0x50);
    plVar9 = (long *)(**(code **)*puVar15)(puVar15);
    lVar14 = FUN_006f10c0();
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)lVar14) goto LAB_00d67608;
    }
  }
  puVar15 = (undefined8 *)0x0;
LAB_00d6760c:
  plVar9 = (long *)(**(code **)puVar15[10])(puVar15 + 10);
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0271d570), iVar8 != 0)) {
    uVar13 = FUN_006f10c0();
    *(undefined8 *)PTR_DAT_0271d578 = uVar13;
    __cxa_guard_release(PTR_DAT_0271d570);
  }
  for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
    if (plVar9 == (long *)PTR_DAT_0271d578) goto joined_r0x00d67648;
  }
  puVar15 = (undefined8 *)0x0;
joined_r0x00d67648:
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  uVar13 = *(undefined8 *)(param_1 + 0x780);
  uVar2 = *(undefined4 *)(param_1 + 0x788);
  local_48 = *(long *)(param_1 + 0x778);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_50 = puVar10;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)(puVar10[9] + 0x10))(puVar10 + 9);
  }
  local_58 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)(puVar15[9] + 0x10))(puVar15 + 9);
  }
  FUN_00da60e0(uVar13,uVar2,&local_48,&local_50,&local_58,0,*(undefined8 *)(param_1 + 0x90));
  if (local_58 != (undefined8 *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
    local_58 = (undefined8 *)0x0;
  }
  if (local_50 != (undefined8 *)0x0) {
    (**(code **)(local_50[9] + 0x18))();
    local_50 = (undefined8 *)0x0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if ((*(char *)(param_1 + 0x78c) != '\0') && (*(char *)(param_1 + 0x78d) == '\0')) {
    FUN_00dab430(*(undefined8 *)(param_1 + 0x780),1);
  }
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),0,0);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),4,0);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),1,0);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),2,0);
  FUN_00dab450(*(undefined8 *)(param_1 + 0x780),3,0);
  return;
LAB_00d67428:
  puVar10 = puVar10 + -10;
  goto LAB_00d6742c;
LAB_00d67608:
  puVar15 = puVar15 + -10;
  goto LAB_00d6760c;
}


