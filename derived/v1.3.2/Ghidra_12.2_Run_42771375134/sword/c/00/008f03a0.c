/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f03a0; name: FUN_008f03a0
 */


int FUN_008f03a0(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  
  bVar3 = FUN_008efb60();
  if (bVar3 == 0) {
    return 5;
  }
  uVar2 = 0;
  if (bVar3 != 0) {
    uVar2 = (param_4 & 0xff) / (uint)bVar3;
  }
  uVar2 = (param_4 & 0xff) - uVar2 * bVar3;
  if ((param_3 / 5) * 5 != 0) {
    iVar1 = param_3 % 5;
    iVar6 = FUN_008ee550(param_1,param_2,0);
    if ((((iVar6 == iVar1) || (iVar6 = FUN_008ee550(param_1,param_2,1), iVar6 == iVar1)) ||
        (iVar6 = FUN_008ee550(param_1,param_2,2), iVar6 == iVar1)) ||
       ((iVar6 = FUN_008ee550(param_1,param_2,3), iVar6 == iVar1 ||
        (iVar6 = FUN_008ee550(param_1,param_2,4), iVar6 == iVar1)))) {
      cVar4 = FUN_008eef90(param_1,param_3);
      cVar5 = FUN_008eef90(param_1,iVar1);
      if (cVar4 == cVar5) {
        uVar7 = (uint)((uVar2 & 0xff) != 0);
        if ((uVar2 & 0xff) == 0) {
          return iVar1;
        }
        goto LAB_008f04bc;
      }
    }
  }
  uVar7 = 0;
LAB_008f04bc:
  iVar1 = (param_3 + 1) % 5;
  if ((iVar1 != param_3) &&
     (((iVar6 = FUN_008ee550(param_1,param_2,0), iVar6 == iVar1 ||
       (iVar6 = FUN_008ee550(param_1,param_2,1), iVar6 == iVar1)) ||
      ((iVar6 = FUN_008ee550(param_1,param_2,2), iVar6 == iVar1 ||
       ((iVar6 = FUN_008ee550(param_1,param_2,3), iVar6 == iVar1 ||
        (iVar6 = FUN_008ee550(param_1,param_2,4), iVar6 == iVar1)))))))) {
    cVar4 = FUN_008eef90(param_1,param_3);
    cVar5 = FUN_008eef90(param_1,iVar1);
    if (cVar4 == cVar5) {
      if (uVar7 == (uVar2 & 0xff)) {
        return iVar1;
      }
      uVar7 = uVar7 + 1;
    }
  }
  iVar1 = (param_3 + 2) % 5;
  if ((iVar1 != param_3) &&
     ((((iVar6 = FUN_008ee550(param_1,param_2,0), iVar6 == iVar1 ||
        (iVar6 = FUN_008ee550(param_1,param_2,1), iVar6 == iVar1)) ||
       (iVar6 = FUN_008ee550(param_1,param_2,2), iVar6 == iVar1)) ||
      ((iVar6 = FUN_008ee550(param_1,param_2,3), iVar6 == iVar1 ||
       (iVar6 = FUN_008ee550(param_1,param_2,4), iVar6 == iVar1)))))) {
    cVar4 = FUN_008eef90(param_1,param_3);
    cVar5 = FUN_008eef90(param_1,iVar1);
    if (cVar4 == cVar5) {
      if (uVar7 == (uVar2 & 0xff)) {
        return iVar1;
      }
      uVar7 = uVar7 + 1;
    }
  }
  iVar1 = (param_3 + 3) % 5;
  if ((iVar1 != param_3) &&
     (((iVar6 = FUN_008ee550(param_1,param_2,0), iVar6 == iVar1 ||
       (iVar6 = FUN_008ee550(param_1,param_2,1), iVar6 == iVar1)) ||
      ((iVar6 = FUN_008ee550(param_1,param_2,2), iVar6 == iVar1 ||
       ((iVar6 = FUN_008ee550(param_1,param_2,3), iVar6 == iVar1 ||
        (iVar6 = FUN_008ee550(param_1,param_2,4), iVar6 == iVar1)))))))) {
    cVar4 = FUN_008eef90(param_1,param_3);
    cVar5 = FUN_008eef90(param_1,iVar1);
    if (cVar4 == cVar5) {
      if (uVar7 == (uVar2 & 0xff)) {
        return iVar1;
      }
      uVar7 = uVar7 + 1;
    }
  }
  iVar1 = (param_3 + 4) % 5;
  if ((iVar1 != param_3) &&
     ((((iVar6 = FUN_008ee550(param_1,param_2,0), iVar6 == iVar1 ||
        (iVar6 = FUN_008ee550(param_1,param_2,1), iVar6 == iVar1)) ||
       (iVar6 = FUN_008ee550(param_1,param_2,2), iVar6 == iVar1)) ||
      ((iVar6 = FUN_008ee550(param_1,param_2,3), iVar6 == iVar1 ||
       (iVar6 = FUN_008ee550(param_1,param_2,4), iVar6 == iVar1)))))) {
    cVar4 = FUN_008eef90(param_1,param_3);
    cVar5 = FUN_008eef90(param_1,iVar1);
    if ((cVar4 == cVar5) && (uVar7 == (uVar2 & 0xff))) {
      return iVar1;
    }
  }
  return 5;
}


