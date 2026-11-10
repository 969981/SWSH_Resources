/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0053ddb0; name: FUN_0053ddb0
 */


void FUN_0053ddb0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00545e70();
  puVar1 = PTR_DAT_02713b50;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  param_1[8] = 0;
                    /* WARNING: Subroutine does not return */
  memset(param_1 + 0x11,0,0x530);
}


