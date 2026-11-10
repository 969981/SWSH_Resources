/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff990; name: FUN_009ff990
 */


bool FUN_009ff990(long param_1,uint param_2)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    return false;
  }
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  return (1 << (ulong)(param_2 & 7) &
         (uint)*(byte *)(*(long *)(param_1 + 0x180) + (long)((int)uVar1 >> 3) + 0x2337)) != 0;
}


