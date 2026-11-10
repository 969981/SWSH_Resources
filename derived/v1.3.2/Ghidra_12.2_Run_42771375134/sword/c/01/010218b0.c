/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010218b0; name: FUN_010218b0
 */


void FUN_010218b0(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0xc) + -1;
    return;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}


