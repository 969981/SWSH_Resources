/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a5db0; name: FUN_004a5db0
 */


undefined8 FUN_004a5db0(undefined8 *param_1,long *param_2)

{
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1);
    (**(code **)(*param_2 + 0x18))(param_2,param_1);
  }
  return 1;
}


