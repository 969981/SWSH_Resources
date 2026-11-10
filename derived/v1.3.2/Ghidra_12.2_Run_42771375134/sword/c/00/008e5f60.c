/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e5f60; name: FUN_008e5f60
 */


bool FUN_008e5f60(long param_1)

{
  if (*(char *)(param_1 + 0x24) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0x43) == '\0') {
    return *(char *)(param_1 + 0x44) == '\0';
  }
  return false;
}


