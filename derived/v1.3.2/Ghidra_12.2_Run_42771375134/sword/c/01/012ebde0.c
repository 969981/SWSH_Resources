/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ebde0; name: FUN_012ebde0
 */


long FUN_012ebde0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
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
          if (cVar2 == '\0') goto LAB_012ebe40;
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
LAB_012ebe40:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar6 = *(long **)(param_1 + 0x148);
  if (plVar6 == plVar7) {
LAB_012ebed8:
    plVar6 = plVar7;
    if (*(long **)(param_1 + 0x148) == plVar6) {
LAB_012ebe90:
      plVar7 = *(long **)(param_1 + 0x110);
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == plVar7) {
LAB_012ebeec:
        plVar6 = plVar7;
      }
      else {
        do {
          plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 8))();
          lVar4 = FUN_012ebf40();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar4) goto LAB_012ebeec;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
      }
      if (*(long **)(param_1 + 0x118) == plVar6) {
        lVar4 = 0;
        goto LAB_012ebf0c;
      }
    }
  }
  else {
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 8))();
      lVar4 = FUN_012ebf40();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) goto LAB_012ebed8;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
    if (*(long **)(param_1 + 0x148) == plVar6) goto LAB_012ebe90;
  }
  lVar4 = 0;
  if (*plVar6 != 0) {
    lVar4 = *plVar6 + -0x48;
  }
LAB_012ebf0c:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return lVar4;
}


