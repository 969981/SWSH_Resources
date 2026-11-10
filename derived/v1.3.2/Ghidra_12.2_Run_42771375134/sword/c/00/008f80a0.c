/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f80a0; name: FUN_008f80a0
 */


long FUN_008f80a0(long param_1,ulong param_2)

{
  return *(long *)(param_1 + 0x88) + (param_2 & 0xff) * 0x120 + 0x440;
}


