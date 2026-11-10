/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b9b90; name: FUN_006b9b90
 */


float FUN_006b9b90(long *param_1)

{
  float fVar1;
  float fVar2;
  
  if (*param_1 == 0) {
    return 0.0;
  }
  fVar2 = (float)NEON_ucvtf((int)param_1[0xc]);
  FUN_006ac330(param_1[8]);
  FUN_006a0e30();
  fVar1 = (float)FUN_0069a8c0();
  return fVar1 + fVar2;
}


