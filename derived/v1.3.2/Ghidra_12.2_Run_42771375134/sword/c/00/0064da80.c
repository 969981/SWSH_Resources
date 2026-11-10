/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0064da80; name: FUN_0064da80
 */


void FUN_0064da80(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02714a08 + 0x10);
  FUN_005bf710(param_1 + 1);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[0x40a] = (long)(PTR_DAT_02714a10 + 0x10);
  param_1[0x40b] = param_2;
  param_1[0x40d] = 0;
  param_1[0x40c] = 0;
  param_1[0x413] = 0;
  param_1[0x412] = 0;
  param_1[0x411] = 0;
  param_1[0x410] = 0;
  param_1[0x40f] = 0;
  param_1[0x40e] = 0x40;
  if (param_2 == 0) {
    lVar1 = FUN_005bc6f0();
    param_1[0x40b] = lVar1;
  }
  param_1[0x414] = 0;
  *(undefined1 *)(param_1 + 0x415) = 0;
  return;
}


