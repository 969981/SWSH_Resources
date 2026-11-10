/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005524b0; name: FUN_005524b0
 */


int FUN_005524b0(int *param_1,char *param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_2;
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_4 < 0) {
    sVar3 = strlen(param_2);
    param_4 = (int)sVar3;
  }
  if (param_3 < 1) {
    param_3 = *param_1;
    iVar5 = param_3 - param_4;
    if (iVar5 < param_4) {
      return 0;
    }
  }
  else {
    iVar5 = param_3 - param_4;
    if (iVar5 < param_4) {
      return 0;
    }
  }
  if (iVar5 < 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 2);
  if (param_4 == 1) {
    lVar7 = (long)(param_3 + -1);
    do {
      if (cVar2 == *(char *)(lVar4 + lVar7)) {
        return param_3;
      }
      param_3 = param_3 + -1;
      bVar1 = 0 < lVar7;
      lVar7 = lVar7 + -1;
    } while (bVar1);
    return 0;
  }
  if (param_4 < 2) {
    lVar4 = (long)iVar5 + 1;
    do {
      lVar4 = lVar4 + -1;
    } while (0 < lVar4);
    return 0;
  }
  lVar7 = lVar4 + iVar5;
  lVar6 = (long)iVar5;
  do {
    if (cVar2 == *(char *)(lVar4 + lVar6)) {
      lVar8 = 1;
      do {
        if (*(char *)(lVar7 + lVar8) != param_2[lVar8]) break;
        lVar8 = lVar8 + 1;
      } while (lVar8 < param_4);
      if ((int)lVar8 == param_4) {
        return (int)lVar6 + 1;
      }
    }
    lVar7 = lVar7 + -1;
    bVar1 = lVar6 < 1;
    lVar6 = lVar6 + -1;
    if (bVar1) {
      return 0;
    }
  } while( true );
}


