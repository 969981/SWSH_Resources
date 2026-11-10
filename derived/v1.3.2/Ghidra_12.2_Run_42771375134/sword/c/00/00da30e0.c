/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da30e0; name: FUN_00da30e0
 */


void FUN_00da30e0(long param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulong local_38;
  
  if (*(uint *)(param_1 + 0x80) == param_2) {
    return;
  }
  if (param_2 < 8) {
    uVar2 = *(undefined4 *)(&DAT_01d4db60 + (long)(int)param_2 * 4);
  }
  else {
    uVar2 = 0;
  }
  if (*(uint *)(param_1 + 0x80) == 7) {
    if (param_2 < 8) {
      uVar5 = *(undefined4 *)(&DAT_01d4dc20 + (long)(int)param_2 * 4);
    }
    else {
      uVar5 = 0;
    }
    local_38 = FUN_0069d0f0(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271e748);
    if ((local_38 & 0xff) != 0) {
      FUN_0069d120(*(undefined8 *)(param_1 + 0x78),&local_38,uVar2);
    }
    local_38 = FUN_0069d160(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271e748);
    if ((local_38 & 0xff) != 0) {
      FUN_0069d190(uVar5,*(undefined8 *)(param_1 + 0x78),&local_38);
    }
    *(undefined4 *)(param_1 + 0x88) = uVar5;
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
  }
  else {
    local_38 = FUN_0069d0f0(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271e748);
    if ((local_38 & 0xff) != 0) {
      FUN_0069d120(*(undefined8 *)(param_1 + 0x78),&local_38,uVar2);
    }
    if (param_2 < 8) {
      fVar3 = *(float *)(&DAT_01d4dc20 + (long)(int)param_2 * 4);
    }
    else {
      fVar3 = 0.0;
    }
    fVar4 = *(float *)(param_1 + 0x88);
    *(float *)(param_1 + 0x8c) = fVar3;
    if (6.0 <= fVar4) {
      fVar4 = fVar4 + -6.0;
      *(float *)(param_1 + 0x88) = fVar4;
    }
    if (fVar3 < fVar4) {
      *(float *)(param_1 + 0x8c) = fVar3 + 6.0;
    }
    local_38 = FUN_0069d0f0(*(undefined8 *)(param_1 + 0x78),PTR_DAT_0271e750);
    if ((local_38 & 0xff) == 0) {
      iVar1 = 5;
    }
    else {
      iVar1 = FUN_0069d130(*(undefined8 *)(param_1 + 0x78),&local_38);
      if (iVar1 < 2) {
        iVar1 = 1;
      }
    }
    *(float *)(param_1 + 0x84) =
         (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)) / (float)iVar1;
  }
  *(uint *)(param_1 + 0x80) = param_2;
  return;
}


