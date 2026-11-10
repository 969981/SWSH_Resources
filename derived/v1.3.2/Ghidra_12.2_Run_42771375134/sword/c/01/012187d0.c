/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012187d0; name: FUN_012187d0
 */


ulong FUN_012187d0(uint *param_1,long *param_2)

{
  if ((param_1 == (uint *)0x0) || ((ulong)(*param_2 << 3) < 0x20)) {
    return 0;
  }
  if ((ulong)(*param_2 << 3) < 0x30) {
    return (ulong)*param_1;
  }
  return (ulong)CONCAT24((short)param_1[1],*param_1);
}


