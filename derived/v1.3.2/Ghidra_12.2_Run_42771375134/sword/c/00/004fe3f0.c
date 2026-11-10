/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fe3f0; name: FUN_004fe3f0
 */


undefined8
FUN_004fe3f0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,undefined8 param_6)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((((param_3 == 0) || (param_4 == 0)) || (uVar2 = param_3 - 1, (uVar2 & param_3) != 0)) ||
     (uVar3 = param_4 - 1, (uVar3 & param_4) != 0)) {
    return 2;
  }
  iVar6 = 0;
  *(uint *)(param_1 + 0x310) = param_3;
  *(uint *)(param_1 + 0x314) = param_4;
  for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
    iVar6 = iVar6 + 1;
  }
  iVar7 = 0;
  *(int *)(param_1 + 0x318) = iVar6;
  for (; uVar2 != 0; uVar2 = uVar2 >> 1) {
    iVar7 = iVar7 + 1;
  }
  uVar2 = (iVar7 - iVar6) + 1;
  *(uint *)(param_1 + 0x31c) = uVar2;
  if (0x20 < uVar2) {
    return 2;
  }
  uVar4 = FUN_00405500(param_6,param_2,param_2,param_5 | 8,param_4);
  *(int *)(param_1 + 0x30c) = (int)uVar4;
  if ((int)uVar4 == -1) {
    return 2;
  }
  FUN_00404680(uVar4,0);
  lVar5 = FUN_004048f0(*(undefined4 *)(param_1 + 0x30c));
  uVar2 = *(uint *)(param_1 + 0x310);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = param_2 / uVar2;
  }
  *(long *)(param_1 + 0x300) = lVar5;
  iVar6 = uVar3 * uVar2;
  *(int *)(param_1 + 0x308) = iVar6;
  if (iVar6 == 0) {
    return 2;
  }
  uVar2 = iVar6 - uVar2;
  plVar1 = (long *)(lVar5 + (ulong)uVar2);
  while( true ) {
    if (plVar1 != (long *)0x0) {
      *plVar1 = 0;
    }
    uVar8 = (ulong)(*(int *)(param_1 + 0x31c) - 1);
    plVar9 = (long *)(param_1 + uVar8 * 0x18 + 0x10);
    if (*plVar9 == 0) {
      *plVar9 = (long)plVar1;
      *(long **)(param_1 + uVar8 * 0x18 + 8) = plVar1;
      *plVar1 = 0;
    }
    else {
      *plVar1 = *plVar9;
      *plVar9 = (long)plVar1;
    }
    *(int *)(param_1 + uVar8 * 0x18) = *(int *)(param_1 + uVar8 * 0x18) + 1;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - *(int *)(param_1 + 0x310);
    plVar1 = (long *)(*(long *)(param_1 + 0x300) + (ulong)uVar2);
  }
  return 1;
}


