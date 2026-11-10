/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01326590; name: FUN_01326590
 */


float FUN_01326590(long param_1)

{
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xc0);
  pfVar1 = (float *)FUN_012dc700();
  return fVar2 * *pfVar1;
}


