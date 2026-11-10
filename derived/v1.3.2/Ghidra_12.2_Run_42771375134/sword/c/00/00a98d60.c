/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98d60; name: FUN_00a98d60
 */


float FUN_00a98d60(float param_1)

{
  float fVar1;
  
  param_1 = 1.0 - param_1;
  if (param_1 == 0.0) {
    return 1.0 - param_1;
  }
  fVar1 = exp2f((param_1 + -1.0) * 10.0);
  return 1.0 - fVar1;
}


