/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01046e20; name: FUN_01046e20
 */


void FUN_01046e20(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff9400();
  puVar1 = PTR_DAT_02723970;
  *(undefined2 *)((long)param_1 + 0x5cc) = 0;
  param_1[0xba] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  FUN_0168ad10(param_1 + 0xbc);
  puVar1 = PTR_DAT_027233e0;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0xbc] = (long)(puVar1 + 0x10);
  FUN_01046e90(param_1);
  return;
}


