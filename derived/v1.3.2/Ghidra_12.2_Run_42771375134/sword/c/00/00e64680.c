/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e64680; name: FUN_00e64680
 */


void FUN_00e64680(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = 180.0;
  if (param_1 <= DAT_01d4c284) {
    fVar1 = param_1;
  }
  *(float *)(param_2 + 0xa4) = fVar1;
  return;
}


