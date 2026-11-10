/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0024f900; name: FUN_0024f900
 */


bool FUN_0024f900(long param_1,uint param_2,uint param_3,uint param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  char local_34 [4];
  
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    if (param_3 == 0) {
      return false;
    }
    if (param_4 == 0) {
      return false;
    }
    if (*(int *)(param_1 + 0x38) - 1U <= param_3) {
      return false;
    }
    if (*(int *)(param_1 + 0x3c) - 1U <= param_4) {
      return false;
    }
  }
  uVar4 = FUN_002500a0(param_1,param_2,param_3,param_4,param_5,local_34);
  if ((uVar4 & 1) != 0) {
    return true;
  }
  if (local_34[0] == '\0') {
    return false;
  }
  lVar6 = *(long *)(param_1 + 0x50);
  iVar2 = *(short *)(lVar6 + (ulong)param_2 * 4) * 2;
  if ((param_3 == 0) || (*(int *)(param_1 + 0x38) - 1U <= param_3)) {
    bVar3 = false;
    uVar7 = 0;
  }
  else {
    uVar7 = (iVar2 - *(short *)(lVar6 + (ulong)(*(int *)(param_1 + 0x3c) + param_2) * 4)) -
            (int)*(short *)(lVar6 + (ulong)(param_2 - *(int *)(param_1 + 0x3c)) * 4);
    bVar3 = true;
  }
  if ((param_4 == 0) || (*(int *)(param_1 + 0x3c) - 1U <= param_4)) {
    if (!bVar3) {
      return true;
    }
    uVar5 = 0;
    uVar1 = uVar7;
  }
  else {
    uVar5 = (iVar2 - *(short *)(lVar6 + (ulong)(param_2 + 1) * 4)) -
            (int)*(short *)(lVar6 + (ulong)(param_2 - 1) * 4);
    uVar1 = uVar5 ^ uVar7;
  }
  if (-1 < (int)uVar1) {
    return false;
  }
  bVar3 = (float)(int)(uVar5 + uVar7) < -*(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x58) <= 0.0) {
    bVar3 = *(float *)(param_1 + 0x5c) < (float)(int)(uVar5 + uVar7);
  }
  return bVar3;
}


