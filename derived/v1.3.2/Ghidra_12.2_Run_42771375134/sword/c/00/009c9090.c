/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9090; name: FUN_009c9090
 */


undefined1 FUN_009c9090(long param_1,byte param_2)

{
  if (5 < param_2) {
    return 0x1f;
  }
  if (*(int *)(param_1 + (ulong)param_2 * 0x14 + 100) == 0) {
    return 0x1f;
  }
  return *(undefined1 *)(param_1 + (ulong)param_2 * 0x14 + 0x60);
}


