/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524e10; name: FUN_01524e10
 */


uint FUN_01524e10(long param_1,uint param_2)

{
  if (0x98967e < param_2) {
    param_2 = 9999999;
  }
  *(uint *)(param_1 + 0x130) = param_2;
  return param_2;
}


