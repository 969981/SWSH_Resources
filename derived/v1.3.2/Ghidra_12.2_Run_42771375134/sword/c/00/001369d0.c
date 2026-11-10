/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001369d0; name: FUN_001369d0
 */


void FUN_001369d0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

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
  ulong uVar10;
  ushort *puVar11;
  ulong uVar12;
  uint uVar13;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  uVar4 = *(uint *)(lVar1 + (ulong)param_4 * 4);
  if (uVar4 == param_5) {
    uVar8 = *(undefined4 *)(lVar2 + (ulong)param_5 * 4);
LAB_00136a28:
    *(undefined4 *)(lVar1 + (ulong)param_4 * 4) = uVar8;
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    do {
      uVar6 = uVar4;
      uVar4 = *(uint *)(lVar2 + (ulong)uVar6 * 4);
    } while (uVar4 != param_5);
    uVar8 = *(undefined4 *)(lVar2 + (ulong)param_5 * 4);
    if (uVar6 == 0xffffffff) goto LAB_00136a28;
    *(undefined4 *)(lVar2 + (ulong)uVar6 * 4) = uVar8;
    iVar3 = *(int *)(param_1 + 8);
  }
  uVar4 = iVar3 - 1;
  if (uVar4 == param_5) {
    *(uint *)(param_1 + 8) = uVar4;
    return;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  puVar11 = (ushort *)(lVar9 + (ulong)uVar4 * 0xc);
  uVar6 = (uint)*puVar11 | *(int *)(puVar11 + 2) << 0x10;
  uVar6 = uVar6 + (uVar6 << 0xf ^ 0xffffffff);
  uVar6 = (uVar6 ^ uVar6 >> 10) * 9;
  uVar6 = uVar6 ^ uVar6 >> 6;
  uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
  uVar12 = (ulong)((uVar6 ^ uVar6 >> 0x10) & *(uint *)(param_1 + 4));
  uVar10 = (ulong)uVar4;
  uVar6 = *(uint *)(lVar1 + uVar12 * 4);
  if (uVar6 == uVar4) {
    uVar8 = *(undefined4 *)(lVar2 + uVar10 * 4);
  }
  else {
    do {
      uVar13 = uVar6;
      uVar6 = *(uint *)(lVar2 + (ulong)uVar13 * 4);
    } while (uVar6 != uVar4);
    uVar8 = *(undefined4 *)(lVar2 + uVar10 * 4);
    if (uVar13 != 0xffffffff) {
      *(undefined4 *)(lVar2 + (ulong)uVar13 * 4) = uVar8;
      goto LAB_00136ac4;
    }
  }
  *(undefined4 *)(lVar1 + uVar12 * 4) = uVar8;
LAB_00136ac4:
  puVar7 = (undefined8 *)(lVar9 + uVar10 * 0xc);
  puVar5 = (undefined8 *)(lVar9 + (ulong)param_5 * 0xc);
  *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar7 + 1);
  *puVar5 = *puVar7;
  lVar1 = *(long *)(param_1 + 0x10);
  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)param_5 * 4) =
       *(undefined4 *)(lVar1 + uVar12 * 4);
  *(uint *)(lVar1 + uVar12 * 4) = param_5;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  return;
}


