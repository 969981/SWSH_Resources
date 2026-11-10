/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00648b20; name: FUN_00648b20
 */


undefined8 FUN_00648b20(long param_1,long *param_2,long param_3,undefined4 *param_4,float *param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float local_38;
  float fStack_34;
  
  uVar8 = 0;
  if (param_2 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x490) + 0x2a8))();
    *puVar4 = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x70);
    puVar4[1] = *(undefined8 *)(param_1 + 0x820 + (ulong)*(uint *)(param_3 + 0x80) * 8 + 0x1c0);
    *(uint *)(puVar4 + 0x31) = *(uint *)(puVar4 + 0x31) | 0xffff;
    FUN_005ed7d0(&local_38,param_2);
    if (param_5 == (float *)0x0) {
      fVar11 = 0.0;
      fVar13 = 1.0;
      fVar12 = 1.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = *param_5;
      if ((param_5[1] - fVar10 <= 0.0) || (param_5[3] - param_5[2] <= 0.0)) {
        return 0;
      }
      lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar10 = fVar10 / (float)*(int *)(lVar5 + 0x14);
      fVar11 = param_5[2];
      lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar11 = fVar11 / (float)*(int *)(lVar5 + 0x18);
      fVar12 = param_5[1];
      lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar13 = param_5[3];
      fVar12 = fVar12 / (float)*(int *)(lVar5 + 0x14);
      lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
      fVar13 = fVar13 / (float)*(int *)(lVar5 + 0x18);
    }
    uVar15 = *param_4;
    uVar9 = param_4[1];
    uVar16 = param_4[2];
    uVar14 = param_4[3];
    lVar5 = (**(code **)(*param_2 + 0x98))(param_2);
    fVar2 = fVar13 + fStack_34;
    fVar3 = fVar11 + fStack_34;
    if (*(char *)(lVar5 + 0x38) != '\0') {
      fVar2 = fVar11 + fStack_34;
      fVar3 = fVar13 + fStack_34;
    }
    if (*(char *)(param_1 + 0x184) == '\0') {
      FUN_00647410(param_1);
      iVar1 = *(int *)(param_1 + 0x174);
      if (iVar1 < 1) {
        iVar7 = 0;
      }
      else {
        iVar7 = 0;
        if (iVar1 != 0) {
          iVar7 = *(int *)(param_1 + 0x170) / iVar1;
        }
      }
      *(int *)(param_1 + 0x17c) = iVar7;
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
    FUN_006479e0(uVar15,uVar16,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar10 + local_38,fVar2,0,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
       (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar1 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar1;
      if (*(int *)(param_1 + 0x17c) <= iVar1) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar9,uVar16,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar12 + local_38,fVar2,0,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
       (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar1 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar1;
      if (*(int *)(param_1 + 0x17c) <= iVar1) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar15,uVar14,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar10 + local_38,fVar3,0,0x3f800000,param_1,5,0);
    if (((*(char *)(param_1 + 0x184) != '\0') &&
        (pvVar6 = *(void **)(param_1 + 0x168), pvVar6 != (void *)0x0)) &&
       (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar1 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar1;
      if (*(int *)(param_1 + 0x17c) <= iVar1) {
        FUN_006475b0(param_1,0,0);
      }
    }
    FUN_006479e0(uVar9,uVar14,0,0x3f800000,param_1,0,0);
    FUN_006479e0(fVar12 + local_38,fVar3,0,0x3f800000,param_1,5,0);
    if (*(char *)(param_1 + 0x184) != '\0') {
      pvVar6 = *(void **)(param_1 + 0x168);
      if ((pvVar6 != (void *)0x0) &&
         (pvVar6 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
        memcpy(pvVar6,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
        *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
        iVar1 = *(int *)(param_1 + 0x178) + 1;
        *(int *)(param_1 + 0x178) = iVar1;
        if (*(int *)(param_1 + 0x17c) <= iVar1) {
          FUN_006475b0(param_1,0,0);
        }
      }
      if (*(char *)(param_1 + 0x184) != '\0') {
        FUN_006475b0(param_1,1,0);
        *(undefined1 *)(param_1 + 0x184) = 0;
        return 1;
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}


