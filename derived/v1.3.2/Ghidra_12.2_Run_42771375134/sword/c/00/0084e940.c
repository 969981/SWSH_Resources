/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084e940; name: FUN_0084e940
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_0084e940(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  
  uVar5 = *(uint *)(param_1 + 0x10);
  if ((uVar5 & 0xff) == 0) {
    iVar4 = 0;
  }
  else {
    if ((uVar5 & 1) == 0) {
      iVar4 = 0;
    }
    else {
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar3 = bVar2 >> 1;
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      if (uVar1 < 0x80) {
        iVar4 = 1;
      }
      else {
        iVar4 = FUN_0080e440();
        bVar2 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar3 = bVar2 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      iVar4 = iVar4 + uVar1 + 1;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x20) < 0) {
        iVar6 = 10;
      }
      else if (*(uint *)(param_1 + 0x20) < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      iVar4 = iVar4 + iVar6 + 1;
    }
    if ((uVar5 >> 2 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x24) < 0) {
        iVar4 = iVar4 + 0xb;
      }
      else if (*(uint *)(param_1 + 0x24) < 0x80) {
        iVar4 = iVar4 + 2;
      }
      else {
        iVar6 = FUN_0080e440();
        uVar5 = *(uint *)(param_1 + 0x10);
        iVar4 = iVar4 + iVar6 + 1;
      }
    }
    if ((uVar5 >> 3 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x38) < 0) {
        iVar4 = iVar4 + 0xb;
      }
      else if (*(uint *)(param_1 + 0x38) < 0x80) {
        iVar4 = iVar4 + 2;
      }
      else {
        iVar6 = FUN_0080e440();
        uVar5 = *(uint *)(param_1 + 0x10);
        iVar4 = iVar6 + 1 + iVar4;
      }
    }
    if ((uVar5 >> 4 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x28);
      bVar2 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar3 = bVar2 >> 1;
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      if (uVar1 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar2 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar3 = bVar2 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      iVar4 = iVar4 + iVar6 + uVar1 + 1;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x30);
      bVar2 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar3 = bVar2 >> 1;
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      if (uVar1 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar2 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar3 = bVar2 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      iVar4 = iVar4 + iVar6 + uVar1 + 1;
    }
    if ((uVar5 >> 6 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x40);
      bVar2 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar3 = bVar2 >> 1;
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      if (uVar1 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar2 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar3 = bVar2 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      iVar4 = iVar4 + iVar6 + uVar1 + 1;
    }
    if ((uVar5 >> 7 & 1) != 0) {
      if ((int)*(uint *)(param_1 + 0x3c) < 0) {
        iVar4 = iVar4 + 0xb;
      }
      else if (*(uint *)(param_1 + 0x3c) < 0x80) {
        iVar4 = iVar4 + 2;
      }
      else {
        iVar6 = FUN_0080e440();
        uVar5 = *(uint *)(param_1 + 0x10);
        iVar4 = iVar6 + 1 + iVar4;
      }
    }
  }
  if ((uVar5 & 0x300) != 0) {
    if ((uVar5 >> 8 & 1) != 0) {
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar2 = *pbVar9;
      uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
      bVar3 = bVar2 >> 1;
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      if (uVar1 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440();
        bVar2 = *pbVar9;
        uVar8 = (uint)*(undefined8 *)(pbVar9 + 8);
        bVar3 = bVar2 >> 1;
        uVar5 = *(uint *)(param_1 + 0x10);
      }
      uVar1 = (uint)bVar3;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar8;
      }
      iVar4 = iVar4 + iVar6 + uVar1 + 1;
    }
    if ((uVar5 >> 9 & 1) != 0) {
      uVar5 = FUN_008575f0(*(undefined8 *)(param_1 + 0x50));
      if (uVar5 < 0x80) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_0080e440(uVar5);
      }
      iVar4 = iVar4 + uVar5 + iVar6 + 1;
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x0084ecbc;
    }
  }
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x0084ecbc:
  if ((uVar7 & 1) != 0) {
    iVar6 = FUN_00811270(uVar7 & 0xfffffffffffffffe);
    iVar4 = iVar6 + iVar4;
  }
  *(int *)(param_1 + 0x14) = iVar4;
  return iVar4;
}


