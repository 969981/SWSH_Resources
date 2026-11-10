/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ac8d10; name: FUN_00ac8d10
 */


void FUN_00ac8d10(long *param_1,ulong param_2)

{
  long local_38;
  undefined4 local_30 [2];
  long local_28;
  
  if ((param_2 & 1) == 0) {
    local_30[0] = 0x80008080;
  }
  else {
    local_30[0] = 0x80038070;
  }
  (**(code **)(*param_1 + 0x10))(&local_38,param_1);
  local_28 = FUN_00acceb0(&local_28,param_1[1],&local_38,local_30);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_006d9640(param_1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


