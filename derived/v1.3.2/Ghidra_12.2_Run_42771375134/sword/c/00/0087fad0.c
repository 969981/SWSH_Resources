/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0087fad0; name: FUN_0087fad0
 */


bool FUN_0087fad0(long param_1,uint param_2)

{
  return (*(uint *)(param_1 + 0x48) & 1 << (ulong)(param_2 & 0x1f)) != 0;
}


