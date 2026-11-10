/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008148c0; name: FUN_008148c0
 */


ulong FUN_008148c0(ulong *param_1,uint param_2)

{
  char *pcVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  ulong extraout_x1;
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  
  switch(param_2 & 7) {
  case 0:
    pcVar1 = (char *)*param_1;
    if ((pcVar1 < (char *)param_1[1]) && (-1 < *pcVar1)) {
      *param_1 = (ulong)(pcVar1 + 1);
    }
    else {
      FUN_0080d3e0(param_1);
      if ((extraout_x1 & 1) == 0) {
        return 0;
      }
    }
    return 1;
  case 1:
    if ((int)param_1[1] - (int)*param_1 < 8) {
      uVar4 = FUN_0080d2f0(param_1,local_28);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    else {
      *param_1 = *param_1 + 8;
    }
    return 1;
  case 2:
    pbVar2 = (byte *)*param_1;
    if (pbVar2 < (byte *)param_1[1]) {
      uVar4 = (ulong)*pbVar2;
      if (-1 < (char)*pbVar2) {
        *param_1 = (ulong)(pbVar2 + 1);
        goto LAB_00814a94;
      }
    }
    else {
      uVar4 = 0;
    }
    uVar4 = FUN_0080d5d0(param_1,uVar4);
    if (-1 < (long)uVar4) {
LAB_00814a94:
      uVar4 = FUN_0080cca0(param_1,uVar4);
      return uVar4;
    }
    break;
  case 3:
    uVar4 = param_1[7];
    *(int *)(param_1 + 7) = (int)uVar4 + -1;
    if (0 < (int)uVar4) {
      do {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 < (byte *)param_1[1]) {
          uVar3 = (uint)*pbVar2;
          if ((char)*pbVar2 < '\0') goto LAB_008149d0;
          *(uint *)(param_1 + 4) = uVar3;
          *param_1 = (ulong)(pbVar2 + 1);
        }
        else {
          uVar3 = 0;
LAB_008149d0:
          uVar3 = FUN_0080d8c0(param_1,uVar3);
          *(uint *)(param_1 + 4) = uVar3;
        }
        if ((uVar3 == 0) || ((uVar3 & 7) == 4)) {
          if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
            *(int *)(param_1 + 7) = (int)param_1[7] + 1;
          }
          return (ulong)(uVar3 == (param_2 & 0xfffffff8 | 4));
        }
        uVar4 = FUN_008148c0(param_1);
      } while ((uVar4 & 1) != 0);
    }
    break;
  default:
    return 0;
  case 5:
    if ((int)param_1[1] - (int)*param_1 < 4) {
      uVar4 = FUN_0080d200(param_1,local_2c);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    else {
      *param_1 = *param_1 + 4;
    }
    return 1;
  }
  return 0;
}


