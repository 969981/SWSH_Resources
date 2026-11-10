/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106ff60; name: FUN_0106ff60
 */


undefined4 FUN_0106ff60(uint param_1)

{
  if (param_1 < 8) {
    return *(undefined4 *)(&DAT_01d4dd00 + (long)(int)param_1 * 4);
  }
  return 0x10;
}


