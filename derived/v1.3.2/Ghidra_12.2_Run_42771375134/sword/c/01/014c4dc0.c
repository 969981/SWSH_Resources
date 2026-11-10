/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014c4dc0; name: FUN_014c4dc0
 */


void FUN_014c4dc0(long param_1)

{
  if (*(char *)(param_1 + 0x19000) == '\0') {
    return;
  }
  *(char *)(param_1 + 0x19000) = '\0';
  FUN_01994880(param_1 + 0x17138);
  FUN_01995310(param_1 + 0x17138);
  return;
}


