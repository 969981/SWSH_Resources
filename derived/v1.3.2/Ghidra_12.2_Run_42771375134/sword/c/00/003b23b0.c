/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b23b0; name: FUN_003b23b0
 */


void FUN_003b23b0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80000000;
  }
  return;
}


