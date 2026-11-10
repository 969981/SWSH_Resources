/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003a06b0; name: FUN_003a06b0
 */


void FUN_003a06b0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar1 + (ulong)param_3 * 4);
  if (uVar4 == param_4) {
    uVar8 = *(undefined4 *)(lVar2 + (ulong)param_4 * 4);
LAB_003a0708:
    *(undefined4 *)(lVar1 + (ulong)param_3 * 4) = uVar8;
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    do {
      uVar6 = uVar4;
      uVar4 = *(uint *)(lVar2 + (ulong)uVar6 * 4);
    } while (uVar4 != param_4);
    uVar8 = *(undefined4 *)(lVar2 + (ulong)param_4 * 4);
    if (uVar6 == 0xffffffff) goto LAB_003a0708;
    *(undefined4 *)(lVar2 + (ulong)uVar6 * 4) = uVar8;
    iVar3 = *(int *)(param_1 + 8);
  }
  uVar4 = iVar3 - 1;
  if (uVar4 == param_4) {
    *(uint *)(param_1 + 8) = uVar4;
    return;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  puVar10 = (uint *)(lVar9 + (ulong)uVar4 * 0x18);
  uVar13 = (ulong)*puVar10;
  uVar13 = (uVar13 | *(long *)(puVar10 + 2) << 0x20) + (uVar13 << 0x20 ^ 0xffffffffffffffff);
  uVar13 = uVar13 ^ uVar13 >> 0x16;
  uVar13 = uVar13 + (uVar13 << 0xd ^ 0xffffffffffffffff);
  uVar13 = (uVar13 ^ uVar13 >> 8) * 9;
  uVar13 = uVar13 ^ uVar13 >> 0xf;
  uVar13 = uVar13 + (uVar13 << 0x1b ^ 0xffffffffffffffff);
  uVar11 = (ulong)(*(uint *)(param_1 + 4) & ((uint)(uVar13 >> 0x1f) ^ (uint)uVar13));
  uVar6 = *(uint *)(lVar1 + uVar11 * 4);
  uVar13 = (ulong)uVar4;
  if (uVar6 == uVar4) {
    uVar8 = *(undefined4 *)(lVar2 + uVar13 * 4);
  }
  else {
    do {
      uVar12 = uVar6;
      uVar6 = *(uint *)(lVar2 + (ulong)uVar12 * 4);
    } while (uVar6 != uVar4);
    uVar8 = *(undefined4 *)(lVar2 + uVar13 * 4);
    if (uVar12 != 0xffffffff) {
      *(undefined4 *)(lVar2 + (ulong)uVar12 * 4) = uVar8;
      goto LAB_003a07b4;
    }
  }
  *(undefined4 *)(lVar1 + uVar11 * 4) = uVar8;
LAB_003a07b4:
  puVar7 = (undefined8 *)(lVar9 + uVar13 * 0x18);
  puVar5 = (undefined8 *)(lVar9 + (ulong)param_4 * 0x18);
  puVar5[2] = puVar7[2];
  puVar5[1] = puVar7[1];
  *puVar5 = *puVar7;
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_4 * 4) =
       *(undefined4 *)(lVar1 + uVar11 * 4);
  *(uint *)(lVar1 + uVar11 * 4) = param_4;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return;
}


