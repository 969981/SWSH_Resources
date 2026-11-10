/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008db7a0; name: FUN_008db7a0
 */


void FUN_008db7a0(long *param_1,undefined2 param_2)

{
  undefined *puVar1;
  
  *(undefined2 *)(param_1 + 1) = param_2;
  puVar1 = PTR_DAT_02717bf0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


