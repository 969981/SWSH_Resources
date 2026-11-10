/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084c790; name: FUN_0084c790
 */


int FUN_0084c790(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x81) == 0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar6 = iVar3;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pbVar11 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar11;
      uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar9 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar9 = uVar8;
      }
      if (uVar9 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar8 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar9 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar9 = uVar8;
      }
      iVar3 = iVar3 + uVar9 + 1;
    }
    if ((uVar4 >> 7 & 1) != 0) {
      uVar4 = FUN_00856720(*(undefined8 *)(param_1 + 0xb0));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = iVar3 + uVar4 + iVar6 + 1;
    }
    iVar6 = *(int *)(param_1 + 0x28);
    iVar3 = iVar6 + iVar3;
  }
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      uVar4 = FUN_0084e940(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar10 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = uVar4 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x28));
  }
  iVar3 = *(int *)(param_1 + 0x40) + iVar3;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar10 = 0;
    do {
      uVar4 = FUN_0084e940(*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar10 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = uVar4 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x40));
  }
  iVar3 = *(int *)(param_1 + 0x58) + iVar3;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar10 = 0;
    do {
      uVar4 = FUN_0084c790(*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar10 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = uVar4 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x58));
  }
  iVar3 = *(int *)(param_1 + 0x70) + iVar3;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar10 = 0;
    do {
      uVar4 = FUN_00850970(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar10 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = uVar4 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x70));
  }
  iVar3 = *(int *)(param_1 + 0x88) + iVar3;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar10 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 0x90) + lVar10 * 8 + 8);
      uVar4 = *(uint *)(lVar12 + 0x10);
      if ((uVar4 & 3) == 0) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar12 + 8);
        if ((uVar7 & 1) != 0) goto LAB_0084ca9c;
LAB_0084ca88:
        *(uint *)(lVar12 + 0x14) = uVar9;
        if (uVar9 < 0x80) goto LAB_0084ca94;
LAB_0084cab4:
        iVar6 = FUN_0080e440(uVar9);
      }
      else {
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
        }
        else if ((int)*(uint *)(lVar12 + 0x18) < 0) {
          uVar9 = 0xb;
        }
        else if (*(uint *)(lVar12 + 0x18) < 0x80) {
          uVar9 = 2;
        }
        else {
          iVar6 = FUN_0080e440();
          uVar4 = *(uint *)(lVar12 + 0x10);
          uVar9 = iVar6 + 1;
        }
        if ((uVar4 >> 1 & 1) != 0) {
          if ((int)*(uint *)(lVar12 + 0x1c) < 0) {
            iVar6 = 0xb;
          }
          else if (*(uint *)(lVar12 + 0x1c) < 0x80) {
            iVar6 = 2;
          }
          else {
            iVar6 = FUN_0080e440();
            iVar6 = iVar6 + 1;
          }
          uVar9 = iVar6 + uVar9;
        }
        uVar7 = *(ulong *)(lVar12 + 8);
        if ((uVar7 & 1) == 0) goto LAB_0084ca88;
LAB_0084ca9c:
        iVar6 = FUN_00811270(uVar7 & 0xfffffffffffffffe);
        uVar9 = iVar6 + uVar9;
        *(uint *)(lVar12 + 0x14) = uVar9;
        if (0x7f < uVar9) goto LAB_0084cab4;
LAB_0084ca94:
        iVar6 = 1;
      }
      iVar3 = uVar9 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x88));
  }
  iVar3 = *(int *)(param_1 + 0xa0) + iVar3;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar10 = 0;
    do {
      uVar4 = FUN_0084f990(*(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar10 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = uVar4 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0xa0));
  }
  iVar3 = *(int *)(param_1 + 0xc0) + iVar3;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar10 = 0;
    do {
      lVar12 = *(long *)(*(long *)(param_1 + 200) + lVar10 * 8 + 8);
      uVar4 = *(uint *)(lVar12 + 0x10);
      if ((uVar4 & 3) == 0) {
        uVar9 = 0;
        uVar7 = *(ulong *)(lVar12 + 8);
        if ((uVar7 & 1) != 0) goto LAB_0084cc00;
LAB_0084cbec:
        *(uint *)(lVar12 + 0x14) = uVar9;
        if (uVar9 < 0x80) goto LAB_0084cbf8;
LAB_0084cc18:
        iVar6 = FUN_0080e440(uVar9);
      }
      else {
        if ((uVar4 & 1) == 0) {
          uVar9 = 0;
        }
        else if ((int)*(uint *)(lVar12 + 0x18) < 0) {
          uVar9 = 0xb;
        }
        else if (*(uint *)(lVar12 + 0x18) < 0x80) {
          uVar9 = 2;
        }
        else {
          iVar6 = FUN_0080e440();
          uVar4 = *(uint *)(lVar12 + 0x10);
          uVar9 = iVar6 + 1;
        }
        if ((uVar4 >> 1 & 1) != 0) {
          if ((int)*(uint *)(lVar12 + 0x1c) < 0) {
            iVar6 = 0xb;
          }
          else if (*(uint *)(lVar12 + 0x1c) < 0x80) {
            iVar6 = 2;
          }
          else {
            iVar6 = FUN_0080e440();
            iVar6 = iVar6 + 1;
          }
          uVar9 = iVar6 + uVar9;
        }
        uVar7 = *(ulong *)(lVar12 + 8);
        if ((uVar7 & 1) == 0) goto LAB_0084cbec;
LAB_0084cc00:
        iVar6 = FUN_00811270(uVar7 & 0xfffffffffffffffe);
        uVar9 = iVar6 + uVar9;
        *(uint *)(lVar12 + 0x14) = uVar9;
        if (0x7f < uVar9) goto LAB_0084cc18;
LAB_0084cbf8:
        iVar6 = 1;
      }
      iVar3 = uVar9 + iVar3 + iVar6;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0xc0));
  }
  iVar6 = *(int *)(param_1 + 0xd8);
  iVar3 = iVar6 + iVar3;
  if (0 < iVar6) {
    lVar10 = 0;
    do {
      pbVar11 = *(byte **)(*(long *)(param_1 + 0xe0) + lVar10 * 8 + 8);
      bVar1 = *pbVar11;
      uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
      bVar2 = bVar1 >> 1;
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440();
        bVar1 = *pbVar11;
        uVar9 = (uint)*(undefined8 *)(pbVar11 + 8);
        bVar2 = bVar1 >> 1;
        iVar6 = *(int *)(param_1 + 0xd8);
      }
      uVar4 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar4 = uVar9;
      }
      lVar10 = lVar10 + 1;
      iVar3 = iVar5 + iVar3 + uVar4;
    } while (lVar10 < iVar6);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar6 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar3 = iVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return iVar3;
}


