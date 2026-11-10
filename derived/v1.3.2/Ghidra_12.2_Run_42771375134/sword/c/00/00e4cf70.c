/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e4cf70; name: FUN_00e4cf70
 */


long FUN_00e4cf70(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00e4cfd8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00e4cfd8:
  puVar5 = PTR_DAT_0271e800;
  puVar4 = PTR_DAT_0271e7f8;
  plVar11 = *(long **)(param_1 + 0x140);
  plVar12 = *(long **)(param_1 + 0x148);
  if (plVar12 != plVar11) {
    do {
      lVar7 = *plVar11;
      puVar10 = (undefined8 *)(lVar7 + 8);
      plVar8 = (long *)(**(code **)*puVar10)(puVar10);
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar5) {
          if (*(long *)(lVar7 + 0x128) == -0x3d007867bcc23c10) goto LAB_00e4d08c;
          break;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar12);
    plVar11 = plVar12;
LAB_00e4d08c:
    plVar12 = *(long **)(param_1 + 0x148);
  }
  puVar5 = PTR_DAT_0271e800;
  puVar4 = PTR_DAT_0271e7f8;
  if (plVar12 == plVar11) {
    plVar11 = *(long **)(param_1 + 0x110);
    plVar12 = *(long **)(param_1 + 0x118);
    if (plVar12 != plVar11) {
      do {
        lVar7 = *plVar11;
        puVar10 = (undefined8 *)(lVar7 + 8);
        plVar8 = (long *)(**(code **)*puVar10)(puVar10);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) {
            if (*(long *)(lVar7 + 0x128) == -0x3d007867bcc23c10) goto LAB_00e4d14c;
            break;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar12);
      plVar11 = plVar12;
LAB_00e4d14c:
      plVar12 = *(long **)(param_1 + 0x118);
    }
    if (plVar12 == plVar11) {
      lVar7 = 0;
      goto LAB_00e4d168;
    }
  }
  lVar7 = 0;
  if (*plVar11 != 0) {
    lVar7 = *plVar11 + -0x48;
  }
LAB_00e4d168:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar7;
}


