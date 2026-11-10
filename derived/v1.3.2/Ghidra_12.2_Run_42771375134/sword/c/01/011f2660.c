/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f2660; name: FUN_011f2660
 */


bool FUN_011f2660(long param_1)

{
  return *(int *)(param_1 + 0x68) == 0 || *(int *)(param_1 + 0x68) == 3;
}


