/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d46b0; name: FUN_006d46b0
 */


void FUN_006d46b0(long *param_1)

{
  undefined *puVar1;
  
  FUN_006d4a40();
  puVar1 = PTR_DAT_02715358;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x68);
  param_1[10] = (long)(puVar1 + 0xa8);
  param_1[0x26] = param_1[0x26] | 0x20;
  return;
}


