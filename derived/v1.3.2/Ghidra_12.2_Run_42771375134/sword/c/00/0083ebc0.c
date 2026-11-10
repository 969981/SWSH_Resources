/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0083ebc0; name: FUN_0083ebc0
 */


int FUN_0083ebc0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  
  lVar4 = *param_2;
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar4 + 0x38);
  lVar2 = *param_3;
  piVar5 = (int *)(lVar2 + 0x38);
  if (iVar1 < *(int *)(lVar3 + 0x38)) {
    if (*piVar5 < iVar1) {
      *param_1 = lVar2;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar4;
      *param_2 = lVar3;
      lVar2 = *param_3;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        iVar1 = 1;
        piVar5 = (int *)(lVar2 + 0x38);
        goto LAB_0083ec98;
      }
      iVar1 = 2;
      *param_2 = lVar2;
    }
    *param_3 = lVar3;
    lVar2 = lVar3;
    piVar5 = (int *)(lVar3 + 0x38);
  }
  else if (*piVar5 < iVar1) {
    *param_2 = lVar2;
    *param_3 = lVar4;
    lVar2 = *param_1;
    if (*(int *)(*param_2 + 0x38) < *(int *)(lVar2 + 0x38)) {
      *param_1 = *param_2;
      *param_2 = lVar2;
      iVar1 = 2;
      lVar2 = *param_3;
      piVar5 = (int *)(*param_3 + 0x38);
    }
    else {
      iVar1 = 1;
      lVar2 = lVar4;
      piVar5 = (int *)(lVar4 + 0x38);
    }
  }
  else {
    iVar1 = 0;
  }
LAB_0083ec98:
  if (*(int *)(*param_4 + 0x38) < *piVar5) {
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(int *)(*param_3 + 0x38) < *(int *)(lVar2 + 0x38)) {
      *param_2 = *param_3;
      *param_3 = lVar2;
      lVar2 = *param_1;
      if (*(int *)(*param_2 + 0x38) < *(int *)(lVar2 + 0x38)) {
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar2;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  lVar2 = *param_4;
  if (*(int *)(*param_5 + 0x38) < *(int *)(lVar2 + 0x38)) {
    *param_4 = *param_5;
    *param_5 = lVar2;
    lVar2 = *param_3;
    if (*(int *)(lVar2 + 0x38) <= *(int *)(*param_4 + 0x38)) {
      return iVar1 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar2;
    lVar2 = *param_2;
    if (*(int *)(lVar2 + 0x38) <= *(int *)(*param_3 + 0x38)) {
      return iVar1 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar2;
    lVar2 = *param_1;
    if (*(int *)(lVar2 + 0x38) <= *(int *)(*param_2 + 0x38)) {
      return iVar1 + 3;
    }
    iVar1 = iVar1 + 4;
    *param_1 = *param_2;
    *param_2 = lVar2;
  }
  return iVar1;
}


