/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003d7220; name: FUN_003d7220
 */


undefined8 FUN_003d7220(long param_1,long *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  uVar3 = ((uint)param_2[1] & 0x3fffc) << 0xe | (uint)*param_2 >> 2 & 0xffff;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  puVar7 = (uint *)(*(long *)(param_1 + 0x18) +
                   (ulong)((uVar3 ^ uVar3 >> 0x10) & *(int *)(param_1 + 0x24) - 1U) * 4);
  uVar3 = *puVar7;
  if (uVar3 == 0xffffffff) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 8);
  while ((uVar8 = (ulong)uVar3, *(long *)(lVar6 + (ulong)uVar3 * 0x18) != *param_2 ||
         (*(long *)(lVar6 + uVar8 * 0x18 + 8) != param_2[1]))) {
    puVar7 = (uint *)(*(long *)(param_1 + 0x10) + uVar8 * 4);
    uVar3 = *puVar7;
    if (uVar3 == 0xffffffff) {
      return 0;
    }
  }
  *puVar7 = *(uint *)(*(long *)(param_1 + 0x10) + (ulong)uVar3 * 4);
  uVar2 = *(int *)(param_1 + 0x34) - 1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  *(uint *)(param_1 + 0x34) = uVar2;
  if (uVar3 != uVar2) {
    puVar4 = (undefined8 *)(lVar6 + (ulong)uVar2 * 0x18);
    puVar1 = (undefined8 *)(lVar6 + uVar8 * 0x18);
    puVar1[1] = puVar4[1];
    *puVar1 = *puVar4;
    puVar1[2] = puVar4[2];
    lVar6 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar6 + uVar8 * 4) =
         *(undefined4 *)(lVar6 + (ulong)*(uint *)(param_1 + 0x34) * 4);
    puVar7 = (uint *)(*(long *)(param_1 + 8) + uVar8 * 0x18);
    uVar2 = (puVar7[2] & 0x3fffc) << 0xe | *puVar7 >> 2 & 0xffff;
    uVar2 = uVar2 + (uVar2 << 0xf ^ 0xffffffff);
    uVar2 = (uVar2 ^ uVar2 >> 10) * 9;
    uVar2 = uVar2 ^ uVar2 >> 6;
    uVar2 = uVar2 + (uVar2 << 0xb ^ 0xffffffff);
    puVar7 = (uint *)(*(long *)(param_1 + 0x18) +
                     (ulong)((uVar2 ^ uVar2 >> 0x10) & *(int *)(param_1 + 0x24) - 1U) * 4);
    uVar2 = *puVar7;
    if (*puVar7 != *(uint *)(param_1 + 0x34)) {
      do {
        uVar5 = uVar2;
        uVar2 = *(uint *)(lVar6 + (ulong)uVar5 * 4);
      } while (uVar2 != *(uint *)(param_1 + 0x34));
      puVar7 = (uint *)(lVar6 + (ulong)uVar5 * 4);
    }
    *puVar7 = uVar3;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  return 1;
}


