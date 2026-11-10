/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f35c0; name: FUN_008f35c0
 */


bool FUN_008f35c0(long param_1,uint param_2)

{
  return (*(uint *)(*(long *)(param_1 + 0x88) + 0xa70) & param_2) != 0;
}


