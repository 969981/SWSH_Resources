/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012c7ca0; name: FUN_012c7ca0
 */


/* WARNING: Removing unreachable block (ram,0x012c7cfc) */
/* WARNING: Removing unreachable block (ram,0x012c7d90) */

void FUN_012c7ca0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *param_2;
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_012c7d1c;
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
LAB_012c7d1c:
  lVar5 = *(long *)(param_1 + 0x128);
  lVar4 = lVar5;
  if (*(long *)(lVar5 + 0x120) != 0) {
    lVar4 = *(long *)(lVar5 + 0x120);
  }
  if (*(long *)(lVar5 + 0x128) != 0) {
    lVar5 = *(long *)(lVar5 + 0x128);
  }
  FUN_006d15e0(lVar6,lVar4,lVar5);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  lVar6 = param_2[1];
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_012c7db0;
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
LAB_012c7db0:
  lVar5 = *(long *)(param_1 + 0x130);
  lVar4 = lVar5;
  if (*(long *)(lVar5 + 0x120) != 0) {
    lVar4 = *(long *)(lVar5 + 0x120);
  }
  if (*(long *)(lVar5 + 0x128) != 0) {
    lVar5 = *(long *)(lVar5 + 0x128);
  }
  FUN_006d15e0(lVar6,lVar4,lVar5);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  return;
}


