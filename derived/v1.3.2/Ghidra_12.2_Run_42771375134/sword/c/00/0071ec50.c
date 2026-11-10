/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071ec50; name: FUN_0071ec50
 */


undefined8 FUN_0071ec50(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  ushort *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  lVar14 = param_2[2];
  piVar6 = *(int **)(lVar14 + 0x40);
  puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
  uVar2 = *puVar8;
  if (uVar2 < 9) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    if ((ulong)puVar8[4] != 0) {
      iVar5 = *(int *)((long)piVar6 + (ulong)puVar8[4]);
    }
  }
  lVar13 = param_1[2];
  piVar10 = *(int **)(lVar13 + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar12 == 0)) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((long)piVar10 + uVar12);
  }
  piVar10 = *(int **)(param_3[2] + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar12 == 0)) {
    iVar11 = 0;
    if (8 < uVar2) goto LAB_0071ed00;
LAB_0071edcc:
    iVar4 = 0;
  }
  else {
    iVar11 = *(int *)((long)piVar10 + uVar12);
    if (uVar2 < 9) goto LAB_0071edcc;
LAB_0071ed00:
    if ((ulong)puVar8[4] == 0) goto LAB_0071edcc;
    iVar4 = *(int *)((long)piVar6 + (ulong)puVar8[4]);
  }
  if (iVar5 < iVar9) {
    lVar14 = *param_1;
    lVar1 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (iVar11 < iVar4) {
      lVar7 = *param_3;
      *param_3 = 0;
      *param_1 = lVar7;
      if (param_1[1] != 0) {
        (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
        param_1[1] = 0;
      }
      lVar7 = param_3[1];
      param_3[1] = 0;
      param_1[1] = lVar7;
      param_1[2] = param_3[2];
      if (*param_3 != 0) {
        (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar14;
      if (param_3[1] != 0) {
        (**(code **)(*(long *)(param_3[1] + 0x48) + 0x18))();
        param_3[1] = 0;
      }
      uVar3 = 1;
    }
    else {
      lVar7 = *param_2;
      *param_2 = 0;
      *param_1 = lVar7;
      if (param_1[1] != 0) {
        (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
        param_1[1] = 0;
      }
      lVar7 = param_2[1];
      param_2[1] = 0;
      param_1[1] = lVar7;
      param_1[2] = param_2[2];
      if (*param_2 != 0) {
        (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
        *param_2 = 0;
      }
      *param_2 = lVar14;
      if (param_2[1] != 0) {
        (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
        param_2[1] = 0;
      }
      param_2[1] = lVar1;
      param_2[2] = lVar13;
      piVar6 = *(int **)(param_3[2] + 0x40);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
         (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar12 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((long)piVar6 + uVar12);
      }
      piVar6 = *(int **)(lVar13 + 0x40);
      if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
         (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar12 == 0)) {
        if (-1 < iVar5) {
          return 1;
        }
      }
      else if (*(int *)((long)piVar6 + uVar12) <= iVar5) {
        return 1;
      }
      lVar7 = *param_2;
      *param_2 = 0;
      param_2[1] = 0;
      lVar14 = *param_3;
      *param_3 = 0;
      *param_2 = lVar14;
      if (param_2[1] != 0) {
        (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
        param_2[1] = 0;
      }
      lVar14 = param_3[1];
      param_3[1] = 0;
      param_2[1] = lVar14;
      param_2[2] = param_3[2];
      if (*param_3 != 0) {
        (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
        *param_3 = 0;
      }
      *param_3 = lVar7;
      if (param_3[1] != 0) {
        (**(code **)(*(long *)(param_3[1] + 0x48) + 0x18))();
        param_3[1] = 0;
      }
      uVar3 = 2;
    }
    param_3[1] = lVar1;
    param_3[2] = lVar13;
    return uVar3;
  }
  if (iVar4 <= iVar11) {
    return 0;
  }
  lVar13 = *param_2;
  lVar1 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = *param_3;
  *param_3 = 0;
  *param_2 = lVar7;
  if (param_2[1] != 0) {
    (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
    param_2[1] = 0;
  }
  lVar7 = param_3[1];
  param_3[1] = 0;
  param_2[1] = lVar7;
  param_2[2] = param_3[2];
  if (*param_3 != 0) {
    (**(code **)(*(long *)(*param_3 + 0x48) + 0x18))();
    *param_3 = 0;
  }
  *param_3 = lVar13;
  if (param_3[1] != 0) {
    (**(code **)(*(long *)(param_3[1] + 0x48) + 0x18))();
    param_3[1] = 0;
  }
  param_3[1] = lVar1;
  param_3[2] = lVar14;
  piVar6 = *(int **)(param_2[2] + 0x40);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar12 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)((long)piVar6 + uVar12);
  }
  lVar14 = param_1[2];
  piVar6 = *(int **)(lVar14 + 0x40);
  if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar12 == 0)) {
    if (iVar5 < 0) goto LAB_0071ef78;
  }
  else if (iVar5 < *(int *)((long)piVar6 + uVar12)) {
LAB_0071ef78:
    lVar13 = *param_1;
    lVar1 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    lVar7 = *param_2;
    *param_2 = 0;
    *param_1 = lVar7;
    if (param_1[1] != 0) {
      (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
      param_1[1] = 0;
    }
    lVar7 = param_2[1];
    param_2[1] = 0;
    param_1[1] = lVar7;
    param_1[2] = param_2[2];
    if (*param_2 != 0) {
      (**(code **)(*(long *)(*param_2 + 0x48) + 0x18))();
      *param_2 = 0;
    }
    *param_2 = lVar13;
    if (param_2[1] != 0) {
      (**(code **)(*(long *)(param_2[1] + 0x48) + 0x18))();
      param_2[1] = 0;
    }
    param_2[1] = lVar1;
    param_2[2] = lVar14;
    return 2;
  }
  return 1;
}


