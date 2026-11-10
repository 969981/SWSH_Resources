/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bda090; name: FUN_00bda090
 */


ulong FUN_00bda090(long param_1)

{
  if (*(char *)(param_1 + 0xa40) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xa46) == '\0') {
    return 0x10001;
  }
  return (ulong)*(ushort *)(param_1 + 0xa48) << 0x10 | 1;
}


