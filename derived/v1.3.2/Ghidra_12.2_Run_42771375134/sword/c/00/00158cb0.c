/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00158cb0; name: FUN_00158cb0
 */


long FUN_00158cb0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar1 = *(uint *)((long)param_1 + 0xc) << 1;
  if ((*(uint *)((long)param_1 + 0xc) & 0x7fffffff) == 0) {
    uVar1 = 1;
  }
  if (uVar1 == 0) {
    puVar4 = (undefined8 *)0x0;
    uVar2 = (uint)param_1[1];
  }
  else {
    plVar3 = (long *)FUN_00400d30();
    puVar4 = (undefined8 *)
             (**(code **)(*plVar3 + 0x10))
                       (plVar3,(ulong)uVar1 * 0x14,"NonTrackedAlloc",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar2 = (uint)param_1[1];
  }
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    puVar6 = (undefined8 *)*param_1;
    puVar7 = puVar4;
    do {
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(puVar6 + 2);
      puVar7[1] = puVar6[1];
      puVar8 = (undefined8 *)((long)puVar7 + 0x14);
      *puVar7 = *puVar6;
      puVar6 = (undefined8 *)((long)puVar6 + 0x14);
      puVar7 = puVar8;
    } while (puVar8 < (undefined8 *)((long)puVar4 + (ulong)uVar2 * 0x14));
    uVar5 = (ulong)(uint)param_1[1];
  }
  puVar6 = (undefined8 *)((long)puVar4 + uVar5 * 0x14);
  *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(param_2 + 2);
  puVar6[1] = param_2[1];
  *puVar6 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0xc)) && (uVar5 = *param_1, uVar5 != 0)) {
    plVar3 = (long *)FUN_00400d30();
    (**(code **)(*plVar3 + 0x18))(plVar3,uVar5);
  }
  uVar5 = param_1[1];
  *param_1 = (ulong)puVar4;
  *(uint *)(param_1 + 1) = (uint)uVar5 + 1;
  *(uint *)((long)param_1 + 0xc) = uVar1;
  return (long)puVar4 + (ulong)(uint)uVar5 * 0x14;
}


