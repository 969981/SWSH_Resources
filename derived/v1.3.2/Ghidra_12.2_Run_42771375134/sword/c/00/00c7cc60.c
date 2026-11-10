/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c7cc60; name: FUN_00c7cc60
 */


undefined8 FUN_00c7cc60(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long local_18;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    local_18 = 0;
  }
  else {
    FUN_00c80dd0(&local_18);
  }
  uVar1 = FUN_00cbe970(local_18,param_2);
  if (local_18 != 0) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  return uVar1;
}


