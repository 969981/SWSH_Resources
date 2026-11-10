/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085f2b0; name: FUN_0085f2b0
 */


int FUN_0085f2b0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 0xe) == 0) {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x18);
  }
  else {
    if ((uVar7 >> 1 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x30);
      bVar1 = *pbVar8;
      uVar6 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
      }
      if (uVar6 < 0x80) {
        uVar6 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar2 = uVar6 + 2;
      }
      else {
        iVar2 = FUN_0080e440();
        uVar7 = *(uint *)(param_1 + 0x10);
        uVar6 = (uint)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar2 = iVar2 + 1 + uVar6;
      }
    }
    if ((uVar7 >> 2 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x38) < 0) {
        iVar4 = 0xb;
      }
      else if (*(uint *)(param_1 + 0x38) < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440();
        uVar7 = *(uint *)(param_1 + 0x10);
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar4 + iVar2;
    }
    if ((uVar7 >> 3 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else if ((int)*(uint *)(param_1 + 0x3c) < 0) {
      iVar2 = iVar2 + 0xb;
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else if (*(uint *)(param_1 + 0x3c) < 0x80) {
      iVar2 = iVar2 + 2;
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else {
      iVar4 = FUN_0080e440();
      iVar2 = iVar4 + 1 + iVar2;
      iVar4 = *(int *)(param_1 + 0x18);
    }
  }
  if (iVar4 < 1) {
    uVar5 = *(ulong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + lVar9 * 4 + 8);
      if ((int)uVar6 < 0) {
        iVar3 = 10;
      }
      else if (uVar6 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        iVar4 = *(int *)(param_1 + 0x18);
      }
      lVar9 = lVar9 + 1;
      uVar7 = iVar3 + uVar7;
    } while (lVar9 < iVar4);
    if (0 < (int)uVar7) {
      if (uVar7 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440(uVar7);
        iVar4 = iVar4 + 1;
      }
      iVar2 = iVar4 + iVar2;
    }
    uVar5 = *(ulong *)(param_1 + 8);
    *(uint *)(param_1 + 0x28) = uVar7;
    iVar2 = iVar2 + uVar7;
  }
  if ((uVar5 & 1) != 0) {
    iVar4 = FUN_00811270(uVar5 & 0xfffffffffffffffe);
    iVar2 = iVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return iVar2;
}


