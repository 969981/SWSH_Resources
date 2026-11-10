/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066fe10; name: FUN_0066fe10
 */


void FUN_0066fe10(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02714d48 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  if (param_2 == 0) {
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    param_1[3] = lVar1;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    param_1[0xf] = 0;
    param_1[9] = lVar1;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x10] = 0;
    lVar1 = FUN_005bc740();
    if (lVar1 == 0) {
      lVar1 = FUN_005bc6f0();
    }
    else {
      lVar1 = FUN_005bc740();
    }
    param_1[0xf] = lVar1;
  }
  else {
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[9] = param_2;
    param_1[10] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0xf] = param_2;
    param_1[0x10] = 0;
  }
  *(undefined4 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xb4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  return;
}


