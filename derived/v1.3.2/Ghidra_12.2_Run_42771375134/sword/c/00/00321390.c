/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00321390; name: FUN_00321390
 */


undefined4 * FUN_00321390(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  
  uVar5 = *(uint *)((long)param_1 + 0x14) << 1;
  if ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
    puVar6 = (undefined4 *)0x0;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    puVar6 = (undefined4 *)
             (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,(ulong)uVar5 << 2,"<no allocation names in this config>",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 2);
  }
  if (uVar3 == 0) {
    *puVar6 = *param_2;
    iVar4 = *(int *)((long)param_1 + 0x14);
  }
  else {
    puVar1 = puVar6 + uVar3;
    puVar2 = puVar1;
    if (puVar1 <= puVar6 + 1) {
      puVar2 = puVar6 + 1;
    }
    puVar7 = (undefined4 *)param_1[1];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar6 >> 2) & 0x3fffffff) + 1;
    puVar10 = puVar6;
    if ((uVar3 & 3) != 0) {
      lVar11 = -((ulong)uVar3 & 3);
      puVar8 = puVar7;
      puVar9 = puVar6;
      do {
        puVar7 = puVar8 + 1;
        lVar11 = lVar11 + 1;
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar8;
        puVar8 = puVar7;
        puVar9 = puVar10;
      } while (lVar11 != 0);
    }
    if (0xb < (long)puVar2 + ~(ulong)puVar6) {
      do {
        *puVar10 = *puVar7;
        puVar10[1] = puVar7[1];
        puVar10[2] = puVar7[2];
        puVar10[3] = puVar7[3];
        puVar10 = puVar10 + 4;
        puVar7 = puVar7 + 4;
      } while (puVar10 < puVar1);
    }
    puVar6[*(uint *)(param_1 + 2)] = *param_2;
    iVar4 = *(int *)((long)param_1 + 0x14);
  }
  if ((-1 < iVar4) && (param_1[1] != 0)) {
    (**(code **)(**(long **)*param_1 + 0x18))();
  }
  uVar3 = *(uint *)(param_1 + 2);
  param_1[1] = puVar6;
  *(uint *)(param_1 + 2) = uVar3 + 1;
  *(uint *)((long)param_1 + 0x14) = uVar5;
  return puVar6 + uVar3;
}


