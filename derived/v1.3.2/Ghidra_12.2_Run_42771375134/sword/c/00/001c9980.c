/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001c9980; name: FUN_001c9980
 */


void FUN_001c9980(long *param_1,long *param_2)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0x30009;
  param_1[2] = 0;
  puVar1 = PTR_DAT_02711070;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[3] = (long)(puVar1 + 0xe0);
  *(int *)(param_1 + 7) = (int)param_2[1];
  param_1[6] = *param_2;
  *(undefined2 *)((long)param_1 + 0x3c) = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0x3e) = *(undefined2 *)((long)param_2 + 0xe);
  param_1[8] = param_2[2];
  *(int *)(param_1 + 9) = (int)param_2[3];
  param_1[8] = (long)param_1;
  return;
}


