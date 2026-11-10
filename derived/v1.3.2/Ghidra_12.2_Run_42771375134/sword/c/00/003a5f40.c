/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a5f40; name: FUN_003a5f40
 */


void FUN_003a5f40(uint *param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar10 = *(long *)(param_1 + 4);
  if (lVar10 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar10);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  uVar5 = *param_1;
  if (uVar5 == 0) {
    __dest = (void *)0x0;
    lVar10 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar5 = param_1[2];
    goto joined_r0x003a6094;
  }
  plVar2 = (long *)FUN_00400d30();
  puVar3 = (undefined8 *)
           (**(code **)(*plVar2 + 0x10))
                     (plVar2,(ulong)uVar5 << 2,"NonTrackedAlloc",
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                      ,0x9f6);
  uVar5 = *param_1;
  *(undefined8 **)(param_1 + 4) = puVar3;
  if (uVar5 == 0) {
LAB_003a6070:
    __dest = (void *)0x0;
    uVar5 = param_1[2];
  }
  else {
    uVar1 = uVar5 - 1;
    if ((uVar5 & 3) != 0) {
      iVar7 = -(uVar5 & 3);
      puVar4 = puVar3;
      do {
        uVar5 = uVar5 - 1;
        iVar7 = iVar7 + 1;
        puVar3 = (undefined8 *)((long)puVar4 + 4);
        *(undefined4 *)puVar4 = 0xffffffff;
        puVar4 = puVar3;
      } while (iVar7 != 0);
    }
    if (2 < uVar1) {
      do {
        uVar5 = uVar5 - 4;
        *puVar3 = 0xffffffffffffffff;
        puVar3[1] = 0xffffffffffffffff;
        puVar3 = puVar3 + 2;
      } while (uVar5 != 0);
    }
    uVar5 = *param_1;
    if (uVar5 == 0) goto LAB_003a6070;
    plVar2 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,(ulong)uVar5 * 0x18,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                                ,0x9fa);
    uVar5 = *param_1;
    if (uVar5 != 0) {
      plVar2 = (long *)FUN_00400d30();
      lVar10 = (**(code **)(*plVar2 + 0x10))
                         (plVar2,(ulong)uVar5 << 2,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                          ,0x9fd);
      uVar5 = param_1[2];
      goto joined_r0x003a6094;
    }
    uVar5 = param_1[2];
  }
  lVar10 = 0;
joined_r0x003a6094:
  if ((uVar5 != 0) &&
     (memcpy(__dest,*(void **)(param_1 + 8),(ulong)(uVar5 * 0x18)), param_1[2] != 0)) {
    lVar11 = *(long *)(param_1 + 4);
    uVar6 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 8) + 8);
    do {
      uVar8 = ((ulong)*(uint *)(plVar2 + -1) | *plVar2 << 0x20) +
              ((ulong)*(uint *)(plVar2 + -1) << 0x20 ^ 0xffffffffffffffff);
      uVar8 = uVar8 ^ uVar8 >> 0x16;
      uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
      uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
      uVar8 = uVar8 ^ uVar8 >> 0xf;
      uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
      lVar9 = (ulong)(param_1[1] & ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) * 4;
      *(undefined4 *)(lVar10 + uVar6 * 4) = *(undefined4 *)(lVar11 + lVar9);
      *(int *)(lVar11 + lVar9) = (int)uVar6;
      uVar6 = uVar6 + 1;
      plVar2 = plVar2 + 3;
    } while (uVar6 < param_1[2]);
  }
  lVar11 = *(long *)(param_1 + 6);
  if (lVar11 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar11);
    param_1[6] = 0;
    param_1[7] = 0;
  }
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar11);
    param_1[8] = 0;
    param_1[9] = 0;
  }
  *(long *)(param_1 + 6) = lVar10;
  *(void **)(param_1 + 8) = __dest;
  return;
}


