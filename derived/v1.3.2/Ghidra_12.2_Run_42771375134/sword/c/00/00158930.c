/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158930; name: FUN_00158930
 */


void FUN_00158930(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(uint *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  plVar2 = (long *)FUN_00400d30();
  puVar3 = (undefined4 *)
           (**(code **)(*plVar2 + 0x10))
                     (plVar2,(ulong)uVar1 * 0xc,"NonTrackedAlloc",
                      "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
  puVar4 = puVar3 + (ulong)*(uint *)(param_1 + 1) * 3;
  *param_1 = puVar3;
  if (puVar3 < puVar4) {
    puVar5 = (undefined4 *)*param_2;
    do {
      *puVar3 = *puVar5;
      puVar3[1] = puVar5[1];
      puVar3[2] = puVar5[2];
      puVar3 = puVar3 + 3;
      puVar5 = puVar5 + 3;
    } while (puVar3 < puVar4);
  }
  return;
}


