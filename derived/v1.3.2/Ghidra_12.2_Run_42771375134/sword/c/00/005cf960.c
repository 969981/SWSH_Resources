/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cf960; name: FUN_005cf960
 */


void FUN_005cf960(long *param_1,char *param_2,char *param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  param_1[2] = 0;
  param_1[3] = param_5;
  *param_1 = (long)(PTR_DAT_02714168 + 0x10);
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if (param_5 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[3] = lVar2;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    param_1[4] = (long)param_2;
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_2[lVar3] != '\0');
    param_1[5] = lVar3;
    param_1[7] = 0;
    param_1[8] = param_1[8] | 1;
  }
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_5;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (param_5 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[10] = lVar2;
  }
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    param_1[0xb] = (long)param_3;
    lVar2 = 0;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_3[lVar3] != '\0');
    param_1[0xc] = lVar3;
    param_1[0xe] = 0;
    param_1[0xf] = param_1[0xf] | 1;
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = param_4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  uVar1 = FUN_005c3550(param_2);
  *(undefined4 *)(param_1 + 9) = uVar1;
  return;
}


