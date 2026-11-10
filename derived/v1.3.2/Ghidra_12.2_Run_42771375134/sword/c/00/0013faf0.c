/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0013faf0; name: FUN_0013faf0
 */


void FUN_0013faf0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  uVar1 = param_2 * 4 + 0xf;
  uVar2 = uVar1 & 0xfffffff0;
  if ((uVar1 & 0xfffffff0) == 0) {
    uVar4 = 0;
    *param_1 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    uVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,uVar2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                       ,0x67);
    *param_1 = uVar4;
    plVar3 = (long *)FUN_00400d30();
    uVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,uVar2,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                       ,0x68);
  }
  uVar1 = param_2 * 8 + 0xfU & 0xfffffff0;
  param_1[1] = uVar4;
  if (uVar1 == 0) {
    param_1[4] = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    uVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,uVar1,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                       ,0x69);
    param_1[4] = uVar4;
  }
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    uVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,uVar1,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseSapAux.cpp"
                       ,0x6a);
  }
  param_1[5] = uVar4;
  *(int *)((long)param_1 + 0x14) = param_2;
  *(int *)(param_1 + 3) = param_2;
  *(int *)((long)param_1 + 0x34) = param_2;
  return;
}


