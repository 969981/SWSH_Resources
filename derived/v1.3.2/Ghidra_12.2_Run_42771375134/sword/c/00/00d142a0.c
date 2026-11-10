/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d142a0; name: FUN_00d142a0
 */


void FUN_00d142a0(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar8 = *(long *)(*param_3 + 0x80);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar8 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar8 + 0x14c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d1432c;
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
LAB_00d1432c:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x2b8) + 0x80);
  lVar5 = lVar6;
  if (*(long *)(lVar6 + 0x120) != 0) {
    lVar5 = *(long *)(lVar6 + 0x120);
  }
  if (*(long *)(lVar6 + 0x128) != 0) {
    lVar6 = *(long *)(lVar6 + 0x128);
  }
  FUN_006d15e0(lVar8,lVar5,lVar6);
  lVar5 = *(long *)(*param_3 + 0x88);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar5 + 0x158);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
        while (*plVar2 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00d143c8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00d143c8:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x2b8) + 0x88);
  lVar6 = lVar7;
  if (*(long *)(lVar7 + 0x120) != 0) {
    lVar6 = *(long *)(lVar7 + 0x120);
  }
  if (*(long *)(lVar7 + 0x128) != 0) {
    lVar7 = *(long *)(lVar7 + 0x128);
  }
  FUN_006d15e0(lVar5,lVar6,lVar7);
  if (*(long *)(param_1 + 0x328) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x328) + 0x80);
    if (lVar6 == 0) {
      FUN_006d1640(lVar8,0,0);
      lVar6 = *(long *)(*(long *)(param_1 + 0x328) + 0x88);
    }
    else {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      FUN_006d1640(lVar8,lVar6,0);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar6 = *(long *)(*(long *)(param_1 + 0x328) + 0x88);
    }
    if (lVar6 == 0) {
      FUN_006d1640(lVar5,0,0);
      lVar6 = *param_3;
      goto joined_r0x00d14488;
    }
    plVar9 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_006d1640(lVar5,lVar6,0);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  lVar6 = *param_3;
joined_r0x00d14488:
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(param_1 + 0x328);
  *(long *)(param_1 + 0x328) = lVar6;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  FUN_00d17b20(param_2 + 0xc0,param_3);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar4) {
      *plVar2 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 0x14c));
  return;
}


