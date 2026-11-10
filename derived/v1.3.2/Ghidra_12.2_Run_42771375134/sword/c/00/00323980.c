/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00323980; name: FUN_00323980
 */


void FUN_00323980(char *param_1,long *param_2,uint *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  char *__dest;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *__s2;
  ulong uVar6;
  ulong uVar7;
  
  if (((param_4 == (long *)0x0) || (*param_3 = 0, param_1 == (char *)0x0)) || (*param_1 == '\0')) {
    return;
  }
  uVar6 = 0;
  do {
    uVar7 = uVar6 + 1;
    lVar1 = uVar6 + 1;
    uVar6 = uVar7;
  } while (param_1[lVar1] != '\0');
  __dest = (char *)(**(code **)(*param_2 + 0x10))(param_2,(int)uVar7 + 1);
  memcpy(__dest,param_1,uVar7 & 0xffffffff);
  __dest[uVar7 & 0xffffffff] = '\0';
  if (__dest != (char *)0x0) {
    __s2 = __dest;
    if (*__dest != '\0') {
      pcVar3 = __dest;
      do {
        while (pcVar5 = pcVar3 + 1, *pcVar5 != '|') {
          pcVar3 = pcVar5;
          if (*pcVar5 == '\0') goto LAB_00323a94;
        }
        pcVar3[1] = '\0';
        pcVar5 = (char *)*param_4;
        pcVar3 = pcVar3 + 2;
        if (pcVar5 != (char *)0x0) {
          uVar6 = 0;
          uVar7 = 1;
          do {
            iVar2 = strcasecmp(pcVar5,__s2);
            if (iVar2 == 0) {
              uVar4 = *(uint *)(param_4 + uVar6 * 2 + 1);
              goto LAB_00323a7c;
            }
            pcVar5 = (char *)param_4[uVar7 * 2];
            uVar6 = uVar7;
            uVar7 = (ulong)((int)uVar7 + 1);
          } while (pcVar5 != (char *)0x0);
        }
        uVar4 = 0;
LAB_00323a7c:
        *param_3 = *param_3 | uVar4;
        __s2 = pcVar3;
      } while (*pcVar3 != '\0');
    }
LAB_00323a94:
    if ((__s2 != (char *)0x0) && (*__s2 != '\0')) {
      pcVar3 = (char *)*param_4;
      if (pcVar3 != (char *)0x0) {
        uVar6 = 0;
        uVar7 = 1;
        do {
          iVar2 = strcasecmp(pcVar3,__s2);
          if (iVar2 == 0) {
            uVar4 = *(uint *)(param_4 + uVar6 * 2 + 1);
            goto LAB_00323af8;
          }
          pcVar3 = (char *)param_4[uVar7 * 2];
          uVar6 = uVar7;
          uVar7 = (ulong)((int)uVar7 + 1);
        } while (pcVar3 != (char *)0x0);
      }
      uVar4 = 0;
LAB_00323af8:
      *param_3 = *param_3 | uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00323b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,__dest);
  return;
}


