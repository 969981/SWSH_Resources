/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01003580; name: FUN_01003580
 */


void FUN_01003580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_48;
  
  FUN_00105f80(local_80,"bin/battle/data_table/trainer_data.prmb");
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x58) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x58) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x60) != 0) || (*(long *)(param_1 + 0xe0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x50,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
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
  FUN_01003a20(local_80,"bin/battle/data_table/poke_data.prmb");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x168) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x170) != 0) || (*(long *)(param_1 + 0x1f0) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x160,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
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
  FUN_00aba220(local_80,"bin/battle/default_placement/battle_default_placement_data.bin");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x278) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x278) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x278) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x280) != 0) || (*(long *)(param_1 + 0x300) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x270,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
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
  FUN_00a8e040(local_80,"bin/battle/common/battle_common_field_parameter.bin");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x388) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x388) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x388) = 0;
  }
  lVar2 = local_48;
  *(long *)(param_1 + 0x388) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x390) != 0) || (*(long *)(param_1 + 0x410) != 0)) {
      FUN_006e1e70(lVar2,param_1 + 0x380,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
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
  FUN_00a66de0(local_80,"bin/battle/data_table/battle_talk.prmb");
  FUN_006dccd0(&local_48,*(undefined8 *)puVar1,1,local_80,0,param_2,0);
  if (*(long *)(param_1 + 0x498) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x498) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x498) = 0;
  }
  *(long *)(param_1 + 0x498) = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((*(long *)(param_1 + 0x4a0) != 0) || (*(long *)(param_1 + 0x520) != 0)) {
      FUN_006e1e70(local_48,param_1 + 0x490,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
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


