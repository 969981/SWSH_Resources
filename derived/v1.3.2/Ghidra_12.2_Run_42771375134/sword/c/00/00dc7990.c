/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc7990; name: FUN_00dc7990
 */


void FUN_00dc7990(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = DAT_01d4bb1c;
  *(float *)(param_2 + 0x3bc) = param_1;
  *(float *)(param_2 + 0x3c0) = param_1 + fVar1;
  return;
}


