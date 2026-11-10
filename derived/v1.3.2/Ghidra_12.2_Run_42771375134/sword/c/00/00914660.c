/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914660; name: FUN_00914660
 */


undefined2 FUN_00914660(long param_1,byte param_2)

{
  if (param_2 < 5) {
    return *(undefined2 *)(param_1 + (ulong)param_2 * 2);
  }
  return 0;
}


