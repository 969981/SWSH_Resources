/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00933900; name: FUN_00933900
 */


ulong FUN_00933900(long param_1,int param_2)

{
  byte bVar1;
  
  if (*(byte *)(param_1 + 0x38) == 0) {
    return 0xffffffff;
  }
  bVar1 = 0;
  do {
    if (*(int *)(param_1 + (ulong)bVar1 * 8 + 0x10) == param_2) {
      return (ulong)bVar1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < *(byte *)(param_1 + 0x38));
  return 0xffffffff;
}


