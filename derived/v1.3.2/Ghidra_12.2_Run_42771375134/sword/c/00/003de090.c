/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003de090; name: FUN_003de090
 */


void FUN_003de090(long param_1,void *param_2,uint param_3)

{
  long *plVar1;
  void *__dest;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == (void *)0x0) {
    lVar3 = *(long *)(param_1 + 0x1050);
    if (lVar3 != 0) {
      plVar1 = (long *)FUN_00400d30();
      (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
      *(undefined8 *)(param_1 + 0x1050) = 0;
    }
    *(undefined8 *)(param_1 + 0x1058) = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x105c) < param_3) {
      plVar1 = (long *)FUN_00400d30();
      __dest = (void *)(**(code **)(*plVar1 + 0x10))
                                 (plVar1,param_3,"NonTrackedAlloc",
                                  "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                                  ,0x575);
      if (__dest == (void *)0x0) {
        uVar2 = FUN_00400880();
        FUN_00400890(uVar2,0x10,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                     ,0x57e,"Failed to allocate memory for filter shader data!");
        return;
      }
      lVar3 = *(long *)(param_1 + 0x1050);
      *(uint *)(param_1 + 0x105c) = param_3;
      if (lVar3 != 0) {
        plVar1 = (long *)FUN_00400d30();
        (**(code **)(*plVar1 + 0x18))(plVar1,lVar3);
      }
    }
    else {
      __dest = *(void **)(param_1 + 0x1050);
    }
    memcpy(__dest,param_2,(ulong)param_3);
    *(void **)(param_1 + 0x1050) = __dest;
    *(uint *)(param_1 + 0x1058) = param_3;
  }
  return;
}


