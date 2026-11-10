/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0139bf40; name: FUN_0139bf40
 */


long FUN_0139bf40(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
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
          if (cVar2 == '\0') goto LAB_0139bf9c;
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
LAB_0139bf9c:
  plVar6 = *(long **)(param_1 + 0x140);
  plVar7 = *(long **)(param_1 + 0x148);
  if ((plVar6 != plVar7) && (uVar5 = FUN_0139c090(*plVar6 + 8), (uVar5 & 1) == 0)) {
    do {
      plVar6 = plVar6 + 1;
      if (plVar7 == plVar6) {
        if (*(long **)(param_1 + 0x148) != plVar7) goto LAB_0139c058;
        goto LAB_0139bfe4;
      }
      uVar5 = FUN_0139c090(*plVar6 + 8);
    } while ((uVar5 & 1) == 0);
  }
  plVar7 = plVar6;
  if (*(long **)(param_1 + 0x148) == plVar6) {
LAB_0139bfe4:
    plVar6 = *(long **)(param_1 + 0x110);
    plVar7 = *(long **)(param_1 + 0x118);
    if ((plVar6 != plVar7) && (uVar5 = FUN_0139c090(*plVar6 + 8), (uVar5 & 1) == 0)) {
      do {
        plVar6 = plVar6 + 1;
        if (plVar7 == plVar6) {
          if (*(long **)(param_1 + 0x118) != plVar7) goto LAB_0139c058;
          goto LAB_0139c02c;
        }
        uVar5 = FUN_0139c090(*plVar6 + 8);
      } while ((uVar5 & 1) == 0);
    }
    plVar7 = plVar6;
    if (*(long **)(param_1 + 0x118) == plVar6) {
LAB_0139c02c:
      lVar4 = 0;
      goto LAB_0139c068;
    }
  }
LAB_0139c058:
  lVar4 = 0;
  if (*plVar7 != 0) {
    lVar4 = *plVar7 + -0x48;
  }
LAB_0139c068:
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


