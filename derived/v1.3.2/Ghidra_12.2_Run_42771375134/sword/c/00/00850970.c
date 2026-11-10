/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00850970; name: FUN_00850970
 */


int FUN_00850970(long param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 5) == 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    iVar4 = iVar2;
  }
  else {
    if ((uVar3 & 1) == 0) {
      iVar2 = 0;
    }
    else {
      pbVar6 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar6;
      uVar5 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = (uint)*(undefined8 *)(pbVar6 + 8);
      }
      if (uVar5 < 0x80) {
        uVar5 = (uint)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          uVar5 = (uint)*(undefined8 *)(pbVar6 + 8);
        }
        iVar2 = uVar5 + 2;
      }
      else {
        iVar2 = FUN_0080e440();
        uVar3 = *(uint *)(param_1 + 0x10);
        uVar5 = (uint)(*pbVar6 >> 1);
        if ((*pbVar6 & 1) != 0) {
          uVar5 = (uint)*(undefined8 *)(pbVar6 + 8);
        }
        iVar2 = iVar2 + 1 + uVar5;
      }
    }
    if ((uVar3 >> 2 & 1) != 0) {
      uVar3 = FUN_00858a70(*(undefined8 *)(param_1 + 0x38));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440(uVar3);
      }
      iVar2 = iVar2 + uVar3 + iVar4 + 1;
    }
    iVar4 = *(int *)(param_1 + 0x28);
    iVar2 = iVar4 + iVar2;
  }
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar3 = FUN_008519f0(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar7 * 8 + 8));
      if (uVar3 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440(uVar3);
      }
      iVar2 = uVar3 + iVar2 + iVar4;
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x28));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar4 = FUN_00811270(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar2 = iVar4 + iVar2;
  }
  *(int *)(param_1 + 0x14) = iVar2;
  return iVar2;
}


