/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00862150; name: FUN_00862150
 */


bool FUN_00862150(undefined8 param_1,byte *param_2,byte *param_3)

{
  char *__n;
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  byte *__s2;
  
  bVar3 = *param_2;
  __n = (char *)(ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(char **)(param_2 + 8);
  }
  bVar4 = *param_3;
  pcVar1 = (char *)(ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    pcVar1 = *(char **)(param_3 + 8);
  }
  if (__n == pcVar1) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    __s2 = *(byte **)(param_3 + 0x10);
    if ((bVar4 & 1) == 0) {
      __s2 = param_3 + 1;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != (char *)0x0) {
        lVar7 = -(long)(ulong)(bVar3 >> 1);
        pbVar8 = param_2;
        do {
          pbVar8 = pbVar8 + 1;
          if (*pbVar8 != *__s2) goto LAB_008621f8;
          __s2 = __s2 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
    }
    else if ((__n != (char *)0x0) && (iVar6 = memcmp(pbVar8,__s2,(size_t)__n), iVar6 != 0))
    goto LAB_008621f8;
    bVar5 = true;
  }
  else {
LAB_008621f8:
    if (__n <= pcVar1) {
      pbVar8 = *(byte **)(param_2 + 0x10);
      if ((bVar3 & 1) == 0) {
        pbVar8 = param_2 + 1;
      }
      iVar6 = std::string::compare((ulong)param_3,0,__n,(ulong)pbVar8);
      if (iVar6 == 0) {
        uVar2 = (ulong)(*param_2 >> 1);
        if ((*param_2 & 1) != 0) {
          uVar2 = *(ulong *)(param_2 + 8);
        }
        pbVar8 = *(byte **)(param_3 + 0x10);
        if ((*param_3 & 1) == 0) {
          pbVar8 = param_3 + 1;
        }
        return pbVar8[uVar2] == 0x2e;
      }
    }
    bVar5 = false;
  }
  return bVar5;
}


