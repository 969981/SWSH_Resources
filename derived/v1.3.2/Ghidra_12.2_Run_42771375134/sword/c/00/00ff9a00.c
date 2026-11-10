/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ff9a00; name: FUN_00ff9a00
 */


void FUN_00ff9a00(long param_1,undefined8 *param_2)

{
  undefined8 local_18;
  
  (**(code **)(*(long *)*param_2 + 0x10))(&local_18);
  if (*(long *)(param_1 + 0x70) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x70) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = local_18;
  FUN_00ffb9c0(param_1 + 0x100,param_1,*(undefined8 *)(param_1 + 8));
  return;
}


