/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024ff60; name: FUN_0024ff60
 */


int FUN_0024ff60(long param_1,int *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  uVar3 = param_2[1];
  iVar2 = *(int *)(param_1 + 0x38);
  iVar4 = *(int *)(param_1 + 0x3c);
  uVar7 = param_2[2];
  uVar5 = param_2[3];
  iVar1 = uVar3 * -3 + *param_2;
  if (iVar1 == 2) {
    if (iVar2 - 1U <= uVar7) {
      return 0;
    }
    if (uVar5 == 0) {
      lVar6 = 0;
      if (iVar4 == 1) {
        return 0;
      }
    }
    else {
      lVar6 = 1;
      *param_3 = uVar3 * 2 - 1;
      if (iVar4 - 1U <= uVar5) {
        return 1;
      }
    }
    uVar7 = uVar3 << 1;
  }
  else {
    if (iVar1 == 1) {
      if (iVar2 - 1U <= uVar7) {
        return 0;
      }
      if (uVar5 < iVar4 - 1U) {
        *param_3 = uVar3 << 1;
        param_3[1] = uVar3 << 1 | 1;
        return 2;
      }
      return 0;
    }
    if (iVar1 != 0) {
      return 0;
    }
    if (iVar4 - 1U <= uVar5) {
      return 0;
    }
    if (uVar7 == 0) {
      lVar6 = 0;
      if (iVar2 == 1) {
        return 0;
      }
    }
    else {
      lVar6 = 1;
      *param_3 = ((uint)(*(byte *)(*(long *)(param_1 + 0x50) + (ulong)(uVar3 - iVar4) * 4 + 2) >> 7)
                 | (uVar3 - iVar4) * 2) ^ 1;
      if (iVar2 - 1U <= uVar7) {
        return 1;
      }
    }
    uVar7 = uVar3 << 1;
    if (*(char *)(*(long *)(param_1 + 0x50) + (ulong)uVar3 * 4 + 2) < '\0') {
      uVar7 = uVar7 | 1;
    }
  }
  param_3[lVar6] = uVar7;
  return (int)lVar6 + 1;
}


