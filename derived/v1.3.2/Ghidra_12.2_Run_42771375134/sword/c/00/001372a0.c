/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001372a0; name: FUN_001372a0
 */


uint FUN_001372a0(long param_1,undefined8 *param_2,uint param_3,ulong param_4)

{
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  void *pvVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  uint uVar21;
  void *pvVar22;
  
  uVar11 = *(uint *)(param_1 + 0x78);
  if (uVar11 == 0xffffffff) {
    uVar11 = *(uint *)(param_1 + 0x70);
    if (*(uint *)(param_1 + 0x74) == uVar11) {
      FUN_00137140(param_1);
      uVar11 = *(uint *)(param_1 + 0x70);
    }
    *(uint *)(param_1 + 0x70) = uVar11 + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x78) =
         *(undefined4 *)(*(long *)(param_1 + 0x80) + (ulong)(uVar11 & 0xffff) * 8);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  if ((param_4 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0x90);
    uVar21 = *(uint *)(param_1 + 0x94);
    if (uVar4 == uVar21) {
      pvVar22 = *(void **)(param_1 + 0xa0);
      uVar21 = uVar4 + 0x80;
      if (uVar21 == 0) {
        pvVar10 = (void *)0x0;
LAB_00137568:
        memcpy(pvVar10,pvVar22,(ulong)(uVar4 * 0x18));
      }
      else {
        plVar7 = (long *)FUN_00400d30();
        pcVar20 = *(code **)(*plVar7 + 0x10);
        plVar8 = (long *)FUN_00400d60();
        uVar9 = (**(code **)(*plVar8 + 0x28))();
        pcVar3 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::IAABB>::getName() [T = physx::Bp::IAABB]"
        ;
        if ((uVar9 & 1) == 0) {
          pcVar3 = "<allocation names disabled>";
        }
        pvVar10 = (void *)(*pcVar20)(plVar7,(ulong)uVar21 * 0x18,pcVar3,
                                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                     ,0x495);
        if (uVar4 != 0) goto LAB_00137568;
      }
      if (pvVar22 != (void *)0x0) {
                    /* try { // try from 00137580 to 00137593 has its CatchHandler @ 001377bc */
        plVar7 = (long *)FUN_00400d30();
        (**(code **)(*plVar7 + 0x18))(plVar7,pvVar22);
      }
      iVar5 = *(int *)(param_1 + 0x94);
      pvVar22 = *(void **)(param_1 + 0xb0);
      *(void **)(param_1 + 0xa0) = pvVar10;
      if (uVar21 == 0) {
        pvVar10 = (void *)0x0;
      }
      else {
        plVar7 = (long *)FUN_00400d30();
        pvVar10 = (void *)(**(code **)(*plVar7 + 0x10))
                                    (plVar7,(ulong)uVar21 << 1,"NonTrackedAlloc",
                                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                     ,0x49e);
      }
      if (iVar5 != 0) {
        memcpy(pvVar10,pvVar22,(ulong)(uint)(iVar5 << 1));
      }
      if (pvVar22 != (void *)0x0) {
        plVar7 = (long *)FUN_00400d30();
        (**(code **)(*plVar7 + 0x18))(plVar7,pvVar22);
      }
      lVar13 = *(long *)(param_1 + 0xb8);
      *(void **)(param_1 + 0xb0) = pvVar10;
      *(uint *)(param_1 + 0x90) = uVar21;
      if (lVar13 != 0) {
        plVar7 = (long *)FUN_00400d30();
        (**(code **)(*plVar7 + 0x18))(plVar7,lVar13);
        *(undefined8 *)(param_1 + 0xb8) = 0;
      }
      if (uVar4 + 0x81 == 0) {
        uVar16 = 0;
      }
      else {
        plVar7 = (long *)FUN_00400d30();
        uVar16 = (**(code **)(*plVar7 + 0x10))
                           (plVar7,(ulong)(uVar4 + 0x81) << 2,"NonTrackedAlloc",
                            "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                            ,0x4ef);
      }
      uVar21 = *(uint *)(param_1 + 0x94);
      *(undefined8 *)(param_1 + 0xb8) = uVar16;
    }
    *(uint *)(param_1 + 0x94) = uVar21 + 1;
    puVar12 = (undefined8 *)(*(long *)(param_1 + 0xa0) + (ulong)uVar21 * 0x18);
    puVar12[2] = param_2[2];
    puVar12[1] = param_2[1];
    *puVar12 = *param_2;
    *(short *)(*(long *)(param_1 + 0xb0) + (ulong)uVar21 * 2) = (short)uVar11;
    goto LAB_001376c0;
  }
  uVar4 = *(uint *)(param_1 + 0x88);
  uVar21 = *(uint *)(param_1 + 0x8c);
  if (uVar4 == uVar21) {
    pvVar22 = *(void **)(param_1 + 0x98);
    uVar2 = uVar4 + 0x80;
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
LAB_0013743c:
      memcpy(pvVar10,pvVar22,(ulong)(uVar4 * 0x18));
    }
    else {
      plVar7 = (long *)FUN_00400d30();
      pcVar20 = *(code **)(*plVar7 + 0x10);
      plVar8 = (long *)FUN_00400d60();
      uVar9 = (**(code **)(*plVar8 + 0x28))();
      pcVar3 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::IAABB>::getName() [T = physx::Bp::IAABB]"
      ;
      if ((uVar9 & 1) == 0) {
        pcVar3 = "<allocation names disabled>";
      }
      pvVar10 = (void *)(*pcVar20)(plVar7,(ulong)uVar2 * 0x18,pcVar3,
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                   ,0x495);
      if (uVar4 != 0) goto LAB_0013743c;
    }
    if (pvVar22 != (void *)0x0) {
                    /* try { // try from 00137454 to 00137467 has its CatchHandler @ 001377c0 */
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,pvVar22);
    }
    iVar5 = *(int *)(param_1 + 0x8c);
    pvVar22 = *(void **)(param_1 + 0xa8);
    *(void **)(param_1 + 0x98) = pvVar10;
    if (uVar2 == 0) {
      pvVar10 = (void *)0x0;
    }
    else {
      plVar7 = (long *)FUN_00400d30();
      pvVar10 = (void *)(**(code **)(*plVar7 + 0x10))
                                  (plVar7,(ulong)uVar2 << 1,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                                   ,0x49e);
    }
    if (iVar5 != 0) {
      memcpy(pvVar10,pvVar22,(ulong)(uint)(iVar5 << 1));
    }
    if (pvVar22 != (void *)0x0) {
      plVar7 = (long *)FUN_00400d30();
      (**(code **)(*plVar7 + 0x18))(plVar7,pvVar22);
    }
    uVar21 = *(uint *)(param_1 + 0x8c);
    *(void **)(param_1 + 0xa8) = pvVar10;
    *(uint *)(param_1 + 0x88) = uVar2;
  }
  *(uint *)(param_1 + 0x8c) = uVar21 + 1;
  puVar12 = (undefined8 *)(*(long *)(param_1 + 0x98) + (ulong)uVar21 * 0x18);
  puVar12[2] = param_2[2];
  puVar12[1] = param_2[1];
  *puVar12 = *param_2;
  *(short *)(*(long *)(param_1 + 0xa8) + (ulong)uVar21 * 2) = (short)uVar11;
  *(undefined1 *)(param_1 + 0x118) = 1;
  if (*(uint *)(param_1 + 0xd0) <= uVar21 >> 5) {
    FUN_00136460((long *)(param_1 + 200),uVar21);
  }
  lVar13 = *(long *)(param_1 + 200);
  lVar14 = (ulong)(uVar21 >> 5) * 4;
  *(uint *)(lVar13 + lVar14) = *(uint *)(lVar13 + lVar14) | 1 << (ulong)(uVar21 & 0x1f);
