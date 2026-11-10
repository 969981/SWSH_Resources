/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f5920; name: FUN_005f5920
 */


undefined8
FUN_005f5920(undefined8 param_1,long *param_2,char *param_3,long param_4,int *param_5,
            undefined8 *param_6,undefined1 *param_7)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  size_t __n;
  size_t sVar6;
  
  *param_7 = 0;
  param_5[0x1e] = 0;
  param_5[0x1a] = 0;
  param_5[0x1b] = 0;
  param_5[0x1c] = 0;
  param_5[0x1d] = 0;
  param_5[0x16] = 0;
  param_5[0x17] = 0;
  param_5[0x18] = 0;
  param_5[0x19] = 0;
  param_5[0] = 0;
  param_5[1] = 0;
  param_5[0x12] = 0;
  param_5[0x13] = 0;
  param_5[0x14] = 0;
  param_5[0x15] = 0;
  param_5[0xe] = 0;
  param_5[0xf] = 0;
  param_5[0x10] = 0;
  param_5[0x11] = 0;
  param_5[10] = 0;
  param_5[0xb] = 0;
  param_5[0xc] = 0;
  param_5[0xd] = 0;
  param_5[6] = 0;
  param_5[7] = 0;
  param_5[8] = 0;
  param_5[9] = 0;
  param_5[2] = 0;
  param_5[3] = 0;
  param_5[4] = 0;
  param_5[5] = 0;
  *(undefined4 *)(param_6 + 2) = 0;
  *param_6 = 0;
  param_6[1] = 0;
  iVar2 = (**(code **)(*param_2 + 0xf8))(param_2,1);
  if (iVar2 == 0x20534444) {
    uVar3 = (**(code **)(*param_2 + 0xa8))(param_2,param_5,0x7c,1);
    if ((uVar3 & 1) == 0) {
      FUN_005c47b0(param_4 + 0x10,"Failed to read DDS header : ");
      if (param_3 == (char *)0x0) {
        return 0;
      }
      if (*param_3 == '\0') {
        return 0;
      }
      sVar6 = 0;
      do {
        __n = sVar6 + 1;
        lVar4 = sVar6 + 1;
        sVar6 = __n;
      } while (param_3[lVar4] != '\0');
    }
    else if (*param_5 == 0x7c) {
      if ((*(byte *)(param_5 + 0x13) >> 2 & 1) == 0) {
        return 1;
      }
      if (param_5[0x14] != 0x30315844) {
        return 1;
      }
      *param_7 = 1;
      uVar3 = (**(code **)(*param_2 + 0xa8))(param_2,param_6,0x14,1);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
      FUN_005c47b0(param_4 + 0x10,"Failed to read DDS header DXT10 : ");
      if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
        return 0;
      }
      sVar6 = 0;
      do {
        __n = sVar6 + 1;
        lVar4 = sVar6 + 1;
        sVar6 = __n;
      } while (param_3[lVar4] != '\0');
    }
    else {
      FUN_005c47b0(param_4 + 0x10,"Header Size is not 124  : ");
      if (param_3 == (char *)0x0) {
        return 0;
      }
      if (*param_3 == '\0') {
        return 0;
      }
      sVar6 = 0;
      do {
        __n = sVar6 + 1;
        lVar4 = sVar6 + 1;
        sVar6 = __n;
      } while (param_3[lVar4] != '\0');
    }
  }
  else {
    FUN_005c47b0(param_4 + 0x10,"This is not valid DDS file : ");
    if (param_3 == (char *)0x0) {
      return 0;
    }
    if (*param_3 == '\0') {
      return 0;
    }
    sVar6 = 0;
    do {
      __n = sVar6 + 1;
      lVar4 = sVar6 + 1;
      sVar6 = __n;
    } while (param_3[lVar4] != '\0');
  }
  lVar4 = *(long *)(param_4 + 0x20);
  uVar3 = lVar4 + __n;
  if (*(ulong *)(param_4 + 0x30) <= uVar3) {
    uVar5 = *(ulong *)(param_4 + 0x30) * 2;
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar1 = *(long *)(param_4 + 0x28) + lVar4 + __n + 1;
    }
    FUN_005c5e00(param_4 + 0x10,uVar1,1);
    lVar4 = *(long *)(param_4 + 0x20);
    uVar3 = lVar4 + __n;
  }
  memcpy((void *)(*(long *)(param_4 + 0x18) + lVar4),param_3,__n);
  *(size_t *)(param_4 + 0x20) = *(long *)(param_4 + 0x20) + __n;
  *(undefined1 *)(*(long *)(param_4 + 0x18) + uVar3) = 0;
  return 0;
}


