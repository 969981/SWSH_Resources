/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002519e0; name: FUN_002519e0
 */


uint FUN_002519e0(long param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint local_8 [2];
  
  lVar2 = *(long *)(param_1 + 0x10);
  param_2 = param_3 * -3 + param_2;
  if (param_2 == 2) {
    if (param_4 < *(int *)(lVar2 + 0x38) - 1U) {
      if (param_5 == 0) {
        lVar4 = 0;
        uVar3 = 0;
        if (*(int *)(lVar2 + 0x3c) == 1) goto LAB_00251ac8;
      }
      else {
        local_8[0] = param_3 * 2 - 1;
        lVar4 = 1;
        uVar3 = 1;
        if (*(int *)(lVar2 + 0x3c) - 1U <= param_5) goto LAB_00251ac8;
      }
      param_3 = param_3 << 1;
LAB_00251b88:
      local_8[lVar4] = param_3;
      uVar3 = (int)lVar4 + 1;
      goto LAB_00251ac8;
    }
  }
  else if (param_2 == 1) {
    if ((param_4 < *(int *)(lVar2 + 0x38) - 1U) && (param_5 < *(int *)(lVar2 + 0x3c) - 1U)) {
      local_8[0] = param_3 << 1;
      local_8[1] = param_3 << 1 | 1;
      uVar3 = 2;
      goto LAB_00251ac8;
    }
  }
  else if ((param_2 == 0) && (param_5 < *(int *)(lVar2 + 0x3c) - 1U)) {
    if (param_4 == 0) {
      lVar4 = 0;
      uVar3 = 0;
      if (*(int *)(lVar2 + 0x38) == 1) goto LAB_00251ac8;
    }
    else {
      uVar3 = param_3 - *(int *)(lVar2 + 0x3c);
      local_8[0] = (uVar3 * 2 | 1) -
                   (uint)(*(byte *)(*(long *)(lVar2 + 0x50) + (ulong)uVar3 * 4 + 2) >> 7);
      lVar4 = 1;
      uVar3 = 1;
      if (*(int *)(lVar2 + 0x38) - 1U <= param_4) goto LAB_00251ac8;
    }
    param_3 = (uint)(*(byte *)(*(long *)(lVar2 + 0x50) + (ulong)param_3 * 4 + 2) >> 7) |
              param_3 << 1;
    goto LAB_00251b88;
  }
  uVar3 = 0;
LAB_00251ac8:
  lVar4 = *(long *)(lVar2 + 0x50) + (ulong)(local_8[0] >> 1) * 4;
  pbVar1 = (byte *)(lVar4 + 2);
  if ((local_8[0] & 1) != 0) {
    pbVar1 = (byte *)(lVar4 + 3);
  }
  if (uVar3 < 2) {
    if ((*pbVar1 & 0x7f) == 0x7f) {
      local_8[0] = 0xffffffff;
    }
  }
  else if ((*pbVar1 & 0x7f) == 0x7f) {
    lVar2 = *(long *)(lVar2 + 0x50) + (ulong)(local_8[1] >> 1) * 4;
    pbVar1 = (byte *)(lVar2 + 2);
    if ((local_8[1] & 1) != 0) {
      pbVar1 = (byte *)(lVar2 + 3);
    }
    if (((*pbVar1 ^ 0xff) & 0x7f) == 0) {
      local_8[1] = 0xffffffff;
    }
    return local_8[1];
  }
  return local_8[0];
}


