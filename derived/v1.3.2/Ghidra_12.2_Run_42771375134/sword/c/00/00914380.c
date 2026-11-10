/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00914380; name: FUN_00914380
 */


ulong FUN_00914380(long param_1,long param_2)

{
  ulong uVar1;
  
  if ((ulong)*(byte *)(param_1 + 0x30) == 0) {
    return 0xffffffff;
  }
  uVar1 = 0;
  do {
    if (*(long *)(param_1 + uVar1 * 8) == param_2) {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < *(byte *)(param_1 + 0x30));
  return 0xffffffff;
}


