/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b4230; name: FUN_001b4230
 */


undefined4 * FUN_001b4230(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  long lVar15;
  code *pcVar16;
  
  uVar6 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar6 = 1;
  }
  if (uVar6 == 0) {
    puVar10 = (undefined4 *)0x0;
    uVar4 = *(uint *)(param_1 + 1);
  }
  else {
    plVar7 = (long *)FUN_00400d30();
    pcVar16 = *(code **)(*plVar7 + 0x10);
    plVar8 = (long *)FUN_00400d60();
    uVar9 = (**(code **)(*plVar8 + 0x28))();
    pcVar2 = 
    "static const char *physx::shdfnd::ReflectionAllocator<unsigned int>::getName() [T = unsigned int]"
    ;
    if ((uVar9 & 1) == 0) {
      pcVar2 = "<allocation names disabled>";
    }
    puVar10 = (undefined4 *)
              (*pcVar16)(plVar7,(ulong)uVar6 << 2,pcVar2,
                         "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar4 = *(uint *)(param_1 + 1);
  }
  if (uVar4 == 0) {
    *puVar10 = *param_2;
    iVar5 = *(int *)((long)param_1 + 0xc);
  }
  else {
    puVar1 = puVar10 + uVar4;
    puVar3 = puVar1;
    if (puVar1 <= puVar10 + 1) {
      puVar3 = puVar10 + 1;
    }
    puVar11 = (undefined4 *)*param_1;
    uVar4 = ((uint)((long)puVar3 + ~(ulong)puVar10 >> 2) & 0x3fffffff) + 1;
    puVar14 = puVar10;
    if ((uVar4 & 3) != 0) {
      lVar15 = -((ulong)uVar4 & 3);
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
    if (0xb < (long)puVar3 + ~(ulong)puVar10) {
      do {
        *puVar14 = *puVar11;
        puVar14[1] = puVar11[1];
        puVar14[2] = puVar11[2];
        puVar14[3] = puVar11[3];
        puVar14 = puVar14 + 4;
        puVar11 = puVar11 + 4;
      } while (puVar14 < puVar1);
    }
    puVar10[*(uint *)(param_1 + 1)] = *param_2;
    iVar5 = *(int *)((long)param_1 + 0xc);
  }
  if ((-1 < iVar5) && (lVar15 = *param_1, lVar15 != 0)) {
    plVar7 = (long *)FUN_00400d30();
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar15);
  }
  uVar4 = *(uint *)(param_1 + 1);
  *param_1 = (long)puVar10;
  *(uint *)(param_1 + 1) = uVar4 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar6;
  return puVar10 + uVar4;
}


