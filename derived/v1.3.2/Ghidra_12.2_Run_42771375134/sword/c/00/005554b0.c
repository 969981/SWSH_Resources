/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005554b0; name: FUN_005554b0
 */


undefined8 FUN_005554b0(float param_1,long param_2)

{
  if (param_1 <= 0.0) {
    param_1 = DAT_01d4c1f0;
  }
  *(float *)(param_2 + 0x3e4) = param_1;
  return 0;
}


