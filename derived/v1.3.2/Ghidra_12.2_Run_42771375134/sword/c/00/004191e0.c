/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004191e0; name: FUN_004191e0
 */


ulong FUN_004191e0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = *(long *)(*param_1 + 8) - (ulong)*(uint *)(param_1[1] + 0x88);
  return uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
}


