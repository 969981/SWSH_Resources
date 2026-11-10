/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e6020; name: FUN_008e6020
 */


bool FUN_008e6020(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 0x42) < 2) {
    return *(char *)(param_1 + (ulong)*(byte *)(param_1 + 0x42) + 0x2c) == '\0';
  }
  return true;
}


