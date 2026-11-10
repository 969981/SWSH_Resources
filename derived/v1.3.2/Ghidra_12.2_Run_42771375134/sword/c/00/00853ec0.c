/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00853ec0; name: FUN_00853ec0
 */


int FUN_00853ec0(long param_1)

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
  byte *pbVar10;
  long lVar11;
  long lVar12;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x3f) == 0) {
    iVar3 = 0;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pbVar10 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar10;
      uVar8 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar8 = (uint)*(undefined8 *)(pbVar10 + 8);
      }
      if (uVar8 < 0x80) {
        uVar8 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar8 = (uint)*(undefined8 *)(pbVar10 + 8);
        }
        iVar3 = uVar8 + 2;
      }
      else {
        iVar3 = FUN_0080e440();
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar8 = (uint)(*pbVar10 >> 1);
        if ((*pbVar10 & 1) != 0) {
          uVar8 = (uint)*(undefined8 *)(pbVar10 + 8);
        }
        iVar3 = iVar3 + 1 + uVar8;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      pbVar10 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar10;
      uVar9 = (uint)*(undefined8 *)(pbVar10 + 8);
      bVar2 = bVar1 >> 1;
      uVar8 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar8 = uVar9;
      }
      if (uVar8 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar1 = *pbVar10;
        uVar9 = (uint)*(undefined8 *)(pbVar10 + 8);
        bVar2 = bVar1 >> 1;
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar8 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar8 = uVar9;
      }
      iVar3 = iVar3 + iVar6 + uVar8 + 1;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      pbVar10 = *(byte **)(param_1 + 0x28);
      bVar1 = *pbVar10;
      uVar9 = (uint)*(undefined8 *)(pbVar10 + 8);
      bVar2 = bVar1 >> 1;
      uVar8 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar8 = uVar9;
      }
      if (uVar8 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar1 = *pbVar10;
        uVar9 = (uint)*(undefined8 *)(pbVar10 + 8);
        bVar2 = bVar1 >> 1;
        uVar4 = *(uint *)(param_1 + 0x10);
      }
      uVar8 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar8 = uVar9;
      }
      iVar3 = iVar3 + iVar6 + uVar8 + 1;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      lVar11 = *(long *)(param_1 + 0x30);
      iVar6 = (-(*(byte *)(lVar11 + 0x30) & 1) & 3) + *(int *)(lVar11 + 0x40) * 2;
      if (0 < *(int *)(lVar11 + 0x40)) {
        lVar12 = 0;
        do {
          uVar4 = FUN_0085c1b0(*(undefined8 *)(*(long *)(lVar11 + 0x48) + lVar12 * 8 + 8));
          if (uVar4 < 0x80) {
            iVar5 = 1;
          }
          else {
            iVar5 = FUN_0080e440(uVar4);
          }
          iVar6 = uVar4 + iVar6 + iVar5;
          lVar12 = lVar12 + 1;
        } while (lVar12 < *(int *)(lVar11 + 0x40));
      }
      iVar5 = FUN_0082e5f0(lVar11 + 8);
      uVar4 = iVar5 + iVar6;
      if ((*(ulong *)(lVar11 + 0x28) & 1) != 0) {
        iVar6 = FUN_00811270(*(ulong *)(lVar11 + 0x28) & 0xfffffffffffffffe);
        uVar4 = iVar6 + uVar4;
      }
      *(uint *)(lVar11 + 0x34) = uVar4;
      if (uVar4 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar4);
      }
      iVar3 = iVar3 + uVar4 + iVar6 + 1;
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar4 & 0x10) != 0) {
      iVar3 = iVar3 + 2;
    }
    if ((uVar4 & 0x20) != 0) {
      iVar3 = iVar3 + 2;
    }
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    iVar6 = FUN_00811270(uVar7 & 0xfffffffffffffffe);
    iVar3 = iVar6 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return iVar3;
}


