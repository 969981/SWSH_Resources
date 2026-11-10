/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008892d0; name: FUN_008892d0
 */


uint FUN_008892d0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = (uint)(*(int *)(&DAT_02144744 + (long)param_2 * 4) *
                *(int *)(&DAT_02144744 + (long)param_1 * 4)) >> 6;
  if (0xfff < uVar3) {
    uVar3 = 0x1000;
  }
  if ((uVar3 == 0 && param_1 != 0) && param_2 != 0) {
    uVar3 = 1;
  }
  do {
    if (0x1f < uVar2) {
      return 0;
    }
    uVar1 = uVar2 & 0x1f;
    uVar2 = uVar2 + 1;
  } while ((1 << (ulong)uVar1 & uVar3) == 0);
  if (0xc < uVar2) {
    uVar2 = 0xd;
  }
  return uVar2;
}


