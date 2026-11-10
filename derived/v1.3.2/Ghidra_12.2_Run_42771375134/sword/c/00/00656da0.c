/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00656da0; name: FUN_00656da0
 */


void FUN_00656da0(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = (long)(PTR_DAT_02714b50 + 0x10);
  FUN_005bf710(param_1 + 1);
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  puVar1 = PTR_DAT_02714b58;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0x28;
  param_1[10] = 0;
  param_1[5] = (long)(puVar1 + 0x10);
  param_1[6] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[6] = lVar2;
  }
  puVar1 = PTR_DAT_02714b60;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0x58;
  param_1[0x14] = 0;
  param_1[0xf] = (long)(puVar1 + 0x10);
  param_1[0x10] = param_2;
  if (param_2 == 0) {
    lVar2 = FUN_005bc6f0();
    param_1[0x10] = lVar2;
  }
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x19,0,0x270);
}


