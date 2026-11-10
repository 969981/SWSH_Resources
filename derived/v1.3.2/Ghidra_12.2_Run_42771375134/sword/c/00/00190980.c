/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190980; name: FUN_00190980
 */


undefined8 FUN_00190980(uint *param_1)

{
  char *pcVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  
  if ((param_1[2] == param_1[1]) || (uVar7 = *param_1, uVar7 == 0)) {
    uVar6 = 0;
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar2 + 0x10);
    plVar3 = (long *)FUN_00400d60();
    uVar4 = (**(code **)(*plVar3 + 0x28))();
    pcVar1 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleSystemSimCpu>::getName() [T = physx::Pt::ParticleSystemSimCpu]"
    ;
    if ((uVar4 & 1) == 0) {
      pcVar1 = "<allocation names disabled>";
    }
    lVar5 = (*pcVar11)(plVar2,(ulong)uVar7 * 0x850,pcVar1,"./../../Common/src\\CmPool.h",0xec);
    uVar6 = 0;
    if (lVar5 != 0) {
      uVar10 = param_1[2];
      uVar7 = uVar10 + 1;
      param_1[2] = uVar7;
      *(long *)(*(long *)(param_1 + 8) + (ulong)uVar10 * 8) = lVar5;
      uVar10 = *param_1;
      if (param_1[0xe] << 5 < uVar10 * uVar7) {
        FUN_00190b50(param_1 + 0xc,uVar7 * uVar10 * 2);
        lVar9 = *(long *)(param_1 + 4);
        if (lVar9 != 0) {
          plVar2 = (long *)FUN_00400d30();
          (**(code **)(*plVar2 + 0x18))(plVar2,lVar9);
        }
        uVar7 = param_1[2];
        uVar10 = *param_1;
        uVar12 = uVar7 * uVar10 * 2;
        if (uVar12 == 0) {
          uVar6 = 0;
        }
        else {
          plVar2 = (long *)FUN_00400d30();
          pcVar11 = *(code **)(*plVar2 + 0x10);
          plVar3 = (long *)FUN_00400d60();
          uVar4 = (**(code **)(*plVar3 + 0x28))();
          pcVar1 = 
          "static const char *physx::shdfnd::ReflectionAllocator<physx::Pt::ParticleSystemSimCpu>::getName() [T = physx::Pt::ParticleSystemSimCpu]"
          ;
          if ((uVar4 & 1) == 0) {
            pcVar1 = "<allocation names disabled>";
          }
          uVar6 = (*pcVar11)(plVar2,(ulong)uVar12 << 3,pcVar1,"./../../Common/src\\CmPool.h",0xf9);
          uVar7 = param_1[2];
          uVar10 = *param_1;
        }
        *(undefined8 *)(param_1 + 4) = uVar6;
      }
      uVar12 = param_1[6];
      iVar13 = uVar10 - 1;
      if (-1 < iVar13) {
        iVar8 = uVar10 * uVar7;
        lVar5 = lVar5 + (long)iVar13 * 0x850;
        uVar7 = uVar12;
        do {
          iVar8 = iVar8 + -1;
          FUN_00192b60(lVar5,*(undefined8 *)(param_1 + 10),iVar8);
          *(long *)(*(long *)(param_1 + 4) + (ulong)uVar7 * 8) = lVar5;
          uVar7 = uVar7 + 1;
          iVar13 = iVar13 + -1;
          lVar5 = lVar5 + -0x850;
        } while (-1 < iVar13);
        uVar12 = uVar10 + uVar12;
      }
      uVar6 = 1;
      param_1[6] = uVar12;
    }
  }
  return uVar6;
}


