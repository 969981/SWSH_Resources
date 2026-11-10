/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008007e0; name: FUN_008007e0
 */


void FUN_008007e0(byte *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  byte *__dest;
  
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  std::string::resize((ulong)param_1,(char)param_3[1] + (char)param_2[1] + (char)param_4[1]);
  __dest = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    __dest = param_1 + 1;
  }
  memcpy(__dest,(void *)*param_2,param_2[1]);
  lVar1 = param_2[1];
  memcpy(__dest + lVar1,(void *)*param_3,param_3[1]);
  memcpy(__dest + lVar1 + param_3[1],(void *)*param_4,param_4[1]);
  return;
}


