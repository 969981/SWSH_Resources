/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ed2f0; name: FUN_008ed2f0
 */


ulong FUN_008ed2f0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  switch((uint)uVar1 & 7) {
  case 1:
  case 2:
  case 3:
    return uVar1 >> 0xe;
  case 4:
    return uVar1 >> 0x14;
  default:
    return 0;
  }
}


