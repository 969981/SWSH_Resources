/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01052b00; name: FUN_01052b00
 */


long FUN_01052b00(long param_1,uint param_2)

{
  return *(long *)(*(long *)(*(long *)(param_1 + 0x148) + 0x60) + 0x128) + (ulong)param_2 * 0x40 +
         0x120;
}


