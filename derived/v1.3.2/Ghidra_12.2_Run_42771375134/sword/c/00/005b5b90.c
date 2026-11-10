/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b5b90; name: FUN_005b5b90
 */


bool FUN_005b5b90(long param_1)

{
  if (*(int *)(param_1 + 0x1c8) != 1) {
    if (*(int *)(param_1 + 0x1c8) == 0) {
      return *(float *)(param_1 + 0x1d0) != 0.0 && *(float *)(param_1 + 0x1cc) != 0.0;
    }
    return false;
  }
  if (*(float *)(param_1 + 0x1d8) < 0.0) {
    return false;
  }
  return true;
}


