/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00888eb0; name: FUN_00888eb0
 */


ulong FUN_00888eb0(long *param_1)

{
  if (*(char *)(*param_1 + 0x1c) == '\x04') {
    return (ulong)*(byte *)(*param_1 + 0x1d);
  }
  return 0xffffffff;
}


