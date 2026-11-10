/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e4280; name: FUN_006e4280
 */


void FUN_006e4280(undefined8 *param_1,long param_2,Uid *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 local_c0;
  char *local_b8;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_48;
  int local_44;
  
  if ((*(long *)(param_2 + 0x1b0) == 0) && (*(int *)(param_2 + 0x17c) < *(int *)(param_2 + 0x180)))
  {
    FUN_006e5e10(param_1);
    return;
  }
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_2 + 0x1d0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x1c4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_006e432c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_006e432c:
  if (*(long *)(param_2 + 0x1b0) == 0) {
    iVar7 = *(int *)(param_2 + 0x180);
    *(int *)(param_2 + 0x180) = iVar7 + 1;
  }
  else {
    lVar4 = *(long *)(param_2 + 0x1b0) + -1;
    iVar7 = *(int *)(param_2 + lVar4 * 4 + 0x188);
    *(long *)(param_2 + 0x1b0) = lVar4;
  }
  *(ulong *)(param_2 + 0x1b8) =
       1L << ((long)iVar7 - (long)*(int *)(param_2 + 0x178) & 0x3fU) | *(ulong *)(param_2 + 0x1b8);
  *(int *)(param_2 + 0x184) = *(int *)(param_2 + 0x184) + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x1c4));
  local_c0 = 0;
  local_44 = iVar7;
  FUN_006e5a40(&local_a0,iVar7,param_2 + 0x14c,&local_c0,param_3);
  uVar5 = nn::fs::IsSaveDataExisting(param_3);
  if ((uVar5 & 1) == 0) {
    uVar6 = 3;
  }
  else {
    FUN_006e5ca0(&local_c0,&local_a0);
    local_48 = nn::fs::MountSaveData(local_b8,param_3);
    if (local_a8 != 0) {
      (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))((long *)(local_a8 + 0x48));
      local_a8 = 0;
    }
    if (local_48 != 0) {
      FUN_006e4150(param_2 + 0x178,&local_44);
      FUN_006e5e10(param_1);
      FUN_006e5e50(param_1,&local_48);
      if (local_70 == 0) {
        return;
      }
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      return;
    }
    FUN_006e5e50(&local_a0,&local_48);
    uVar6 = 2;
    iVar7 = local_44;
  }
  *(undefined4 *)(param_2 + (long)iVar7 * 4 + 0x14c) = uVar6;
  *(undefined4 *)(param_1 + 2) = local_90;
  *param_1 = local_a0;
  param_1[1] = uStack_98;
  param_1[3] = local_88;
  param_1[4] = uStack_80;
  param_1[9] = local_58;
  param_1[5] = local_78;
  param_1[6] = local_70;
  param_1[7] = local_68;
  param_1[8] = local_60;
  return;
}


