/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136c7d0; name: FUN_0136c7d0
 */


void FUN_0136c7d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  long local_70;
  undefined1 auStack_68 [24];
  long local_50;
  undefined8 local_48;
  long local_38;
  
  local_48 = param_2;
  lVar5 = FUN_012c7170();
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x10);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 4));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0136c840;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0136c840:
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(lVar6 + 0x688) == 0) {
    if (((*PTR_DAT_02715558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_02715558), iVar4 != 0)) {
      lVar8 = FUN_006e5e60();
      *(long *)PTR_DAT_02715560 = lVar8;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      FUN_001001c0(PTR_LAB_02715568,PTR_DAT_02715560,&PTR_LOOP_025db000);
      __cxa_guard_release(PTR_DAT_02715558);
    }
    local_a0[0] = *(long *)PTR_DAT_02715560;
    if (local_a0[0] != 0) {
      (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x10))();
    }
  }
  else {
    FUN_006e7120(local_a0,*(long *)(lVar6 + 0x688),&local_48);
  }
  FUN_006cf0c0(auStack_68,local_a0);
  if (local_a0[0] != 0) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
    local_a0[0] = 0;
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  FUN_0136cac0(&local_70,"bin/pokemon_data/pokecamp/monohiroi/",auStack_68,&DAT_01cfd905);
  FUN_00a83620(local_a0,&local_70);
  uVar7 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,8);
  FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_a0,0,
               *(undefined8 *)(param_1 + 0x58),uVar7);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_38;
  if (local_38 != 0) {
    plVar9 = (long *)(local_38 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(local_38,param_1 + 0x60,1);
    }
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 4));
  return;
}


