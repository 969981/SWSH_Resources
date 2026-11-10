/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006a9850; name: FUN_006a9850
 */


void FUN_006a9850(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_027150e0 + 0x10;
  param_1[0x22] = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  return;
}


