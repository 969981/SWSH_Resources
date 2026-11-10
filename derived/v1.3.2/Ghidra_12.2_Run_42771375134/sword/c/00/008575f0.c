/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008575f0; name: FUN_008575f0
 */


int FUN_008575f0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if ((uVar1 & 0x3f) == 0) {
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar2 * 2;
  }
  else {
    if ((uVar1 & 1) == 0) {
      iVar3 = 0;
      if ((uVar1 & 2) != 0) {
        iVar3 = 2;
      }
    }
    else if ((int)*(uint *)(param_1 + 0x38) < 0) {
      iVar3 = 0xb;
      if ((uVar1 & 2) != 0) {
        iVar3 = 0xd;
      }
    }
    else if (*(uint *)(param_1 + 0x38) < 0x80) {
      iVar3 = 2;
      if ((uVar1 & 2) != 0) {
        iVar3 = 4;
      }
    }
    else {
      iVar2 = FUN_0080e440();
      uVar1 = *(uint *)(param_1 + 0x30);
      iVar3 = iVar2 + 1;
      if ((uVar1 & 2) != 0) {
        iVar3 = iVar2 + 3;
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x3c) < 0) {
        iVar2 = 0xb;
      }
      else if (*(uint *)(param_1 + 0x3c) < 0x80) {
        iVar2 = 2;
      }
      else {
        iVar2 = FUN_0080e440();
        uVar1 = *(uint *)(param_1 + 0x30);
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar2 + iVar3;
    }
    if ((uVar1 & 8) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar1 & 0x10) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar1 & 0x20) != 0) {
      iVar3 = iVar3 + 2;
    }
    iVar2 = *(int *)(param_1 + 0x48);
    iVar3 = iVar3 + iVar2 * 2;
  }
  if (0 < iVar2) {
    lVar4 = 0;
    do {
      uVar1 = FUN_0085c1b0(*(undefined8 *)(*(long *)(param_1 + 0x50) + lVar4 * 8 + 8));
      if (uVar1 < 0x80) {
        iVar2 = 1;
      }
      else {
        iVar2 = FUN_0080e440(uVar1);
      }
      iVar3 = uVar1 + iVar3 + iVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x48));
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


