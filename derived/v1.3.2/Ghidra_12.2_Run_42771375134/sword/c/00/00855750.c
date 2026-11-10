/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00855750; name: FUN_00855750
 */


int FUN_00855750(long param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  if ((uVar3 & 0xff) == 0) {
    iVar5 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar5 = 0;
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x38);
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
        iVar5 = uVar6 + 2;
      }
      else {
        iVar5 = FUN_0080e440();
        uVar3 = *(uint *)(param_1 + 0x30);
        uVar6 = (uint)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar5 = iVar5 + 1 + uVar6;
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      pbVar8 = *(byte **)(param_1 + 0x40);
      bVar1 = *pbVar8;
      uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
      bVar2 = bVar1 >> 1;
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar1 = *pbVar8;
        uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        bVar2 = bVar1 >> 1;
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      iVar5 = iVar5 + iVar4 + uVar6 + 1;
    }
    if ((uVar3 & 4) != 0) {
      iVar5 = iVar5 + 2;
    }
    if ((uVar3 & 8) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x10) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 >> 5 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x4c) < 0) {
        iVar4 = 0xb;
      }
      else if (*(uint *)(param_1 + 0x4c) < 0x80) {
        iVar4 = 2;
      }
      else {
        iVar4 = FUN_0080e440();
        uVar3 = *(uint *)(param_1 + 0x30);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar4 + iVar5;
    }
    if ((uVar3 >> 6 & 1) != 0) {
      pbVar8 = *(byte **)(param_1 + 0x50);
      bVar1 = *pbVar8;
      uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
      bVar2 = bVar1 >> 1;
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar1 = *pbVar8;
        uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        bVar2 = bVar1 >> 1;
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      iVar5 = iVar5 + iVar4 + uVar6 + 1;
    }
    if ((uVar3 & 0x80) != 0) {
      iVar5 = iVar5 + 3;
    }
  }
  if ((uVar3 & 0x3f00) != 0) {
    if ((uVar3 & 0x100) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x200) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x400) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 & 0x800) != 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uVar3 >> 0xc & 1) != 0) {
      pbVar8 = *(byte **)(param_1 + 0x58);
      bVar1 = *pbVar8;
      uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
      bVar2 = bVar1 >> 1;
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      if (uVar6 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar1 = *pbVar8;
        uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        bVar2 = bVar1 >> 1;
        uVar3 = *(uint *)(param_1 + 0x30);
      }
      uVar6 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar6 = uVar7;
      }
      iVar5 = iVar5 + iVar4 + uVar6 + 2;
    }
    if ((uVar3 >> 0xd & 1) != 0) {
      pbVar8 = *(byte **)(param_1 + 0x60);
      bVar1 = *pbVar8;
      uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
      bVar2 = bVar1 >> 1;
      uVar3 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar3 = uVar6;
      }
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar1 = *pbVar8;
        uVar6 = (uint)*(undefined8 *)(pbVar8 + 8);
        bVar2 = bVar1 >> 1;
      }
      uVar3 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar3 = uVar6;
      }
      iVar5 = iVar5 + iVar4 + uVar3 + 2;
    }
  }
  iVar5 = iVar5 + *(int *)(param_1 + 0x70) * 2;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar9 = 0;
    do {
      uVar3 = FUN_0085c1b0(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar9 * 8 + 8));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440(uVar3);
      }
      iVar5 = uVar3 + iVar5 + iVar4;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0x70));
  }
  iVar4 = FUN_0082e5f0(param_1 + 8);
  iVar4 = iVar4 + iVar5;
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    iVar5 = FUN_00811270(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe);
    iVar4 = iVar5 + iVar4;
  }
  *(int *)(param_1 + 0x34) = iVar4;
  return iVar4;
}


