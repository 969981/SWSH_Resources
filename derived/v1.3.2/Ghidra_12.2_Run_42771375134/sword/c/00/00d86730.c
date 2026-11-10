/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d86730; name: FUN_00d86730
 */


void FUN_00d86730(undefined8 param_1)

{
  long lVar1;
  long local_28;
  undefined8 local_18;
  
  lVar1 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  local_18 = param_1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  FUN_00d867c0(&local_28,lVar1,&local_18);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


