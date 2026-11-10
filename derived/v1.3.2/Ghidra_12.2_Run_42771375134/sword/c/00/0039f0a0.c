/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039f0a0; name: FUN_0039f0a0
 */


uint FUN_0039f0a0(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar7 = (uint *)(*(long *)(param_1 + 6) + (ulong)param_2 * 4);
  uVar3 = *puVar7;
  uVar6 = (ulong)uVar3;
  uVar5 = *param_1 - 1;
  *param_1 = uVar5;
  if (uVar5 != uVar3) {
    puVar9 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar5 * 0x18);
    puVar8 = (undefined4 *)(*(long *)(param_1 + 2) + uVar6 * 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar5 * 4);
    *puVar8 = *puVar9;
    puVar8[1] = puVar9[1];
    puVar8[2] = puVar9[2];
    puVar8[3] = puVar9[3];
    puVar8[4] = puVar9[4];
    puVar8[5] = puVar9[5];
    puVar1 = (undefined8 *)(*(long *)(param_1 + 4) + (ulong)uVar5 * 0x10);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 4) + uVar6 * 0x10);
    puVar2[1] = puVar1[1];
    *puVar2 = *puVar1;
    *(uint *)(*(long *)(param_1 + 8) + uVar6 * 4) = uVar4;
    puVar7 = (uint *)(*(long *)(param_1 + 6) + (ulong)param_2 * 4);
    *(uint *)(*(long *)(param_1 + 6) + (ulong)uVar4 * 4) = uVar3;
  }
  *puVar7 = param_1[10];
  param_1[10] = param_2;
  return uVar5;
}


