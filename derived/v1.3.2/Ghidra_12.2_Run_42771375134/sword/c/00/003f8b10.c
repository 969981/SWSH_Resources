/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8b10; name: FUN_003f8b10
 */


long FUN_003f8b10(long param_1)

{
  if (1 < *(int *)(param_1 + 0x48) - 5U) {
    return param_1 + 0x42;
  }
  if (*(int *)(param_1 + 0x48) == 5) {
    return *(long *)(param_1 + 0x88);
  }
  return *(long *)(param_1 + 0x70);
}


