/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00143f50; name: FUN_00143f50
 */


undefined2 * FUN_00143f50(long *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  long lVar12;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    puVar5 = (undefined2 *)0x0;
    uVar7 = *(uint *)(param_1 + 1);
    puVar6 = (undefined2 *)((ulong)uVar7 << 1);
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    puVar5 = (undefined2 *)
             (**(code **)(*plVar4 + 0x10))
                       (plVar4,(ulong)uVar3 << 1,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar7 = *(uint *)(param_1 + 1);
    puVar6 = puVar5 + uVar7;
  }
  if (uVar7 != 0) {
    puVar2 = puVar6;
    if (puVar6 <= puVar5 + 1) {
      puVar2 = puVar5 + 1;
    }
    puVar8 = (undefined2 *)*param_1;
    uVar1 = ((uint)((long)puVar2 + ~(ulong)puVar5 >> 1) & 0x7fffffff) + 1;
    puVar11 = puVar5;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
      puVar9 = puVar8;
      puVar10 = puVar5;
      do {
        puVar8 = puVar9 + 1;
        lVar12 = lVar12 + 1;
        puVar11 = puVar10 + 1;
        *puVar10 = *puVar9;
        puVar9 = puVar8;
        puVar10 = puVar11;
      } while (lVar12 != 0);
    }
    if (5 < (long)puVar2 + ~(ulong)puVar5) {
      do {
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11[3] = puVar8[3];
        puVar11 = puVar11 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar11 < puVar6);
    }
  }
  *puVar6 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar12 = *param_1, lVar12 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar12);
    uVar7 = *(uint *)(param_1 + 1);
    puVar6 = puVar5 + uVar7;
  }
  *param_1 = (long)puVar5;
  *(uint *)(param_1 + 1) = uVar7 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return puVar6;
}


