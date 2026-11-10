/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff390; name: FUN_009ff390
 */


bool FUN_009ff390(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    return false;
  }
  uVar2 = param_2 - 0x2c;
  uVar1 = param_2 - 0x25;
  if (-1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  return (1 << (ulong)(uVar2 & 7) &
         (uint)*(byte *)(*(long *)(param_1 + 0x180) + (long)((int)uVar1 >> 3) + 0x233f)) != 0;
}


