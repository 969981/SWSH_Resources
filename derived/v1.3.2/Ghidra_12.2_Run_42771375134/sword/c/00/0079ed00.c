/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0079ed00; name: FUN_0079ed00
 */


void FUN_0079ed00(long param_1)

{
  if (*(char *)(param_1 + 0x170) == '\0') {
    FUN_00795c00(0);
    return;
  }
  FUN_00795c00((long)*(uint **)(param_1 + 400) + (ulong)**(uint **)(param_1 + 400));
  return;
}


