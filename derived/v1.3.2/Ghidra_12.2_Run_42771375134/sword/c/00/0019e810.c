/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0019e810; name: FUN_0019e810
 */


void FUN_0019e810(long param_1,uint param_2)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  uVar5 = *(uint *)(param_1 + 0xe0);
  uVar9 = (ulong)param_2;
  if (param_2 < uVar5) {
    plVar3 = (long *)(param_1 + uVar9 * 0x58 + 0x138);
    do {
      lVar7 = plVar3[-2];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-2] = 0;
      }
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        *plVar3 = 0;
      }
      lVar7 = plVar3[-8];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-8] = 0;
      }
      lVar7 = plVar3[-10];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-10] = 0;
      }
      lVar7 = plVar3[-9];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-9] = 0;
      }
      lVar7 = plVar3[-5];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-5] = 0;
      }
      lVar7 = plVar3[-6];
      if (lVar7 != 0) {
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7);
        plVar3[-6] = 0;
      }
      lVar7 = plVar3[-3];
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + -8);
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7 - lVar6);
        plVar3[-3] = 0;
      }
      lVar7 = plVar3[-7];
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + -8);
        plVar2 = (long *)FUN_00400d30();
        (**(code **)(*plVar2 + 0x18))(plVar2,lVar7 - lVar6);
        plVar3[-7] = 0;
      }
      uVar5 = *(uint *)(param_1 + 0xe0);
      uVar9 = uVar9 + 1;
      plVar3 = plVar3 + 0xb;
    } while (uVar9 < uVar5);
  }
  if (uVar5 < param_2) {
    puVar10 = (undefined8 *)(param_1 + (ulong)uVar5 * 0x58 + 0x138);
    lVar7 = (ulong)param_2 - (ulong)uVar5;
    do {
      *(undefined4 *)(puVar10 + -4) = 0x400;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x4000,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0xfc);
      uVar5 = *(uint *)(puVar10 + -4);
      puVar10[-6] = uVar4;
      if (uVar5 == 0) {
        uVar4 = 0;
      }
      else {
        plVar3 = (long *)FUN_00400d30();
        uVar4 = (**(code **)(*plVar3 + 0x10))
                          (plVar3,(ulong)uVar5 << 4,"NonTrackedAlloc",
                           "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                           ,0xfe);
      }
      puVar10[-5] = uVar4;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x800,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0x102);
      puVar10[-10] = uVar4;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x800,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0x104);
      puVar10[-9] = uVar4;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x800,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0x106);
      puVar10[-8] = uVar4;
      plVar3 = (long *)FUN_00400d30();
      pcVar8 = *(code **)(*plVar3 + 0x10);
      plVar2 = (long *)FUN_00400d60();
      uVar9 = (**(code **)(*plVar2 + 0x28))();
      pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
      if ((uVar9 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar6 = (*pcVar8)(plVar3,0x4017,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                        ,0x108);
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = lVar6 + 0x17U & 0xfffffffffffffff0;
        *(ulong *)(uVar9 - 8) = uVar9 - lVar6;
      }
      puVar10[-7] = uVar9;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x400,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0x10b);
      *puVar10 = uVar4;
      plVar3 = (long *)FUN_00400d30();
      pcVar8 = *(code **)(*plVar3 + 0x10);
      plVar2 = (long *)FUN_00400d60();
      uVar9 = (**(code **)(*plVar2 + 0x28))();
      pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
      if ((uVar9 & 1) == 0) {
        pcVar1 = "<allocation names disabled>";
      }
      lVar6 = (*pcVar8)(plVar3,0x1847,pcVar1,
                        "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                        ,0x112);
      if (lVar6 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = lVar6 + 0x17U & 0xfffffffffffffff0;
        *(ulong *)(uVar9 - 8) = uVar9 - lVar6;
      }
      puVar10[-3] = uVar9;
      plVar3 = (long *)FUN_00400d30();
      uVar4 = (**(code **)(*plVar3 + 0x10))
                        (plVar3,0x200,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtDynamics.cpp"
                         ,0x115);
      puVar10[-2] = uVar4;
      puVar10[-1] = PTR_DAT_02710fe0;
      lVar7 = lVar7 + -1;
      puVar10 = puVar10 + 0xb;
    } while (lVar7 != 0);
  }
  *(uint *)(param_1 + 0xe0) = param_2;
  return;
}


