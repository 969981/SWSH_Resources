/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d9640; name: FUN_006d9640
 */


void FUN_006d9640(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *local_48;
  
  plVar7 = (long *)*param_2;
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x1e;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0xe4));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006d96ac;
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
LAB_006d96ac:
  lVar6 = *param_2;
  (**(code **)(*param_1 + 0x10))(&local_48,param_1);
  if (*(long *)(lVar6 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(lVar6 + 0x68) = 0;
  }
  *(long **)(lVar6 + 0x68) = local_48;
  lVar6 = *param_2;
  *param_2 = 0;
  local_48 = (long *)0x0;
  if (lVar6 != 0) {
    local_48 = (long *)(lVar6 + 0x48);
  }
  plVar2 = (long *)param_1[0x23];
  if (plVar2 < (long *)param_1[0x24]) {
    lVar8 = param_1[0x25];
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    plVar5 = local_48;
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    local_48 = (long *)0x0;
    *plVar2 = (long)plVar5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    param_1[0x23] = param_1[0x23] + 8;
  }
  else {
    FUN_006d9b30(param_1 + 0x22,&local_48);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
      local_48 = (long *)0x0;
    }
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0xe4));
  (**(code **)(*plVar7 + 0x58))(plVar7);
  return;
}


