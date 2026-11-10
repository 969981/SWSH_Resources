/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003baeb0; name: FUN_003baeb0
 */


void FUN_003baeb0(float param_1,long param_2)

{
  float fVar1;
  
  *(float *)(param_2 + 0x94) = param_1;
  fVar1 = tanf(param_1 * 0.25);
  *(float *)(param_2 + 0xb0) = fVar1;
  return;
}


