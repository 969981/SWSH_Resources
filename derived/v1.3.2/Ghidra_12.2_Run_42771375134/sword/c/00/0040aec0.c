/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040aec0; name: FUN_0040aec0
 */


int FUN_0040aec0(long *param_1)

{
  int local_20 [2];
  int local_18 [2];
  
  (**(code **)(*param_1 + 0xa8))(param_1,local_18,local_20);
  return local_20[0] - local_18[0];
}


