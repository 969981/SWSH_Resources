/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002d4880; name: FUN_002d4880
 */


void FUN_002d4880(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712058;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 1) = 0x80000000;
  return;
}


