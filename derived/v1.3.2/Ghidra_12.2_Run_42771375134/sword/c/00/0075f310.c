/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075f310; name: FUN_0075f310
 */


ulong * FUN_0075f310(ulong *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + 0xc) >> 2 & 1) == 0) {
    lVar1 = *param_1 + 0x18;
    if (*param_1 < 0x11) {
      lVar1 = 0x28;
    }
    param_1 = (ulong *)((long)param_1 + lVar1);
  }
  return param_1;
}


