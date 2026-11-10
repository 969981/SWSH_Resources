/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070ac10; name: FUN_0070ac10
 */


undefined8 FUN_0070ac10(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(*param_2 + 0xa0);
  bVar4 = *(ulong *)(*param_1 + 0xa0) <= uVar6;
  if (uVar6 == *(ulong *)(*param_1 + 0xa0)) {
    bVar4 = (ulong)param_1[1] <= (ulong)param_2[1];
  }
  bVar5 = uVar6 <= *(ulong *)(*param_3 + 0xa0);
  if (*(ulong *)(*param_3 + 0xa0) == uVar6) {
    bVar5 = (ulong)param_2[1] <= (ulong)param_3[1];
  }
  if (bVar4) {
    if (bVar5) {
      return 0;
    }
    lVar1 = *param_2;
    lVar2 = param_2[1];
    lVar3 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = lVar3;
    *param_3 = lVar1;
    param_3[1] = lVar2;
    if (*(ulong *)(*param_2 + 0xa0) == *(ulong *)(*param_1 + 0xa0)) {
      if ((ulong)param_1[1] <= (ulong)param_2[1]) {
        return 1;
      }
    }
    else if (*(ulong *)(*param_1 + 0xa0) <= *(ulong *)(*param_2 + 0xa0)) {
      return 1;
    }
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar3;
    *param_2 = lVar1;
    param_2[1] = lVar2;
    return 2;
  }
  if (!bVar5) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lVar3 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = lVar3;
    *param_3 = lVar1;
    param_3[1] = lVar2;
    return 1;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar3;
  *param_2 = lVar1;
  param_2[1] = lVar2;
  if (*(ulong *)(*param_3 + 0xa0) == *(ulong *)(*param_2 + 0xa0)) {
    if ((ulong)param_2[1] <= (ulong)param_3[1]) {
      return 1;
    }
  }
  else if (*(ulong *)(*param_2 + 0xa0) <= *(ulong *)(*param_3 + 0xa0)) {
    return 1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  lVar3 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar3;
  *param_3 = lVar1;
  param_3[1] = lVar2;
  return 2;
}


