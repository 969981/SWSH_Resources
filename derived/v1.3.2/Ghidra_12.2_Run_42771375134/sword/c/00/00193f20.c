/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00193f20; name: FUN_00193f20
 */


void FUN_00193f20(undefined4 param_1,undefined8 *param_2,uint param_3,undefined4 param_4,
                 ulong param_5)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_2 + 1) = 0;
  *(uint *)((long)param_2 + 0xc) = param_3;
  *(undefined4 *)(param_2 + 2) = param_1;
  *(undefined4 *)((long)param_2 + 0x14) = param_4;
  param_2[3] = 0;
  if (param_3 + 1 == 0) {
    *param_2 = 0;
  }
  else {
    plVar1 = (long *)FUN_00400d30();
    uVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,(ulong)(param_3 + 1) << 4,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtSpatialHash.cpp"
                       ,0x36);
    *param_2 = uVar2;
  }
  if ((param_5 & 1) == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)FUN_00400d30();
    uVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,(ulong)param_3 * 0xd8,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtSpatialHash.cpp"
                       ,0x3a);
  }
  param_2[3] = uVar2;
  return;
}


