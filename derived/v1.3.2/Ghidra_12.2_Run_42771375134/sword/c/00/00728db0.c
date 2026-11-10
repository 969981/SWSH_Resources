/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00728db0; name: FUN_00728db0
 */


void FUN_00728db0(long *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  FUN_007299a0(param_1,param_2,1);
  puVar1 = PTR_DAT_02715bb0;
  *(byte *)(param_1 + 8) = param_3 & 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


