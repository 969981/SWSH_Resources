/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9f20; name: FUN_003e9f20
 */


void FUN_003e9f20(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_40;
  char local_34 [4];
  
  plVar2 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ParticleSystemSim>::getName() [T = physx::Sc::ParticleSystemSim]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar5 = (*pcVar8)(plVar2,0x2e8,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                    ,0x16e8);
                    /* try { // try from 003e9f90 to 003e9f9b has its CatchHandler @ 003ea008 */
  FUN_003aa2a0(lVar5,param_1,param_2);
  if (lVar5 == 0) {
    uVar7 = FUN_00400880();
    FUN_00400890(uVar7,0x20,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                 ,0x16ec,"PxScene::addParticleSystem() failed.");
    return;
  }
  local_40 = param_2;
  puVar6 = (undefined8 *)FUN_003f7900(param_1 + 0x8a8,&local_40,local_34);
  if (local_34[0] == '\0') {
    *puVar6 = local_40;
  }
  return;
}


