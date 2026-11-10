/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013da610; name: FUN_013da610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013da610(long param_1)

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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long local_48;
  long local_38;
  
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  lVar8 = FUN_0132d9a0();
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
          if (cVar1 == '\0') goto LAB_013da6ac;
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
LAB_013da6ac:
  lVar8 = FUN_012d5dd0(lVar11,0xdd987ff4bfdd3315);
  if (lVar8 == lVar11 + 0x980) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar11 + 100));
    return;
  }
  pcVar9 = *(code **)(lVar8 + 0x18);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x20) = 0;
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (*pcVar9)(lVar8 + 0x30);
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
  FUN_013da870(param_1);
  FUN_013dad20(param_1);
  local_60 = 0x669f64813dc33129;
  puStack_58 = &DAT_01d01704;
  local_38 = 0;
  local_50 = 4;
  local_48 = 0;
  FUN_014aed90(&local_60,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_60 = 0;
  puStack_58 = (undefined *)0x0;
  uStack_68 = _UNK_01d4b6c8;
  local_70 = _DAT_01d4b6c0;
  FUN_00d940b0(*(undefined8 *)PTR_DAT_02710868,0,0,&local_60,&local_70,10,0,0);
  *(undefined1 *)(param_1 + 0x4bc) = 1;
  pcVar9 = *(code **)(param_1 + 0x4d8);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    *(undefined8 *)(param_1 + 0x4e8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    (*pcVar9)(param_1 + 0x4f0);
  }
  puVar6 = PTR_LAB_027293b0;
  *(long *)(param_1 + 0x4f0) = param_1;
  puVar3 = PTR_LAB_02729318;
  *(undefined8 *)(param_1 + 0x500) = 0;
  puVar5 = PTR_LAB_02729328;
  puVar4 = PTR_LAB_02729320;
  *(undefined **)(param_1 + 0x4f8) = puVar6;
  *(undefined **)(param_1 + 0x4d0) = puVar3;
  *(undefined **)(param_1 + 0x4d8) = puVar4;
  *(undefined **)(param_1 + 0x4e0) = puVar5;
  *(undefined **)(param_1 + 0x4e8) = PTR_LAB_02729330;
  return;
}


