/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935ac0; name: FUN_00935ac0
 */


int FUN_00935ac0(int *param_1,int param_2)

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
    if (iVar4 == iVar2) {
      return 0;
    }
    if (param_1[(long)iVar4 * 3 + 2] == 0) break;
    if ((*(char *)((long)param_1 + (long)iVar4 * 0xc + 0xd) != '\0') &&
       (param_1[(long)iVar4 * 3 + 1] == param_2)) {
      return param_1[(long)iVar4 * 3 + 2];
    }
    iVar3 = iVar4 + -1;
    bVar1 = 0 < iVar4;
    iVar4 = 399;
    if (bVar1) {
      iVar4 = iVar3;
    }
  }
  return 0;
}


