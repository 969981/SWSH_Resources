/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0150a610; name: FUN_0150a610
 */


bool FUN_0150a610(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  
  if ((5 < param_2) && (5 < param_3)) {
    return false;
  }
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = param_2;
  }
  uVar2 = 0;
  if (param_3 < 6) {
    uVar2 = param_3;
  }
  uVar3 = *(ushort *)(param_1 + (ulong)uVar1 * 0xc + (ulong)uVar2 * 2 + 0x524);
  return uVar3 < 0x2000 && (uVar3 & 0xfe) < 0x1e;
}


