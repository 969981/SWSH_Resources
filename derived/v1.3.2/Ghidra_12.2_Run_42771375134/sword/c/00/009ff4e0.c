/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff4e0; name: FUN_009ff4e0
 */


bool FUN_009ff4e0(long param_1,ushort param_2,uint param_3)

{
  return (*(uint *)(*(long *)(param_1 + 0x180) + (ulong)param_2 * 4 + 0x60) &
         1 << (ulong)(param_3 & 0x1f)) != 0;
}


