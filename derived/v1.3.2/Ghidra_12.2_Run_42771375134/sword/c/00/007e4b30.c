/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e4b30; name: FUN_007e4b30
 */


bool FUN_007e4b30(long param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0xb) {
    return *(char *)(*(long *)(*(long *)(param_1 + 0x68) + 0x20) + 0x53) != '\0';
  }
  return false;
}


