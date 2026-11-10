/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00723e00; name: FUN_00723e00
 */


void FUN_00723e00(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x48);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00723e64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_00723e64:
  FUN_00723f50(param_1);
  if (param_2 != 0) {
    lVar5 = *(long *)(param_2 + 0x58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    plVar2 = *(long **)(param_1 + 0x10);
    local_38 = lVar5;
    if (plVar2 < *(long **)(param_1 + 0x18)) {
      uVar7 = *(undefined8 *)(param_1 + 0x20);
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      lVar5 = local_38;
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      local_38 = 0;
      *plVar2 = lVar5;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 8;
    }
    else {
      FUN_00724230(param_1 + 8,&local_38);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3c));
  return;
}


