/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00144480; name: FUN_00144480
 */


undefined8 * FUN_00144480(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    puVar5 = (undefined8 *)0x0;
    uVar7 = (uint)param_1[1];
    puVar6 = (undefined8 *)((ulong)uVar7 << 3);
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    puVar5 = (undefined8 *)
             (**(code **)(*plVar4 + 0x10))
                       (plVar4,(ulong)uVar3 << 3,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar7 = (uint)param_1[1];
    puVar6 = puVar5 + uVar7;
  }
  if (uVar7 != 0) {
    puVar2 = puVar6;
    if (puVar6 <= puVar5 + 1) {
      puVar2 = puVar5 + 1;
    }
    puVar8 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar2 + ~(ulong)puVar5 >> 3) & 0x1fffffff) + 1;
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
    if (0x17 < (long)puVar2 + ~(ulong)puVar5) {
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
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar13 = *param_1, uVar13 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar13);
    uVar7 = (uint)param_1[1];
    puVar6 = puVar5 + uVar7;
  }
  *param_1 = (ulong)puVar5;
  *(uint *)(param_1 + 1) = uVar7 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return puVar6;
}


