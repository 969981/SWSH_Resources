/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00321500; name: FUN_00321500
 */


undefined8 * FUN_00321500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  
  uVar4 = *(uint *)((long)param_1 + 0x14) << 1;
  if ((*(uint *)((long)param_1 + 0x14) & 0x7fffffff) == 0) {
    uVar4 = 1;
  }
  if (uVar4 == 0) {
    puVar5 = (undefined8 *)0x0;
    uVar3 = *(uint *)(param_1 + 2);
  }
  else {
    puVar5 = (undefined8 *)
             (**(code **)(**(long **)*param_1 + 0x10))
                       (*(long **)*param_1,(ulong)uVar4 << 4,"<no allocation names in this config>",
                        "./../../../../PxShared/src/foundation/include\\PsArray.h",0x229);
    uVar3 = *(uint *)(param_1 + 2);
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    puVar1 = puVar5 + (ulong)uVar3 * 2;
    puVar2 = puVar1;
    if (puVar1 <= puVar5 + 2) {
      puVar2 = puVar5 + 2;
    }
    puVar7 = (undefined8 *)param_1[1];
    uVar3 = ((uint)((long)puVar2 + ~(ulong)puVar5 >> 4) & 0xfffffff) + 1;
    puVar10 = puVar5;
    if ((uVar3 & 7) != 0) {
      lVar11 = -((ulong)uVar3 & 7);
      puVar8 = puVar7;
      puVar9 = puVar5;
      do {
        puVar9[1] = puVar8[1];
        lVar11 = lVar11 + 1;
        puVar7 = puVar8 + 2;
        puVar10 = puVar9 + 2;
        *puVar9 = *puVar8;
        puVar8 = puVar7;
        puVar9 = puVar10;
      } while (lVar11 != 0);
    }
    if (0x6f < (long)puVar2 + ~(ulong)puVar5) {
      do {
        puVar10[1] = puVar7[1];
        *puVar10 = *puVar7;
        puVar10[3] = puVar7[3];
        puVar10[2] = puVar7[2];
        puVar10[5] = puVar7[5];
        puVar10[4] = puVar7[4];
        puVar10[7] = puVar7[7];
        puVar10[6] = puVar7[6];
        puVar10[9] = puVar7[9];
        puVar10[8] = puVar7[8];
        puVar10[0xb] = puVar7[0xb];
        puVar10[10] = puVar7[10];
        puVar10[0xc] = puVar7[0xc];
        puVar10[0xd] = puVar7[0xd];
        puVar10[0xe] = puVar7[0xe];
        puVar10[0xf] = puVar7[0xf];
        puVar10 = puVar10 + 0x10;
        puVar7 = puVar7 + 0x10;
      } while (puVar10 < puVar1);
    }
    uVar6 = (ulong)*(uint *)(param_1 + 2);
  }
  (puVar5 + uVar6 * 2)[1] = param_2[1];
  puVar5[uVar6 * 2] = *param_2;
  if ((-1 < *(int *)((long)param_1 + 0x14)) && (param_1[1] != 0)) {
    (**(code **)(**(long **)*param_1 + 0x18))();
  }
  uVar3 = *(uint *)(param_1 + 2);
  param_1[1] = puVar5;
  *(uint *)(param_1 + 2) = uVar3 + 1;
  *(uint *)((long)param_1 + 0x14) = uVar4;
  return puVar5 + (ulong)uVar3 * 2;
}


