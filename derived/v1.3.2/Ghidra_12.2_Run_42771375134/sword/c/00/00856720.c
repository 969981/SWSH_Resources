/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00856720; name: FUN_00856720
 */


int FUN_00856720(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  iVar2 = (uVar1 & 1) * 2;
  if ((uVar1 & 2) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar1 & 4) != 0) {
    iVar2 = iVar2 + 2;
  }
  if ((uVar1 & 8) != 0) {
    iVar2 = iVar2 + 2;
  }
  iVar3 = 0;
  if ((uVar1 & 0xf) != 0) {
    iVar3 = iVar2;
  }
  iVar3 = iVar3 + *(int *)(param_1 + 0x40) * 2;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar4 = 0;
    do {
      uVar1 = FUN_0085c1b0(*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar4 * 8 + 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_0080e440(uVar1);
      }
      iVar3 = uVar1 + iVar3 + iVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x40));
  }
  iVar2 = FUN_0082e5f0(param_1 + 8);
  iVar2 = iVar2 + iVar3;
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    iVar3 = FUN_00811270(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    iVar2 = iVar3 + iVar2;
  }
  *(int *)(param_1 + 0x34) = iVar2;
  return iVar2;
}


