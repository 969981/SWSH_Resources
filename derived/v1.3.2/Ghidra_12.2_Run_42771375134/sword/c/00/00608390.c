/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00608390; name: FUN_00608390
 */


void FUN_00608390(long *param_1)

{
  if (param_1[5] != 0) {
    if (*param_1 != 0) {
      (**(code **)(param_1[7] + 0x10))();
    }
    *param_1 = 0;
  }
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


