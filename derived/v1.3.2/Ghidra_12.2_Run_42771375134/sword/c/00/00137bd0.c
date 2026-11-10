/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00137bd0; name: FUN_00137bd0
 */


void FUN_00137bd0(long param_1,uint param_2,int param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  
  if (*(uint *)(param_1 + 0x3200) < param_2) {
    lVar6 = *(long *)(param_1 + 0x3208);
    if ((lVar6 != param_1 + 0x3000) && (lVar6 != 0)) {
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6);
      *(undefined8 *)(param_1 + 0x3208) = 0;
    }
    lVar6 = *(long *)(param_1 + 0x3210);
    if ((lVar6 != param_1) && (lVar6 != 0)) {
                    /* try { // try from 00137c38 to 00137c4b has its CatchHandler @ 00137d10 */
      plVar2 = (long *)FUN_00400d30();
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar6);
      *(undefined8 *)(param_1 + 0x3210) = 0;
    }
    if (param_3 + param_2 < 0x101) {
      *(long *)(param_1 + 0x3210) = param_1;
      *(long *)(param_1 + 0x3208) = param_1 + 0x3000;
    }
    else {
      plVar2 = (long *)FUN_00400d30();
      pcVar7 = *(code **)(*plVar2 + 0x10);
      plVar3 = (long *)FUN_00400d60();
      uVar4 = (**(code **)(*plVar3 + 0x28))();
      pcVar1 = 
      "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::IAABB>::getName() [T = physx::Bp::IAABB]"
      ;
      if ((uVar4 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      uVar5 = (*pcVar7)(plVar2,(ulong)(param_3 + param_2) * 0x18,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                        ,0x60d);
      *(undefined8 *)(param_1 + 0x3210) = uVar5;
      plVar2 = (long *)FUN_00400d30();
      uVar5 = (**(code **)(*plVar2 + 0x10))
                        (plVar2,(ulong)param_2 << 1,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelAABB/src/BpBroadPhaseMBP.cpp"
                         ,0x60e);
      *(undefined8 *)(param_1 + 0x3208) = uVar5;
    }
    *(uint *)(param_1 + 0x3200) = param_2;
  }
  return;
}


