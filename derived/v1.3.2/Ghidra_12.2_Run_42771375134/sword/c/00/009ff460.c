/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff460; name: FUN_009ff460
 */


undefined2 FUN_009ff460(long param_1,byte param_2)

{
  if (8 < param_2) {
    return 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x180) + 0x2352) == '\0') {
    return 0;
  }
  return *(undefined2 *)(*(long *)(param_1 + 0x180) + (ulong)param_2 * 2 + 0x219c);
}


