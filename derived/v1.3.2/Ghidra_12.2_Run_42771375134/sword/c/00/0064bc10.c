/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064bc10; name: FUN_0064bc10
 */


undefined8 FUN_0064bc10(long param_1,long *param_2,long param_3,undefined4 *param_4,float *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_94;
  float local_38;
  float local_34;
  
  if (param_2 == (long *)0x0) {
LAB_0064bd5c:
    uVar5 = 0;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
    *puVar1 = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0xa8);
    puVar1[1] = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x1f8);
    *(uint *)(puVar1 + 0x31) = *(uint *)(puVar1 + 0x31) | 0xffff;
    FUN_005ed7d0(&local_38,param_2);
    fVar9 = *(float *)(param_3 + 0x5c);
    lVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    iVar10 = *(int *)(lVar2 + 0x1c);
    if (param_5 == (float *)0x0) {
      fVar13 = 0.0;
      fVar14 = 1.0;
      local_94 = 1.0;
      fVar12 = 0.0;
    }
    else {
      fVar12 = *param_5;
      if ((param_5[1] - fVar12 <= 0.0) || (param_5[3] - param_5[2] <= 0.0)) goto LAB_0064bd5c;
      lVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar12 = fVar12 / (float)*(int *)(lVar2 + 0x14);
      fVar13 = param_5[2];
      lVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar13 = fVar13 / (float)*(int *)(lVar2 + 0x18);
      fVar14 = param_5[1];
      lVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar14 = fVar14 / (float)*(int *)(lVar2 + 0x14);
      local_94 = param_5[3];
      lVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      local_94 = local_94 / (float)*(int *)(lVar2 + 0x18);
    }
    fVar9 = fVar9 / (float)iVar10;
    uVar6 = *param_4;
    uVar7 = param_4[1];
    uVar11 = param_4[2];
    uVar8 = param_4[3];
    if (*(char *)(param_1 + 0x184) == '\0') {
      FUN_00647410(param_1);
      iVar10 = *(int *)(param_1 + 0x174);
      if (iVar10 < 1) {
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        if (iVar10 != 0) {
          iVar4 = *(int *)(param_1 + 0x170) / iVar10;
        }
      }
      *(int *)(param_1 + 0x17c) = iVar4;
      *(undefined4 *)(param_1 + 0x180) = 5;
      *(undefined1 *)(param_1 + 0x184) = 1;
      if (*(long *)(param_1 + 0x160) == 0) {
        *(undefined1 *)(param_1 + 0x184) = 0;
      }
      else {
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x160);
        *(undefined4 *)(param_1 + 0x178) = 0;
      }
    }
    FUN_006479e0(uVar6,uVar11,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar12 + local_38,fVar13 + local_34,fVar9,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar3 = *(void **)(param_1 + 0x168), pvVar3 != (void *)0x0)) &&
       (pvVar3 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar3,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar10 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar10;
      if (*(int *)(param_1 + 0x17c) <= iVar10) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar7,uVar11,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar14 + local_38,fVar13 + local_34,fVar9,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar3 = *(void **)(param_1 + 0x168), pvVar3 != (void *)0x0)) &&
       (pvVar3 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar3,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar10 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar10;
      if (*(int *)(param_1 + 0x17c) <= iVar10) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar6,uVar8,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar12 + local_38,local_94 + local_34,fVar9,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar3 = *(void **)(param_1 + 0x168), pvVar3 != (void *)0x0)) &&
       (pvVar3 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar3,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar10 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar10;
      if (*(int *)(param_1 + 0x17c) <= iVar10) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar7,uVar8,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar14 + local_38,local_94 + local_34,fVar9,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar3 = *(void **)(param_1 + 0x168);
      if ((pvVar3 != (void *)0x0) &&
         (pvVar3 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar3,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar10 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar10;
        if (*(int *)(param_1 + 0x17c) <= iVar10) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
        return 1;
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}


