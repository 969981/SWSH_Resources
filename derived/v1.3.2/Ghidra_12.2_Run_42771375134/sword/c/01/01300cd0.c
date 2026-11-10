/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01300cd0; name: FUN_01300cd0
 */


void FUN_01300cd0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  
  uVar5 = *(uint *)(param_1 + 0x14);
  if (uVar5 == 0) {
    iVar2 = 0;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  else if ((int)uVar5 < 0) {
    iVar2 = 0xb;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  else if (uVar5 < 0x80) {
    iVar2 = 2;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  else {
    iVar2 = FUN_0080e440();
    iVar2 = iVar2 + 1;
    uVar5 = *(uint *)(param_1 + 0x18);
  }
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
      iVar4 = 0xb;
    }
    else if (uVar5 < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_0080e440();
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar4 + iVar2;
  }
  if (*(uint *)(param_1 + 0x34) != 0) {
    if (*(uint *)(param_1 + 0x34) < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_0080e440();
      iVar4 = iVar4 + 1;
    }
    iVar2 = iVar4 + iVar2;
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar2 = iVar2 + 2;
  }
  if (iVar4 < 1) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x28) + lVar6 * 4 + 8);
      if ((int)uVar1 < 0) {
        iVar3 = 10;
      }
      else if (uVar1 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        iVar4 = *(int *)(param_1 + 0x20);
      }
      lVar6 = lVar6 + 1;
      uVar5 = iVar3 + uVar5;
    } while (lVar6 < iVar4);
    if (0 < (int)uVar5) {
      if (uVar5 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440(uVar5);
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar4 + iVar2;
    }
  }
  *(uint *)(param_1 + 0x30) = uVar5;
  *(uint *)(param_1 + 0x3c) = iVar2 + uVar5;
  return;
}


