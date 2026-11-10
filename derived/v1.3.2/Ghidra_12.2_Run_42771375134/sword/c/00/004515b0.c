/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004515b0; name: FUN_004515b0
 */


bool FUN_004515b0(long param_1)

{
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return true;
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    return true;
  }
  if (*(int *)(param_1 + 200) != 0) {
    return true;
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
    return *(int *)(param_1 + 0xd0) != 0;
  }
  return true;
}


