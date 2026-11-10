/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00def150; name: FUN_00def150
 */


void FUN_00def150(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  
  puVar4 = PTR_DAT_02710848;
  if (*(char *)(param_1 + 0xe3) != '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xe8);
  plVar8 = *(long **)(param_1 + 0x70);
  if (iVar3 == 1) {
    local_50 = 0xa5f7d5afebf3bfd;
    local_48 = "fi_wait_type";
    local_40 = 0xc;
    lVar6 = *(long *)PTR_DAT_02710848;
  }
  else {
    if (iVar3 == 3) {
      FUN_006cf0a0(&local_50,&DAT_026537f0);
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,5);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0xf39d0c2019596ff3;
      local_48 = "fi_common_event";
      local_40 = 0xf;
      local_38 = 0;
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,5);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x6f5d089c1c3de9c9;
      local_48 = "speak";
      local_40 = 5;
      local_38 = 0;
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,3);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(PTR_DAT_0271ed60 + 0x98);
      return;
    }
    if (iVar3 != 2) {
      return;
    }
    puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar7 = uVar2 ^ uVar1;
    *puVar5 = uVar7 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar7 << 0x10;
    puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    if (((int)uVar2 + (int)uVar1 & 3U) == 0) {
      local_50 = 0xf39d0c2019596ff3;
      local_48 = "fi_common_event";
      local_40 = 0xf;
      local_38 = 0;
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,5);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        local_38 = 0;
      }
      FUN_006cf0a0(&local_50,&DAT_026537f0);
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,5);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      local_50 = 0x6f5d089c1c3de9c9;
      local_48 = "speak";
      local_40 = 5;
      local_38 = 0;
      (**(code **)(*plVar8 + 400))(plVar8,&local_50,3);
      goto joined_r0x00def334;
    }
    FUN_006cf0a0(&local_50,&DAT_026537f0);
    (**(code **)(*plVar8 + 400))(plVar8,&local_50,*(undefined4 *)(param_1 + 0xfc));
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0xf39d0c2019596ff3;
    local_48 = "fi_common_event";
    local_40 = 0xf;
    local_38 = 0;
    puVar5 = *(ulong **)(*(long *)puVar4 + 0x98);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar7 = uVar2 ^ uVar1;
    *puVar5 = uVar7 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar7 << 0x10;
    puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
    (**(code **)(*plVar8 + 400))(plVar8,&local_50,(int)uVar2 + (int)uVar1 & 1U | 2);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    local_50 = 0x6f5d089c1c3de9c9;
    local_48 = "speak";
    local_40 = 5;
    lVar6 = *(long *)puVar4;
  }
  local_38 = 0;
  puVar5 = *(ulong **)(lVar6 + 0x98);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar7 = uVar2 ^ uVar1;
  *puVar5 = uVar7 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar7 << 0x10;
  puVar5[1] = uVar7 >> 0x1b | uVar7 << 0x25;
  (**(code **)(*plVar8 + 400))(plVar8,&local_50,((int)uVar2 + (int)uVar1 & 3U) + 1);
joined_r0x00def334:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


