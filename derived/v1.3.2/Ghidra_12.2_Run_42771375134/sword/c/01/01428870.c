/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01428870; name: FUN_01428870
 */


void FUN_01428870(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [96];
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  lVar8 = FUN_01410b60();
  for (; plVar7 != (long *)lVar8; plVar7 = (long *)*plVar7) {
  }
  lVar11 = puVar10[2];
  lVar8 = nn::os::GetCurrentThread();
  plVar7 = (long *)(lVar11 + 0x70);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 100));
        while (*plVar7 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar8;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_0142890c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = lVar8;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_0142890c:
  local_c0 = PTR_LAB_02728010;
  local_b8 = (code *)PTR_FUN_02728018;
  local_b0 = PTR_LAB_02728020;
  local_a8 = PTR_LAB_02728028;
  FUN_012d5b10(lVar11,0x3ae4eb77c42bde5f,&local_c0,1);
  pcVar9 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (undefined *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar9)(auStack_a0);
  }
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar2) {
      *plVar7 = 0;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 100));
  pcVar9 = *(code **)(param_1 + 0x88);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    (*pcVar9)(param_1 + 0xa0);
  }
  puVar6 = PTR_LAB_02729af0;
  puVar5 = PTR_LAB_02729ae8;
  puVar4 = PTR_LAB_02729ae0;
  puVar3 = PTR_LAB_02729ad8;
  *(long *)(param_1 + 0xa0) = param_1;
  *(undefined **)(param_1 + 0xa8) = puVar3;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar3 = PTR_LAB_02729af8;
  *(undefined **)(param_1 + 0x80) = puVar4;
  *(undefined **)(param_1 + 0x88) = puVar5;
  *(undefined **)(param_1 + 0x90) = puVar6;
  *(undefined **)(param_1 + 0x98) = puVar3;
  return;
}


