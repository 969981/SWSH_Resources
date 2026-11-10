/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005523f0; name: FUN_005523f0
 */


void FUN_005523f0(undefined8 param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if (param_4 < 1) {
    iVar2 = *param_2;
    iVar1 = param_3;
    if (param_3 < 2) {
      iVar1 = 1;
    }
    if ((iVar2 < 0) || (iVar2 < iVar1)) goto LAB_00552494;
    iVar3 = 1 - param_3;
    if (param_3 < 2) {
      iVar3 = 0;
    }
    iVar2 = iVar2 + iVar3;
    lVar4 = *(long *)(param_2 + 2) + (long)(iVar1 + -1);
  }
  else {
    param_4 = param_4 - param_3;
    if (param_3 < 2) {
      param_3 = 1;
    }
    if ((param_4 < -1) || (*param_2 < param_3)) {
LAB_00552494:
      FUN_00550fe0(param_1,&DAT_01d38550);
      return;
    }
    param_4 = param_4 + 1;
    iVar1 = *param_2 + 1;
    iVar2 = iVar1 - param_3;
    if (param_4 + param_3 <= iVar1) {
      iVar2 = param_4;
    }
    lVar4 = *(long *)(param_2 + 2) + (long)(param_3 + -1);
  }
  FUN_00551100(param_1,lVar4,iVar2,iVar2);
  return;
}


