/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00143dd0; name: FUN_00143dd0
 */


undefined4 * FUN_00143dd0(long *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined4 *puVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 != 0) {
    plVar4 = (long *)FUN_00400d30();
    lVar5 = (**(code **)(*plVar4 + 0x10))
                      (plVar4,(ulong)uVar3 * 4 + 0x17,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    if (lVar5 != 0) {
      puVar13 = (undefined4 *)(lVar5 + 0x17U & 0xfffffffffffffff0);
      *(long *)(puVar13 + -2) = (long)puVar13 - lVar5;
      uVar7 = *(uint *)(param_1 + 1);
      puVar6 = puVar13 + uVar7;
      goto joined_r0x00143e60;
    }
  }
  puVar13 = (undefined4 *)0x0;
  uVar7 = *(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)((ulong)uVar7 << 2);
joined_r0x00143e60:
  if (uVar7 != 0) {
    puVar2 = puVar6;
    if (puVar6 <= puVar13 + 1) {
      puVar2 = puVar13 + 1;
    }
    puVar9 = (undefined4 *)*param_1;
    uVar1 = ((uint)((long)puVar2 + ~(ulong)puVar13 >> 2) & 0x3fffffff) + 1;
    puVar12 = puVar13;
    if ((uVar1 & 3) != 0) {
      lVar5 = -((ulong)uVar1 & 3);
      puVar10 = puVar9;
      puVar11 = puVar13;
      do {
        puVar9 = puVar10 + 1;
        lVar5 = lVar5 + 1;
        puVar12 = puVar11 + 1;
        *puVar11 = *puVar10;
        puVar10 = puVar9;
        puVar11 = puVar12;
      } while (lVar5 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar13) {
      do {
        *puVar12 = *puVar9;
        puVar12[1] = puVar9[1];
        puVar12[2] = puVar9[2];
        puVar12[3] = puVar9[3];
        puVar12 = puVar12 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar12 < puVar6);
    }
  }
  *puVar6 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar5 = *param_1, lVar5 != 0)) {
    lVar8 = *(long *)(lVar5 + -8);
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5 - lVar8);
    uVar7 = *(uint *)(param_1 + 1);
    puVar6 = puVar13 + uVar7;
  }
  *param_1 = (long)puVar13;
  *(uint *)(param_1 + 1) = uVar7 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return puVar6;
}


