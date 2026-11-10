/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1ae0; name: FUN_007c1ae0
 */


ulong FUN_007c1ae0(ushort *param_1)

{
  if (param_1 == (ushort *)0x0) {
    return 0;
  }
  return (ulong)((byte)param_1[2] & 1) << 0x20 |
         ((ulong)(byte)param_1[1] | ((ulong)*(byte *)((long)param_1 + 3) & 0xf) << 8) << 0x10 |
         (ulong)*param_1;
}


