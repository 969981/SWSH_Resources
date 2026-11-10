/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00de1670; name: FUN_00de1670
 */


void FUN_00de1670(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ddccd0();
  *(undefined1 *)(param_1 + 0xcc) = 0;
  puVar1 = PTR_DAT_0271ec38;
  param_1[0xc9] = param_1[0x17];
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x248);
  param_1[10] = (long)(puVar1 + 0x288);
  param_1[200] = param_1[0x16];
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xcb] = param_1[0x15];
  param_1[0xca] = param_1[0x14];
  return;
}


