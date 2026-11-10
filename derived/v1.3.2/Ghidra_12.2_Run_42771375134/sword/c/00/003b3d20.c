/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b3d20; name: FUN_003b3d20
 */


void FUN_003b3d20(long *param_1,uint param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long lVar13;
  code *pcVar14;
  
  if (param_2 == 0) {
    puVar8 = (undefined4 *)0x0;
    uVar4 = *(uint *)(param_1 + 1);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar14 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxClothFabricPhaseType::Enum>::getName() [T = physx::PxClothFabricPhaseType::Enum]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    puVar8 = (undefined4 *)
             (*pcVar14)(plVar5,(ulong)param_2 << 2,pcVar2,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 != 0) {
    puVar1 = puVar8 + uVar4;
    puVar3 = puVar1;
    if (puVar1 <= puVar8 + 1) {
      puVar3 = puVar8 + 1;
    }
    puVar9 = (undefined4 *)*param_1;
    uVar4 = ((uint)((long)puVar3 + ~(ulong)puVar8 >> 2) & 0x3fffffff) + 1;
    puVar12 = puVar8;
    if ((uVar4 & 3) != 0) {
      lVar13 = -((ulong)uVar4 & 3);
      puVar10 = puVar9;
      puVar11 = puVar8;
      do {
        puVar9 = puVar10 + 1;
        lVar13 = lVar13 + 1;
        puVar12 = puVar11 + 1;
        *puVar11 = *puVar10;
        puVar10 = puVar9;
        puVar11 = puVar12;
      } while (lVar13 != 0);
    }
    if (0xb < (long)puVar3 + ~(ulong)puVar8) {
      do {
        *puVar12 = *puVar9;
        puVar12[1] = puVar9[1];
        puVar12[2] = puVar9[2];
        puVar12[3] = puVar9[3];
        puVar12 = puVar12 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar12 < puVar1);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar13 = *param_1, lVar13 != 0)) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar13);
  }
  *param_1 = (long)puVar8;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


