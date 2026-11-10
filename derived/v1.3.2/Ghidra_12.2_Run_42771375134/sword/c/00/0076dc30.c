/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0076dc30; name: FUN_0076dc30
 */


undefined8
FUN_0076dc30(long *param_1,long *param_2,long *param_3,wchar_t *param_4,int param_5,int param_6)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_6 == 0) {
    sVar2 = strlen((char *)param_4);
    iVar1 = (int)sVar2;
  }
  else {
    sVar2 = wcslen(param_4);
    iVar1 = (int)sVar2;
  }
  uVar5 = (ulong)(iVar1 + 1U);
  if (param_5 != 0) {
    uVar5 = (long)(int)(iVar1 + 1U) + 7U >> 3;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    lVar6 = *param_1 + (long)*(int *)(*param_1 + 0x10);
  }
  lVar4 = param_1[10];
  lVar7 = param_1[8];
  uVar5 = -(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3;
  if ((lVar4 - uVar5) - lVar7 < 0x80) {
    uVar3 = 0x10;
    lVar6 = lVar7;
  }
  else {
    lVar6 = lVar6 + (int)lVar7;
    param_1[8] = lVar7 + uVar5;
    if (param_2 != (long *)0x0) {
      *param_2 = lVar7;
    }
    if (param_3 != (long *)0x0) {
      *param_3 = lVar6;
    }
    FUN_0076ddd0(lVar6,param_4,param_5,param_6,0x7fffffff);
    lVar6 = param_1[8];
    lVar4 = param_1[10];
    if (lVar4 < lVar6 + 0x80) {
      uVar3 = 3;
    }
    else {
      lVar6 = param_1[2];
      if (lVar6 == 0) {
        lVar6 = *param_1 + (long)*(int *)(*param_1 + 0x10);
      }
      param_1[10] = lVar4 + -8;
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + 1;
      *(long *)(lVar6 + (int)(lVar4 + -8)) = lVar7;
      lVar4 = param_1[10];
      lVar6 = param_1[8];
      if (*(ulong *)((long)param_1 + 0x8c) < (ulong)(param_1[0xb] - lVar4)) {
        *(long *)((long)param_1 + 0x8c) = param_1[0xb] - lVar4;
      }
      if (*(ulong *)((long)param_1 + 0x94) < (ulong)(lVar6 - param_1[9])) {
        uVar3 = 0;
        *(long *)((long)param_1 + 0x94) = lVar6 - param_1[9];
      }
      else {
        uVar3 = 0;
      }
    }
  }
  if (*(ulong *)((long)param_1 + 0x8c) < (ulong)(param_1[0xb] - lVar4)) {
    *(long *)((long)param_1 + 0x8c) = param_1[0xb] - lVar4;
  }
  if (*(ulong *)((long)param_1 + 0x94) < (ulong)(lVar6 - param_1[9])) {
    *(long *)((long)param_1 + 0x94) = lVar6 - param_1[9];
  }
  return uVar3;
}


