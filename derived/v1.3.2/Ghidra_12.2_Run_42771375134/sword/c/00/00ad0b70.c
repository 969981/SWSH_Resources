/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad0b70; name: FUN_00ad0b70
 */


void FUN_00ad0b70(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_38;
  long local_28;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x3c0) + 0x528);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_2 + 0x510);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a1d0(&local_28,lVar1,&local_38);
  FUN_00ad2020(param_1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


