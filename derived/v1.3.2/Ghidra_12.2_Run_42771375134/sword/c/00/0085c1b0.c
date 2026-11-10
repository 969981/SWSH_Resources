/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085c1b0; name: FUN_0085c1b0
 */


int FUN_0085c1b0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  long lVar10;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 0x7e) == 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar6 = iVar3;
  }
  else {
    if ((uVar5 >> 1 & 1) == 0) {
      iVar6 = 0;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x30);
      bVar1 = *pbVar9;
      uVar7 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar9 + 8);
      }
      if (uVar7 < 0x80) {
        uVar7 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar7 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        iVar6 = uVar7 + 2;
      }
      else {
        iVar3 = FUN_0080e440();
        uVar5 = *(uint *)(param_1 + 0x10);
        uVar7 = (uint)(*pbVar9 >> 1);
        if ((*pbVar9 & 1) != 0) {
          uVar7 = (uint)*(undefined8 *)(pbVar9 + 8);
        }
        iVar6 = iVar3 + 1 + uVar7;
      }
    }
    if ((uVar5 >> 2 & 1) != 0) {
      iVar3 = FUN_0080e480(*(undefined8 *)(param_1 + 0x38));
      iVar6 = iVar6 + iVar3 + 1;
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar5 >> 3 & 1) == 0) {
      iVar3 = iVar6;
      if ((uVar5 & 0x10) != 0) {
        iVar3 = iVar6 + 9;
      }
    }
    else {
      iVar4 = FUN_0080e480(*(undefined8 *)(param_1 + 0x40));
      uVar5 = *(uint *)(param_1 + 0x10);
      iVar3 = iVar6 + iVar4 + 1;
      if ((uVar5 & 0x10) != 0) {
        iVar3 = iVar6 + iVar4 + 10;
      }
    }
    if ((uVar5 >> 5 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x50);
      bVar1 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar8;
      }
      if (uVar7 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar1 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar2 = bVar1 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar8;
      }
      iVar3 = iVar3 + iVar6 + uVar7 + 1;
    }
    if ((uVar5 >> 6 & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x20);
      iVar3 = iVar6 + iVar3;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x58);
      bVar1 = *pbVar9;
      uVar7 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      uVar5 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar7;
      }
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar1 = *pbVar9;
        uVar7 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar2 = bVar1 >> 1;
      }
      uVar5 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar7;
      }
      iVar3 = *(int *)(param_1 + 0x20) + iVar3 + iVar6 + uVar5 + 1;
      iVar6 = *(int *)(param_1 + 0x20);
    }
  }
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      uVar5 = FUN_0085b170(*(undefined8 *)(*(long *)(param_1 + 0x28) + lVar10 * 8 + 8));
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar5);
      }
      iVar3 = uVar5 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x20));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar6 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar3 = iVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return iVar3;
}


