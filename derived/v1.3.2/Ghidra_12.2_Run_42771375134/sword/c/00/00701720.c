/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00701720; name: FUN_00701720
 */


/* WARNING: Removing unreachable block (ram,0x00701a60) */
/* WARNING: Removing unreachable block (ram,0x00701c20) */

void FUN_00701720(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long local_58;
  long local_48;
  
  FUN_00700120(param_1,0,0);
  puVar3 = PTR_DAT_02715920;
  *param_1 = (long)(PTR_DAT_02715920 + 0x10);
  param_1[9] = (long)(puVar3 + 0xa0);
  param_1[10] = (long)(puVar3 + 0xe0);
  plVar6 = param_1 + 0x16;
  *plVar6 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar3 = PTR_DAT_02710860;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x19] = lVar4;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (((lVar4 == 0) || (*(long *)(lVar4 + 0x80) == 0)) ||
     (lVar4 = *(long *)(lVar4 + *(long *)(lVar4 + 0x80) * 8 + -8), lVar4 == 0)) {
    lVar4 = FUN_0075ecb0();
  }
  param_1[0x1f] = lVar4;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  FUN_006cee90((long)param_1 + 0x114,1,0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  plVar8 = (long *)param_1[1];
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
LAB_00701cb0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x2a0,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_007030e0(lVar5,param_1);
  *(long **)(lVar5 + 8) = plVar8;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x2a0;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  FUN_006d1120(lVar5);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  *(undefined4 *)(lVar5 + 0x298) = 0;
  if (param_1[0xe] != 0) {
    (**(code **)(*(long *)(param_1[0xe] + 0x48) + 0x18))();
    param_1[0xe] = 0;
  }
  param_1[0xe] = lVar5;
  lVar4 = FUN_00703a50(&local_48,param_1[1]);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (param_1[0x25] != 0) {
    (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
    param_1[0x25] = 0;
  }
  param_1[0x25] = lVar4;
  if ((param_2 & 1) != 0) {
    plVar8 = (long *)FUN_00703b30(&local_48,param_1[1],PTR_DAT_02715928);
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x10))();
    }
    if (param_1[0x26] != 0) {
      (**(code **)(*(long *)(param_1[0x26] + 0x48) + 0x18))();
      param_1[0x26] = 0;
    }
    param_1[0x26] = (long)plVar8;
    (**(code **)(*plVar8 + 0x40))(plVar8,param_1[0x25]);
    (**(code **)(*(long *)param_1[0x26] + 0x10))(&local_58);
    local_48 = local_58;
    local_58 = 0;
    plVar8 = (long *)param_1[0x17];
    if (plVar8 < (long *)param_1[0x18]) {
      lVar7 = param_1[0x19];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      lVar4 = local_48;
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00701cb0;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      local_48 = 0;
      *plVar8 = lVar4;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[0x17] = param_1[0x17] + 8;
    }
    else {
      FUN_00703c20(plVar6,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar5 = *(long *)(param_1[0x26] + 0x70);
    lVar4 = nn::os::GetCurrentThread();
    plVar8 = (long *)(lVar5 + 0x158);
    do {
      if (*plVar8 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
          while (*plVar8 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
            if (bVar2) {
              *plVar8 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00701a80;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00701a80:
    lVar7 = param_1[0xe];
    lVar4 = lVar7;
    if (*(long *)(lVar7 + 0x120) != 0) {
      lVar4 = *(long *)(lVar7 + 0x120);
    }
    if (*(long *)(lVar7 + 0x128) != 0) {
      lVar7 = *(long *)(lVar7 + 0x128);
    }
    FUN_006d15e0(lVar5,lVar4,lVar7);
    *(ulong *)(lVar5 + 0x138) = *(ulong *)(lVar5 + 0x138) & 0xfffffffffffffffe;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
    plVar8 = (long *)FUN_00703e30(&local_48,param_1[1],PTR_DAT_02715930);
    if (plVar8 != (long *)0x0) {
      (**(code **)(plVar8[9] + 0x10))();
    }
    if (param_1[0x27] != 0) {
      (**(code **)(*(long *)(param_1[0x27] + 0x48) + 0x18))();
      param_1[0x27] = 0;
    }
    param_1[0x27] = (long)plVar8;
    (**(code **)(*plVar8 + 0x40))(plVar8,param_1[0x25]);
    (**(code **)(*(long *)param_1[0x27] + 0x10))(&local_58);
    local_48 = local_58;
    local_58 = 0;
    plVar8 = (long *)param_1[0x17];
    if (plVar8 < (long *)param_1[0x18]) {
      lVar7 = param_1[0x19];
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
      lVar4 = local_48;
      if (0xf < *(ulong *)(lVar5 + 0x80)) goto LAB_00701cb0;
      *(long *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = lVar7;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
      local_48 = 0;
      *plVar8 = lVar4;
      *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
      param_1[0x17] = param_1[0x17] + 8;
    }
    else {
      FUN_00703c20(plVar6,&local_48);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        local_48 = 0;
      }
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar5 = *(long *)(param_1[0x27] + 0x70);
    lVar4 = nn::os::GetCurrentThread();
    plVar6 = (long *)(lVar5 + 0x158);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x14c));
          while (*plVar6 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar4;
              cVar1 = ExclusiveMonitorsStatus();
            }
            if (cVar1 == '\0') goto LAB_00701c40;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar4;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
LAB_00701c40:
    lVar7 = param_1[0xe];
    lVar4 = lVar7;
    if (*(long *)(lVar7 + 0x120) != 0) {
      lVar4 = *(long *)(lVar7 + 0x120);
    }
    if (*(long *)(lVar7 + 0x128) != 0) {
      lVar7 = *(long *)(lVar7 + 0x128);
    }
    FUN_006d15e0(lVar5,lVar4,lVar7);
    *(ulong *)(lVar5 + 0x138) = *(ulong *)(lVar5 + 0x138) & 0xfffffffffffffffe;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = 0;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x14c));
  }
  FUN_006e9f10(*(undefined8 *)PTR_DAT_02710910,param_1);
  return;
}


