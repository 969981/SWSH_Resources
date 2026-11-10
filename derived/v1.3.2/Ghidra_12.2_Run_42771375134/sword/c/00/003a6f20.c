/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a6f20; name: FUN_003a6f20
 */


void FUN_003a6f20(long param_1,uint param_2)

{
  char *pcVar1;
  long *plVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  
  if (param_2 + 1 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,(ulong)(param_2 + 1) * 0x18,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                                ,0xc9);
  }
  memcpy(pvVar3,*(void **)(param_1 + 0x1f08),(ulong)(uint)(*(int *)(param_1 + 0x1f1c) * 0x18));
  lVar7 = *(long *)(param_1 + 0x1f08);
  if (lVar7 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
  }
  *(void **)(param_1 + 0x1f08) = pvVar3;
  if (param_2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    pvVar3 = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,(ulong)param_2 << 4,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                                ,0xd0);
  }
  memcpy(pvVar3,*(void **)(param_1 + 0x1f10),(ulong)(uint)(*(int *)(param_1 + 0x1f1c) << 4));
  lVar7 = *(long *)(param_1 + 0x1f10);
  if (lVar7 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
  }
  uVar9 = (ulong)*(uint *)(param_1 + 0x1f1c);
  *(void **)(param_1 + 0x1f10) = pvVar3;
  if (*(uint *)(param_1 + 0x1f1c) < param_2) {
    lVar7 = uVar9 << 4;
    do {
      *(undefined8 *)((long)pvVar3 + lVar7 + 8) = 0;
      plVar2 = (long *)FUN_00400d30();
      pcVar8 = *(code **)(*plVar2 + 0x10);
      plVar4 = (long *)FUN_00400d60();
      uVar5 = (**(code **)(*plVar4 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTree>::getName() [T = physx::Sq::AABBTree]"
      ;
      if ((uVar5 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      uVar6 = (*pcVar8)(plVar2,0x68,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqExtendedBucketPruner.cpp"
                        ,0xd9);
                    /* try { // try from 003a70bc to 003a70bf has its CatchHandler @ 003a7100 */
      FUN_00397650();
      pvVar3 = *(void **)(param_1 + 0x1f10);
      uVar9 = uVar9 + 1;
      *(undefined8 *)((long)pvVar3 + lVar7) = uVar6;
      lVar7 = lVar7 + 0x10;
    } while (uVar9 < param_2);
  }
  *(uint *)(param_1 + 0x1f1c) = param_2;
  return;
}


