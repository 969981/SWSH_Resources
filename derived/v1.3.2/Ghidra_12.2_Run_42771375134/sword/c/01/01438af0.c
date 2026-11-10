/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01438af0; name: FUN_01438af0
 */


void FUN_01438af0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *local_68;
  long *local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  char local_34 [4];
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0))
  {
    uVar8 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar8;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  local_60 = (long *)&DAT_31cd8398c3f1dd29;
  local_58 = "matching_status";
  local_50 = 0xf;
  local_48 = 0;
  lVar5 = FUN_0141fc70(puVar10[0x9f],&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = *(long *)(param_1 + 0x428);
  *(long *)(param_1 + 0x428) = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  lVar5 = FUN_01410b60();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  FUN_0143f9e0(puVar10[2],0x6a368cfd19f9e7f9,param_1 + 0xb40);
  local_34[0] = '\0';
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar10)(puVar10);
  lVar5 = FUN_01410b60();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  uVar7 = FUN_0142bd00(puVar10[2],0xb562943c93a7ecfe,local_34);
  if ((uVar7 & 1) == 0) {
    puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar10)(puVar10);
    lVar5 = FUN_01410b60();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
    lVar6 = puVar10[2];
    lVar5 = nn::os::GetCurrentThread();
    plVar4 = (long *)(lVar6 + 0x70);
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar6 + 100));
          while (*plVar4 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01438d6c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01438d6c:
    lVar5 = FUN_012d5dd0(lVar6,0x1e6024bab2bcdbec);
    if (lVar5 == lVar6 + 0x980) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 100));
      FUN_01438fc0(&local_60,*(undefined8 *)(param_1 + 8));
      lVar5 = *(long *)(param_1 + 0x3c0);
    }
    else {
      pcVar9 = *(code **)(lVar5 + 0x18);
      if (pcVar9 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (*pcVar9)(lVar5 + 0x30);
      }
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 100));
      FUN_014390e0(&local_60,*(undefined8 *)(param_1 + 8));
      lVar5 = *(long *)(param_1 + 0x3c0);
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x3c0) = 0;
    }
    *(long **)(param_1 + 0x3c0) = local_60;
    plVar4 = local_60;
  }
  else {
    FUN_01438ea0(&local_60,*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x3c0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x3c0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x3c0) = 0;
    }
    plVar4 = local_60;
    *(long **)(param_1 + 0x3c0) = local_60;
    *(char *)(param_1 + 0xab0) = local_34[0];
    if (local_34[0] == '\0') {
      FUN_01438fc0(&local_60,*(undefined8 *)(param_1 + 8));
      local_68 = local_60;
      local_60 = (long *)0x0;
      FUN_0141e0f0(plVar4,&local_68);
      if (local_68 != (long *)0x0) {
        (**(code **)(local_68[9] + 0x18))();
        local_68 = (long *)0x0;
      }
      plVar4 = *(long **)(param_1 + 0x3c0);
    }
  }
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}


