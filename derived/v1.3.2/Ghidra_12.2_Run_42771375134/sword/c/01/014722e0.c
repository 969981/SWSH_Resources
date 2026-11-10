/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014722e0; name: FUN_014722e0
 */


void FUN_014722e0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_02729f28;
  param_1[0xc] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined4 *)((long)param_1 + 0xb2) = 0xffff;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  return;
}


