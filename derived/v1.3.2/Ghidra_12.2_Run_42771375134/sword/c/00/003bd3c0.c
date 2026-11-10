/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bd3c0; name: FUN_003bd3c0
 */


void FUN_003bd3c0(ulong *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  if (param_2 == 0) {
    puVar9 = (undefined8 *)0x0;
    uVar5 = (uint)param_1[1];
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    pcVar12 = *(code **)(*plVar6 + 0x10);
    plVar7 = (long *)FUN_00400d60();
    uVar8 = (**(code **)(*plVar7 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Cm::SpatialVectorV>::getName() [T = physx::Cm::SpatialVectorV]"
    ;
    if ((uVar8 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    puVar9 = (undefined8 *)
             (*pcVar12)(plVar6,(ulong)param_2 << 5,pcVar3,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar5 = (uint)param_1[1];
  }
  if (uVar5 != 0) {
    puVar2 = puVar9 + (ulong)uVar5 * 4;
    puVar10 = (undefined8 *)*param_1;
    puVar1 = puVar9 + 4;
    puVar4 = puVar2;
    if (puVar2 <= puVar1) {
      puVar4 = puVar1;
    }
    puVar11 = puVar9;
    if (((uint)((long)puVar4 + ~(ulong)puVar9) >> 5 & 1) == 0) {
      uVar13 = *puVar10;
      puVar9[1] = puVar10[1];
      *puVar9 = uVar13;
      puVar11 = puVar10 + 3;
      uVar13 = puVar10[2];
      puVar10 = puVar10 + 4;
      puVar9[3] = *puVar11;
      puVar9[2] = uVar13;
      puVar11 = puVar1;
    }
    if (0x1f < (long)puVar4 + ~(ulong)puVar9) {
      do {
        uVar13 = *puVar10;
        puVar11[1] = puVar10[1];
        *puVar11 = uVar13;
        uVar13 = puVar10[2];
        puVar11[3] = puVar10[3];
        puVar11[2] = uVar13;
        uVar13 = puVar10[4];
        puVar11[5] = puVar10[5];
        puVar11[4] = uVar13;
        puVar1 = puVar10 + 7;
        uVar13 = puVar10[6];
        puVar10 = puVar10 + 8;
        puVar11[7] = *puVar1;
        puVar11[6] = uVar13;
        puVar11 = puVar11 + 8;
      } while (puVar11 < puVar2);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar8 = *param_1, uVar8 != 0)) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar8);
  }
  *param_1 = (ulong)puVar9;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


