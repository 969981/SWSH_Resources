/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002af3c0; name: FUN_002af3c0
 */


undefined2 FUN_002af3c0(ulong param_1,undefined8 *param_2)

{
  undefined2 local_14;
  
  (**(code **)*param_2)(param_2,&local_14,2);
  if ((param_1 & 1) != 0) {
    local_14 = CONCAT11((undefined1)local_14,local_14._1_1_);
  }
  return local_14;
}


