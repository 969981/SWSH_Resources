/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150def0; name: FUN_0150def0
 */


void FUN_0150def0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) & 0xfffffff0 | *(uint *)(param_1 + 0x60) & 7 | (param_2 & 1) << 3;
  return;
}


