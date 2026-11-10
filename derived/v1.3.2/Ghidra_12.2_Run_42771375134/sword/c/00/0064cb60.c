/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064cb60; name: FUN_0064cb60
 */


undefined8
FUN_0064cb60(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5,
            undefined8 *param_6,float *param_7,float *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  void *pvVar11;
  int iVar12;
  long *plVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined1 *local_b4;
  undefined4 local_ac;
  
  if ((*(char *)((long)param_6 + 0x85) != '\0') &&
     (((((float)*(int *)((long)param_6 + 0x8c) < *param_7 ||
        (param_7[1] < (float)*(int *)(param_6 + 0x11))) ||
       ((float)*(int *)((long)param_6 + 0x94) < param_7[2])) ||
      (param_7[3] < (float)*(int *)(param_6 + 0x12))))) {
    return 1;
  }
  plVar13 = *(long **)(param_1 + 0x490);
  (**(code **)(*plVar13 + 0x298))(plVar13,1);
  puVar7 = (undefined8 *)(**(code **)(*plVar13 + 0x2a8))(plVar13);
  *(undefined4 *)(puVar7 + 2) = 1;
  uVar4 = *(undefined1 *)((long)param_6 + 0x85);
  *(undefined2 *)((long)puVar7 + 0x34) = 0;
  *(undefined4 *)((long)puVar7 + 0x16c) = 5;
  *(undefined1 *)((long)puVar7 + 0x2d) = uVar4;
  *(undefined1 *)(puVar7 + 0xc) = *(undefined1 *)((long)param_6 + 0x84);
  *(undefined8 *)((long)puVar7 + 0x6c) = 0x500000001;
  *(undefined8 *)((long)puVar7 + 100) = 0x600000005;
  *(undefined8 *)((long)puVar7 + 0x74) = 0x100000006;
  if (*(char *)((long)param_6 + 0x85) != '\0') {
    local_110 = *(float *)(param_6 + 0x11);
    fStack_10c = *(float *)((long)param_6 + 0x8c);
    local_108 = *(undefined4 *)(param_6 + 0x12);
    local_104 = *(undefined4 *)((long)param_6 + 0x94);
    (**(code **)(*plVar13 + 0x78))(plVar13,1,&local_110);
  }
  local_b4 = &DAT_10000003f;
  local_c8 = 0x300000001;
  local_c0 = 3;
  if (param_5 != 0) {
    local_c0 = 4;
  }
  local_bc = 2;
  local_ac = 2;
  (**(code **)(*plVar13 + 0x90))(plVar13,1,&local_c8);
  (**(code **)(*plVar13 + 0x2e0))(plVar13,1,2,0,param_2);
  (**(code **)(*plVar13 + 0x2e0))(plVar13,1,2,1,param_3);
  (**(code **)(*plVar13 + 0x2e0))(plVar13,1,2,2,param_4);
  if (param_5 != 0) {
    (**(code **)(*plVar13 + 0x2e0))(plVar13,1,2,3,param_4);
  }
  (**(code **)(*plVar13 + 0x2f0))(plVar13,1,2,0,*(undefined8 *)(param_1 + 0xae0));
  puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0x240))(plVar13,1,3,0,0xc0);
  lVar9 = (**(code **)(*plVar13 + 0x108))(plVar13);
  piVar10 = (int *)(**(code **)(**(long **)(lVar9 + 0x20) + 0x88))();
  iVar14 = *piVar10;
  lVar9 = (**(code **)(*plVar13 + 0x108))(plVar13);
  lVar9 = (**(code **)(**(long **)(lVar9 + 0x20) + 0x88))();
  fVar20 = 1.0;
  FUN_005ee0d0(&local_110,(float)iVar14,(float)*(int *)(lVar9 + 4),0x3f800000,0x40000000);
  fVar18 = 0.0;
  puVar8[2] = local_100;
  puVar8[3] = uStack_f8;
  *puVar8 = CONCAT44(fStack_10c,local_110);
  puVar8[1] = CONCAT44(local_104,local_108);
  puVar8[6] = local_e0;
  puVar8[7] = uStack_d8;
  puVar8[4] = local_f0;
  puVar8[5] = uStack_e8;
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = param_6[3];
  puVar8[10] = param_6[2];
  puVar8[0xb] = uVar3;
  puVar8[8] = uVar1;
  puVar8[9] = uVar2;
  uVar1 = param_6[4];
  uVar2 = param_6[5];
  uVar3 = param_6[7];
  puVar8[0xe] = param_6[6];
  puVar8[0xf] = uVar3;
  puVar8[0xc] = uVar1;
  puVar8[0xd] = uVar2;
  *(undefined4 *)(puVar8 + 0x10) = *(undefined4 *)((long)param_6 + 0x44);
  *(undefined4 *)((long)puVar8 + 0x84) = *(undefined4 *)(param_6 + 9);
  *(undefined4 *)(puVar8 + 0x11) = *(undefined4 *)((long)param_6 + 0x4c);
  *(undefined4 *)((long)puVar8 + 0x8c) = *(undefined4 *)(param_6 + 10);
  *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(param_6 + 8);
  *(undefined8 *)((long)puVar8 + 0x94) = 0;
  *(undefined4 *)((long)puVar8 + 0x9c) = 0;
  iVar14 = *(int *)((long)param_6 + 100);
  *(undefined8 *)((long)puVar8 + 0xa4) = 0;
  *(undefined4 *)((long)puVar8 + 0xac) = 0;
  *(float *)(puVar8 + 0x14) = (float)iVar14;
  uVar15 = 0;
  if (*(char *)(param_6 + 0xe) != '\0') {
    uVar15 = 0x3f800000;
  }
  *(undefined4 *)(puVar8 + 0x16) = uVar15;
  *(undefined4 *)((long)puVar8 + 0xb4) = *(undefined4 *)((long)param_6 + 0x74);
  *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(param_6 + 0xf);
  *(undefined4 *)((long)puVar8 + 0xbc) = 0;
  (**(code **)(*plVar13 + 0x248))(plVar13);
  if (param_5 == 0) {
    *puVar7 = *(undefined8 *)(param_1 + 0xac0);
    puVar8 = (undefined8 *)(param_1 + 0xad0);
  }
  else {
    *puVar7 = *(undefined8 *)(param_1 + 0xac8);
    puVar8 = (undefined8 *)(param_1 + 0xad8);
  }
  puVar7[1] = *puVar8;
  *(uint *)(puVar7 + 0x31) = *(uint *)(puVar7 + 0x31) | 0xffff;
  FUN_005ed7d0(&local_110,param_2);
  if (param_8 == (float *)0x0) {
    fVar19 = 1.0;
    fVar17 = 0.0;
  }
  else {
    fVar17 = *param_8;
    if (param_8[1] - fVar17 <= 0.0) {
      return 0;
    }
    if (param_8[3] - param_8[2] <= 0.0) {
      return 0;
    }
    lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
    fVar17 = fVar17 / (float)*(int *)(lVar9 + 0x14);
    fVar18 = param_8[2];
    lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
    fVar18 = fVar18 / (float)*(int *)(lVar9 + 0x18);
    fVar19 = param_8[1];
    lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
    fVar19 = fVar19 / (float)*(int *)(lVar9 + 0x14);
    fVar20 = param_8[3];
    lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
    fVar20 = fVar20 / (float)*(int *)(lVar9 + 0x18);
  }
  fVar6 = local_110;
  fVar18 = fVar18 + fStack_10c;
  fVar20 = fVar20 + fStack_10c;
  fVar22 = *param_7;
  fVar16 = param_7[1];
  fVar17 = fVar17 + local_110;
  fVar23 = param_7[2];
  fVar21 = param_7[3];
  lVar9 = (**(code **)(*param_2 + 0x98))(param_2);
  fVar5 = fVar20;
  if (*(char *)(lVar9 + 0x38) != '\0') {
    fVar5 = fVar18;
    fVar18 = fVar20;
  }
  if (*(char *)(param_1 + 0x184) == '\0') {
    FUN_00647410(param_1);
    iVar14 = *(int *)(param_1 + 0x174);
    if (iVar14 < 1) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      if (iVar14 != 0) {
        iVar12 = *(int *)(param_1 + 0x170) / iVar14;
      }
    }
    *(int *)(param_1 + 0x17c) = iVar12;
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
  FUN_006479e0(fVar22,fVar23,0,0x3f800000,param_1,0,0);
  FUN_006479e0(fVar17,fVar5,0,0x3f800000,param_1,5,0);
  if (((*(char *)(param_1 + 0x184) != '\0') &&
      (pvVar11 = *(void **)(param_1 + 0x168), pvVar11 != (void *)0x0)) &&
     (pvVar11 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
    memcpy(pvVar11,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
    iVar14 = *(int *)(param_1 + 0x178) + 1;
    *(int *)(param_1 + 0x178) = iVar14;
    if (*(int *)(param_1 + 0x17c) <= iVar14) {
      FUN_006475b0(param_1,0,0);
    }
  }
  FUN_006479e0(fVar16,fVar23,0,0x3f800000,param_1,0,0);
  FUN_006479e0(fVar19 + fVar6,fVar5,0,0x3f800000,param_1,5,0);
  if (((*(char *)(param_1 + 0x184) != '\0') &&
      (pvVar11 = *(void **)(param_1 + 0x168), pvVar11 != (void *)0x0)) &&
     (pvVar11 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
    memcpy(pvVar11,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
    iVar14 = *(int *)(param_1 + 0x178) + 1;
    *(int *)(param_1 + 0x178) = iVar14;
    if (*(int *)(param_1 + 0x17c) <= iVar14) {
      FUN_006475b0(param_1,0,0);
    }
  }
  FUN_006479e0(fVar22,fVar21,0,0x3f800000,param_1,0,0);
  FUN_006479e0(fVar17,fVar18,0,0x3f800000,param_1,5,0);
  if (((*(char *)(param_1 + 0x184) != '\0') &&
      (pvVar11 = *(void **)(param_1 + 0x168), pvVar11 != (void *)0x0)) &&
     (pvVar11 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
    memcpy(pvVar11,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
    *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
    iVar14 = *(int *)(param_1 + 0x178) + 1;
    *(int *)(param_1 + 0x178) = iVar14;
    if (*(int *)(param_1 + 0x17c) <= iVar14) {
      FUN_006475b0(param_1,0,0);
    }
  }
  FUN_006479e0(fVar16,fVar21,0,0x3f800000,param_1,0,0);
  FUN_006479e0(fVar19 + fVar6,fVar18,0,0x3f800000,param_1,5,0);
  if (*(char *)(param_1 + 0x184) != '\0') {
    pvVar11 = *(void **)(param_1 + 0x168);
    if ((pvVar11 != (void *)0x0) &&
       (pvVar11 < (void *)(*(long *)(param_1 + 0x160) + (long)*(int *)(param_1 + 0x170)))) {
      memcpy(pvVar11,(void *)(param_1 + 400),(long)*(int *)(param_1 + 0x174));
      *(long *)(param_1 + 0x168) = *(long *)(param_1 + 0x168) + (long)*(int *)(param_1 + 0x174);
      iVar14 = *(int *)(param_1 + 0x178) + 1;
      *(int *)(param_1 + 0x178) = iVar14;
      if (*(int *)(param_1 + 0x17c) <= iVar14) {
        FUN_006475b0(param_1,0,0);
      }
    }
    if (*(char *)(param_1 + 0x184) != '\0') {
      FUN_006475b0(param_1,1,0);
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
  }
  (**(code **)(*plVar13 + 0x298))(plVar13,0);
  return 0;
}


