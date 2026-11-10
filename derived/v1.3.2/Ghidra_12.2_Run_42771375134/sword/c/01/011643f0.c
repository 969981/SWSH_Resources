/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011643f0; name: FUN_011643f0
 */


void FUN_011643f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_02724e88;
  param_1[0xe] = 0;
  param_1[0xf] = -0x293e7a6eea670c1f;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x10] = 0;
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0xffffffff;
  return;
}


