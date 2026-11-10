/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a8fe0; name: FUN_003a8fe0
 */


undefined8 FUN_003a8fe0(long param_1,ulong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  uVar3 = *param_2;
  uVar8 = (uVar3 & 0xffffffff | param_2[1] << 0x20) + (uVar3 << 0x20 ^ 0xffffffffffffffff);
  uVar8 = uVar8 ^ uVar8 >> 0x16;
  uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
  uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
  uVar8 = uVar8 ^ uVar8 >> 0xf;
  uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
  puVar7 = (uint *)(*(long *)(param_1 + 0x18) +
                   (ulong)(*(int *)(param_1 + 0x24) - 1U & ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) *
                   4);
  uVar9 = *puVar7;
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  while ((uVar8 = (ulong)uVar9, *(ulong *)(*(long *)(param_1 + 8) + uVar8 * 0x20) != uVar3 ||
         (puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 0x20), puVar1[1] != param_2[1])))
  {
    puVar7 = (uint *)(*(long *)(param_1 + 0x10) + uVar8 * 4);
    uVar9 = *puVar7;
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  param_3[1] = puVar1[1];
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(puVar1 + 3);
  param_3[2] = puVar1[2];
  uVar9 = *puVar7;
  uVar8 = (ulong)uVar9;
  *puVar7 = *(uint *)(*(long *)(param_1 + 0x10) + uVar8 * 4);
  uVar4 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(uint *)(param_1 + 0x34) = uVar4;
  if (uVar9 != uVar4) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + (ulong)uVar4 * 0x20);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + uVar8 * 0x20);
    puVar2[1] = puVar1[1];
    *puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
    puVar2[2] = puVar1[2];
    lVar5 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar5 + uVar8 * 4) =
         *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x34) * 4);
    puVar7 = (uint *)(*(long *)(param_1 + 8) + uVar8 * 0x20);
    uVar8 = (ulong)*puVar7;
    uVar8 = (uVar8 | *(long *)(puVar7 + 2) << 0x20) + (uVar8 << 0x20 ^ 0xffffffffffffffff);
    uVar8 = uVar8 ^ uVar8 >> 0x16;
    uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
    uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
    uVar8 = uVar8 ^ uVar8 >> 0xf;
    uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
    puVar7 = (uint *)(*(long *)(param_1 + 0x18) +
                     (ulong)(*(int *)(param_1 + 0x24) - 1U & ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8))
                     * 4);
    uVar4 = *puVar7;
    if (*puVar7 != *(uint *)(param_1 + 0x34)) {
      do {
        uVar6 = uVar4;
        uVar4 = *(uint *)(lVar5 + (ulong)uVar6 * 4);
      } while (uVar4 != *(uint *)(param_1 + 0x34));
      puVar7 = (uint *)(lVar5 + (ulong)uVar6 * 4);
    }
    *puVar7 = uVar9;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return 1;
}


