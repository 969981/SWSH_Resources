/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fce50; name: FUN_003fce50
 */


void FUN_003fce50(long param_1)

{
  if (*(int *)(param_1 + 0x4c) == -1) {
    return;
  }
  FUN_003fe730(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x48) + 0x820),param_1);
  return;
}


