/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db1950; name: FUN_00db1950
 */


void FUN_00db1950(long *param_1)

{
  undefined *puVar1;
  
  FUN_006d8b50();
  puVar1 = PTR_DAT_0271e7a8;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x31] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  return;
}


