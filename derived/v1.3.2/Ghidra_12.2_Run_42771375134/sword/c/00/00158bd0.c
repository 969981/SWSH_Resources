/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158bd0; name: FUN_00158bd0
 */


void FUN_00158bd0(ulong *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    puVar3 = (undefined8 *)0x0;
    uVar1 = (uint)param_1[1];
  }
  else {
    plVar2 = (long *)FUN_00400d30();
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 0x10))
                       (plVar2,(ulong)param_2 * 0x14,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar1 = (uint)param_1[1];
  }
  if (uVar1 != 0) {
    puVar4 = (undefined8 *)*param_1;
    puVar5 = puVar3;
    do {
      *(undefined4 *)(puVar5 + 2) = *(undefined4 *)(puVar4 + 2);
      puVar5[1] = puVar4[1];
      puVar6 = (undefined8 *)((long)puVar5 + 0x14);
      *puVar5 = *puVar4;
      puVar4 = (undefined8 *)((long)puVar4 + 0x14);
      puVar5 = puVar6;
    } while (puVar6 < (undefined8 *)((long)puVar3 + (ulong)uVar1 * 0x14));
  }
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar7 = *param_1, uVar7 != 0)) {
    plVar2 = (long *)FUN_00400d30();
    (**(code **)(*plVar2 + 0x18))(plVar2,uVar7);
  }
  *param_1 = (ulong)puVar3;
  *(uint *)((long)param_1 + 0xc) = param_2;
  return;
}


