/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00730830; name: FUN_00730830
 */


void FUN_00730830(long *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  param_3 = param_3 & 1;
  FUN_00728db0(param_1,param_2,param_3);
  param_1[10] = (long)&LAB_00730d00;
  param_1[0xb] = (long)&LAB_00730d20;
  *(byte *)(param_1 + 0xe) = param_3;
  param_1[0xc] = (long)&LAB_00730d30;
  param_1[0xd] = (long)&LAB_00730d40;
  puVar1 = PTR_DAT_02715bd8;
  *(byte *)(param_1 + 0x1a) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


