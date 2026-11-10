/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009015a0; name: FUN_009015a0
 */


ulong FUN_009015a0(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x2a7) == '\x02') {
    return (ulong)(*(byte *)(param_1 + 0x2b5) >> 4 & 1);
  }
  if (*(short *)(param_1 + 0x338) == 0) {
    return 0;
  }
  uVar1 = FUN_009c9720(*(undefined8 *)(param_1 + 0x250),0);
  return uVar1;
}


