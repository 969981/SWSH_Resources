/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff610; name: FUN_003ff610
 */


void FUN_003ff610(long *param_1)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  ulong uVar5;
  MutexType *pMVar6;
  code *pcVar7;
  
  plVar2 = (long *)FUN_00400d30();
  puVar3 = (undefined8 *)
           (**(code **)(*plVar2 + 0x10))
                     (plVar2,0x10,"NonTrackedAlloc",
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PxShared/src/foundation/src/switch/PsSwitchMutex.cpp"
                      ,0x7c);
  *param_1 = (long)puVar3;
  plVar2 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar2 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::shdfnd::MutexImpl>::getName() [T = physx::shdfnd::MutexImpl]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  pMVar6 = (MutexType *)(*pcVar7)(plVar2,0x28,pcVar1,"./../../foundation/include/PsMutex.h",0x71);
  *puVar3 = pMVar6;
  nn::os::InitializeMutex(pMVar6,true,0);
  *(undefined4 *)(puVar3 + 1) = 0;
  return;
}


