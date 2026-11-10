/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9dc0; name: FUN_003e9dc0
 */


ulong * FUN_003e9dc0(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong *puVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *local_28;
  
  lVar8 = *(long *)(param_1 + 0x1158);
  puVar6 = *(ulong **)(lVar8 + 0x230);
  if (puVar6 == (ulong *)0x0) {
    uVar1 = *(uint *)(lVar8 + 0x228);
    plVar3 = (long *)FUN_00400d30();
    lVar4 = (**(code **)(*plVar3 + 0x10))
                      (plVar3,(ulong)uVar1 + 0x47,"NonTrackedAlloc",
                       "./../../../../PxShared/src/foundation/include\\PsPool.h",0xb4);
    if (lVar4 == 0) {
      puVar7 = (ulong *)0x0;
    }
    else {
      puVar7 = (ulong *)(lVar4 + 0x47U & 0xffffffffffffffc0);
      puVar7[-1] = (long)puVar7 - lVar4;
    }
    uVar1 = *(uint *)(lVar8 + 0x218);
    local_28 = puVar7;
    if (uVar1 < (*(uint *)(lVar8 + 0x21c) & 0x7fffffff)) {
      *(ulong **)(*(long *)(lVar8 + 0x210) + (ulong)uVar1 * 8) = puVar7;
      *(uint *)(lVar8 + 0x218) = uVar1 + 1;
    }
    else {
      FUN_003f7740(lVar8 + 8,&local_28);
    }
    if (puVar7 + (ulong)*(uint *)(lVar8 + 0x220) * 8 + -8 < puVar7) {
      puVar6 = *(ulong **)(lVar8 + 0x230);
    }
    else {
      puVar2 = puVar7 + (ulong)*(uint *)(lVar8 + 0x220) * 8 + -8;
      puVar5 = *(ulong **)(lVar8 + 0x230);
      do {
        puVar6 = puVar2;
        *puVar6 = (ulong)puVar5;
        puVar2 = puVar6 + -8;
        puVar5 = puVar6;
      } while (puVar7 <= puVar6 + -8);
      *(ulong **)(lVar8 + 0x230) = puVar6;
    }
  }
  *(ulong *)(lVar8 + 0x230) = *puVar6;
  *(int *)(lVar8 + 0x224) = *(int *)(lVar8 + 0x224) + 1;
  if (puVar6 != (ulong *)0x0) {
    FUN_00159810(puVar6,param_2);
  }
  return puVar6;
}


