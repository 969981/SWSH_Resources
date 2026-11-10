/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab4a40; name: FUN_00ab4a40
 */


void FUN_00ab4a40(long *param_1,long param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  
  FUN_015f5d10();
  param_1[0x10] = param_2;
  puVar1 = PTR_DAT_027198c8;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = param_3;
  param_1[0x12] = param_4;
  param_1[9] = (long)(puVar1 + 0x60);
  param_1[10] = (long)(puVar1 + 0xa0);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_2 + 0x17a0) = 1;
  return;
}


