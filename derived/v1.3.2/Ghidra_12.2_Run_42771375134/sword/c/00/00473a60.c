/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473a60; name: FUN_00473a60
 */


void FUN_00473a60(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027131e0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 8) = 0xffff;
  param_1[10] = 0;
  param_1[0xb] = 0x7fffffff00000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  return;
}


