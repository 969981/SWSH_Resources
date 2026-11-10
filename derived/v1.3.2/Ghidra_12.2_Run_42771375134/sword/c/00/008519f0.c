/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008519f0; name: FUN_008519f0
 */


int FUN_008519f0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 7) == 0) {
    iVar2 = 0;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      pbVar8 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar8;
      uVar7 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
      }
      if (uVar7 < 0x80) {
        uVar7 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar2 = uVar7 + 2;
      }
      else {
        iVar2 = FUN_0080e440();
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar7 = (uint)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar2 = iVar2 + 1 + uVar7;
      }
    }
    if ((uVar4 >> 1 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x28) < 0) {
        iVar3 = 0xb;
      }
      else if (*(uint *)(param_1 + 0x28) < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = FUN_0080e440();
        uVar4 = *(uint *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar3 + iVar2;
    }
    if ((uVar4 >> 2 & 1) == 0) {
      uVar6 = *(ulong *)(param_1 + 8);
    }
    else {
      lVar9 = *(long *)(param_1 + 0x20);
      iVar3 = ((*(uint *)(lVar9 + 0x30) & 1) + *(int *)(lVar9 + 0x40)) * 2;
      if (0 < *(int *)(lVar9 + 0x40)) {
        lVar10 = 0;
        do {
          uVar4 = FUN_0085c1b0(*(undefined8 *)(*(long *)(lVar9 + 0x48) + lVar10 * 8 + 8));
          if (uVar4 < 0x80) {
            iVar5 = 1;
          }
          else {
            iVar5 = FUN_0080e440(uVar4);
          }
          iVar3 = uVar4 + iVar3 + iVar5;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar9 + 0x40));
      }
      iVar5 = FUN_0082e5f0(lVar9 + 8);
      uVar4 = iVar5 + iVar3;
      if ((*(ulong *)(lVar9 + 0x28) & 1) != 0) {
        iVar3 = FUN_00811270(*(ulong *)(lVar9 + 0x28) & 0xfffffffffffffffe);
        uVar4 = iVar3 + uVar4;
      }
      *(uint *)(lVar9 + 0x34) = uVar4;
      if (uVar4 < 0x80) {
        iVar3 = 1;
      }
      else {
        iVar3 = FUN_0080e440(uVar4);
      }
      iVar2 = iVar2 + uVar4 + iVar3 + 1;
      uVar6 = *(ulong *)(param_1 + 8);
    }
  }
  if ((uVar6 & 1) != 0) {
    iVar3 = FUN_00811270(uVar6 & 0xfffffffffffffffe);
    iVar2 = iVar3 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return iVar2;
}


