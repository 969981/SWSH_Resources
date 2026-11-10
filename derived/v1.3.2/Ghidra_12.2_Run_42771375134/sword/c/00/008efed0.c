/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008efed0; name: FUN_008efed0
 */


char FUN_008efed0(ulong param_1,ulong param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffff;
  uVar5 = param_1 & 0xffffffff;
  iVar4 = FUN_008ee550(param_1,param_2,0);
  if ((((iVar4 == 0) || (iVar4 = FUN_008ee550(uVar5,uVar6,1), iVar4 == 0)) ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,2), iVar4 == 0)) ||
     ((iVar4 = FUN_008ee550(uVar5,uVar6,3), iVar4 == 0 ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,4), iVar4 == 0)))) {
    cVar1 = FUN_008eef90(uVar5,param_3);
    cVar2 = FUN_008eef90(uVar5,0);
    cVar1 = cVar1 != cVar2;
  }
  else {
    cVar1 = false;
  }
  iVar4 = FUN_008ee550(uVar5,uVar6,0);
  if (((iVar4 == 1) || (iVar4 = FUN_008ee550(uVar5,uVar6,1), iVar4 == 1)) ||
     ((iVar4 = FUN_008ee550(uVar5,uVar6,2), iVar4 == 1 ||
      ((iVar4 = FUN_008ee550(uVar5,uVar6,3), iVar4 == 1 ||
       (iVar4 = FUN_008ee550(uVar5,uVar6,4), iVar4 == 1)))))) {
    cVar2 = FUN_008eef90(uVar5,param_3);
    cVar3 = FUN_008eef90(uVar5,1);
    if (cVar2 != cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  iVar4 = FUN_008ee550(uVar5,uVar6,0);
  if ((((iVar4 == 2) || (iVar4 = FUN_008ee550(uVar5,uVar6,1), iVar4 == 2)) ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,2), iVar4 == 2)) ||
     ((iVar4 = FUN_008ee550(uVar5,uVar6,3), iVar4 == 2 ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,4), iVar4 == 2)))) {
    cVar2 = FUN_008eef90(uVar5,param_3);
    cVar3 = FUN_008eef90(uVar5,2);
    if (cVar2 != cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  iVar4 = FUN_008ee550(uVar5,uVar6,0);
  if (((iVar4 == 3) || (iVar4 = FUN_008ee550(uVar5,uVar6,1), iVar4 == 3)) ||
     ((iVar4 = FUN_008ee550(uVar5,uVar6,2), iVar4 == 3 ||
      ((iVar4 = FUN_008ee550(uVar5,uVar6,3), iVar4 == 3 ||
       (iVar4 = FUN_008ee550(uVar5,uVar6,4), iVar4 == 3)))))) {
    cVar2 = FUN_008eef90(uVar5,param_3);
    cVar3 = FUN_008eef90(uVar5,3);
    if (cVar2 != cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  iVar4 = FUN_008ee550(uVar5,uVar6,0);
  if ((((iVar4 == 4) || (iVar4 = FUN_008ee550(uVar5,uVar6,1), iVar4 == 4)) ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,2), iVar4 == 4)) ||
     ((iVar4 = FUN_008ee550(uVar5,uVar6,3), iVar4 == 4 ||
      (iVar4 = FUN_008ee550(uVar5,uVar6,4), iVar4 == 4)))) {
    cVar2 = FUN_008eef90(uVar5,param_3);
    cVar3 = FUN_008eef90(uVar5,4);
    if (cVar2 != cVar3) {
      cVar1 = cVar1 + '\x01';
    }
  }
  return cVar1;
}


