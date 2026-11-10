/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c9fa0; name: FUN_004c9fa0
 */


void FUN_004c9fa0(long *param_1,long param_2,undefined4 param_3,long *param_4)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(PTR_DAT_02713530 + 0x10);
  param_1[4] = param_2;
  param_1[6] = param_4[1];
  param_1[5] = *param_4;
  return;
}


