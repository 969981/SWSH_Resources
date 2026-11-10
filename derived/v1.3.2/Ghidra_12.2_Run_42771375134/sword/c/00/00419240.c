/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419240; name: FUN_00419240
 */


void FUN_00419240(long *param_1)

{
  undefined *puVar1;
  
  FUN_0040ad90();
  puVar1 = PTR_DAT_02712bd0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = (long)(puVar1 + 0x140);
  param_1[5] = (long)(puVar1 + 0x168);
  return;
}


