/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0070aeb0; name: FUN_0070aeb0
 */


int FUN_0070aeb0(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_0070ada0();
  bVar4 = *(ulong *)(*param_4 + 0xa0) <= *(ulong *)(*param_5 + 0xa0);
  if (*(ulong *)(*param_5 + 0xa0) == *(ulong *)(*param_4 + 0xa0)) {
    bVar4 = (ulong)param_4[1] <= (ulong)param_5[1];
  }
  iVar6 = iVar5;
  if (!bVar4) {
    lVar1 = *param_4;
    lVar2 = param_4[1];
    lVar3 = param_5[1];
    *param_4 = *param_5;
    param_4[1] = lVar3;
    *param_5 = lVar1;
    param_5[1] = lVar2;
    iVar6 = iVar5 + 1;
    bVar4 = *(ulong *)(*param_3 + 0xa0) <= *(ulong *)(*param_4 + 0xa0);
    if (*(ulong *)(*param_4 + 0xa0) == *(ulong *)(*param_3 + 0xa0)) {
      bVar4 = (ulong)param_3[1] <= (ulong)param_4[1];
    }
    if (!bVar4) {
      lVar1 = *param_3;
      lVar2 = param_3[1];
      lVar3 = param_4[1];
      *param_3 = *param_4;
      param_3[1] = lVar3;
      *param_4 = lVar1;
      param_4[1] = lVar2;
      iVar6 = iVar5 + 2;
      bVar4 = *(ulong *)(*param_2 + 0xa0) <= *(ulong *)(*param_3 + 0xa0);
      if (*(ulong *)(*param_3 + 0xa0) == *(ulong *)(*param_2 + 0xa0)) {
        bVar4 = (ulong)param_2[1] <= (ulong)param_3[1];
      }
      if (!bVar4) {
        lVar1 = *param_2;
        lVar2 = param_2[1];
        lVar3 = param_3[1];
        *param_2 = *param_3;
        param_2[1] = lVar3;
        *param_3 = lVar1;
        param_3[1] = lVar2;
        iVar6 = iVar5 + 3;
        bVar4 = *(ulong *)(*param_1 + 0xa0) <= *(ulong *)(*param_2 + 0xa0);
        if (*(ulong *)(*param_2 + 0xa0) == *(ulong *)(*param_1 + 0xa0)) {
          bVar4 = (ulong)param_1[1] <= (ulong)param_2[1];
        }
        if (!bVar4) {
          lVar1 = *param_1;
          lVar2 = param_1[1];
          lVar3 = param_2[1];
          *param_1 = *param_2;
          param_1[1] = lVar3;
          *param_2 = lVar1;
          param_2[1] = lVar2;
          iVar6 = iVar5 + 4;
        }
      }
    }
  }
  return iVar6;
}


