/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ee890; name: FUN_003ee890
 */


undefined8 * FUN_003ee890(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  uVar3 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 != 0) {
    plVar4 = (long *)FUN_00400d30();
    lVar5 = (**(code **)(*plVar4 + 0x10))
                      (plVar4,(ulong)uVar3 * 8 + 0x47,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    if (lVar5 != 0) {
      puVar13 = (undefined8 *)(lVar5 + 0x47U & 0xffffffffffffffc0);
      puVar13[-1] = (long)puVar13 - lVar5;
      uVar7 = (uint)param_1[1];
      puVar6 = puVar13 + uVar7;
      goto joined_r0x003ee920;
    }
  }
  puVar13 = (undefined8 *)0x0;
  uVar7 = (uint)param_1[1];
  puVar6 = (undefined8 *)((ulong)uVar7 << 3);
joined_r0x003ee920:
  if (uVar7 != 0) {
    puVar2 = puVar6;
    if (puVar6 <= puVar13 + 1) {
      puVar2 = puVar13 + 1;
    }
    puVar8 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar2 + ~(ulong)puVar13 >> 3) & 0x1fffffff) + 1;
    puVar12 = puVar13;
    if ((uVar1 & 3) != 0) {
      lVar5 = -((ulong)uVar1 & 3);
      puVar9 = puVar8;
      puVar11 = puVar13;
      do {
        puVar8 = puVar9 + 1;
        lVar5 = lVar5 + 1;
        puVar12 = puVar11 + 1;
        *puVar11 = *puVar9;
        puVar9 = puVar8;
        puVar11 = puVar12;
      } while (lVar5 != 0);
    }
    if (0x17 < (long)puVar2 + ~(ulong)puVar13) {
      do {
        *puVar12 = *puVar8;
        puVar12[1] = puVar8[1];
        puVar12[2] = puVar8[2];
        puVar12[3] = puVar8[3];
        puVar12 = puVar12 + 4;
        puVar8 = puVar8 + 4;
      } while (puVar12 < puVar6);
    }
  }
  *puVar6 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar10 = *param_1, uVar10 != 0)) {
    lVar5 = *(long *)(uVar10 - 8);
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar10 - lVar5);
    uVar7 = (uint)param_1[1];
    puVar6 = puVar13 + uVar7;
  }
  *param_1 = (ulong)puVar13;
  *(uint *)(param_1 + 1) = uVar7 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar3;
  return puVar6;
}


