/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dc840; name: FUN_009dc840
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_009dc840(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
    lVar5 = *(long *)(param_1 + 0x20);
  }
  else {
    iVar3 = FUN_0080e480();
    iVar3 = iVar3 + 1;
    lVar5 = *(long *)(param_1 + 0x20);
  }
  if (lVar5 != 0) {
    iVar4 = FUN_0080e480();
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x28) != 0) {
    if (*(uint *)(param_1 + 0x28) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x2c) != 0) {
    if (*(uint *)(param_1 + 0x2c) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x30) != 0) {
    if (*(uint *)(param_1 + 0x30) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x34) != 0) {
    if (*(uint *)(param_1 + 0x34) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x38) != 0) {
    if (*(uint *)(param_1 + 0x38) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x3c) != 0) {
    if (*(uint *)(param_1 + 0x3c) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x40) != 0) {
    if (*(uint *)(param_1 + 0x40) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x44) != 0) {
    if (*(uint *)(param_1 + 0x44) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x48) != 0) {
    if (*(uint *)(param_1 + 0x48) < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
    }
    iVar3 = iVar3 + iVar4 + 1;
  }
  if (*(uint *)(param_1 + 0x4c) != 0) {
    if (*(uint *)(param_1 + 0x4c) < 0x80) {
      iVar4 = 2;
    }
    else {
      iVar4 = FUN_0080e440();
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar4 + iVar3;
  }
  pbVar9 = *(byte **)(param_1 + 0x50);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
LAB_009dca04:
      pbVar9 = *(byte **)(param_1 + 0x58);
      bVar2 = *pbVar9;
      goto joined_r0x009dca9c;
    }
  }
  else if (*(long *)(pbVar9 + 8) == 0) goto LAB_009dca04;
  uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
  uVar8 = (uint)(bVar2 >> 1);
  uVar1 = uVar8;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 < 0x80) {
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_0080e440();
    bVar2 = *pbVar9;
    uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
    uVar8 = (uint)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar8 = uVar6;
  }
  iVar3 = iVar3 + iVar4 + uVar8 + 1;
  pbVar9 = *(byte **)(param_1 + 0x58);
  bVar2 = *pbVar9;
joined_r0x009dca9c:
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)((long)pbVar9 + 8);
  }
  if (uVar7 == 0) {
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar2 = *pbVar9;
  }
  else {
    uVar6 = (uint)*(undefined8 *)((long)pbVar9 + 8);
    uVar8 = (uint)(bVar2 >> 1);
    uVar1 = uVar8;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar6;
    }
    if (uVar1 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
      bVar2 = *pbVar9;
      uVar6 = (uint)*(undefined8 *)((long)pbVar9 + 8);
      uVar8 = (uint)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar8 = uVar6;
    }
    iVar3 = iVar3 + iVar4 + uVar8 + 1;
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar2 = *pbVar9;
  }
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)((long)pbVar9 + 8);
  }
  if (uVar7 == 0) {
    pbVar9 = *(byte **)(param_1 + 0x68);
    bVar2 = *pbVar9;
  }
  else {
    uVar6 = (uint)*(undefined8 *)((long)pbVar9 + 8);
    uVar8 = (uint)(bVar2 >> 1);
    uVar1 = uVar8;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar6;
    }
    if (uVar1 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
      bVar2 = *pbVar9;
      uVar6 = (uint)*(undefined8 *)((long)pbVar9 + 8);
      uVar8 = (uint)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar8 = uVar6;
    }
    iVar3 = iVar3 + iVar4 + uVar8 + 1;
    pbVar9 = *(byte **)(param_1 + 0x68);
    bVar2 = *pbVar9;
  }
  if ((bVar2 & 1) == 0) {
    uVar7 = (ulong)(bVar2 >> 1);
  }
  else {
    uVar7 = *(ulong *)(pbVar9 + 8);
  }
  if (uVar7 != 0) {
    uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
    uVar8 = (uint)(bVar2 >> 1);
    uVar1 = uVar8;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar6;
    }
    if (uVar1 < 0x80) {
      iVar4 = 1;
    }
    else {
      iVar4 = FUN_0080e440();
      bVar2 = *pbVar9;
      uVar6 = (uint)*(undefined8 *)(pbVar9 + 8);
      uVar8 = (uint)(bVar2 >> 1);
    }
    if ((bVar2 & 1) != 0) {
      uVar8 = uVar6;
    }
    iVar3 = iVar3 + iVar4 + uVar8 + 2;
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return iVar3;
}


