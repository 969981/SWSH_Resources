/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001362c0; name: FUN_001362c0
 */


undefined8
FUN_001362c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined8 param_6)

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
  if (param_1 == 1) {
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::BroadPhaseMBP>::getName() [T = physx::Bp::BroadPhaseMBP]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar5 = (*pcVar6)(plVar2,0xd0,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhase.cpp"
                      ,0x32);
                    /* try { // try from 0013634c to 00136363 has its CatchHandler @ 001363e8 */
    FUN_0013ae00(uVar5,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::BroadPhaseSap>::getName() [T = physx::Bp::BroadPhaseSap]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    uVar5 = (*pcVar6)(plVar2,0x2b0,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhase.cpp"
                      ,0x34);
                    /* try { // try from 00136394 to 001363a7 has its CatchHandler @ 001363c4 */
    FUN_0013c430(uVar5,param_3,param_4,param_5,param_6);
  }
  return uVar5;
}


