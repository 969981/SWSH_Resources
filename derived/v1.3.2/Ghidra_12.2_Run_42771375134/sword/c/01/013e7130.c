/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e7130; name: FUN_013e7130
 */


void FUN_013e7130(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined *local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [96];
  
  puVar12 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar8 = (long *)(**(code **)*puVar12)(puVar12);
  lVar9 = FUN_0132d9a0();
  for (; plVar8 != (long *)lVar9; plVar8 = (long *)*plVar8) {
  }
  lVar13 = puVar12[2];
  lVar9 = nn::os::GetCurrentThread();
  plVar8 = (long *)(lVar13 + 0x70);
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 100));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_013e71c4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_013e71c4:
  local_b0 = PTR_LAB_02728010;
  local_a8 = (code *)PTR_FUN_02728018;
  local_a0 = PTR_LAB_02728020;
  local_98 = PTR_LAB_02728028;
  FUN_012d5b10(lVar13,0x12af368db0c29ea5,&local_b0,0);
  pcVar6 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined *)0x0;
    local_98 = (undefined *)0x0;
    local_b0 = (undefined *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar6)(auStack_90);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 100));
  puVar5 = PTR_DAT_02727758;
  puVar4 = PTR_DAT_02727750;
  lVar9 = *(long *)PTR_DAT_02727748;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar8 = *(long **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          if (((*PTR_DAT_0271df20 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar7 != 0)) {
            uVar10 = FUN_00d3ff90();
            *(undefined8 *)PTR_DAT_0271df28 = uVar10;
            __cxa_guard_release(PTR_DAT_0271df20);
          }
          *(undefined **)puVar5 = PTR_DAT_0271df28;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar8 == (long *)0x0) goto LAB_013e7384;
          if (plVar8 == (long *)puVar5) break;
          plVar8 = (long *)*plVar8;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar7;
        if (iVar7 == 0) goto LAB_013e7384;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          FUN_0130ab80(lVar9 + -0x50,0);
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
          return;
        }
        break;
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_013e7384:
  FUN_0130ab80(0,0);
  return;
}


