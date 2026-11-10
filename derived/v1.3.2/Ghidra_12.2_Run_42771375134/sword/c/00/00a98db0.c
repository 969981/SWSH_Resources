/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98db0; name: FUN_00a98db0
 */


float FUN_00a98db0(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1;
  if (param_1 < 0.5) {
    if (fVar1 != 0.0) {
      fVar1 = exp2f((fVar1 + -1.0) * 10.0);
    }
    return fVar1 * 0.5;
  }
  fVar1 = 1.0 - (fVar1 + -1.0);
  if (fVar1 != 0.0) {
    fVar1 = exp2f((fVar1 + -1.0) * 10.0);
  }
  return (1.0 - fVar1) * 0.5 + 0.5;
}


