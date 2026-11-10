/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f0810; name: FUN_008f0810
 */


int FUN_008f0810(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = FUN_008efed0();
  uVar4 = uVar4 & 0xff;
  uVar6 = 0;
  if (uVar4 != 0) {
    uVar6 = (param_4 & 0xff) / uVar4;
  }
  uVar4 = (param_4 & 0xff) - uVar6 * uVar4;
  if ((param_3 / 5) * 5 != 0) {
    iVar1 = param_3 % 5;
    iVar5 = FUN_008ee550(param_1,param_2,0);
    if ((((iVar5 == iVar1) || (iVar5 = FUN_008ee550(param_1,param_2,1), iVar5 == iVar1)) ||
        (iVar5 = FUN_008ee550(param_1,param_2,2), iVar5 == iVar1)) ||
       ((iVar5 = FUN_008ee550(param_1,param_2,3), iVar5 == iVar1 ||
        (iVar5 = FUN_008ee550(param_1,param_2,4), iVar5 == iVar1)))) {
      cVar2 = FUN_008eef90(param_1,param_3);
      cVar3 = FUN_008eef90(param_1,iVar1);
      if (cVar2 != cVar3) {
        uVar6 = (uint)((uVar4 & 0xff) != 0);
        if ((uVar4 & 0xff) == 0) {
          return iVar1;
        }
        goto LAB_008f090c;
      }
    }
  }
  uVar6 = 0;
LAB_008f090c:
  iVar1 = (param_3 + 1) % 5;
  if ((iVar1 != param_3) &&
     (((iVar5 = FUN_008ee550(param_1,param_2,0), iVar5 == iVar1 ||
       (iVar5 = FUN_008ee550(param_1,param_2,1), iVar5 == iVar1)) ||
      ((iVar5 = FUN_008ee550(param_1,param_2,2), iVar5 == iVar1 ||
       ((iVar5 = FUN_008ee550(param_1,param_2,3), iVar5 == iVar1 ||
        (iVar5 = FUN_008ee550(param_1,param_2,4), iVar5 == iVar1)))))))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,iVar1);
    if (cVar2 != cVar3) {
      if (uVar6 == (uVar4 & 0xff)) {
        return iVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
  iVar1 = (param_3 + 2) % 5;
  if ((iVar1 != param_3) &&
     ((((iVar5 = FUN_008ee550(param_1,param_2,0), iVar5 == iVar1 ||
        (iVar5 = FUN_008ee550(param_1,param_2,1), iVar5 == iVar1)) ||
       (iVar5 = FUN_008ee550(param_1,param_2,2), iVar5 == iVar1)) ||
      ((iVar5 = FUN_008ee550(param_1,param_2,3), iVar5 == iVar1 ||
       (iVar5 = FUN_008ee550(param_1,param_2,4), iVar5 == iVar1)))))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,iVar1);
    if (cVar2 != cVar3) {
      if (uVar6 == (uVar4 & 0xff)) {
        return iVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
  iVar1 = (param_3 + 3) % 5;
  if ((iVar1 != param_3) &&
     (((iVar5 = FUN_008ee550(param_1,param_2,0), iVar5 == iVar1 ||
       (iVar5 = FUN_008ee550(param_1,param_2,1), iVar5 == iVar1)) ||
      ((iVar5 = FUN_008ee550(param_1,param_2,2), iVar5 == iVar1 ||
       ((iVar5 = FUN_008ee550(param_1,param_2,3), iVar5 == iVar1 ||
        (iVar5 = FUN_008ee550(param_1,param_2,4), iVar5 == iVar1)))))))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,iVar1);
    if (cVar2 != cVar3) {
      if (uVar6 == (uVar4 & 0xff)) {
        return iVar1;
      }
      uVar6 = uVar6 + 1;
    }
  }
  iVar1 = (param_3 + 4) % 5;
  if ((iVar1 != param_3) &&
     ((((iVar5 = FUN_008ee550(param_1,param_2,0), iVar5 == iVar1 ||
        (iVar5 = FUN_008ee550(param_1,param_2,1), iVar5 == iVar1)) ||
       (iVar5 = FUN_008ee550(param_1,param_2,2), iVar5 == iVar1)) ||
      ((iVar5 = FUN_008ee550(param_1,param_2,3), iVar5 == iVar1 ||
       (iVar5 = FUN_008ee550(param_1,param_2,4), iVar5 == iVar1)))))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,iVar1);
    if ((cVar2 != cVar3) && (uVar6 == (uVar4 & 0xff))) {
      return iVar1;
    }
  }
  return 5;
}


