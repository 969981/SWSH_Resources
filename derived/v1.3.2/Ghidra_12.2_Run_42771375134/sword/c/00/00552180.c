/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00552180; name: FUN_00552180
 */


ulong FUN_00552180(int *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  size_t sVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar3 = *param_2;
  if (cVar3 == '\0') {
    return 0;
  }
  if (param_4 < 0) {
    sVar4 = strlen(param_2);
    param_4 = (int)sVar4;
  }
  if (param_4 == 0) {
    return 0;
  }
  uVar2 = param_3 - 1U & ((int)(param_3 - 1U) >> 0x1f ^ 0xffffffffU);
  if (*param_1 < (int)uVar2) {
    return 0;
  }
  iVar1 = (1 - param_4) + *param_1;
  if (iVar1 <= (int)uVar2) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 2);
  if (param_4 == 1) {
    uVar6 = (ulong)uVar2;
    do {
      if (cVar3 == *(char *)(lVar5 + uVar6)) {
        return (ulong)((int)uVar6 + 1);
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar1);
  }
  else if (param_4 < 2) {
    uVar6 = (ulong)uVar2;
    uVar7 = ~uVar6;
    if ((iVar1 - uVar2 & 7) != 0) {
      lVar5 = -((ulong)(iVar1 - uVar2) & 7);
      do {
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0);
    }
    if (uVar7 + (long)iVar1 < 7) {
      return 0;
    }
    do {
      uVar6 = uVar6 + 8;
    } while ((long)uVar6 < (long)iVar1);
  }
  else {
    uVar6 = (ulong)uVar2;
    do {
      while (cVar3 == *(char *)(lVar5 + uVar6)) {
        lVar8 = 1;
        do {
          if (*(char *)(lVar5 + uVar6 + lVar8) != param_2[lVar8]) break;
          lVar8 = lVar8 + 1;
        } while (lVar8 < param_4);
        uVar6 = uVar6 + 1;
        if ((int)lVar8 == param_4) {
          return uVar6 & 0xffffffff;
        }
        if ((long)iVar1 <= (long)uVar6) {
          return 0;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar1);
  }
  return 0;
}


