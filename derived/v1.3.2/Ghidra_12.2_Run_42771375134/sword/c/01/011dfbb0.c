/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011dfbb0; name: FUN_011dfbb0
 */


void FUN_011dfbb0(long *param_1)

{
  undefined *puVar1;
  
  FUN_011e1620(param_1,3);
  puVar1 = PTR_DAT_02725b48;
  *(undefined1 *)((long)param_1 + 0x6c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 200);
  return;
}


