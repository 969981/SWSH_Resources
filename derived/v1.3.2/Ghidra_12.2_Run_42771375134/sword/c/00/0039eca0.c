/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039eca0; name: FUN_0039eca0
 */


undefined8 FUN_0039eca0(int *param_1,uint param_2)

{
  long *plVar1;
  void *__dest;
  void *__dest_00;
  void *__dest_01;
  void *__dest_02;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 + 1 == 0) {
    __dest = (void *)0x0;
    uVar3 = 0xffffffff;
  }
  else {
    plVar1 = (long *)FUN_00400d30();
    __dest = (void *)(**(code **)(*plVar1 + 0x10))
                               (plVar1,(ulong)(param_2 + 1) * 0x18,"NonTrackedAlloc",
                                "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningPool.cpp"
                                ,0x3d);
    if (param_2 == 0) {
      __dest_00 = (void *)0x0;
      __dest_01 = (void *)0x0;
      __dest_02 = (void *)0x0;
      goto LAB_0039eda4;
    }
    uVar3 = (ulong)param_2;
  }
  plVar1 = (long *)FUN_00400d30();
  __dest_00 = (void *)(**(code **)(*plVar1 + 0x10))
                                (plVar1,uVar3 << 4,"NonTrackedAlloc",
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningPool.cpp"
                                 ,0x3e);
  plVar1 = (long *)FUN_00400d30();
  __dest_01 = (void *)(**(code **)(*plVar1 + 0x10))
                                (plVar1,uVar3 << 2,"NonTrackedAlloc",
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningPool.cpp"
                                 ,0x3f);
  plVar1 = (long *)FUN_00400d30();
  __dest_02 = (void *)(**(code **)(*plVar1 + 0x10))
                                (plVar1,uVar3 << 2,"NonTrackedAlloc",
                                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqPruningPool.cpp"
                                 ,0x40);
LAB_0039eda4:
  if (((__dest == (void *)0x0 || __dest_00 == (void *)0x0) || __dest_01 == (void *)0x0) ||
      __dest_02 == (void *)0x0) {
    if (__dest != (void *)0x0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,__dest);
    }
    if (__dest_00 != (void *)0x0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,__dest_00);
    }
    if (__dest_01 != (void *)0x0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,__dest_01);
    }
    if (__dest_02 != (void *)0x0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,__dest_02);
    }
    uVar2 = 0;
  }
  else {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      memcpy(__dest,*(void **)(param_1 + 2),(ulong)(uint)(*param_1 * 0x18));
    }
    if (*(void **)(param_1 + 4) != (void *)0x0) {
      memcpy(__dest_00,*(void **)(param_1 + 4),(ulong)(uint)(*param_1 << 4));
    }
    if (*(void **)(param_1 + 8) != (void *)0x0) {
      memcpy(__dest_01,*(void **)(param_1 + 8),(ulong)(uint)(*param_1 << 2));
    }
    if (*(void **)(param_1 + 6) != (void *)0x0) {
      memcpy(__dest_02,*(void **)(param_1 + 6),(ulong)(uint)(param_1[1] << 2));
    }
    param_1[1] = param_2;
    lVar4 = *(long *)(param_1 + 2);
    if (lVar4 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
    }
    lVar4 = *(long *)(param_1 + 4);
    param_1[2] = 0;
    param_1[3] = 0;
    if (lVar4 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
    }
    lVar4 = *(long *)(param_1 + 6);
    param_1[4] = 0;
    param_1[5] = 0;
    if (lVar4 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
    }
    lVar4 = *(long *)(param_1 + 8);
    param_1[6] = 0;
    param_1[7] = 0;
    if (lVar4 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar4);
    }
    uVar2 = 1;
    *(void **)(param_1 + 2) = __dest;
    *(void **)(param_1 + 4) = __dest_00;
    *(void **)(param_1 + 6) = __dest_02;
    *(void **)(param_1 + 8) = __dest_01;
  }
  return uVar2;
}


