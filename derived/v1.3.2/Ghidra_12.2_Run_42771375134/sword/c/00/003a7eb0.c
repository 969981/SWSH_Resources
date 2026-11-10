/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a7eb0; name: FUN_003a7eb0
 */


long FUN_003a7eb0(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  
  puVar8 = (uint *)*param_1;
  if ((param_2 & 1) == 0) {
    if (puVar8 != (uint *)0x0) {
      lVar5 = param_1[2];
      puVar8 = (uint *)(*(long *)(lVar5 + 0x10) + (ulong)*puVar8 * 4);
      uVar3 = *puVar8;
      if (uVar3 != 0xffffffff) {
        *param_1 = (long)puVar8;
        goto LAB_003a7ff8;
      }
      *param_1 = 0;
      uVar6 = (ulong)*(uint *)(param_1 + 1);
      uVar3 = *(uint *)(lVar5 + 0x24);
      if (uVar3 <= *(uint *)(param_1 + 1)) {
        return 0;
      }
      lVar9 = *(long *)(lVar5 + 0x18);
      puVar8 = (uint *)(lVar9 + uVar6 * 4);
      while (iVar7 = (int)uVar6, *(int *)(lVar9 + uVar6 * 4) == -1) {
        uVar4 = iVar7 + 1;
        uVar6 = (ulong)uVar4;
        puVar8 = puVar8 + 1;
        *(uint *)(param_1 + 1) = uVar4;
        if (uVar3 <= uVar4) {
          return 0;
        }
      }
      goto LAB_003a8110;
    }
  }
  else if (puVar8 != (uint *)0x0) {
    lVar5 = param_1[2];
    uVar3 = *puVar8;
    uVar6 = (ulong)uVar3;
    *puVar8 = *(uint *)(*(long *)(lVar5 + 0x10) + uVar6 * 4);
    uVar4 = *(int *)(lVar5 + 0x34) - 1;
    *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
    *(uint *)(lVar5 + 0x34) = uVar4;
    if (uVar3 != uVar4) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 8) + uVar6 * 0x20);
      puVar2 = (undefined8 *)(*(long *)(lVar5 + 8) + (ulong)uVar4 * 0x20);
      puVar1[1] = puVar2[1];
      *puVar1 = *puVar2;
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 3);
      puVar1[2] = puVar2[2];
      lVar9 = *(long *)(lVar5 + 0x10);
      *(undefined4 *)(lVar9 + uVar6 * 4) =
           *(undefined4 *)(lVar9 + (ulong)*(uint *)(lVar5 + 0x34) * 4);
      puVar8 = (uint *)(*(long *)(lVar5 + 8) + uVar6 * 0x20);
      uVar6 = (ulong)*puVar8;
      uVar6 = (uVar6 | *(long *)(puVar8 + 2) << 0x20) + (uVar6 << 0x20 ^ 0xffffffffffffffff);
      uVar6 = uVar6 ^ uVar6 >> 0x16;
      uVar6 = uVar6 + (uVar6 << 0xd ^ 0xffffffffffffffff);
      uVar6 = (uVar6 ^ uVar6 >> 8) * 9;
      uVar6 = uVar6 ^ uVar6 >> 0xf;
      uVar6 = uVar6 + (uVar6 << 0x1b ^ 0xffffffffffffffff);
      puVar8 = (uint *)(*(long *)(lVar5 + 0x18) +
                       (ulong)(*(int *)(lVar5 + 0x24) - 1U & ((uint)(uVar6 >> 0x1f) ^ (uint)uVar6))
                       * 4);
      uVar4 = *puVar8;
      if (*puVar8 != *(uint *)(lVar5 + 0x34)) {
        do {
          uVar10 = uVar4;
          uVar4 = *(uint *)(lVar9 + (ulong)uVar10 * 4);
        } while (uVar4 != *(uint *)(lVar5 + 0x34));
        puVar8 = (uint *)(lVar9 + (ulong)uVar10 * 4);
      }
      *puVar8 = uVar3;
      puVar8 = (uint *)*param_1;
    }
    *(int *)(lVar5 + 0x2c) = *(int *)(lVar5 + 0x2c) + -1;
    uVar3 = *puVar8;
    if (uVar3 != 0xffffffff) {
      lVar5 = param_1[2];
LAB_003a7ff8:
      return *(long *)(lVar5 + 8) + (ulong)uVar3 * 0x20;
    }
    lVar5 = param_1[2];
    *param_1 = 0;
    uVar6 = (ulong)*(uint *)(param_1 + 1);
    uVar3 = *(uint *)(lVar5 + 0x24);
    if (uVar3 <= *(uint *)(param_1 + 1)) {
      return 0;
    }
    lVar9 = *(long *)(lVar5 + 0x18);
    puVar8 = (uint *)(lVar9 + uVar6 * 4);
    while (iVar7 = (int)uVar6, *(int *)(lVar9 + uVar6 * 4) == -1) {
      uVar4 = iVar7 + 1;
      uVar6 = (ulong)uVar4;
      puVar8 = puVar8 + 1;
      *(uint *)(param_1 + 1) = uVar4;
      if (uVar3 <= uVar4) {
        return 0;
      }
    }
LAB_003a8110:
    *param_1 = (long)puVar8;
    *(int *)(param_1 + 1) = iVar7 + 1;
    return *(long *)(lVar5 + 8) + (ulong)*puVar8 * 0x20;
  }
  lVar5 = param_1[2];
  *param_1 = 0;
  uVar6 = (ulong)*(uint *)(param_1 + 1);
  uVar3 = *(uint *)(lVar5 + 0x24);
  if (uVar3 <= *(uint *)(param_1 + 1)) {
    return 0;
  }
  lVar9 = *(long *)(lVar5 + 0x18);
  puVar8 = (uint *)(lVar9 + uVar6 * 4);
  do {
    if (*(int *)(lVar9 + uVar6 * 4) != -1) {
      *param_1 = (long)puVar8;
      *(int *)(param_1 + 1) = (int)uVar6 + 1;
      return *(long *)(lVar5 + 8) + (ulong)*puVar8 * 0x20;
    }
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulong)uVar4;
    puVar8 = puVar8 + 1;
    *(uint *)(param_1 + 1) = uVar4;
  } while (uVar4 < uVar3);
  return 0;
}


