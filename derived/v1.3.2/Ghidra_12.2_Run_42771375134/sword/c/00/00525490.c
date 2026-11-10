/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00525490; name: FUN_00525490
 */


undefined8
FUN_00525490(float param_1,float param_2,undefined4 param_3,undefined4 param_4,long param_5)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (param_1 != 0.0) {
    fVar1 = param_1;
  }
  *(float *)(param_5 + 0x5a4) = fVar1;
  fVar1 = 1.0;
  if (param_2 != 0.0) {
    fVar1 = param_2;
  }
  *(float *)(param_5 + 0x5a8) = fVar1;
  *(undefined4 *)(param_5 + 0x5ac) = param_3;
  *(undefined4 *)(param_5 + 0x5b0) = param_4;
  return 0;
}


