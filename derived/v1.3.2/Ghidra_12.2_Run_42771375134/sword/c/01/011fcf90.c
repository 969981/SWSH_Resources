/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fcf90; name: FUN_011fcf90
 */


bool FUN_011fcf90(long param_1)

{
  if ((*(long *)(param_1 + 0x138) == 0) || (*(int *)(*(long *)(param_1 + 0x138) + 0x54) == 0)) {
    return *(int *)(param_1 + 0x84) != 0;
  }
  return true;
}


