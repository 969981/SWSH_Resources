/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00934810; name: FUN_00934810
 */


void FUN_00934810(long param_1,uint param_2)

{
  if (param_2 < 5) {
    *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 2) = 0;
  }
  return;
}


