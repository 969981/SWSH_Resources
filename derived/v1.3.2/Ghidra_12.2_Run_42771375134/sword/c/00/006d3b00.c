/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d3b00; name: FUN_006d3b00
 */


void FUN_006d3b00(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0xb;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x4c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006d3b60;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_006d3b60:
  plVar7 = (long *)param_1[0x18];
  plVar2 = (long *)param_1[0x19];
  if (plVar7 != plVar2) {
    lVar5 = *plVar7;
    if (((*(long *)(lVar5 + 0xc0) == *(long *)(lVar5 + 200)) &&
        (*(long *)(lVar5 + 0x60) == *(long *)(lVar5 + 0x68))) &&
       (*(long *)(lVar5 + 0xf0) == *(long *)(lVar5 + 0xf8))) {
      while( true ) {
        plVar6 = plVar7 + 1;
        if (*(long *)(lVar5 + 0x90) != *(long *)(lVar5 + 0x98)) break;
        if (plVar2 == plVar6) {
          plVar6 = plVar2;
          goto LAB_006d3c6c;
        }
        lVar5 = *plVar6;
        plVar7 = plVar6;
        if (((*(long *)(lVar5 + 0xc0) != *(long *)(lVar5 + 200)) ||
            (*(long *)(lVar5 + 0x60) != *(long *)(lVar5 + 0x68))) ||
           (*(long *)(lVar5 + 0xf0) != *(long *)(lVar5 + 0xf8))) break;
      }
    }
    FUN_006d1840(lVar5,*param_1,param_1[1]);
  }
  plVar6 = plVar7;
  plVar8 = plVar7;
  if (plVar7 != plVar2) {
    while( true ) {
      plVar8 = plVar8 + 1;
      plVar6 = plVar7;
      if (plVar8 == plVar2) break;
      while (((lVar5 = *plVar8, *(long *)(lVar5 + 0xc0) == *(long *)(lVar5 + 200) &&
              (*(long *)(lVar5 + 0x60) == *(long *)(lVar5 + 0x68))) &&
             ((*(long *)(lVar5 + 0xf0) == *(long *)(lVar5 + 0xf8) &&
              (*(long *)(lVar5 + 0x90) == *(long *)(lVar5 + 0x98)))))) {
        plVar6 = plVar7 + 1;
        *plVar7 = lVar5;
        plVar8 = plVar8 + 1;
        plVar7 = plVar6;
        if (plVar2 == plVar8) goto LAB_006d3c6c;
      }
      FUN_006d1840(lVar5,*param_1,param_1[1]);
    }
  }
LAB_006d3c6c:
  plVar7 = (long *)param_1[0x18];
  if (plVar7 != plVar6) {
    FUN_006d1840(*plVar7,*param_1,param_1[1]);
    while (plVar7 = plVar7 + 1, plVar7 != plVar6) {
      FUN_006d1840(*plVar7,*param_1,param_1[1]);
    }
  }
  param_1[0x19] = param_1[0x18];
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x4c));
  return;
}


