/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01310cc0; name: FUN_01310cc0
 */


void FUN_01310cc0(long *param_1)

{
  undefined *puVar1;
  
  FUN_01311a80();
  puVar1 = PTR_DAT_02727e58;
  *(undefined1 *)((long)param_1 + 0xa1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x78);
  param_1[10] = (long)(puVar1 + 0xb8);
  return;
}


