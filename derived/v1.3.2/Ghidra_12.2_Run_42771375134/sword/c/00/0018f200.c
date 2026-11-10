/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0018f200; name: FUN_0018f200
 */


undefined8 FUN_0018f200(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  if (DAT_02736a88 == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ContextCpu>::getName() [T = physx::Pt::ContextCpu]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar5 = (*pcVar6)(plVar2,0xb8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtContextCpu.cpp"
                    ,0x6c);
                    /* try { // try from 0018f28c to 0018f297 has its CatchHandler @ 0018f2ac */
  FUN_0018f4c0(uVar5,param_1,param_2);
  return uVar5;
}


