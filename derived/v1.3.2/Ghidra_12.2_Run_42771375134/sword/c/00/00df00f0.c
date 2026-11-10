/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df00f0; name: FUN_00df00f0
 */


void FUN_00df00f0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  (**(code **)(**(long **)(param_1 + 0x70) + 0x10))(&local_28);
  FUN_00c58c00(&local_38,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  *(undefined1 *)(param_1 + 0xa0) = 1;
  if ((param_3 & 1) == 0) {
    local_58 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_60 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f690(DAT_01d4bf34,&local_58,&local_60,param_2);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    uVar3 = FUN_01593610(lVar4 + 0x50);
    lVar1 = local_68;
    lVar2 = local_50;
    if ((uVar3 & 1) != 0) {
      local_68 = lVar4;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
      FUN_00e7fce0(&local_68,param_2,2,0,1,1);
      lVar1 = 0;
      lVar2 = local_50;
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
        lVar1 = local_68;
        lVar2 = local_50;
      }
    }
  }
  else {
    local_40 = local_38;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    local_48 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    FUN_00e7f690(DAT_01d4bb48,&local_40,&local_48,param_2);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    lVar4 = *(long *)(param_1 + 0x70);
    uVar3 = FUN_01593610(lVar4 + 0x50);
    lVar1 = local_68;
    lVar2 = local_50;
    if ((uVar3 & 1) != 0) {
      local_50 = lVar4;
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))((long *)(lVar4 + 0x48));
      FUN_00e7fce0(&local_50,param_2,4,0,1,1);
      lVar1 = local_68;
      lVar2 = 0;
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
        lVar1 = local_68;
        lVar2 = local_50;
      }
    }
  }
  local_50 = lVar2;
  local_68 = lVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


