/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e3110; name: FUN_008e3110
 */


bool FUN_008e3110(long param_1)

{
  if (*(char *)(param_1 + 0x2b4) < '\x06') {
    return true;
  }
  if (*(char *)(param_1 + 0x2b5) < '\x06') {
    return true;
  }
  if (*(char *)(param_1 + 0x2b6) < '\x06') {
    return true;
  }
  if (*(char *)(param_1 + 0x2b7) < '\x06') {
    return true;
  }
  if (*(char *)(param_1 + 0x2b8) < '\x06') {
    return true;
  }
  if (*(char *)(param_1 + 0x2b9) < '\x06') {
    return true;
  }
  return *(char *)(param_1 + 0x2ba) < '\x06';
}


