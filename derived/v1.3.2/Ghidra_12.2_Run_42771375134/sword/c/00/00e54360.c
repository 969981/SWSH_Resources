/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e54360; name: FUN_00e54360
 */


long FUN_00e54360(long param_1)

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
          if (cVar2 == '\0') goto LAB_00e543c0;
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
LAB_00e543c0:
  plVar7 = *(long **)(param_1 + 0x140);
  plVar6 = *(long **)(param_1 + 0x148);
  if (plVar6 == plVar7) {
LAB_00e54458:
    plVar6 = plVar7;
    if (*(long **)(param_1 + 0x148) == plVar6) {
LAB_00e54410:
      plVar7 = *(long **)(param_1 + 0x110);
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == plVar7) {
LAB_00e5446c:
        plVar6 = plVar7;
      }
      else {
        do {
          plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 8))();
          lVar4 = FUN_00e544c0();
          for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
            if (plVar5 == (long *)lVar4) goto LAB_00e5446c;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar6);
      }
      if (*(long **)(param_1 + 0x118) == plVar6) {
        lVar4 = 0;
        goto LAB_00e5448c;
      }
    }
  }
  else {
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar7 + 8))();
      lVar4 = FUN_00e544c0();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) goto LAB_00e54458;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
    if (*(long **)(param_1 + 0x148) == plVar6) goto LAB_00e54410;
  }
  lVar4 = 0;
  if (*plVar6 != 0) {
    lVar4 = *plVar6 + -0x48;
  }
LAB_00e5448c:
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


