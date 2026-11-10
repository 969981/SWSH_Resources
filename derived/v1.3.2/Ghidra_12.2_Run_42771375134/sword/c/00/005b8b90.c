/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b8b90; name: FUN_005b8b90
 */


float FUN_005b8b90(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  
  if (*(int *)(param_4 + 0x500) < 0) {
    param_2 = param_2 * DAT_01d4c6b8;
    fVar1 = expf(param_1 * 8.0);
    return (fVar1 / param_2) / param_3;
  }
  fVar1 = (float)FUN_00562ce0(param_1,param_2,0x3f800000);
  return fVar1 / param_3;
}


