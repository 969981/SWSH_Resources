/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e64670; name: FUN_00e64670
 */


void FUN_00e64670(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0xa0) = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  return;
}


