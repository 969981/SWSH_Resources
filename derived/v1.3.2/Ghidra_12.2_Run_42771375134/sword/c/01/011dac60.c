/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dac60; name: FUN_011dac60
 */


void FUN_011dac60(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x20);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x94));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011dacd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011dacd0:
  plVar8 = *(long **)(lVar9 + 0x60);
  plVar2 = *(long **)(lVar9 + 0x68);
  if (plVar8 != plVar2) {
    if (*plVar8 != param_2) {
      do {
        plVar8 = plVar8 + 1;
        if (plVar2 == plVar8) goto LAB_011dad2c;
      } while (*plVar8 != param_2);
    }
    if (plVar8 != plVar2) {
      sVar5 = (long)plVar2 - (long)(plVar8 + 1);
      if (sVar5 != 0) {
        memmove(plVar8,plVar8 + 1,sVar5);
      }
      *(long **)(lVar9 + 0x68) = plVar8 + ((long)sVar5 >> 3);
    }
  }
LAB_011dad2c:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x94));
  lVar9 = *(long *)(param_1 + 0x28);
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0xa0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x94));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_011dad8c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_011dad8c:
  plVar8 = *(long **)(lVar9 + 0x60);
  plVar2 = *(long **)(lVar9 + 0x68);
  if (plVar8 != plVar2) {
    if (*plVar8 != param_3) {
      do {
        plVar8 = plVar8 + 1;
        if (plVar2 == plVar8) goto LAB_011dade8;
      } while (*plVar8 != param_3);
    }
    if (plVar8 != plVar2) {
      sVar5 = (long)plVar2 - (long)(plVar8 + 1);
      if (sVar5 != 0) {
        memmove(plVar8,plVar8 + 1,sVar5);
      }
      *(long **)(lVar9 + 0x68) = plVar8 + ((long)sVar5 >> 3);
    }
  }
LAB_011dade8:
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x94));
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x48))();
    *(undefined8 *)(param_1 + 0x6c) = uVar6;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x30) + 0x50))();
    *(undefined8 *)(param_1 + 0x74) = uVar6;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x2c0) = 0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x2a8);
  if (lVar7 != 0) {
    *(undefined8 *)(lVar7 + 0x168) = 0;
  }
  lVar7 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (lVar7 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011dab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  return;
}


