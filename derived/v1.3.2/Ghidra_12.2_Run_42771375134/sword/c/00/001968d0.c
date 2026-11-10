/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001968d0; name: FUN_001968d0
 */


ulong FUN_001968d0(int *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  iVar3 = *param_1;
  iVar1 = 0;
  if (*(long *)(param_1 + 0x12) != 0) {
    iVar1 = iVar3 << 2;
  }
  plVar4 = (long *)FUN_00400d30();
  pcVar8 = *(code **)(*plVar4 + 0x10);
  plVar5 = (long *)FUN_00400d60();
  uVar6 = (**(code **)(*plVar5 + 0x28))();
  pcVar2 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleData>::getName() [T = physx::Pt::ParticleData]"
  ;
  if ((uVar6 & 1) == 0) {
    pcVar2 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar8)(plVar4,(ulong)(iVar1 + iVar3 * 0x20 +
                                   ((iVar3 + 0x1fU >> 3 & 0x1ffffffc) + 0xf & 0x3ffffff0) + 0x60) +
                           0x17,pcVar2,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleData.cpp"
                    ,0xe9);
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = lVar7 + 0x17U & 0xfffffffffffffff0;
    *(ulong *)(uVar6 - 8) = uVar6 - lVar7;
  }
  FUN_00195d10(uVar6,param_1,param_2);
  return uVar6;
}


