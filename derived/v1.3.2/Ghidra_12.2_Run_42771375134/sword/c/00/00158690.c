/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158690; name: FUN_00158690
 */


void FUN_00158690(ulong *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  *(uint *)(param_1 + 1) = uVar1;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  plVar2 = (long *)FUN_00400d30();
  puVar3 = (undefined8 *)
           (**(code **)(*plVar2 + 0x10))
                     (plVar2,(ulong)uVar1 * 0x14,"NonTrackedAlloc",
                      "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
  puVar5 = (undefined8 *)((long)puVar3 + (ulong)(uint)param_1[1] * 0x14);
  *param_1 = (ulong)puVar3;
  if (puVar3 < puVar5) {
    puVar6 = (undefined8 *)*param_2;
    do {
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar6 + 2);
      puVar3[1] = puVar6[1];
      puVar4 = (undefined8 *)((long)puVar3 + 0x14);
      *puVar3 = *puVar6;
      puVar3 = puVar4;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
    } while (puVar4 < puVar5);
  }
  return;
}


