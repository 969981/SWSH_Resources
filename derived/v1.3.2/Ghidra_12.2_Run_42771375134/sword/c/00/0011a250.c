/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0011a250; name: FUN_0011a250
 */


void FUN_0011a250(long param_1,long param_2,uint *param_3,uint param_4,uint param_5,ulong param_6,
                 ulong param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = *(long *)(param_1 + 0xd0);
  uVar5 = param_6 >> 6 & 0x3ffffff;
  uVar4 = param_7 >> 6 & 0x3ffffff;
  uVar7 = *param_3 >> 6;
  if (uVar7 == 0x3ffffff) {
    lVar6 = *(long *)(param_1 + 0x18);
  }
  else {
    iVar1 = *(int *)(lVar3 + uVar4 * 4);
    lVar8 = *(long *)(param_1 + 0xf0);
    iVar2 = *(int *)(lVar3 + uVar5 * 4);
    lVar6 = *(long *)(param_1 + 0x18);
    do {
      lVar9 = (ulong)uVar7 * 4;
      *(int *)(lVar3 + lVar9) = iVar2 + iVar1 + 1 + *(int *)(lVar3 + lVar9);
      *(uint *)(lVar8 + lVar9) = param_4;
      uVar7 = *(uint *)(lVar6 + (ulong)uVar7 * 0x20 + 8) >> 6;
    } while (uVar7 != 0x3ffffff);
  }
  *(int *)(lVar3 + uVar4 * 4) = *(int *)(lVar3 + uVar5 * 4) + 1;
  uVar7 = *param_3;
  *(uint *)(lVar6 + (ulong)(*(uint *)(param_2 + 4) >> 6) * 0x20 + 8) = uVar7;
  *(undefined4 *)(lVar6 + (ulong)(uVar7 >> 6) * 0x20 + 0xc) = *(undefined4 *)(param_2 + 4);
  *(uint *)(param_2 + 4) = param_3[1];
  *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + param_3[2];
  *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + param_3[3];
  lVar3 = *(long *)(param_1 + 0x68);
  *(int *)(lVar3 + (ulong)param_4 * 4) =
       *(int *)(lVar3 + (ulong)param_4 * 4) + *(int *)(lVar3 + (ulong)param_5 * 4);
  if (*(uint *)(param_2 + 0x1c) == 0xffffffff) {
    *(uint *)(param_2 + 0x14) = param_3[5];
    uVar7 = param_3[5];
  }
  else {
    *(uint *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_2 + 0x1c) * 0x10 + 8) = param_3[5];
    uVar7 = param_3[5];
  }
  if (uVar7 != 0xffffffff) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar7 * 0x10 + 0xc) =
         *(undefined4 *)(param_2 + 0x1c);
    *(uint *)(param_2 + 0x1c) = param_3[7];
  }
  *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + param_3[9];
  param_3[5] = 0xffffffff;
  param_3[7] = 0xffffffff;
  param_3[9] = 0;
  if (*(uint *)(param_2 + 0x20) == 0xffffffff) {
    *(uint *)(param_2 + 0x18) = param_3[6];
    uVar7 = param_3[6];
  }
  else {
    *(uint *)(*(long *)(param_1 + 0x38) + (ulong)*(uint *)(param_2 + 0x20) * 0x10 + 8) = param_3[6];
    uVar7 = param_3[6];
  }
  if (uVar7 != 0xffffffff) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + (ulong)uVar7 * 0x10 + 0xc) =
         *(undefined4 *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = param_3[8];
  }
  *(uint *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + param_3[10];
  param_3[6] = 0xffffffff;
  param_3[8] = 0xffffffff;
  param_3[10] = 0;
  param_3[0] = 0xffffffc0;
  param_3[1] = 0xffffffc0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(lVar3 + (ulong)param_5 * 4) = 0;
  if (param_3[4] != 0xffffffff) {
    lVar6 = *(long *)(param_1 + 0x120);
    lVar3 = *(long *)(param_1 + 0x58) + (ulong)param_5 * 0x2c;
    uVar7 = *(uint *)(lVar6 + (ulong)(*(int *)(param_1 + 0x128) - 1) * 4);
    *(undefined4 *)(*(long *)(param_1 + 0x58) + (ulong)uVar7 * 0x2c + 0x10) =
         *(undefined4 *)(lVar3 + 0x10);
    *(uint *)(lVar6 + (ulong)*(uint *)(lVar3 + 0x10) * 4) = uVar7;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
    *(undefined4 *)(lVar3 + 0x10) = 0xffffffff;
    lVar3 = (ulong)(param_5 >> 5) * 4;
    *(uint *)(*(long *)(param_1 + 0x100) + lVar3) =
         *(uint *)(*(long *)(param_1 + 0x100) + lVar3) &
         (1 << (ulong)(param_5 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


