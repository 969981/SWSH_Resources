/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00935400; name: FUN_00935400
 */


void FUN_00935400(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_02717dd0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}


