/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01501130; name: FUN_01501130
 */


int FUN_01501130(long param_1,uint param_2)

{
  if (param_2 < 2) {
    param_1 = param_1 + (ulong)param_2 * 0x2b8;
    return (uint)*(byte *)(param_1 + 0x60) + (uint)*(byte *)(param_1 + 0x1a9);
  }
  return 0;
}


