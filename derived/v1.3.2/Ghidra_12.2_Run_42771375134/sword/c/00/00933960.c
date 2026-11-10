/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933960; name: FUN_00933960
 */


undefined4 FUN_00933960(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\0') {
    return 5;
  }
  return *(undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0x39) * 8 + 0x10);
}


