/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e45e40; name: FUN_00e45e40
 */


void FUN_00e45e40(long *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_38;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  if ((param_2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_50 = 0x6f5d089c1c3de9c9;
    local_48 = "speak";
    local_40 = 5;
    local_38 = 0;
    iVar2 = (**(code **)(*param_1 + 0x188))(param_1,&local_50,0);
    bVar1 = false;
    if (iVar2 == 0) {
      local_70 = 0x3cf22a9518ac7bc;
      local_68 = "mouth";
      local_60 = 5;
      local_58 = 0;
      iVar2 = (**(code **)(*param_1 + 0x188))(param_1,&local_70,0);
      bVar1 = iVar2 == 1;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
      local_78 = local_28;
      goto joined_r0x00e45f54;
    }
  }
  local_78 = local_28;
joined_r0x00e45f54:
  local_28 = local_78;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_50,param_1);
  local_80 = local_50;
  local_50 = 0;
  FUN_00ca3da0(&local_78,&local_80,param_2 & 1,bVar1);
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
    local_80 = 0;
  }
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


