/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078d690; name: FUN_0078d690
 */


void FUN_0078d690(long param_1,undefined8 param_2)

{
  long local_28;
  
  local_28 = *(long *)(param_1 + 0x238);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  FUN_0078e4f0(param_2,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  FUN_00790640(*(undefined8 *)(param_1 + 0x238),param_2);
  return;
}


