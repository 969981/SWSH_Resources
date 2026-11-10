/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005c5800; name: FUN_005c5800
 */


void FUN_005c5800(char *param_1,long param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return;
  }
  if (*param_1 == '\0') {
    lVar4 = 0;
    cVar2 = *param_3;
    if (param_4 == -1) goto LAB_005c588c;
LAB_005c5830:
    if ((param_4 < 1) || (cVar2 == '\0')) goto LAB_005c5900;
    pcVar1 = param_1;
    if (param_2 < 1) {
      do {
        param_3 = param_3 + 1;
        param_1 = pcVar1 + 1;
        *pcVar1 = cVar2;
        cVar2 = *param_3;
        if (param_4 < 2) break;
        param_4 = param_4 + -1;
        pcVar1 = param_1;
      } while (cVar2 != '\0');
      goto LAB_005c5900;
    }
    lVar3 = 0;
    do {
      if (lVar4 + param_2 <= lVar3) {
        param_1 = param_1 + lVar3;
        goto LAB_005c5900;
      }
      lVar5 = lVar3 + 1;
      param_1[lVar3] = cVar2;
      if (param_4 < 2) break;
      cVar2 = param_3[lVar3 + 1];
      param_4 = param_4 + -1;
      lVar3 = lVar5;
    } while (cVar2 != '\0');
  }
  else {
    lVar3 = 0;
    do {
      lVar4 = lVar3 + 1;
      lVar5 = lVar3 + 1;
      lVar3 = lVar4;
    } while (param_1[lVar5] != '\0');
    param_1 = param_1 + lVar4;
    cVar2 = *param_3;
    if (param_4 != -1) goto LAB_005c5830;
LAB_005c588c:
    if (cVar2 == '\0') goto LAB_005c5900;
    if (param_2 < 1) {
      pcVar1 = param_1;
      do {
        param_3 = param_3 + 1;
        param_1 = pcVar1 + 1;
        *pcVar1 = cVar2;
        cVar2 = *param_3;
        pcVar1 = param_1;
      } while (cVar2 != '\0');
      goto LAB_005c5900;
    }
    lVar3 = 0;
    do {
      if (lVar4 + param_2 <= lVar3) {
        return;
      }
      param_1[lVar3] = cVar2;
      lVar5 = lVar3 + 1;
      cVar2 = param_3[lVar3 + 1];
      lVar3 = lVar5;
    } while (cVar2 != '\0');
  }
  param_1 = param_1 + lVar5;
LAB_005c5900:
  *param_1 = '\0';
  return;
}


