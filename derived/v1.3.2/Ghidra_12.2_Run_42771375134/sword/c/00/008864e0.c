/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008864e0; name: FUN_008864e0
 */


undefined2 FUN_008864e0(long param_1,byte param_2)

{
  if (param_2 < 9) {
    return *(undefined2 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
  }
  return 0;
}


