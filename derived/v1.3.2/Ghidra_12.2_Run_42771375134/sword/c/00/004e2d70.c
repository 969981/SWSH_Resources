/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e2d70; name: FUN_004e2d70
 */


void FUN_004e2d70(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713618;
  *(undefined1 *)((long)param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(byte *)((long)param_1 + 0x6c) = *(byte *)((long)param_1 + 0x6c) & 0xf8 | 4;
  return;
}


