/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01562e20; name: FUN_01562e20
 */


void FUN_01562e20(long param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    do {
      FUN_01562e70(param_1);
      nn::os::SleepThread(&LAB_00989680);
    } while (*(int *)(param_1 + 4) != 2);
  }
  return;
}


