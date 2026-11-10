/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01327600; name: FUN_01327600
 */


void FUN_01327600(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_48;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x78);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01327674;
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
LAB_01327674:
  local_60 = 0;
  local_58 = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x60);
  if (lVar4 == 0) {
    FUN_0101cb00(0,&local_60);
  }
  else {
    plVar7 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    FUN_0101cb00(lVar4,&local_60);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  FUN_014ad910(&local_80,*param_4);
  puVar5 = (undefined8 *)FUN_00c79e90(*(undefined8 *)(param_1 + 0x60),0x1a);
  uVar6 = *puVar5;
  (**(code **)(*(long *)*param_2 + 0x10))(&local_48);
  local_a0 = local_48;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  local_d0 = local_80;
  local_cc = local_7c;
  local_c8 = local_78;
  local_c4 = local_74;
  local_c0 = local_70;
  local_b8 = local_68;
  local_e0[0] = 0;
  local_a8 = 1;
  local_d8 = param_3;
  local_b0 = uVar6;
  if (local_a0 == 0) {
    local_90 = local_58;
    local_98 = local_60;
    local_88 = 0;
    local_84 = 0;
  }
  else {
    plVar7 = (long *)(local_a0 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    local_90 = local_58;
    local_98 = local_60;
    local_88 = 0;
    local_84 = 0;
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  FUN_00c79ed0(&local_e8,*(undefined8 *)(param_1 + 0x60),1,local_e0);
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = 0;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


