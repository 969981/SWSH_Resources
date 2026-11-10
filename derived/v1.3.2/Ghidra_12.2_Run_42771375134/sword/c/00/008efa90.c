/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008efa90; name: FUN_008efa90
 */


bool FUN_008efa90(ulong param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  if (param_3 < 5) {
    uVar2 = param_2 & 0xffffffff;
    uVar3 = param_1 & 0xffffffff;
    iVar1 = FUN_008ee550(param_1,param_2,0);
    bVar4 = true;
    if ((iVar1 != param_3) && (iVar1 = FUN_008ee550(uVar3,uVar2,1), iVar1 != param_3)) {
      iVar1 = FUN_008ee550(uVar3,uVar2,2);
      if ((iVar1 != param_3) && (iVar1 = FUN_008ee550(uVar3,uVar2,3), iVar1 != param_3)) {
        iVar1 = FUN_008ee550(uVar3,uVar2,4);
        return iVar1 == param_3;
      }
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


