/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005535a0; name: FUN_005535a0
 */


undefined8 FUN_005535a0(float param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  
  if (param_1 <= 0.0) {
    param_1 = DAT_01d4bc70;
  }
  *(undefined4 *)(param_4 + 0x15c) = param_2;
  *(undefined4 *)(param_4 + 0x160) = param_3;
  *(float *)(param_4 + 0x158) = param_1;
  fVar1 = atanf(param_1);
  *(float *)(param_4 + 0x154) = fVar1 + fVar1;
  return 0;
}


