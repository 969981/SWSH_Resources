/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014471b0; name: FUN_014471b0
 */


void FUN_014471b0(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long alStack_120 [12];
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0 [24];
  
  *(undefined8 *)(param_1 + 0x94) = 0;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar10)(puVar10);
  puVar3 = PTR_DAT_02717528;
  puVar11 = (undefined8 *)PTR_DAT_02717530;
  if (((*PTR_DAT_02717528 & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), puVar11 = (undefined8 *)PTR_DAT_02717530,
     iVar4 != 0)) {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
    puVar11 = (undefined8 *)PTR_DAT_02717530;
  }
  for (; plVar5 != puVar11; plVar5 = (long *)*plVar5) {
  }
  local_c0 = (undefined *)0x875199982d72dba;
  local_b8 = (code *)&DAT_01d1b4d1;
  local_b0 = (undefined *)0x4;
  local_a8 = (undefined *)0x0;
  PTR_DAT_02717530 = (undefined *)puVar11;
  uVar6 = FUN_01421de0(puVar10[0x9f],&local_c0);
  if (local_a8 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined *)0x0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar10)(puVar10);
  if (((*puVar3 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0)) {
    uVar6 = FUN_00b8c810();
    *puVar11 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar5 != puVar11; plVar5 = (long *)*plVar5) {
  }
  local_c0 = (undefined *)0x306820c73ecd4d91;
  local_b8 = (code *)0x1d017ae;
  local_b0 = (undefined *)0x6;
  local_a8 = (undefined *)0x0;
  lVar7 = FUN_014149c0(puVar10[0x9f],&local_c0);
  if (local_a8 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = (undefined *)0x0;
  }
  *(long *)(param_1 + 0x88) = lVar7;
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x5cc) != '\0')) {
    FUN_01415450(lVar7);
  }
  lVar7 = *(long *)(param_1 + 0x80);
  pcVar9 = *(code **)(lVar7 + 0x5d8);
  alStack_120[0] = param_1;
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x5e0) = 0;
    *(undefined8 *)(lVar7 + 0x5e8) = 0;
    *(undefined8 *)(lVar7 + 0x5d0) = 0;
    *(undefined8 *)(lVar7 + 0x5d8) = 0;
    (*pcVar9)(lVar7 + 0x5f0);
  }
  FUN_01449290(alStack_120,lVar7 + 0x5f0);
  *(undefined1 **)(lVar7 + 0x5e8) = &LAB_014492a0;
  *(code **)(lVar7 + 0x5d8) = FUN_01449280;
  *(code **)(lVar7 + 0x5e0) = FUN_01449290;
  *(undefined8 *)(lVar7 + 0x5d0) = &LAB_01449270;
  FUN_01449280(alStack_120);
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_01410b60();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar7) {
        puVar11 = puVar11 + -10;
        goto LAB_01447420;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_01447420:
  FUN_0140e0b0(puVar11,0);
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar5 = (long *)(**(code **)*puVar11)(puVar11);
  lVar7 = FUN_01410b60();
  for (; plVar5 != (long *)lVar7; plVar5 = (long *)*plVar5) {
  }
  if (*(char *)((long)puVar11 + 0x2c) == '\0') {
    FUN_01447720(param_1,0);
    lVar7 = *(long *)(param_1 + 0x68);
  }
  else {
    FUN_01422400(*(undefined8 *)(param_1 + 0x80));
    *(undefined4 *)(param_1 + 0x78) = 1;
    if ((*(long *)(param_1 + 0x68) != 0) &&
       (puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar11 != (undefined8 *)0x0))
    {
      plVar5 = (long *)(**(code **)*puVar11)(puVar11);
      lVar7 = FUN_01410b60();
      for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        if (plVar5 == (long *)lVar7) {
          puVar11 = puVar11 + -10;
          goto LAB_014474b4;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
LAB_014474b4:
    FUN_0140e0b0(puVar11,1);
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_01410b60();
    for (; plVar5 != (long *)lVar7; plVar5 = (long *)*plVar5) {
    }
    lVar12 = puVar11[2];
    lVar7 = nn::os::GetCurrentThread();
    plVar5 = (long *)(lVar12 + 0x70);
    do {
      if (*plVar5 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar12 + 100));
          while (*plVar5 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_01447588;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_01447588:
    local_a0[0] = 1;
    local_c0 = PTR_LAB_02729070;
    local_b8 = (code *)PTR_FUN_02729078;
    local_b0 = PTR_LAB_02729080;
    local_a8 = PTR_LAB_02729088;
    FUN_012d5b10(lVar12,0x235cabb6df3dbe20,&local_c0,1);
    pcVar9 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar9)(local_a0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar12 + 100));
    puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_01410b60();
    for (; plVar5 != (long *)lVar7; plVar5 = (long *)*plVar5) {
    }
    *(undefined1 *)((long)puVar11 + 0x2c) = 0;
    lVar7 = *(long *)(param_1 + 0x68);
  }
  if ((lVar7 != 0) && (puVar11 = *(undefined8 **)(lVar7 + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar11)(puVar11);
    lVar7 = FUN_01410b60();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar7) {
        puVar11 = puVar11 + -10;
        goto LAB_01447650;
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
LAB_01447650:
  FUN_0140e5a0(&local_c0,puVar11);
  uVar8 = FUN_01329820(local_c0);
  if (local_c0 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = (undefined *)0x0;
  }
  FUN_01422690(*(undefined8 *)(param_1 + 0x80),(uVar8 & 1) != 0);
  return;
}


