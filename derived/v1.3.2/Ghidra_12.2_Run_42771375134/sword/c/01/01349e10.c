/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01349e10; name: FUN_01349e10
 */


void FUN_01349e10(long *param_1)

{
  undefined *puVar1;
  
  FUN_01311a80();
  puVar1 = PTR_DAT_027282d8;
  *param_1 = (long)(PTR_DAT_027282d8 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  param_1[0x17] = DAT_02a6efe8;
  param_1[0x16] = DAT_02a6efe0;
  param_1[0x19] = DAT_02a6efe8;
  param_1[0x18] = DAT_02a6efe0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}


