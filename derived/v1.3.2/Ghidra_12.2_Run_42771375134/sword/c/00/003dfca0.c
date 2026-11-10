/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003dfca0; name: FUN_003dfca0
 */


void FUN_003dfca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 local_48;
  char local_34 [4];
  
  plVar2 = (long *)FUN_00400d30();
  pcVar6 = *(code **)(*plVar2 + 0x10);
  plVar3 = (long *)FUN_00400d60();
  uVar4 = (**(code **)(*plVar3 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ArticulationSim>::getName() [T = physx::Sc::ArticulationSim]"
  ;
  if ((uVar4 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  plVar2 = (long *)(*pcVar6)(plVar2,0x118,pcVar1,
                             "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                             ,0x6c6);
                    /* try { // try from 003dfd18 to 003dfd27 has its CatchHandler @ 003dfd94 */
  FUN_003baee0(plVar2,param_2,param_1,param_3);
  if ((plVar2 == (long *)0x0) || (*plVar2 != 0)) {
    local_48 = param_2;
    puVar5 = (undefined8 *)FUN_003f41b0(param_1 + 0x868,&local_48,local_34);
    if (local_34[0] == '\0') {
      *puVar5 = local_48;
    }
  }
  else {
    FUN_003bb930(plVar2);
                    /* try { // try from 003dfd64 to 003dfd77 has its CatchHandler @ 003dfd90 */
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,plVar2);
  }
  return;
}


