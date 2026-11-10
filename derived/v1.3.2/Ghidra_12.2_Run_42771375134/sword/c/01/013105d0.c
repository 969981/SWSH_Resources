/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013105d0; name: FUN_013105d0
 */


undefined8 FUN_013105d0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x300);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x2f4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01310634;
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
LAB_01310634:
  plVar6 = *(long **)(param_1 + 0x1e0);
  plVar2 = *(long **)(param_1 + 0x1e8);
  if ((plVar6 != plVar2) && (*plVar6 != param_2)) {
    do {
      plVar6 = plVar6 + 1;
      if (plVar2 == plVar6) {
        uVar7 = 0;
        goto LAB_01310698;
      }
    } while (*plVar6 != param_2);
  }
  if (plVar6 == plVar2) {
    uVar7 = 0;
  }
  else {
    *plVar6 = plVar2[-1];
    uVar7 = 1;
    *(long *)(param_1 + 0x1e8) = *(long *)(param_1 + 0x1e8) + -8;
  }
LAB_01310698:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x2f4));
  return uVar7;
}


