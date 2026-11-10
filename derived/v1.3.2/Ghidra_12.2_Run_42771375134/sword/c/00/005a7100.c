/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a7100; name: FUN_005a7100
 */


void FUN_005a7100(long param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  iVar2 = *(int *)(&UNK_020f1c94 + (long)*(int *)(param_1 + 0x14) * 4 + (long)(int)uVar1 * 0x14);
  *(int *)(param_1 + 0x18) = iVar2;
  if (7 < uVar1) {
    fVar3 = *(float *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x28);
    *(float *)(param_1 + 0x24) = fVar3;
    goto joined_r0x005a716c;
  }
  fVar3 = (float)iVar2;
  switch(uVar1) {
  case 0:
    *(int *)(param_1 + 0x1c) = (int)fVar3;
    fVar4 = DAT_01d4c080;
    break;
  case 1:
    iVar2 = (int)(fVar3 + fVar3 + -1.0);
    *(int *)(param_1 + 0x1c) = iVar2;
    fVar3 = (float)iVar2;
    fVar4 = DAT_01d4bf88;
    break;
  case 2:
    fVar3 = fVar3 * DAT_01d4c27c;
  case 4:
switchD_005a714c_caseD_4:
    *(float *)(param_1 + 0x20) = fVar3;
    *(int *)(param_1 + 0x1c) = (int)fVar3;
    iVar2 = *(int *)(param_1 + 0x28);
    *(float *)(param_1 + 0x24) = fVar3;
joined_r0x005a716c:
    if (iVar2 != 1) {
      return;
    }
    goto LAB_005a71c0;
  case 3:
    fVar3 = ldexpf(1.0,iVar2);
    fVar3 = fVar3 + fVar3 + -1.0;
    goto switchD_005a714c_caseD_4;
  case 5:
    if ((int)fVar3 < 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)(&DAT_01d4b7a0 + (long)(int)fVar3 * 4);
    }
    *(int *)(param_1 + 0x1c) = (int)(fVar3 + DAT_01d4c64c);
    goto LAB_005a71ac;
  default:
    fVar4 = DAT_01d4c27c;
  }
  fVar3 = fVar3 * fVar4;
LAB_005a71ac:
  *(float *)(param_1 + 0x20) = fVar3;
  *(float *)(param_1 + 0x24) = fVar3;
  if (*(int *)(param_1 + 0x28) == 1) {
LAB_005a71c0:
    if (*(int *)(param_1 + 0x10) != 5) {
      *(float *)(param_1 + 0x24) = fVar3 + *(float *)(param_1 + 0x2c);
      return;
    }
  }
  return;
}


