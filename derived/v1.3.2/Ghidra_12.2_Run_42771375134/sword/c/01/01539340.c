/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01539340; name: FUN_01539340
 */


bool FUN_01539340(long param_1,uint param_2)

{
  if (param_2 < 0x40) {
    return (*(ulong *)(param_1 + 0x290) & 1L << ((ulong)param_2 & 0x3f)) != 0;
  }
  return false;
}


