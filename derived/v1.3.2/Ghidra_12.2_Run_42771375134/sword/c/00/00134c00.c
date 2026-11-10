/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00134c00; name: FUN_00134c00
 */


void FUN_00134c00(undefined8 *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  
  if (param_2 == 0) {
    puVar4 = (undefined4 *)0x0;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    puVar4 = (undefined4 *)
             (**(code **)(*(long *)*param_1 + 0x10))
                       ((long *)*param_1,(ulong)param_2 << 2,
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 2);
  }
  if (uVar3 != 0) {
    puVar1 = puVar4 + uVar3;
    puVar2 = puVar1;
    if (puVar1 <= puVar4 + 1) {
      puVar2 = puVar4 + 1;
    }
    puVar5 = (undefined4 *)param_1[1];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar4 >> 2) & 0x3fffffff) + 1;
    puVar8 = puVar4;
    if ((uVar3 & 3) != 0) {
      lVar9 = -((ulong)uVar3 & 3);
      puVar6 = puVar5;
      puVar7 = puVar4;
      do {
        puVar5 = puVar6 + 1;
        lVar9 = lVar9 + 1;
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar6;
        puVar6 = puVar5;
        puVar7 = puVar8;
      } while (lVar9 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar4) {
      do {
        *puVar8 = *puVar5;
        puVar8[1] = puVar5[1];
        puVar8[2] = puVar5[2];
        puVar8[3] = puVar5[3];
        puVar8 = puVar8 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar8 < puVar1);
    }
  }
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  param_1[1] = puVar4;
  *(uint *)((long)param_1 + 0x14) = param_2;
  return;
}


