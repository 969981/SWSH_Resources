/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002f6ca0; name: FUN_002f6ca0
 */


undefined8 FUN_002f6ca0(long param_1,ushort *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint *puVar11;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  uVar7 = *param_2;
  uVar8 = ((uint)uVar7 << 0xf ^ 0xffffffff) + (uint)uVar7;
  uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
  uVar8 = uVar8 ^ uVar8 >> 6;
  uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
  lVar10 = *(long *)(param_1 + 0x18);
  puVar11 = (uint *)(lVar10 + (ulong)((uVar8 ^ uVar8 >> 0x10) & *(int *)(param_1 + 0x24) - 1U) * 4);
  uVar8 = *puVar11;
  if (uVar8 == 0xffffffff) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  do {
    puVar1 = (ushort *)(lVar4 + (ulong)uVar8 * 0x10);
    puVar2 = (uint *)(lVar5 + (ulong)uVar8 * 4);
    uVar6 = *puVar2;
    if (*puVar1 == uVar7) {
      *puVar11 = uVar6;
      uVar6 = *(int *)(param_1 + 0x34) - 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      *(uint *)(param_1 + 0x34) = uVar6;
      if (uVar8 != uVar6) {
        puVar3 = (ushort *)(lVar4 + (ulong)uVar6 * 0x10);
        uVar7 = *puVar3;
        *puVar1 = uVar7;
        *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(puVar3 + 4);
        uVar9 = ((uint)uVar7 << 0xf ^ 0xffffffff) + (uint)uVar7;
        uVar9 = (uVar9 ^ uVar9 >> 10) * 9;
        uVar9 = uVar9 ^ uVar9 >> 6;
        *puVar2 = *(uint *)(lVar5 + (ulong)uVar6 * 4);
        uVar9 = uVar9 + (uVar9 << 0xb ^ 0xffffffff);
        puVar11 = (uint *)(lVar10 + (ulong)((uVar9 ^ uVar9 >> 0x10) & *(int *)(param_1 + 0x24) - 1U)
                                    * 4);
        uVar6 = *puVar11;
        if (*puVar11 != *(uint *)(param_1 + 0x34)) {
          do {
            uVar9 = uVar6;
            uVar6 = *(uint *)(lVar5 + (ulong)uVar9 * 4);
          } while (uVar6 != *(uint *)(param_1 + 0x34));
          puVar11 = (uint *)(lVar5 + (ulong)uVar9 * 4);
        }
        *puVar11 = uVar8;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      return 1;
    }
    puVar11 = puVar2;
    uVar8 = uVar6;
  } while (uVar6 != 0xffffffff);
  return 0;
}


