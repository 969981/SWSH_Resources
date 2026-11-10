/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d8710; name: FUN_003d8710
 */


undefined8 FUN_003d8710(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  uVar6 = *param_2 & 0xffff | param_2[1] << 0x10;
  uVar6 = uVar6 + (uVar6 << 0xf ^ 0xffffffff);
  uVar6 = (uVar6 ^ uVar6 >> 10) * 9;
  uVar6 = uVar6 ^ uVar6 >> 6;
  uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
  puVar9 = (uint *)(*(long *)(param_1 + 0x18) +
                   (ulong)((uVar6 ^ uVar6 >> 0x10) & *(int *)(param_1 + 0x24) - 1U) * 4);
  uVar6 = *puVar9;
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 8);
  while ((uVar10 = (ulong)uVar6, *(uint *)(lVar8 + uVar10 * 0x10) != *param_2 ||
         (*(uint *)(lVar8 + uVar10 * 0x10 + 4) != param_2[1]))) {
    puVar9 = (uint *)(*(long *)(param_1 + 0x10) + uVar10 * 4);
    uVar6 = *puVar9;
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  *puVar9 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar6 * 4);
  uVar5 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(uint *)(param_1 + 0x34) = uVar5;
  if (uVar6 != uVar5) {
    puVar1 = (undefined8 *)(lVar8 + (ulong)uVar5 * 0x10);
    puVar2 = (undefined8 *)(lVar8 + uVar10 * 0x10);
    uVar4 = puVar1[1];
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    lVar8 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar8 + uVar10 * 4) =
         *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_1 + 0x34) * 4);
    puVar3 = (ushort *)(*(long *)(param_1 + 8) + uVar10 * 0x10);
    uVar5 = (uint)*puVar3 | *(int *)(puVar3 + 2) << 0x10;
    uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
    uVar5 = (uVar5 ^ uVar5 >> 10) * 9;
    uVar5 = uVar5 ^ uVar5 >> 6;
    uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
    puVar9 = (uint *)(*(long *)(param_1 + 0x18) +
                     (ulong)((uVar5 ^ uVar5 >> 0x10) & *(int *)(param_1 + 0x24) - 1U) * 4);
    uVar5 = *puVar9;
    if (*puVar9 != *(uint *)(param_1 + 0x34)) {
      do {
        uVar7 = uVar5;
        uVar5 = *(uint *)(lVar8 + (ulong)uVar7 * 4);
      } while (uVar5 != *(uint *)(param_1 + 0x34));
      puVar9 = (uint *)(lVar8 + (ulong)uVar7 * 4);
    }
    *puVar9 = uVar6;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return 1;
}


