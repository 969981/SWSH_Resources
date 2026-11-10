/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0020b1e0; name: FUN_0020b1e0
 */


void FUN_0020b1e0(long *param_1,void *param_2,undefined4 *param_3)

{
  memcpy(param_2,param_1 + 1,0x30);
  *param_3 = (int)param_1[7];
  param_3[1] = *(undefined4 *)((long)param_1 + 0x3c);
  param_3[2] = (int)param_1[8];
  param_3[3] = *(undefined4 *)((long)param_1 + 0x44);
  param_3[4] = (int)param_1[9];
  param_3[5] = *(undefined4 *)((long)param_1 + 0x4c);
  param_3[6] = (int)param_1[10];
                    /* WARNING: Could not recover jumptable at 0x0020b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


