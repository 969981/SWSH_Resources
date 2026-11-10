/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cf520; name: FUN_006cf520
 */


void FUN_006cf520(long *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  byte *pbVar8;
  ulong local_58;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x60);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x54));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_006cf590;
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
LAB_006cf590:
  local_58 = 0xcbf29ce484222645;
  bVar2 = *param_3;
  pbVar8 = param_3;
  while (bVar2 != 0) {
    pbVar8 = pbVar8 + 1;
    local_58 = (local_58 ^ bVar2) * 0x100000001b3;
    bVar2 = *pbVar8;
  }
  plVar6 = (long *)FUN_006cf700(param_2 + 0x68,&local_58);
  lVar5 = *plVar6;
  *param_1 = lVar5;
  if (lVar5 == 0) {
    plVar6 = *(long **)(param_2 + 8);
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar6;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,0x78,8);
    if (lVar7 == 0) {
      (**(code **)(*plVar6 + 0xb8))(plVar6);
    }
    FUN_006cf160(lVar7,param_3);
    *(long **)(lVar7 + 8) = plVar6;
    *(long *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar7 + 0x18) = 0x78;
    *(undefined8 *)(lVar7 + 0x20) = 8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    if (*param_1 != 0) {
      (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
      *param_1 = 0;
    }
    *param_1 = lVar7;
    plVar6 = (long *)FUN_006cf700(param_2 + 0x68,&local_58);
    *plVar6 = lVar7;
  }
  else {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x54));
  return;
}


