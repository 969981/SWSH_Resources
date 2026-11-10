/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00701e00; name: FUN_00701e00
 */


/* WARNING: Removing unreachable block (ram,0x00701f98) */

void FUN_00701e00(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_48;
  long local_38;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x120);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x114));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00701e68;
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
LAB_00701e68:
  (**(code **)(*param_2 + 0x10))(&local_48,param_2);
  local_38 = local_48;
  local_48 = 0;
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 < *(long **)(param_1 + 0xc0)) {
    uVar8 = *(undefined8 *)(param_1 + 200);
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    lVar5 = local_38;
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    local_38 = 0;
    *plVar2 = lVar5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 8;
  }
  else {
    FUN_00703c20(param_1 + 0xb0,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x114));
  (**(code **)(*param_2 + 0x40))(param_2,*(undefined8 *)(param_1 + 0x128));
  lVar6 = param_2[0xe];
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar6 + 0x158);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x14c));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00701fb8;
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
LAB_00701fb8:
  lVar7 = *(long *)(param_1 + 0x70);
  lVar5 = lVar7;
  if (*(long *)(lVar7 + 0x120) != 0) {
    lVar5 = *(long *)(lVar7 + 0x120);
  }
  if (*(long *)(lVar7 + 0x128) != 0) {
    lVar7 = *(long *)(lVar7 + 0x128);
  }
  FUN_006d15e0(lVar6,lVar5,lVar7);
  *(ulong *)(lVar6 + 0x138) = *(ulong *)(lVar6 + 0x138) & 0xfffffffffffffffe;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x14c));
  return;
}


