/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe2d50; name: FUN_00fe2d50
 */


void FUN_00fe2d50(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff9400();
  *(undefined1 *)(param_1 + 0xbe) = 0;
  puVar1 = PTR_DAT_02723170;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[9] = (long)(puVar1 + 0xa8);
  param_1[10] = (long)(puVar1 + 0xe8);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0xba] = 0;
  return;
}


