/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e018d0; name: FUN_00e018d0
 */


void FUN_00e018d0(long *param_1)

{
  undefined *puVar1;
  
  FUN_006c5c60();
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_0271eee8;
  param_1[0x12] = 0;
  param_1[0x18] = 0;
  param_1[0x1e] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x30] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


