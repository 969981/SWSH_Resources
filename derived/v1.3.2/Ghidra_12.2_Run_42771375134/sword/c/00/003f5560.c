/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f5560; name: FUN_003f5560
 */


void FUN_003f5560(long *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  code *pcVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  
  if (param_2 == 0) {
    plVar5 = (long *)0x0;
    uVar4 = *(uint *)(param_1 + 1);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar11 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::DelegateTask<physx::Sc::Scene, &physx::Sc::Scene::ccdBroadPhase> >::getName() [T = physx::Cm::DelegateTask<physx::Sc::Scene, &physx::Sc::Scene::ccdBroadPhase>]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    plVar5 = (long *)(*pcVar11)(plVar5,(ulong)param_2 * 0x38,pcVar3,
                                "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 != 0) {
    puVar1 = PTR_DAT_02710dd8 + 0x10;
    puVar2 = PTR_DAT_02712950 + 0x10;
    plVar9 = (long *)(*param_1 + 0x28);
    plVar6 = plVar5;
    do {
      *plVar6 = (long)puVar1;
      plVar6[2] = plVar9[-3];
      plVar6[1] = plVar9[-4];
      plVar6[3] = plVar9[-2];
      *(int *)(plVar6 + 4) = (int)plVar9[-1];
      *plVar6 = (long)puVar2;
      plVar6[6] = plVar9[1];
      plVar6[5] = *plVar9;
      plVar6 = plVar6 + 7;
      plVar9 = plVar9 + 7;
    } while (plVar6 < plVar5 + (ulong)uVar4 * 7);
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) {
      puVar8 = (undefined8 *)*param_1;
      puVar12 = puVar8;
      do {
        puVar13 = puVar12 + 7;
        (**(code **)*puVar12)(puVar12);
        puVar12 = puVar13;
      } while (puVar13 < puVar8 + (ulong)uVar4 * 7);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar10 = *param_1, lVar10 != 0)) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
  }
  *param_1 = (long)plVar5;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


