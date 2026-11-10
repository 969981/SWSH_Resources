/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013c430; name: FUN_0013c430
 */


void FUN_0013c430(long *param_1,uint param_2,int param_3,int param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  int iVar13;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(PTR_DAT_02710cf0 + 0x10);
  param_1[1] = 0;
  puVar1 = PTR_DAT_02710cf8 + 0x10;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = (long)puVar1;
  param_1[3] = param_5;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[9] = (long)(PTR_DAT_02710d00 + 0x10);
  param_1[10] = param_5;
                    /* try { // try from 0013c4a0 to 0013c4a7 has its CatchHandler @ 0013cadc */
  FUN_0013fac0(param_1 + 0x2d);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  puVar1 = PTR_DAT_02710d08 + 0x10;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  param_1[0x3a] = (long)puVar1;
  param_1[0x3b] = param_5;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x43] = (long)puVar1;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4c] = (long)puVar1;
  uVar6 = param_3 + param_4 + 0x1fU & 0xffffffe0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0xffffffff;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = param_5;
  param_1[0x44] = param_5;
  param_1[0x4d] = param_5;
  param_1[0x29] = 0;
  *(uint *)(param_1 + 0x1a) = uVar6;
  if (uVar6 << 3 == 0) {
    param_1[0x1b] = 0;
LAB_0013c64c:
    lVar3 = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
joined_r0x0013c5ec:
    if (uVar6 != 0) goto LAB_0013c5f0;
LAB_0013c65c:
    uVar6 = 0;
  }
  else {
                    /* try { // try from 0013c53c to 0013c563 has its CatchHandler @ 0013cafc */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6 << 3,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x44);
    uVar6 = *(uint *)(param_1 + 0x1a);
    uVar7 = uVar6 * 8 + 0xf & 0xfffffff0;
    param_1[0x1b] = lVar3;
    if (uVar7 == 0) goto LAB_0013c64c;
                    /* try { // try from 0013c57c to 0013c5a3 has its CatchHandler @ 0013caf8 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar7,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x45);
    uVar6 = (int)param_1[0x1a] * 8 + 0xfU & 0xfffffff0;
    param_1[0x1c] = lVar3;
    if (uVar6 != 0) {
                    /* try { // try from 0013c5bc to 0013c5e3 has its CatchHandler @ 0013cad4 */
      plVar2 = (long *)FUN_00400d30();
      lVar3 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,uVar6,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                         ,0x46);
      uVar6 = *(uint *)(param_1 + 0x1a);
      param_1[0x1d] = lVar3;
      goto joined_r0x0013c5ec;
    }
    lVar3 = 0;
    param_1[0x1d] = 0;
    if ((int)param_1[0x1a] == 0) goto LAB_0013c65c;
LAB_0013c5f0:
    uVar8 = 0;
    lVar9 = param_1[0x1b] + 4;
    lVar11 = param_1[0x1c] + 4;
    lVar3 = lVar3 + 4;
    do {
      *(undefined8 *)(lVar9 + -4) = 0x3fffffff3fffffff;
      *(undefined8 *)(lVar11 + -4) = 0x3fffffff3fffffff;
      uVar8 = uVar8 + 1;
      *(undefined8 *)(lVar3 + -4) = 0x3fffffff3fffffff;
      uVar6 = *(uint *)(param_1 + 0x1a);
      lVar9 = lVar9 + 8;
      lVar11 = lVar11 + 8;
      lVar3 = lVar3 + 8;
    } while (uVar8 < uVar6);
  }
  iVar13 = uVar6 * 2 + 2;
  uVar6 = uVar6 + 0xf & 0xfffffff0;
  *(int *)(param_1 + 0x2a) = iVar13;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
                    /* try { // try from 0013c678 to 0013c69f has its CatchHandler @ 0013caf4 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x54);
    iVar13 = (int)param_1[0x2a];
  }
  uVar6 = iVar13 * 4 + 0xfU & 0xfffffff0;
  param_1[0x24] = lVar3;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
                    /* try { // try from 0013c6c0 to 0013c6e7 has its CatchHandler @ 0013caf0 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x55);
    iVar13 = (int)param_1[0x2a];
  }
  uVar6 = iVar13 * 8 + 0xfU & 0xfffffff0;
  param_1[0x25] = lVar3;
  if (uVar6 == 0) {
    lVar3 = 0;
  }
  else {
                    /* try { // try from 0013c708 to 0013c72f has its CatchHandler @ 0013caec */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x56);
    iVar13 = (int)param_1[0x2a];
  }
  uVar6 = iVar13 * 4 + 0xf;
  param_1[0x26] = lVar3;
  if ((uVar6 & 0xfffffff0) == 0) {
    param_1[0x1e] = 0;
LAB_0013c8c8:
    param_1[0x1f] = 0;
LAB_0013c8cc:
    param_1[0x20] = 0;
LAB_0013c8d0:
    param_1[0x21] = 0;
  }
  else {
                    /* try { // try from 0013c750 to 0013c777 has its CatchHandler @ 0013cae8 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x58);
    uVar6 = (int)param_1[0x2a] * 4 + 0xf;
    param_1[0x1e] = lVar3;
    if ((uVar6 & 0xfffffff0) == 0) goto LAB_0013c8c8;
                    /* try { // try from 0013c790 to 0013c7b7 has its CatchHandler @ 0013cad0 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x59);
    uVar6 = (int)param_1[0x2a] * 4 + 0xf;
    param_1[0x1f] = lVar3;
    if ((uVar6 & 0xfffffff0) == 0) goto LAB_0013c8cc;
                    /* try { // try from 0013c7d0 to 0013c7f7 has its CatchHandler @ 0013cac8 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x5a);
    uVar6 = (int)param_1[0x2a] * 4 + 0xf;
    param_1[0x20] = lVar3;
    if ((uVar6 & 0xfffffff0) == 0) goto LAB_0013c8d0;
                    /* try { // try from 0013c810 to 0013c837 has its CatchHandler @ 0013cac4 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x5b);
    uVar6 = (int)param_1[0x2a] * 4 + 0xf;
    param_1[0x21] = lVar3;
    if ((uVar6 & 0xfffffff0) != 0) {
                    /* try { // try from 0013c850 to 0013c877 has its CatchHandler @ 0013cac0 */
      plVar2 = (long *)FUN_00400d30();
      puVar4 = (undefined4 *)
               (**(code **)(*plVar2 + 0x10))
                         (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                          ,0x5c);
      uVar6 = (int)param_1[0x2a] * 4 + 0xf;
      param_1[0x22] = (long)puVar4;
      if ((uVar6 & 0xfffffff0) == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
                    /* try { // try from 0013c890 to 0013c8bb has its CatchHandler @ 0013cabc */
        plVar2 = (long *)FUN_00400d30();
        puVar5 = (undefined4 *)
                 (**(code **)(*plVar2 + 0x10))
                           (plVar2,uVar6 & 0xfffffff0,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                            ,0x5d);
        puVar4 = (undefined4 *)param_1[0x22];
      }
      goto LAB_0013c8e0;
    }
  }
  puVar4 = (undefined4 *)0x0;
  puVar5 = (undefined4 *)0x0;
  param_1[0x22] = 0;
