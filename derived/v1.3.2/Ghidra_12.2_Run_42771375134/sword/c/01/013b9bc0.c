/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013b9bc0; name: FUN_013b9bc0
 */


void FUN_013b9bc0(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0 [12];
  
  puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar4 = (long *)(**(code **)*puVar11)(puVar11);
  lVar5 = FUN_0132d9a0();
  for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
  }
  lVar12 = puVar11[2];
  lVar5 = nn::os::GetCurrentThread();
  plVar4 = (long *)(lVar12 + 0x70);
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 100));
        while (*plVar4 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar5;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_013b9c60;
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
LAB_013b9c60:
  local_c0 = PTR_LAB_02729040;
  local_b8 = (code *)PTR_FUN_02729048;
  local_b0 = PTR_LAB_02729050;
  local_a8 = PTR_LAB_02729058;
  local_a0[0] = param_1 + 0x490;
  FUN_012d5b10(lVar12,0x94203cd73a4a7649,&local_c0,0);
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(local_a0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 100));
  iVar3 = FUN_0132a1f0(param_1 + 0x1d0);
  if ((iVar3 < 2) || (uVar6 = FUN_013b95c0(param_1), (uVar6 & 1) == 0)) {
    pcVar8 = *(code **)(param_1 + 0x158);
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar8)(param_1 + 0x170);
    }
    puVar9 = &LAB_013c0090;
    *(undefined1 **)(param_1 + 0x150) = &LAB_013c0060;
    *(undefined1 **)(param_1 + 0x158) = &LAB_013c0070;
    puVar10 = &LAB_013c0080;
  }
  else {
    if (*(char *)(param_1 + 0x9a8) == '\0') {
      *(undefined8 *)(param_1 + 0x9b0) = 0;
      nn::os::GetSystemTick();
      uVar7 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0x998) = uVar7;
      *(undefined1 *)(param_1 + 0x9a8) = 1;
      pcVar8 = *(code **)(param_1 + 0x158);
    }
    else {
      pcVar8 = *(code **)(param_1 + 0x158);
    }
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x160) = 0;
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x150) = 0;
      *(undefined8 *)(param_1 + 0x158) = 0;
      (*pcVar8)(param_1 + 0x170);
    }
    *(long *)(param_1 + 0x170) = param_1;
    puVar9 = &LAB_013c0050;
    *(undefined1 **)(param_1 + 0x150) = &LAB_013c0010;
    *(undefined1 **)(param_1 + 0x158) = &LAB_013c0030;
    puVar10 = &LAB_013c0040;
  }
  *(undefined1 **)(param_1 + 0x160) = puVar10;
  *(undefined1 **)(param_1 + 0x168) = puVar9;
  return;
}


