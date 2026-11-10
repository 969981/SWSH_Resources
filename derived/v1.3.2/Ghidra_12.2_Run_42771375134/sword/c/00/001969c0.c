/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001969c0; name: FUN_001969c0
 */


ulong FUN_001969c0(int param_1,uint param_2)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  iVar2 = param_1 << 2;
  if ((param_2 & 1) == 0) {
    iVar2 = 0;
  }
  plVar3 = (long *)FUN_00400d30();
  pcVar7 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = 
  "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleData>::getName() [T = physx::Pt::ParticleData]"
  ;
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar6 = (*pcVar7)(plVar3,(ulong)(iVar2 + param_1 * 0x20 +
                                   ((param_1 + 0x1fU >> 3 & 0x1ffffffc) + 0xf & 0x3ffffff0) + 0x60)
                           + 0x17,pcVar1,
                    "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleData.cpp"
                    ,0xf5);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = lVar6 + 0x17U & 0xfffffffffffffff0;
    *(ulong *)(uVar5 - 8) = uVar5 - lVar6;
  }
  FUN_00195c20(uVar5,param_1,param_2 & 1);
  return uVar5;
}


