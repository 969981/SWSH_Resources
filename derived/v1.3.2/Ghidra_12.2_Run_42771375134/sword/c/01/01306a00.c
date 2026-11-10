/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01306a00; name: FUN_01306a00
 */


void FUN_01306a00(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long local_150 [32];
  long local_48;
  
  local_150[0x1f] = 0;
  local_150[0] = 0;
  local_150[0x1d] = 0;
  local_150[0x1e] = 0;
  local_150[0x1b] = 0;
  local_150[0x1c] = 0;
  local_150[0x19] = 0;
  local_150[0x1a] = 0;
  local_150[0x17] = 0;
  local_150[0x18] = 0;
  local_150[0x15] = 0;
  local_150[0x16] = 0;
  local_150[0x13] = 0;
  local_150[0x14] = 0;
  local_150[0x11] = 0;
  local_150[0x12] = 0;
  local_150[0xf] = 0;
  local_150[0x10] = 0;
  local_150[0xd] = 0;
  local_150[0xe] = 0;
  local_150[0xb] = 0;
  local_150[0xc] = 0;
  local_150[9] = 0;
  local_150[10] = 0;
  local_150[7] = 0;
  local_150[8] = 0;
  local_150[5] = 0;
  local_150[6] = 0;
  local_150[3] = 0;
  local_150[4] = 0;
  local_150[1] = 0;
  local_150[2] = 0;
  lVar3 = nn::os::GetCurrentThread();
  plVar5 = (long *)(param_1 + 0xe8);
  do {
    if (*plVar5 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
        while (*plVar5 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_01306aac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_01306aac:
  lVar3 = 0;
  do {
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + lVar3);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)((long)local_150 + lVar3);
    *(long *)((long)local_150 + lVar3) = lVar6;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x100);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xdc));
  lVar3 = 0;
  do {
    lVar6 = *(long *)((long)local_150 + lVar3);
    if (lVar6 != 0) {
      plVar5 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar5 + 0x10))(plVar5);
      local_48 = lVar6;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      (*(code *)*param_2)(param_2 + 4,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x100);
  FUN_01306bb0(local_150);
  return;
}


