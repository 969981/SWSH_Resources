/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00414930; name: FUN_00414930
 */


int FUN_00414930(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xf4) == 2) {
    iVar3 = 0;
    if ((*(ushort *)(param_1 + 0xf8) + 1 & 0xffff) < *(uint *)(param_1 + 0xd8)) {
      iVar3 = *(ushort *)(param_1 + 0xf8) + 1;
    }
    *(short *)(param_1 + 0xf8) = (short)iVar3;
  }
  else {
    if (*(int *)(param_1 + 0xf4) != 1) {
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0xd8);
    iVar3 = 0;
    if (uVar1 != 0) {
      lVar5 = *(long *)PTR_DAT_02712b80 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_02712b80 = lVar5;
      uVar2 = 0;
      uVar4 = (uint)((ulong)lVar5 >> 0x21);
      if (uVar1 != 0) {
        uVar2 = uVar4 / uVar1;
      }
      return uVar4 - uVar2 * uVar1;
    }
  }
  return iVar3;
}


