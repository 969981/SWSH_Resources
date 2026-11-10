/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00accfc0; name: FUN_00accfc0
 */


void FUN_00accfc0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
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
          if (cVar2 == '\0') goto LAB_00acd020;
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
LAB_00acd020:
  plVar8 = *(long **)(param_1 + 0x140);
  plVar7 = *(long **)(param_1 + 0x148);
  if (plVar8 != plVar7) {
    do {
      plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
      lVar4 = FUN_00accd80();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar4) goto LAB_00acd068;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar7);
    plVar8 = plVar7;
  }
LAB_00acd068:
  if (*(long **)(param_1 + 0x148) == plVar8) {
    plVar8 = *(long **)(param_1 + 0x110);
    plVar7 = *(long **)(param_1 + 0x118);
    if (plVar8 != plVar7) {
      do {
        plVar5 = (long *)(*(code *)**(undefined8 **)(*plVar8 + 8))();
        lVar4 = FUN_00accd80();
        for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
          if (plVar5 == (long *)lVar4) goto LAB_00acd170;
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar7);
      plVar8 = plVar7;
    }
LAB_00acd170:
    plVar7 = *(long **)(param_1 + 0x118);
    if (plVar7 == plVar8) goto LAB_00acd21c;
    if (plVar8 + 1 == plVar7) {
LAB_00acd1d0:
      do {
        plVar5 = plVar7 + -1;
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          plVar7[-1] = 0;
        }
        plVar7 = plVar5;
      } while (plVar8 != plVar5);
    }
    else {
      plVar5 = plVar8;
      do {
        if ((long *)*plVar5 != (long *)0x0) {
          (**(code **)(*(long *)*plVar5 + 0x18))();
          *plVar5 = 0;
        }
        plVar8 = plVar5 + 1;
        lVar4 = *plVar8;
        *plVar8 = 0;
        *plVar5 = lVar4;
        plVar5 = plVar8;
      } while (plVar7 + -1 != plVar8);
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 != plVar8) goto LAB_00acd1d0;
    }
    *(long **)(param_1 + 0x118) = plVar8;
    goto LAB_00acd21c;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_1 + 0x108);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      (**(code **)(*(long *)*plVar8 + 0x40))();
      *(undefined1 *)(param_1 + 0x181) = 1;
      goto LAB_00acd21c;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar6 = *(long **)(param_1 + 0x148);
  plVar5 = plVar8 + 1;
  if (plVar5 == plVar6) {
LAB_00acd0e4:
    do {
      plVar6 = plVar5 + -1;
      if ((long *)*plVar6 != (long *)0x0) {
        (**(code **)(*(long *)*plVar6 + 0x18))();
        plVar5[-1] = 0;
      }
      plVar5 = plVar6;
    } while (plVar8 != plVar6);
  }
  else {
    plVar5 = plVar8;
    do {
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x18))();
        *plVar5 = 0;
      }
      plVar8 = plVar5 + 1;
      lVar4 = *plVar8;
      *plVar8 = 0;
      *plVar5 = lVar4;
      plVar5 = plVar8;
    } while (plVar6 + -1 != plVar8);
    plVar5 = *(long **)(param_1 + 0x148);
    if (plVar5 != plVar8) goto LAB_00acd0e4;
  }
  *(long **)(param_1 + 0x148) = plVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xfc));
LAB_00acd21c:
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


