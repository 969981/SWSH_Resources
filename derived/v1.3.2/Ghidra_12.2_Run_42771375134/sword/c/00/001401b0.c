/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001401b0; name: FUN_001401b0
 */


void FUN_001401b0(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar5 = *(uint *)(lVar2 + (ulong)param_4 * 4);
  if (uVar5 == param_5) {
    uVar8 = *(undefined4 *)(lVar3 + (ulong)param_5 * 4);
LAB_001401f0:
    *(undefined4 *)(lVar2 + (ulong)param_4 * 4) = uVar8;
    iVar4 = (int)param_1[6];
  }
  else {
    do {
      uVar6 = uVar5;
      uVar5 = *(uint *)(lVar3 + (ulong)uVar6 * 4);
    } while (uVar5 != param_5);
    uVar8 = *(undefined4 *)(lVar3 + (ulong)param_5 * 4);
    if (uVar6 == 0x3fffffff) goto LAB_001401f0;
    *(undefined4 *)(lVar3 + (ulong)uVar6 * 4) = uVar8;
    iVar4 = (int)param_1[6];
  }
  uVar5 = iVar4 - 1;
  if (uVar5 == param_5) {
    *(uint *)(param_1 + 6) = uVar5;
    return;
  }
  uVar7 = (ulong)param_5;
  lVar9 = param_1[4];
  puVar1 = (uint *)(lVar9 + (ulong)uVar5 * 8);
  uVar10 = (ulong)uVar5;
  uVar6 = *puVar1 | puVar1[1] << 0x10;
  uVar6 = uVar6 + (uVar6 << 0xf ^ 0xffffffff);
  uVar6 = (uVar6 ^ (int)uVar6 >> 10) * 9;
  uVar6 = uVar6 ^ (int)uVar6 >> 6;
  uVar6 = uVar6 + (uVar6 << 0xb ^ 0xffffffff);
  uVar11 = (ulong)((uVar6 ^ (int)uVar6 >> 0x10) & *(uint *)(param_1 + 7));
  uVar6 = *(uint *)(lVar2 + uVar11 * 4);
  if (uVar6 == uVar5) {
    uVar8 = *(undefined4 *)(lVar3 + uVar10 * 4);
  }
  else {
    do {
      uVar12 = uVar6;
      uVar6 = *(uint *)(lVar3 + (ulong)uVar12 * 4);
    } while (uVar6 != uVar5);
    uVar8 = *(undefined4 *)(lVar3 + uVar10 * 4);
    if (uVar12 != 0x3fffffff) {
      *(undefined4 *)(lVar3 + (ulong)uVar12 * 4) = uVar8;
      goto LAB_001402a4;
    }
  }
  *(undefined4 *)(lVar2 + uVar11 * 4) = uVar8;
LAB_001402a4:
  *(undefined8 *)(lVar9 + uVar7 * 8) = *(undefined8 *)(lVar9 + uVar10 * 8);
  *(undefined1 *)(param_1[5] + uVar7) = *(undefined1 *)(param_1[5] + uVar10);
  lVar2 = *param_1;
  *(undefined4 *)(param_1[1] + uVar7 * 4) = *(undefined4 *)(lVar2 + uVar11 * 4);
  *(uint *)(lVar2 + uVar11 * 4) = param_5;
  *(int *)(param_1 + 6) = (int)param_1[6] + -1;
  return;
}


