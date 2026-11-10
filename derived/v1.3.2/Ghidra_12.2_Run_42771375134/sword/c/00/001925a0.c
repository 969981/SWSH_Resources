/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001925a0; name: FUN_001925a0
 */


void FUN_001925a0(long param_1)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(int *)(*(long *)(param_1 + 0x10) + 0x14) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + 0xc);
    plVar4 = (long *)FUN_00400d30();
    pcVar9 = *(code **)(*plVar4 + 0x10);
    plVar5 = (long *)FUN_00400d60();
    uVar6 = (**(code **)(*plVar5 + 0x28))();
    pcVar1 = "static const char *physx::shdfnd::ReflectionAllocator<char>::getName() [T = char]";
    if ((uVar6 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar7 = (*pcVar9)(plVar4,(ulong)uVar2 * 4 + 0x17,pcVar1,
                      "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/LowLevelParticles/src/PtParticleSystemSimCpu.cpp"
                      ,0xac);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 0x16);
    }
    else {
      uVar6 = lVar7 + 0x17U & 0xfffffffffffffff0;
      *(ulong *)(uVar6 - 8) = uVar6 - lVar7;
      *(ulong *)(param_1 + 0x40) = uVar6;
      bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 0x16);
    }
  }
  else {
    bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 0x16);
  }
  if ((bVar3 & 1) == 0) {
    lVar7 = param_1 + 0x710;
    (**(code **)(*(long *)(param_1 + 0x710) + 0x20))(lVar7);
  }
  else {
    *(undefined4 *)(param_1 + 0x810) = 1;
    *(long *)(param_1 + 0x808) = param_1 + 0x710;
    lVar7 = param_1 + 0x7f0;
    (**(code **)(*(long *)(param_1 + 0x710) + 0x20))();
    *(undefined8 *)(param_1 + 0x800) = *(undefined8 *)(*(long *)(param_1 + 0x808) + 0x10);
  }
  lVar8 = *(long *)(param_1 + 0x10);
  FUN_00194060(*(undefined8 *)(param_1 + 0x88),param_1 + 0x48,*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(lVar8 + 0x38),lVar8 + 0x48,*(undefined4 *)(lVar8 + 0x14),lVar7);
  return;
}


