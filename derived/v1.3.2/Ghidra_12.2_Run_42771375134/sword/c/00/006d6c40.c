/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d6c40; name: FUN_006d6c40
 */


void FUN_006d6c40(long *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  
  FUN_006d4a90(param_1,param_2,param_3 & 1);
  param_1[0x57] = 0;
  puVar1 = PTR_DAT_02715398;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  param_1[0x54] = 0;
  return;
}


