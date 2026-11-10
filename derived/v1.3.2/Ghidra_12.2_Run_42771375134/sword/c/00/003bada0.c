/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bada0; name: FUN_003bada0
 */


void FUN_003bada0(float param_1,float param_2,long param_3)

{
  float fVar1;
  
  *(float *)(param_3 + 0x74) = param_1;
  *(float *)(param_3 + 0x78) = param_2;
  fVar1 = tanf(param_1 * 0.25);
  *(float *)(param_3 + 0x9c) = fVar1;
  fVar1 = tanf(param_2 * 0.25);
  *(float *)(param_3 + 0xa0) = fVar1;
  return;
}


