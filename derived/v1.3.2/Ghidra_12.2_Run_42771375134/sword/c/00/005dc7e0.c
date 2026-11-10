/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005dc7e0; name: FUN_005dc7e0
 */


void FUN_005dc7e0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  
  param_1[4] = 0;
  puVar1 = PTR_DAT_027141e8;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(puVar1 + 0xa0);
  param_1[2] = (long)(puVar1 + 0xd8);
  param_1[3] = (long)(puVar1 + 0x108);
  FUN_005bf710(param_1 + 6);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = param_2;
  param_1[0xb] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[10] = lVar2;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  if (param_2 == 0) {
    lVar2 = FUN_005bc740();
    if (lVar2 == 0) {
      lVar2 = FUN_005bc6f0();
    }
    else {
      lVar2 = FUN_005bc740();
    }
    param_1[0x11] = lVar2;
  }
  puVar1 = PTR_DAT_02714078;
  param_1[4] = (long)param_1;
  param_1[5] = *(long *)puVar1;
  return;
}


