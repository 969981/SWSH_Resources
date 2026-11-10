/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007469d0; name: FUN_007469d0
 */


int FUN_007469d0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  
  lVar5 = *param_2;
  lVar4 = *param_1;
  uVar2 = *(ulong *)(lVar5 + 0xa0);
  lVar3 = *param_3;
  puVar6 = (ulong *)(lVar3 + 0xa0);
  if (uVar2 < *(ulong *)(lVar4 + 0xa0)) {
    if (*puVar6 < uVar2) {
      *param_1 = lVar3;
      iVar1 = 1;
    }
    else {
      *param_1 = lVar5;
      *param_2 = lVar4;
      lVar3 = *param_3;
      if (*(ulong *)(lVar4 + 0xa0) <= *(ulong *)(lVar3 + 0xa0)) {
        iVar1 = 1;
        puVar6 = (ulong *)(lVar3 + 0xa0);
        goto LAB_00746aa8;
      }
      iVar1 = 2;
      *param_2 = lVar3;
    }
    *param_3 = lVar4;
    lVar3 = lVar4;
    puVar6 = (ulong *)(lVar4 + 0xa0);
  }
  else if (*puVar6 < uVar2) {
    *param_2 = lVar3;
    *param_3 = lVar5;
    lVar3 = *param_1;
    if (*(ulong *)(*param_2 + 0xa0) < *(ulong *)(lVar3 + 0xa0)) {
      *param_1 = *param_2;
      *param_2 = lVar3;
      iVar1 = 2;
      lVar3 = *param_3;
      puVar6 = (ulong *)(*param_3 + 0xa0);
    }
    else {
      iVar1 = 1;
      lVar3 = lVar5;
      puVar6 = (ulong *)(lVar5 + 0xa0);
    }
  }
  else {
    iVar1 = 0;
  }
LAB_00746aa8:
  if (*(ulong *)(*param_4 + 0xa0) < *puVar6) {
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(ulong *)(*param_3 + 0xa0) < *(ulong *)(lVar3 + 0xa0)) {
      *param_2 = *param_3;
      *param_3 = lVar3;
      lVar3 = *param_1;
      if (*(ulong *)(*param_2 + 0xa0) < *(ulong *)(lVar3 + 0xa0)) {
        iVar1 = iVar1 + 3;
        *param_1 = *param_2;
        *param_2 = lVar3;
      }
      else {
        iVar1 = iVar1 + 2;
      }
    }
    else {
      iVar1 = iVar1 + 1;
    }
  }
  lVar3 = *param_4;
  if (*(ulong *)(*param_5 + 0xa0) < *(ulong *)(lVar3 + 0xa0)) {
    *param_4 = *param_5;
    *param_5 = lVar3;
    lVar3 = *param_3;
    if (*(ulong *)(lVar3 + 0xa0) <= *(ulong *)(*param_4 + 0xa0)) {
      return iVar1 + 1;
    }
    *param_3 = *param_4;
    *param_4 = lVar3;
    lVar3 = *param_2;
    if (*(ulong *)(lVar3 + 0xa0) <= *(ulong *)(*param_3 + 0xa0)) {
      return iVar1 + 2;
    }
    *param_2 = *param_3;
    *param_3 = lVar3;
    lVar3 = *param_1;
    if (*(ulong *)(lVar3 + 0xa0) <= *(ulong *)(*param_2 + 0xa0)) {
      return iVar1 + 3;
    }
    iVar1 = iVar1 + 4;
    *param_1 = *param_2;
    *param_2 = lVar3;
  }
  return iVar1;
}


