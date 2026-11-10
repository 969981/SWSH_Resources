/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dfe20; name: FUN_003dfe20
 */


void FUN_003dfe20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  plVar2 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ArticulationJointSim>::getName() [T = physx::Sc::ArticulationJointSim]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  uVar5 = (*pcVar8)(plVar2,0x30,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                    ,0x6da);
                    /* try { // try from 003dfe94 to 003dfebb has its CatchHandler @ 003dfed0 */
  uVar6 = FUN_003bd8a0(param_3);
  uVar7 = FUN_003bd8a0(param_4);
  FUN_003f85c0(uVar5,param_2,uVar6,uVar7);
  return;
}


