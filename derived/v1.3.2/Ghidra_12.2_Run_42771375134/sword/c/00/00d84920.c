/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d84920; name: FUN_00d84920
 */


void FUN_00d84920(long param_1,uint param_2)

{
  long lVar1;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar1 = local_28;
  if (param_2 < 2) {
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(&local_50);
    local_48 = local_50;
    local_50 = 0;
    FUN_00c7a130(lVar1,&local_38,&local_48);
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
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  lVar1 = local_28;
  if ((param_2 | 2) == 2) {
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(&local_40);
    local_58 = local_40;
    local_40 = 0;
    (**(code **)(**(long **)(param_1 + 0x110) + 0x10))(&local_50);
    local_60 = local_50;
    local_50 = 0;
    FUN_00c7a130(lVar1,&local_58,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


