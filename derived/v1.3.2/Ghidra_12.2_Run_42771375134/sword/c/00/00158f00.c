/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158f00; name: FUN_00158f00
 */


undefined8 * FUN_00158f00(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  
  uVar5 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    puVar7 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar6 = (long *)FUN_00400d30();
    puVar7 = (undefined8 *)
             (**(code **)(*plVar6 + 0x10))
                       (plVar6,(ulong)uVar5 << 3,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 == 0) {
    *puVar7 = *param_2;
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  else {
    puVar2 = puVar7 + uVar1;
    puVar3 = puVar2;
    if (puVar2 <= puVar7 + 1) {
      puVar3 = puVar7 + 1;
    }
    puVar8 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar3 + ~(ulong)puVar7 >> 3) & 0x1fffffff) + 1;
    puVar11 = puVar7;
    if ((uVar1 & 3) != 0) {
      lVar12 = -((ulong)uVar1 & 3);
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
    if (0x17 < (long)puVar3 + ~(ulong)puVar7) {
      do {
        *puVar11 = *puVar8;
        puVar11[1] = puVar8[1];
        puVar11[2] = puVar8[2];
        puVar11[3] = puVar8[3];
        puVar11 = puVar11 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar11 < puVar2);
    }
    puVar7[(uint)param_1[1]] = *param_2;
    iVar4 = *(int *)((long)param_1 + 0xc);
  }
  if ((-1 < iVar4) && (uVar13 = *param_1, uVar13 != 0)) {
    plVar6 = (long *)FUN_00400d30();
    (**(code **)(*plVar6 + 0x18))(plVar6,uVar13);
  }
  uVar13 = param_1[1];
  *param_1 = (ulong)puVar7;
  *(uint *)(param_1 + 1) = (uint)uVar13 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar5;
  return puVar7 + (uint)uVar13;
}


