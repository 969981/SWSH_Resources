/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c44e0; name: FUN_009c44e0
 */


bool FUN_009c44e0(long param_1,uint param_2)

{
  uint uVar1;
  
  if (4 < (int)param_2) {
    return false;
  }
  uVar1 = *(int *)(param_1 + 0x70) - 1;
  if ((uVar1 < 6) && ((0x2fU >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
    return true;
  }
  return *(char *)(param_1 + (ulong)param_2 + 0xa0) != '\0';
}


