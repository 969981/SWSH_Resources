/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002ce280; name: FUN_002ce280
 */


undefined8 FUN_002ce280(long param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 8);
  iVar4 = *(int *)(param_2 + 0xc);
  if (iVar4 < iVar7) {
    return 1;
  }
  if (*param_2 == '\0') {
    iVar2 = *(int *)(param_1 + 0x44) + *(int *)(param_2 + 4);
    if (iVar2 < *(int *)(param_1 + 0x30)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x34) <= iVar2) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x48);
    iVar6 = iVar5 + iVar7;
    if (iVar5 + iVar4 < iVar5 + iVar7) {
      return 1;
    }
    do {
      if (*(int *)(param_1 + 0x3c) <= iVar6) {
        return 1;
      }
      if (*(int *)(param_1 + 0x38) <= iVar6) {
        uVar3 = FUN_002ce100(param_1,iVar6 + *(int *)(param_1 + 0x40) * iVar2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        iVar4 = *(int *)(param_2 + 0xc);
        iVar5 = *(int *)(param_1 + 0x48);
      }
      bVar1 = iVar6 < iVar5 + iVar4;
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_2 + 4);
    if (iVar2 < *(int *)(param_1 + 0x38)) {
      return 1;
    }
    if (*(int *)(param_1 + 0x3c) <= iVar2) {
      return 1;
    }
    iVar5 = *(int *)(param_1 + 0x44);
    if (iVar5 + iVar4 < iVar5 + iVar7) {
      return 1;
    }
    iVar7 = iVar5 + iVar7 + -1;
    do {
      iVar6 = iVar7 + 1;
      if (*(int *)(param_1 + 0x34) <= iVar6) {
        return 1;
      }
      if (*(int *)(param_1 + 0x30) <= iVar6) {
        uVar3 = FUN_002ce100(param_1,iVar2 + *(int *)(param_1 + 0x40) * iVar6);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        iVar4 = *(int *)(param_2 + 0xc);
        iVar5 = *(int *)(param_1 + 0x44);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5 + iVar4);
  }
  return 1;
}


