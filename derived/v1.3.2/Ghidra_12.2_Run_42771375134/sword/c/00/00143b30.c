/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00143b30; name: FUN_00143b30
 */


void FUN_00143b30(long *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  
  if (param_2 == 0) {
    puVar5 = (undefined4 *)0x0;
    uVar3 = *(uint *)(param_1 + 1);
  }
  else {
    plVar4 = (long *)FUN_00400d30();
    puVar5 = (undefined4 *)
             (**(code **)(*plVar4 + 0x10))
                       (plVar4,(ulong)param_2 << 2,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 1);
  }
  if (uVar3 != 0) {
    puVar1 = puVar5 + uVar3;
    puVar2 = puVar1;
    if (puVar1 <= puVar5 + 1) {
      puVar2 = puVar5 + 1;
    }
    puVar6 = (undefined4 *)*param_1;
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar5 >> 2) & 0x3fffffff) + 1;
    puVar9 = puVar5;
    if ((uVar3 & 3) != 0) {
      lVar10 = -((ulong)uVar3 & 3);
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
    if (0xb < (long)puVar2 + ~(ulong)puVar5) {
      do {
        *puVar9 = *puVar6;
        puVar9[1] = puVar6[1];
        puVar9[2] = puVar6[2];
        puVar9[3] = puVar6[3];
        puVar9 = puVar9 + 4;
        puVar6 = puVar6 + 4;
      } while (puVar9 < puVar1);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (lVar10 = *param_1, lVar10 != 0)) {
    plVar4 = (long *)FUN_00400d30();
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar10);
  }
  *param_1 = (long)puVar5;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


