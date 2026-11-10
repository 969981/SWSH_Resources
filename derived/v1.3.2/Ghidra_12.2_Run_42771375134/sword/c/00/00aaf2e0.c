/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aaf2e0; name: FUN_00aaf2e0
 */


void FUN_00aaf2e0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ac5750();
  *(undefined4 *)(param_1 + 0x9b) = 0;
  puVar1 = PTR_DAT_027197d0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[9] = (long)(puVar1 + 0x250);
  param_1[10] = (long)(puVar1 + 0x290);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x97] = 0;
  return;
}


