/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935a50; name: FUN_00935a50
 */


int FUN_00935a50(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar5 = 399;
  if (0 < iVar2) {
    iVar5 = iVar2 + -1;
  }
  if (iVar5 == iVar2) {
    return 0;
  }
  iVar4 = 0;
  do {
    if (param_1[(long)iVar5 * 3 + 2] == 0) {
      return iVar4;
    }
    if ((param_1[(long)iVar5 * 3 + 2] == param_2) && (param_1[(long)iVar5 * 3 + 1] == param_3)) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = iVar5 + -1;
    bVar1 = 0 < iVar5;
    iVar5 = 399;
    if (bVar1) {
      iVar5 = iVar3;
    }
  } while (iVar5 != iVar2);
  return iVar4;
}


