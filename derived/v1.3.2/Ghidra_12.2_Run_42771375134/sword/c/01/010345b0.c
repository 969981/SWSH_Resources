/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010345b0; name: FUN_010345b0
 */


void FUN_010345b0(long *param_1,char *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  size_t __n;
  
  FUN_010348f0(param_1,param_3);
  puVar1 = PTR_DAT_02723870;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  __n = strlen(param_2);
  memcpy(param_1 + 2,param_2,__n);
  *(undefined4 *)(param_1 + 6) = param_4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


