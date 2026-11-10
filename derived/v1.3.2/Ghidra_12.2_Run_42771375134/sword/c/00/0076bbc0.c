/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076bbc0; name: FUN_0076bbc0
 */


void FUN_0076bbc0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long local_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x48);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0076bc2c;
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
LAB_0076bc2c:
  plVar7 = *(long **)(param_1 + 8);
  plVar8 = *(long **)(param_1 + 0x10);
  if (plVar7 == plVar8) {
LAB_0076bc9c:
    plVar6 = plVar7;
    if (plVar7 != plVar8) {
      while (plVar6 = plVar6 + 1, plVar6 != plVar8) {
        while (*plVar6 == 0) {
          local_48 = 0;
          plVar6 = plVar6 + 1;
          if (plVar8 == plVar6) goto LAB_0076bd34;
        }
        FUN_0076c3b0(&local_48);
        if (local_48 != 0) {
          FUN_00761f30(local_48,param_2,param_3);
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
            local_48 = 0;
          }
          if (*plVar7 != 0) {
            (**(code **)(*(long *)(*plVar7 + 0x48) + 0x18))();
            *plVar7 = 0;
          }
          lVar4 = *plVar6;
          *plVar6 = 0;
          *plVar7 = lVar4;
          plVar7 = plVar7 + 1;
        }
      }
    }
LAB_0076bd34:
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar7 == plVar6) goto LAB_0076bdc0;
  }
  else {
    do {
      if (*plVar7 == 0) {
        local_48 = 0;
        goto LAB_0076bc9c;
      }
      FUN_0076c3b0(&local_48);
      if (local_48 == 0) goto LAB_0076bc9c;
      FUN_00761f30(local_48,param_2,param_3);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar8 != plVar7);
    plVar6 = *(long **)(param_1 + 0x10);
    plVar7 = plVar8;
    if (plVar8 == plVar6) goto LAB_0076bdc0;
  }
  if ((long *)((long)plVar7 + ((long)plVar6 - (long)plVar7)) != plVar6) {
    lVar4 = (long)plVar6 - (long)plVar7 >> 3;
    plVar8 = plVar7;
    do {
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        *plVar8 = 0;
      }
      lVar5 = plVar8[lVar4];
      plVar8[lVar4] = 0;
      plVar7 = plVar8 + 1;
      *plVar8 = lVar5;
      plVar8 = plVar7;
    } while (plVar6 + -lVar4 != plVar7);
    plVar6 = *(long **)(param_1 + 0x10);
  }
  if (plVar6 != plVar7) {
    do {
      plVar8 = plVar6 + -1;
      if (*plVar8 != 0) {
        (**(code **)(*(long *)(*plVar8 + 0x48) + 0x18))();
        plVar6[-1] = 0;
      }
      plVar6 = plVar8;
    } while (plVar7 != plVar8);
  }
  *(long **)(param_1 + 0x10) = plVar7;
LAB_0076bdc0:
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c));
  return;
}


