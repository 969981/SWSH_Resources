/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001ffd20; name: FUN_001ffd20
 */


undefined8 * FUN_001ffd20(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  
  uVar4 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    puVar8 = (undefined8 *)0x0;
    uVar10 = (uint)param_1[1];
    puVar9 = (undefined8 *)((ulong)uVar10 << 3);
  }
  else {
    plVar5 = (long *)FUN_00400d30();
    pcVar16 = *(code **)(*plVar5 + 0x10);
    plVar6 = (long *)FUN_00400d60();
    uVar7 = (**(code **)(*plVar6 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::NpVolumeCache *>::getName() [T = physx::NpVolumeCache *]"
    ;
    if ((uVar7 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    puVar8 = (undefined8 *)
             (*pcVar16)(plVar5,(ulong)uVar4 << 3,pcVar2,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar10 = (uint)param_1[1];
    puVar9 = puVar8 + uVar10;
  }
  if (uVar10 != 0) {
    puVar3 = puVar9;
    if (puVar9 <= puVar8 + 1) {
      puVar3 = puVar8 + 1;
    }
    puVar11 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar3 + ~(ulong)puVar8 >> 3) & 0x1fffffff) + 1;
    puVar14 = puVar8;
    if ((uVar1 & 3) != 0) {
      lVar15 = -((ulong)uVar1 & 3);
      puVar12 = puVar11;
      puVar13 = puVar8;
      do {
        puVar11 = puVar12 + 1;
        lVar15 = lVar15 + 1;
        puVar14 = puVar13 + 1;
        *puVar13 = *puVar12;
        puVar12 = puVar11;
        puVar13 = puVar14;
      } while (lVar15 != 0);
    }
    if (0x17 < (long)puVar3 + ~(ulong)puVar8) {
      do {
        *puVar14 = *puVar11;
        puVar14[1] = puVar11[1];
        puVar14[2] = puVar11[2];
        puVar14[3] = puVar11[3];
        puVar14 = puVar14 + 4;
        puVar11 = puVar11 + 4;
      } while (puVar14 < puVar9);
    }
  }
  *puVar9 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar7 = *param_1, uVar7 != 0)) {
    plVar5 = (long *)FUN_00400d30();
    (**(code **)(*plVar5 + 0x18))(plVar5,uVar7);
    uVar10 = (uint)param_1[1];
    puVar9 = puVar8 + uVar10;
  }
  *param_1 = (ulong)puVar8;
  *(uint *)(param_1 + 1) = uVar10 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar4;
  return puVar9;
}


