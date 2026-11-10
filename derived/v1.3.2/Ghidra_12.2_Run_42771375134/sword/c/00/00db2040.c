/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db2040; name: FUN_00db2040
 */


undefined8 FUN_00db2040(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long local_90;
  undefined8 *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_38;
  
  puVar1 = PTR_DAT_02710848;
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar6 = local_38;
  (**(code **)(*param_1 + 0x10))(&local_50,param_1);
  local_48 = local_50;
  local_50 = 0;
  uVar3 = FUN_00c79ee0(lVar6,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  FUN_00c58c00(&local_48,*(undefined8 *)(*(long *)puVar1 + 0x78));
  lVar6 = local_48;
  (**(code **)(*param_1 + 0x10))(&local_38,param_1);
  local_58 = local_38;
  local_38 = 0;
  FUN_00c79f40(lVar6,param_2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar6 = local_48;
  (**(code **)(*param_1 + 0x10))(&local_50,param_1);
  local_60 = local_50;
  local_50 = 0;
  FUN_00c7a1d0(&local_38,lVar6,&local_60);
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  lVar6 = local_38;
  local_38 = 0;
  param_1[0x31] = lVar6;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (param_1[0x31] != 0) {
    puVar7 = *(undefined8 **)(param_1[0x31] + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_00db224c;
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    if (((*PTR_DAT_02715b80 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_02715b80), iVar2 != 0)) {
      uVar5 = FUN_00727dd0();
      *(undefined8 *)PTR_DAT_02715b88 = uVar5;
      __cxa_guard_release(PTR_DAT_02715b80);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)PTR_DAT_02715b88) {
        puVar7 = puVar7 + -10;
        goto LAB_00db224c;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_00db224c:
  lVar6 = local_48;
  (**(code **)(*param_1 + 0x10))(&local_38,param_1);
  local_68 = local_38;
  local_38 = 0;
  local_70 = *(long *)(*param_3 + 0x58);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_00c7a130(lVar6,&local_68,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  local_38 = 0;
  FUN_007273c0(puVar7,0,&local_38);
  FUN_01052a10(*param_3,puVar7);
  lVar6 = local_48;
  (**(code **)(*param_1 + 0x10))(&local_50,param_1);
  local_78 = local_50;
  local_50 = 0;
  FUN_00c7a400(&local_38,lVar6,&local_78);
  if (param_1[0x32] != 0) {
    (**(code **)(*(long *)(param_1[0x32] + 0x48) + 0x18))();
    param_1[0x32] = 0;
  }
  lVar6 = local_38;
  local_38 = 0;
  param_1[0x32] = lVar6;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_027194d8 + 0x110);
  if (lVar6 != 0) {
    plVar4 = (long *)(lVar6 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    if (*(int *)(lVar6 + 0x54) != 0) {
      local_88 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        (**(code **)(puVar7[9] + 0x10))();
      }
      FUN_00d78d40(&local_38,lVar6);
      local_90 = local_38;
      local_38 = 0;
      FUN_00da16f0(&local_80,&local_88,&local_90,1);
      if (local_80 != 0) {
        (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
        local_80 = 0;
      }
      if (local_90 != 0) {
        (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
        local_90 = 0;
      }
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)(local_88[9] + 0x18))();
        local_88 = (undefined8 *)0x0;
      }
      FUN_00727800(puVar7,1);
    }
    (**(code **)(*plVar4 + 0x18))(plVar4);
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return 1;
}


