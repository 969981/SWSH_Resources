/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ae420; name: FUN_003ae420
 */


void FUN_003ae420(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  uVar2 = FUN_003b35c0(*(undefined8 *)(param_1 + 0x28));
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)uVar2 * 0x14,"NonTrackedAlloc",
                       "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/SimulationController/src/cloth/ScClothCore.cpp"
                       ,0x8f);
    *(long *)(param_1 + 0x38) = lVar4;
    if (lVar4 != 0) {
      uVar7 = 0;
      do {
        FUN_001414c0(&local_68,uVar7);
        uVar1 = uVar7 & 0xffff;
        uVar7 = uVar7 + 1;
        puVar6 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)uVar1 * 0x14);
        *(undefined4 *)(puVar6 + 2) = local_58;
        puVar6[1] = local_60;
        *puVar6 = local_68;
      } while ((uVar7 & 0xffff) < uVar2);
      uVar5 = FUN_003b35b0(*(undefined8 *)(param_1 + 0x28));
      plVar3 = (long *)(**(code **)(**(long **)(*(long *)PTR_DAT_02711060 + 0x10) + 0x18))
                                 (*(long **)(*(long *)PTR_DAT_02711060 + 0x10),param_3,
                                  param_3 + (uVar5 & 0xffffffff) * 0x10,
                                  **(undefined8 **)(param_1 + 0x28));
      *(long **)(param_1 + 0x20) = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x68))(plVar3,param_2 + 0x10);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x70))(*(long **)(param_1 + 0x20),param_2);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x88))();
        (**(code **)(**(long **)(param_1 + 0x20) + 0x140))
                  (*(long **)(param_1 + 0x20),*(long *)(param_1 + 0x38),
                   *(long *)(param_1 + 0x38) + (ulong)uVar2 * 0x14);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x1a8))
                  (*(long **)(param_1 + 0x20),*(ushort *)(param_1 + 0x50) >> 2 & 1);
        (**(code **)(**(long **)(param_1 + 0x20) + 0x350))(*(long **)(param_1 + 0x20),param_1);
        fVar8 = *(float *)PTR_DAT_02712750;
        if (fVar8 <= DAT_01d4bbb0) {
          uVar2 = (uint)(int)(fVar8 * DAT_01d4bec0) / 5;
          if (199 < uVar2) {
            uVar2 = 200;
          }
          if (uVar2 < 2) {
            uVar2 = 1;
          }
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = (uint)(int)(fVar8 * DAT_01d4bec0) / uVar2;
          }
          uVar5 = (**(code **)(**(long **)(param_1 + 0x20) + 0x338))();
          (**(code **)(**(long **)(param_1 + 0x20) + 0x310))(*(long **)(param_1 + 0x20),uVar2);
          (**(code **)(**(long **)(param_1 + 0x20) + 800))(*(long **)(param_1 + 0x20),uVar7);
          if ((fVar8 == 0.0) && ((uVar5 & 1) != 0)) {
            (**(code **)(**(long **)(param_1 + 0x20) + 0x340))();
          }
        }
        else {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x310))(*(long **)(param_1 + 0x20),0xffffffff);
        }
      }
    }
  }
  return;
}


