/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085d930; name: FUN_0085d930
 */


int FUN_0085d930(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 0xc) == 0) {
    iVar5 = 0;
    iVar4 = *(int *)(param_1 + 0x18);
  }
  else {
    if ((uVar7 >> 2 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar1 = *pbVar9;
      uVar6 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
      }
      if (uVar6 < 0x80) {
        uVar6 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        iVar5 = uVar6 + 2;
      }
      else {
        iVar5 = FUN_0080e440();
        uVar7 = *(uint *)(param_1 + 0x10);
        uVar6 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        iVar5 = iVar5 + 1 + uVar6;
      }
    }
    if ((uVar7 >> 3 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x50);
      bVar1 = *pbVar9;
      uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar6;
      }
      if (uVar7 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar1 = *pbVar9;
        uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar2 = bVar1 >> 1;
      }
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar6;
      }
      iVar5 = iVar5 + iVar4 + uVar7 + 1;
      iVar4 = *(int *)(param_1 + 0x18);
    }
  }
  if (iVar4 < 1) {
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x20) + lVar8 * 4 + 8);
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
      lVar8 = lVar8 + 1;
      uVar7 = iVar3 + uVar7;
    } while (lVar8 < iVar4);
    if (0 < (int)uVar7) {
      if (uVar7 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440(uVar7);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = iVar5 + uVar7;
  *(uint *)(param_1 + 0x28) = uVar7;
  if (iVar4 < 1) {
    uVar7 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x38) + lVar8 * 4 + 8);
      if ((int)uVar6 < 0) {
        iVar3 = 10;
      }
      else if (uVar6 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        iVar4 = *(int *)(param_1 + 0x30);
      }
      lVar8 = lVar8 + 1;
      uVar7 = iVar3 + uVar7;
    } while (lVar8 < iVar4);
    if (0 < (int)uVar7) {
      if (uVar7 < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440(uVar7);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
  }
  iVar4 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x40) = uVar7;
  iVar5 = iVar5 + uVar7 + iVar4;
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      pbVar9 = *(byte **)(*(long *)(param_1 + 0x68) + lVar8 * 8 + 8);
      bVar1 = *pbVar9;
      uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar6;
      }
      if (uVar7 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        bVar1 = *pbVar9;
        uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar2 = bVar1 >> 1;
        iVar4 = *(int *)(param_1 + 0x60);
      }
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar6;
      }
      lVar8 = lVar8 + 1;
      iVar5 = iVar3 + iVar5 + uVar7;
    } while (lVar8 < iVar4);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar4 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar5 = iVar4 + iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar5;
  return iVar5;
}


