/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0135cdd0; name: FUN_0135cdd0
 */


void FUN_0135cdd0(long *param_1)

{
  undefined *puVar1;
  
  FUN_01311a80();
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar1 = PTR_DAT_027287d0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x90);
  param_1[10] = (long)(puVar1 + 0xd0);
  param_1[0x16] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x20] = param_1[1];
  param_1[0x21] = 0;
  param_1[0x25] = param_1[1];
  param_1[0x26] = 0;
  FUN_01360410(param_1 + 0x1c,0x5a);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((long)param_1 + 0x174) = 0;
  *(undefined8 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  return;
}


