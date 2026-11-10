/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db8c50; name: FUN_00db8c50
 */


long FUN_00db8c50(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar4 = nn::os::GetCurrentThread();
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
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00db8cb4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00db8cb4:
  plVar8 = *(long **)(param_1 + 0x140);
  plVar9 = *(long **)(param_1 + 0x148);
  if (plVar8 == plVar9) {
    lVar4 = 0;
    plVar8 = *(long **)(param_1 + 0x110);
    plVar9 = *(long **)(param_1 + 0x118);
    if (plVar8 == plVar9) goto LAB_00db8d80;
  }
  else {
    lVar4 = 0;
LAB_00db8cc4:
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
      lVar6 = FUN_00706e40();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar6) {
          lVar4 = lVar4 + 1;
          plVar8 = plVar8 + 1;
          if (plVar8 == plVar9) goto LAB_00db8d10;
          goto LAB_00db8cc4;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar9);
LAB_00db8d10:
    plVar8 = *(long **)(param_1 + 0x110);
    plVar9 = *(long **)(param_1 + 0x118);
    if (plVar8 == plVar9) {
LAB_00db8d80:
      lVar6 = 0;
      goto LAB_00db8d84;
    }
  }
  lVar6 = 0;
LAB_00db8d20:
  do {
    plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
    lVar7 = FUN_00706e40();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar7) {
        lVar6 = lVar6 + 1;
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar9) goto LAB_00db8d84;
        goto LAB_00db8d20;
      }
    }
    plVar8 = plVar8 + 1;
  } while (plVar8 != plVar9);
LAB_00db8d84:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar6 + lVar4;
}


