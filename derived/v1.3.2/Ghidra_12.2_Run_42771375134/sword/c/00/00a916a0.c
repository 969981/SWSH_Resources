/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a916a0; name: FUN_00a916a0
 */


void FUN_00a916a0(long param_1)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 1:
    iVar1 = *(int *)(param_1 + 0x108);
    *(int *)(param_1 + 0x108) = iVar1 + 1;
    if ((0x3b < iVar1) && (*(char *)(param_1 + 0x100) != '\0')) {
LAB_00a917c8:
      *(undefined4 *)(param_1 + 0x104) = 2;
      FUN_00a93ef0(param_1);
      return;
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x170) != '\0') {
      if (*(long *)(param_1 + 0x298) == 0) {
        return;
      }
      if (*(char *)(*(long *)(param_1 + 0x298) + 0x170) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x3a8) == 0) {
        return;
      }
      if (*(char *)(*(long *)(param_1 + 0x3a8) + 0x170) == '\0') {
        return;
      }
      if (*(long *)(param_1 + 0x608) == 0) {
        return;
      }
      if (*(char *)(*(long *)(param_1 + 0x608) + 0x170) == '\0') {
        return;
      }
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      bVar2 = FUN_00a713a0();
      lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 8);
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x4a8);
      if (*(int *)(lVar4 + 0x104) == 2) {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x130) + 8);
        if (((lVar5 == 0) || (*(char *)(lVar5 + 0x170) == '\0')) ||
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x150) + 8), lVar4 == 0)) {
          bVar2 = 0;
          lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 8);
        }
        else {
          bVar2 = *(char *)(lVar4 + 0x170) != '\0';
          lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 8);
        }
      }
      else {
        bVar2 = 1;
        lVar4 = *(long *)(*(long *)(param_1 + 0x130) + 8);
      }
    }
    if (lVar4 == 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x170) == '\0') {
      return;
    }
    lVar4 = *(long *)(*(long *)(param_1 + 0x150) + 8);
    if (lVar4 == 0) {
      return;
    }
    if (*(char *)(lVar4 + 0x170) == '\0') {
      return;
    }
    if (((bVar2 ^ 1) & 1) != 0) {
      return;
    }
    FUN_00a94770(param_1);
    if (*(char *)(param_1 + 0x101) == '\0') goto LAB_00a91cf4;
    if ((*(char *)(param_1 + 0x100) != '\0') && (*(int *)(param_1 + 0x28) == 0)) {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x548);
      if (lVar4 == 0) {
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x550);
        if (lVar4 == 0) goto LAB_00a91bc4;
LAB_00a918a8:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x558);
        if (lVar4 != 0) goto LAB_00a918e4;
LAB_00a91bdc:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x560);
        if (lVar4 == 0) goto LAB_00a91bf4;
LAB_00a91920:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x568);
        if (lVar4 != 0) goto LAB_00a9195c;
LAB_00a91c0c:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x570);
        if (lVar4 == 0) goto LAB_00a91c24;
LAB_00a91998:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x578);
        if (lVar4 != 0) goto LAB_00a919d4;
LAB_00a91c3c:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x580);
        if (lVar4 == 0) goto LAB_00a91c54;
LAB_00a91a10:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x588);
        if (lVar4 != 0) goto LAB_00a91a4c;
LAB_00a91c6c:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x590);
        if (lVar4 == 0) goto LAB_00a91c84;
LAB_00a91a88:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x598);
        if (lVar4 != 0) goto LAB_00a91ac4;
LAB_00a91c9c:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5a0);
        if (lVar4 == 0) goto LAB_00a91cb4;
LAB_00a91b00:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5a8);
        if (lVar4 != 0) goto LAB_00a91b3c;
LAB_00a91ccc:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5b0);
      }
      else {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x550);
        if (lVar4 != 0) goto LAB_00a918a8;
LAB_00a91bc4:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x558);
        if (lVar4 == 0) goto LAB_00a91bdc;
LAB_00a918e4:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x560);
        if (lVar4 != 0) goto LAB_00a91920;
LAB_00a91bf4:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x568);
        if (lVar4 == 0) goto LAB_00a91c0c;
LAB_00a9195c:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x570);
        if (lVar4 != 0) goto LAB_00a91998;
LAB_00a91c24:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x578);
        if (lVar4 == 0) goto LAB_00a91c3c;
LAB_00a919d4:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x580);
        if (lVar4 != 0) goto LAB_00a91a10;
LAB_00a91c54:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x588);
        if (lVar4 == 0) goto LAB_00a91c6c;
LAB_00a91a4c:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x590);
        if (lVar4 != 0) goto LAB_00a91a88;
LAB_00a91c84:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x598);
        if (lVar4 == 0) goto LAB_00a91c9c;
LAB_00a91ac4:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5a0);
        if (lVar4 != 0) goto LAB_00a91b00;
LAB_00a91cb4:
        FUN_00ad58a0(0,1);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5a8);
        if (lVar4 == 0) goto LAB_00a91ccc;
LAB_00a91b3c:
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x5b0);
      }
      if (lVar4 == 0) {
        FUN_00ad58a0(0,1);
      }
      else {
        plVar6 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar6 + 0x10))(plVar6);
        FUN_00ad58a0(lVar4,1);
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
    *(undefined1 *)(param_1 + 0x101) = 0;
LAB_00a91cf4:
    *(undefined4 *)(param_1 + 0x104) = 3;
    return;
  case 3:
    FUN_00698cc0(*(long *)(param_1 + 0x20) + 0x80);
    uVar3 = FUN_0069a920();
    if ((uVar3 & 1) != 0) {
      FUN_00a931b0(param_1);
      return;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_00a917c8;
  }
  return;
}


