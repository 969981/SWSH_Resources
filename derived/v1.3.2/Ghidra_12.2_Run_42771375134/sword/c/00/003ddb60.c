/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ddb60; name: FUN_003ddb60
 */


void FUN_003ddb60(long param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  long *plVar5;
  ulong *puVar6;
  long *plVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  code *pcVar11;
  ulong *local_38;
  
  switch(param_2 >> 3 | param_2 << 0x1d) {
  case 0:
    break;
  case 1:
    puVar6 = *(ulong **)(param_1 + 0x2a8);
    if (puVar6 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x2a0);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar5 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar5 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 8> >::getName() [T = physx::Sc::Scene::Block<void *, 8>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x290);
      if (uVar3 < (*(uint *)(param_1 + 0x294) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x288) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 0x290) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f29e0(param_1 + 0x80,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0x298) * 8 + -8 < puVar9) {
        puVar6 = *(ulong **)(param_1 + 0x2a8);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0x298) * 8 + -8;
        puVar10 = *(ulong **)(param_1 + 0x2a8);
        do {
          puVar6 = puVar4;
          *puVar6 = (ulong)puVar10;
          puVar4 = puVar6 + -8;
          puVar10 = puVar6;
        } while (puVar9 <= puVar6 + -8);
        *(ulong **)(param_1 + 0x2a8) = puVar6;
      }
    }
    *(ulong *)(param_1 + 0x2a8) = *puVar6;
    *(int *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + 1;
    break;
  case 2:
    puVar6 = *(ulong **)(param_1 + 0x4e0);
    if (puVar6 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x4d8);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar5 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar5 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 16> >::getName() [T = physx::Sc::Scene::Block<void *, 16>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x4c8);
      if (uVar3 < (*(uint *)(param_1 + 0x4cc) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x4c0) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 0x4c8) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f2bb0(param_1 + 0x2b8,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0x4d0) * 0x10 + -0x10 < puVar9) {
        puVar6 = *(ulong **)(param_1 + 0x4e0);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0x4d0) * 0x10 + -0x10;
        puVar10 = *(ulong **)(param_1 + 0x4e0);
        do {
          puVar6 = puVar4;
          *puVar6 = (ulong)puVar10;
          puVar4 = puVar6 + -0x10;
          puVar10 = puVar6;
        } while (puVar9 <= puVar6 + -0x10);
        *(ulong **)(param_1 + 0x4e0) = puVar6;
      }
    }
    *(ulong *)(param_1 + 0x4e0) = *puVar6;
    *(int *)(param_1 + 0x4d4) = *(int *)(param_1 + 0x4d4) + 1;
    break;
  default:
    plVar5 = (long *)FUN_00400d30(0);
                    /* WARNING: Could not recover jumptable at 0x003ddca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))
              (plVar5,(ulong)param_2 << 3,"NonTrackedAlloc",
               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
               ,0x519);
    return;
  case 4:
    puVar6 = *(ulong **)(param_1 + 0x718);
    if (puVar6 == (ulong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x710);
      if (iVar2 == 0) {
        puVar9 = (ulong *)0x0;
      }
      else {
        plVar5 = (long *)FUN_00400d30();
        pcVar11 = *(code **)(*plVar5 + 0x10);
        plVar7 = (long *)FUN_00400d60();
        uVar8 = (**(code **)(*plVar7 + 0x28))();
        pcVar1 = 
        "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Scene::Block<void *, 32> >::getName() [T = physx::Sc::Scene::Block<void *, 32>]"
        ;
        if ((uVar8 & 1) == 0) {
          pcVar1 = "<allocation names disabled>";
        }
        puVar9 = (ulong *)(*pcVar11)(plVar5,iVar2,pcVar1,
                                     "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4)
        ;
      }
      uVar3 = *(uint *)(param_1 + 0x700);
      if (uVar3 < (*(uint *)(param_1 + 0x704) & 0x7fffffff)) {
        *(ulong **)(*(long *)(param_1 + 0x6f8) + (ulong)uVar3 * 8) = puVar9;
        *(uint *)(param_1 + 0x700) = uVar3 + 1;
      }
      else {
        local_38 = puVar9;
        FUN_003f2d80(param_1 + 0x4f0,&local_38);
      }
      if (puVar9 + (ulong)*(uint *)(param_1 + 0x708) * 0x20 + -0x20 < puVar9) {
        puVar6 = *(ulong **)(param_1 + 0x718);
      }
      else {
        puVar4 = puVar9 + (ulong)*(uint *)(param_1 + 0x708) * 0x20 + -0x20;
        puVar10 = *(ulong **)(param_1 + 0x718);
        do {
          puVar6 = puVar4;
          *puVar6 = (ulong)puVar10;
          puVar4 = puVar6 + -0x20;
          puVar10 = puVar6;
        } while (puVar9 <= puVar6 + -0x20);
        *(ulong **)(param_1 + 0x718) = puVar6;
      }
    }
    *(ulong *)(param_1 + 0x718) = *puVar6;
    *(int *)(param_1 + 0x70c) = *(int *)(param_1 + 0x70c) + 1;
  }
  return;
}


