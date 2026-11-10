/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c6f90; name: FUN_001c6f90
 */


void FUN_001c6f90(ulong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  
  if (param_2 == 0) {
    puVar8 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar14 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::PxActor *>::getName() [T = physx::PxActor *]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    puVar8 = (undefined8 *)
             (*pcVar14)(plVar5,(ulong)param_2 << 3,pcVar3,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 != 0) {
    puVar2 = puVar8 + uVar1;
    puVar4 = puVar2;
    if (puVar2 <= puVar8 + 1) {
      puVar4 = puVar8 + 1;
    }
    puVar9 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar4 + ~(ulong)puVar8 >> 3) & 0x1fffffff) + 1;
    puVar12 = puVar8;
    if ((uVar1 & 3) != 0) {
      lVar13 = -((ulong)uVar1 & 3);
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
    if (0x17 < (long)puVar4 + ~(ulong)puVar8) {
      do {
        *puVar12 = *puVar9;
        puVar12[1] = puVar9[1];
        puVar12[2] = puVar9[2];
        puVar12[3] = puVar9[3];
        puVar12 = puVar12 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar12 < puVar2);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar7 = *param_1, uVar7 != 0)) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar7);
  }
  *param_1 = (ulong)puVar8;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


