/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00852a40; name: FUN_00852a40
 */


int FUN_00852a40(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 5) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar5 = iVar2;
  }
  else {
    if ((uVar4 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      pbVar7 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar7;
      uVar6 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar6 = (uint)*(undefined8 *)(pbVar7 + 8);
      }
      if (uVar6 < 0x80) {
        uVar6 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar7 + 8);
        }
        iVar2 = uVar6 + 2;
      }
      else {
        iVar2 = FUN_0080e440();
        uVar4 = *(uint *)(param_1 + 0x10);
        uVar6 = (uint)(*pbVar7 >> 1);
        if ((*pbVar7 & 1) != 0) {
          uVar6 = (uint)*(undefined8 *)(pbVar7 + 8);
        }
        iVar2 = iVar2 + 1 + uVar6;
      }
    }
    if ((uVar4 >> 2 & 1) != 0) {
      lVar8 = *(long *)(param_1 + 0x38);
      iVar5 = (-(*(byte *)(lVar8 + 0x30) & 1) & 3) + *(int *)(lVar8 + 0x40) * 2;
      if (0 < *(int *)(lVar8 + 0x40)) {
        lVar9 = 0;
        do {
          uVar4 = FUN_0085c1b0(*(undefined8 *)(*(long *)(lVar8 + 0x48) + lVar9 * 8 + 8));
          if (uVar4 < 0x80) {
            iVar3 = 1;
          }
          else {
            iVar3 = FUN_0080e440(uVar4);
          }
          iVar5 = uVar4 + iVar5 + iVar3;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar8 + 0x40));
      }
      iVar3 = FUN_0082e5f0(lVar8 + 8);
      uVar4 = iVar3 + iVar5;
      if ((*(ulong *)(lVar8 + 0x28) & 1) != 0) {
        iVar5 = FUN_00811270(*(ulong *)(lVar8 + 0x28) & 0xfffffffffffffffe);
        uVar4 = iVar5 + uVar4;
      }
      *(uint *)(lVar8 + 0x34) = uVar4;
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440(uVar4);
      }
      iVar2 = iVar2 + uVar4 + iVar5 + 1;
    }
    iVar5 = *(int *)(param_1 + 0x28);
    iVar2 = iVar5 + iVar2;
  }
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00853ec0(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar8 * 8 + 8));
      if (uVar4 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440(uVar4);
      }
      iVar2 = uVar4 + iVar2 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar5 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar2 = iVar5 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return iVar2;
}


