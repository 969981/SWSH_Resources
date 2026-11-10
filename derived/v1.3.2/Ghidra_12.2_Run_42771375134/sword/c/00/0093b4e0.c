/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b4e0; name: FUN_0093b4e0
 */


bool FUN_0093b4e0(long param_1)

{
  if ((*(char *)(param_1 + 0x4d) == '\0') && (*(char *)(param_1 + 0x4f) == '\0')) {
    return false;
  }
  return *(char *)(param_1 + 0x4c) == '\0';
}


