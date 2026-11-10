/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024fdc0; name: FUN_0024fdc0
 */


ulong FUN_0024fdc0(long param_1,uint param_2,uint param_3,uint param_4,int *param_5)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  bVar2 = param_3 != 0;
  if (bVar2) {
    param_5[2] = param_3 - 1;
    param_5[3] = param_4;
    *param_5 = (param_2 - iVar4) * 3 + 2;
    param_5[1] = param_2 - iVar4;
  }
  uVar7 = (ulong)bVar2;
  if (param_4 < iVar4 - 1U) {
    if ((param_3 != 0) &&
       (uVar6 = param_2 - iVar4, -1 < *(char *)(*(long *)(param_1 + 0x50) + (ulong)uVar6 * 4 + 2)))
    {
      piVar1 = param_5 + uVar7 * 4;
      uVar7 = (ulong)(bVar2 + 1);
      piVar1[2] = param_3 - 1;
      piVar1[3] = param_4;
      *piVar1 = uVar6 * 3 + 1;
      piVar1[1] = uVar6;
    }
    piVar1 = param_5 + uVar7 * 4;
    uVar6 = (int)uVar7 + 1;
    *piVar1 = param_2 * 3;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = param_4;
    if ((param_3 < iVar3 - 1U) &&
       (*(char *)(*(long *)(param_1 + 0x50) + (ulong)param_2 * 4 + 2) < '\0')) {
      piVar1 = param_5 + (ulong)uVar6 * 4;
      uVar6 = (int)uVar7 + 2;
      *piVar1 = param_2 * 3 + 1;
      piVar1[1] = param_2;
      piVar1[2] = param_3;
      piVar1[3] = param_4;
    }
    uVar7 = (ulong)uVar6;
  }
  if (param_3 < iVar3 - 1U) {
    piVar1 = param_5 + uVar7 * 4;
    uVar7 = (ulong)((int)uVar7 + 1);
    *piVar1 = param_2 * 3 + 2;
    piVar1[1] = param_2;
    piVar1[2] = param_3;
    piVar1[3] = param_4;
  }
  if (param_4 == 0) {
    return uVar7;
  }
  uVar6 = param_2 - 1;
  if ((param_3 < iVar3 - 1U) && (-1 < *(char *)(*(long *)(param_1 + 0x50) + (ulong)uVar6 * 4 + 2)))
  {
    piVar1 = param_5 + uVar7 * 4;
    uVar7 = (ulong)((int)uVar7 + 1);
    piVar1[2] = param_3;
    piVar1[3] = param_4 - 1;
    *piVar1 = uVar6 * 3 + 1;
    piVar1[1] = uVar6;
  }
  piVar1 = param_5 + uVar7 * 4;
  *piVar1 = uVar6 * 3;
  piVar1[1] = uVar6;
  uVar6 = (int)uVar7 + 1;
  piVar1[2] = param_3;
  piVar1[3] = param_4 - 1;
  if ((param_3 == 0) ||
     (uVar5 = (param_2 - iVar4) - 1,
     -1 < *(char *)(*(long *)(param_1 + 0x50) + (ulong)uVar5 * 4 + 2))) {
    return (ulong)uVar6;
  }
  param_5 = param_5 + (ulong)uVar6 * 4;
  *param_5 = uVar5 * 3 + 1;
  param_5[1] = uVar5;
  param_5[2] = param_3 - 1;
  param_5[3] = param_4 - 1;
  return (ulong)((int)uVar7 + 2);
}


