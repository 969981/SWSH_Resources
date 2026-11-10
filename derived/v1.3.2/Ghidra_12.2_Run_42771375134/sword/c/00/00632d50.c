/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00632d50; name: FUN_00632d50
 */


long FUN_00632d50(undefined8 param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  do {
    lVar5 = param_2;
    if (*(char *)(lVar5 + 0x54) != '\0') {
      return 0;
    }
    if (*(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x40) < param_3[1] - *param_3) {
      return 0;
    }
    if (*(int *)(lVar5 + 0x4c) - *(int *)(lVar5 + 0x48) < param_3[3] - param_3[2]) {
      return 0;
    }
    if (*(long *)(lVar5 + 0x20) == 0) {
      bVar6 = false;
      lVar4 = *(long *)(lVar5 + 0x28);
    }
    else {
      lVar4 = FUN_00632d50(param_1,*(long *)(lVar5 + 0x20),param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      bVar6 = true;
      lVar4 = *(long *)(lVar5 + 0x28);
    }
    if (lVar4 != 0) {
      lVar4 = FUN_00632d50(param_1,lVar4,param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      bVar6 = true;
    }
    if (*(long *)(lVar5 + 0x30) != 0) {
      lVar4 = FUN_00632d50(param_1,*(long *)(lVar5 + 0x30),param_3);
      if (lVar4 != 0) {
        return lVar4;
      }
      bVar6 = true;
    }
    param_2 = *(long *)(lVar5 + 0x38);
  } while (*(long *)(lVar5 + 0x38) != 0);
  if (!bVar6) {
    iVar2 = param_3[3] - param_3[2];
    iVar1 = *(int *)(lVar5 + 0x48);
    iVar3 = *(int *)(lVar5 + 0x4c) - iVar1;
    if (param_3[1] - *param_3 == *(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x40)) {
      if (iVar2 == iVar3) {
        return lVar5;
      }
      FUN_00632f40(param_1,lVar5,(param_3[3] + iVar1) - param_3[2]);
      lVar4 = *(long *)(lVar5 + 0x20);
    }
    else if (iVar2 == iVar3) {
      FUN_006331d0(param_1,lVar5);
      lVar4 = *(long *)(lVar5 + 0x20);
    }
    else {
      FUN_00633460(param_1,lVar5,*(int *)(lVar5 + 0x40) + (param_3[1] - *param_3),iVar1 + iVar2);
      lVar4 = *(long *)(lVar5 + 0x20);
    }
    if ((lVar4 != 0) && (lVar4 = FUN_00632d50(param_1,lVar4,param_3), lVar4 != 0)) {
      return lVar4;
    }
    if ((*(long *)(lVar5 + 0x28) != 0) &&
       (lVar4 = FUN_00632d50(param_1,*(long *)(lVar5 + 0x28),param_3), lVar4 != 0)) {
      return lVar4;
    }
    if ((*(long *)(lVar5 + 0x30) != 0) &&
       (lVar4 = FUN_00632d50(param_1,*(long *)(lVar5 + 0x30),param_3), lVar4 != 0)) {
      return lVar4;
    }
    if ((*(long *)(lVar5 + 0x38) != 0) &&
       (lVar5 = FUN_00632d50(param_1,*(long *)(lVar5 + 0x38),param_3), lVar5 != 0)) {
      return lVar5;
    }
  }
  return 0;
}


