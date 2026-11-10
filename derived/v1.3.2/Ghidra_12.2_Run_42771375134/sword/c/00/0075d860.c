/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075d860; name: FUN_0075d860
 */


void FUN_0075d860(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  if (0xfffffffd < *(uint *)(param_2 + 3)) {
    lVar5 = *param_2;
    if (lVar5 == 0) {
      FUN_01760310(0);
    }
    else {
      FUN_01760c90(lVar5,0xfff0b9d8,(long)(int)param_2[1]);
      if (*param_2 != lVar5) {
        FUN_0175edc0(*param_2,lVar5,1);
      }
    }
    iVar1 = FUN_0175ef10(*param_2);
    if (iVar1 < 2) {
      iVar1 = 1;
    }
    uVar3 = FUN_01761c90(*param_2,0,0xffffffff,0,0,0);
    iVar2 = FUN_0175ef10(*param_2);
    *param_1 = *param_2;
    iVar2 = iVar2 + (1 - iVar1);
    *(int *)(param_1 + 1) = iVar1;
    *(int *)((long)param_1 + 0xc) = iVar2;
    *(int *)(param_1 + 2) = iVar2;
    *(undefined4 *)((long)param_1 + 0x14) = uVar3;
    return;
  }
  iVar1 = FUN_0175ef10(param_2[2]);
  lVar5 = param_2[2];
  iVar1 = iVar1 + 1;
  if (lVar5 == 0) {
    FUN_01760310(0);
    lVar5 = *param_2;
  }
  else {
    FUN_01760c90(lVar5,0xfff0b9d8,(long)(int)param_2[3]);
    if (param_2[2] != lVar5) {
      FUN_0175edc0(param_2[2],lVar5,1);
    }
    lVar5 = *param_2;
  }
  if (lVar5 == 0) {
    FUN_01760310(0);
  }
  else {
    FUN_01760c90(lVar5,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar5) {
      FUN_0175edc0(*param_2,lVar5,1);
    }
  }
  iVar2 = FUN_0175ef10(*param_2);
  iVar2 = iVar2 + -1;
  if (iVar2 < 2) {
    iVar2 = 1;
  }
  uVar3 = FUN_01761c90(*param_2,0,0xffffffff,iVar1,0,0);
  iVar4 = FUN_0175ef10(*param_2);
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = iVar2;
  *(int *)((long)param_1 + 0xc) = iVar4 - iVar2;
  *(int *)(param_1 + 2) = iVar4 - iVar2;
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  if (iVar1 == 0) {
    return;
  }
  FUN_0175ef90(param_2[2],iVar1,0xffffffff);
  FUN_0175ef30(param_2[2],0xfffffffe);
  return;
}


