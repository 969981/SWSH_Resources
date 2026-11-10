/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef800; name: FUN_008ef800
 */


int FUN_008ef800(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = param_2 & 0xffffffff;
  uVar4 = param_1 & 0xffffffff;
  iVar1 = FUN_008ee550(param_1,param_2,0);
  if ((((iVar1 == 0) || (iVar1 = FUN_008ee550(uVar4,uVar3,1), iVar1 == 0)) ||
      (iVar1 = FUN_008ee550(uVar4,uVar3,2), iVar1 == 0)) ||
     ((iVar1 = FUN_008ee550(uVar4,uVar3,3), iVar1 == 0 ||
      (iVar1 = FUN_008ee550(uVar4,uVar3,4), iVar1 == 0)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  iVar2 = FUN_008ee550(uVar4,uVar3,0);
  if (((iVar2 == 1) || (iVar2 = FUN_008ee550(uVar4,uVar3,1), iVar2 == 1)) ||
     ((iVar2 = FUN_008ee550(uVar4,uVar3,2), iVar2 == 1 ||
      ((iVar2 = FUN_008ee550(uVar4,uVar3,3), iVar2 == 1 ||
       (iVar2 = FUN_008ee550(uVar4,uVar3,4), iVar2 == 1)))))) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = FUN_008ee550(uVar4,uVar3,0);
  if ((((iVar2 == 2) || (iVar2 = FUN_008ee550(uVar4,uVar3,1), iVar2 == 2)) ||
      (iVar2 = FUN_008ee550(uVar4,uVar3,2), iVar2 == 2)) ||
     ((iVar2 = FUN_008ee550(uVar4,uVar3,3), iVar2 == 2 ||
      (iVar2 = FUN_008ee550(uVar4,uVar3,4), iVar2 == 2)))) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = FUN_008ee550(uVar4,uVar3,0);
  if (((iVar2 == 3) || (iVar2 = FUN_008ee550(uVar4,uVar3,1), iVar2 == 3)) ||
     ((iVar2 = FUN_008ee550(uVar4,uVar3,2), iVar2 == 3 ||
      ((iVar2 = FUN_008ee550(uVar4,uVar3,3), iVar2 == 3 ||
       (iVar2 = FUN_008ee550(uVar4,uVar3,4), iVar2 == 3)))))) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = FUN_008ee550(uVar4,uVar3,0);
  if ((((iVar2 == 4) || (iVar2 = FUN_008ee550(uVar4,uVar3,1), iVar2 == 4)) ||
      (iVar2 = FUN_008ee550(uVar4,uVar3,2), iVar2 == 4)) ||
     ((iVar2 = FUN_008ee550(uVar4,uVar3,3), iVar2 == 4 ||
      (iVar2 = FUN_008ee550(uVar4,uVar3,4), iVar2 == 4)))) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


