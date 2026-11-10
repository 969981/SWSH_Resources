/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130e360; name: FUN_0130e360
 */


bool FUN_0130e360(long param_1)

{
  if (*(long *)(param_1 + 0x60) == 0) {
    return false;
  }
  if (*(int *)(*(long *)(param_1 + 0x60) + 0x54) == 0) {
    return false;
  }
  if (*(long *)(param_1 + 0x68) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x68) + 0x54) != 0;
}


