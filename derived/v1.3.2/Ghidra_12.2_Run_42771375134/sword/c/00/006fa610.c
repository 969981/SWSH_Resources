/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fa610; name: FUN_006fa610
 */


void FUN_006fa610(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  
  FUN_006e16c0();
  puVar1 = PTR_DAT_027157e8;
  param_1[0x34] = param_4;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x70);
  param_1[10] = (long)(puVar1 + 0xb0);
  return;
}


