/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00864e50; name: FUN_00864e50
 */


ulong FUN_00864e50(ulong param_1)

{
  if ((6 < ((uint)param_1 - 7 & 0xffff)) && (((uint)param_1 & 0xffff) < 7)) {
    param_1 = (ulong)*(ushort *)(&DAT_0214390a + (param_1 & 0xffff) * 4);
  }
  return param_1;
}


