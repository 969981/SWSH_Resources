/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013d3b0; name: FUN_0013d3b0
 */


void FUN_0013d3b0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  undefined8 uVar9;
  void *__dest;
  void *__dest_00;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  void *local_68;
  
  uVar3 = *(uint *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0x80) = *param_2;
  iVar13 = *(int *)(param_2 + 1);
  *(int *)(param_1 + 0x88) = iVar13;
  *(undefined8 *)(param_1 + 0xa0) = param_2[2];
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 0x90) = param_2[4];
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0xb0) = param_2[6];
  *(undefined8 *)(param_1 + 0xb8) = param_2[7];
  *(undefined8 *)(param_1 + 0xc0) = param_2[8];
  *(undefined8 *)(param_1 + 200) = param_2[9];
  uVar4 = *(uint *)(param_2 + 10);
  if (uVar3 < uVar4) {
    uVar1 = uVar4 * 8 + 0xf;
    uVar2 = uVar1 & 0xfffffff0;
    if ((uVar1 & 0xfffffff0) == 0) {
      pvVar7 = (void *)0x0;
      pvVar6 = (void *)0x0;
      pvVar8 = (void *)0x0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,uVar2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                  ,0x20e);
      plVar5 = (long *)FUN_00400d30();
      pvVar7 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,uVar2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                  ,0x20f);
      plVar5 = (long *)FUN_00400d30();
      pvVar8 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,uVar2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                  ,0x210);
    }
    uVar14 = (ulong)(uVar3 << 3);
    memcpy(pvVar6,*(void **)(param_1 + 0xd8),uVar14);
    memcpy(pvVar7,*(void **)(param_1 + 0xe0),uVar14);
    memcpy(pvVar8,*(void **)(param_1 + 0xe8),uVar14);
    lVar11 = (ulong)uVar4 - (ulong)uVar3;
    lVar12 = (ulong)uVar3 << 3;
    do {
      *(undefined8 *)((long)pvVar6 + lVar12) = 0x3fffffff3fffffff;
      lVar11 = lVar11 + -1;
      *(undefined8 *)((long)pvVar7 + lVar12) = 0x3fffffff3fffffff;
      *(undefined8 *)((long)pvVar8 + lVar12) = 0x3fffffff3fffffff;
      lVar12 = lVar12 + 8;
    } while (lVar11 != 0);
    lVar12 = *(long *)(param_1 + 0xd8);
    if (lVar12 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
    }
    lVar12 = *(long *)(param_1 + 0xe0);
    if (lVar12 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
    }
    lVar12 = *(long *)(param_1 + 0xe8);
    if (lVar12 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
    }
    *(void **)(param_1 + 0xd8) = pvVar6;
    *(void **)(param_1 + 0xe0) = pvVar7;
    lVar12 = *(long *)(param_1 + 0x120);
    *(void **)(param_1 + 0xe8) = pvVar8;
    *(uint *)(param_1 + 0xd0) = uVar4;
    if (lVar12 != 0) {
      plVar5 = (long *)FUN_00400d30();
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
    }
    uVar3 = uVar4 + 0xf & 0xfffffff0;
    if (uVar3 == 0) {
      uVar9 = 0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      uVar9 = (**(code **)(*plVar5 + 0x10))
                        (plVar5,uVar3,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                         ,0x229);
    }
    iVar13 = *(int *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x120) = uVar9;
  }
  uVar4 = (iVar13 + *(int *)(param_1 + 0x148)) * 2;
  uVar3 = uVar4 + 2;
  if (uVar3 <= *(uint *)(param_1 + 0x150)) goto LAB_0013da18;
  uVar1 = uVar3 * 4 + 0xf;
  uVar2 = uVar1 & 0xfffffff0;
  if ((uVar1 & 0xfffffff0) == 0) {
    local_68 = (void *)0x0;
    pvVar6 = (void *)0x0;
    pvVar7 = (void *)0x0;
    pvVar8 = (void *)0x0;
    __dest = (void *)0x0;
    __dest_00 = (void *)0x0;
    lVar12 = *(long *)(param_1 + 0x138);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pvVar7 = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,uVar2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                ,0x231);
    plVar5 = (long *)FUN_00400d30();
    pvVar8 = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,uVar2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                ,0x232);
    plVar5 = (long *)FUN_00400d30();
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,uVar2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                ,0x233);
    plVar5 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar5 + 0x10))
                               (plVar5,uVar2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                ,0x234);
    plVar5 = (long *)FUN_00400d30();
    local_68 = (void *)(**(code **)(*plVar5 + 0x10))
                                 (plVar5,uVar2,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                  ,0x235);
    plVar5 = (long *)FUN_00400d30();
    __dest_00 = (void *)(**(code **)(*plVar5 + 0x10))
                                  (plVar5,uVar2,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                                   ,0x236);
    lVar12 = *(long *)(param_1 + 0x138);
  }
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x140);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  if (uVar2 == 0) {
    puVar10 = (undefined4 *)0x0;
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    uVar9 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,uVar2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x23b);
    *(undefined8 *)(param_1 + 0x138) = uVar9;
    plVar5 = (long *)FUN_00400d30();
    puVar10 = (undefined4 *)
              (**(code **)(*plVar5 + 0x10))
                        (plVar5,uVar2,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                         ,0x23c);
  }
  lVar11 = *(long *)(param_1 + 0x138);
  *(undefined4 **)(param_1 + 0x140) = puVar10;
  lVar12 = 0;
  do {
    uVar14 = lVar12 + 2;
    iVar13 = (int)(lVar12 + 1);
    *(int *)(lVar11 + lVar12 * 4) = iVar13;
    puVar10[lVar12 + 1] = iVar13 + -1;
    lVar12 = lVar12 + 1;
  } while (uVar14 < uVar3);
  uVar4 = uVar4 | 1;
  *(uint *)(lVar11 + (ulong)uVar4 * 4) = uVar4;
  *puVar10 = 0;
  memcpy(pvVar7,*(void **)(param_1 + 0xf0),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  memcpy(pvVar8,*(void **)(param_1 + 0xf8),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  memcpy(pvVar6,*(void **)(param_1 + 0x100),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  memcpy(__dest,*(void **)(param_1 + 0x108),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  memcpy(local_68,*(void **)(param_1 + 0x110),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  memcpy(__dest_00,*(void **)(param_1 + 0x118),(ulong)(*(int *)(param_1 + 0x148) * 8 + 8));
  lVar12 = *(long *)(param_1 + 0xf0);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0xf8);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x100);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x108);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x110);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x118);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  *(void **)(param_1 + 0x110) = local_68;
  *(void **)(param_1 + 0x118) = __dest_00;
  lVar12 = *(long *)(param_1 + 0x128);
  *(void **)(param_1 + 0xf0) = pvVar7;
  *(void **)(param_1 + 0xf8) = pvVar8;
  *(uint *)(param_1 + 0x150) = uVar3;
  *(void **)(param_1 + 0x100) = pvVar6;
  *(void **)(param_1 + 0x108) = __dest;
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  lVar12 = *(long *)(param_1 + 0x130);
  if (lVar12 != 0) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar12);
  }
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    if ((uVar3 & 0x1fffffff) == 0) goto LAB_0013da10;
LAB_0013d9d0:
    plVar5 = (long *)FUN_00400d30();
    uVar9 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,uVar3 * 8,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x25e);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    uVar9 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,uVar2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x25d);
    *(undefined8 *)(param_1 + 0x128) = uVar9;
    if ((uVar3 & 0x1fffffff) != 0) goto LAB_0013d9d0;
LAB_0013da10:
    uVar9 = 0;
  }
  *(undefined8 *)(param_1 + 0x130) = uVar9;
LAB_0013da18:
                    /* WARNING: Subroutine does not return */
  memset(*(void **)(param_1 + 0x120),0,(ulong)*(uint *)(param_1 + 0xd0));
}