LAB_0013c8e0:
  puVar10 = (undefined4 *)param_1[0x1e];
  puVar12 = (undefined4 *)param_1[0x21];
  param_1[0x23] = (long)puVar5;
  *puVar10 = 0;
  *puVar12 = 0x3ffffffe;
  puVar10[1] = 0xffffffff;
  puVar12[1] = 0x3fffffff;
  puVar10 = (undefined4 *)param_1[0x1f];
  *puVar10 = 0;
  *puVar4 = 0x3ffffffe;
  puVar10[1] = 0xffffffff;
  puVar4[1] = 0x3fffffff;
  puVar4 = (undefined4 *)param_1[0x20];
  *puVar4 = 0;
  *puVar5 = 0x3ffffffe;
  puVar4[1] = 0xffffffff;
  puVar5[1] = 0x3fffffff;
  uVar7 = *(uint *)(param_1 + 0x2a);
  uVar6 = uVar7 * 4 + 0xf & 0xfffffff0;
  if (uVar6 == 0) {
    puVar5 = (undefined4 *)0x0;
    param_1[0x27] = 0;
    lVar3 = param_1[0x27];
    param_1[0x28] = 0;
  }
  else {
                    /* try { // try from 0013c940 to 0013c967 has its CatchHandler @ 0013cae4 */
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,uVar6,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                       ,0x67);
    uVar7 = *(uint *)(param_1 + 0x2a);
    uVar6 = uVar7 * 4 + 0xf & 0xfffffff0;
    param_1[0x27] = lVar3;
    if (uVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
      lVar3 = param_1[0x27];
      param_1[0x28] = 0;
    }
    else {
                    /* try { // try from 0013c980 to 0013c9a7 has its CatchHandler @ 0013cacc */
      plVar2 = (long *)FUN_00400d30();
      puVar5 = (undefined4 *)
               (**(code **)(*plVar2 + 0x10))
                         (plVar2,uVar6,"NonTrackedAlloc",
                          "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSap.cpp"
                          ,0x68);
      uVar7 = *(uint *)(param_1 + 0x2a);
      lVar3 = param_1[0x27];
      param_1[0x28] = (long)puVar5;
    }
  }
  if (1 < uVar7) {
    lVar9 = 0;
    do {
      uVar8 = lVar9 + 2;
      iVar13 = (int)(lVar9 + 1);
      *(int *)(lVar3 + lVar9 * 4) = iVar13;
      puVar5[lVar9 + 1] = iVar13 + -1;
      uVar7 = *(uint *)(param_1 + 0x2a);
      lVar9 = lVar9 + 1;
    } while (uVar8 < uVar7);
  }
  *(uint *)(lVar3 + (ulong)(uVar7 - 1) * 4) = uVar7 - 1;
  if (param_2 < 0x41) {
    param_2 = 0x40;
  }
  *puVar5 = 0;
  *(uint *)((long)param_1 + 0x154) = param_2;
                    /* try { // try from 0013ca48 to 0013ca4f has its CatchHandler @ 0013cad8 */
  FUN_0013faf0(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x52) = 2;
  param_1[0x51] = (long)param_1;
  param_1[0x48] = (long)param_1;
  param_1[0x3f] = (long)param_1;
  *(undefined4 *)(param_1 + 0x49) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)((long)param_1 + 0x25c) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x18] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  return;
}


