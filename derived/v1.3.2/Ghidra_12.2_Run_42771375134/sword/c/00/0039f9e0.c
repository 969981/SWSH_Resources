/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039f9e0; name: FUN_0039f9e0
 */


void FUN_0039f9e0(long param_1,uint param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x328) = param_2;
  if (param_2 <= *(uint *)(param_1 + 0x32c) && *(uint *)(param_1 + 0x32c) >> 1 <= param_2) {
    return;
  }
  param_2 = param_2 | param_2 >> 1;
  param_2 = param_2 | param_2 >> 2;
  param_2 = param_2 | param_2 >> 4;
  param_2 = param_2 | param_2 >> 8;
  lVar4 = *(long *)(param_1 + 0x28);
  iVar1 = (param_2 | param_2 >> 0x10) + 1;
  *(int *)(param_1 + 0x32c) = iVar1;
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4);
  }
  if (iVar1 * 0x20 == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    uVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,iVar1 * 0x20,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                       ,0x1e4);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  if (iVar1 * 0x10 == 0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    uVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,iVar1 * 0x10,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SceneQuery/src/SqBucketPruner.cpp"
                       ,0x1e5);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  return;
}


