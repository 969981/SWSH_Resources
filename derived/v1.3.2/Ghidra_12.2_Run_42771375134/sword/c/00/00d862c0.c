/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d862c0; name: FUN_00d862c0
 */


void FUN_00d862c0(long param_1,uint param_2)

{
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  if (param_2 < 2) {
    local_30 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(&local_40);
    local_38 = local_40;
    local_40 = 0;
    FUN_00ca3a20(&local_30,&local_38,param_1 + 0x58);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
      local_30 = 0;
    }
  }
  if ((param_2 | 2) == 2) {
    local_48 = local_28;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
    }
    (**(code **)(**(long **)(param_1 + 0xf8) + 0x10))(&local_40);
    local_50 = local_40;
    local_40 = 0;
    FUN_00ca3a20(&local_48,&local_50,param_1 + 0x58);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
      local_50 = 0;
    }
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
      local_40 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


