/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012eecd0; name: FUN_012eecd0
 */


void FUN_012eecd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *local_70;
  undefined8 *local_68;
  long local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  local_58 = *(long **)(param_1 + 8);
  local_70 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x430);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_012eed48;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_012eed48:
  puVar10 = local_70;
  plVar2 = (long *)(param_1 + 0xf8);
  if (&local_70 == (undefined8 **)plVar2) {
    lVar9 = *plVar2;
    lVar7 = *(long *)(param_1 + 0x100);
    if (lVar7 == lVar9) goto LAB_012eee38;
  }
  else {
    puVar5 = local_68;
    if (local_58 != *(long **)(param_1 + 0x110)) {
      while (puVar6 = puVar5, puVar6 != puVar10) {
        pcVar8 = (code *)puVar6[-0xf];
        puVar5 = puVar6 + -0x10;
        if (pcVar8 != (code *)0x0) {
          puVar6[-0xe] = 0;
          puVar6[-0xd] = 0;
          puVar6[-0x10] = 0;
          puVar6[-0xf] = 0;
          (*pcVar8)(puVar6 + -0xc);
        }
      }
      local_68 = puVar10;
      (**(code **)(*local_58 + 0x18))(local_58,local_70,local_60 - (long)local_70,0x10);
      local_68 = (undefined8 *)0x0;
      local_60 = 0;
      local_70 = (undefined8 *)0x0;
      local_58 = *(long **)(param_1 + 0x110);
    }
    FUN_012f3ee0(&local_70,*(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x100));
    lVar9 = *plVar2;
    lVar7 = *(long *)(param_1 + 0x100);
    if (*(long *)(param_1 + 0x100) == lVar9) goto LAB_012eee38;
  }
  do {
    pcVar8 = *(code **)(lVar7 + -0x78);
    lVar11 = lVar7 + -0x80;
    if (pcVar8 != (code *)0x0) {
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      (*pcVar8)(lVar7 + -0x60);
    }
    lVar7 = lVar11;
  } while (lVar9 != lVar11);
LAB_012eee38:
  *(long *)(param_1 + 0x100) = lVar9;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
  puVar6 = local_68;
  puVar5 = local_70;
  for (puVar10 = local_70; local_70 = puVar5, puVar10 != puVar6; puVar10 = puVar10 + 0x10) {
    (*(code *)*puVar10)(puVar10 + 4);
    puVar5 = local_70;
  }
  puVar10 = local_68;
  if (puVar5 != (undefined8 *)0x0) {
    while (puVar6 = puVar10, puVar6 != puVar5) {
      pcVar8 = (code *)puVar6[-0xf];
      puVar10 = puVar6 + -0x10;
      if (pcVar8 != (code *)0x0) {
        puVar6[-0xe] = 0;
        puVar6[-0xd] = 0;
        puVar6[-0x10] = 0;
        puVar6[-0xf] = 0;
        (*pcVar8)(puVar6 + -0xc);
      }
    }
    local_68 = puVar5;
    (**(code **)(*local_58 + 0x18))(local_58,local_70,local_60 - (long)local_70,0x10);
  }
  if (((*(char *)(param_1 + 0x68) != '\0') && (*(int *)(param_1 + 0x94) == 3)) &&
     (5.0 <= *(float *)(param_1 + 0x398))) {
    FUN_012eef40(param_1);
    FUN_012ef1c0(param_1);
    *(undefined4 *)(param_1 + 0x398) = 0;
  }
  *(float *)(param_1 + 0x398) = *(float *)(param_1 + 0x398) + DAT_01d4bfc8;
  return;
}


