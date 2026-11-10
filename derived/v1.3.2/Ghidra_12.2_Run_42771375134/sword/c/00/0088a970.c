/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088a970; name: FUN_0088a970
 */


void FUN_0088a970(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  
  iVar2 = FUN_008783b0(param_2);
  if (iVar2 == 0x84) {
    return;
  }
  uVar3 = FUN_008806a0(param_3);
  iVar2 = FUN_0087b880(param_2,0);
  if (uVar3 == 0) {
    FUN_0087b880(param_2,1);
    FUN_0087b880(param_2,2);
    FUN_0087b880(param_2,3);
    return;
  }
  uVar6 = 0;
  do {
    iVar4 = FUN_008806c0(param_3,uVar6);
    if (iVar2 == iVar4) {
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x50);
        if (uVar6 == 0) goto LAB_0088aa50;
        uVar5 = 0;
        goto LAB_0088aa2c;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar3);
  goto LAB_0088aa74;
  while (uVar1 = (int)uVar5 + 1, uVar5 = (ulong)uVar1, uVar1 < uVar6) {
LAB_0088aabc:
    if (*(int *)(param_1 + uVar5 * 4 + 0x54) == iVar2) goto LAB_0088ab04;
  }
  if (uVar6 < 4) {
LAB_0088aae0:
    *(int *)(param_1 + (ulong)uVar6 * 4 + 0x54) = iVar2;
    *(uint *)(param_1 + 0x50) = uVar6 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar2;
  }
  goto LAB_0088ab04;
  while (uVar1 = (int)uVar5 + 1, uVar5 = (ulong)uVar1, uVar1 < uVar6) {
LAB_0088ab4c:
    if (*(int *)(param_1 + uVar5 * 4 + 0x54) == iVar2) goto LAB_0088ab94;
  }
  if (uVar6 < 4) {
LAB_0088ab70:
    *(int *)(param_1 + (ulong)uVar6 * 4 + 0x54) = iVar2;
    *(uint *)(param_1 + 0x50) = uVar6 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar2;
  }
  goto LAB_0088ab94;
  while (uVar1 = (int)uVar5 + 1, uVar5 = (ulong)uVar1, uVar1 < uVar6) {
LAB_0088aa2c:
    if (*(int *)(param_1 + uVar5 * 4 + 0x54) == iVar2) goto LAB_0088aa74;
  }
  if (uVar6 < 4) {
LAB_0088aa50:
    *(int *)(param_1 + (ulong)uVar6 * 4 + 0x54) = iVar2;
    *(uint *)(param_1 + 0x50) = uVar6 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar2;
  }
LAB_0088aa74:
  iVar2 = FUN_0087b880(param_2,1);
  uVar6 = 0;
  do {
    iVar4 = FUN_008806c0(param_3,uVar6);
    if (iVar2 == iVar4) {
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x50);
        if (uVar6 == 0) goto LAB_0088aae0;
        uVar5 = 0;
        goto LAB_0088aabc;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar3);
LAB_0088ab04:
  iVar2 = FUN_0087b880(param_2,2);
  uVar6 = 0;
  do {
    iVar4 = FUN_008806c0(param_3,uVar6);
    if (iVar2 == iVar4) {
      if (iVar2 != 0) {
        uVar6 = *(uint *)(param_1 + 0x50);
        if (uVar6 == 0) goto LAB_0088ab70;
        uVar5 = 0;
        goto LAB_0088ab4c;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < uVar3);
LAB_0088ab94:
  iVar2 = FUN_0087b880(param_2,3);
  uVar6 = 0;
  while (iVar4 = FUN_008806c0(param_3,uVar6), iVar2 != iVar4) {
    uVar6 = uVar6 + 1;
    if (uVar3 <= uVar6) {
      return;
    }
  }
  if (iVar2 == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x50);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      if (*(int *)(param_1 + uVar5 * 4 + 0x54) == iVar2) {
        return;
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulong)uVar6;
    } while (uVar6 < uVar3);
    if (3 < uVar3) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x60);
      *(int *)(param_1 + 0x60) = iVar2;
      return;
    }
  }
  *(int *)(param_1 + (ulong)uVar3 * 4 + 0x54) = iVar2;
  *(uint *)(param_1 + 0x50) = uVar3 + 1;
  return;
}


