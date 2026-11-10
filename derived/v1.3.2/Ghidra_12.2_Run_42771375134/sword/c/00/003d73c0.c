/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d73c0; name: FUN_003d73c0
 */


undefined8 FUN_003d73c0(long param_1,long *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  lVar5 = *param_2;
  uVar8 = lVar5 + (lVar5 << 0x20 ^ 0xffffffffffffffffU);
  uVar8 = uVar8 ^ uVar8 >> 0x16;
  uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
  uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
  uVar8 = uVar8 ^ uVar8 >> 0xf;
  uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
  puVar10 = (uint *)(*(long *)(param_1 + 0x18) +
                    (ulong)(*(int *)(param_1 + 0x24) - 1U & ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) *
                    4);
  uVar4 = *puVar10;
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 8);
  do {
    puVar1 = (uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar4 * 4);
    if (*(long *)(lVar9 + (ulong)uVar4 * 0x18) == lVar5) {
      *puVar10 = *puVar1;
      uVar3 = *(int *)(param_1 + 0x34) - 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x34) = uVar3;
      if (uVar4 != uVar3) {
        puVar6 = (undefined8 *)(lVar9 + (ulong)uVar3 * 0x18);
        lVar11 = (ulong)uVar4 * 0x18;
        puVar2 = (undefined8 *)(lVar9 + lVar11);
        *puVar2 = *puVar6;
        puVar2[2] = puVar6[2];
        puVar2[1] = puVar6[1];
        lVar5 = *(long *)(param_1 + 0x10);
        *(undefined4 *)(lVar5 + (ulong)uVar4 * 4) =
             *(undefined4 *)(lVar5 + (ulong)*(uint *)(param_1 + 0x34) * 4);
        lVar9 = *(long *)(*(long *)(param_1 + 8) + lVar11);
        uVar8 = lVar9 + (lVar9 << 0x20 ^ 0xffffffffffffffffU);
        uVar8 = uVar8 ^ uVar8 >> 0x16;
        uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
        uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
        uVar8 = uVar8 ^ uVar8 >> 0xf;
        uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
        puVar10 = (uint *)(*(long *)(param_1 + 0x18) +
                          (ulong)(*(int *)(param_1 + 0x24) - 1U &
                                 ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) * 4);
        uVar3 = *puVar10;
        if (*puVar10 != *(uint *)(param_1 + 0x34)) {
          do {
            uVar7 = uVar3;
            uVar3 = *(uint *)(lVar5 + (ulong)uVar7 * 4);
          } while (uVar3 != *(uint *)(param_1 + 0x34));
          puVar10 = (uint *)(lVar5 + (ulong)uVar7 * 4);
        }
        *puVar10 = uVar4;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      return 1;
    }
    uVar4 = *puVar1;
    puVar10 = puVar1;
  } while (uVar4 != 0xffffffff);
  return 0;
}


