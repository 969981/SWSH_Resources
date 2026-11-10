/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0141a2d0; name: FUN_0141a2d0
 */


void FUN_0141a2d0(long param_1,undefined8 param_2)

{
  long local_38;
  long local_30 [2];
  undefined8 local_18;
  
  local_30[1] = 0x26bde8b5d232a2f3;
  local_18 = param_2;
  FUN_00ff86a0(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),3);
  local_30[0] = *(long *)(local_38 + 0x60);
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x10))();
  }
  FUN_008c4e70(param_1 + 0x100,local_30 + 1,local_30,&local_18,10);
  if (local_30[0] != 0) {
    (**(code **)(*(long *)(local_30[0] + 0x48) + 0x18))();
    local_30[0] = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


