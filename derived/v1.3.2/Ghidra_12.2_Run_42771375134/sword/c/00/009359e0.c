/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009359e0; name: FUN_009359e0
 */


undefined8 FUN_009359e0(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = 399;
  if (0 < iVar2) {
    iVar4 = iVar2 + -1;
  }
  while( true ) {
    if ((iVar4 == iVar2) || (param_1[(long)iVar4 * 3 + 2] == 0)) {
      return 0;
    }
    if ((param_1[(long)iVar4 * 3 + 2] == param_2) && (param_1[(long)iVar4 * 3 + 1] == param_3))
    break;
    iVar3 = iVar4 + -1;
    bVar1 = 0 < iVar4;
    iVar4 = 399;
    if (bVar1) {
      iVar4 = iVar3;
    }
  }
  return 1;
}


