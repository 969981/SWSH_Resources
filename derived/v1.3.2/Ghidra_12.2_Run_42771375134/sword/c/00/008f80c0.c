/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f80c0; name: FUN_008f80c0
 */


bool FUN_008f80c0(long param_1,ulong param_2)

{
  return *(long *)(param_1 + (param_2 & 0xff) * 0x70 + 0x1e8) == 0;
}


