/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085b170; name: FUN_0085b170
 */


int FUN_0085b170(long param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar6 = *(uint *)(param_1 + 0x10);
  if ((~uVar6 & 3) == 0) {
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
    bVar2 = bVar1 >> 1;
    uVar6 = (uint)bVar2;
    if ((bVar1 & 1) != 0) {
      uVar6 = uVar5;
    }
    if (uVar6 < 0x80) {
      iVar3 = 4;
    }
    else {
      iVar3 = FUN_0080e440();
      bVar1 = *pbVar9;
      uVar5 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      iVar3 = iVar3 + 3;
    }
    uVar6 = (uint)bVar2;
    if ((bVar1 & 1) != 0) {
      uVar6 = uVar5;
    }
    iVar3 = iVar3 + uVar6;
    uVar7 = *(ulong *)(param_1 + 8);
  }
  else {
    if ((uVar6 & 1) == 0) {
      iVar3 = 0;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar2 = bVar1 >> 1;
      uVar5 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar8;
      }
      if (uVar5 < 0x80) {
        iVar3 = 2;
      }
      else {
        iVar3 = FUN_0080e440();
        bVar1 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar2 = bVar1 >> 1;
        uVar6 = *(uint *)(param_1 + 0x10);
        iVar3 = iVar3 + 1;
      }
      uVar5 = (uint)bVar2;
      if ((bVar1 & 1) != 0) {
        uVar5 = uVar8;
      }
      iVar3 = iVar3 + uVar5;
    }
    if ((uVar6 & 2) != 0) {
      iVar3 = iVar3 + 2;
    }
    uVar7 = *(ulong *)(param_1 + 8);
  }
  if ((uVar7 & 1) != 0) {
    iVar4 = FUN_00811270(uVar7 & 0xfffffffffffffffe);
    iVar3 = iVar4 + iVar3;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  return iVar3;
}


