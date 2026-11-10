/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dc60; name: FUN_0093dc60
 */


void FUN_0093dc60(long param_1)

{
  if (*(char *)(param_1 + 4) != '\0') {
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + -1;
  }
  return;
}


