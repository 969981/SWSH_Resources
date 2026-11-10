/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00397850; name: FUN_00397850
 */


void FUN_00397850(undefined8 *param_1,uint *param_2)

{
  char *pcVar1;
  long *plVar2;
  void *__dest;
  long *plVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  code *pcVar7;
  
  uVar6 = param_2[4];
  if (uVar6 == 0) {
    __dest = (void *)0x0;
    uVar6 = 0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,(ulong)uVar6 << 2,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                                ,0xa6);
    uVar6 = param_2[4];
  }
  *param_1 = __dest;
  *(uint *)(param_1 + 1) = uVar6;
  memcpy(__dest,*(void **)(param_2 + 6),(ulong)(uVar6 << 2));
  uVar6 = *param_2;
  plVar2 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sq::AABBTreeRuntimeNode>::getName() [T = physx::Sq::AABBTreeRuntimeNode]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  puVar5 = (ulong *)(*pcVar7)(plVar2,(ulong)uVar6 * 0x1c + 8,pcVar1,
                              "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqAABBTree.cpp"
                              ,0xab);
  *puVar5 = (ulong)uVar6;
  param_1[2] = puVar5 + 1;
  uVar6 = *param_2;
  *(uint *)(param_1 + 8) = uVar6;
  memcpy(puVar5 + 1,*(void **)(param_2 + 2),(ulong)(uVar6 * 0x1c));
  return;
}


