/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1810; name: FUN_008e1810
 */


bool FUN_008e1810(long param_1,uint param_2)

{
  return (*(byte *)(param_1 + (ulong)param_2 * 8 + 0x90) & 7) != 0;
}


