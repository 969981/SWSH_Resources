/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108eb10; name: FUN_0108eb10
 */


bool FUN_0108eb10(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x18) + 0x170) == '\0';
}


