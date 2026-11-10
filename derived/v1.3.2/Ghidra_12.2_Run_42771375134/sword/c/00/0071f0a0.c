/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071f0a0; name: FUN_0071f0a0
 */


int FUN_0071f0a0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  iVar3 = FUN_0071ec50();
  piVar5 = *(int **)(param_4[2] + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar5 + uVar7);
  }
  lVar8 = param_3[2];
  piVar5 = *(int **)(lVar8 + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    if (-1 < iVar4) {
      return iVar3;
    }
  }
  else if (*(int *)((long)piVar5 + uVar7) <= iVar4) {
    return iVar3;
  }
  lVar1 = *param_3;
  lVar2 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  lVar6 = *param_4;
  *param_4 = 0;
  *param_3 = lVar6;
  if (param_3[1] != 0) {
    (**(code **)(*(long *)(param_3[1] + 0x48) + 0x18))();
    param_3[1] = 0;
  }
  lVar6 = param_4[1];
  param_4[1] = 0;
  param_3[1] = lVar6;
  param_3[2] = param_4[2];
  if (*param_4 != 0) {
    (**(code **)(*(long *)(*param_4 + 0x48) + 0x18))();
    *param_4 = 0;
  }
  *param_4 = lVar1;
  if (param_4[1] != 0) {
    (**(code **)(*(long *)(param_4[1] + 0x48) + 0x18))();
    param_4[1] = 0;
  }
  param_4[1] = lVar2;
  param_4[2] = lVar8;
  piVar5 = *(int **)(param_3[2] + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar5 + uVar7);
  }
  lVar8 = param_2[2];
  piVar5 = *(int **)(lVar8 + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    if (-1 < iVar4) {
      return iVar3 + 1;
    }
  }
  else if (*(int *)((long)piVar5 + uVar7) <= iVar4) {
    return iVar3 + 1;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar6 = *param_3;
  *param_3 = 0;
  *param_2 = lVar6;
  if (param_2[1] != 0) {
    (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
    param_2[1] = 0;
  }
  lVar6 = param_3[1];
  param_3[1] = 0;
  param_2[1] = lVar6;
  param_2[2] = param_3[2];
  if (*param_3 != 0) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
    *param_3 = 0;
  }
  *param_3 = lVar1;
  if (param_3[1] != 0) {
    (**(code **)(*(long *)(param_3[1] + 0x48) + 0x18))();
    param_3[1] = 0;
  }
  param_3[1] = lVar2;
  param_3[2] = lVar8;
  piVar5 = *(int **)(param_2[2] + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar5 + uVar7);
  }
  lVar8 = param_1[2];
  piVar5 = *(int **)(lVar8 + 0x40);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar7 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar7 == 0)) {
    if (-1 < iVar4) {
      return iVar3 + 2;
    }
  }
  else if (*(int *)((long)piVar5 + uVar7) <= iVar4) {
    return iVar3 + 2;
  }
  lVar1 = *param_1;
  lVar2 = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = *param_2;
  *param_2 = 0;
  *param_1 = lVar6;
  if (param_1[1] != 0) {
    (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
    param_1[1] = 0;
  }
  lVar6 = param_2[1];
  param_2[1] = 0;
  param_1[1] = lVar6;
  param_1[2] = param_2[2];
  if (*param_2 != 0) {
    (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
    *param_2 = 0;
  }
  *param_2 = lVar1;
  if (param_2[1] != 0) {
    (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
    param_2[1] = 0;
  }
  param_2[1] = lVar2;
  param_2[2] = lVar8;
  return iVar3 + 3;
}


