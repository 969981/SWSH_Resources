/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008efb60; name: FUN_008efb60
 */


char FUN_008efb60(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  if (param_3 == 0) {
    cVar1 = false;
LAB_008efc2c:
    iVar4 = FUN_008ee550(param_1,param_2,0);
    if (((iVar4 == 1) || (iVar4 = FUN_008ee550(param_1,param_2,1), iVar4 == 1)) ||
       ((iVar4 = FUN_008ee550(param_1,param_2,2), iVar4 == 1 ||
        ((iVar4 = FUN_008ee550(param_1,param_2,3), iVar4 == 1 ||
         (iVar4 = FUN_008ee550(param_1,param_2,4), iVar4 == 1)))))) {
      cVar2 = FUN_008eef90(param_1,param_3);
      cVar3 = FUN_008eef90(param_1,1);
      if (cVar2 == cVar3) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 != 2) goto LAB_008efcd0;
  }
  else {
    iVar4 = FUN_008ee550(param_1,param_2,0);
    if ((((iVar4 == 0) || (iVar4 = FUN_008ee550(param_1,param_2,1), iVar4 == 0)) ||
        (iVar4 = FUN_008ee550(param_1,param_2,2), iVar4 == 0)) ||
       ((iVar4 = FUN_008ee550(param_1,param_2,3), iVar4 == 0 ||
        (iVar4 = FUN_008ee550(param_1,param_2,4), iVar4 == 0)))) {
      cVar1 = FUN_008eef90(param_1,param_3);
      cVar2 = FUN_008eef90(param_1,0);
      cVar1 = cVar1 == cVar2;
    }
    else {
      cVar1 = false;
    }
    if (param_3 != 1) goto LAB_008efc2c;
LAB_008efcd0:
    iVar4 = FUN_008ee550(param_1,param_2,0);
    if ((((iVar4 == 2) || (iVar4 = FUN_008ee550(param_1,param_2,1), iVar4 == 2)) ||
        (iVar4 = FUN_008ee550(param_1,param_2,2), iVar4 == 2)) ||
       ((iVar4 = FUN_008ee550(param_1,param_2,3), iVar4 == 2 ||
        (iVar4 = FUN_008ee550(param_1,param_2,4), iVar4 == 2)))) {
      cVar2 = FUN_008eef90(param_1,param_3);
      cVar3 = FUN_008eef90(param_1,2);
      if (cVar2 == cVar3) {
        cVar1 = cVar1 + '\x01';
      }
    }
    if (param_3 == 3) goto LAB_008efe18;
  }
  iVar4 = FUN_008ee550(param_1,param_2,0);
  if (((iVar4 == 3) || (iVar4 = FUN_008ee550(param_1,param_2,1), iVar4 == 3)) ||
     ((iVar4 = FUN_008ee550(param_1,param_2,2), iVar4 == 3 ||
      ((iVar4 = FUN_008ee550(param_1,param_2,3), iVar4 == 3 ||
       (iVar4 = FUN_008ee550(param_1,param_2,4), iVar4 == 3)))))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,3);
    if (cVar2 == cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  if (param_3 == 4) {
    return cVar1;
  }
LAB_008efe18:
  iVar4 = FUN_008ee550(param_1,param_2,0);
  if ((((iVar4 == 4) || (iVar4 = FUN_008ee550(param_1,param_2,1), iVar4 == 4)) ||
      (iVar4 = FUN_008ee550(param_1,param_2,2), iVar4 == 4)) ||
     ((iVar4 = FUN_008ee550(param_1,param_2,3), iVar4 == 4 ||
      (iVar4 = FUN_008ee550(param_1,param_2,4), iVar4 == 4)))) {
    cVar2 = FUN_008eef90(param_1,param_3);
    cVar3 = FUN_008eef90(param_1,4);
    if (cVar2 == cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  return cVar1;
}


