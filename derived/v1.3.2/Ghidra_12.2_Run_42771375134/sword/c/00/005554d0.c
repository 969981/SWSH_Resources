/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005554d0; name: FUN_005554d0
 */


undefined8 FUN_005554d0(float param_1,long param_2)

{
  if (param_1 <= 0.0) {
    param_1 = DAT_01d4c4a0;
  }
  *(float *)(param_2 + 1000) = param_1;
  return 0;
}


