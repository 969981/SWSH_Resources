/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076b9b0; name: FUN_0076b9b0
 */


void FUN_0076b9b0(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long local_58;
  long local_48;
  
  puVar4 = PTR_DAT_02710860;
  plVar8 = (long *)*param_2;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
LAB_0076bbbc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0xd0,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_00761870(lVar6,param_3,0,0);
  *(long **)(lVar6 + 8) = plVar8;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0xd0;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  *param_1 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar8 = param_2 + 9;
  do {
    if (*plVar8 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_2 + 0x3c));
        while (*plVar8 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar3) {
            *plVar8 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0076bacc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0076bacc:
  (**(code **)(*(long *)*param_1 + 0x10))(&local_58);
  local_48 = local_58;
  local_58 = 0;
  plVar1 = (long *)param_2[2];
  if (plVar1 < (long *)param_2[3]) {
    uVar7 = param_2[4];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
    lVar5 = local_48;
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_0076bbbc;
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    local_48 = 0;
    *plVar1 = lVar5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    param_2[2] = param_2[2] + 8;
  }
  else {
    FUN_0076c1a0(param_2 + 1,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_2 + 0x3c));
  return;
}


