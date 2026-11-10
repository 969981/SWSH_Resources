/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b7d80; name: FUN_006b7d80
 */


float FUN_006b7d80(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x128);
  if (*(long *)(param_1 + 0x110) == 0) {
    return fVar2;
  }
  fVar1 = (float)FUN_006b7d80();
  return fVar2 * fVar1;
}


