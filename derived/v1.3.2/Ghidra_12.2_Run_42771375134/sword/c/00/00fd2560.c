/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd2560; name: FUN_00fd2560
 */


void FUN_00fd2560(long param_1)

{
  if (*(int *)(param_1 + 4) == 1) {
    do {
      FUN_00fd25b0(param_1);
      nn::os::SleepThread(&LAB_00989680);
    } while (*(int *)(param_1 + 4) != 2);
  }
  return;
}


