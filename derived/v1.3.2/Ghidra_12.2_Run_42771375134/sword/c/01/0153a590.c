/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153a590; name: FUN_0153a590
 */


bool FUN_0153a590(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  
  if (0xe < param_2) {
    return false;
  }
  bVar1 = true;
  if (param_3 < 0x400) {
    bVar1 = (1 << (ulong)(param_3 & 7) &
            (uint)*(byte *)(param_1 + (long)(int)param_2 * 0x80 + (ulong)(param_3 >> 3) + 0x7e8)) ==
            0;
  }
  return bVar1;
}


