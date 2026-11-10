/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aa310; name: FUN_005aa310
 */


undefined8 FUN_005aa310(float param_1,undefined4 param_2,long param_3)

{
  if (param_1 < 0.0) {
    return 0xfffffffa;
  }
  *(undefined4 *)(param_3 + 0x1c8) = 0;
  *(float *)(param_3 + 0x1cc) = param_1;
  *(undefined4 *)(param_3 + 0x1d0) = param_2;
  return 0;
}


