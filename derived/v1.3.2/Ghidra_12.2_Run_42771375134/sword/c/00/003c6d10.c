/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c6d10; name: FUN_003c6d10
 */


void FUN_003c6d10(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)0x0;
    uVar1 = *(uint *)(param_1 + 2);
  }
  else {
    puVar2 = (undefined4 *)
             (**(code **)(*(long *)*param_1 + 0x10))
                       ((long *)*param_1,(ulong)param_2 * 0x18,
                        "./../../../../PxShared/src/foundation/include/PsArray.h",0x229);
    uVar1 = *(uint *)(param_1 + 2);
  }
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)param_1[1];
    puVar4 = puVar2;
    do {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3[1];
      puVar4[2] = puVar3[2];
      puVar4[3] = puVar3[3];
      puVar4[4] = puVar3[4];
      puVar4[5] = puVar3[5];
      puVar4 = puVar4 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar4 < puVar2 + (ulong)uVar1 * 6);
  }
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  param_1[1] = puVar2;
  *(uint *)((long)param_1 + 0x14) = param_2;
  return;
}


