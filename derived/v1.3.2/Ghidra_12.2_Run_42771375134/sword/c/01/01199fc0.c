/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01199fc0; name: FUN_01199fc0
 */


bool FUN_01199fc0(long param_1,ushort param_2)

{
  return *(short *)(*(long *)(param_1 + 0x88) + 0x84) == (ushort)((param_2 & 0xff) + 1000);
}


