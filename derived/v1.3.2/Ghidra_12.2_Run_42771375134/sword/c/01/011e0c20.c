/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011e0c20; name: FUN_011e0c20
 */


void FUN_011e0c20(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  FUN_011e1620(param_1,4);
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_02725b68;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x13) = param_2;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[9] = (long)(puVar1 + 0x88);
  param_1[10] = (long)(puVar1 + 200);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
}


