/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0031ffe0; name: FUN_0031ffe0
 */


undefined8 * FUN_0031ffe0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar3 = *(uint *)((long)param_1 + 0x14) << 1;
  if ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    puVar4 = (undefined8 *)0x0;
    uVar6 = *(uint *)(param_1 + 2);
    puVar5 = (undefined8 *)((ulong)uVar6 << 3);
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,(ulong)uVar3 << 3,"<no allocation names in this config>",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar6 = *(uint *)(param_1 + 2);
    puVar5 = puVar4 + uVar6;
  }
  if (uVar6 != 0) {
    puVar2 = puVar5;
    if (puVar5 <= puVar4 + 1) {
      puVar2 = puVar4 + 1;
    }
    puVar7 = (undefined8 *)param_1[1];
    uVar1 = ((uint)((long)puVar2 + ~(ulong)puVar4 >> 3) & 0x1fffffff) + 1;
    puVar10 = puVar4;
    if ((uVar1 & 3) != 0) {
      lVar11 = -((ulong)uVar1 & 3);
      puVar8 = puVar7;
      puVar9 = puVar4;
      do {
        puVar7 = puVar8 + 1;
        lVar11 = lVar11 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar8;
        puVar8 = puVar7;
        puVar9 = puVar10;
      } while (lVar11 != 0);
    }
    if (0x17 < (long)puVar2 + ~(ulong)puVar4) {
      do {
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar10[3] = puVar7[3];
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar10 < puVar5);
    }
  }
  *puVar5 = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(long **)*param_1 + 0x18))();
    uVar6 = *(uint *)(param_1 + 2);
    puVar5 = puVar4 + uVar6;
  }
  param_1[1] = puVar4;
  *(uint *)(param_1 + 2) = uVar6 + 1;
  *(uint *)((long)param_1 + 0x14) = uVar3;
  return puVar5;
}


