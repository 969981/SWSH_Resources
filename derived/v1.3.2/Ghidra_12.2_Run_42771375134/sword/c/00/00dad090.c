/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dad090; name: FUN_00dad090
 */


bool FUN_00dad090(long param_1)

{
  if (*(long *)(param_1 + 0xa228) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0xa228) + 0x170) != '\0';
}


