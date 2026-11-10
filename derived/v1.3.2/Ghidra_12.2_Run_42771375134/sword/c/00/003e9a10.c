/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9a10; name: FUN_003e9a10
 */


int FUN_003e9a10(long param_1)

{
  char *pcVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *local_28;
  
  plVar3 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::Client>::getName() [T = physx::Sc::Client]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  local_28 = (undefined8 *)
             (*pcVar7)(plVar3,0x58,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                       ,0x15b4);
  *local_28 = 0;
  local_28[1] = 0;
  *(undefined1 *)(local_28 + 8) = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[9] = 0;
  local_28[10] = 0;
  uVar2 = *(uint *)(param_1 + 0x10f8);
  if (uVar2 < (*(uint *)(param_1 + 0x10fc) & 0x7fffffff)) {
    *(undefined8 **)(*(long *)(param_1 + 0x10f0) + (ulong)uVar2 * 8) = local_28;
    iVar6 = uVar2 + 1;
    *(int *)(param_1 + 0x10f8) = iVar6;
  }
  else {
    FUN_003f1910(param_1 + 0x10f0,&local_28);
    iVar6 = *(int *)(param_1 + 0x10f8);
  }
  return iVar6 + 0xff;
}


