/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0137a7e0; name: FUN_0137a7e0
 */


long FUN_0137a7e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
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
          if (cVar2 == '\0') goto LAB_0137a83c;
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
LAB_0137a83c:
  plVar5 = *(long **)(param_1 + 0x140);
  plVar6 = *(long **)(param_1 + 0x148);
  if ((plVar5 == plVar6) || (lVar4 = FUN_01378d40(*plVar5 + 8), lVar4 != 0)) {
    plVar6 = plVar5;
    if (*(long **)(param_1 + 0x148) == plVar5) goto LAB_0137a864;
  }
  else {
    do {
      plVar5 = plVar5 + 1;
      if (plVar6 == plVar5) {
        if (*(long **)(param_1 + 0x148) != plVar6) goto LAB_0137a918;
        goto LAB_0137a864;
      }
      lVar4 = FUN_01378d40(*plVar5 + 8);
    } while (lVar4 == 0);
    plVar6 = plVar5;
    if (*(long **)(param_1 + 0x148) == plVar5) {
LAB_0137a864:
      plVar6 = *(long **)(param_1 + 0x110);
      plVar5 = *(long **)(param_1 + 0x118);
      if ((plVar6 == plVar5) || (lVar4 = FUN_01378d40(*plVar6 + 8), lVar4 != 0)) {
        if (*(long **)(param_1 + 0x118) == plVar6) goto LAB_0137a88c;
      }
      else {
        do {
          plVar6 = plVar6 + 1;
          if (plVar5 == plVar6) {
            plVar6 = plVar5;
            if (*(long **)(param_1 + 0x118) != plVar5) goto LAB_0137a918;
            goto LAB_0137a88c;
          }
          lVar4 = FUN_01378d40(*plVar6 + 8);
        } while (lVar4 == 0);
        if (*(long **)(param_1 + 0x118) == plVar6) {
LAB_0137a88c:
          lVar4 = 0;
          goto LAB_0137a928;
        }
      }
    }
  }
LAB_0137a918:
  lVar4 = 0;
  if (*plVar6 != 0) {
    lVar4 = *plVar6 + -0x48;
  }
LAB_0137a928:
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


