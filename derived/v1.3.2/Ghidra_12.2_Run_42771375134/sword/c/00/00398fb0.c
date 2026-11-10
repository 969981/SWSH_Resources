/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00398fb0; name: FUN_00398fb0
 */


void FUN_00398fb0(long *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  void *__dest;
  float *pfVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar6 = (int)param_1[1];
  iVar7 = param_2[4];
  if (iVar7 + iVar6 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar3 + 0x10))
                               (plVar3,(ulong)(uint)(iVar7 + iVar6) << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                                ,0x357);
    iVar6 = (int)param_1[1];
  }
  memcpy(__dest,(void *)*param_1,(ulong)(uint)(iVar6 << 2));
  lVar10 = *param_1;
  if (lVar10 != 0) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar10);
  }
  *param_1 = (long)__dest;
  iVar7 = param_2[4];
  *(int *)((long)param_1 + 0x44) = *(int *)((long)param_1 + 0x44) + iVar7;
  if (iVar7 != 0) {
    lVar10 = *(long *)(param_2 + 6);
    uVar8 = 0;
    do {
      lVar5 = uVar8 * 4;
      iVar7 = (int)uVar8;
      uVar8 = uVar8 + 1;
      *(int *)((long)__dest + (ulong)(uint)(iVar7 + (int)param_1[1]) * 4) =
           *(int *)(lVar10 + lVar5) + param_2[8];
    } while (uVar8 < (uint)param_2[4]);
  }
  FUN_00398040(param_1 + 10,(int)param_1[8] + *param_2 + 1);
  if (param_1[7] == 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 == 0) {
      uVar2 = 0;
      lVar10 = 0;
    }
    else {
      plVar3 = (long *)FUN_00400d30();
      lVar10 = (**(code **)(*plVar3 + 0x10))
                         (plVar3,(ulong)uVar1 << 2,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                          ,0x36a);
      uVar2 = (undefined4)param_1[8];
    }
    lVar5 = param_1[2];
    param_1[7] = lVar10;
    FUN_00398460(uVar2,lVar10,lVar5,lVar5,lVar5);
  }
  pfVar9 = *(float **)(param_2 + 2);
  pfVar4 = (float *)param_1[2];
  if ((((*pfVar9 < *pfVar4) || (pfVar9[1] < pfVar4[1])) || (pfVar9[2] < pfVar4[2])) ||
     (((pfVar4[3] < pfVar9[3] || (pfVar4[4] < pfVar9[4])) ||
      ((pfVar4[5] < pfVar9[5] || (((uint)pfVar4[6] & 1) != 0)))))) {
    if (((uint)pfVar4[6] & 1) == 0) {
      FUN_00398a80(param_1,pfVar4,param_2,0);
    }
    else {
      FUN_00398780(param_1,pfVar4,param_2,0);
    }
    pfVar4 = (float *)param_1[2];
    pfVar9 = *(float **)(param_2 + 2);
    fVar11 = *pfVar4;
    if (*pfVar9 <= *pfVar4) {
      fVar11 = *pfVar9;
    }
    fVar12 = pfVar4[1];
    if (pfVar9[1] <= pfVar4[1]) {
      fVar12 = pfVar9[1];
    }
    fVar13 = pfVar9[2];
    *pfVar4 = fVar11;
    pfVar4[1] = fVar12;
    fVar11 = pfVar4[2];
    if (fVar13 <= pfVar4[2]) {
      fVar11 = fVar13;
    }
    pfVar4[2] = fVar11;
    fVar11 = pfVar4[3];
    if (pfVar4[3] <= pfVar9[3]) {
      fVar11 = pfVar9[3];
    }
    fVar12 = pfVar4[4];
    if (pfVar4[4] <= pfVar9[4]) {
      fVar12 = pfVar9[4];
    }
    fVar13 = pfVar9[5];
    pfVar4[3] = fVar11;
    pfVar4[4] = fVar12;
    fVar11 = pfVar4[5];
    if (pfVar4[5] <= fVar13) {
      fVar11 = fVar13;
    }
    pfVar4[5] = fVar11;
  }
  else {
    FUN_00398e90(param_1,pfVar4,param_2,0);
  }
  *(int *)(param_1 + 1) = (int)param_1[1] + param_2[4];
  return;
}


