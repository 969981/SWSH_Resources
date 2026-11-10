/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00159320; name: FUN_00159320
 */


undefined4 * FUN_00159320(ulong *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  uVar2 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    puVar4 = (undefined4 *)0x0;
    uVar1 = (uint)param_1[1];
    uVar6 = (ulong)uVar1;
    puVar5 = (undefined4 *)(uVar6 * 0xc);
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    puVar4 = (undefined4 *)
             (**(code **)(*plVar3 + 0x10))
                       (plVar3,(ulong)uVar2 * 0xc,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
    uVar6 = (ulong)uVar1;
    puVar5 = puVar4 + uVar6 * 3;
  }
  if (uVar1 != 0) {
    puVar7 = (undefined4 *)*param_1;
    puVar8 = puVar4;
    do {
      *puVar8 = *puVar7;
      puVar8[1] = puVar7[1];
      puVar8[2] = puVar7[2];
      puVar8 = puVar8 + 3;
      puVar7 = puVar7 + 3;
    } while (puVar8 < puVar5);
  }
  *puVar5 = *param_2;
  puVar4[uVar6 * 3 + 1] = param_2[1];
  puVar4[uVar6 * 3 + 2] = param_2[2];
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar9 = *param_1, uVar9 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar9);
    uVar6 = (ulong)(uint)param_1[1];
    puVar5 = puVar4 + uVar6 * 3;
  }
  *param_1 = (ulong)puVar4;
  *(int *)(param_1 + 1) = (int)uVar6 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  return puVar5;
}


