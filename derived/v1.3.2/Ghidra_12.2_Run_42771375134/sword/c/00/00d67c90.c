/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d67c90; name: FUN_00d67c90
 */


/* WARNING: Removing unreachable block (ram,0x00d67d44) */

void FUN_00d67c90(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(*param_2 + 0x170);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar7 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x14c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d67d00;
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
LAB_00d67d00:
  lVar8 = *(long *)(*param_2 + 0x178);
  lVar5 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar8 + 0x158);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d67d64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d67d64:
  lVar6 = *(long *)(param_1 + 0x70);
  lVar5 = lVar6;
  if (*(long *)(lVar6 + 0x120) != 0) {
    lVar5 = *(long *)(lVar6 + 0x120);
  }
  if (*(long *)(lVar6 + 0x128) != 0) {
    lVar6 = *(long *)(lVar6 + 0x128);
  }
  FUN_006d15e0(lVar7,lVar5,lVar6);
  lVar6 = *(long *)(param_1 + 0x78);
  lVar5 = lVar6;
  if (*(long *)(lVar6 + 0x120) != 0) {
    lVar5 = *(long *)(lVar6 + 0x120);
  }
  if (*(long *)(lVar6 + 0x128) != 0) {
    lVar6 = *(long *)(lVar6 + 0x128);
  }
  FUN_006d15e0(lVar8,lVar5,lVar6);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x14c));
  return;
}


