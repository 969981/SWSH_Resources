/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0152a980; name: FUN_0152a980
 */


void FUN_0152a980(long param_1,uint param_2,uint param_3,int param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  
  if ((0x96 < param_2) || (2 < (int)param_3)) {
    return;
  }
  lVar6 = param_1 + (long)(int)param_2 * 0xb0;
  *(undefined1 *)(lVar6 + (ulong)param_3 + 0x60) = 1;
  iVar5 = *(int *)(lVar6 + 0xe8);
  *(undefined1 *)(lVar6 + 0x61) = 1;
  param_1 = param_1 + (long)(int)param_2 * 0xb0;
  if (iVar5 == 0) {
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[3];
    *(undefined8 *)(param_1 + 0x78) = param_5[2];
    *(undefined8 *)(param_1 + 0x80) = uVar3;
    *(undefined8 *)(param_1 + 0x68) = uVar1;
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    uVar1 = param_5[4];
    uVar3 = param_5[5];
    uVar2 = param_5[6];
    uVar4 = param_5[7];
    *(int *)(param_1 + 0xec) = param_4;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = uVar4;
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    *(undefined8 *)(param_1 + 0x90) = uVar3;
  }
  else {
    uVar1 = *param_5;
    uVar2 = param_5[1];
    uVar3 = param_5[3];
    *(undefined8 *)(param_1 + 0xb8) = param_5[2];
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    uVar1 = param_5[4];
    uVar2 = param_5[5];
    uVar3 = param_5[7];
    *(undefined8 *)(param_1 + 0xd8) = param_5[6];
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
    *(undefined8 *)(param_1 + 200) = uVar1;
    *(undefined8 *)(param_1 + 0xd0) = uVar2;
    if (*(int *)(param_1 + 0xec) < param_4) {
      *(int *)(param_1 + 0xec) = param_4;
    }
    if (0x3e6 < iVar5) {
      return;
    }
  }
  *(int *)(lVar6 + 0xe8) = iVar5 + 1;
  return;
}


