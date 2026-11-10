/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00494880; name: FUN_00494880
 */


bool FUN_00494880(long param_1,uint param_2)

{
  return (1 << (ulong)(param_2 & 7) &
         (uint)*(byte *)(*(long *)(param_1 + 0x30) + (ulong)((param_2 & 0xfff8) >> 3))) != 0;
}


