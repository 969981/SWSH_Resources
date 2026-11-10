/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158840; name: FUN_00158840
 */


void FUN_00158840(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = *(uint *)(param_2 + 1);
  if (uVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(uint *)(param_1 + 1) = uVar2;
  *(uint *)((long)param_1 + 0xc) = uVar2;
  plVar3 = (long *)FUN_00400d30();
  lVar4 = (**(code **)(*plVar3 + 0x10))
                    (plVar3,(ulong)uVar2 * 0x10 + 0x17,"NonTrackedAlloc",
                     "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
  if (lVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
    uVar2 = *(uint *)(param_1 + 1);
    *param_1 = 0;
  }
  else {
    puVar5 = (undefined4 *)(lVar4 + 0x17U & 0xfffffffffffffff0);
    *(long *)(puVar5 + -2) = (long)puVar5 - lVar4;
    uVar2 = *(uint *)(param_1 + 1);
    *param_1 = puVar5;
  }
  if (uVar2 != 0) {
    puVar6 = (undefined4 *)*param_2;
    puVar1 = puVar5 + (ulong)uVar2 * 4;
    do {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar5[3] = puVar6[3];
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    } while (puVar5 < puVar1);
  }
  return;
}


