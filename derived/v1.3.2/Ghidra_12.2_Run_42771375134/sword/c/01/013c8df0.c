/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c8df0; name: FUN_013c8df0
 */


undefined8 FUN_013c8df0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1[0xd] + 0x68) + 0x60);
  plVar3 = (long *)(**(code **)*puVar6)(puVar6);
  lVar4 = FUN_0132d9a0();
  for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
  }
  lVar7 = puVar6[2];
  lVar4 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar7 + 0x70);
  do {
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 100));
        while (*plVar3 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar4;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013c8e8c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_013c8e8c:
  lVar4 = FUN_012d5dd0(lVar7,0x9cb5fece937e82bf);
  if (lVar4 == lVar7 + 0x980) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 100));
    puVar6 = *(undefined8 **)(*(long *)(param_1[0xd] + 0x68) + 0x60);
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_0132d9a0();
    for (; plVar3 != (long *)lVar4; plVar3 = (long *)*plVar3) {
    }
    lVar7 = puVar6[2];
    lVar4 = nn::os::GetCurrentThread();
    plVar3 = (long *)(lVar7 + 0x70);
    do {
      if (*plVar3 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 100));
          while (*plVar3 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_013c8fa8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_013c8fa8:
    lVar4 = FUN_012d5dd0(lVar7,0xad00e0f88cb1d08a);
    if (lVar4 == lVar7 + 0x980) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 100));
      return 0;
    }
    pcVar5 = *(code **)(lVar4 + 0x18);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      (*pcVar5)(lVar4 + 0x30);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 100));
    lVar4 = param_1[0xf];
    if (lVar4 == 0) {
      (**(code **)(*param_1 + 0x38))(param_1,param_1[0xd]);
      return 1;
    }
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar7 = param_1[0xe];
    param_1[0xe] = lVar4;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      lVar4 = param_1[0xf];
      param_1[0xf] = 0;
      goto joined_r0x013c9034;
    }
  }
  else {
    pcVar5 = *(code **)(lVar4 + 0x18);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(lVar4 + 0x20) = 0;
      *(undefined8 *)(lVar4 + 0x28) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *(undefined8 *)(lVar4 + 0x18) = 0;
      (*pcVar5)(lVar4 + 0x30);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 100));
  }
  lVar4 = param_1[0xf];
  param_1[0xf] = 0;
joined_r0x013c9034:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  return 1;
}


