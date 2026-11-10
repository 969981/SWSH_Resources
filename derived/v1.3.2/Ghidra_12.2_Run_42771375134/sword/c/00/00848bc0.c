/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00848bc0; name: FUN_00848bc0
 */


int FUN_00848bc0(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 3) == 0) {
    iVar3 = 0;
  }
  else {
    if ((uVar7 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar11;
      uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
        uVar7 = *(uint *)(param_1 + 0x10);
      }
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      iVar3 = iVar3 + uVar4 + 1;
    }
    if ((uVar7 >> 1 & 1) != 0) {
      pbVar11 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar11;
      uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      if (uVar4 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
        uVar7 = *(uint *)(param_1 + 0x10);
      }
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      iVar3 = iVar3 + iVar8 + uVar4 + 1;
    }
  }
  if ((uVar7 & 0xe00) != 0) {
    if ((uVar7 >> 9 & 1) != 0) {
      uVar7 = FUN_00855750(*(undefined8 *)(param_1 + 0xc0));
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = iVar3 + uVar7 + iVar8 + 1;
      uVar7 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar7 >> 10 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 200);
      uVar7 = *(uint *)(lVar13 + 0x20);
      if (0 < (int)uVar7) {
        lVar14 = 0;
        do {
          uVar4 = FUN_0085d930(*(undefined8 *)(*(long *)(lVar13 + 0x28) + lVar14 * 8 + 8));
          if (uVar4 < 0x80) {
            iVar8 = 1;
          }
          else {
            iVar8 = FUN_0080e440(uVar4);
          }
          uVar7 = uVar4 + uVar7 + iVar8;
          lVar14 = lVar14 + 1;
        } while (lVar14 < *(int *)(lVar13 + 0x20));
      }
      if ((*(ulong *)(lVar13 + 8) & 1) != 0) {
        iVar8 = FUN_00811270(*(ulong *)(lVar13 + 8) & 0xfffffffffffffffe);
        uVar7 = iVar8 + uVar7;
      }
      *(uint *)(lVar13 + 0x14) = uVar7;
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = iVar3 + uVar7 + iVar8 + 1;
      uVar7 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar7 >> 0xb & 1) != 0) {
      pbVar11 = *(byte **)(param_1 + 0xd0);
      bVar1 = *pbVar11;
      uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar4;
      }
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
      }
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar4;
      }
      iVar10 = *(int *)(param_1 + 0x30);
      iVar3 = iVar10 + iVar3 + iVar8 + uVar7 + 1;
      goto joined_r0x00848cd8;
    }
  }
  iVar10 = *(int *)(param_1 + 0x30);
  iVar3 = iVar10 + iVar3;
joined_r0x00848cd8:
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      pbVar11 = *(byte **)(*(long *)(param_1 + 0x38) + lVar13 * 8 + 8);
      bVar1 = *pbVar11;
      uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar4;
      }
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar4 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
        iVar10 = *(int *)(param_1 + 0x30);
      }
      uVar7 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar7 = uVar4;
      }
      lVar13 = lVar13 + 1;
      iVar3 = iVar8 + iVar3 + uVar7;
    } while (lVar13 < iVar10);
  }
  iVar8 = *(int *)(param_1 + 0x40);
  if (iVar8 < 1) {
    iVar10 = 0;
    iVar5 = *(int *)(param_1 + 0x50);
  }
  else {
    lVar13 = 0;
    iVar10 = 0;
    do {
      uVar7 = *(uint *)(*(long *)(param_1 + 0x48) + lVar13 * 4 + 8);
      if ((int)uVar7 < 0) {
        iVar5 = 10;
      }
      else if (uVar7 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440();
        iVar8 = *(int *)(param_1 + 0x40);
      }
      lVar13 = lVar13 + 1;
      iVar10 = iVar5 + iVar10;
    } while (lVar13 < iVar8);
    iVar5 = *(int *)(param_1 + 0x50);
  }
  if (iVar5 < 1) {
    iVar12 = 0;
  }
  else {
    lVar13 = 0;
    iVar12 = 0;
    do {
      uVar7 = *(uint *)(*(long *)(param_1 + 0x58) + lVar13 * 4 + 8);
      if ((int)uVar7 < 0) {
        iVar6 = 10;
      }
      else if (uVar7 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        iVar5 = *(int *)(param_1 + 0x50);
      }
      lVar13 = lVar13 + 1;
      iVar12 = iVar6 + iVar12;
    } while (lVar13 < iVar5);
  }
  iVar3 = iVar10 + iVar3 + iVar8 + iVar12 + iVar5 + *(int *)(param_1 + 0x68);
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar13 = 0;
    do {
      uVar7 = FUN_0084c790(*(undefined8 *)(*(long *)(param_1 + 0x70) + lVar13 * 8 + 8));
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = uVar7 + iVar3 + iVar8;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x68));
  }
  iVar3 = *(int *)(param_1 + 0x80) + iVar3;
  if (0 < *(int *)(param_1 + 0x80)) {
    lVar13 = 0;
    do {
      uVar7 = FUN_00850970(*(undefined8 *)(*(long *)(param_1 + 0x88) + lVar13 * 8 + 8));
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = uVar7 + iVar3 + iVar8;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x80));
  }
  iVar3 = *(int *)(param_1 + 0x98) + iVar3;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar13 = 0;
    do {
      uVar7 = FUN_00852a40(*(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar13 * 8 + 8));
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = uVar7 + iVar3 + iVar8;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x98));
  }
  iVar3 = *(int *)(param_1 + 0xb0) + iVar3;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar13 = 0;
    do {
      uVar7 = FUN_0084e940(*(undefined8 *)(*(long *)(param_1 + 0xb8) + lVar13 * 8 + 8));
      if (uVar7 < 0x80) {
        iVar8 = 1;
      }
      else {
        iVar8 = FUN_0080e440(uVar7);
      }
      iVar3 = uVar7 + iVar3 + iVar8;
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0xb0));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar8 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar3 = iVar8 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return iVar3;
}


