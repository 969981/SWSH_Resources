/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b3260; name: FUN_013b3260
 */


void FUN_013b3260(long param_1,undefined8 param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_a0;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x70);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_013b32d4;
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
LAB_013b32d4:
  uVar2 = *param_3;
  lVar6 = param_3[1];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = param_3[2];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_c0 = (undefined *)0x0;
  local_b8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  local_c8 = (code *)0x0;
  local_b0 = uVar2;
  lStack_a8 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_a0 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_d0 = PTR_LAB_02728fd0;
  local_c8 = (code *)PTR_FUN_02728fd8;
  local_c0 = PTR_LAB_02728fe0;
  local_b8 = PTR_LAB_02728fe8;
  FUN_012d5b10(param_1,param_2,&local_d0,param_4 & 1);
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(&local_b0);
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  return;
}


