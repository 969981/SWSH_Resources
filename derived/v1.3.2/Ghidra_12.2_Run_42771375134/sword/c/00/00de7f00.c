/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de7f00; name: FUN_00de7f00
 */


bool FUN_00de7f00(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 3) {
    return false;
  }
  if (*(char *)(param_1 + 0xd0) == '\0') {
    return false;
  }
  return *(char *)(param_1 + 0xe8) != '\0';
}


