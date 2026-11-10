/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01511aa0; name: FUN_01511aa0
 */


void FUN_01511aa0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  int iVar4;
  size_t sVar5;
  undefined8 uVar6;
  long *plVar7;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  char *local_48;
  
  puVar1 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/system_flags.tbl",puVar1,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/system_flags.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015164d0(&local_48,PTR_s_data___02710918,"bin/flagwork/system_flags.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  puVar1 = PTR_DAT_02710788;
  FUN_010138d0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x68) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0xf0) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x60,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/vanish_flags.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/vanish_flags.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015164d0(&local_48,PTR_s_data___02710918,"bin/flagwork/vanish_flags.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x178) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x178) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x178) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x180) != 0) || (*(long *)(param_1 + 0x200) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x170,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/field/param/placement/table/VanishFlagAutoTable.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/field/param/placement/table/VanishFlagAutoTable.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_00a8cf50(&local_48,PTR_s_data___02710918,
                 "bin/field/param/placement/table/VanishFlagAutoTable.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  uVar6 = FUN_00da0ab0(*(undefined8 *)PTR_DAT_0271e770,3);
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,uVar6);
  if (*(long *)(param_1 + 0x288) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x288) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x290) != 0) || (*(long *)(param_1 + 0x310) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x280,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/event_flags.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/event_flags.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015165a0(&local_48,PTR_s_data___02710918,"bin/flagwork/event_flags.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x398) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x398) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x3a0) != 0) || (*(long *)(param_1 + 0x420) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x390,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/trainer/trainer_id_hash_table.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/trainer/trainer_id_hash_table.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_01001b40(&local_48,PTR_s_data___02710918,"bin/trainer/trainer_id_hash_table.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x4a8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x4a8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x4a8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x4b0) != 0) || (*(long *)(param_1 + 0x530) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x4a0,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/time_flags.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/time_flags.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_01516670(&local_48,PTR_s_data___02710918,"bin/flagwork/time_flags.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x5b8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5b8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5b8) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x5b8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x5c0) != 0) || (*(long *)(param_1 + 0x640) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x5b0,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/system_works.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/system_works.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015164d0(&local_48,PTR_s_data___02710918,"bin/flagwork/system_works.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x6c8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x6c8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x6c8) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x6c8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x6d0) != 0) || (*(long *)(param_1 + 0x750) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x6c0,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/scene_works.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/scene_works.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015165a0(&local_48,PTR_s_data___02710918,"bin/flagwork/scene_works.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x7d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x7d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x7d8) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x7d8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x7e0) != 0) || (*(long *)(param_1 + 0x860) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 2000,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  puVar2 = PTR_s_data___02710918;
  sVar5 = strlen(PTR_s_data___02710918);
  iVar4 = strncmp("bin/flagwork/event_works.tbl",puVar2,sVar5);
  if (iVar4 == 0) {
    local_48 = "bin/flagwork/event_works.tbl";
    FUN_00d99c10(local_80,&local_48,0);
  }
  else {
    FUN_015165a0(&local_48,PTR_s_data___02710918,"bin/flagwork/event_works.tbl");
    FUN_006e5870(local_80,&local_48,0);
    if (local_48 != (char *)0x0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = (char *)0x0;
    }
  }
  FUN_010138d0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x8e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8e8) = 0;
  }
  pcVar3 = local_48;
  *(char **)(param_1 + 0x8e8) = local_48;
  if (local_48 != (char *)0x0) {
    plVar7 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((*(long *)(param_1 + 0x8f0) != 0) || (*(long *)(param_1 + 0x970) != 0)) {
      FUN_006e1e70(pcVar3,param_1 + 0x8e0,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


