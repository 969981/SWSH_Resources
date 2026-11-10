/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00192e30; name: FUN_00192e30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00192e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  code *pcVar11;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_00196280(param_2);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined4 *)(param_1 + 0x6d0) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_00193300(param_1);
  uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0xc);
  lVar7 = uVar10 * 0x10 + 0x17;
  plVar3 = (long *)FUN_00400d30();
  pcVar11 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar6 = (*pcVar11)(plVar3,lVar7,pcVar1,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                     ,0x160);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = lVar6 + 0x17U & 0xfffffffffffffff0;
    *(ulong *)(uVar5 - 8) = uVar5 - lVar6;
  }
  *(ulong *)(param_1 + 0x50) = uVar5;
  plVar3 = (long *)FUN_00400d30();
  pcVar11 = *(code **)(*plVar3 + 0x10);
  plVar4 = (long *)FUN_00400d60();
  uVar5 = (**(code **)(*plVar4 + 0x28))();
  pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
  if ((uVar5 & 1) == 0) {
    pcVar1 = "<allocation names disabled>";
  }
  lVar7 = (*pcVar11)(plVar3,lVar7,pcVar1,
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                     ,0x162);
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    lVar7 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(lVar7 + 0x14);
  }
  else {
    uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
    *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
    *(ulong *)(param_1 + 0x58) = uVar5;
    lVar7 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(lVar7 + 0x14);
  }
  if ((uVar9 >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    lVar7 = uVar10 * 0x18 + 0x17;
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar6 = (*pcVar11)(plVar3,lVar7,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x166);
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = lVar6 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar6;
    }
    *(ulong *)(param_1 + 0x60) = uVar5;
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar11)(plVar3,lVar7,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x168);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
    }
    *(ulong *)(param_1 + 0x68) = uVar5;
    lVar7 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(lVar7 + 0x14);
  }
  if ((~uVar9 & 3) == 0) {
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar11)(plVar3,uVar10 * 0x18 + 0x17,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x173);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
    }
    *(ulong *)(param_1 + 0x28) = uVar5;
    lVar7 = *(long *)(param_1 + 0x18);
    uVar9 = *(uint *)(lVar7 + 0x14);
  }
  if ((uVar9 >> 5 & 1) != 0) {
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar11)(plVar3,uVar10 * 0x28 + 0x17,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x183);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x70) = 0;
      lVar7 = *(long *)(param_1 + 0x18);
      uVar9 = *(uint *)(lVar7 + 0x14);
    }
    else {
      uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
      *(ulong *)(param_1 + 0x70) = uVar5;
      lVar7 = *(long *)(param_1 + 0x18);
      uVar9 = *(uint *)(lVar7 + 0x14);
    }
  }
  if (((uVar9 >> 0x10 & 1) != 0) || (uVar2 = *(ushort *)(lVar7 + 0x50), (uVar2 >> 4 & 1) != 0)) {
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar11)(plVar3,uVar10 * 0xc + 0x17,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x18d);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
      uVar2 = *(ushort *)(*(long *)(param_1 + 0x18) + 0x50);
    }
    else {
      uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
      *(ulong *)(param_1 + 0x78) = uVar5;
      uVar2 = *(ushort *)(*(long *)(param_1 + 0x18) + 0x50);
    }
  }
  if ((uVar2 >> 5 & 1) != 0) {
    plVar3 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar3 + 0x10);
    plVar4 = (long *)FUN_00400d60();
    uVar5 = (**(code **)(*plVar4 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar5 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar11)(plVar3,uVar10 * 0xc + 0x17,pcVar1,
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                       ,0x191);
    if (lVar7 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar5 - 8) = uVar5 - lVar7;
    }
    *(ulong *)(param_1 + 0x80) = uVar5;
  }
  plVar3 = (long *)FUN_00400d30();
  uVar8 = (**(code **)(*plVar3 + 0x10))
                    (plVar3,0x4000,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                     ,0x194);
  *(undefined8 *)(param_1 + 0x30) = uVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = (long *)FUN_00400d30();
  lVar7 = (**(code **)(*plVar3 + 0x10))
                    (plVar3,0x20,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                     ,0x199);
  *(long *)(param_1 + 0x88) = lVar7;
  if (lVar7 != 0) {
    FUN_00193f20(*(undefined4 *)(param_1 + 0x9c),lVar7,0x400,
                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x18),
                 *(uint *)(*(long *)(param_1 + 0x18) + 0x14) >> 0x10 & 1);
  }
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


