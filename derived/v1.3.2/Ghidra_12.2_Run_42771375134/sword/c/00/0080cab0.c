/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080cab0; name: FUN_0080cab0
 */


void FUN_0080cab0(ulong *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 < (byte *)param_1[1]) {
    uVar7 = (ulong)*pbVar4;
    if (-1 < (char)*pbVar4) {
      *param_1 = (ulong)(pbVar4 + 1);
      goto LAB_0080cafc;
    }
  }
  else {
    uVar7 = 0;
  }
  uVar7 = FUN_0080d5d0(param_1,uVar7);
  if ((long)uVar7 < 0) {
    uVar7 = 0;
  }
LAB_0080cafc:
  iVar5 = (int)param_1[3];
  uVar2 = param_1[1] + (long)*(int *)((long)param_1 + 0x2c);
  iVar1 = (iVar5 - *(int *)((long)param_1 + 0x2c)) + ((int)*param_1 - (int)param_1[1]);
  iVar6 = (int)uVar7;
  iVar3 = 0x7fffffff;
  if (iVar6 <= 0x7fffffff - iVar1 && -1 < iVar6) {
    iVar3 = iVar1 + iVar6;
  }
  iVar1 = (int)param_1[5];
  if (iVar3 <= (int)param_1[5]) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 5) = iVar1;
  iVar3 = (int)param_1[6];
  if (iVar1 <= (int)param_1[6]) {
    iVar3 = iVar1;
  }
  iVar1 = iVar5 - iVar3;
  param_1[1] = uVar2;
  if (iVar1 == 0 || iVar5 < iVar3) {
    *(undefined4 *)((long)param_1 + 0x2c) = 0;
    return;
  }
  *(int *)((long)param_1 + 0x2c) = iVar1;
  param_1[1] = uVar2 - (long)iVar1;
  return;
}


