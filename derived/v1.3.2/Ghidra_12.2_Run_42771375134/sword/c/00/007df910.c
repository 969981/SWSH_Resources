/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007df910; name: FUN_007df910
 */


bool FUN_007df910(long param_1)

{
  if (*(int *)(param_1 + 8) == 0) {
    return *(int *)(param_1 + 0xb0) == 0;
  }
  return false;
}


