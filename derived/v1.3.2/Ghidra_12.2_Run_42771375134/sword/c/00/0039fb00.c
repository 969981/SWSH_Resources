/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039fb00; name: FUN_0039fb00
 */


void FUN_0039fb00(int *param_1)

{
  int iVar1;
  long *plVar2;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  void *__src;
  long lVar3;
  
  iVar1 = 0x20;
  if (param_1[1] != 0) {
    iVar1 = param_1[1] << 1;
  }
  param_1[1] = iVar1;
  if (iVar1 * 0x18 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar2 + 0x10))
                               (plVar2,iVar1 * 0x18,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                                ,0x1f5);
  }
  if (iVar1 << 4 == 0) {
    __dest_00 = (void *)0x0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    __dest_00 = (void *)(**(code **)(*plVar2 + 0x10))
                                  (plVar2,iVar1 << 4,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                                   ,0x1f6);
  }
  if (iVar1 << 2 == 0) {
    __dest_01 = (void *)0x0;
    __src = *(void **)(param_1 + 2);
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    __dest_01 = (void *)(**(code **)(*plVar2 + 0x10))
                                  (plVar2,iVar1 << 2,"NonTrackedAlloc",
                                   "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                                   ,0x1f7);
    __src = *(void **)(param_1 + 2);
  }
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,(ulong)(uint)(*param_1 * 0x18));
    lVar3 = *(long *)(param_1 + 2);
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    memcpy(__dest_00,*(void **)(param_1 + 4),(ulong)(uint)(*param_1 << 4));
    lVar3 = *(long *)(param_1 + 4);
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
  }
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    memcpy(__dest_01,*(void **)(param_1 + 6),(ulong)(uint)(*param_1 << 2));
    lVar3 = *(long *)(param_1 + 6);
    if (lVar3 != 0) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar3);
    }
  }
  *(void **)(param_1 + 2) = __dest;
  *(void **)(param_1 + 4) = __dest_00;
  *(void **)(param_1 + 6) = __dest_01;
  return;
}


