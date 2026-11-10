/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005e8510; name: FUN_005e8510
 */


void FUN_005e8510(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714308 + 0x10);
  FUN_005bf710(param_1 + 1);
  puVar1 = PTR_DAT_02714310;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  param_1[3] = (long)(puVar1 + 0x10);
  param_1[4] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[4] = lVar2;
  }
  puVar1 = PTR_DAT_02714318;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0x30;
  param_1[0x12] = 0;
  param_1[0xd] = (long)(puVar1 + 0x10);
  param_1[0xe] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xe] = lVar2;
  }
  puVar1 = PTR_DAT_02714320;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 8;
  param_1[0x1c] = 0;
  param_1[0x17] = (long)(puVar1 + 0x10);
  param_1[0x18] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x18] = lVar2;
  }
  puVar1 = PTR_DAT_02714328;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 1;
  param_1[0x26] = 0;
  param_1[0x21] = (long)(puVar1 + 0x10);
  param_1[0x22] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x22] = lVar2;
  }
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((long)param_1 + 0x15c) = 0;
  FUN_006964c0(param_1 + 0x3c,0);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return;
}


