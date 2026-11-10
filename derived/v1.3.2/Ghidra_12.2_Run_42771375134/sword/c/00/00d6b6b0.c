/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6b6b0; name: FUN_00d6b6b0
 */


bool FUN_00d6b6b0(long param_1)

{
  if (*(char *)(param_1 + 0x580) == '\0') {
    return *(int *)(*(long *)(param_1 + 0x508) + 0x2c0) == 4;
  }
  return true;
}


