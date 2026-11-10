/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404a60; name: FUN_00404a60
 */


ulong FUN_00404a60(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(ulong *)(param_1 + -8) & 0xfffffffffffffffc;
  }
  return uVar1;
}


