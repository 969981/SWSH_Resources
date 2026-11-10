/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a98aa0; name: FUN_00a98aa0
 */


float FUN_00a98aa0(float param_1)

{
  float fVar1;
  
  fVar1 = param_1 + param_1 + -1.0;
  if (param_1 < 0.5) {
    fVar1 = sinf(fVar1 * DAT_01d4c05c);
    return (fVar1 + 1.0) * 0.5;
  }
  fVar1 = sinf(((1.0 - fVar1) + -1.0) * DAT_01d4c05c);
  return (1.0 - (fVar1 + 1.0)) * 0.5 + 0.5;
}


