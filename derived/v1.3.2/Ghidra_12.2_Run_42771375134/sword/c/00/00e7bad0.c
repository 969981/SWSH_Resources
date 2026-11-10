/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7bad0; name: FUN_00e7bad0
 */


void FUN_00e7bad0(long *param_1,long *param_2)

{
  long lVar1;
  long local_40;
  long local_38;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar1 = local_28;
  local_40 = *param_2;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_38,lVar1,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  lVar1 = local_38;
  if (local_38 == 0) {
    *param_1 = 0;
  }
  else if (*(int *)(local_38 + 0x54) == 0) {
    *param_1 = 0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  else {
    local_38 = 0;
    *param_1 = lVar1;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


