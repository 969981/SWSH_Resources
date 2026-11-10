/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c73bc0; name: FUN_00c73bc0
 */


void FUN_00c73bc0(long param_1)

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
  long *plVar10;
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
          if (cVar2 == '\0') goto LAB_00c73c24;
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
LAB_00c73c24:
  puVar5 = PTR_DAT_0271c1f0;
  puVar4 = PTR_DAT_0271c1e8;
  plVar12 = *(long **)(param_1 + 0x140);
  plVar11 = *(long **)(param_1 + 0x148);
  if (plVar12 != plVar11) {
    do {
      plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar5) goto LAB_00c73cb4;
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar11);
    plVar12 = plVar11;
  }
LAB_00c73cb4:
  puVar5 = PTR_DAT_0271c1f0;
  puVar4 = PTR_DAT_0271c1e8;
  if (*(long **)(param_1 + 0x148) == plVar12) {
    plVar12 = *(long **)(param_1 + 0x110);
    plVar11 = *(long **)(param_1 + 0x118);
    if (plVar12 != plVar11) {
      do {
        plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar12 + 8))();
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          if (plVar8 == (long *)puVar5) goto LAB_00c73e24;
        }
        plVar12 = plVar12 + 1;
      } while (plVar12 != plVar11);
      plVar12 = plVar11;
    }
LAB_00c73e24:
    plVar11 = *(long **)(param_1 + 0x118);
    if (plVar11 == plVar12) goto LAB_00c73eb0;
    if (plVar12 + 1 == plVar11) {
LAB_00c73e84:
      do {
        plVar8 = plVar11 + -1;
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          plVar11[-1] = 0;
        }
        plVar11 = plVar8;
      } while (plVar12 != plVar8);
    }
    else {
      plVar8 = plVar12;
      do {
        if ((long *)*plVar8 != (long *)0x0) {
          (**(code **)(*(long *)*plVar8 + 0x18))();
          *plVar8 = 0;
        }
        plVar12 = plVar8 + 1;
        lVar7 = *plVar12;
        *plVar12 = 0;
        *plVar8 = lVar7;
        plVar8 = plVar12;
      } while (plVar11 + -1 != plVar12);
      plVar11 = *(long **)(param_1 + 0x118);
      if (plVar11 != plVar12) goto LAB_00c73e84;
    }
    *(long **)(param_1 + 0x118) = plVar12;
    goto LAB_00c73eb0;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0x108);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)*plVar12 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
      goto LAB_00c73eb0;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar10 = *(long **)(param_1 + 0x148);
  plVar8 = plVar12 + 1;
  if (plVar8 == plVar10) {
LAB_00c73d30:
    do {
      plVar10 = plVar8 + -1;
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x18))();
        plVar8[-1] = 0;
      }
      plVar8 = plVar10;
    } while (plVar12 != plVar10);
  }
  else {
    plVar8 = plVar12;
    do {
      if ((long *)*plVar8 != (long *)0x0) {
        (**(code **)(*(long *)*plVar8 + 0x18))();
        *plVar8 = 0;
      }
      plVar12 = plVar8 + 1;
      lVar7 = *plVar12;
      *plVar12 = 0;
      *plVar8 = lVar7;
      plVar8 = plVar12;
    } while (plVar10 + -1 != plVar12);
    plVar8 = *(long **)(param_1 + 0x148);
    if (plVar8 != plVar12) goto LAB_00c73d30;
  }
  *(long **)(param_1 + 0x148) = plVar12;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
LAB_00c73eb0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
}


