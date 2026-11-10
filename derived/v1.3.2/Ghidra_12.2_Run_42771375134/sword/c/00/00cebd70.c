/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cebd70; name: FUN_00cebd70
 */


void FUN_00cebd70(long param_1)

{
  undefined8 uVar1;
  long local_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x5e8);
  local_28 = *(long *)(param_1 + 0x5f0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x5e8),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x5e8));
  return;
}


