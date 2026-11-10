/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aabd10; name: FUN_00aabd10
 */


void FUN_00aabd10(long *param_1)

{
  undefined *puVar1;
  
  FUN_00ac5750();
  puVar1 = PTR_DAT_02719778;
  param_1[0x99] = 0x3f8000003f800000;
  *(undefined1 *)((long)param_1 + 0x4c4) = 1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9a] = 0xf3f800000;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  *(undefined2 *)((long)param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined2 *)((long)param_1 + 0x4e4) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0xa0] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x97] = 0;
  param_1[0x9f] = 0;
  param_1[9] = (long)(puVar1 + 0x250);
  param_1[10] = (long)(puVar1 + 0x290);
  *(undefined4 *)(param_1 + 0x9e) = 0xffffffff;
  return;
}


