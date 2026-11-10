/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029dc60; name: FUN_0029dc60
 */


undefined8 FUN_0029dc60(long param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  lVar4 = *param_2;
  uVar6 = lVar4 + (lVar4 << 0x20 ^ 0xffffffffffffffffU);
  uVar6 = uVar6 ^ uVar6 >> 0x16;
  uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff);
  uVar6 = (uVar6 ^ uVar6 >> 8) * 9;
  uVar6 = uVar6 ^ uVar6 >> 0xf;
  uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff);
  puVar8 = (uint *)(*(long *)(param_1 + 0x18) +
                   (ulong)(*(int *)(param_1 + 0x24) - 1U & ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6)) *
                   4);
  uVar3 = *puVar8;
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 8);
  do {
    puVar1 = (uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 4);
    if (*(long *)(lVar7 + (ulong)uVar3 * 8) == lVar4) {
      *puVar8 = *puVar1;
      uVar2 = *(int *)(param_1 + 0x34) - 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x34) = uVar2;
      if (uVar3 != uVar2) {
        lVar9 = (ulong)uVar3 * 8;
        *(undefined8 *)(lVar7 + lVar9) = *(undefined8 *)(lVar7 + (ulong)uVar2 * 8);
        lVar4 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar4 + (ulong)uVar3 * 4) = *(undefined4 *)(lVar4 + (ulong)uVar2 * 4);
        lVar7 = *(long *)(*(long *)(param_1 + 8) + lVar9);
        uVar6 = lVar7 + (lVar7 << 0x20 ^ 0xffffffffffffffffU);
        uVar6 = uVar6 ^ uVar6 >> 0x16;
        uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff);
        uVar6 = (uVar6 ^ uVar6 >> 8) * 9;
        uVar6 = uVar6 ^ uVar6 >> 0xf;
        uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff);
        puVar8 = (uint *)(*(long *)(param_1 + 0x18) +
                         (ulong)(*(int *)(param_1 + 0x24) - 1U &
                                ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6)) * 4);
        uVar2 = *puVar8;
        if (*puVar8 != *(uint *)(param_1 + 0x34)) {
          do {
            uVar5 = uVar2;
            uVar2 = *(uint *)(lVar4 + (ulong)uVar5 * 4);
          } while (uVar2 != *(uint *)(param_1 + 0x34));
          puVar8 = (uint *)(lVar4 + (ulong)uVar5 * 4);
        }
        *puVar8 = uVar3;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      return 1;
    }
    uVar3 = *puVar1;
    puVar8 = puVar1;
  } while (uVar3 != 0xffffffff);
  return 0;
}


