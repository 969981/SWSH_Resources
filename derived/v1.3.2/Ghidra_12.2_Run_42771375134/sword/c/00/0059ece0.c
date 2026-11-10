/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0059ece0; name: FUN_0059ece0
 */


uint FUN_0059ece0(long *param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    param_2 = param_1[4];
  }
  (**(code **)(*param_1 + 8))(param_1);
  uVar1 = (**(code **)*param_1)(param_1,param_2);
  return uVar1 & (int)uVar1 >> 0x1f;
}


