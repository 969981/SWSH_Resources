/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00401dd0; name: FUN_00401dd0
 */


undefined8 FUN_00401dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  plVar2 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::PxTaskMgr>::getName() [T = physx::PxTaskMgr]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar5 = (*pcVar6)(plVar2,0x98,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/task/src/TaskManager.cpp"
                    ,0xc1);
                    /* try { // try from 00401e44 to 00401e53 has its CatchHandler @ 00401e6c */
  FUN_00401ea0(uVar5,param_1,param_2,param_3);
  return uVar5;
}


