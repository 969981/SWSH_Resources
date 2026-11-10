/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ea0a0; name: FUN_003ea0a0
 */


undefined8 FUN_003ea0a0(long param_1,long param_2)

{
  uint uVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long local_58;
  ushort local_50 [4];
  ushort local_48 [4];
  ushort local_38 [2];
  char local_34 [4];
  
  lVar9 = *(long *)(param_2 + 0x20);
  FUN_003b17c0(local_38,param_2);
  if ((local_38[0] & 1) != 0) {
    uVar1 = local_38[0] & 1;
    if ((*(long *)(param_1 + (ulong)uVar1 * 8 + 0x928) != 0) &&
       (plVar3 = *(long **)(param_1 + (ulong)uVar1 * 8 + 0x948),
       lVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar9), lVar4 != 0)) {
      FUN_003b1b50(param_2,lVar4);
      lVar8 = 1;
      lVar9 = lVar4;
      goto LAB_003ea168;
    }
    uVar7 = FUN_00400880();
    FUN_00400890(uVar7,2,
                 "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                 ,0x1738,"GPU cloth creation failed. Falling back to CPU implementation.");
    FUN_003b17c0(local_50,param_2);
    local_48[0] = local_50[0] & ((ushort)uVar1 ^ 0xffff);
    FUN_003b1730(param_2,local_48);
  }
  lVar8 = 0;
LAB_003ea168:
  plVar3 = *(long **)(param_1 + lVar8 * 8 + 0x928);
  (**(code **)(*plVar3 + 0x10))(plVar3,lVar9);
  local_58 = param_2;
  plVar3 = (long *)FUN_003f7bd0(param_1 + 0x8f0,&local_58,local_34);
  if (local_34[0] == '\0') {
    *plVar3 = local_58;
  }
  plVar3 = (long *)FUN_00400d30();
  pcVar10 = *(code **)(*plVar3 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Sc::ClothSim>::getName() [T = physx::Sc::ClothSim]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  uVar7 = (*pcVar10)(plVar3,0xd0,pcVar2,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/ScScene.cpp"
                     ,0x1743);
                    /* try { // try from 003ea1f8 to 003ea203 has its CatchHandler @ 003ea220 */
  FUN_003b3e80(uVar7,param_1,param_2);
  return 1;
}


