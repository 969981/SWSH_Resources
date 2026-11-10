/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009347c0; name: FUN_009347c0
 */


undefined2 FUN_009347c0(long param_1,uint param_2)

{
  if (param_2 < 5) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 2 + 2);
  }
  return 0;
}