LAB_001376c0:
  lVar13 = *(long *)(param_1 + 0x80);
  puVar1 = (uint *)(lVar13 + (ulong)(uVar11 & 0xffff) * 8);
  *puVar1 = uVar21;
  puVar1[1] = param_3;
  if ((param_4 & 1) == 0) {
    uVar4 = *(uint *)(param_1 + 0xc0);
    lVar14 = *(long *)(param_1 + 0xa0);
    if (uVar21 == uVar4) {
      puVar12 = (undefined8 *)(lVar14 + (ulong)uVar21 * 0x18);
      puVar12[2] = param_2[2];
      puVar12[1] = param_2[1];
      *puVar12 = *param_2;
    }
    else {
      puVar15 = (undefined8 *)(lVar14 + (ulong)uVar4 * 0x18);
      puVar12 = (undefined8 *)(lVar14 + (ulong)uVar21 * 0x18);
      uVar16 = puVar15[2];
      lVar19 = *(long *)(param_1 + 0xb0);
      uVar17 = puVar15[1];
      uVar18 = *puVar15;
      puVar15[2] = param_2[2];
      puVar15[1] = param_2[1];
      *puVar15 = *param_2;
      puVar12[1] = uVar17;
      puVar12[2] = uVar16;
      lVar14 = (ulong)uVar4 * 2;
      *puVar12 = uVar18;
      uVar6 = *(ushort *)(lVar19 + lVar14);
      *(undefined2 *)(lVar19 + lVar14) = *(undefined2 *)(lVar19 + (ulong)uVar21 * 2);
      *(ushort *)(lVar19 + (ulong)uVar21 * 2) = uVar6;
      *(uint *)(lVar13 + (ulong)uVar6 * 8) = uVar21;
      *puVar1 = uVar4;
    }
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined1 *)(param_1 + 0x119) = 1;
  }
  return uVar11;
}


