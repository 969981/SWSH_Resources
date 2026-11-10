/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c9b50; name: FUN_009c9b50
 */


void FUN_009c9b50(long param_1,byte param_2,uint param_3)

{
  if ((param_2 < 5) && ((int)param_3 < 3)) {
    *(undefined1 *)(param_1 + (ulong)param_2 + (ulong)param_2 * 2 + (ulong)param_3 + 0x60) = 1;
  }
  return;
}


