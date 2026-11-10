/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e0010; name: FUN_003e0010
 */


void FUN_003e0010(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong *puVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong *local_38;
  
  if (param_2 < 0x81) {
    puVar5 = *(ulong **)(param_1 + 0xbd0);
    if (puVar5 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xbc8);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 128> >::getName() [T = physx::Sc::Scene::Block<unsigned char, 128>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar6,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 3000);
      if (uVar3 < (*(uint *)(param_1 + 0xbbc) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0xbb0) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 3000) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f4610(param_1 + 0x9a8,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0xbc0) * 0x10 + -0x10 < puVar9) {
        puVar5 = *(ulong **)(param_1 + 0xbd0);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0xbc0) * 0x10 + -0x10;
        puVar10 = *(ulong **)(param_1 + 0xbd0);
        do {
          puVar5 = puVar4;
          *puVar5 = (ulong)puVar10;
          puVar4 = puVar5 + -0x10;
          puVar10 = puVar5;
        } while (puVar9 <= puVar5 + -0x10);
        *(ulong **)(param_1 + 0xbd0) = puVar5;
      }
    }
    *(ulong *)(param_1 + 0xbd0) = *puVar5;
    *(int *)(param_1 + 0xbc4) = *(int *)(param_1 + 0xbc4) + 1;
  }
  else if (param_2 < 0x101) {
    puVar5 = *(ulong **)(param_1 + 0xe08);
    if (puVar5 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0xe00);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 256> >::getName() [T = physx::Sc::Scene::Block<unsigned char, 256>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar6,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0xdf0);
      if (uVar3 < (*(uint *)(param_1 + 0xdf4) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0xde8) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 0xdf0) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f47e0(param_1 + 0xbe0,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0xdf8) * 0x20 + -0x20 < puVar9) {
        puVar5 = *(ulong **)(param_1 + 0xe08);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0xdf8) * 0x20 + -0x20;
        puVar10 = *(ulong **)(param_1 + 0xe08);
        do {
          puVar5 = puVar4;
          *puVar5 = (ulong)puVar10;
          puVar4 = puVar5 + -0x20;
          puVar10 = puVar5;
        } while (puVar9 <= puVar5 + -0x20);
        *(ulong **)(param_1 + 0xe08) = puVar5;
      }
    }
    *(ulong *)(param_1 + 0xe08) = *puVar5;
    *(int *)(param_1 + 0xdfc) = *(int *)(param_1 + 0xdfc) + 1;
  }
  else {
    if (0x180 < param_2) {
      plVar6 = (long *)FUN_00400d30();
                    /* WARNING: Could not recover jumptable at 0x003e01b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))
                (plVar6,param_2,"NonTrackedAlloc",
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                 ,0x705);
      return;
    }
    puVar5 = *(ulong **)(param_1 + 0x1040);
    if (puVar5 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x1038);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar6 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar6 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<unsigned char, 384> >::getName() [T = physx::Sc::Scene::Block<unsigned char, 384>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar6,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x1028);
      if (uVar3 < (*(uint *)(param_1 + 0x102c) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x1020) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 0x1028) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f49b0(param_1 + 0xe18,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0x1030) * 0x30 + -0x30 < puVar9) {
        puVar5 = *(ulong **)(param_1 + 0x1040);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0x1030) * 0x30 + -0x30;
        puVar10 = *(ulong **)(param_1 + 0x1040);
        do {
          puVar5 = puVar4;
          *puVar5 = (ulong)puVar10;
          puVar4 = puVar5 + -0x30;
          puVar10 = puVar5;
        } while (puVar9 <= puVar5 + -0x30);
        *(ulong **)(param_1 + 0x1040) = puVar5;
      }
    }
    *(ulong *)(param_1 + 0x1040) = *puVar5;
    *(int *)(param_1 + 0x1034) = *(int *)(param_1 + 0x1034) + 1;
  }
  return;
}


