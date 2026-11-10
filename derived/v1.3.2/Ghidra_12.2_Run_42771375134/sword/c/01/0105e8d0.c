/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0105e8d0; name: FUN_0105e8d0
 */


long FUN_0105e8d0(long param_1)

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
          if (cVar2 == '\0') goto LAB_0105e934;
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
LAB_0105e934:
  puVar5 = PTR_DAT_0271dfb8;
  puVar4 = PTR_DAT_0271dfb0;
  plVar11 = *(long **)(param_1 + 0x140);
  plVar10 = *(long **)(param_1 + 0x148);
  if (plVar10 == plVar11) {
LAB_0105e9ec:
    plVar10 = plVar11;
    if (*(long **)(param_1 + 0x148) == plVar10) {
LAB_0105e9cc:
      puVar5 = PTR_DAT_0271dfb8;
      puVar4 = PTR_DAT_0271dfb0;
      plVar11 = *(long **)(param_1 + 0x110);
      plVar10 = *(long **)(param_1 + 0x118);
      if (plVar10 == plVar11) {
LAB_0105ea70:
        plVar10 = plVar11;
      }
      else {
        do {
          plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
          if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
            uVar9 = FUN_00706e40();
            *(undefined8 *)puVar5 = uVar9;
            __cxa_guard_release(puVar4);
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
            if (plVar8 == (long *)puVar5) goto LAB_0105ea70;
          }
          plVar11 = plVar11 + 1;
        } while (plVar11 != plVar10);
      }
      if (*(long **)(param_1 + 0x118) == plVar10) {
        lVar7 = 0;
        goto LAB_0105ea90;
      }
    }
  }
  else {
    do {
      plVar8 = (long *)(*(code *)**(undefined8 **)(*plVar11 + 8))();
      if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)puVar5) goto LAB_0105e9ec;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar10);
    if (*(long **)(param_1 + 0x148) == plVar10) goto LAB_0105e9cc;
  }
  lVar7 = 0;
  if (*plVar10 != 0) {
    lVar7 = *plVar10 + -0x48;
  }
LAB_0105ea90:
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


