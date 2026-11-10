/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00159070; name: FUN_00159070
 */


undefined4 * FUN_00159070(ulong *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  uVar2 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    plVar3 = (long *)FUN_00400d30();
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)uVar2 * 0x10 + 0x17,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    if (lVar4 != 0) {
      puVar10 = (undefined4 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
      *(long *)(puVar10 + -2) = (long)puVar10 - lVar4;
      uVar1 = (uint)param_1[1];
      uVar6 = (ulong)uVar1;
      puVar5 = puVar10 + uVar6 * 4;
      goto joined_r0x00159100;
    }
  }
  puVar10 = (undefined4 *)0x0;
  uVar1 = (uint)param_1[1];
  uVar6 = (ulong)uVar1;
  puVar5 = (undefined4 *)(uVar6 << 4);
joined_r0x00159100:
  if (uVar1 != 0) {
    puVar7 = (undefined4 *)*param_1;
    puVar9 = puVar10;
    do {
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
      puVar9[2] = puVar7[2];
      puVar9[3] = puVar7[3];
      puVar9 = puVar9 + 4;
      puVar7 = puVar7 + 4;
    } while (puVar9 < puVar5);
  }
  *puVar5 = *param_2;
  puVar10[uVar6 * 4 + 1] = param_2[1];
  puVar10[uVar6 * 4 + 2] = param_2[2];
  puVar10[uVar6 * 4 + 3] = param_2[3];
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar8 = *param_1, uVar8 != 0)) {
    lVar4 = *(long *)(uVar8 - 8);
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar8 - lVar4);
    uVar6 = (ulong)(uint)param_1[1];
    puVar5 = puVar10 + uVar6 * 4;
  }
  *param_1 = (ulong)puVar10;
  *(int *)(param_1 + 1) = (int)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar5;
}


