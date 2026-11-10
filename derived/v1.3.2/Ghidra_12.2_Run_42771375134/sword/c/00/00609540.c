/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00609540; name: FUN_00609540
 */


void FUN_00609540(long *param_1)

{
  if (*param_1 != 0) {
    (**(code **)(param_1[7] + 0x10))();
  }
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


