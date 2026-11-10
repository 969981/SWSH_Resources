/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006881c0; name: FUN_006881c0
 */


void FUN_006881c0(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02714e80 + 0x10);
  FUN_005bf710(param_1 + 1);
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[3] = 0;
  param_1[4] = 0x100000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar1 = FUN_005bc740();
  if (lVar1 == 0) {
    lVar1 = FUN_005bc6f0();
  }
  else {
    lVar1 = FUN_005bc740();
  }
  param_1[6] = lVar1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar1 = FUN_005bc740();
  if (lVar1 == 0) {
    lVar1 = FUN_005bc6f0();
  }
  else {
    lVar1 = FUN_005bc740();
  }
  param_1[0xc] = lVar1;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined2 *)(param_1 + 0x17) = 0x100;
                    /* WARNING: Subroutine does not return */
  memset((void *)((long)param_1 + 0xba),0,0x10040);
}


