/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d5480; name: FUN_011d5480
 */


void FUN_011d5480(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x94));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011d54f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011d54f0:
  plVar7 = *(long **)(lVar8 + 0x60);
  plVar2 = *(long **)(lVar8 + 0x68);
  if (plVar7 != plVar2) {
    if (*plVar7 != param_2) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar2 == plVar7) goto LAB_011d554c;
      } while (*plVar7 != param_2);
    }
    if (plVar7 != plVar2) {
      sVar5 = (long)plVar2 - (long)(plVar7 + 1);
      if (sVar5 != 0) {
        memmove(plVar7,plVar7 + 1,sVar5);
      }
      *(long **)(lVar8 + 0x68) = plVar7 + ((long)sVar5 >> 3);
    }
  }
LAB_011d554c:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x94));
  lVar8 = *(long *)(param_1 + 0x28);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x94));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011d55ac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011d55ac:
  plVar7 = *(long **)(lVar8 + 0x60);
  plVar2 = *(long **)(lVar8 + 0x68);
  if (plVar7 != plVar2) {
    if (*plVar7 != param_3) {
      do {
        plVar7 = plVar7 + 1;
        if (plVar2 == plVar7) goto LAB_011d5608;
      } while (*plVar7 != param_3);
    }
    if (plVar7 != plVar2) {
      sVar5 = (long)plVar2 - (long)(plVar7 + 1);
      if (sVar5 != 0) {
        memmove(plVar7,plVar7 + 1,sVar5);
      }
      *(long **)(lVar8 + 0x68) = plVar7 + ((long)sVar5 >> 3);
    }
  }
LAB_011d5608:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x94));
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2c0) = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8);
  if (lVar6 != 0) {
    *(undefined8 *)(lVar6 + 0x168) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011d56a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  return;
}


