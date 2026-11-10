/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a9b200; name: FUN_00a9b200
 */


void FUN_00a9b200(long *param_1,long *param_2)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02719718 + 0x10);
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[2] = lVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


