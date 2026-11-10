/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c52d0; name: FUN_009c52d0
 */


ulong FUN_009c52d0(long *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    return (ulong)*(byte *)((long)param_1 + 0x4e62);
  }
  uVar1 = FUN_009b33a0(*param_1);
  return uVar1;
}


