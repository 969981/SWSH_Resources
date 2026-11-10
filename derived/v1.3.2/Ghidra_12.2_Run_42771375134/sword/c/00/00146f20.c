/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00146f20; name: FUN_00146f20
 */


void FUN_00146f20(ulong *param_1,uint param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  if (param_2 == 0) {
    puVar5 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    puVar5 = (undefined8 *)
             (**(code **)(*plVar4 + 0x10))
                       (plVar4,(ulong)param_2 << 3,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 != 0) {
    puVar2 = puVar5 + uVar1;
    puVar3 = puVar2;
    if (puVar2 <= puVar5 + 1) {
      puVar3 = puVar5 + 1;
    }
    puVar6 = (undefined8 *)*param_1;
    uVar1 = ((uint)((long)puVar3 + ~(ulong)puVar5 >> 3) & 0x1fffffff) + 1;
    puVar9 = puVar5;
    if ((uVar1 & 3) != 0) {
      lVar10 = -((ulong)uVar1 & 3);
      puVar7 = puVar6;
      puVar8 = puVar5;
      do {
        puVar6 = puVar7 + 1;
        lVar10 = lVar10 + 1;
        puVar9 = puVar8 + 1;
        *puVar8 = *puVar7;
        puVar7 = puVar6;
        puVar8 = puVar9;
      } while (lVar10 != 0);
    }
    if (0x17 < (long)puVar3 + ~(ulong)puVar5) {
      do {
        *puVar9 = *puVar6;
        puVar9[1] = puVar6[1];
        puVar9[2] = puVar6[2];
        puVar9[3] = puVar6[3];
        puVar9 = puVar9 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar9 < puVar2);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar11 = *param_1, uVar11 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar11);
  }
  *param_1 = (ulong)puVar5;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


