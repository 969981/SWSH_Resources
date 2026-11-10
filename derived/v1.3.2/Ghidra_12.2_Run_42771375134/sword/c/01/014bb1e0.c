/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014bb1e0; name: FUN_014bb1e0
 */


void FUN_014bb1e0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0xaf8) != param_2) {
    *(int *)(param_1 + 0xaf8) = param_2;
  }
  return;
}


