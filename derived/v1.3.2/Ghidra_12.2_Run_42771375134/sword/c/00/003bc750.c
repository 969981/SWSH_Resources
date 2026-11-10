/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bc750; name: FUN_003bc750
 */


undefined8 FUN_003bc750(undefined8 param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 auStack_3c [4];
  int local_38;
  undefined1 auStack_34 [4];
  
  FUN_003bbe20();
  FUN_00159890(*(undefined4 *)(param_2 + 0x20),auStack_34,&local_38,auStack_3c);
  if (local_38 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = (long *)FUN_00400d30();
    uVar2 = (**(code **)(*plVar1 + 0x10))
                      (plVar1,local_38,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScArticulationSim.cpp"
                       ,0x1a8);
  }
  thunk_FUN_00162030(param_1,uVar2,*(undefined4 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x18),
                     param_3,*(undefined8 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xf8));
  return uVar2;
}


