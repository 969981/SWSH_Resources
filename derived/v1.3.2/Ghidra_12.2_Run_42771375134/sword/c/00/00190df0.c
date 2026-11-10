/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00190df0; name: FUN_00190df0
 */


void FUN_00190df0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = param_3;
  puVar1 = PTR_DAT_02710f88;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


