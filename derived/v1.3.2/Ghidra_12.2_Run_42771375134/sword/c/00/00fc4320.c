/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fc4320; name: FUN_00fc4320
 */


void FUN_00fc4320(long *param_1)

{
  undefined *puVar1;
  
  FUN_00e53420();
  puVar1 = PTR_DAT_02722ed8;
  *(undefined2 *)(param_1 + 0xc5) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x248);
  param_1[10] = (long)(puVar1 + 0x288);
  FUN_0121ad80(param_1 + 0xc6);
  *(undefined1 *)(param_1 + 0xbd) = 0;
  return;
}


