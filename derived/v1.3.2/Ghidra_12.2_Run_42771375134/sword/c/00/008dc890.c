/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc890; name: FUN_008dc890
 */


void FUN_008dc890(long param_1)

{
  if (*(uint *)(param_1 + 0x408) != 0) {
    FUN_008dbc00(*(undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0x408) * 0x20 + 8));
    *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + -1;
  }
  return;
}


