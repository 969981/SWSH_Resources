/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d6c170; name: FUN_00d6c170
 */


void FUN_00d6c170(long *param_1)

{
  undefined *puVar1;
  
  FUN_006d86d0(param_1,0x80018380);
  puVar1 = PTR_DAT_0271e2a8;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0x100);
  return;
}


