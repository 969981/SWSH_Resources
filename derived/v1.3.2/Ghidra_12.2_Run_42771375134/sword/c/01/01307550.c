/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01307550; name: FUN_01307550
 */


long FUN_01307550(long param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long local_158 [33];
  
  local_158[0x1e] = 0;
  local_158[0x1f] = 0;
  local_158[0x1c] = 0;
  local_158[0x1d] = 0;
  local_158[0x1a] = 0;
  local_158[0x1b] = 0;
  local_158[0x18] = 0;
  local_158[0x19] = 0;
  local_158[0x16] = 0;
  local_158[0x17] = 0;
  local_158[0x14] = 0;
  local_158[0x15] = 0;
  local_158[0x12] = 0;
  local_158[0x13] = 0;
  local_158[0x10] = 0;
  local_158[0x11] = 0;
  local_158[0xe] = 0;
  local_158[0xf] = 0;
  local_158[0xc] = 0;
  local_158[0xd] = 0;
  local_158[10] = 0;
  local_158[0xb] = 0;
  local_158[8] = 0;
  local_158[9] = 0;
  local_158[6] = 0;
  local_158[7] = 0;
  local_158[4] = 0;
  local_158[5] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[0] = 0;
  local_158[1] = 0;
  lVar3 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0xe8);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xdc));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013075fc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = lVar3;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_013075fc:
  lVar3 = 0;
  do {
    lVar7 = *(long *)(*(long *)(param_1 + 0xf0) + lVar3);
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)((long)local_158 + lVar3);
    *(long *)((long)local_158 + lVar3) = lVar7;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x100);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xdc));
  lVar7 = 0;
  lVar3 = 0;
  do {
    lVar4 = *(long *)((long)local_158 + lVar7);
    if (lVar4 != 0) {
      if (*param_2 != 0) {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        local_158[0x20] = lVar4;
        (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar5 = (*(code *)*param_2)(param_2 + 4,local_158 + 0x20);
        if (local_158[0x20] != 0) {
          (**(code **)(*(long *)(local_158[0x20] + 0x48) + 0x18))();
          local_158[0x20] = 0;
        }
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if ((uVar5 & 1) == 0) goto LAB_013076e4;
      }
      lVar3 = lVar3 + 1;
    }
LAB_013076e4:
    lVar7 = lVar7 + 8;
    if (lVar7 == 0x100) {
      FUN_01306bb0(local_158);
      return lVar3;
    }
  } while( true );
}


