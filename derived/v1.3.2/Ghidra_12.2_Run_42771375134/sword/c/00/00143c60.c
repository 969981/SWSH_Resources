/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00143c60; name: FUN_00143c60
 */


undefined4 * FUN_00143c60(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  
  uVar5 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    puVar7 = (undefined4 *)0x0;
    uVar3 = *(uint *)(param_1 + 1);
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    puVar7 = (undefined4 *)
             (**(code **)(*plVar6 + 0x10))
                       (plVar6,(ulong)uVar5 << 2,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (uVar3 == 0) {
    *puVar7 = *param_2;
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  else {
    puVar1 = puVar7 + uVar3;
    puVar2 = puVar1;
    if (puVar1 <= puVar7 + 1) {
      puVar2 = puVar7 + 1;
    }
    puVar8 = (undefined4 *)*param_1;
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar7 >> 2) & 0x3fffffff) + 1;
    puVar11 = puVar7;
    if ((uVar3 & 3) != 0) {
      lVar12 = -((ulong)uVar3 & 3);
      puVar9 = puVar8;
      puVar10 = puVar7;
      do {
        puVar8 = puVar9 + 1;
        lVar12 = lVar12 + 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar9;
        puVar9 = puVar8;
        puVar10 = puVar11;
      } while (lVar12 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar7) {
      do {
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11[3] = puVar8[3];
        puVar11 = puVar11 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar11 < puVar1);
    }
    puVar7[*(uint *)(param_1 + 1)] = *param_2;
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  if ((-1 < iVar4) && (lVar12 = *param_1, lVar12 != 0)) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar12);
  }
  uVar3 = *(uint *)(param_1 + 1);
  *param_1 = (long)puVar7;
  *(uint *)(param_1 + 1) = uVar3 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  return puVar7 + uVar3;
}


