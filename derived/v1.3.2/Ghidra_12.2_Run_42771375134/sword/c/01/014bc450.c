/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bc450; name: FUN_014bc450
 */


void FUN_014bc450(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long local_88 [2];
  undefined1 *local_78;
  long local_70;
  long local_68;
  long local_58;
  
  FUN_0010d170(local_88,*(undefined8 *)(param_2 + 8));
  if (*(long *)(param_1 + 0x68) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x68) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(long *)(param_1 + 0x68) = local_88[0];
  if ((param_4 & 1) == 0) {
    FUN_014bfd20(local_88,param_2,param_3);
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,0,local_88,0,*(undefined8 *)(param_1 + 8)
                 ,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    lVar2 = local_58;
    *(long *)(param_1 + 0x78) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((*(long *)(param_1 + 0x80) != 0) || (*(long *)(param_1 + 0x100) != 0)) {
        FUN_006e1e70(lVar2,param_1 + 0x70,1);
      }
      FUN_006e1be0(lVar2);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_70 != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_78 = &DAT_01d38550;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_014c0480(local_88,param_2,param_3);
    FUN_010138d0(&local_58,*(undefined8 *)puVar1,0,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    *(long *)(param_1 + 0x188) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((*(long *)(param_1 + 400) != 0) || (*(long *)(param_1 + 0x210) != 0)) {
        FUN_006e1e70(local_58,param_1 + 0x180,1);
      }
      FUN_006e1be0(local_58);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_70 != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_78 = &DAT_01d38550;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_014bc870(param_1);
  }
  else {
    FUN_014bfd20(local_88,param_2,param_3);
    puVar1 = PTR_DAT_02710788;
    FUN_006dccd0(&local_58,*(undefined8 *)PTR_DAT_02710788,1,local_88,0,*(undefined8 *)(param_1 + 8)
                 ,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x78) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    lVar2 = local_58;
    *(long *)(param_1 + 0x78) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((*(long *)(param_1 + 0x80) != 0) || (*(long *)(param_1 + 0x100) != 0)) {
        FUN_006e1e70(lVar2,param_1 + 0x70,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_70 != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_78 = &DAT_01d38550;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_014c0480(local_88,param_2,param_3);
    FUN_010138d0(&local_58,*(undefined8 *)puVar1,1,local_88,0,*(undefined8 *)(param_1 + 8),0);
    if (*(long *)(param_1 + 0x188) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x188) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    *(long *)(param_1 + 0x188) = local_58;
    if (local_58 != 0) {
      plVar3 = (long *)(local_58 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((*(long *)(param_1 + 400) != 0) || (*(long *)(param_1 + 0x210) != 0)) {
        FUN_006e1e70(local_58,param_1 + 0x180,1);
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_70 != 0) && (local_88[0] != 0)) {
      (**(code **)(*(long *)(local_88[0] + 0x48) + 0x18))();
    }
    local_88[0] = 0;
    local_88[1] = 0xcbf29ce484222645;
    local_78 = &DAT_01d38550;
    local_70 = 0;
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  return;
}


