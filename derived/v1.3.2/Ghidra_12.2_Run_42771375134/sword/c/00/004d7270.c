/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7270; name: FUN_004d7270
 */


void FUN_004d7270(float param_1,long param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_2 + 0x5f) == '\0') {
    if (*(float *)(param_2 + 0x58) == param_1) goto LAB_004d73c4;
    if (*(int *)(param_2 + 0x50) == 2) {
      iVar3 = (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) * *(int *)(param_2 + 0x3c);
      iVar1 = iVar3 + 0x3ff;
      if (-1 < iVar3) {
        iVar1 = iVar3;
      }
      iVar1 = *(int *)(param_2 + 0x34) + (iVar1 >> 10);
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      *(int *)(param_2 + 0x34) = iVar1;
    }
    fVar4 = param_1 * DAT_01d4bdb0;
    fVar5 = *(float *)(param_2 + 0x54);
    *(undefined4 *)(param_2 + 0x3c) = 0;
    fVar4 = exp2f(fVar4);
    iVar3 = (int)(fVar4 * DAT_01d4c1a8 * fVar5 + 0.5);
    iVar1 = -1;
    if (param_1 <= 0.0) {
      iVar1 = 1;
    }
    if (iVar3 != 0) {
      iVar1 = iVar3;
    }
    *(int *)(param_2 + 0x38) = iVar1;
    *(float *)(param_2 + 0x58) = param_1;
    if ((param_3 & 1) == 0) {
      *(int *)(param_2 + 0x34) = iVar1;
    }
    if (*(int *)(param_2 + 0x34) != iVar1) goto LAB_004d73d4;
  }
  else {
    fVar5 = *(float *)(param_2 + 0x54);
    fVar4 = exp2f(param_1 * DAT_01d4bdb0);
    fVar5 = DAT_01d4c1a8 * fVar5;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
    iVar3 = (int)(fVar4 * fVar5 + 0.5);
    iVar1 = -1;
    if (param_1 <= 0.0) {
      iVar1 = 1;
    }
    if (iVar3 != 0) {
      iVar1 = iVar3;
    }
    *(int *)(param_2 + 0x34) = iVar1;
    *(int *)(param_2 + 0x38) = iVar1;
    *(float *)(param_2 + 0x58) = param_1;
    *(undefined1 *)(param_2 + 0x5f) = 0;
LAB_004d73c4:
    iVar1 = *(int *)(param_2 + 0x38);
    if (*(int *)(param_2 + 0x34) != iVar1) {
LAB_004d73d4:
      uVar2 = 2;
      goto LAB_004d73e0;
    }
  }
  if (iVar1 == 0x10000) {
    *(undefined4 *)(param_2 + 0x50) = 0;
    return;
  }
  uVar2 = 1;
LAB_004d73e0:
  *(undefined4 *)(param_2 + 0x50) = uVar2;
  return;
}


