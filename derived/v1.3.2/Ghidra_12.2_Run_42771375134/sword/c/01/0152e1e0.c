/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152e1e0; name: FUN_0152e1e0
 */


void FUN_0152e1e0(long param_1,int param_2,byte param_3)

{
  *(byte *)(param_1 + (long)param_2 * 0x30 + 0x79) = param_3 & 1;
  return;
}


