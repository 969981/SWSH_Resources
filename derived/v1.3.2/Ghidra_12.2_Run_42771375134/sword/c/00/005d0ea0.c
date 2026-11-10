/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005d0ea0; name: FUN_005d0ea0
 */


void FUN_005d0ea0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714170 + 0x10);
  FUN_005bf710(param_1 + 1);
  puVar1 = PTR_DAT_02714178;
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
  puVar1 = PTR_DAT_02714180;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 8;
  param_1[0x12] = 0;
  param_1[0xd] = (long)(puVar1 + 0x10);
  param_1[0xe] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0xe] = lVar2;
    return;
  }
  return;
}


