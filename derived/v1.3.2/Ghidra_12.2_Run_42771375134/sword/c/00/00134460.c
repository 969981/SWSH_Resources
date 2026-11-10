/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00134460; name: FUN_00134460
 */


undefined8 * FUN_00134460(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  code *pcVar16;
  
  uVar6 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    puVar10 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar7 = (long *)FUN_00400d30();
    pcVar16 = *(code **)(*plVar7 + 0x10);
    plVar8 = (long *)FUN_00400d60();
    uVar9 = (**(code **)(*plVar8 + 0x28))();
    pcVar3 = 
    "static const char *physx::shdfnd::ReflectionAllocator<physx::Bp::AggPair>::getName() [T = physx::Bp::AggPair]"
    ;
    if ((uVar9 & 1) == 0) {
      pcVar3 = "<allocation names disabled>";
    }
    puVar10 = (undefined8 *)
              (*pcVar16)(plVar7,(ulong)uVar6 << 3,pcVar3,
                         "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 == 0) {
    *puVar10 = *param_2;
    iVar5 = *(int *)((long)param_1 + 0xc);
  }
  else {
    puVar2 = puVar10 + uVar1;
    puVar4 = puVar2;
    if (puVar2 <= puVar10 + 1) {
      puVar4 = puVar10 + 1;
    }
    puVar11 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar4 + ~(ulong)puVar10 >> 3) & 0x1fffffff) + 1;
    puVar14 = puVar10;
    if ((uVar1 & 3) != 0) {
      lVar15 = -((ulong)uVar1 & 3);
      puVar12 = puVar11;
      puVar13 = puVar10;
      do {
        puVar11 = puVar12 + 1;
        lVar15 = lVar15 + 1;
        puVar14 = puVar13 + 1;
        *puVar13 = *puVar12;
        puVar12 = puVar11;
        puVar13 = puVar14;
      } while (lVar15 != 0);
    }
    if (0x17 < (long)puVar4 + ~(ulong)puVar10) {
      do {
        *puVar14 = *puVar11;
        puVar14[1] = puVar11[1];
        puVar14[2] = puVar11[2];
        puVar14[3] = puVar11[3];
        puVar14 = puVar14 + 4;
        puVar11 = puVar11 + 4;
      } while (puVar14 < puVar2);
    }
    puVar10[(uint)param_1[1]] = *param_2;
    iVar5 = *(int *)((long)param_1 + 0xc);
  }
  if ((-1 < iVar5) && (uVar9 = *param_1, uVar9 != 0)) {
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,uVar9);
  }
  uVar9 = param_1[1];
  *param_1 = (ulong)puVar10;
  *(uint *)(param_1 + 1) = (uint)uVar9 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar6;
  return puVar10 + (uint)uVar9;
}


