/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093dc80; name: FUN_0093dc80
 */


void FUN_0093dc80(long param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
  }
  return;
}


