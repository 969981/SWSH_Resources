/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ed9e0; name: FUN_012ed9e0
 */


void FUN_012ed9e0(long param_1,int param_2)

{
  if (*(char *)(param_1 + 0x90) != '\0') {
    *(int *)(param_1 + 0x94) = param_2;
    FUN_012eda40();
    FUN_012edd90(param_1);
    if ((param_2 == 1) || (FUN_012ee100(param_1), param_2 != 2)) {
      FUN_012eecd0(param_1);
      return;
    }
  }
  return;
}


