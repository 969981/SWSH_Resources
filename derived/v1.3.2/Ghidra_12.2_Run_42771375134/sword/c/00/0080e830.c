/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080e830; name: FUN_0080e830
 */


void FUN_0080e830(long *param_1,long param_2,int param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716f88;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = param_2;
  if (param_4 < 1) {
    param_4 = param_3;
  }
  *(int *)(param_1 + 2) = param_3;
  *(int *)((long)param_1 + 0x14) = param_4;
  return;
}


