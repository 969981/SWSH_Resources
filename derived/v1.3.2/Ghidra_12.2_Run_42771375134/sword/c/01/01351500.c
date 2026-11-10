/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01351500; name: FUN_01351500
 */


void FUN_01351500(long *param_1)

{
  undefined *puVar1;
  
  FUN_01311a80();
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar1 = PTR_DAT_027284d0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  param_1[0x15] = 0;
  return;
}


