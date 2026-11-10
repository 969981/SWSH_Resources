/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141e970; name: FUN_0141e970
 */


void FUN_0141e970(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [96];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    puVar6 = *(undefined8 **)(*(long *)(*(long *)(param_1 + 0x68) + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar6)(puVar6);
    lVar5 = FUN_01410b60();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
    lVar7 = puVar6[2];
    lVar5 = nn::os::GetCurrentThread();
    plVar4 = (long *)(lVar7 + 0x70);
    do {
      if (*plVar4 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 100));
          while (*plVar4 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = lVar5;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_0141ea18;
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
LAB_0141ea18:
    local_c0 = PTR_LAB_02728010;
    local_b8 = (code *)PTR_FUN_02728018;
    local_b0 = PTR_LAB_02728020;
    local_a8 = PTR_LAB_02728028;
    FUN_012d5b10(lVar7,0x9cb5fece937e82bf,&local_c0,1);
    pcVar3 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = (undefined *)0x0;
      local_a8 = (undefined *)0x0;
      local_c0 = (undefined *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar3)(auStack_a0);
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 100));
    (**(code **)(**(long **)(param_1 + 0x68) + 0x58))();
    lVar5 = *(long *)(*(long *)(param_1 + 0x68) + 0x428);
    if (lVar5 == 0) {
      FUN_01420690(0);
      lVar5 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_01420690(lVar5);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      lVar5 = *(long *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
  }
  return;
}


