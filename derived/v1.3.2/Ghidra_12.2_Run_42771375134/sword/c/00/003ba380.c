/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba380; name: FUN_003ba380
 */


void FUN_003ba380(long *param_1,long param_2,undefined8 *param_3)

{
  undefined *puVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  puVar1 = PTR_DAT_02712768;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = param_2;
  param_1[10] = (long)param_3;
  *param_3 = param_1;
  return;
}


