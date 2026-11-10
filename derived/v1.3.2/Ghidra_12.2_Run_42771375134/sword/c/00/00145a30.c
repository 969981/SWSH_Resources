/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00145a30; name: FUN_00145a30
 */


void FUN_00145a30(ulong *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 != 0) {
    plVar2 = (long *)FUN_00400d30();
    lVar3 = (**(code **)(*plVar2 + 0x10))
                      (plVar2,(ulong)param_2 * 0x10 + 0x17,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    if (lVar3 != 0) {
      puVar7 = (undefined4 *)(lVar3 + 0x17U & 0xfffffffffffffff0);
      *(long *)(puVar7 + -2) = (long)puVar7 - lVar3;
      uVar1 = (uint)param_1[1];
      goto joined_r0x00145aa8;
    }
  }
  puVar7 = (undefined4 *)0x0;
  uVar1 = (uint)param_1[1];
joined_r0x00145aa8:
  if (uVar1 != 0) {
    puVar5 = (undefined4 *)*param_1;
    puVar6 = puVar7;
    do {
      *puVar6 = *puVar5;
      puVar6[1] = puVar5[1];
      puVar6[2] = puVar5[2];
      puVar6[3] = puVar5[3];
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
    } while (puVar6 < puVar7 + (ulong)uVar1 * 4);
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar4 = *param_1, uVar4 != 0)) {
    lVar3 = *(long *)(uVar4 - 8);
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar4 - lVar3);
  }
  *param_1 = (ulong)puVar7;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


