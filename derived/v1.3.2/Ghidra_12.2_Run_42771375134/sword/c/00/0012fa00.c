/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012fa00; name: FUN_0012fa00
 */


void FUN_0012fa00(undefined4 *param_1,undefined4 param_2,ulong param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  code *pcVar5;
  
  plVar2 = (long *)0x0;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[8] = 0xffffffff;
  if ((param_3 & 1) != 0) {
                    /* try { // try from 0012fa38 to 0012fa87 has its CatchHandler @ 0012facc */
    plVar2 = (long *)FUN_00400d30();
    pcVar5 = *(code **)(*plVar2 + 0x10);
    plVar3 = (long *)FUN_00400d60();
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::PersistentSelfCollisionPairs>::getName() [T = physx::Bp::PersistentSelfCollisionPairs]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    plVar2 = (long *)(*pcVar5)(plVar2,0x50,pcVar1,
                               "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpSimpleAABBManager.cpp"
                               ,0x530);
    *(undefined4 *)(plVar2 + 1) = 0xffffffff;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar2[6] = 0;
    *(undefined4 *)(plVar2 + 7) = 0;
    *(undefined1 *)(plVar2 + 8) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *plVar2 = (long)(PTR_DAT_02710ca0 + 0x10);
    plVar2[9] = (long)param_1;
  }
  *(long **)(param_1 + 6) = plVar2;
  return;
}


