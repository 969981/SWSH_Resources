/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb5930; name: FUN_00eb5930
 */


void FUN_00eb5930(long *param_1)

{
  long local_38;
  long local_30;
  long local_28;
  long local_18;
  
  FUN_00eb3b90(param_1,1);
  FUN_00c58c00(&local_18,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  local_28 = local_18;
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
  }
  (**(code **)(*param_1 + 0x10))(&local_38,param_1);
  local_30 = local_38;
  local_38 = 0;
  FUN_00ca1dc0(&local_28,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return;
}


