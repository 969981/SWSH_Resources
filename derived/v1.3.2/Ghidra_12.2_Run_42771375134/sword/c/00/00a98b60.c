/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98b60; name: FUN_00a98b60
 */


float FUN_00a98b60(float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1 + param_1;
  fVar1 = 1.0 - (fVar2 + -1.0);
  fVar1 = (1.0 - fVar1 * fVar1) * 0.5 + 0.5;
  if (param_1 < 0.5) {
    fVar1 = fVar2 * fVar2 * 0.5;
  }
  return fVar1;
}


