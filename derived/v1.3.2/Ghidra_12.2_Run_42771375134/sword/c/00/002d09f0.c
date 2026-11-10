/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d09f0; name: FUN_002d09f0
 */


undefined8 FUN_002d09f0(long param_1,long *param_2)

{
  long *plVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  lVar11 = *param_2;
  uVar8 = lVar11 + (lVar11 << 0x20 ^ 0xffffffffffffffffU);
  uVar8 = uVar8 ^ uVar8 >> 0x16;
  uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
  uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
  uVar8 = uVar8 ^ uVar8 >> 0xf;
  uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
  lVar10 = *(long *)(param_1 + 0x18);
  puVar12 = (uint *)(lVar10 + (ulong)(*(int *)(param_1 + 0x24) - 1U &
                                     ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) * 4);
  uVar7 = *puVar12;
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    plVar1 = (long *)(lVar4 + (ulong)uVar7 * 0x10);
    puVar2 = (uint *)(lVar5 + (ulong)uVar7 * 4);
    uVar6 = *puVar2;
    if (*plVar1 == lVar11) {
      *puVar12 = uVar6;
      uVar6 = *(int *)(param_1 + 0x34) - 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x34) = uVar6;
      if (uVar7 != uVar6) {
        plVar3 = (long *)(lVar4 + (ulong)uVar6 * 0x10);
        lVar11 = *plVar3;
        lVar4 = plVar3[1];
        *plVar1 = lVar11;
        plVar1[1] = lVar4;
        uVar8 = lVar11 + (lVar11 << 0x20 ^ 0xffffffffffffffffU);
        uVar8 = uVar8 ^ uVar8 >> 0x16;
        *puVar2 = *(uint *)(lVar5 + (ulong)uVar6 * 4);
        uVar8 = uVar8 + (uVar8 << 0xd ^ 0xffffffffffffffff);
        uVar8 = (uVar8 ^ uVar8 >> 8) * 9;
        uVar8 = uVar8 ^ uVar8 >> 0xf;
        uVar8 = uVar8 + (uVar8 << 0x1b ^ 0xffffffffffffffff);
        puVar12 = (uint *)(lVar10 + (ulong)(*(int *)(param_1 + 0x24) - 1U &
                                           ((uint)(uVar8 >> 0x1f) ^ (uint)uVar8)) * 4);
        uVar6 = *puVar12;
        if (*puVar12 != *(uint *)(param_1 + 0x34)) {
          do {
            uVar9 = uVar6;
            uVar6 = *(uint *)(lVar5 + (ulong)uVar9 * 4);
          } while (uVar6 != *(uint *)(param_1 + 0x34));
          puVar12 = (uint *)(lVar5 + (ulong)uVar9 * 4);
        }
        *puVar12 = uVar7;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      return 1;
    }
    puVar12 = puVar2;
    uVar7 = uVar6;
  } while (uVar6 != 0xffffffff);
  return 0;
}


