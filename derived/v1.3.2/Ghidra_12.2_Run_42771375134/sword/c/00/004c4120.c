/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4120; name: FUN_004c4120
 */


void FUN_004c4120(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  undefined *puVar1;
  
  FUN_004c29b0(param_1,param_3,param_4,param_5,param_6);
  puVar1 = PTR_DAT_027134e8;
  param_1[0xb] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  return;
}


