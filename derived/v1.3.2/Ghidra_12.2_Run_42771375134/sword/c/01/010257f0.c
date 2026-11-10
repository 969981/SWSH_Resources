/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010257f0; name: FUN_010257f0
 */


/* WARNING: Removing unreachable block (ram,0x01025854) */
/* WARNING: Removing unreachable block (ram,0x01025904) */

void FUN_010257f0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*param_2 != 0) {
    lVar6 = *(long *)(param_1 + 0x170);
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
            if (cVar2 == '\0') goto LAB_01025874;
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
LAB_01025874:
    lVar5 = *param_2;
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
  }
  if (param_2[1] == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x178);
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
          if (cVar2 == '\0') goto LAB_01025924;
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
LAB_01025924:
  lVar5 = param_2[1];
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


