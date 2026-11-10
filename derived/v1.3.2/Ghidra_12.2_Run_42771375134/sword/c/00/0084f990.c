/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084f990; name: FUN_0084f990
 */


int FUN_0084f990(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 3) == 0) {
    iVar2 = 0;
    uVar6 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar3 & 1) == 0) {
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
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar7 = (uint)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar7 = (uint)*(undefined8 *)(pbVar8 + 8);
        }
        iVar2 = iVar2 + 1 + uVar7;
      }
    }
    if ((uVar3 >> 1 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 0x20);
      iVar5 = *(int *)(lVar9 + 0x40) << 1;
      if (0 < *(int *)(lVar9 + 0x40)) {
        lVar10 = 0;
        do {
          uVar3 = FUN_0085c1b0(*(undefined8 *)(*(long *)(lVar9 + 0x48) + lVar10 * 8 + 8));
          if (uVar3 < 0x80) {
            iVar4 = 1;
          }
          else {
            iVar4 = FUN_0080e440(uVar3);
          }
          iVar5 = uVar3 + iVar5 + iVar4;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)(lVar9 + 0x40));
      }
      iVar4 = FUN_0082e5f0(lVar9 + 8);
      uVar3 = iVar4 + iVar5;
      if ((*(ulong *)(lVar9 + 0x28) & 1) != 0) {
        iVar5 = FUN_00811270(*(ulong *)(lVar9 + 0x28) & 0xfffffffffffffffe);
        uVar3 = iVar5 + uVar3;
      }
      *(uint *)(lVar9 + 0x34) = uVar3;
      if (uVar3 < 0x80) {
        iVar5 = 1;
      }
      else {
        iVar5 = FUN_0080e440(uVar3);
      }
      iVar2 = iVar2 + uVar3 + iVar5 + 1;
    }
    uVar6 = *(ulong *)(param_1 + 8);
  }
  if ((uVar6 & 1) != 0) {
    iVar5 = FUN_00811270(uVar6 & 0xfffffffffffffffe);
    iVar2 = iVar5 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return iVar2;
}


