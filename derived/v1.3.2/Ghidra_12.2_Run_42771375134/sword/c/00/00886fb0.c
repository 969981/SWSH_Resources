/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00886fb0; name: FUN_00886fb0
 */


undefined4 FUN_00886fb0(long param_1,ushort param_2)

{
  if (99 < param_2) {
    param_2 = 100;
  }
  return *(undefined4 *)(param_1 + (ulong)param_2 * 4 + 0xc);
}


