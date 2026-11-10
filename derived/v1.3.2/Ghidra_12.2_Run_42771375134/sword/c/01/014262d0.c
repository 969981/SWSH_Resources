/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014262d0; name: FUN_014262d0
 */


void FUN_014262d0(long param_1)

{
  if (*(long *)(param_1 + 0x670) != 0) {
    FUN_0168b630();
  }
  if (*(long *)(param_1 + 0x690) == 0) {
    return;
  }
  FUN_0168b630();
  return;
}


