/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00790950; name: FUN_00790950
 */


int FUN_00790950(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long local_48;
  undefined1 auStack_38 [4];
  int local_34;
  
  lVar3 = nn::os::GetCurrentThread();
  plVar6 = (long *)(param_1 + 0x628);
  do {
    if (*plVar6 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x61c));
        while (*plVar6 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar3;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_007909b8;
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
LAB_007909b8:
  if (*(long *)(param_1 + 0x608) == 0) {
    iVar5 = *(int *)(param_1 + 0x500);
    *(int *)(param_1 + 0x500) = iVar5 + 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x608) + -1;
    iVar5 = *(int *)(param_1 + lVar3 * 4 + 0x508);
    *(long *)(param_1 + 0x608) = lVar3;
  }
  *(ulong *)(param_1 + 0x610) =
       1L << ((long)iVar5 - (long)*(int *)(param_1 + 0x4f8) & 0x3fU) | *(ulong *)(param_1 + 0x610);
  *(int *)(param_1 + 0x504) = *(int *)(param_1 + 0x504) + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar2) {
      *plVar6 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x61c));
  local_48 = param_1;
  local_34 = iVar5;
  lVar3 = FUN_00792960(auStack_38,*(undefined8 *)(param_1 + 8),&local_48,&local_34);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  lVar4 = *(long *)(param_2 + 0xa0);
  *(long *)(param_2 + 0xa0) = lVar3;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return local_34;
}


