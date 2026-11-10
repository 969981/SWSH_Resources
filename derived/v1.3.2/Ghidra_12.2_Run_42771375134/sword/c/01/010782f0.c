/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010782f0; name: FUN_010782f0
 */


ulong FUN_010782f0(long param_1,int param_2)

{
  param_1 = param_1 + (long)param_2 * 0x30;
  return (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10)) >> 4;
}


