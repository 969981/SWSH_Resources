/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f5b30; name: FUN_003f5b30
 */


long * FUN_003f5b30(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  code *pcVar14;
  
  uVar5 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    plVar6 = (long *)0x0;
    uVar4 = *(uint *)(param_1 + 1);
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar14 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::DelegateTask<physx::Sc::Scene, &physx::Sc::Scene::updateCCDSinglePass> >::getName() [T = physx::Cm::DelegateTask<physx::Sc::Scene, &physx::Sc::Scene::updateCCDSinglePass>]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    plVar6 = (long *)(*pcVar14)(plVar6,(ulong)uVar5 * 0x38,pcVar3,
                                "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    puVar1 = PTR_DAT_02710dd8 + 0x10;
    puVar2 = PTR_DAT_02712938 + 0x10;
    plVar10 = (long *)(*param_1 + 0x28);
    plVar7 = plVar6;
    do {
      *plVar7 = (long)puVar1;
      plVar7[2] = plVar10[-3];
      plVar7[1] = plVar10[-4];
      plVar7[3] = plVar10[-2];
      *(int *)(plVar7 + 4) = (int)plVar10[-1];
      *plVar7 = (long)puVar2;
      plVar7[6] = plVar10[1];
      plVar7[5] = *plVar10;
      plVar7 = plVar7 + 7;
      plVar10 = plVar10 + 7;
    } while (plVar7 < plVar6 + (ulong)uVar4 * 7);
    uVar8 = (ulong)*(uint *)(param_1 + 1);
  }
  plVar7 = plVar6 + uVar8 * 7;
  *plVar7 = (long)(PTR_DAT_02710dd8 + 0x10);
  plVar7[2] = *(long *)(param_2 + 0x10);
  plVar7[1] = *(long *)(param_2 + 8);
  plVar7[3] = *(long *)(param_2 + 0x18);
  *(undefined4 *)(plVar7 + 4) = *(undefined4 *)(param_2 + 0x20);
  *plVar7 = (long)(PTR_DAT_02712938 + 0x10);
  plVar7[6] = *(long *)(param_2 + 0x30);
  plVar7[5] = *(long *)(param_2 + 0x28);
  uVar4 = *(uint *)(param_1 + 1);
  if (uVar4 != 0) {
    puVar9 = (undefined8 *)*param_1;
    puVar12 = puVar9;
    do {
      puVar13 = puVar12 + 7;
      (**(code **)*puVar12)(puVar12);
      puVar12 = puVar13;
    } while (puVar13 < puVar9 + (ulong)uVar4 * 7);
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar11 = *param_1, lVar11 != 0)) {
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11);
  }
  uVar4 = *(uint *)(param_1 + 1);
  *param_1 = (long)plVar6;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  return plVar6 + (ulong)uVar4 * 7;
}


